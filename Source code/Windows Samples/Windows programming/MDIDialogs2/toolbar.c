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
#include "toolbar.h"
#include "main.h"

#define NUM_TOOLBAR_BUTTONS	15 // this includes the separators

/****************************************************************************
 *                                                                          *
 * Function: TBButton                                                       *
 *                                                                          *
 * Purpose : Fills in a TBBUTTON struct with passed params                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
void TBButton(TBBUTTON *tbb, int iBitmap, int idCommand, int fsState, int fsStyle)
{
	// Button
	tbb->iBitmap	= iBitmap;
	tbb->idCommand 	= idCommand;
	tbb->fsState	= fsState;
	tbb->fsStyle	= fsStyle;
}

/****************************************************************************
 *                                                                          *
 * Function: CreateToolBarWnd                                               *
 *                                                                          *
 * Purpose : Create a toolbar.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
HWND CreateToolBarWnd(HWND hWndParent, HINSTANCE hInst)
{

	HWND hWndTB;
	TBADDBITMAP tbab;
	TBBUTTON tbb[NUM_TOOLBAR_BUTTONS];

	// clean memory before using it
	memset(tbb, 0, sizeof(TBBUTTON) * NUM_TOOLBAR_BUTTONS);
	// make buttons
	TBButton(&tbb[0], 0, 0, 0, TBSTYLE_SEP);
	TBButton(&tbb[1], TD_FILENEW,  IDM_NEW,  TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[2], TD_FILEOPEN, IDM_OPEN, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[3], TD_FILESAVE, IDM_SAVE, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[4], 0, 0, 0,  TBSTYLE_SEP);
	TBButton(&tbb[5], TD_PRINT,	IDM_PRINT, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[6], 0, 0, 0,	TBSTYLE_SEP);
	TBButton(&tbb[7], TD_CUT,	IDM_CUT,   TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[8], TD_COPY,	IDM_COPY,  TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[9], TD_PASTE, IDM_PASTE, TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[10], 0, 0, 0, TBSTYLE_SEP);
	TBButton(&tbb[11], TD_UNDO, IDM_UNDO,  TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[12], TD_FIND, IDM_SEARCH,  TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[13], TD_HELP, IDM_HELP,  TBSTATE_ENABLED, TBSTYLE_BUTTON);
	TBButton(&tbb[14], 0, 0, 0, TBSTYLE_SEP);

	// Create the toolbar.
	hWndTB = CreateWindowEx(WS_EX_CLIENTEDGE,
   							TOOLBARCLASSNAME,
						    (LPSTR) NULL,
	    					WS_CHILD | WS_BORDER | CCS_TOP | TBSTYLE_TOOLTIPS,
						    0, 0, 0, 0,
							hWndParent,
						    (HMENU) ID_TOOLBAR,
						    hInst,
						    NULL);

	if (!hWndTB)
		return 0;

	// Send the TB_BUTTONSTRUCTSIZE message, which is required for backward compatibility.
	SendMessage(hWndTB, TB_BUTTONSTRUCTSIZE, (WPARAM) sizeof(TBBUTTON), 0);

	tbab.hInst = 0;
	tbab.nID   = (UINT)LoadImage(hInst, MAKEINTRESOURCE(ID_BITMAP),
					IMAGE_BITMAP, 0, 0, LR_LOADMAP3DCOLORS);

 	// Add the bitmap containing button images to the toolbar.
	SendMessage(hWndTB, TB_ADDBITMAP, (WPARAM) 1, (LPARAM) &tbab);

	SendMessage(hWndTB, TB_ADDBUTTONS, NUM_TOOLBAR_BUTTONS, (LPARAM)tbb);
	SetWindowLong(hWndTB, GWL_STYLE, GetWindowLong(hWndTB, GWL_STYLE) | TBSTYLE_FLAT);
	ShowWindow(hWndTB, SW_SHOW);
	return hWndTB;
}


