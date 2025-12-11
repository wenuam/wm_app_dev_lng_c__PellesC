/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : MDI sample with dialogs as MDI children.                       *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#define WIN32_LEAN_AND_MEAN  /* speed up compilations */
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include "main.h"

// Beginning of a DIALOGEX resource in memory.
typedef struct {
    WORD dlgVer;
    WORD signature;
    DWORD helpID;
    DWORD exStyle;
    DWORD style;
    WORD cDlgItems;
    short x;
    short y;
    short cx;
    short cy;
    // more data follows...
} MYDLGTEMPLATEEX, *PMYDLGTEMPLATEEX;

// Simplify setting focus to a dialog control.
#define SetDlgItemFocus(hwnd,idCtl)  FORWARD_WM_NEXTDLGCTL((hwnd), GetDlgItem((hwnd),(idCtl)), TRUE, PostMessage)

/** Prototypes **************************************************************/

static LRESULT WINAPI MainWndProc(HWND, UINT, WPARAM, LPARAM);
static BOOL Main_OnCreate(HWND hwnd, CREATESTRUCT *);
static void Main_OnSize(HWND, UINT, int, int);
static void Main_OnCommand(HWND, int, HWND, UINT);
static void Main_OnDestroy(HWND);
static LRESULT WINAPI AboutDlgProc(HWND, UINT, WPARAM, LPARAM);
static LRESULT CALLBACK ChildWndProc(HWND, UINT, WPARAM, LPARAM);
static BOOL Child_OnCreate(HWND, CREATESTRUCT *);
static void Child_OnSize(HWND, UINT, int, int);
static void Child_OnMDIActivate(HWND, BOOL, HWND, HWND);
static BOOL CALLBACK ChildDlgProc(HWND, UINT, WPARAM, LPARAM);

/** Global variables ********************************************************/

static HANDLE ghInstance;
static HWND ghwndMDIClient;
static HWND ghwndActiveMDIChild;

