/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Demonstrates accessing shared data in a DLL. This demo will    *
 *           start a second instance of itself - to verify that the shared  *
 *           data really is shared. Change the value of the "shared int"    *
 *           in one editbox, press the "Set!" button, and the value will    *
 *           be reflected in the editbox in the second instance too...      *
 *           (after a ~200 ms delay)...                                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <tchar.h>
#include "main.h"
#include "dllshare.h"

// Somewhat useful macro...
#define NELEMS(a)  (sizeof(a) / sizeof(a[0]))

// Timer ID.
#define TID_MAIN  1

/** Prototypes **************************************************************/

static LRESULT CALLBACK MainDlgProc(HWND, UINT, WPARAM, LPARAM);

/** Global variables ********************************************************/

static BOOL gfFirstInstance;
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
    HANDLE hMutex;

    //
    // To simplify testing, we create a second instance of this program -
    // so we can watch the shared integer value (in dllshare.dll) being
    // updated in the two instances.
    //
    hMutex = CreateMutex(NULL, FALSE, _T("exeshareClass"));
    if (hMutex && GetLastError() != ERROR_ALREADY_EXISTS)
    {
        // Must be first the instance - start the second.
        PROCESS_INFORMATION pi;
        STARTUPINFO si;
        TCHAR szExeName[260];

        GetStartupInfo(&si);

        // We are the first instance of this EXE - start the second instance (for testing).
        GetModuleFileName(NULL, szExeName, NELEMS(szExeName));
        if (!CreateProcess(NULL, szExeName, NULL, NULL, FALSE, CREATE_DEFAULT_ERROR_MODE, NULL, NULL, &si, &pi))
            return 1;

        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);

        // Remember that we are the first instance.
        gfFirstInstance = TRUE;
    }
    else
    {
        // Remember that we are NOT the first instance.
        gfFirstInstance = FALSE;
    }

    ghInstance = hInstance;

    // Get system dialog information.
    wcx.cbSize = sizeof(wcx);
    if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
        return 0;

    // Add our own stuff.
    wcx.hInstance = hInstance;
    wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
    wcx.lpszClassName = _T("exeshareClass");
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
    switch (uMsg)
    {
        case WM_INITDIALOG:
            if (!gfFirstInstance)
            {
                // Set caption and position for the first instance main window.
                SetWindowText(hwndDlg, _T("First instance"));
                SetWindowPos(hwndDlg, NULL, 200, 200, 0, 0, SWP_NOACTIVATE|SWP_NOSIZE|SWP_NOZORDER);
            }
            else
            {
                // Set caption and position for the second instance main window.
                SetWindowText(hwndDlg, _T("Second instance"));
                SetWindowPos(hwndDlg, NULL, 10, 10, 0, 0, SWP_NOACTIVATE|SWP_NOSIZE|SWP_NOZORDER);
            }
            // Start a timer for polling the integers values.
            SetTimer(hwndDlg, TID_MAIN, 200, NULL);
            return TRUE;

        case WM_TIMER:
        {
            // Time to poll the integers in "dllshare.dll".
            static int last_set_shared_int = -1;
            static int last_set_private_int = -1;
            /**/
            {
                int shared_int = get_shared_int_value();
                // Shared value changed since the last time?
                if (shared_int != last_set_shared_int)
                {
                    // Yup - set new value in the main window (dialog).
                    last_set_shared_int = shared_int;
                    SetDlgItemInt(hwndDlg, DID_SHARED_VALUE, (UINT)shared_int, TRUE);
                }
            }
            /**/
            {
                int private_int = get_private_int_value();
                // Private value changed since the last time?
                if (private_int != last_set_private_int)
                {
                    // Yup - set new value in the main window (dialog).
                    last_set_private_int = private_int;
                    SetDlgItemInt(hwndDlg, DID_PRIVATE_VALUE, (UINT)private_int, TRUE);
                }
            }
            break;
        }

        case WM_SIZE:
            return TRUE;

        case WM_COMMAND:
            switch (GET_WM_COMMAND_ID(wParam, lParam))
            {
                case IDOK:
                {
                    EndDialog(hwndDlg, TRUE);
                    return TRUE;
                }

                case IDSETSHARED:
                {
                    // User want to change the shared value - do so.
                    BOOL fTranslated;
                    int shared_int = (int)GetDlgItemInt(hwndDlg, DID_SHARED_VALUE, &fTranslated, TRUE);
                    if (fTranslated) set_shared_int_value(shared_int);
                    return TRUE;
                }

                case IDSETPRIVATE:
                {
                    // User want to change the private value - do so.
                    BOOL fTranslated;
                    int private_int = (int)GetDlgItemInt(hwndDlg, DID_PRIVATE_VALUE, &fTranslated, TRUE);
                    if (fTranslated) set_private_int_value(private_int);
                    return TRUE;
                }
            }
            break;

        case WM_CLOSE:
            EndDialog(hwndDlg, 0);
            return TRUE;
    }

    return FALSE;
}
