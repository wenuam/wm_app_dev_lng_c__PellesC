/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Generic MDI Win32 application.                                 *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <winuser.h>
#include <stdio.h>
#include <commctrl.h>
#include <tchar.h>

#include "main.h"
#include "statusbar.h"
#include "toolbar.h"
#include "Dialog1.h"
#include "AboutDialog.h"
#include "treemenu.h"
#include "splashDialog.h"



//Extra Info to carry on every MDI Child
// typedef struct {
	// LPSTR dialogID;
	// WNDPROC	dialogHandler;
// } MDIWINDOWEXTRAINFO;
// typedef struct {
	// HINSTANCE hInst;	// instance handle
	// HWND 		hWndFrame;	// main window handle
	// HWND 		hWndClient;	// mdi client window handle	
	// HWND 		hWndToolBar;	// toolbar window handle
	// HWND 		hWndStatusBar;	// statusbar window handle
	// HBITMAP hBmp;	// toolbar button's bitmap
	// HWND 		hWndTreeMenu;//Tree Menu
	// LPSTR 	DialogID;
	// WNDPROC DialogProc;
	// HWND 		hwndActiveMDIChild;
	// BOOL 		abDrag ;	//for splitter
	// UINT 		auDrag ;	//for splitter
	// BOOL 		abDragBool ;	//for splitter
	// INT 		anumParts ; // number of sections for statusbar
// } FRAMEWINDOWEXTRAINFO, *FRAMEWINDOWEXTRAINFOPTR;

HINSTANCE g_hInst;	// instance handle
	HWND g_hWndFrame;	// main window handle
	HWND g_hWndClient;	// mdi client window handle	
	HWND g_hWndToolBar;	// toolbar window handle
	HWND g_hWndStatusBar;	// statusbar window handle
	HBITMAP g_hBmp;	// toolbar button's bitmap
	HWND g_hWndTreeMenu;
	LPSTR g_DialogID;
	WNDPROC g_DialogProc;
	static HWND g_hwndActiveMDIChild;
	static BOOL bDrag = FALSE;	//for splitter
	static UINT uDrag = 100;	//for splitter
	static BOOL bDragBool = FALSE;	//for splitter
	int numParts = 4; // number of sections for statusbar


	