/****************************************************************************
 *                                                                          *
 * Function: WinMain                                                        *
 *                                                                          *
 * Purpose : Initialize the application.  Register a window class,          *
 *           create and display the main window and enter the               *
 *           message loop.                                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    HWND hwnd;
    MSG msg;

    ghInstance = hInstance;

    // Initialize common controls. Also needed for MANIFEST's.
    InitCommonControls();

    // Register the window classes.
    if (!hPrevInstance)
    {
        WNDCLASS wc;

        // Register the main window class.
        wc.lpszClassName = _T("MDIDlgsClass");
        wc.lpfnWndProc = MainWndProc;
        wc.style = 0;
        wc.hInstance = ghInstance;
        wc.hIcon = LoadIcon(ghInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
        wc.hCursor = LoadCursor(NULL, IDC_ARROW);
        wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
        wc.lpszMenuName = MAKEINTRESOURCE(IDR_MNU_MAIN);
        wc.cbClsExtra = 0;
        wc.cbWndExtra = 0;

        if (!RegisterClass(&wc))
            return 1;

        // Register the MDI child window class (dialog container).
        wc.lpszClassName = _T("MDIChildClass");
        wc.lpfnWndProc = ChildWndProc;
        wc.style = CS_VREDRAW|CS_HREDRAW;
        wc.hInstance = ghInstance;
        wc.hIcon = LoadIcon(ghInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
        wc.hCursor = LoadCursor(NULL, IDC_ARROW);
        wc.hbrBackground = NULL;
        wc.lpszMenuName = NULL;
        wc.cbClsExtra = 0;
        wc.cbWndExtra = 0;

        if (!RegisterClass(&wc))
            return 1;
    }

    // Create the main window.
    hwnd = CreateWindow(_T("MDIDlgsClass"),
        _T("MDIDlgs Program"),
        WS_OVERLAPPEDWINDOW|WS_HSCROLL|WS_VSCROLL,
        0,
        0,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        NULL,
        NULL,
        ghInstance,
        NULL
    );
    if (!hwnd) return 1;

    // Show and paint the main window.
    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Pump messages until we are done.
    while (GetMessage(&msg, NULL, 0, 0))
    {
        // Check for special MDI messages.
        if (TranslateMDISysAccel(ghwndMDIClient, &msg))
            ;
        // Check for special dialog messages.
        else if (ghwndActiveMDIChild && IsDialogMessage(GetWindow(ghwndActiveMDIChild, GW_CHILD), &msg))
            ;
        else
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return msg.wParam;
}

/****************************************************************************
 *                                                                          *
 * Function: MainWndProc                                                    *
 *                                                                          *
 * Purpose : Process application messages.                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static LRESULT CALLBACK MainWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
        HANDLE_MSG(hwnd, WM_CREATE, Main_OnCreate);
        HANDLE_MSG(hwnd, WM_SIZE, Main_OnSize);
        HANDLE_MSG(hwnd, WM_COMMAND, Main_OnCommand);
        HANDLE_MSG(hwnd, WM_DESTROY, Main_OnDestroy);
        default:
            return DefFrameProc(hwnd, ghwndMDIClient, msg, wParam, lParam);
    }
}

/****************************************************************************
 *                                                                          *
 * Function: Main_OnCreate                                                  *
 *                                                                          *
 * Purpose : Process a WM_CREATE message.                                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static BOOL Main_OnCreate(HWND hwnd, CREATESTRUCT *pcs)
{
    CLIENTCREATESTRUCT ccs;

    // Create the MDI client window.
    ccs.hWindowMenu = GetSubMenu(GetMenu(hwnd), 0);
    ccs.idFirstChild = 10000;
    ghwndMDIClient = CreateWindow(_T("MDIClient"), NULL, WS_CHILD|WS_VISIBLE|WS_CLIPCHILDREN,
        0, 0, 0, 0, hwnd, (HMENU)1, ghInstance, &ccs);

    return ghwndMDIClient != NULL;
}

/****************************************************************************
 *                                                                          *
 * Function: Main_OnSize                                                    *
 *                                                                          *
 * Purpose : Process a WM_SIZE message.                                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void Main_OnSize(HWND hwnd, UINT state, int cx, int cy)
{
    // Resize the MDI client to fit within the main window client area.
    SetWindowPos(ghwndMDIClient, NULL, 0, 0, cx, cy, SWP_NOZORDER);
}

/****************************************************************************
 *                                                                          *
 * Function: Main_OnCommand                                                 *
 *                                                                          *
 * Purpose : Process a WM_COMMAND message.                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void Main_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
    switch (id)
    {
        case IDM_NEWWINDOW:
            // Create a new MDI child window.
            CreateMDIWindow(_T("MDIChildClass"), _T("Not so clever title"), 0,
                CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
                ghwndMDIClient, ghInstance, 0);
            break;

        case IDM_EXIT:
            // Close the application.
            FORWARD_WM_CLOSE(hwnd, SendMessage);
            break;

        case IDM_ABOUT:
            // Show the about dialog.
            DialogBox(ghInstance, MAKEINTRESOURCE(DLG_ABOUT), hwnd, (DLGPROC)AboutDlgProc);
            break;
    }
}

/****************************************************************************
 *                                                                          *
 * Function: Main_OnDestroy                                                 *
 *                                                                          *
 * Purpose : Process a WM_DESTROY message.                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void Main_OnDestroy(HWND hwnd)
{
    PostQuitMessage(0);
}

/****************************************************************************
 *                                                                          *
 * Function: AboutDlgProc                                                   *
 *                                                                          *
 * Purpose : Process messages for the About dialog.  The dialog is          *
             shown when the user selects "About" in the "Help" menu.        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static LRESULT CALLBACK AboutDlgProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        case WM_COMMAND:
            switch (wParam)
            {
                case IDOK:
                case IDCANCEL:
                    EndDialog(hDlg, TRUE);
                    return TRUE;
            }
            break;
    }

    return FALSE;
}

/****************************************************************************
 *                                                                          *
 * Function: ChildWndProc                                                   *
 *                                                                          *
 * Purpose : Process MDI child messages.                                    *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static LRESULT CALLBACK ChildWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
        HANDLE_MSG(hwnd, WM_CREATE, Child_OnCreate);
        HANDLE_MSG(hwnd, WM_SIZE, Child_OnSize);
        HANDLE_MSG(hwnd, WM_MDIACTIVATE, Child_OnMDIActivate);
        default:
            return DefMDIChildProc(hwnd, msg, wParam, lParam);
    }
}

/****************************************************************************
 *                                                                          *
 * Function: Child_OnCreate                                                 *
 *                                                                          *
 * Purpose : Process a WM_CREATE message.                                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static BOOL Child_OnCreate(HWND hwnd, CREATESTRUCT *pcs)
{
    HWND hwndDlg;
#if 1
    // The fancy version - resize the MDI window according to the DIALOG size.
    HRSRC hrsrc;
    HGLOBAL hgRes;
    PMYDLGTEMPLATEEX pDlg;

    // Find the dialog resource (DLG_MDICHILD) and load into memory.
    if ((hrsrc = FindResource(NULL, MAKEINTRESOURCE(DLG_MDICHILD), RT_DIALOG)) != NULL &&
        (hgRes = LoadResource(NULL, hrsrc)) != NULL &&
        (pDlg = LockResource(hgRes)) != NULL)
    {
        // Create the dialog from the memory area.
        hwndDlg = CreateDialogIndirect(ghInstance, (LPDLGTEMPLATE)pDlg, hwnd, ChildDlgProc);
        if (hwndDlg != NULL)
        {
            RECT rcDlg;

            // Map from dialog units to screen units.
            rcDlg.left = pDlg->x;
            rcDlg.top = pDlg->y;
            rcDlg.right = pDlg->x + pDlg->cx;
            rcDlg.bottom = pDlg->y + pDlg->cy;
            MapDialogRect(hwndDlg, &rcDlg);

            // Resize the MDI window to *roughly* the size of the dialog (we don't account for borders).
            SetWindowPos(hwnd, NULL, 0, 0, rcDlg.right - rcDlg.left, rcDlg.bottom - rcDlg.top, SWP_NOZORDER|SWP_NOMOVE);
        }
    }
#else
    // The simple version.
    hwndDlg = CreateDialog(ghInstance, MAKEINTRESOURCE(DLG_MDICHILD), hwnd, ChildDlgProc);
#endif

    return hwndDlg != NULL;
}

/****************************************************************************
 *                                                                          *
 * Function: Child_OnSize                                                   *
 *                                                                          *
 * Purpose : Process a WM_SIZE message.                                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void Child_OnSize(HWND hwnd, UINT state, int cx, int cy)
{
    // Resize the dialog (the only child) to fit within the MDI window client area.
    SetWindowPos(GetWindow(hwnd, GW_CHILD), NULL, 0, 0, cx, cy, SWP_NOZORDER);
}

/****************************************************************************
 *                                                                          *
 * Function: Child_OnMDIActivate                                            *
 *                                                                          *
 * Purpose : Handle WM_MDIACTIVATE message.                                 *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void Child_OnMDIActivate(HWND hwnd, BOOL fActive, HWND hwndActivate, HWND hwndDeactivate)
{
    if (fActive)
    {
        // Remember the active MDI child.
        ghwndActiveMDIChild = hwnd;
        SetFocus(GetWindow(hwnd, GW_CHILD));
    }
}

/****************************************************************************
 *                                                                          *
 * Function: ChildDlgProc                                                   *
 *                                                                          *
 * Purpose : Child dialog procedure.                                        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static BOOL CALLBACK ChildDlgProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
        // Initialize the sample dialog.
        case WM_INITDIALOG:
            // Initialize the first editbox.
            Edit_LimitText(GetDlgItem(hwndDlg, DID_SAMPLE1), 80);
            SetDlgItemText(hwndDlg, DID_SAMPLE1, _T("Yeah, right!"));

            // Initialize the second editbox.
            Edit_LimitText(GetDlgItem(hwndDlg, DID_SAMPLE2), 80);

            // Initialize the radio buttons.
            CheckRadioButton(hwndDlg, DID_OPTION1, DID_OPTION3, DID_OPTION2);

            // Set focus to some control.
            SetDlgItemFocus(hwndDlg, DID_SAMPLE1);
            return TRUE;

        case WM_COMMAND:
            switch (GET_WM_COMMAND_ID(wParam, lParam))
            {
                default:
                    break;
            }
            break;
    }

    return FALSE;
}

