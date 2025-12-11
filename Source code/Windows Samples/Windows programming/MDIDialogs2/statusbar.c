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
#include <commctrl.h>
#include "main.h"

/****************************************************************************
 *                                                                          *
 * Function: SizeStatusPanels                                               *
 *                                                                          *
 * Purpose : Sets the size and number of panels for statusbar.              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
void SizeStatusPanels(HWND hWndParent, HWND hWndStatusbar, int nrOfParts)
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
 * Function: CreateStatusBarWnd                                             *
 *                                                                          *
 * Purpose : Create the status bar                                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
HWND CreateStatusBarWnd(HWND hWndParent, char *initialText, int nrOfParts)
{

	HWND hWndStatusbar;

    hWndStatusbar = CreateStatusWindow(WS_CHILD | WS_VISIBLE | WS_BORDER|SBARS_SIZEGRIP,
                                       initialText, hWndParent, ID_STATUSBAR);
    if(hWndStatusbar)
    {
        SizeStatusPanels(hWndParent, hWndStatusbar, nrOfParts);
        return hWndStatusbar;
    }

    return 0;
}

/****************************************************************************
 *                                                                          *
 * Function: SetStatusBarText                                               *
 *                                                                          *
 * Purpose : Updates the statusbar with strings                             *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
void SetStatusBarText(HWND hwndStatusBar, int id, char *szStatusString)
{
    SendMessage(hwndStatusBar, SB_SETTEXT, id, (LPARAM)szStatusString);
}
