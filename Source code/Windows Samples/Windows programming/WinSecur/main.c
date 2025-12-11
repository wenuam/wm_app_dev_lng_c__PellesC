/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Windows Security Center (WSC) sample (Windows Vista+).         *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <wscapi.h>
#include "main.h"

/** Prototypes **************************************************************/

static INT_PTR CALLBACK MainDlgProc(HWND, UINT, WPARAM, LPARAM);
static DWORD WINAPI OnSecurityCenterHealthChange(PVOID);

/** Global variables ********************************************************/

static HANDLE ghInstance;

/****************************************************************************
 *                                                                          *
 * Function: wWinMain                                                       *
 *                                                                          *
 * Purpose : Initialize the application.  Register a window class,          *
 *           create and display the main window and enter the               *
 *           message loop.                                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpszCmdLine, int nCmdShow)
{
    WNDCLASSEX wcx;

    ghInstance = hInstance;

    /* Get system dialog information */
    wcx.cbSize = sizeof(wcx);
    if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
        return 0;

    /* Add our own stuff */
    wcx.hInstance = hInstance;
    wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
    wcx.lpszClassName = L"winsecurClass";
    if (!RegisterClassEx(&wcx))
        return 0;

    /* The user interface is a modal dialog box */
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

static INT_PTR CALLBACK MainDlgProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static HANDLE hWscCallbackRegistration = NULL;

    switch (uMsg)
    {
        case WM_INITDIALOG:
            if (FAILED(WscRegisterForChanges(NULL, &hWscCallbackRegistration, OnSecurityCenterHealthChange, hwndDlg)))
                MessageBox(NULL, L"Failed to register Security Center change notifications", L"Oops...", MB_OK);
            else /* Success; call the callback to reflect the current health state */
                OnSecurityCenterHealthChange(hwndDlg);
            return TRUE;

        case WM_COMMAND:
            switch (GET_WM_COMMAND_ID(wParam, lParam))
            {
                case IDOK:
                    EndDialog(hwndDlg, TRUE);
                    return TRUE;
            }
            break;

        case WM_CLOSE:
            EndDialog(hwndDlg, 0);
            return TRUE;

        case WM_DESTROY:
            if (hWscCallbackRegistration != NULL)
            {
                if (FAILED(WscUnRegisterChanges(hWscCallbackRegistration)))
                    MessageBox(NULL, L"Failed to unregister Security Center change notifications", L"Oops...", MB_OK);
                hWscCallbackRegistration = NULL;
            }
            break;
    }

    return FALSE;
}

/****************************************************************************
 *                                                                          *
 * Function: OnSecurityCenterHealthChange                                   *
 *                                                                          *
 * Purpose : Callback for WSC notifications.                                *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#define HEALTH_TEXT(h) \
    (h) == WSC_SECURITY_PROVIDER_HEALTH_GOOD ? L"GOOD - does not need user attention" : \
    (h) == WSC_SECURITY_PROVIDER_HEALTH_NOTMONITORED ? L"NOT MONITORED - the status is not monitored by WSC" : \
    (h) == WSC_SECURITY_PROVIDER_HEALTH_POOR ? L"POOR - the computer may be at risk" : \
    (h) == WSC_SECURITY_PROVIDER_HEALTH_SNOOZE ? L"SNOOZE - WSC is not actively protecting the computer" : L"UNKNOWN - can't be good"

#define UNKNOWN_HEALTH_TEXT  L"Unknown health - the computer may be sick"

static DWORD WINAPI OnSecurityCenterHealthChange(PVOID pvParameter)
{
    HWND hwndDlg = pvParameter;
    WSC_SECURITY_PROVIDER_HEALTH health;
    HRESULT hr;

    /* Check firewall health */
    hr = WscGetSecurityProviderHealth(WSC_SECURITY_PROVIDER_FIREWALL, &health);
    SetDlgItemText(hwndDlg, DID_FIREWALL_HEALTH, SUCCEEDED(hr) ? HEALTH_TEXT(health) : UNKNOWN_HEALTH_TEXT);

    /* Check antivirus health */
    hr = WscGetSecurityProviderHealth(WSC_SECURITY_PROVIDER_ANTIVIRUS, &health);
    SetDlgItemText(hwndDlg, DID_ANTIVIRUS_HEALTH, SUCCEEDED(hr) ? HEALTH_TEXT(health) : UNKNOWN_HEALTH_TEXT);

    /* Check anti-spyware health */
    hr = WscGetSecurityProviderHealth(WSC_SECURITY_PROVIDER_ANTISPYWARE, &health);
    SetDlgItemText(hwndDlg, DID_ANTI_SPYWARE_HEALTH, SUCCEEDED(hr) ? HEALTH_TEXT(health) : UNKNOWN_HEALTH_TEXT);

    return 0;
}