/****************************************************************************
 *                                                                          *
 * Function: WinMain_Init                                                *
 *                                                                          *
 * Purpose : Register the two window classes, frame window and client       *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
BOOL WinMain_Init(HINSTANCE hInst)
{
	WNDCLASSEX wc;

	// Frame (main) window class
	memset(&wc, 0, sizeof(WNDCLASSEX));
	wc.cbSize        = sizeof(WNDCLASSEX);
	wc.style         = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
	wc.lpfnWndProc   = (WNDPROC)FrameWnd_WndProc;
	wc.hInstance     = hInst;
	wc.hbrBackground = (HBRUSH) (COLOR_BACKGROUND);
	wc.lpszClassName = "MDIDialogs3Class";
	wc.lpszMenuName  = MAKEINTRESOURCE(ID_MAINMENU);
	wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
	//wc.hIcon         = LoadIcon(hInst, MAKEINTRESOURCE(IDI_APP));
	wc.hCursor	= LoadCursor(NULL, IDC_SIZEWE);	//for splitter
	wc.cbWndExtra    = 0;
	wc.cbClsExtra    = 0;

	if (!RegisterClassEx(&wc))
		return FALSE;

	// Client window class
	memset(&wc, 0, sizeof(WNDCLASSEX));
	wc.cbSize        = sizeof(WNDCLASSEX);
	wc.style         = 0;
	wc.lpfnWndProc   = (WNDPROC)MdiChildWnd_WndProc;
	wc.hInstance     = hInst;
	wc.hIcon         = LoadIcon(hInst, MAKEINTRESOURCE(IDI_APP));
	wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
	wc.lpszMenuName  = NULL;
	wc.lpszClassName = "MdiChildWndClass";
	wc.cbClsExtra    = 0;
	wc.cbWndExtra    = 0;

	if (!RegisterClassEx((LPWNDCLASSEX) & wc))
		return FALSE;

	return TRUE;
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_OnCommand                                         *
 *                                                                          *
 * Purpose : Processes WM_COMMAND messages from the frame window            *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
LRESULT FrameWnd_OnCommand(HWND hwnd, int id, HWND hWndCtl, UINT codeNotify)
{
	switch (id)
	{
		case IDM_ABOUT:
			DialogBox(g_hInst, MAKEINTRESOURCE(IDD_ABOUT), g_hWndFrame, AboutDlg_WndProc);
			break;

	

		case IDM_WINDOWTILE:
			SendMessage(g_hWndClient, WM_MDITILE, 0, 0);
			break;

		case IDM_WINDOWCASCADE:
			SendMessage(g_hWndClient, WM_MDICASCADE, 0, 0);
			break;

		case IDM_WINDOWICONS:
			SendMessage(g_hWndClient, WM_MDIICONARRANGE, 0, 0);
			break;

		case IDM_WINDOWCLOSEALL:
			EnumChildWindows(g_hWndClient, MdiChildWnd_EnumChildDestroy, 0);
			break;

		case IDM_EXIT:
			PostMessage(hwnd, WM_CLOSE, 0, 0);
			break;
		
	}
	return 0;
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_OnCreate                                          *
 *                                                                          *
 * Purpose : Processes WM_CREATE message from the frame window              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
LRESULT FrameWnd_OnCreate(HWND hwnd, LPCREATESTRUCT lParam)
{
	INITCOMMONCONTROLSEX icex;

	icex.dwSize = sizeof(INITCOMMONCONTROLSEX);
	icex.dwICC = ICC_WIN95_CLASSES;

	InitCommonControlsEx(&icex);
	RECT rect;
	SystemParametersInfo( SPI_GETWORKAREA	,	  0,   &rect,   0 	  );
	uDrag = rect.right*0.25;
	if ((g_hWndClient = ClientWnd_Create(hwnd, g_hInst)) == NULL) 
		goto Failure;
	if ((g_hWndStatusBar = StatusBar_Create(hwnd, "Ready", numParts)) == NULL) 
		goto Failure;
	if ((g_hWndToolBar = ToolBar_Create(hwnd, g_hInst)) == NULL) 
		goto Failure;
	if ((g_hWndTreeMenu = TreeMenu_Create(hwnd, g_hInst)) == NULL) 
		goto Failure;
	// HDC hdc;
	// hdc=GetWindowDC(hwnd);
	// char hola[]="sanotto@yahoo.com";
	// rect.top=150;
	// rect.left=160;
	// rect.bottom=15;
	// rect.right=400;
	// DrawText(hdc,hola,sizeof(hola),&rect,DT_LEFT);
	return TRUE;

	Failure:
		MessageBox(GetActiveWindow(), "Could not create window!", "Error!", MB_OK);
		return FALSE;
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_OnSize                                            *
 *                                                                          *
 * Purpose : Processes WM_SIZE message from the frame window                *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
LRESULT FrameWnd_OnSize(HWND hwnd, int flag, int x, int y)
{

	// ReSize the various child windows
	SendMessage(g_hWndStatusBar, WM_SIZE, x, y);
	SendMessage(g_hWndToolBar, WM_SIZE, x, y);
	StatusBar_SizePanels(hwnd, g_hWndStatusBar, numParts);

	// Position the MDI client window between the tool and status bars
	if (flag != SIZE_MINIMIZED)
	{
		RECT rcStat, rcClient;
		GetClientRect(hwnd, &rcClient);
		GetWindowRect(g_hWndStatusBar, &rcStat);
		ScreenToClient(hwnd, (LPPOINT) & rcStat.left);
		rcClient.bottom = rcStat.top;
		GetWindowRect(g_hWndToolBar, &rcStat);
		rcClient.top = rcStat.bottom - rcStat.top - 3;
		MoveWindow(g_hWndClient, rcClient.left+uDrag+3, rcClient.top, rcClient.right - rcClient.left-uDrag, rcClient.bottom - rcClient.top, TRUE);
		MoveWindow(g_hWndTreeMenu, 1, rcClient.top, uDrag-3, rcClient.bottom - rcClient.top, TRUE);
	}
	
	return 0;
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_OnMenuSelect                                      *
 *                                                                          *
 * Purpose : Processes menu messages. A descriptive text is diplayed        *
 *           in the status bar for each menu item.                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
LRESULT FrameWnd_OnMenuSelect(HWND hwnd, HMENU hMenu, int uItem, HMENU hSubMenu, UINT fuFlags)
{
	static char szBuffer[256];
	UINT nStringID = 0;

	szBuffer[0] = 0;
	if (fuFlags == 0xffff && hMenu == NULL)	// Menu has been closed
	{
		nStringID = 0;
	}
	else if (fuFlags & MFT_SEPARATOR)	// Ignore separators
	{
		nStringID = 0;
	}

	else if (fuFlags & MF_POPUP)	// Popup menu
	{
		if (fuFlags & MF_SYSMENU){	// System menu
			nStringID = IDS_SYSMENU;
		}
		else
			nStringID = 0;	// Get string ID for popup menu from idPopup array.
	}
	else
	{	// Must be a command item
		nStringID = uItem - IDM_FIRST;	// String ID == Command ID
	}

	// Load the string if we have an ID
	if (nStringID != 0 && nStringID < IDS_SYSMENU)
	{
		if (nStringID >= IDS_FIRSTCHILD) // to select "Activates this window"
			nStringID = IDS_FIRSTCHILD;	 // for all child windows

		LoadString(g_hInst, nStringID, szBuffer, sizeof(szBuffer));
	}
	else
		strcpy(szBuffer, "Ready");

	StatusBar_SetText(g_hWndStatusBar, 0, szBuffer);

	return 0;
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_OnNotify                                          *
 *                                                                          *
 * Purpose : Processes WM_NOTIFY message from the frame window              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
LRESULT FrameWnd_OnNotify(HWND hwnd, int wParam, NMHDR * lParam)
{
	LPTOOLTIPTEXT lpttt;
	NM_TREEVIEW  *lpnmtv;
	TV_ITEM tvitem; 
	char buffer[256];

	lpttt = (LPTOOLTIPTEXT)lParam;
	lpnmtv= (NM_TREEVIEW FAR *) lParam ;
	if ( lpnmtv->hdr.code == TVN_SELCHANGED)
  {
		tvitem.hItem=lpnmtv->itemNew.hItem;
		tvitem.mask=TVIF_TEXT;
		tvitem.pszText=buffer;
		tvitem.cchTextMax =sizeof(buffer);
		TreeView_GetItem(g_hWndTreeMenu,&tvitem);
		
      
		if(strcmp(tvitem.pszText,"Dialog 1")==0)
		{
			MessageBox(NULL,"You selected Dialog 1","Your Selection is...",0);
			if(!MdiChildWnd_New(hwnd, "Dialogo 1",MAKEINTRESOURCE(IDD_DIALOG1),Dialog1_WndProc)) 
			{
				MessageBox(GetActiveWindow(), "Could not create Document window!", "Error!", MB_OK);
			}
		}
		if(strcmp(tvitem.pszText,"Dialog 2")==0){
			MessageBox(NULL,"You selected Dialog 1","Your Selection is...",0);
			if(!MdiChildWnd_New(hwnd, "Dialogo 2",MAKEINTRESOURCE(IDD_DIALOG2),NULL)) 
			{
			  MessageBox(GetActiveWindow(), "Could not create Document window!", "Error!", MB_OK);
			}
		}
		return 0;
	}

	if ((((LPNMHDR)lParam)->code) == TTN_NEEDTEXT)
	{
		int idCtrl = ((LPNMHDR)lParam)->idFrom;	// ID of toolbar button

		switch (idCtrl)
		{
			case IDM_NEW:
				lpttt->lpszText = (LPSTR)IDS_NEW;
				break;

			case IDM_OPEN:
				lpttt->lpszText = (LPSTR)IDS_OPEN;
				break;

			case IDM_SAVE:
				lpttt->lpszText = (LPSTR)IDS_SAVE;
				break;

			case IDM_PRINT:
				lpttt->lpszText = (LPSTR)IDS_PRINT;
				break;

			case IDM_CUT:
				lpttt->lpszText = (LPSTR)IDS_CUT;
				break;

			case IDM_COPY:
				lpttt->lpszText = (LPSTR)IDS_COPY;
				break;

			case IDM_PASTE:
				lpttt->lpszText = (LPSTR)IDS_PASTE;
				break;

			case IDM_UNDO:
				lpttt->lpszText = (LPSTR)IDS_UNDO;
				break;

			case IDM_SEARCH:
				lpttt->lpszText = (LPSTR)IDS_SEARCH;
				break;

			case IDM_HELP:
				lpttt->lpszText = (LPSTR)IDS_HELP;
				break;
		}
	}
	return 0;
}

/****************************************************************************
 *                                                                          *
 * Function: WinMain                                                        *
 *                                                                          *
 * Purpose : Initialize the application.  LoadAccelerators etc.             *
 *           The main message loop.                                         *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	MSG msg;
	//HANDLE hAccel;

	g_hInst = hInstance;

	
	SplashDialog_Launch();

	if (!WinMain_Init(g_hInst))
	{
		MessageBox(GetActiveWindow(), "Could not Initialise Application", "Error!", MB_OK);
		return 0;
	}

	//hAccel = LoadAccelerators(g_hInst, MAKEINTRESOURCE(ID_ACCEL));
	LoadAccelerators(g_hInst, MAKEINTRESOURCE(ID_ACCEL));

	if ((g_hWndFrame = FrameWnd_Create(g_hInst)) == NULL)
		return 0;

	// Start with a new child window.
	//PostMessage(g_hWndFrame, WM_COMMAND, IDM_NEW, 0);

	while (GetMessage(&msg, NULL, 0, 0))
	{
		// Check for special MDI messages.
    if (TranslateMDISysAccel(g_hWndClient, &msg));
    // Check for special dialog messages.
    else if (g_hwndActiveMDIChild && IsDialogMessage(GetWindow(g_hwndActiveMDIChild, GW_CHILD), &msg));
    else
    {
    	TranslateMessage(&msg);
      DispatchMessage(&msg);
    }
	}
	return msg.wParam;
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_OnClose                                           *
 *                                                                          *
 * Purpose : Processes WM_CLOSE message from the frame window               *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
LRESULT FrameWnd_OnClose(HWND hwnd)
{
	// Attempt to close all children
	SendMessage(hwnd, WM_COMMAND, IDM_WINDOWCLOSEALL, 0);
	// Destroy the application
	PostMessage(hwnd, WM_DESTROY, 0, 0);
	return 0L;
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_OnDestroy                                         *
 *                                                                          *
 * Purpose : Processes WM_DESTROY message from the frame window             *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
void FrameWnd_OnDestroy(HWND hwnd)
{
	PostQuitMessage(0);
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_WndProc                                                   *
 *                                                                          *
 * Purpose : Process application messages.                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
LRESULT CALLBACK FrameWnd_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	RECT rect;
	
	SystemParametersInfo( SPI_GETWORKAREA	,	  0,   &rect,   0 	  );
  switch (msg)
  {
		HANDLE_MSG(hwnd, WM_CREATE, FrameWnd_OnCreate);
		HANDLE_MSG(hwnd, WM_SIZE, FrameWnd_OnSize);
		HANDLE_MSG(hwnd, WM_NOTIFY, FrameWnd_OnNotify);
		HANDLE_MSG(hwnd, WM_MENUSELECT, FrameWnd_OnMenuSelect);
		HANDLE_MSG(hwnd, WM_CLOSE, FrameWnd_OnClose);
		HANDLE_MSG(hwnd, WM_DESTROY, FrameWnd_OnDestroy);
		case WM_LBUTTONDOWN:
			SetCapture(hwnd);
			bDrag = TRUE;
			return 0;
		case WM_LBUTTONUP:
			ReleaseCapture();
			bDrag = FALSE;
			return 0;
		case WM_MOUSEMOVE:
			if (bDrag) {
				uDrag = LOWORD(lParam);
				if ((uDrag < 10)||(uDrag > 65500)) uDrag=10;
				if (uDrag > (rect.right*0.50)) uDrag=(rect.right*0.50);
				FrameWnd_OnSize(hwnd,(UINT)SIZE_RESTORED ,(int)(short)LOWORD(lParam),(int)(short)HIWORD(lParam));
			
			}
			return 0;
		// This deals with close/max/min buttons of a 
		// child window when it is maximized
		case WM_LBUTTONDBLCLK:
			bDragBool=~bDragBool;

			if (bDragBool) uDrag=(rect.right*0.50);
			else uDrag=10;
			FrameWnd_OnSize(hwnd,(UINT)SIZE_RESTORED ,(int)(short)LOWORD(lParam),(int)(short)HIWORD(lParam));
			return 0;
		case WM_HELP:
				MessageBox(NULL,"Me too...\nDo you know about a good tutorial on writting and using help on windows?\nDo you know about a good tutorial on window printing and using preview?\nPlease, send me a link to sanotto@yahoo.com","Do you want help?",0);
			return 0;
		case WM_COMMAND: 
			HANDLE_WM_COMMAND(hwnd, wParam, lParam, FrameWnd_OnCommand);
			return DefFrameProc(hwnd, g_hWndClient, msg, wParam, lParam);
		default:
			return DefFrameProc(hwnd, g_hWndClient, msg, wParam, lParam);
	}
}

/****************************************************************************
 *                                                                          *
 * Function: MdiChildWnd_WndProc                                                *
 *                                                                          *
 * Purpose : Processes messages for MDI child windows.                      *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
LRESULT CALLBACK MdiChildWnd_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{


	switch (msg)
	{
   
		HANDLE_MSG(hwnd, WM_CREATE, MdiChildWnd_OnCreate);
    case WM_SIZE:
				SetWindowPos(GetWindow(hwnd, GW_CHILD), NULL, 0, 0,LOWORD(lParam), HIWORD(lParam), SWP_NOZORDER);
				break;
		HANDLE_MSG(hwnd, WM_MDIACTIVATE, MdiChildWnd_OnMDIActivate);
		case WM_CLOSE:
			/* TODO: */
			break; // do DefMDIChildProc

		case WM_DESTROY:
			/* TODO: */
			return 0;
	}
  
	return DefMDIChildProc(hwnd, msg, wParam, lParam);
}



