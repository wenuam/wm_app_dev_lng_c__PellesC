
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
                default:
								
								return TRUE;
                    break;
            }
            break;
						
					
    }

    return FALSE;
	
}
