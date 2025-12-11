/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Button and Label control color sample.                         *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include "main.h"

/** Prototypes **************************************************************/

static LRESULT CALLBACK MainDlgProc(HWND, UINT, WPARAM, LPARAM);
static void DrawEmptyButton(HDC, PRECT, BOOL, HBRUSH);

/** Global variables ********************************************************/

static HANDLE ghInstance;

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
    WNDCLASSEX wcx;
    
    ghInstance = hInstance;

    // Initialize common controls. Also needed for MANIFEST's.
    InitCommonControls();

    // Get system dialog information.
    wcx.cbSize = sizeof(wcx);
    if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
        return 0;

    // Add our own stuff.
    wcx.hInstance = hInstance;
    wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
    wcx.lpszClassName = _T("CtlColorClass");
    if (!RegisterClassEx(&wcx))
        return 0;

    // The user interface is a modal dialog box.
    return DialogBox(hInstance, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)MainDlgProc);
}

/****************************************************************************
 *                                                                          *
 * Function: MainDlgProc                                                    *
 *                                                                          *
 * Purpose : Process messages for the Main dialog.                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static LRESULT CALLBACK MainDlgProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static HBRUSH hbrRed, hbrBlue, hbrBlack;

    switch (uMsg)
    {
        case WM_INITDIALOG:
            /*
             * TODO: Add code to initialize the dialog.
             */
            hbrRed = CreateSolidBrush(RGB(255,0,0));
            hbrBlue = CreateSolidBrush(RGB(0,0,255));
            hbrBlack = CreateSolidBrush(RGB(0,0,0));
            return hbrRed && hbrBlue && hbrBlack;

        case WM_COMMAND:
            switch (GET_WM_COMMAND_ID(wParam, lParam))
            {
                case IDOK:
                    EndDialog(hwndDlg, TRUE);
                    return TRUE;
            }
            break;

        case WM_CTLCOLORDLG:
            // Set color for the entire dialog.
            SetTextColor((HDC)wParam, RGB(255,255,255));
            SetBkColor((HDC)wParam, RGB(0,0,0));
            return (LRESULT)hbrBlack;

#if 0
        case WM_CTLCOLORBTN:
            // You might think that this will work for push buttons - but it will not!
            // To paint buttons in your own color, you really need to use "owner-draw" buttons
            // (or something similar). This is pretty messy, and involves much code, especially
            // if you want to support Windows XP style AND older versions...
            if (GET_WM_CTLCOLOR_HWND(wParam,lParam,msg) == GetDlgItem(hwndDlg, DID_REDBUTTON))
            {
                SetTextColor(GET_WM_CTLCOLOR_HDC(wParam,lParam,msg), RGB(255,255,255));
                SetBkColor(GET_WM_CTLCOLOR_HDC(wParam,lParam,msg), RGB(255,0,0));
                return (LRESULT)hbrRed;
            }
            else if (GET_WM_CTLCOLOR_HWND(wParam,lParam,msg) == GetDlgItem(hwndDlg, DID_BLUEBUTTON))
            {
                SetTextColor(GET_WM_CTLCOLOR_HDC(wParam,lParam,msg), RGB(255,255,0));
                SetBkColor(GET_WM_CTLCOLOR_HDC(wParam,lParam,msg), RGB(0,0,255));
                return (LRESULT)hbrBlue;
            }
            break;
