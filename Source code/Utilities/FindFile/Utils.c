// Utils.c
#define NOCRYPT
#define NOSERVICE
#define NOMCX
#define NOIME

#include "find.h"
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h> // qsort
#include <Shlobj.h>
#include <io.h>
#include <stdint.h>
#include "utils.h"
#include "findfile.h"

extern HINSTANCE g_hInst;

extern HBITMAP g_hMenuBmps[MAX_BITMAPS];
extern wchar_t g_strMenu[14][60];
extern int g_menuHeight;
// for sorting -
static int direction[4] = {0,0,0,0};

// if syscolor change need to know which column has a bitmap
static int lastdirection = -1;
static int lastwhich     = -1;

#define NUMCOLS 4

static wchar_t g_strCol[NUMCOLS][60];

/****************************************************************************
 *																			*
 * Function: FormatCommas													*
 *																			*
 * Purpose : FormatCommas() converts an unsigned long long to a string and  *
 *           inserts commas for thousands, millions, etc. To be displayed   *
 *           in the status bar after a scan.                                * 
 *																			*
 ****************************************************************************/
wchar_t * FormatCommas(unsigned long long num)
{
	int c;
	static wchar_t OutStr[100];
	wchar_t Buf[100];
	wchar_t *pBuf = Buf, *pOutStr = OutStr;

	swprintf(Buf, 100, L"%llu", num);

	c = 2 - (wcslen(Buf) % 3);

	while(*pBuf != 0)
	{
		*pOutStr++ = *pBuf;

		if (c == 1)
			*pOutStr++ = L',';

		c = (c + 1) % 3;
		pBuf++;
	}

	*--pOutStr = 0;
	return OutStr;
}

int GetLastSysError(void)
{
	LPVOID pSysMessage;
	DWORD  dwError;
	WCHAR  szBuffer[256];

	dwError = FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL,
							GetLastError(), MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US),
							(LPTSTR)&pSysMessage, 0, NULL);

	// Check to see if an error occured calling FormatMessage()
	if (0 == dwError)
	{
		wsprintf(szBuffer, L"An error occured calling FormatMessage()." " Error Code %d", GetLastError());
		MessageBox(GetActiveWindow(), szBuffer, TEXT("Generic Error"), MB_ICONSTOP | MB_ICONEXCLAMATION);
		return 0;
	}

	MessageBox(GetActiveWindow(), pSysMessage, L"System Error", MB_OK);
	LocalFree(pSysMessage); // free the reseved system memory.
	return 0;
}

void SetWindowResText(HWND hwnd, int resID)
{
	wchar_t s[180];
	LoadString(g_hInst, resID, s, ARRSIZE(s)-1);
	SetWindowText(hwnd, s);
}

BOOL IsModuleFile(const wchar_t * pathname)
{
#define NUMEXTENS	7
	wchar_t *strExeExt[NUMEXTENS] = {L"exe", L"dll", L"sys", L"drv", L"cpl", L"scr", L"com"};
	wchar_t ext[90];

	ExtractExt(pathname, ext);
	if(ext[0])
	{
		_wcslwr(ext);
		for(int i = 0; i<NUMEXTENS; i++)
		{
			if(!wcscmp(strExeExt[i], ext))
				return TRUE;
		}
	}
	return FALSE;
}

int IsImageFile(const wchar_t * pathname)
{
#define NUMPICEXT1	10
	static wchar_t * strPicExt1[NUMPICEXT1] = {L"wmf", L"dib", L"bmp", L"png",
											   L"tiff", L"tif", L"gif", L"emf", 
											   L"jpg", L"jpeg"};
#define NUMPICEXT2	1
	static wchar_t * strPicExt2[NUMPICEXT2] = {L"ico"};

	wchar_t ext[90];
	ExtractExt(pathname, ext);
	if(!ext[0])
		return 0;
	_wcslwr(ext);

	for(int i = 0; i<NUMPICEXT2; i++)
	{
		if(!wcscmp(ext, strPicExt2[i]))
			return 1;
	}

	for(int i = 0; i<NUMPICEXT1; i++)
	{
		if(!wcscmp(ext, strPicExt1[i]))
			return 2;
	}

	return 0;
}

void ResetColumnBitmaps(void)
{
	lastwhich	  = -1;
	lastdirection = -1;
}

