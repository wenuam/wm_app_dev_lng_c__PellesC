
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


HWND TreeMenu_Create(HWND hWndParent, HINSTANCE hInst)
{

	TV_ITEM tvi;
	TV_INSERTSTRUCT tvins;
	HTREEITEM hRoot;
	HTREEITEM hChild;
	HWND hwnd;


 	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE, WC_TREEVIEW, NULL,
			WS_CHILD | WS_VISIBLE | WS_TABSTOP |
			TVS_HASLINES | TVS_LINESATROOT |
			TVS_HASBUTTONS
			,0, 0, 0, 0,
			hWndParent, 0, hInst, NULL);	
	ZeroMemory(&tvins, sizeof(tvins));
	tvins.item.mask = TVIF_TEXT;
	tvins.item.pszText = "Root";
	tvins.item.cchTextMax = 10;
	hRoot=TreeView_InsertItem( hwnd, &tvins);
	tvins.hParent=hRoot;
	tvins.hInsertAfter=TVI_LAST;
	tvins.item.pszText = "Child";
	hChild=TreeView_InsertItem( hwnd, &tvins);
	tvins.hParent=hChild;
	tvins.item.pszText = "Dialog 1";
	TreeView_InsertItem( hwnd, &tvins);
	tvins.item.pszText = "Dialog 2";
	TreeView_InsertItem( hwnd, &tvins);
	tvins.item.pszText = "Sub-Child 3";
	TreeView_InsertItem( hwnd, &tvins);
	tvins.item.pszText = "foo";
	TreeView_InsertItem( hwnd, &tvins);
	tvins.item.pszText = "Bar";
	TreeView_InsertItem( hwnd, &tvins);
	return hwnd;		
}
