/****************************************************************************
 *                                                                          *
 * Author  : Alexander Stoica (nitex@freenet.de)                            *
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Example on how to load a *.rtf file from resource into a       *
 *           richedit control.                                              *
 *                                                                          *
 * History : Date        Reason                                             *
 *           2005/01/08  Created                                            *
 *                                                                          *
 ****************************************************************************/

/*
 * Either define WIN32_LEAN_AND_MEAN, or one or more of NOCRYPT,
 * NOSERVICE, NOMCX and NOIME, to decrease compile time (if you
 * don't need these defines -- see windows.h).
 */

#define WIN32_LEAN_AND_MEAN
/* #define NOCRYPT */
/* #define NOSERVICE */
/* #define NOMCX */
/* #define NOIME */

#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include <richedit.h>
#include "main.h"

/** Prototypes **************************************************************/

static LRESULT CALLBACK MainDlgProc(HWND, UINT, WPARAM, LPARAM);
static DWORD LoadRtfResource(HWND, int);
static DWORD EditStreamCallback(DWORD_PTR, LPBYTE, LONG, LONG*);

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

    // Load Rich Edit control support.
    // TODO: uncomment one of the lines below, if you are using a Rich Edit control.
    LoadLibrary(_T("riched32.dll"));  // Rich Edit v1.0
    // LoadLibrary(_T("riched20.dll"));  // Rich Edit v2.0, v3.0

    // Get system dialog information.
    wcx.cbSize = sizeof(wcx);
    if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
        return 0;

    // Add our own stuff.
    wcx.hInstance = hInstance;
    wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
    wcx.lpszClassName = _T("LoadRtfRClass");
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
        {
            /*
             * TODO: Add code to initialize the dialog.
             */

			HWND hwndRichEdit;

			hwndRichEdit = GetDlgItem(hwndDlg, DLG_MAIN_RICHEDIT);
			LoadRtfResource(hwndRichEdit, IDR_RTF_TEST);

            return TRUE;
		}
        case WM_SIZE:
            /*
             * TODO: Add code to process resizing, when needed.
             */
            return TRUE;

        case WM_COMMAND:
            switch (GET_WM_COMMAND_ID(wParam, lParam))
            {
                /*
                 * TODO: Add more control ID's, when needed.
                 */
                case IDOK:
                    EndDialog(hwndDlg, TRUE);
                    return TRUE;
            }
            break;

        case WM_CLOSE:
            EndDialog(hwndDlg, 0);
            return TRUE;

        /*
         * TODO: Add more messages, when needed.
         */
    }

    return FALSE;
}

static DWORD LoadRtfResource(HWND hwndRichEdit, int iResID)
{
	EDITSTREAM es;

	ZeroMemory(&es, sizeof(es));
        es.pfnCallback = EditStreamCallback;
	    es.dwCookie    = iResID;
	    es.dwError     = 0;
	RichEdit_StreamIn(hwndRichEdit, SF_RTF, &es);

	return es.dwError;
}

static DWORD EditStreamCallback(DWORD_PTR dwCookie, LPBYTE pbBuff, LONG cb, LONG *pcb)
{
	TCHAR szResIdStr[32];
	HRSRC hResInfo = NULL;
	static HGLOBAL hResource = NULL;
	static DWORD dwResSize = 0, dwRead = 0;
	static LPBYTE pbResData = NULL;

	// avoid loading the resource more than once
	if (dwRead == 0)
	{
		wsprintf(szResIdStr, _T("#%d"), dwCookie);
		hResInfo  = FindResource(ghInstance, szResIdStr, RT_RCDATA);
		if (hResInfo != NULL)
		{
			hResource = LoadResource(ghInstance, hResInfo);
			dwResSize = SizeofResource(ghInstance, hResInfo);
			if ((hResource != NULL) && (dwResSize > 0))
			{
				pbResData = (LPBYTE) LockResource(hResource);
			}
		}
	}

	if (pbResData != NULL)
	{
		ZeroMemory(pbBuff, cb);
		if ((dwResSize - dwRead) > cb)
		{
			CopyMemory(pbBuff, pbResData + dwRead, cb);
			*pcb = cb;
			dwRead += *pcb;
		}
		else
		{
			CopyMemory(pbBuff, pbResData + dwRead, dwResSize - dwRead);
			*pcb = dwResSize - dwRead;
			FreeResource(hResource);
			hResource = NULL;
			pbResData = NULL;
			dwResSize = 0;
			dwRead    = 0;
		}
		return 0;
	}
	return 1;
}