void SetColumnBitmap(HWND hListview)
{
	// do the listview header images and text
	HWND hHeader = (HWND)SndMsg(hListview, LVM_GETHEADER, 0, 0);
	HDITEM hdi;
	memset(&hdi, 0, sizeof(HDITEM));

	// first clear all bitmaps from the header
	hdi.mask 	= HDI_FORMAT | HDI_TEXT;
	for(int i = 0; i<NUMCOLS; i++)
	{
		hdi.fmt  	= HDF_STRING;
		hdi.cchTextMax = (int)wcslen(g_strCol[i]);
		hdi.pszText	 = g_strCol[i];
		SndMsg(hHeader, HDM_SETITEM, (WPARAM)i, (LPARAM)&hdi);
	}

	if(lastwhich != -1 && lastdirection != -1)
	{
		if(lastdirection == 0)
			hdi.hbm		= g_hMenuBmps[ID_DOWN];
		else
			hdi.hbm		= g_hMenuBmps[ID_UP];

		hdi.mask 	= HDI_FORMAT | HDI_BITMAP | HDI_TEXT;
		hdi.fmt  	= HDF_BITMAP_ON_RIGHT | HDF_BITMAP | HDF_STRING;
		hdi.cchTextMax = (int)wcslen(g_strCol[lastwhich]);
		hdi.pszText	 = g_strCol[lastwhich];
		SndMsg(hHeader, HDM_SETITEM, (WPARAM)lastwhich, (LPARAM)&hdi);
	}
}

BOOL CreateSBar(HWND hwndParent, const wchar_t *initialText, int nrOfParts)
{
	int  ptArray[4];  // Array defining the number of parts/sections
	RECT rc;
	HWND hStatusbar = CreateWindowEx(0, STATUSCLASSNAME, NULL,
									 WS_CHILD | WS_VISIBLE | SBARS_SIZEGRIP, 0, 0, 0, 0,
									 hwndParent, (HMENU)IDC_STATUSBAR, GetModuleHandle(NULL), NULL);

	/*  CreateStatusWindow() is obsolete apparently.

		HWND hStatusbar = CreateStatusWindow(WS_CHILD | WS_VISIBLE |
			WS_BORDER | SBARS_SIZEGRIP, initialText, hwndParent, IDC_STATUSBAR);
	*/
	if(hStatusbar)
	{
		GetClientRect(hwndParent, &rc);
		ptArray[nrOfParts-1] = rc.right;
		SndMsg(hStatusbar, SB_SETPARTS, (WPARAM)nrOfParts, (LPARAM)(LPINT)ptArray);
		return TRUE;
	}
	return FALSE;
}

int __cdecl CompareFolders(const void * param1, const void * param2)
{
	FILEINFO * pfi1 = *(FILEINFO ** )param1;
	FILEINFO * pfi2 = *(FILEINFO ** )param2;
	if(!lastdirection)
		return _wcsicmp(pfi2->pathname, pfi1->pathname);
	else
		return _wcsicmp(pfi1->pathname, pfi2->pathname);
}

int __cdecl CompareNames(const void * param1, const void * param2)
{
	FILEINFO * pfi1 = *(FILEINFO ** )param1;
	FILEINFO * pfi2 = *(FILEINFO ** )param2;
	if(!lastdirection)
		return _wcsicmp(pfi2->filename, pfi1->filename);
	else
		return _wcsicmp(pfi1->filename, pfi2->filename);
}

int __cdecl CompareSizes(const void * param1, const void * param2)
{
	FILEINFO * pfi1 = *(FILEINFO ** )param1;
	FILEINFO * pfi2 = *(FILEINFO ** )param2;
	long long llsize1;
	long long llsize2;
	if(!lastdirection)
	{
		llsize1 = MAKELONGLONG(pfi1->nFileSizeLow, pfi1->nFileSizeHigh);
		llsize2 = MAKELONGLONG(pfi2->nFileSizeLow, pfi2->nFileSizeHigh);
	}
	else
	{
		llsize2 = MAKELONGLONG(pfi1->nFileSizeLow, pfi1->nFileSizeHigh);
		llsize1 = MAKELONGLONG(pfi2->nFileSizeLow, pfi2->nFileSizeHigh);
	}
	if(llsize1 < llsize2)
		return 1;
	else if(llsize1 > llsize2)
		return -1;

	return 0;
}

