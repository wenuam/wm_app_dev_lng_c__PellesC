// Statusbar.c
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <commctrl.h>
#include "main.h"

/****************************************************************************
 *                                                                          *
 * Function: StatusBar_SizePanels                                               *
 *                                                                          *
 * Purpose : Sets the size and number of panels for statusbar.              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
void StatusBar_SizePanels(HWND hWndParent, HWND hWndStatusbar, int nrOfParts)
{

	int   ptArray[nrOfParts];   // Array defining the number of parts/sections
	RECT  rect;
	int   partsize;

	GetClientRect(hWndParent, &rect);

	nrOfParts++; // increase for the double size of first part

	partsize = (rect.right / nrOfParts);

	ptArray[0] = partsize * 2; // first part double size

	// Fill in the ptArray
	for(int i = 1; i<nrOfParts; i++)
	{
		ptArray[i] = ptArray[0] + (partsize * i);
	}

	// Decrease 'nrOfParts' to original number of parts
	nrOfParts--;
	SendMessage(hWndStatusbar, SB_SETPARTS, nrOfParts, (LPARAM)(LPINT)ptArray);

}

/****************************************************************************
 *                                                                          *
 * Function: StatusBar_Create                                             *
 *                                                                          *
 * Purpose : Create the status bar                                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
HWND StatusBar_Create(HWND hWndParent, char *initialText, int nrOfParts)
{

	HWND hWndStatusbar;

    hWndStatusbar = CreateStatusWindow(WS_CHILD | WS_VISIBLE | WS_BORDER|SBARS_SIZEGRIP,
                                       initialText, hWndParent, ID_STATUSBAR);
    if(hWndStatusbar)
    {
        StatusBar_SizePanels(hWndParent, hWndStatusbar, nrOfParts);
        return hWndStatusbar;
    }

    return 0;
}

/****************************************************************************
 *                                                                          *
 * Function: StatusBar_SetText                                               *
 *                                                                          *
 * Purpose : Updates the statusbar with strings                             *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
void StatusBar_SetText(HWND hwndStatusBar, int id, char *szStatusString)
{
    SendMessage(hwndStatusBar, SB_SETTEXT, id, (LPARAM)szStatusString);
}