#endif

        case WM_CTLCOLORSTATIC:
            // Set color for the two labels.
            if (GET_WM_CTLCOLOR_HWND(wParam,lParam,msg) == GetDlgItem(hwndDlg, DID_REDLABEL))
            {
                SetTextColor(GET_WM_CTLCOLOR_HDC(wParam,lParam,msg), RGB(255,255,255));
                SetBkColor(GET_WM_CTLCOLOR_HDC(wParam,lParam,msg), RGB(255,0,0));
                return (LRESULT)hbrRed;
            }
            else if (GET_WM_CTLCOLOR_HWND(wParam,lParam,msg) == GetDlgItem(hwndDlg, DID_BLUELABEL))
            {
                SetTextColor(GET_WM_CTLCOLOR_HDC(wParam,lParam,msg), RGB(255,255,0));
                SetBkColor(GET_WM_CTLCOLOR_HDC(wParam,lParam,msg), RGB(0,0,255));
                return (LRESULT)hbrBlue;
            }
            break;

        case WM_DRAWITEM:
        {
            // Handle owner-draw button - at least the basic stuff. You probably need to do more.
            LPDRAWITEMSTRUCT pdis = (LPDRAWITEMSTRUCT)lParam;
            if (pdis->CtlType == ODT_BUTTON)
            {
                BOOL fClicked = (pdis->itemState & ODS_SELECTED) != 0;
                if (pdis->CtlID == DID_REDBUTTON)
                {
                    DrawEmptyButton(pdis->hDC, &pdis->rcItem, fClicked, hbrRed);
                    SetTextColor(pdis->hDC, RGB(255,255,255));
                    SetBkColor(pdis->hDC, RGB(255,0,0));
                    TextOut(pdis->hDC, 4+fClicked, 4+fClicked, "Red button", 10);
                }
                else if (pdis->CtlID == DID_BLUEBUTTON)
                {
                    DrawEmptyButton(pdis->hDC, &pdis->rcItem, fClicked, hbrBlue);
                    SetTextColor(pdis->hDC, RGB(255,255,255));
                    SetBkColor(pdis->hDC, RGB(0,0,255));
                    TextOut(pdis->hDC, 4+fClicked, 4+fClicked, "Blue button", 11);
                }
                if (pdis->itemState & ODS_FOCUS)
                {
                    InflateRect(&pdis->rcItem, -2, -2);
                    DrawFocusRect(pdis->hDC, &pdis->rcItem);
                }
            }
            break;
        }

        case WM_CLOSE:
            EndDialog(hwndDlg, 0);
            return TRUE;

        case WM_DESTROY:
            DeleteBrush(hbrRed);
            DeleteBrush(hbrBlue);
            DeleteBrush(hbrBlack);
            hbrRed = hbrBlue = hbrBlack = NULL;
            break;
    }

    return FALSE;
}

/****************************************************************************
 *                                                                          *
 * Function: DrawEmptyButton                                                *
 *                                                                          *
 * Purpose : Draw an empty 3D button.                                       *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void DrawEmptyButton(HDC hdc, PRECT prc, BOOL fClicked, HBRUSH hbrColor)
{
    HBRUSH hbr = hbrColor ? hbrColor : CreateSolidBrush(GetSysColor(COLOR_BTNFACE));
    HPEN hpen1 = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNHIGHLIGHT));
    HPEN hpen2 = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNSHADOW));
    HPEN hpen3 = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_WINDOWFRAME));
    HPEN hpen;
    int  x1, x2, y1, y2;

    // Draw face color and outer frame.
    hbr = SelectBrush(hdc, hbr);
    hpen = SelectPen(hdc, hpen3);
    Rectangle(hdc, prc->left, prc->top, prc->right, prc->bottom);

    x1 = prc->left;
    y1 = prc->top;
    x2 = prc->right - 1;
    y2 = prc->bottom - 1;

    if (fClicked)
    {
        SelectPen(hdc, hpen2);

        // Shadow on left and top edge when clicked.
        MoveToEx(hdc, x1+1, y2-1, NULL);
        LineTo(hdc, x1+1, y1+1);
        LineTo(hdc, x2, y1+1);
    }
    else
    {
        SelectPen(hdc, hpen2);

        // Lowest shadow line.
        MoveToEx(hdc, x1+1, y2-1, NULL);
        LineTo(hdc, x2-1, y2-1);
        LineTo(hdc, x2-1, y1);

        SelectPen(hdc, hpen1);

        // Upper highlight line.
        MoveToEx(hdc, x1, y2-1, NULL);
        LineTo(hdc, x1, y1);
        LineTo(hdc, x2, y1);
    }

    hbr = SelectBrush(hdc, hbr);
    if (hbr != hbrColor) DeleteBrush(hbr);

    SelectPen(hdc, hpen);
    DeletePen(hpen1);
    DeletePen(hpen2);
    DeletePen(hpen3);
}