int __cdecl CompareDates(const void * param1, const void * param2)
{
	FILEINFO * pfi1 = *(FILEINFO ** )param1;
	FILEINFO * pfi2 = *(FILEINFO ** )param2;
	FILETIME * ft1;
	FILETIME * ft2;
	if(!lastdirection)
	{
		ft1 = &pfi1->ftLastWriteTime;
		ft2 = &pfi2->ftLastWriteTime;
	}
	else
	{
		ft2 = &pfi1->ftLastWriteTime;
		ft1 = &pfi2->ftLastWriteTime;
	}
	if(ft1->dwHighDateTime < ft2->dwHighDateTime)
		return 1;
	else if(ft1->dwHighDateTime > ft2->dwHighDateTime)
		return -1;

	return 0;
}

void SortItems(HWND hListview, FINDFILE_OPTIONS * pfileopts, int type)
{
	//	sort folders also 04 12 25 zo
	if (lastdirection == -1 )
		lastdirection = 1;
	if (type == lastwhich )
		direction[type] = lastdirection ? 0 : 1;
	else
		direction[type] = lastdirection ;

	FILEINFO ** ppfi = pfileopts->ppfi;
	HCURSOR hOldCursor = NULL;

	if(pfileopts->count > 10000)
	{
		hOldCursor = SetCursor(LoadCursor(NULL, IDC_WAIT));
	}

	lastdirection = direction[type];
	lastwhich	   = type;

	switch(type)
	{
	case 0:
		qsort(ppfi, pfileopts->count, sizeof(FILEINFO*), CompareNames);
		break;
	case 1:
		qsort(ppfi, pfileopts->count, sizeof(FILEINFO*), CompareFolders);
		break;
	case 2:
		qsort(ppfi, pfileopts->count, sizeof(FILEINFO*), CompareSizes);
		break;
	case 3:
		qsort(ppfi, pfileopts->count, sizeof(FILEINFO*), CompareDates);
	}
	SetColumnBitmap(hListview);
	if(pfileopts->count > 10000)
	{
		SetCursor(hOldCursor);
	}

	return;
}

void ExtractFileName(const wchar_t * path, wchar_t * fname)
{
	wchar_t * p;
	if((p = wcsrchr(path, '\\')) != NULL)
	{
		wcscpy(fname, p+1);

		if((p = wcsrchr(fname, '"')) != NULL) // remove trailing '"' if exists
			fname[p-fname] = 0;
	}
	else
		*fname = 0;

}


void ExtractExt(const wchar_t * path, wchar_t * ext)
{
	wchar_t * p;
	if((p = wcsrchr(path, '.')) != NULL)
		wcscpy(ext, p+1);
	else
		*ext = 0;
}

void ListView_SetColHeadTxtAll( HWND hwndLbx, int nCols)
{
	// Load header column strings
	for(int i = 0; i<NUMCOLS; i++)
	{
		LoadString(g_hInst, i + 25, g_strCol[i], 49);
	}

	LV_COLUMN lvc;
	memset( &lvc, 0, sizeof(LV_COLUMN) );
	for (int i = 0; i<nCols; i++)
	{
		lvc.iSubItem = i;
		lvc.mask	 = LVCF_FMT | LVCF_TEXT | LVCF_SUBITEM;
		lvc.pszText  = g_strCol[i];
		lvc.fmt	     = LVCFMT_LEFT;
		ListView_SetColumn(	hwndLbx, i, &lvc );
	}
}

void ListView_SetColumnWidths(HWND hwndLbx, int baseunitX, int numcols, int * width)
{
	LV_COLUMN lvc;
	memset( &lvc, 0, sizeof(LV_COLUMN) );
	lvc.mask = LVCF_FMT | LVCF_WIDTH | LVCF_TEXT | LVCF_SUBITEM;
	lvc.fmt = LVCFMT_LEFT;
	for(int i = 0; i<numcols; i++)
	{
		lvc.iSubItem = i;
		lvc.cx		 = MulDiv(*width++, baseunitX, 4);
		ListView_InsertColumn( hwndLbx, i, &lvc );
	}
}

int GetFontHeight(HWND hwnd, HFONT hFont)
{
	HANDLE hObj;
	TEXTMETRIC tm;
	HDC hdc = GetDC(hwnd);
	hObj = SelectObject(hdc, hFont);
	GetTextMetrics(hdc,	&tm); 	// address of text metrics structure
	SelectObject(hdc, hObj);
	ReleaseDC(hwnd, hdc);
	return tm.tmHeight;
}

void RemoveFileCountBraces(wchar_t * s)
{
	wchar_t * p = wcschr(s, ']');
	if(p)
		p += 2;
	else
		return;
	size_t len  = wcslen(s);
	memmove(s, s + (p-s), len*sizeof(wchar_t) - (p-s)+1);
}

