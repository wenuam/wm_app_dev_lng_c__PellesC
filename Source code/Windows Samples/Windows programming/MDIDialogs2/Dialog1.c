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

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <winuser.h>
#include <stdio.h>
#include <commctrl.h>
#include <tchar.h>
#include "main.h"

LRESULT CALLBACK Dialog1_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	
	 switch (msg)
    {
        // Initialize the sample dialog.
        case WM_INITDIALOG:
				case WM_SETFONT:
            
            return TRUE;

        case WM_COMMAND:
            switch (GET_WM_COMMAND_ID(wParam, lParam))
            {
								case IDB_OK:
									MessageBox(NULL,"Command","OK Button Clicked!!!!",MB_OK);
									break;
								case IDB_CANCEL:
								  MessageBox(NULL,"Command","Cancel Button Clicked!!!!",MB_OK);
									break;
                default:
								
								return TRUE;
                    break;
            }
            break;
						
					
    }

    return FALSE;
	
}