/****************************************************************************
 *                                                                          *
 * Function: MdiChildWnd_GetChildWindowPlacement                                        *
 *                                                                          *
 * Purpose : Determines the condition of any active child window.           *
             shown when the user selects "About" in the "Help" menu.        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
DWORD MdiChildWnd_GetChildWindowPlacement(HWND hWndClient)
{
	WINDOWPLACEMENT wp;
	HWND h;
	wp.length = sizeof(WINDOWPLACEMENT);

	if (h = (HWND)SendMessage(hWndClient, WM_MDIGETACTIVE, 0, 0))
	{
		GetWindowPlacement(h, &wp);

		if (SW_SHOWMAXIMIZED == wp.showCmd)
			return WS_MAXIMIZE;
		else if (SW_SHOWNORMAL == wp.showCmd)
			return 0;
	}
	return 0;
}

/****************************************************************************
 *                                                                          *
 * Function: MdiChildWnd_New                                               *
 *                                                                          *
 * Purpose : Creates a new MDI window.                                      *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
HWND MdiChildWnd_New(HWND hwnd, char *title,LPSTR dialogID, WNDPROC dialogProc)
{

	char strTitle[MAX_PATH];
	static int cUntitled;
	
	//MDIWINDOWEXTRAINFO *ei;
	HWND newHwnd;


	if (title == NULL){
		sprintf(strTitle, "Untitled %d", cUntitled++);
	}else{
		strcpy(strTitle, title);
	}

	// Check to see if there is a previous child window, what state
	// it's in, maximised or normal. Set dwCUSTOM to reflect this state.
	DWORD dwCUSTOM = MdiChildWnd_GetChildWindowPlacement(g_hWndClient);

	//
	g_DialogID=dialogID;
	g_DialogProc=dialogProc;
  
	newHwnd= CreateWindowEx(WS_EX_MDICHILD | WS_EX_CLIENTEDGE, 
			"MdiChildWndClass", 
			strTitle, 
			 dwCUSTOM, 
			CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, 
			g_hWndClient, NULL, g_hInst, NULL);

	return newHwnd;
}

/****************************************************************************
 *                                                                          *
 * Function: MdiChildWnd_EnumChildDestroy                                                  *
 *                                                                          *
 * Purpose : Close all child windows                                        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
int MdiChildWnd_EnumChildDestroy(HWND hwnd, LPARAM lParam)
{
	if (GetWindow(hwnd, GW_OWNER))	// Check for icon title, exit if true
		return TRUE;

	// Tell client to close child
	SendMessage(GetParent(hwnd), WM_MDIDESTROY, (DWORD)hwnd, 0);
	return TRUE;
}

/****************************************************************************
 *                                                                          *
 * Function: ClientWnd_Create                                                *
 *                                                                          *
 * Purpose : Create the MDI client window.                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
HWND ClientWnd_Create(HWND hWndparent, HINSTANCE hInst)
{

	CLIENTCREATESTRUCT ccs = { 0 };
	HWND hWndClient;
	int icount = GetMenuItemCount(GetMenu(hWndparent));

	// Find window menu where children will be listed
	ccs.hWindowMenu = GetSubMenu(GetMenu(hWndparent), icount - 2);
	ccs.idFirstChild = IDM_FIRSTCHILD;

	// Create the MDI client filling the client area
	hWndClient = CreateWindowEx(WS_EX_LEFT | WS_EX_LTRREADING | WS_EX_RIGHTSCROLLBAR | WS_EX_CLIENTEDGE, 
		"MDICLIENT", 
		NULL, 
		WS_OVERLAPPED | WS_CHILD | WS_CLIPCHILDREN | WS_VSCROLL | WS_HSCROLL, 
		0, 0, 0, 0, hWndparent, (HMENU)0xCAC, hInst, (LPVOID) & ccs);

	if (!hWndClient)
		return 0;

	ShowWindow(hWndClient, SW_SHOW);

	return hWndClient;
}

/****************************************************************************
 *                                                                          *
 * Function: FrameWnd_Create                                              *
 *                                                                          *
 * Purpose : Create the main window, Frame Window.                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
HWND FrameWnd_Create(HINSTANCE hInst)
{
	RECT rect;
	HWND hwnd;

	SystemParametersInfo( SPI_GETWORKAREA	,	  0,   &rect,   0 	  );

	hwnd=CreateWindowEx(WS_EX_WINDOWEDGE | WS_EX_ACCEPTFILES, 
		"MDIDialogs3Class", 
		"MDIDialogs3 Program", 
		WS_MINIMIZEBOX | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | WS_MAXIMIZEBOX | WS_CAPTION | WS_BORDER | WS_SYSMENU | WS_THICKFRAME, 
		0, 0, rect.right, rect.bottom ,
		NULL, NULL, hInst, NULL);
	
	return hwnd;

}


/****************************************************************************
 *                                                                          *
 * Function: MdiChildWnd_OnCreate                                                 *
 *                                                                          *
 * Purpose : Process a WM_CREATE message.                                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static BOOL MdiChildWnd_OnCreate(HWND hwnd, CREATESTRUCT *pcs)
{
	// Beginning of a DIALOGEX resource in memory.
	typedef struct {
    	WORD dlgVer;
    	WORD signature;
    	DWORD helpID;
    	DWORD exStyle;
    	DWORD style;
    	WORD cDlgItems;
    	short x;
    	short y;
    	short cx;
    	short cy;
    	// more data follows...
	} MYDLGTEMPLATEEX, *PMYDLGTEMPLATEEX;
  HWND hwndDlg;
  HRSRC hrsrc;
  HGLOBAL hgRes;
  PMYDLGTEMPLATEEX pDlg;

  // Find the dialog resource (DLG_MDICHILD) and load into memory.
  if ((hrsrc = FindResource(NULL, g_DialogID, RT_DIALOG)) != NULL &&
      (hgRes = LoadResource(NULL, hrsrc)) != NULL &&
      (pDlg  = LockResource(hgRes)) != NULL)
  {
	
 		// Create the dialog from the memory area.
   	hwndDlg = CreateDialogIndirect( g_hInst, (LPDLGTEMPLATE)pDlg, hwnd, g_DialogProc);

    if (hwndDlg != NULL)
    {
	    RECT rcDlg;
      // Map from dialog units to screen units.
      rcDlg.left = pDlg->x;
      rcDlg.top = pDlg->y;
      rcDlg.right = pDlg->x + pDlg->cx;
      rcDlg.bottom = pDlg->y + pDlg->cy;
      MapDialogRect(hwndDlg, &rcDlg);
      // Resize the MDI window to *roughly* the size of the dialog (we don't account for borders).
 		  SetWindowPos(hwnd, NULL, 0, 0, rcDlg.right - rcDlg.left+10, rcDlg.bottom - rcDlg.top+40, SWP_NOZORDER|SWP_NOMOVE);
    }
  }
  return hwndDlg != NULL;
}

/****************************************************************************
 *                                                                          *
 * Function: Child_OnMDIActivate                                            *
 *                                                                          *
 * Purpose : Handle WM_MDIACTIVATE message.                                 *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static void MdiChildWnd_OnMDIActivate(HWND hwnd, BOOL fActive, HWND hwndActivate, HWND hwndDeactivate)
{
    if (fActive)
    {
        // Remember the active MDI child.
        g_hwndActiveMDIChild = hwnd;
        SetFocus(GetWindow(hwnd, GW_CHILD));
    }
}