void DestroyBitmaps(void)
{
	for(int i = 0 ; i<MAX_BITMAPS; i++)
	{
		if(g_hMenuBmps[i])
			DeleteObject(g_hMenuBmps[i]);
	}
}

HBITMAP LoadBitmapMappedRes(HINSTANCE hinst, int ord)
{
	HBITMAP hBitmap;
	BITMAP bm;

	hBitmap = LoadBitmap(hinst, MAKEINTRESOURCE(ord));

	// Create memDC and Select the bitmap
	HDC 	hdcMem	= CreateCompatibleDC(GetDC(NULL));
	HGDIOBJ hOldObj = SelectObject(hdcMem, hBitmap);
	int x, y;

	COLORREF ColFrom = RGB(192, 192, 192);
	COLORREF ColTo   = GetSysColor(COLOR_MENU);

	GetObject(hBitmap, sizeof(BITMAP), &bm);

	// Change the background colour to ColTo
	for(x = 0; x<bm.bmWidth; x++)
	{
		for(y = 0; y<bm.bmHeight; y++)
		{
			if(GetPixel(hdcMem, x, y) == ColFrom)
				SetPixelV(hdcMem, x, y, ColTo);
		}
	}

	// Select old object back and delete memDC.
	SelectObject(hdcMem, hOldObj);
	DeleteDC(hdcMem);

	return hBitmap;
}

void LoadBitmaps(HINSTANCE hInst)
{
	for(int i = ID_FOLDER; i<MAX_BITMAPS; i++)
		g_hMenuBmps[ID_FOLDER + i] = LoadBitmapMappedRes(hInst, i+200);
}

int GetMenuItemState(HMENU hMenu, int id)
{
	MENUITEMINFO mii;
	GetMenuItemInfo(hMenu, id, FALSE, &mii);
	return (int)mii.dwItemData;
}

int InitMenu(HWND hwnd)
{
	// Load menu strings
	for(int i = 0; i<13; i++)
	{
		LoadString(g_hInst, i + 1, g_strMenu[i], 58);
	}

	//g_strMenu
	MENUITEMINFO mii;
	HMENU hMenu = GetMenu(hwnd);
	wchar_t s[140];
	LoadString(g_hInst, 82, s, ARRSIZE(s)-1); // File
	ModifyMenu(hMenu, 0, MF_BYPOSITION | MF_STRING, 0, s);
	LoadString(g_hInst, 83, s, ARRSIZE(s)-1); // Edit
	ModifyMenu(hMenu, 1, MF_BYPOSITION | MF_STRING, 1, s);
	LoadString(g_hInst, 84, s, ARRSIZE(s)-1); // Help
	ModifyMenu(hMenu, 2, MF_BYPOSITION | MF_STRING, 2, s);

	mii.cbSize   = sizeof(MENUITEMINFO);
	mii.fMask	  = MIIM_FTYPE | MIIM_DATA;
	mii.fType	  = MFT_OWNERDRAW;
	mii.dwItemData = ENABLED;
	SetMenuItemInfo(hMenu, IDM_FOLDER, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_OPEN, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_RENAME, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_COPYTO, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_MOVETO, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_DELETE, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_RECYCLE, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_PROPERTIES, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_EXIT, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_EDITSENDTO, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_EXTENDEDSEARCH, FALSE, &mii);
	SetMenuItemInfo(hMenu, IDM_ABOUT, FALSE, &mii);

	return 1;
}

int DrawMenuBitMap(HBITMAP hBmp, HDC hDc, RECT * rc)
{
	HANDLE hdcMem, hOldObject;
	BITMAP bmp;

	//================================================================
	// Create DC and select bmp into it.
	//================================================================
	hdcMem 	= CreateCompatibleDC(hDc);
	hOldObject = SelectObject(hdcMem, hBmp);
	GetObject(hBmp, sizeof(BITMAP), &bmp);

	//================================================================
	// Blit it starting from nOffx/nOffy.
	//================================================================
	if(g_menuHeight < 24)
		BitBlt(hDc, rc->left+2, rc->top+3, rc->right, rc->bottom, hdcMem, 0, 0, SRCCOPY);
	else
		BitBlt(hDc, rc->left+4, rc->top+5, rc->right, rc->bottom, hdcMem, 0, 0, SRCCOPY);

	//================================================================
	// Select old object back and delete memDC.
	//================================================================
	SelectObject(hdcMem, hOldObject);
	DeleteDC(hdcMem);
	return TRUE;
}

