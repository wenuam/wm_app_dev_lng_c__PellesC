/*-@@+@@--------------------------------[Do not edit manually]------------
 Module   : main.c
 Created  : Sun Jan 15 23:19:15 2006
 Modified : Sun Jan 15 23:19:15 2006

 Author   : Santiago Ottonello (sanotto@yahoo.com)
 Project  : MDIDialog2
 Status   : Example
 Abstract : Example about using Dialogs as MDI Childs
            Based on an original example by Pelle Orinius (mdidlg).
            Please read ReadMe.1st at Project/other files, hopefully this
            can clarify the code a little...
 ------------------------------------------------------------------@@-@@-*/

#include <windows.h>
#include <windowsx.h>
#include <winuser.h>
#include <stdio.h>
#include <commctrl.h>
#include <tchar.h>

#include "main.h"

/****************************************************************************
 *                                                                          *
 * Function: AboutDlg_Proc                                                   *
 *                                                                          *
 * Purpose : Process messages for the About dialog.  The dialog is          *
             shown when the user selects "About" in the "Help" menu.        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
BOOL APIENTRY AboutDlg_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
		case WM_INITDIALOG:
			return 1;

		case WM_CLOSE:
			EndDialog(hwnd, 0);
			return 1;

		case WM_COMMAND:
			switch (LOWORD(wParam))
			{
				case IDOK:
					EndDialog(hwnd, 1);
					return 1;
			}
			break;
	}
	return 0;
}
