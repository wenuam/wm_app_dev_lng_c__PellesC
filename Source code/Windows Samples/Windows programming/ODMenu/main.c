/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Owner-draw menu demo.                                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include "main.h"
#include "odmenu.h"

/** Macros ******************************************************************/

#define TOOLBARSTYLE    (WS_CHILD|WS_VISIBLE)
/* #define TOOLBARSTYLEEX  (WS_CHILD|WS_VISIBLE|TBSTYLE_FLAT|CCS_NODIVIDER) */

/** Prototypes **************************************************************/

static LRESULT WINAPI MainWndProc(HWND, UINT, WPARAM, LPARAM);
static BOOL Main_OnCreate(HWND, CREATESTRUCT *);
static void Main_OnSize(HWND, UINT, int, int);
static void Main_OnCommand(HWND, int, HWND, UINT);
static void Main_OnDestroy(HWND);
static LRESULT WINAPI AboutDlgProc(HWND, UINT, WPARAM, LPARAM);
static BOOL CreateToolbar(HWND);

/** Global variables ********************************************************/

HANDLE ghInstance = NULL;
static HWND ghwndToolbar = NULL;

/* Table for *both* the toolbar and the menu images */
struct {
    WORD idCommand;     // Command id.
    WORD iBitmap;       // Bitmap index (in IDR_BMP_MAINTOOLS).
    WORD fsStyle;       // Button style.
    WORD fsState;       // Button state.
}
static gaToolbar[] =
{
    IDM_FILE_NEW,   1, TBSTYLE_BUTTON, TBSTATE_ENABLED,
    IDM_FILE_OPEN,  2, TBSTYLE_BUTTON, TBSTATE_ENABLED,
    IDM_FILE_SAVE,  3, TBSTYLE_BUTTON, TBSTATE_ENABLED,
    //
    // Hidden commands only for menu bitmaps.
    //
    IDM_HELP_ABOUT, 5, TBSTYLE_BUTTON, TBSTATE_HIDDEN
};

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

    if (!hPrevInstance)
    {
        WNDCLASS wc;

        wc.lpszClassName = _T("ODMenuClass");
        wc.lpfnWndProc = MainWndProc;
        wc.style = CS_OWNDC|CS_VREDRAW|CS_HREDRAW;
        wc.hInstance = ghInstance;
        wc.hIcon = LoadIcon(ghInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
        wc.hCursor = LoadCursor(NULL, IDC_ARROW);
        wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
        wc.lpszMenuName = MAKEINTRESOURCE(IDR_MNU_MAIN);
        wc.cbClsExtra = 0;
        wc.cbWndExtra = 0;

        if (!RegisterClass(&wc))
            return 1;
    }

    hwnd = CreateWindow(_T("ODMenuClass"),
        _T("OwnerDraw Menu Demo"),
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

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
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
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
}

/****************************************************************************
 *                                                                          *
 * Function: Main_OnCreate                                                  *
 *                                                                          *
 * Purpose : Handle WM_CREATE message.                                      *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static BOOL Main_OnCreate(HWND hwnd, CREATESTRUCT *pcs)
{
    /*
     * Create the toolbar window.
     */
    if (!CreateToolbar(hwnd))
        return FALSE;

    /*
     * Install the owner-draw menu handler. The rest is handled automatically!
     */
    if (!InstallOwnerDrawMenuHandler(hwnd, ghwndToolbar))
        return FALSE;

    return TRUE;
}

/****************************************************************************
 *                                                                          *
 * Function: Main_OnSize                                                    *
 *                                                                          *
 * Purpose : Handle WM_SIZE message.                                        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void Main_OnSize(HWND hwnd, UINT state, int cx, int cy)
{
    FORWARD_WM_SIZE(ghwndToolbar, state, cx, cy, SendMessage);
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
        /*
         * File meny.
         */
        case IDM_FILE_NEW:
            MessageBox(hwnd, _T("IDM_FILE_NEW selected!"), _T("OwnerDraw Menu Demo"), MB_OK);
            break;

        case IDM_FILE_OPEN:
            MessageBox(hwnd, _T("IDM_FILE_OPEN selected!"), _T("OwnerDraw Menu Demo"), MB_OK);
            break;

        case IDM_FILE_SAVE:
            MessageBox(hwnd, _T("IDM_FILE_SAVE selected!"), _T("OwnerDraw Menu Demo"), MB_OK);
            break;

        case IDM_FILE_SAVEAS:
            MessageBox(hwnd, _T("IDM_FILE_SAVEAS selected!"), _T("OwnerDraw Menu Demo"), MB_OK);
            break;

        case IDM_FILE_EXIT:
            FORWARD_WM_CLOSE(hwnd, SendMessage);
            break;

        /*
         * Help menu.
         */
        case IDM_HELP_ABOUT:
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
        case WM_INITDIALOG:
            /*
             * Nothing special to initialize.
             */
            return TRUE;

        case WM_COMMAND:
            switch (wParam)
            {
                case IDOK:
                case IDCANCEL:
                    /*
                     * OK or Cancel was clicked, close the dialog.
                     */
                    EndDialog(hDlg, TRUE);
                    return TRUE;
            }
            break;
    }

    return FALSE;
}

/****************************************************************************
 *                                                                          *
 * Function: CreateToolbar                                                  *
 *                                                                          *
 * Purpose : Create the toolbar window.                                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static BOOL CreateToolbar(HWND hwnd)
{
    HIMAGELIST himl;
    TBBUTTON tbb;
    int i;

    //
    // Create the Toolbar window (the only band in ReBar).
    //
    ghwndToolbar = CreateWindow(TOOLBARCLASSNAME, NULL, TOOLBARSTYLE,
        0, 0, 0, 0, hwnd, (HMENU)1, ghInstance, NULL);
    if (!ghwndToolbar) return FALSE;

    //
    // Version control and single button bitmap size.
    //
    ToolBar_ButtonStructSize(ghwndToolbar);
    ToolBar_SetBitmapSize(ghwndToolbar, 16, 16);

    //
    // Add bitmap with all buttons to the toolbar.
    //
    himl = ImageList_LoadBitmap(ghInstance, MAKEINTRESOURCE(IDR_BMP_MAINTOOLS), 16, 0, RGB(255,0,255));
    ToolBar_SetImageList(ghwndToolbar, himl);

    //
    // Add buttons to the toolbar.
    //
    for (i = 0; i < NELEMS(gaToolbar); i++)
    {
        tbb.iBitmap = gaToolbar[i].iBitmap;
        tbb.idCommand = gaToolbar[i].idCommand;
        tbb.fsState = gaToolbar[i].fsState;
        tbb.fsStyle = gaToolbar[i].fsStyle;
        tbb.iString = 0;
        ToolBar_AddButtons(ghwndToolbar, 1, &tbb);
    }

    ToolBar_AutoSize(ghwndToolbar);

    return TRUE;
}
