#include <windows.h>
#include <windowsx.h>
#include <winuser.h>
#include <stdio.h>
#include <commctrl.h>
#include <tchar.h>

#include "main.h"
#include "SplashDialog.h"


extern HINSTANCE g_hInst;
extern HWND g_hWndFrame;
VOID CALLBACK SplashDialog_TimerProc(

    HWND hwnd,	// handle of window for timer messages 
    UINT uMsg,	// WM_TIMER message
    UINT idEvent,	// timer identifier
    DWORD dwTime 	// current system time
   )
{
		EndDialog(hwnd, 0);
}


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
BOOL APIENTRY SplashDlg_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	HWND dtHwnd;
	RECT rect;
	int screenWidth, screenHeight, left, top;
	switch (msg)
	{
		case WM_INITDIALOG:
				//Center Dialog on Screen
			screenWidth=GetSystemMetrics(SM_CXFULLSCREEN);
			screenHeight=GetSystemMetrics(SM_CYFULLSCREEN);
			//Get Dialog dimesions
			GetWindowRect(hwnd, &rect);
			//Calculate new position
			left=(screenWidth/2)-((rect.right-499)/2);
			top=(screenHeight/2)-((rect.bottom-333)/2);
			//Move Dialog
			
			MoveWindow(GetDlgItem(hwnd,IDP_PICTBOX),0,0,498,332,TRUE);
			//Set Timer
			SetTimer(hwnd, 0,	6000,	 SplashDialog_TimerProc   );	
			SetWindowPos(hwnd,HWND_TOPMOST,left,top,499,333,0);
		
			return 0;
		case WM_LBUTTONDOWN:
		case WM_CLOSE:
			
			EndDialog(hwnd, 0);
			


			
			return 1;

		
			break;
	}
	return 0;
}


DWORD WINAPI SplashDialog_ThreadFunc( LPVOID pParams){
	
	DialogBox( g_hInst, MAKEINTRESOURCE(IDD_SPLASH), NULL, (DLGPROC)SplashDlg_WndProc);
}

void SplashDialog_Launch(){
	DWORD threadPtr;

  CreateThread(NULL,	0, SplashDialog_ThreadFunc,	NULL,	NORMAL_PRIORITY_CLASS ,	&threadPtr  );
}
