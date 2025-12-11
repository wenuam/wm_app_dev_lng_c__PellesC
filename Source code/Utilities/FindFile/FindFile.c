/****************************************************************************
 *                                                                          *
 * File    : FindFile.c                                                     *
 *                                                                          *
 * Purpose : Main unit of the FindFile application.                         *
 *                                                                          *
 ****************************************************************************
 *                                                                          *
 * FindFile finds files or text in files. Scans drives fast and will search *
 * by dates or sizes. You can launch, delete, copy, move, drag & drop files *
 * etc. Command line ability was added by Stephan Zorn.                     *
 *                                                                          *
 * FindFile uses the registry.                                              *
 * KEY HKEY_CURRENT_USER/Software/FindFile                                  *
 *                                                                          *
 * This is a UNICODE only application                                       *
 *                                                                          *
 *************************************r**************************************/
//
// cmdline example    /PB:\PellesC\Projects/TCreateWindow/D+/S+/C+/F*.c
//
#include <stdio.h> 
#include <tchar.h>
#include "find.h"		// includes windows.h
#include "findfileres.h"
#include "registry.h"
#include "dialogs.h"
#include "idragdrop.h"
#include "utils.h"
#include "findfile.h"
#include "buttonEx.h"
#include "shell.h"
#include "unicode.h"

// the Resource Compiler compained this was conflicting with another 
// ID in findfileres.h so it has been moved here.
#define ID_BUT_SEARCH 1

// Speed things up slightly
#pragma intrinsic(memcpy,strcpy,strlen)
#pragma intrinsic(wmemcpy,wcscpy,wcslen)

static DWORD g_dwStart = 0; 		// for displaying time of search

#define DIR_COUNT 100 // used in CallBackProc
/****************************************************************************
 *																			*
 * Global variables 														*
 *																			*
 ****************************************************************************/
#define PREVIEW_MEMSIZE 8000	// buffer size for displaying text (header text)

int g_menuHeight;
HBITMAP g_hMenuBmps[MAX_BITMAPS];
wchar_t g_strMenu[14][60];

wchar_t * g_strHeader;				 // buffer for displaying text (header text)
wchar_t * g_strDepends;
wchar_t   g_strSendto[6][PATH_SIZE]; // extern in dialogs.c (Folders or Executables)
wchar_t   g_strDisp[6][MAX_DISP];	 // extern in dialogs.c (DisplayNames)

static int	 	g_activateDepends = 0;
static wchar_t * g_lpCmdLine; 		 // s.zorn cmdline extension 04.02.06
static BOOL 	 g_bEndding = FALSE; // if the main window is closed do not continue
// with pending SubClassRenameEditBoxProc()

static WNDPROC	  pSubClassPictureBoxProc	 = NULL;	// subclasing
static WNDPROC	  pSubClassTextBoxProc		 = NULL;	// ^^ditto^^
static WNDPROC	  pSubClassRenameEditBoxProc = NULL;	// ^^ditto^^
static WNDPROC	  pSubClassExtPaneProc		 = NULL;	// ^^ditto^^
LRESULT CALLBACK  SubClassExtPaneProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

static HICON g_hIcon; // icon for the Search button
static HMEM g_hMem;   // memory handler returned from find.c used in SubClassRenameEditBoxProc()

static HFONT g_hFont;										// for TextBox

static int g_iCase, g_iSubFolder, g_iFileCounts;	// option check box's
int g_iAutoWildcards, g_iUniSearch, g_iBmhSearch;	// option check box's;
/*
 the names for the header are stored in Utils.c
*/
static int g_ColWidth[NUMCOLS] = {48, 96, 32, 40}; // dialog units for headers

#define NUM_MRU 10
static wchar_t	g_sMru[NUM_MRU][PATH_SIZE];				 // most recently used files

HBRUSH g_hBrLite;				// light colour as brush for static control bkgnds.
COLORREF g_bkCol = RGB(234, 232, 227);


static RD g_dlg = { 1, 3, 320, 203, SW_SHOWNORMAL }; // default dlg pos & size
static RD g_bk	= { 3, 4, 80, 204 };				   // default back panel pos & size

static int g_dwLastNative;			// index of combobox 'BROWSE'

static SYSTEMTIME g_st;				// used to display date/time in DiaogProc
static FILETIME g_real;				// convert filetime to local time
static FILEINFO * g_pfi;			// used for the g_fileopts.fi[]
static FINDFILE_OPTIONS g_fileopts;	// this must be a global structure
static EXTENDED g_ext;				// for extended search params

wchar_t g_sUni[30];
HWND g_hwndMain;

HINSTANCE g_hInst;

static HCURSOR g_hCurEW, g_hCurArrow;
static HPEN    g_hLightPen, g_hWhitePen, g_hShadowPen;

// used in the file rename function
// for IDM_COPYTO/IDM_MOVETO etc.
static wchar_t g_sGen0[PATH_SIZE];				// general purpose string
static wchar_t g_sGen1[PATH_SIZE];				// general purpose string
static wchar_t g_sGen2[PATH_SIZE];				// general purpose string

static wchar_t g_sInitialDir[PATH_SIZE];		// PATH_SIZE is (MAX_PATH*2)
static wchar_t g_sFilterTxt[PATH_SIZE];
wchar_t 	   g_sTxtSearch[PATH_SIZE];
static char    g_sTxtSearchMb[PATH_SIZE];
static wchar_t g_sTxtSearchWc[PATH_SIZE];

static int g_CountDirs = 0;

// Stuff added to allow the preview of wmf, dib, bmp, png, tiff, tif, gif, emf, jpg using GDIPlus.
#include "GdipImage.h"
// Global gpimage declared in GdipImage.c
extern GP_IMAGE gpimage;
wchar_t gdipFileName[MAX_PATH];
HICON ghhIcon = NULL;

/****************************************************************************
 *																			*
 * Function: CallBackProc													*
 *																			*
 * Purpose : CallBackProc() is called from the FindFile_scanPath() in unit	*
 *			 find.c. This function does four things depending on the 'msg'  *
 *			 Adds an entry to the listbox if count is less than 1000		*
 *			 Updates status bar with the folder being searched				*
 *			 Updates status bar with file being searched					*
 *			 Does the final processing when the search is finished			*
 *																			*
 ****************************************************************************/
// 'name' is cast for (wchar_t*) and (HMEM)
void CallBackProc(int msg, void * name)
{
	static wchar_t str[150];
	static LV_ITEM lvI = {0};
	wchar_t s[PATH_SIZE];

	if(g_fileopts.count == 1)
		SetFocus(GetCtrl(g_hwndMain, ID_BUT_CANCEL));

	if(msg == FF_READ_FILE && g_fileopts.count<1000)
	{
		// insert item for this index, subitem 0
		lvI.iItem	 = ListView_GetItemCount(GetCtrl(g_hwndMain, IDC_LISTVIEW));
		lvI.iSubItem = 0;
		lvI.pszText  = NULL;
		lvI.mask	 = LVIF_TEXT;
		SndCtrlMsg(g_hwndMain, IDC_LISTVIEW, LVM_INSERTITEM, (WPARAM)0, (LPARAM)&lvI);
	}

	if(msg == FF_SEARCH_FILE)
	{
		LoadString(g_hInst, 30, s, ARRSIZE(s)-1);	// Searching..
		swprintf(g_sGen0, PATH_SIZE, L"%ls%ls", s, (wchar_t *)name);
		SndCtrlMsg(g_hwndMain, IDC_STATUSBAR, SB_SETTEXT, (WPARAM)0, (LPARAM)g_sGen0);
	}

	if ((msg == FF_READ_DIR) && (g_sTxtSearch[0] == 0))
	{
		// Displaying each folder name in status bar has slowed somewhat since XP
		// so only show folders on a count of DIR_COUNT
		g_CountDirs++;
		if (g_CountDirs == DIR_COUNT)
		{
			g_CountDirs = 0;
			LoadString(g_hInst, 30, s, ARRSIZE(s)-1);	// Searching..
			swprintf(g_sGen0, PATH_SIZE, L"%ls%ls", s, (wchar_t *)name);
			SndCtrlMsg(g_hwndMain, IDC_STATUSBAR, SB_SETTEXT, (WPARAM)0, (LPARAM)g_sGen0);
		}
	}

	if(msg == FF_FINISHED)
	{
		DWORD dwtime = GetTickCount();
		dwtime -= g_dwStart;
		double timesec = ((double)dwtime) / 1000;

		//g_fileopts.ullBytes=0;
		//for(int i = 0; i<g_fileopts.count; i++)
		//{
			//g_fileopts.ullBytes += MAKELONGLONG(g_fileopts.ppfi[i]->nFileSizeLow, g_fileopts.ppfi[i]->nFileSizeHigh);

		//}

		g_hMem = (HMEM)name; // get the memory handle it is used in SubClassRenameEditBoxProc()
		LoadString(g_hInst, 31, s, ARRSIZE(s)-1); // search done in %1.3f sec ...  %u File(s) found %ls Total bytes
		swprintf(str, ARRSIZE(s), s, timesec, g_fileopts.count, FormatCommas(g_fileopts.ullBytes));//
		ListView_SetItemCount(GetCtrl(g_hwndMain,IDC_LISTVIEW), g_fileopts.count);
		EnableWindow(GetCtrl(g_hwndMain, ID_BUT_CANCEL), FALSE);
		EnableWindow(GetCtrl(g_hwndMain, ID_BUT_SEARCH), TRUE);
		PostMessage(g_hwndMain, FF_FINISHED, 0, (LPARAM)str);
	}
}

/****************************************************************************
 *																			*
 * Function: Rename 														*
 *																			*
 * Purpose : Used when user wants to rename a file. A new window is created *
 *			 and positioned over where the renamming is taking place.		*
 *			 The function SubClassRenameEditBoxProc() takes care of 		*
 *			 renamming the file when the window is destroyed.				*
 *																			*
 ****************************************************************************/

void Rename(HWND hListView, int idx)
{
	RECT rc;
	HFONT hF = (HFONT)SndMsg(hListView, WM_GETFONT, 0, 0);

	// width of the first column
	int cx = ListView_GetColumnWidth(hListView, 0);

	MyListView_GetItemRect(hListView, idx, &rc, LVIR_ICON);

	int h = GetFontHeight(hListView, hF);

	if(h<15)  		// when the display is set to small fonts the
	{
		h++;		// editbox height and position needs adjusting
	}

	int x = rc.left + rc.right-4;
	HWND hw = CreateWindow(L"edit", g_fileopts.ppfi[idx]->filename,
						   WS_BORDER | ES_AUTOHSCROLL | ES_MULTILINE | WS_CHILD | ES_WANTRETURN,
						   x, rc.top, cx - x + 50, h + 4,
						   hListView, (HMENU)ID_EDIT_RENAME, g_hInst, NULL);

	SetWindowLongPtr(hw, GWLP_USERDATA, idx);		// listview items index
	SndMsg(hw, WM_SETFONT, (WPARAM)hF, 0);
	SndMsg(hw, EM_SETSEL, 0, -1);
	pSubClassRenameEditBoxProc = (WNDPROC)SetWindowLongPtr(hw, GWLP_WNDPROC, (LONG_PTR)SubClassRenameEditBoxProc);
	ShowWindow(hw, SW_SHOW);
	SetFocus(hw);
}

int __cdecl DisplayThreadLocale(void)
{
	wchar_t szTmp[512];

	LCID lcidt = GetThreadLocale();
	LCID lcids = GetSystemDefaultLCID();
	LCID lcidu = GetUserDefaultLCID();
	wsprintf(szTmp,
			 L"ThreadLocale  0x%04X\n SystemDefaultLCID  0x%04X\n UserDefaultLCID 0x%04X",
			 lcidt, lcids, lcidu);
	MessageBox(0, szTmp, L"DefaultLCID", MB_OK);
	return 0;
}

// From example Timo put on the PellesC forum.
void SetLanguage(LANGID lid)
{
	typedef LANGID (WINAPI *fnPtr) (LANGID wReserved);

	if ((GetVersion() & 0x00FF) > 5) // Vista =>
	{
		LANGID lid2;
		fnPtr pSetThreadUILanguage  = (fnPtr)GetProcAddress(
				GetModuleHandle(L"kernel32.dll"), "SetThreadUILanguage");
		
		if (pSetThreadUILanguage)
			// lid2 should equal lid
			lid2 = (*pSetThreadUILanguage)(lid);

	}
	else
	{
		SetThreadLocale(MAKELCID(lid, SORT_DEFAULT));
	}

}


/****************************************************************************
 *																			*
 * Function: WinMain														*
 *																			*
 * Purpose : Entry point - performs various initializations and starts the	*
 *			 Dialog Box 													*
 *																			*
 ****************************************************************************/
int APIENTRY wWinMain(HINSTANCE hinst, HINSTANCE hinstPrev, wchar_t * lpCmdLine, int nCmdShow)
{
	/*	These calls to SetLanguage() are only for testing purposes.
		Normally the Locale is set automatically for your locale by the OS.
		For completeness this also needs to be done for the other thread in 
		Private_FindFile()
    */

	//SetLanguage(0x0809); // English (UK)
	//SetLanguage(0x040c); // French
	//SetLanguage(0x0407); // German (Standard) 
	//SetLanguage(0x0416); // Portuguese (Brazil)
	//SetLanguage(0x040b); // Finnish
	//SetLanguage(0x0419); // Rusian
	//SetLanguage(0x0413); // Dutch

	// This needs to be here for the MsgBox() call that requires ButtonEx stuff.
	InitButtonEx();

	// Don't start more than one instance of FindFile
	HANDLE hMutex = CreateMutex(0, FALSE, L"F-i-n-d-F-i-l-e");	// try to create a named mutex
    if(GetLastError() == ERROR_ALREADY_EXISTS)					// did the mutex already exist?
    {
		wchar_t sMess[100];
		LoadString(hinst, 95, sMess, ARRSIZE(sMess)); // Another instance of FindFile is running
		MsgBox(0, sMess);
		ExitButtonEx();
	    return 0; 									// quit
	}

	if(OleInitialize(NULL) != S_OK)
		return FALSE;

	GpStatus st;
	/*
		GdiplusVersion = 1
		DebugEventCallback = NULL
		SuppressBackgroundThread = FALSE
		SuppressExternalCodecs = FALSE
	*/
	GdiplusStartupInput gdiplusStartupInput = {1, NULL, FALSE, FALSE};
	ULONG_PTR gdiplusToken;

	st = GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

	g_hInst = hinst;

	g_hIcon = LoadImage(hinst, MAKEINTRESOURCE(IDI_FINDFILE),
						IMAGE_ICON, 24, 24, LR_DEFAULTSIZE | LR_DEFAULTCOLOR);

	WNDCLASS wc;
	memset(&wc, 0, sizeof(WNDCLASS));
	wc.lpfnWndProc	 = DefDlgProc;
	wc.style		 = CS_DBLCLKS;
	wc.cbWndExtra	 = DLGWINDOWEXTRA;
	wc.hInstance	 = hinst;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon		 = LoadIcon(hinst, MAKEINTRESOURCE(IDI_FINDFILE));
	wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
	wc.lpszMenuName  = MAKEINTRESOURCE(IDMENU_MAIN);
	wc.lpszClassName = L"findfile";
	if(!RegisterClass(&wc))
		return 0;

	g_lpCmdLine = lpCmdLine;

	g_hCurEW	= LoadCursor(NULL, IDC_SIZEWE);
	g_hCurArrow = LoadCursor(NULL, IDC_ARROW);
	g_hWhitePen = CreatePen(PS_SOLID, 1, RGB(255,255,255));
	g_hShadowPen= CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNSHADOW));
	g_hLightPen = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNHIGHLIGHT));

	// Ensure that the common control DLL is loaded.
	INITCOMMONCONTROLSEX icex;
	icex.dwSize = sizeof(INITCOMMONCONTROLSEX);
	icex.dwICC	= ICC_USEREX_CLASSES | ICC_LISTVIEW_CLASSES | ICC_STANDARD_CLASSES;
	InitCommonControlsEx(&icex);
	
	DialogBox(hinst, MAKEINTRESOURCE(IDDIALOG_MAIN), NULL, (DLGPROC) MainWndProc);

	ExitButtonEx();

	DeleteObject(g_hWhitePen);
	DeleteObject(g_hLightPen);
	DeleteObject(g_hShadowPen);
	DestroyIcon(g_hIcon);

	GdiplusShutdown(gdiplusToken);
	if(ghhIcon != NULL)
		DestroyIcon(ghhIcon);
	OleUninitialize();
	ReleaseMutex(hMutex);

	return 0;
}

/****************************************************************************
 *																			*
 * Function: InitComboBox													*
 *																			*
 * Purpose : Initializes the drop-down combo box with local drives, creates *
 *			 the image list that is used in the combo box and adds any		*
 *			 recetly Browsed folders to the drop-down list. 				*
 *																			*
 ****************************************************************************/
BOOL InitComboBox(HWND hwnd)
{
	HWND hwndCombo = GetCtrl(hwnd, IDC_COMBO);

	COMBOBOXEXITEM cbei;
	memset(&cbei, 0, sizeof(COMBOBOXEXITEM));

	wchar_t all[100];
	wchar_t buff[1024];
	wchar_t * p = buff;

	wchar_t s[140];
	LoadString(g_hInst, 32, s, ARRSIZE(s)-1); // Local Drives
	wcscpy(all, s);
	wchar_t * pAll = all + wcslen(s);

	HIMAGELIST hSmallC = ImageList_Create(16, 16, ILC_COLOR8 | TRUE, 7, 0);

	for(int i=10; i<19; i++)
	{
		ImageList_AddIcon(hSmallC, LoadIcon(g_hInst, MAKEINTRESOURCE(i)));
	}
	SndMsg(hwndCombo, CBEM_SETIMAGELIST, 0, (LPARAM)hSmallC);

	int index = 0;
	GetLogicalDriveStrings(1024, buff);
	while (*p != 0)
	{
		cbei.mask = CBEIF_TEXT | CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
		cbei.pszText		= g_sGen0;
		cbei.cchTextMax 	= sizeof(g_sGen0);

		switch (GetDriveType(p))
		{
		case DRIVE_UNKNOWN:
			_wcsupr(p);
			LoadString(g_hInst, 33, s, ARRSIZE(s)-1); // Unknown Drive Type..
			wcscat(s, L"%ls");
			swprintf(g_sGen0, PATH_SIZE, s, p);
			cbei.iItem			= index++;
			cbei.iImage 		= IDI_UND_DRIVE;
			cbei.iSelectedImage = IDI_UND_DRIVE;
			SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
			break;

		case DRIVE_NO_ROOT_DIR:
			_wcsupr(p);
			LoadString(g_hInst, 34, s, ARRSIZE(s)-1); // No Mounted Volume..
			wcscat(s, L"%ls");
			swprintf(g_sGen0, PATH_SIZE, s, p);
			cbei.iItem			= index++;
			cbei.iImage 		= IDI_NOT_DRIVE;
			cbei.iSelectedImage = IDI_NOT_DRIVE;
			SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
			break;

		case DRIVE_REMOVABLE:
			_wcsupr(p);
			if(wcschr(p, 'A') || wcschr(p, 'B'))
			{
				LoadString(g_hInst, 35, s, ARRSIZE(s)-1); // Floppy Drive..
				wcscat(s, L"%ls");
				swprintf(g_sGen0, PATH_SIZE, s, p);
			}
			else
			{
				LoadString(g_hInst, 36, s, ARRSIZE(s)-1); // Removable Drive..
				wcscat(s, L"%ls");
				swprintf(g_sGen0, PATH_SIZE, s, p);
			}
			cbei.iItem			= index++;
			cbei.iImage 		= IDI_REMOVEABLE_DRIVE;
			cbei.iSelectedImage = IDI_REMOVEABLE_DRIVE;
			SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
			break;

		case DRIVE_FIXED:
			_wcsupr(p);
			LoadString(g_hInst, 87, s, ARRSIZE(s)-1); // Local Drive
			wcscat(s, L"%ls");
			swprintf(g_sGen0, PATH_SIZE, s, p);
			cbei.iItem			= index++;
			cbei.iImage 		= IDI_FIXED_DRIVE;
			cbei.iSelectedImage = IDI_FIXED_DRIVE;
			SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
			swprintf(pAll, 100, L"%ls ", p); // separator == space
			pAll += 4;
			break;

		case DRIVE_REMOTE:
			_wcsupr(p);
			LoadString(g_hInst, 37, s, ARRSIZE(s)-1); // Remote Drive..
			wcscat(s, L"%ls");
			swprintf(g_sGen0, PATH_SIZE, s, p);
			cbei.iItem			= index++;
			cbei.iImage 		= IDI_REMOTE_DRIVE;
			cbei.iSelectedImage = IDI_REMOTE_DRIVE;
			SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
			break;

		case DRIVE_CDROM:
			_wcsupr(p);
			LoadString(g_hInst, 38, s, ARRSIZE(s)-1); // CdRom Drive..
			wcscat(s, L"%ls");
			swprintf(g_sGen0, PATH_SIZE, s, p);
			cbei.iItem			= index++;
			cbei.iImage 		= IDI_CD_DRIVE;
			cbei.iSelectedImage = IDI_CD_DRIVE;
			SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
			break;

		case DRIVE_RAMDISK:
			_wcsupr(p);
			LoadString(g_hInst, 39, s, ARRSIZE(s)-1); // RAM Drive..
			wcscat(s, L"%ls");
			swprintf(g_sGen0, PATH_SIZE, s, p);
			cbei.iItem			= index++;
			cbei.iImage 		= IDI_RAM_DRIVE;
			cbei.iSelectedImage = IDI_RAM_DRIVE;
			SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
			break;
		}
		p += wcslen(p);
		p++;
	}

	all[wcslen(all)-1] = 0;
	cbei.mask = CBEIF_TEXT | CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
	cbei.iItem			= 0;
	cbei.pszText		= all;
	cbei.cchTextMax 	= sizeof(all);
	cbei.iImage 		= IDI_FIXED_DRIVE;
	cbei.iSelectedImage = IDI_FIXED_DRIVE;
	SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
	index++;

	cbei.mask = CBEIF_TEXT | CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
	cbei.iItem			= index++;
	LoadString(g_hInst, 85, s, ARRSIZE(s)-1);
	cbei.pszText		= s;
	cbei.cchTextMax 	= sizeof(g_sGen0);
	cbei.iImage 		= IDI_FOLDER;
	cbei.iSelectedImage = IDI_FOLDER;
	SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);

	cbei.mask = CBEIF_TEXT;
	g_dwLastNative = index-1;

	cbei.mask = CBEIF_TEXT | CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
	cbei.iImage 		= IDI_OPENFOLDER;
	cbei.iSelectedImage = IDI_OPENFOLDER;

	for(int i = 0; i<NUM_MRU; i++)
	{
		if(g_sMru[i][0])
		{
			cbei.iItem			= index++;
			cbei.pszText		= g_sMru[i];
			cbei.cchTextMax 	= sizeof(g_sMru[i]);
			SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
		}
	}
	SndMsg(hwndCombo, CB_SETCURSEL, 0, 0);

	return TRUE;
}



/****************************************************************************
 *																			*
 * Function: GetUserParams													*
 *																			*
 * Purpose : Retrieves various user parameters from the GUI controls		*
 *			 and performs some processing of the Initial dir string.		*
 *																			*
 ****************************************************************************/
void GetUserParams(HWND hwnd)
{
	wchar_t s[140];
	size_t idx = SndCtrlMsg(hwnd, IDC_COMBO, CB_GETCURSEL, (WPARAM)0, (LPARAM)0);
	SndCtrlMsg(hwnd, IDC_COMBO, CB_GETLBTEXT, (WPARAM)idx, (LPARAM)g_sInitialDir);
	wchar_t * p = g_sInitialDir;
	size_t c = wcslen(g_sInitialDir);


	LoadString(g_hInst, 32, s, ARRSIZE(s)-1); // Local Drives

	//****************************************
	// attempts to correct any short fall.
	//****************************************
	if(c==1)
		g_sInitialDir[c++] = ':';

	if((c==2) || (p[1] == ':' && p[2] == '\\'))
	{
		if(p[c-1] != '\\')
		{
			g_sInitialDir[c++] = '\\';
		}
		g_sInitialDir[c++] = ';'; 	// was 188;
		g_sInitialDir[c] = 0;
	}
	else if(wcsstr(g_sInitialDir, s))
	{
		p = wcschr(g_sInitialDir, ':') -2;
		idx = 0;
		while(*p++)
		{
			if(*p == ' ')		// was 32
				g_sInitialDir[idx++] = ';';		// was 188;
			else if(*p != 0)
				g_sInitialDir[idx++] = *p;
		}
		g_sInitialDir[idx++] = ';';		// was 188;
		g_sInitialDir[idx]	 = '\0';
	}
	else if(wcsstr(g_sInitialDir, L"\\\\"))     // network
	{
		wcscat(g_sInitialDir, L"\\");
		idx = wcslen(g_sInitialDir);
		g_sInitialDir[idx++] = ';';		// was 188;
		g_sInitialDir[idx]	 = '\0';
	}
	else
	{
		c = wcslen(g_sInitialDir) -3;
		for(idx = c; idx<wcslen(g_sInitialDir); idx++)
		{
			*p++ = g_sInitialDir[idx];
		}
		*p++ = ';'; 	// was 188;
		*p	 = '\0';
	}

	// filter text
	g_sFilterTxt[0] = 0;
	GetWindowText(GetCtrl(hwnd, ID_EDIT_FILTER), g_sFilterTxt, PATH_SIZE);

	// case sensitive?	file counts only?
	g_iCase 	  = IsDlgButtonChecked(hwnd, ID_CHK_CASE);
	g_iSubFolder  = IsDlgButtonChecked(hwnd, ID_CHK_SUBFOLDER);
	g_iFileCounts = IsDlgButtonChecked(hwnd, ID_CHK_OCCUR);
	g_iAutoWildcards  = IsDlgButtonChecked(hwnd, ID_CHK_AUTOWILDC);
	g_iUniSearch  = IsDlgButtonChecked(hwnd, ID_CHK_UNI);

	// text search
	g_sTxtSearch[0] = 0;
	GetWindowText(GetCtrl(hwnd, ID_EDIT_SEARCH), g_sTxtSearch, PATH_SIZE);

	// If compiled as unicode we need to convert unicode TxtSearch string
	// to ansi for normal seaching.
	if(!g_iUniSearch)
	{
		wcstombs(g_sTxtSearchMb, g_sTxtSearch, PATH_SIZE);
	}
	else
	{
		wcscpy(g_sTxtSearchWc, g_sTxtSearch);
	}

}

/****************************************************************************
 *																			*
 * Function: SizeControls													*
 *																			*
 * Purpose : Positions and sizes the GUI controls. This is quite involved	*
 *			 when different system font sizes and DPI settings are used.	*
 *			 GetFontDialogUnits() finds the true average width and			*
 *			 height and the selected font, MapCtrl() then positions and 	*
 *			 resizes the controls by adjusting for the dialog base units.	*
 *																			*
 ****************************************************************************/
void SizeControls(HWND hwnd)
{
	RECT rc, rc1;
	GetClientRect(hwnd, &rc);
	GetClientRect(GetCtrl(hwnd,IDC_STATUSBAR), &rc1);
	// do status bar
	SndCtrlMsg(hwnd, IDC_STATUSBAR, SB_SETPARTS, (WPARAM)1, (LPARAM)(LPINT)&rc.right);
	SndCtrlMsg(hwnd, IDC_STATUSBAR, WM_SIZE, (WPARAM)LOWORD(rc.right), (LPARAM)0);

	g_bk.b = ((rc.bottom-rc1.bottom)*8)/g_dlg.dy - 6;

	// all controls are relative to the left back panel
	MapCtrl(GetCtrl(hwnd, ID_STATIC_FILE),	 g_bk.l+3, g_bk.t+5, g_bk.r-6, 12, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_EDIT_FILTER), g_bk.l+3, g_bk.t+14, g_bk.r-6, 12, TRUE);

	MapCtrl(GetCtrl(hwnd, IDC_COMBO),		g_bk.l+3, g_bk.t+31, g_bk.r-6, 60, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_CHK_SUBFOLDER), g_bk.l+3, g_bk.t+48, g_bk.r-6, 12, TRUE);

	// sz 040623
	MapCtrl(GetCtrl(hwnd, ID_CHK_AUTOWILDC), g_bk.l+3, g_bk.t+60, g_bk.r-6, 12, TRUE);

	MapCtrl(GetCtrl(hwnd, ID_STATIC_TSEARCH), g_bk.l+3, g_bk.t+82, g_bk.r-6, 12, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_EDIT_SEARCH),	g_bk.l+3, g_bk.t+92,  g_bk.r-6, 12, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_CHK_CASE),	g_bk.l+3, g_bk.t+108,  g_bk.r-6, 12, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_CHK_OCCUR), g_bk.l+3, g_bk.t+120, g_bk.r-6, 12, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_CHK_UNI),	g_bk.l+3, g_bk.t+132, g_bk.r-6, 12, TRUE);

	// all Extended controls here g_bk.b
	MapCtrl(GetCtrl(hwnd, ID_CHK_ENABLE_EXT), g_bk.l+3, g_bk.t+144, g_bk.r-6, 12, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_STATIC_EXTBACK), g_bk.l+3, g_bk.t+156, g_bk.r-6, 58, TRUE);

	HWND h = GetCtrl(hwnd, ID_STATIC_EXTBACK);
	MapCtrl(GetCtrl(h, ID_STATIC_DATE_AFTER), 	2, 6, 38, 10, TRUE);
	MapCtrl(GetCtrl(h, ID_STATIC_DATE_AFTER_TXT), 44, 6, 38, 10, TRUE);

	MapCtrl(GetCtrl(h, ID_STATIC_DATE_BEFORE),	 2,	18, 38, 10, TRUE);
	MapCtrl(GetCtrl(h, ID_STATIC_DATE_BEFORE_TXT), 44, 18, 38, 10, TRUE);

	MapCtrl(GetCtrl(h, ID_STATIC_SIZE_MORE),		2,	30, 38, 10, TRUE);
	MapCtrl(GetCtrl(h, ID_STATIC_SIZE_MORE_TXT), 44, 30, 38, 10, TRUE);

	MapCtrl(GetCtrl(h, ID_STATIC_SIZE_LESS),		2,	42, 38, 10, TRUE);
	MapCtrl(GetCtrl(h, ID_STATIC_SIZE_LESS_TXT), 44, 42, 38, 10, TRUE);

	//=================
	MapCtrl(GetCtrl(hwnd, ID_BUT_SEARCH), g_bk.r+8,	g_bk.t+g_bk.b-14, 54, 14, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_BUT_CANCEL), g_bk.r+66, g_bk.t+g_bk.b-14, 54, 14, TRUE);

	// width & height in dlg units
	int width  = (rc.right*4)/g_dlg.dx - (g_bk.l + g_bk.r + 8);
	int width1 = (rc.right*4)/g_dlg.dx - (g_bk.l + g_bk.r + 87);

	// These need a finer ajustment so use MoveWindow
	MoveWindow(GetCtrl(hwnd, ID_STATIC_PICBOX),((g_bk.r+8)*g_dlg.dx)/4,
			   (g_bk.t*g_dlg.dy)/8, (width*g_dlg.dx)/4-1, (83*g_dlg.dy)/8, TRUE);
	MoveWindow(GetCtrl(hwnd, ID_EDIT_HEADER), ((g_bk.r+86)*g_dlg.dx)/4,
			   (g_bk.t*g_dlg.dy)/8+2, (width1*g_dlg.dx)/4, (83*g_dlg.dy)/8-4, TRUE);

	MapCtrl(GetCtrl(hwnd, IDC_LISTVIEW), g_bk.r+8, g_bk.t+88, width, g_bk.b-104, TRUE);
	MapCtrl(GetCtrl(hwnd, ID_STATIC_BACK),	 g_bk.l, g_bk.t, g_bk.r, g_bk.b, TRUE);

	InvalidateRect(GetCtrl(hwnd, ID_STATIC_PICBOX), NULL, TRUE);
	InvalidateRect(GetCtrl(hwnd, ID_EDIT_HEADER), NULL, TRUE);

	// This is to ensure the buttons are displayed correctly
	// when resizing.
	//=================
	InvalidateRect(GetCtrl(hwnd, ID_BUT_CANCEL), NULL, FALSE);
	InvalidateRect(GetCtrl(hwnd, ID_BUT_SEARCH), NULL, FALSE);
}

#define GETCURSORPOS(h, x) GetCursorPos(&x); ScreenToClient(h, &x)

/****************************************************************************
 *																			*
 * Function: MoveBar														*
 *																			*
 * Purpose : MoveBar is called when the user left clicks inside the 		*
 *			 vertical bar that separates the left panel from the other		*
 *			 parts of the dialog box.										*
 *			 As the user clicks, a shaded bitmap is drawn and is moved when *
 *			 the user moves the mouse horizontally. When the mouse button	*
 *			 is released the GUI elements are redrawn in new positions. 	*
 *																			*
 ****************************************************************************/
int MoveBar(HWND hwnd)
{
	int left, top, right, bot, curpos, limit_right;
	RECT   rc;
	POINT  pt;
	HPEN   oldP;
	HBRUSH oldB;
	HDC    hdc;

	// get the width of the window
	GetClientRect(hwnd, &rc);
	limit_right = rc.right - 100;

	// The bitmap bits
	short Bits[8] = {0x0055, 0x00AA, 0x0055, 0x00AA,
					 0x0055, 0x00AA, 0x0055, 0x00AA};

	HBITMAP hBitmap = CreateBitmap( 8, 8, 1, 1, Bits );
	HBRUSH hBrush = CreatePatternBrush( hBitmap );

	// select objects
	hdc = GetDC(hwnd);
	oldP = SelectObject(hdc, GetStockObject(NULL_PEN)); //hPen
	oldB = SelectObject(hdc, hBrush);

	int barwidth = (4*g_dlg.dx)/4 + 2;

	// set up bar rectangle
	left = ((g_bk.r + 3)*g_dlg.dx)/4;
	right = left + barwidth;
	top = ((g_bk.t+1)*g_dlg.dy)/8-1;
	bot = ((g_bk.b+3)*g_dlg.dy)/8+3;

	// get first mouse position
	GETCURSORPOS(hwnd, pt);
	curpos = pt.x;

	// XOR
	SetROP2(hdc, R2_XORPEN);

	HANDLE hEvent = CreateEvent(NULL, TRUE, FALSE, NULL);
	ResetEvent(hEvent);

	// draw the first Rectangle
	Rectangle(hdc, left, top, right, bot);
	while(GetAsyncKeyState(VK_LBUTTON) & 0x8000)
	{
		MsgWaitForMultipleObjects(1, &hEvent, TRUE, 10, QS_MOUSEMOVE);
		GETCURSORPOS(hwnd, pt);
		if(curpos != pt.x)
		{

			if (pt.x < curpos)
			{
				// moving left
				if(left + (pt.x - curpos) > 100)
				{
					Rectangle(hdc, left, top, right, bot);	// erase
					left -= (curpos - pt.x);
					right = left + barwidth;
					curpos = pt.x;
					Rectangle(hdc, left, top, right, bot);	// draw new position
				}
			}
			else if (pt.x > curpos)
			{
				// moving right
				if(left + (pt.x - curpos) < limit_right)
				{
					Rectangle(hdc, left, top, right, bot); // erase
					left -= (curpos - pt.x);
					right = left + barwidth;
					curpos = pt.x;
					Rectangle(hdc, left, top, right, bot);	// draw new position
				}
			}
		}
	}
	// erase last rectangle
	Rectangle(hdc, left, top, right, bot);
	SelectObject(hdc, oldP);
	SelectObject(hdc, oldB);
	ReleaseDC(hwnd, hdc);

	DeleteObject(hBrush);
	DeleteObject(hBitmap);

	if(((g_bk.r+3)*g_dlg.dx)/4 != left)
	{
		g_bk.r = ((left)*4)/g_dlg.dx - 2;	// remake g_bk.r
		return 1;
	}
	else
		return 0;
}

/****************************************************************************
 *																			*
 * Function: ClearPreview													*
 *																			*
 * Purpose : ClearPreview is called in various places.						*
 *																			*
 *			 The preview window is cleared, the main window title is set	*
 *			 and any picture object is released.							*
 *																			*
 ****************************************************************************/
void ClearPreview(HWND hwnd)
{
	// clear previous text
	memset(g_strHeader, 0, PREVIEW_MEMSIZE + 16);

	SetWindowResText(hwnd, 44); // FindFile
	gdipFileName[0] = 0;
	InvalidateRect(GetCtrl(hwnd, ID_STATIC_PICBOX), NULL, TRUE);		// Paint it!
}

/****************************************************************************
 *																			*
 * Function: SortHead														*
 *																			*
 * Purpose : Converts to and from UNICODE and removes any embedded zero's	*
 *																			*
 *																			*
 ****************************************************************************/
wchar_t * SortHeadText(FILE * fh, const wchar_t * pathname, int * sizebytes)
{
	#define NUMEXTS 16
	int bom = NOBOM;
	int i, includeCheck = 0;
	wchar_t ext[100];
	wchar_t * wcBuffer = g_strHeader;

	// common extensions that will be checked for Unicode
	static wchar_t * Exts[NUMEXTS] = {L"asc", L"asm", L"bas", L"c", L"cc", L"cpp",
									  L"csv", L"cxx", L"h", L"hpp", L"hxx", L"rc",
									  L"rc2", L"text", L"txt", L"uni"};

	ExtractExt(pathname, ext);

	_wcslwr(ext);
	for(i = 0; i<NUMEXTS; i++)
	{
		if(wcscmp(Exts[i], ext) == 0)
		{
			includeCheck = 1;
			break;
		}
	}

	char mbBuffer[*sizebytes*2];
	int sz = *sizebytes;

	if(includeCheck)   // files designated above in Exts[] array.
	{

		bom = CheckBom(wcBuffer);

		int cntCRBE = 0, cntCRLE = 0, cntHighLE = 0, cntHighBE = 0;

		// Check text for NO BOMs U32 and U16, BE and LE
		if(bom == NOBOM)
		{
			CheckUtf32LE((uint32_t*)wcBuffer, &cntCRLE, &cntHighLE);
			if(cntCRLE && cntHighLE)
				bom = UTF32LENB;
		}

		if(bom == NOBOM)
		{
			CheckUtf32BE((uint32_t*)wcBuffer, &cntCRBE, &cntHighBE);
			if(cntCRBE && cntHighBE)
				bom = UTF32BENB;
		}

		if(bom == NOBOM)
		{
			CheckUtf16LE(wcBuffer, &cntCRLE, &cntHighLE);
			if(cntCRLE && cntHighLE)
				bom = UTF16LENB;
		}

		if(bom == NOBOM)
		{
			CheckUtf16BE(wcBuffer, &cntCRBE, &cntHighBE);
			if(cntCRBE && cntHighBE)
				bom = UTF16BENB;
		}
	}

	// copy the data and take out any 0x00's
	if (bom <= UTF8B)
	{
		memcpy(mbBuffer, wcBuffer, sz);
		// take out any '0's
		for(i = 0; i<sz; i++)
		{
			if(mbBuffer[i] == 0)
				mbBuffer[i] = '0';
		}
		mbBuffer[sz] = 0;
	}

	if(bom == NOBOM)   // ANSI, UNIX or UTF8 No-BOM or other
	{
		int valid;
		wcscpy(g_sUni, L" ");

		// include known ext's that need checking
		if(includeCheck)
		{
			if((valid = CheckUtf8(fh)) != 0)
			{
				wcscpy(g_sUni, L" - [UTF8]NO BOM");
			}
			else
			{
				if((valid = CheckUnix(mbBuffer)) != 0)
				{
					AdjustUnix(mbBuffer, sz);
					wcscpy(g_sUni, L" - [UNIX]");
				}
			}
			// Convert to widechar, use CP_UTF8 in case it's No BOM UTF8
			// Ordinary ASCII is valid UTF8 too
			MultiByteToWideChar(CP_UTF8, 0, mbBuffer, sz, wcBuffer, sz);
		}
		else
			// Other
			MultiByteToWideChar(CP_ACP, 0, mbBuffer, sz, wcBuffer, sz);

	}
	else if (bom == UTF8B)     // UTF-8 BOM
	{
		// convert to unicode
		MultiByteToWideChar(CP_UTF8, 0, mbBuffer, sz, wcBuffer, sz);
		wcscpy(g_sUni, L" - [UTF8]BOM");
	}

	// Finished with UTF8 and ANSI possibilites
	//
	// Take out any 0x00's and if necessary change endian-ness
	if (bom >= UTF16LE && bom <= UTF16BENB)
	{
		sz = *sizebytes/2; // wide chars
		for(i = 0; i<sz; i++)
		{
			if(bom == UTF16BE || bom == UTF16BENB)
				wcBuffer[i] = (wcBuffer[i] >> 8) | (wcBuffer[i] << 8);

			if(wcBuffer[i] == 0)
				wcBuffer[i] = L'0';
		}
	}

	if (bom == UTF16LE)   	// Unicode-16LE
	{
		wcscpy(g_sUni, L" - [UTF16LE]BOM");
	}
	else if (bom == UTF16BE)     // Unicode-16BE
	{
		wcscpy(g_sUni, L" - [UTF16BE]BOM");
	}
	else if (bom == UTF16LENB)     // UTF-16LE NoBOM
	{
		wcscpy(g_sUni, L" - [UTF16LE]NO BOM");
	}
	else if (bom == UTF16BENB)     // UTF-16BE NoBOM
	{
		wcscpy(g_sUni, L" - [UTF16BE]NO BOM");
	}
	else if (bom == UTF32BEB)     // UTF-32BE BOM
	{
		Utf32Utf8((char*)wcBuffer, *sizebytes, 0, mbBuffer, *sizebytes);
		MultiByteToWideChar(CP_UTF8, 0, mbBuffer, *sizebytes, wcBuffer, *sizebytes);
		wcscpy(g_sUni, L" - [UTF32BE]BOM");
	}
	else if (bom == UTF32LEB)     // UTF-32LE BOM
	{
		Utf32Utf8((char*)wcBuffer, *sizebytes, 0, mbBuffer, *sizebytes);
		MultiByteToWideChar(CP_UTF8, 0, mbBuffer, *sizebytes, wcBuffer, *sizebytes);
		wcscpy(g_sUni, L" - [UTF32LE]BOM");
	}
	else if (bom == UTF32BENB)     // UTF-32BE NoBOM
	{
		Utf32Utf8((char*)wcBuffer, *sizebytes, bom, mbBuffer, *sizebytes);
		MultiByteToWideChar(CP_UTF8, 0, mbBuffer, *sizebytes, wcBuffer, *sizebytes);
		wcscpy(g_sUni, L" - [UTF32BE]NO BOM");
	}
	else if (bom == UTF32LENB)     // UTF-32LE NoBOM
	{
		Utf32Utf8((char*)wcBuffer, *sizebytes, bom, mbBuffer, *sizebytes);
		MultiByteToWideChar(CP_UTF8, 0, mbBuffer, *sizebytes, wcBuffer, *sizebytes);
		wcscpy(g_sUni, L" - [UTF32LE]NO BOM");
	}
	wcBuffer[*sizebytes]   = '\0';
	wcBuffer[*sizebytes+1] = '\0';
	return wcBuffer;
}

/****************************************************************************
 *																			*
 * Function: DisplayFileHead												*
 *																			*
 * Purpose : Displays the first few chars in the preview window				*
 *			 and calls OleLoadPicFile() if the file is an image. 			*
 *																			*
 ****************************************************************************/
void DisplayFileHead(HWND hwnd, const wchar_t * pathname, long long filesize)
{
	FILE *f;

	if(!g_strHeader)
		return;

	ClearPreview(hwnd);

	if(!filesize)
	{
		wcscpy(g_sUni, L" ");
		return;
	}

	f = _wfopen(pathname, L"rb");

	if(!f)
		return;

	int size = (int)fread(g_strHeader, 1, PREVIEW_MEMSIZE/2, f);
	g_strHeader[size/2] = 0;
	wchar_t * p = SortHeadText(f, pathname, &size);
	SndCtrlMsg(hwnd, ID_EDIT_HEADER, WM_SETTEXT, (WPARAM)0, (LPARAM)p);
	fclose(f);

	gdipFileName[0] = 0;
	if(ghhIcon != NULL)
	{
		DestroyIcon(ghhIcon);
		ghhIcon = NULL;
	}

	int i =  IsImageFile(pathname);
	if(i == 1)   // Icon (ico)
	{
		ghhIcon = LoadImage(NULL, pathname, IMAGE_ICON, 0, 0, LR_DEFAULTSIZE | LR_LOADFROMFILE);
	}

	if(i == 2)   // GdiPlus (wmf, dib, bmp, png, tif, gif, emf, jpg)
	{
		wcscpy(gdipFileName, pathname);
	}
	InvalidateRect(GetCtrl(hwnd, ID_STATIC_PICBOX), NULL, TRUE);

}

/****************************************************************************
 *																			*
 * Function: MapCtrl														*
 *																			*
 * Purpose : Reposition and size GUI controls adjusting for Dialog Base 	*
 *			 Units, g_dlg.dx and g_dlg.dy									*
 *																			*
 ****************************************************************************/
void MapCtrl(HWND hCrtl, int x, int y, int cx, int cy, BOOL rePaint)
{
	x  = MulDiv(x,	g_dlg.dx, 4);
	cx = MulDiv(cx, g_dlg.dx, 4);
	y  = MulDiv(y,	g_dlg.dy, 8);
	cy = MulDiv(cy, g_dlg.dy, 8);
	MoveWindow(hCrtl, x, y, cx, cy, rePaint);
}

/****************************************************************************
 *																			*
 * Function: InitDialog 													*
 *																			*
 * Purpose : The main initialization for the Dialog Box. Checks for 		*
 *			 Command Line and processes it. Reads registry settings etc.	*								*
 *																			*
 ****************************************************************************/
int InitDialog(HWND hwnd)
{
	// Set all the window texts
	SetWindowResText(hwnd, 44); // FindFile
	SetWindowResText(GetCtrl(hwnd, ID_CHK_ENABLE_EXT), 51); // Enable Extended Search
	SetWindowResText(GetCtrl(hwnd, ID_STATIC_FILE), 52); 	// File Search
	SetWindowResText(GetCtrl(hwnd, ID_STATIC_TSEARCH), 53); // Text Search
	SetWindowResText(GetCtrl(hwnd, ID_CHK_SUBFOLDER), 54);  // Search SubFolders
	SetWindowResText(GetCtrl(hwnd, ID_CHK_AUTOWILDC), 55);  // *AutoWildcards*
	SetWindowResText(GetCtrl(hwnd, ID_CHK_CASE), 56); 		// Case Sensitive
	SetWindowResText(GetCtrl(hwnd, ID_CHK_OCCUR), 57); 		// File counts only
	SetWindowResText(GetCtrl(hwnd, ID_CHK_UNI), 86);   		// Unicode Text Search
	SetWindowResText(GetCtrl(hwnd, ID_BUT_CANCEL), 58);  	// Cancel
	SetWindowResText(GetCtrl(hwnd, ID_BUT_SEARCH), 59);  	// Search

	// byte buffer for displaying text (header text)
	g_strHeader = malloc(PREVIEW_MEMSIZE + 16);

	ReadRegistry();

	// position main window
	MoveWindow(hwnd, (g_dlg.l * g_dlg.dx) / 4, (g_dlg.t * g_dlg.dy) / 8, (g_dlg.r * g_dlg.dx) / 4, (g_dlg.b * g_dlg.dy) / 8, FALSE);

	wchar_t s[40];
	LoadString(g_hInst, 81, s, ARRSIZE(s)-1); // Ready
	CreateSBar(hwnd, s, 1); //

	// check, 'one click activate' or 'two click activate' and set
	// listview accordingly
	SHELLFLAGSTATE sfs;
	memset(&sfs, 0, sizeof(SHELLFLAGSTATE));
	SHGetSettings(&sfs, SSF_DOUBLECLICKINWEBVIEW);
	DWORD dwExStyle;
	if (sfs.fDoubleClickInWebView)
		dwExStyle = LVS_EX_UNDERLINEHOT | LVS_EX_GRIDLINES | LVS_EX_TRACKSELECT;
	else
		dwExStyle = LVS_EX_UNDERLINEHOT | LVS_EX_GRIDLINES | LVS_EX_ONECLICKACTIVATE | LVS_EX_TRACKSELECT;

	SndCtrlMsg(hwnd, IDC_LISTVIEW, LVM_SETEXTENDEDLISTVIEWSTYLE, (WPARAM)0, (LPARAM)dwExStyle);

	EnableWindow(GetCtrl(hwnd, ID_BUT_CANCEL), FALSE);
	ListView_SetColumnWidths(GetCtrl(hwnd, IDC_LISTVIEW), g_dlg.dx, NUMCOLS, g_ColWidth);
	ListView_SetColHeadTxtAll(GetCtrl(hwnd, IDC_LISTVIEW), NUMCOLS);	// set all header texts

	// font is used for many controls
	g_hFont = CreateFont(-16, 0, 0, 0, 400, 0, 0, 0,
						 ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, FIXED_PITCH, FF_MODERN,
						 L"Courier New"); //MS Shell Dlg

	InitComboBox(hwnd);

	HideCaret(GetCtrl(hwnd, ID_EDIT_SEARCH));
	SetFocus(GetCtrl(hwnd, ID_EDIT_FILTER));

	// subclass static box so that we can draw in it's WM_PAINT.
	pSubClassPictureBoxProc = (WNDPROC)SetWindowLongPtr(GetCtrl(hwnd, ID_STATIC_PICBOX), GWLP_WNDPROC, (LONG_PTR)SubClassPictureBoxProc);
	pSubClassTextBoxProc = (WNDPROC)SetWindowLongPtr(GetCtrl(hwnd, ID_EDIT_HEADER), GWLP_WNDPROC, (LONG_PTR)SubClassTextBoxProc);

	SndCtrlMsg(hwnd, ID_EDIT_HEADER, WM_SETFONT, (WPARAM)g_hFont, (LPARAM)0);
	SndCtrlMsg(hwnd, ID_EDIT_HEADER, EM_SETLIMITTEXT, (WPARAM)0, (LPARAM)0); // max size
	DWORD tab = 16;
	SndCtrlMsg(hwnd, ID_EDIT_HEADER, EM_SETTABSTOPS, (WPARAM)1, (LPARAM)&tab);
	if (g_iCase == 1)
		CheckDlgButton(hwnd, ID_CHK_CASE, TRUE);
	if (g_iSubFolder == 1)
		CheckDlgButton(hwnd, ID_CHK_SUBFOLDER, TRUE);
	if (g_iFileCounts == 1)
		CheckDlgButton(hwnd, ID_CHK_OCCUR, TRUE);
	if (g_iAutoWildcards == 1)
		CheckDlgButton(hwnd, ID_CHK_AUTOWILDC, TRUE);

	// retrieve and associate the system icon list with the listview control
	SHFILEINFO shfi;
	memset(&shfi, 0, sizeof(SHFILEINFO));
	HIMAGELIST himlSmall;
	himlSmall = (HIMAGELIST)SHGetFileInfo(L"", 0, &shfi, sizeof(SHFILEINFO), SHGFI_SYSICONINDEX | SHGFI_SMALLICON);
	if (himlSmall)
		ListView_SetImageList(GetCtrl(hwnd, IDC_LISTVIEW), himlSmall, LVSIL_SMALL);

	InitMenu(hwnd);

	// Stephan Zorn
	// 2004.06.30

#ifndef NOCMDLINE
	// parse commandline for options
	{
		size_t n = wcslen(g_lpCmdLine) * sizeof(wchar_t);
		if (n > 0)
		{
			wchar_t *cpact = NULL;
			wchar_t *ftext = calloc(PATH_SIZE, sizeof(wchar_t));
			wchar_t *spath = calloc(PATH_SIZE, sizeof(wchar_t));
			wchar_t *texts = calloc(PATH_SIZE, sizeof(wchar_t));

			//	 for ( int i=0; i<PATH_SIZE; i++) { ftext[i] = spath[i] = texts[i] = 0; }

			int *ipact = NULL;
			int icsens = 0;	// case sensitive search
			int ioccur = 0;	// file counts only
			int isubfd = 1;	// search subfolders
			int ifiltf = 0;	// filter edit control focus
			int idoit = 0;	// execute search with cmdline parameters
			int iautowc = g_iAutoWildcards;	// automatic wildcard expansion

			enum { eparse, eptext, epint };
			int istate = eparse;

			wchar_t c;
			wchar_t *cp = wcscpy(g_sGen0, g_lpCmdLine);

			// =================================================
			// If cmdline is not for Stephan Zorn's extension
			// =================================================
			// Specifically for use with the Explorer SendTo - must be
			// a cmdline with path+filename
			wchar_t fname[MAX_PATH*2];
			if(g_sGen0[0] != '/')
			{
				ExtractFileName(g_sGen0, fname);
				if(fname[0])
				{
					wcscpy(g_sGen0, L"/F");  // File search filter
					wcscat(g_sGen0, fname);
					wcscat(g_sGen0, L"/D+"); // Search on /D+ - wildcards off /W-
				}
				else
				{
					// If no filename has been extracted pass nothing
					g_sGen0[0] = 0;
				}
			}


			while ((c = *cp) != 0)
			{
				switch (istate)
				{
				case eparse:
					if (c == '/')
						c = *(++cp);
					switch (c)
					{
					case 'f':
					case 'F':
						cpact = ftext;
						istate = eptext;
						break;
					case 'p':
					case 'P':
						cpact = spath;
						istate = eptext;
						break;
					case 't':
					case 'T':
						cpact = texts;
						istate = eptext;
						break;
					case 'c':
					case 'C':
						ipact = &icsens;
						istate = epint;
						break;
					case 'o':
					case 'O':
						ipact = &ioccur;
						istate = epint;
						break;
					case 's':
					case 'S':
						ipact = &isubfd;
						istate = epint;
						break;
					case 'd':
					case 'D':
						ipact = &idoit;
						istate = epint;
						break;
					case 'e':
					case 'E':
						ipact = &ifiltf;
						istate = epint;
						break;
					case 'w':
					case 'W':
						ipact = &iautowc;
						istate = epint;
						break;
					}
					cp++;
					n = 0;
					break;

				case eptext:
					if (c == '/')
					{
						istate = eparse;
					}
					else
					{
						cpact[n++] = c;
						cpact[n] = 0;
						cp++;
					}
					break;

				case epint:
					switch (c)
					{
					case '/':
						istate = eparse;
						cp--;
						break;
					case '+':
						*ipact = 1;
						break;
					case '-':
						*ipact = 0;
					}
					cp++;
				}	//switch (istate)
			}	//while


			//feed dialogs with cmdline values

			//search path
			if (0 < wcslen(spath))
			{
				int l = wcslen(spath) - 1;
				// remove quotes if there are any
				if (spath[0] == '"' && spath[l] == '"')
				{
					for (int i = 1; i < l; i++)
						spath[i - 1] = spath[i];

					spath[l - 1] = 0;
				}
				HWND hwndCombo = GetCtrl(hwnd, IDC_COMBO);
				DWORD dwIndex = 0;

				COMBOBOXEXITEM cbei;
				memset(&cbei, 0, sizeof(COMBOBOXEXITEM));
				dwIndex = (DWORD)SndMsg(hwndCombo, CB_GETCOUNT, 0, 0);
				cbei.mask = CBEIF_TEXT | CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
				cbei.iItem = dwIndex;
				cbei.pszText = spath;
				cbei.cchTextMax = sizeof(spath);
				cbei.iImage = IDI_OPENFOLDER;
				cbei.iSelectedImage = IDI_OPENFOLDER;
				dwIndex = (DWORD)SndMsg(hwndCombo, CBEM_INSERTITEM, (WPARAM)dwIndex, (LPARAM)&cbei);
				SndMsg(hwndCombo, CB_SETCURSEL, (WPARAM)dwIndex, 0);
			}

			// filter text
			if (0 < wcslen(ftext))
				SetWindowText(GetCtrl(hwnd, ID_EDIT_FILTER), ftext);

			// text search
			if (0 < wcslen(texts))
				SetWindowText(GetCtrl(hwnd, ID_EDIT_SEARCH), texts);

			//case sensitive, search subfolders, check occurrences
			CheckDlgButton(hwnd, ID_CHK_SUBFOLDER, (isubfd == 1) ? TRUE : FALSE);
			CheckDlgButton(hwnd, ID_CHK_AUTOWILDC, (iautowc == 1) ? TRUE : FALSE);
			CheckDlgButton(hwnd, ID_CHK_CASE, (icsens == 1) ? TRUE : FALSE);
			CheckDlgButton(hwnd, ID_CHK_OCCUR, (ioccur == 1) ? TRUE : FALSE);

			//which edit control receives the focus ?
			if (ifiltf == 1)
			{
				HideCaret(GetCtrl(hwnd, ID_EDIT_SEARCH));
				SetFocus(GetCtrl(hwnd, ID_EDIT_FILTER));
			}

			if (ifiltf == 0)
			{
				HideCaret(GetCtrl(hwnd, ID_EDIT_FILTER));
				SetFocus(GetCtrl(hwnd, ID_EDIT_SEARCH));
			}

			free(spath);
			free(ftext);
			free(texts);

			//start the search
			if (idoit == 1)
				SndMsg(hwnd, WM_COMMAND, (WPARAM)ID_BUT_SEARCH, 0);
		}	//if CmdLine exists
	}// parse commandline for options
#endif // NOCMDLINE

	SetWindowResText(hwnd, 44); // FindFile
	ShowWindow(hwnd, g_dlg.f);
	return FALSE;
}

void IfMruExists(const wchar_t * str)
{
	int i = 0;
	wchar_t s[PATH_SIZE];
	HWND hwndCombo = GetCtrl(g_hwndMain, IDC_COMBO);
	DWORD dwIndex = g_dwLastNative + 1;
	COMBOBOXEXITEM cbei;
	memset(&cbei, 0, sizeof(COMBOBOXEXITEM));

	//
	// if selection already exists move to top
	//
	while( i<NUM_MRU && CB_ERR != SndMsg(hwndCombo, CB_GETLBTEXT, dwIndex, (LPARAM)s))
	{
		if(!wcscmp(str, s))
			break;

		dwIndex++;
		i++;
	}

	if((i < NUM_MRU) && (i > 0))   // delete it if not at top
	{
		SndMsg(hwndCombo, CBEM_DELETEITEM, dwIndex, 0);

		// insert at top
		cbei.mask = CBEIF_TEXT | CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
		cbei.iItem			= g_dwLastNative + 1;
		cbei.pszText		= (wchar_t*)str;
		cbei.cchTextMax 	= sizeof(str);
		cbei.iImage 		= 7;
		cbei.iSelectedImage = 7;
		SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);
		SndMsg(hwndCombo, CB_SETCURSEL, (WPARAM)g_dwLastNative + 1, 0);

		// Fill g_sMru strings with current combo strings after 'BROWSE'
		dwIndex = g_dwLastNative + 1;
		i = 0;
		while( CB_ERR != SndMsg(hwndCombo, CB_GETLBTEXT, (WPARAM)dwIndex++, (LPARAM)g_sMru[i]))
		{
			i++;
			if(i>(NUM_MRU-1))
				break;
		}

	}

}

/****************************************************************************
 *																			*
 * Function: SortMru														*
 *																			*
 * Purpose : Keeps the MRU folders in the combo box up to date. 			*
 *																			*
 ****************************************************************************/
void SortMru(const wchar_t * stradd)
{
	int i = 0;
	wchar_t s[PATH_SIZE];
	HWND hwndCombo = GetCtrl(g_hwndMain, IDC_COMBO);
	DWORD dwIndex = g_dwLastNative + 1;
	COMBOBOXEXITEM cbei;
	memset(&cbei, 0, sizeof(COMBOBOXEXITEM));

	// first delete same string from combobox if exists
	while( i<NUM_MRU && CB_ERR != SndMsg(hwndCombo, CB_GETLBTEXT, dwIndex, (LPARAM)s))
	{
		if(!wcscmp(stradd, s))
			SndMsg(hwndCombo, CBEM_DELETEITEM, dwIndex, 0);

		dwIndex++;
		i++;
	}

	// if more than 10 entries delete the last one
	if(i == NUM_MRU)
	{
		SndMsg(hwndCombo, CBEM_DELETEITEM, dwIndex-1, 0);
	}

	// insert the string just after 'BROWSE'
	cbei.mask = CBEIF_TEXT | CBEIF_IMAGE | CBEIF_SELECTEDIMAGE;
	cbei.iItem			= g_dwLastNative + 1;
	cbei.pszText		= (wchar_t*)stradd;
	cbei.cchTextMax 	= sizeof(stradd);
	cbei.iImage 		= 7;
	cbei.iSelectedImage = 7;
	dwIndex = (DWORD)SndMsg(hwndCombo, CBEM_INSERTITEM, 0, (LPARAM)&cbei);

	SndMsg(hwndCombo, CB_SETCURSEL, (WPARAM)dwIndex, 0);

	// Fill g_sMru strings with current combo strings after 'BROWSE'
	dwIndex = g_dwLastNative + 1;
	i = 0;
	while( CB_ERR != SndMsg(hwndCombo, CB_GETLBTEXT, (WPARAM)dwIndex++, (LPARAM)g_sMru[i]))
	{
		i++;
		if(i>(NUM_MRU-1))
			break;
	}

}

/****************************************************************************
 *																			*
 * Function: DisplayContextMenu 											*
 *																			*
 * Purpose : Creates and displays context menu enabling View Dependencies	*
 *			 if appropriate.												*
 *																			*
 ****************************************************************************/
void DisplayContextMenu(HWND hwnd, const POINT * pt, int idx)
{
	wchar_t sMenu[130];
	MENUITEMINFO mii;
	int i;
	HMENU hPopup	 = CreatePopupMenu();
	HMENU hSubPopup  = CreatePopupMenu();
	LoadString(g_hInst, 1, sMenu, ARRSIZE(sMenu)-1); // Explore Folder
	AppendMenu(hPopup, MF_STRING, IDM_FOLDER, sMenu);

	wchar_t pathname[PATH_SIZE];

	LVITEM lvi;
	lvi.iSubItem = 0;
	lvi.pszText    = pathname;
	lvi.cchTextMax = PATH_SIZE;

	SndMsg(GetCtrl(hwnd, IDC_LISTVIEW), LVM_GETITEMTEXT, (WPARAM)idx, (LPARAM)&lvi);

	g_activateDepends = 0;
	if(IsModuleFile(pathname))
	{
		g_activateDepends = 1;
	}

	LoadString(g_hInst, 2, sMenu, ARRSIZE(sMenu)-1); // View Dependencies
	AppendMenu(hPopup, MF_STRING, IDM_DEPENDS, sMenu);

	LoadString(g_hInst, 3, sMenu, ARRSIZE(sMenu)-1); // Open
	AppendMenu(hPopup, MF_STRING, IDM_OPEN, sMenu);
	AppendMenu(hPopup, MF_SEPARATOR, 0, NULL);

	// IDM_DEPENDS & IDM_VSEARCH are drawn by the system
	if(g_sTxtSearch[0] && g_fileopts.count)
	{
		LoadString(g_hInst, 14, sMenu, ARRSIZE(sMenu)-1); // View Search Results
		AppendMenu(hPopup, MF_STRING, IDM_VSEARCH, sMenu);
	}
	else
	{
		LoadString(g_hInst, 15, sMenu, ARRSIZE(sMenu)-1); // Text Search Results
		AppendMenu(hPopup, MF_STRING | MF_GRAYED, IDM_VSEARCH, sMenu);
	}

	AppendMenu(hPopup, MF_SEPARATOR, 0, NULL);
	LoadString(g_hInst, 4, sMenu, ARRSIZE(sMenu)-1); // Rename
	AppendMenu(hPopup, MF_STRING, IDM_RENAME, sMenu);

	LoadString(g_hInst, 5, sMenu, ARRSIZE(sMenu)-1); // CopyTo
	AppendMenu(hPopup, MF_STRING, IDM_COPYTO, sMenu);

	LoadString(g_hInst, 6, sMenu, ARRSIZE(sMenu)-1); // MoveTo
	AppendMenu(hPopup, MF_STRING, IDM_MOVETO, sMenu);

	AppendMenu(hPopup, MF_SEPARATOR, 0, NULL);

	LoadString(g_hInst, 16, sMenu, ARRSIZE(sMenu)-1); // Send To
	AppendMenu(hPopup, MF_STRING | MF_POPUP, (UINT)hSubPopup, sMenu);

	if(g_strDisp[0][0] == 0)
	{
		LoadString(g_hInst, 17, sMenu, ARRSIZE(sMenu)-1); // (none)
		AppendMenu(hSubPopup, MF_STRING | MF_GRAYED, IDM_SENDTOFIRST, sMenu);
	}
	else
	{
		for(i = 0; i<6; i++)
		{
			if(g_strDisp[i][0])
				AppendMenu(hSubPopup, MF_STRING, IDM_SENDTOFIRST + i, g_strDisp[i]);
		}
	}
	AppendMenu(hPopup, MF_SEPARATOR, 0, NULL);

	LoadString(g_hInst, 7, sMenu, ARRSIZE(sMenu)-1); // Delete
	AppendMenu(hPopup, MF_STRING, IDM_DELETE, sMenu);

	LoadString(g_hInst, 8, sMenu, ARRSIZE(sMenu)-1); // Recycle Bin
	AppendMenu(hPopup, MF_STRING, IDM_RECYCLE, sMenu);
	AppendMenu(hPopup, MF_SEPARATOR, 0, NULL);

	LoadString(g_hInst, 9, sMenu, ARRSIZE(sMenu)-1); // Properties
	AppendMenu(hPopup, MF_STRING, IDM_PROPERTIES, sMenu);

	mii.cbSize	 = sizeof(MENUITEMINFO);
	mii.fMask	 = MIIM_FTYPE | MIIM_DATA;
	mii.fType	 = MFT_OWNERDRAW;
	mii.dwItemData = ENABLED;

	SetMenuItemInfo(hPopup, IDM_FOLDER, FALSE, &mii);

	if(g_strDepends == NULL || !g_activateDepends)
	{
		mii.dwItemData = DISABLED;
	}
	SetMenuItemInfo(hPopup, IDM_DEPENDS, FALSE, &mii);

	mii.dwItemData = ENABLED;
	SetMenuItemInfo(hPopup, IDM_OPEN, FALSE, &mii);
	SetMenuItemInfo(hPopup, IDM_RENAME, FALSE, &mii);
	SetMenuItemInfo(hPopup, IDM_COPYTO, FALSE, &mii);
	SetMenuItemInfo(hPopup, IDM_MOVETO, FALSE, &mii);
	SetMenuItemInfo(hPopup, IDM_DELETE, FALSE, &mii);
	SetMenuItemInfo(hPopup, IDM_RECYCLE, FALSE, &mii);
	SetMenuItemInfo(hPopup, IDM_PROPERTIES, FALSE, &mii);

	SetForegroundWindow(hwnd);
	TrackPopupMenu(hPopup, TPM_RIGHTBUTTON, pt->x, pt->y, 0, hwnd, NULL);
	PostMessage(hwnd, WM_NULL, 0, 0);
	DestroyMenu(hPopup);
}

//=================================================================
//
// GetListViewItems extracts the selected paths and names from the
// listview, allocates memory and returns two buffers if 'action' is
// TWO_BUFFER. 'ToDir' is only used for TWO_BUFFER. If bufoneLen
// is given the size of allocated memory will be suppiled.
//=================================================================
wchar_t ** GetListViewItems(HWND hListView, const wchar_t * ToDir, BOOL action, size_t * bufoneLen)
{
	wchar_t tmp[PATH_SIZE];		 // temp buffer
	LVITEM lvi;
	static wchar_t * buf[2];
	buf[0] = NULL;
	buf[1] = NULL;
	int lenFrom, index;

	lenFrom = 0, index = -1;

	lvi.pszText    = tmp;
	lvi.cchTextMax = PATH_SIZE;

	// get total lenFrom & lenTO of buffers required
	while ((-1) != (index = ListView_GetNextItem(hListView, index, LVNI_SELECTED)))
	{
		// pathname
		lvi.iSubItem = 1;
		lenFrom += (int)SndMsg(hListView, LVM_GETITEMTEXT, (WPARAM)index, (LPARAM)&lvi);
		// filename
		lvi.iSubItem = 0;
		lenFrom += (int)SndMsg(hListView, LVM_GETITEMTEXT, (WPARAM)index, (LPARAM)&lvi);
		lenFrom++;			// inc for null termination of each string
	}
	buf[0] = calloc(1, (lenFrom+2)*sizeof(wchar_t)); // double null termination at end of buffer
	if(!buf[0])
		return buf;

	if(!IsBadWritePtr(bufoneLen, sizeof(size_t)))
		*bufoneLen = lenFrom+2;

	index = -1;

	wchar_t * p0 = buf[0];

	// get all strings into bufffer
	while ((-1) != (index = ListView_GetNextItem(hListView, index, LVNI_SELECTED)))
	{

		// pathname
		lvi.iSubItem = 1;
		SndMsg(hListView, LVM_GETITEMTEXT, (WPARAM)index, (LPARAM)&lvi);
		if(g_sTxtSearch[0])			// text search was done
			RemoveFileCountBraces(tmp);
		wcscat(p0, tmp);			 // dir into FROM

		// filename
		lvi.iSubItem = 0;
		SndMsg(hListView, LVM_GETITEMTEXT, (WPARAM)index, (LPARAM)&lvi);

		// file into FROM (TO does not need the filename)
		wcscat(p0, tmp);

		// move pointer on to next string
		p0 += wcslen(p0) + 1;
	}

	// for the shell copy/move only one destination is required
	if(action == TWO_BUFFER)
	{
		buf[1] = calloc(1, (wcslen(ToDir)+2)*sizeof(wchar_t));	// double null termination at end of buffer
		if(!buf[1])
			return buf;
		wcscpy(buf[1], ToDir); 		 // dir into TO
	}
	return buf;
}

void GetFontDialogUnits(HWND hDlg)
{
	SIZE size;
	HFONT hFont = (HFONT)SndMsg(hDlg, WM_GETFONT, 0, 0);
	HDC hdc 	= GetDC(hDlg);
	HFONT hOld	= SelectObject(hdc, hFont);
	GetTextExtentPoint32(hdc, L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",52,&size);
	SelectObject(hdc, hOld);
	ReleaseDC(hDlg, hdc);
	g_dlg.dx	 = (size.cx/26+1)/2;
	g_dlg.dy	 = size.cy;
	g_dlg.hDlg   = hDlg;
}

void DeleteListViewEntres(HWND hListView)
{
	wchar_t s[PATH_SIZE];

	int index = -1;
	ClearPreview(GetParent(hListView));
	while ((-1) != (index = ListView_GetNextItem(hListView, index, LVNI_SELECTED)))
	{
		wcscpy(s, g_fileopts.ppfi[index]->pathname);
		wcscat(s, g_fileopts.ppfi[index]->filename);
		if(!fExists(s))
		{
			// shuffle all items (FINDFILE_OPTIONS struct) up one place
			for(int i = index; i<g_fileopts.count; i++)
			{
				g_fileopts.ppfi[i] = g_fileopts.ppfi[i+1];
			}
			g_fileopts.count--;
			ListView_DeleteItem(hListView, index);
			index = -1;
		}
	}

	LoadString(g_hInst, 24, s, ARRSIZE(s)-1); // %u File(s)
	swprintf(s, PATH_SIZE, s, g_fileopts.count);
	SndCtrlMsg(GetParent(hListView), IDC_STATUSBAR, SB_SETTEXT, (WPARAM)0, (LPARAM)s);
}

static int OnDestroy(HWND hwnd)
{
	FreeGlobalMem();
	AbortFindFile();
	DestroyBitmaps();
	DeleteObject(g_hFont);
	SetWindowLongPtr(GetCtrl(hwnd, ID_STATIC_EXTBACK), GWLP_WNDPROC, (LONG_PTR)pSubClassExtPaneProc);
	SetWindowLongPtr(GetCtrl(hwnd, ID_STATIC_PICBOX), GWLP_WNDPROC, (LONG_PTR)pSubClassPictureBoxProc);
	SetWindowLongPtr(GetCtrl(hwnd, ID_EDIT_HEADER), GWLP_WNDPROC, (LONG_PTR)pSubClassTextBoxProc);
	ListView_DeleteAllItems(GetCtrl(hwnd,IDC_LISTVIEW));
	DeleteObject(g_hBrLite);
	FreeFindFile();
	PostQuitMessage(0);
	return FALSE;
}

static int OnNotify(HWND hwnd, int wParam, LPNMHDR lParam)
{
	LPNM_LISTVIEW lpnmlv;
	lpnmlv = (LPNM_LISTVIEW)lParam;
	int idx;

	switch (lpnmlv->hdr.code)
	{
	case LVN_KEYDOWN:
	{
		NMLVKEYDOWN *lvkd = (NMLVKEYDOWN *)lParam;
		// delete plus shift keys (DELETE)
		if (lvkd->wVKey == VK_DELETE && (GetAsyncKeyState(VK_SHIFT) & 0x8000))
			PostMessage(hwnd, WM_COMMAND, (WPARAM)MAKELONG(IDM_DELETE, 0), 0);

		// delete key only (RECYCLE)
		else if (lvkd->wVKey == VK_DELETE)
			PostMessage(hwnd, WM_COMMAND, (WPARAM)MAKELONG(IDM_RECYCLE, 0), 0);
		return 0;
	}

	case LVN_COLUMNCLICK:
		if (g_fileopts.count < 2 || lpnmlv->iItem != -1)	// || lpnmlv->iSubItem == 1)
			return 0;
		SortItems(GetCtrl(hwnd, IDC_LISTVIEW), &g_fileopts, lpnmlv->iSubItem);
		ListView_RedrawItems(GetCtrl(hwnd, IDC_LISTVIEW), 0, g_fileopts.count);
		return 0;

	case LVN_BEGINDRAG:
	case LVN_BEGINRDRAG:
		if (DROPEFFECT_MOVE == HandleDragDrop(hwnd, GetCtrl(hwnd, IDC_LISTVIEW)))
			DeleteListViewEntres(GetCtrl(hwnd, IDC_LISTVIEW));
		return 0;

	case NM_RCLICK:
	{
		POINT point;
		GetCursorPos(&point);
		idx = ListView_GetSelectionMark(GetCtrl(hwnd, IDC_LISTVIEW));
		if (-1 != idx)
			DisplayContextMenu(hwnd, &point, idx);
	}
	return 0;

	case LVN_ITEMCHANGED:

		if (lpnmlv->uChanged == LVIF_STATE && lpnmlv->uNewState == 3)
		{
			wchar_t s[120];
			g_pfi = g_fileopts.ppfi[lpnmlv->iItem];

			wcscpy(g_sGen1, g_pfi->pathname);
			wcscat(g_sGen1, g_pfi->filename);

			DisplayFileHead(hwnd, g_sGen1, MAKELONGLONG(g_pfi->nFileSizeLow, g_pfi->nFileSizeHigh));
			LoadString(g_hInst, 45, s, ARRSIZE(s)-1);	// FindFile ->

			wcscpy(g_sGen1, s);
			wcscat(g_sGen1, g_pfi->pathname);
			wcscat(g_sGen1, g_pfi->filename);
			wcscat(g_sGen1, g_sUni);
			SetWindowText(hwnd, g_sGen1);
		}
		return 0;

	case LVN_ITEMACTIVATE:
	{
		idx = ListView_GetSelectionMark(GetCtrl(hwnd, IDC_LISTVIEW));
		if (idx > -1 && idx < g_fileopts.count)
		{
			g_pfi = g_fileopts.ppfi[idx];
			ListView_GetItemText(GetCtrl(hwnd, IDC_LISTVIEW), idx, 0, g_sGen0, PATH_SIZE);
			ShellExecute(hwnd, NULL, g_sGen0, NULL, g_pfi->pathname, SW_SHOW);
		}
		return 0;
	}

	case LVN_GETDISPINFO:
	{
		long long llsize;
		LV_DISPINFO *lpdi = (LV_DISPINFO *)lParam;

		g_pfi = g_fileopts.ppfi[lpdi->item.iItem];

		if (lpdi->item.iSubItem)
		{
			if (lpdi->item.mask & LVIF_TEXT)
			{
				switch (lpdi->item.iSubItem)
				{
				case 1:	// column 1 (Folders)
					if (g_pfi->numsearch && g_fileopts.iFileCounts != 1)
					{
						swprintf(g_sGen0, PATH_SIZE, L"[%d] %ls", g_pfi->numsearch, g_pfi->pathname);
						wcscpy(lpdi->item.pszText, g_sGen0);
					}
					else
					{
						wcscpy(lpdi->item.pszText, g_pfi->pathname);
					}
					break;

				case 2:	// column 2 (Sizes)
					llsize = MAKELONGLONG(g_pfi->nFileSizeLow, g_pfi->nFileSizeHigh);
					swprintf(g_sGen0, PATH_SIZE, L"%lld", llsize);
					wcscpy(lpdi->item.pszText, g_sGen0);
					break;

				case 3:	// column 3 (Dates)
					FileTimeToLocalFileTime(&g_pfi->ftLastWriteTime, &g_real);
					FileTimeToSystemTime(&g_real, &g_st);
					GetDateFormat(LOCALE_SYSTEM_DEFAULT, LOCALE_NOUSEROVERRIDE, &g_st, NULL, g_sGen0, PATH_SIZE);
					swprintf(g_sGen0 + wcslen(g_sGen0), PATH_SIZE, L" %.2d:%.2d", g_st.wHour, g_st.wMinute);
					wcscpy(lpdi->item.pszText, g_sGen0);
					break;
				}
			}
		}
		else
		{
			// column 0
			if (lpdi->item.mask & LVIF_TEXT)
			{
				wcscpy(lpdi->item.pszText, g_pfi->filename);
			}
			if (lpdi->item.mask & LVIF_IMAGE)
			{
				// stop the system 'the disk is write protected' for floppy's
				DWORD tmp = SetErrorMode(SEM_FAILCRITICALERRORS);
				SHFILEINFO sfi;

				wcscpy(g_sGen0, g_pfi->pathname);
				wcscat(g_sGen0, g_pfi->filename);
				if (SHGetFileInfo(g_sGen0, 0, &sfi, sizeof(sfi), SHGFI_SYSICONINDEX | SHGFI_SMALLICON))
				{
					lpdi->item.iImage = sfi.iIcon;
				}
				else
				{
					lpdi->item.iImage = 3;	// give default icon if not given
				}
				SetErrorMode(tmp);
			}
		}
	}

	SetWindowLongPtr(hwnd, DWLP_MSGRESULT, TRUE);
	return 0;
	}	// end switch
	return 0;
}

static BOOL OnCommand(HWND hwnd, int wID, HWND hwndCtl, UINT wNotifyCode)
{
	int idx;
	int x;
	wchar_t ** pp;
	wchar_t s[150];

	// The SENDTO menu is dealt with here, not in the switch/case block
	if(wID >= IDM_SENDTOFIRST  && wID < IDM_SENDTO)
	{
		// find the last character of the g_strSendto string
		idx = wcslen(g_strSendto[wID-IDM_SENDTOFIRST])-1;
		wchar_t c = g_strSendto[wID-IDM_SENDTOFIRST][idx];
		if(c == '\\')
		{
			// must be a folder
			wcscpy(g_sGen2, g_strSendto[wID-IDM_SENDTOFIRST]);
			pp = GetListViewItems(GetCtrl(hwnd, IDC_LISTVIEW), g_sGen2, TWO_BUFFER, NULL);
			if(pp[0] && pp[1])
			{
				SHCopyTo(hwnd, pp);
				free(pp[0]);
				free(pp[1]);
			}
		}
		else
		{
			// must be a file(s)
			pp = GetListViewItems(GetCtrl(hwnd, IDC_LISTVIEW), NULL, ONE_BUFFER, NULL);
			if(pp[0])
			{
				DoShellExecuteEx(hwnd, pp[0], g_strSendto[wID-IDM_SENDTOFIRST]);
				free(pp[0]);
			}
		}

		return 0;
	}

	switch (wID)
	{
	case ID_CHK_ENABLE_EXT:
		// messages sent by this app
		if(hwndCtl == (HWND)1)
		{
			g_ext.fExtEnabled = TRUE;
			AnimateWindow(GetCtrl(hwnd, ID_STATIC_EXTBACK), 400, AW_VER_POSITIVE | AW_SLIDE);
			CheckDlgButton(hwnd, ID_CHK_ENABLE_EXT, BST_CHECKED);
			return 0;
		}
		else if(hwndCtl == 0)
		{
			g_ext.fExtEnabled = FALSE;
			AnimateWindow(GetCtrl(hwnd, ID_STATIC_EXTBACK), 400,	AW_HIDE | AW_VER_NEGATIVE | AW_SLIDE);
			CheckDlgButton(hwnd, ID_CHK_ENABLE_EXT, BST_UNCHECKED);

			// messages sent by the system (user clicked on check button)
		}
		else if((HWND)hwndCtl == GetCtrl(hwnd, ID_CHK_ENABLE_EXT))
		{
			if(IsWindowVisible(GetCtrl(hwnd, ID_STATIC_EXTBACK)))
			{
				// hide it, disabled
				g_ext.fExtEnabled = FALSE;
				AnimateWindow(GetCtrl(hwnd, ID_STATIC_EXTBACK), 400, AW_HIDE | AW_VER_NEGATIVE | AW_SLIDE);
				CheckDlgButton(hwnd, ID_CHK_ENABLE_EXT, BST_UNCHECKED);
			}
			else
			{
				// show it, enabled
				g_ext.fExtEnabled = TRUE;
				AnimateWindow(GetCtrl(hwnd, ID_STATIC_EXTBACK), 400, AW_VER_POSITIVE | AW_SLIDE);
				CheckDlgButton(hwnd, ID_CHK_ENABLE_EXT, BST_CHECKED);
			}
		}
		return 0;

	case IDM_VSEARCH:
		idx = ListView_GetSelectionMark(GetCtrl(hwnd, IDC_LISTVIEW));
		if(g_iUniSearch)
			ViewSearchResultsWc(&g_fileopts, GetCtrl(hwnd, ID_EDIT_HEADER), idx);
		else
			ViewSearchResultsMb(&g_fileopts, GetCtrl(hwnd, ID_EDIT_HEADER), idx);

		return 0;

	case IDM_ABOUT:
		EnableWindow(hwnd, FALSE);
		DialogBoxParam(g_hInst, MAKEINTRESOURCE(IDDIALOG_ABOUT), hwnd,
					   (DLGPROC)AboutDialogProc, (LPARAM)0);
		EnableWindow(hwnd, TRUE);
		break;

	case IDM_EXTENDEDSEARCH:
		DoExtendedParams(hwnd, &g_ext);
		return 0;

	case IDM_EDITSENDTO:
		DialogBoxParam(g_hInst, MAKEINTRESOURCE(IDDIALOG_SENDTO), hwnd,
					   (DLGPROC)DisplaySendToDialogProc, (LPARAM)g_strSendto);
		break;

	case IDM_COPYTO:
		LoadString(g_hInst, 46, s, ARRSIZE(s)-1); // Choose a Folder to Copy To
		if(SHBrowseDir(hwnd, s, g_sGen2))
		{
			pp = GetListViewItems(GetCtrl(hwnd, IDC_LISTVIEW), g_sGen2, TWO_BUFFER, NULL);
			if(pp[0] && pp[1])
			{
				SHCopyTo(hwnd, pp);
				free(pp[0]);
				free(pp[1]);
			}
		}
		return 0;

	case IDM_MOVETO:
		LoadString(g_hInst, 47, s, ARRSIZE(s)-1); // Choose a Folder to Move To
		if(SHBrowseDir(hwnd, s, g_sGen2))
		{
			LoadString(g_hInst, 48, s, ARRSIZE(s)-1); // Are you sure you want to Move these item(s)?
			wcscpy(g_sGen1, s);
			if(ID_BUT_CONFIRMYES == MsgBoxYesNo(hwnd, g_sGen1))
			{
				pp = GetListViewItems(GetCtrl(hwnd, IDC_LISTVIEW), g_sGen2, TWO_BUFFER, NULL);
				if(pp[0] && pp[1])
				{
					SHMoveTo(hwnd, pp);
					DeleteListViewEntres(GetCtrl(hwnd, IDC_LISTVIEW));
					free(pp[0]);
					free(pp[1]);
				}
			}
		}
		return 0;

	case IDM_RENAME:
		x = ListView_GetSelectionMark(GetCtrl(hwnd, IDC_LISTVIEW));
		if(x > -1 && x < g_fileopts.count)
		{
			Rename(GetCtrl(hwnd, IDC_LISTVIEW), x);
		}
		return 0;

	case IDM_PROPERTIES:
		x = ListView_GetSelectionMark(GetCtrl(hwnd,IDC_LISTVIEW));
		if(x > -1 && x < g_fileopts.count)
		{
			g_pfi = g_fileopts.ppfi[x];
			ListView_GetItemText(GetCtrl(hwnd,IDC_LISTVIEW), x, 0, g_sGen1, PATH_SIZE);
			swprintf(g_sGen0, PATH_SIZE, L"%ls%ls", g_pfi->pathname, g_sGen1);
			SHProperties(hwnd, g_sGen0);
		}
		return 0;

	case IDM_DELETE:
		x = ListView_GetSelectionMark(GetCtrl(hwnd,IDC_LISTVIEW));
		if(x > -1 && x < g_fileopts.count)
		{
			LoadString(g_hInst, 49, g_sGen0, ARRSIZE(g_sGen0)-1); // Are you sure you want to Delete these item(s)?
			if(ID_BUT_CONFIRMYES == DialogBoxParam(g_hInst, MAKEINTRESOURCE(IDDIALOG_CONFIRM),
												   hwnd, (DLGPROC) ConfirmDialogProc, (LPARAM)g_sGen0))
			{
				pp = GetListViewItems(GetCtrl(hwnd, IDC_LISTVIEW), g_sGen2, ONE_BUFFER, NULL);
				if(pp[0])
				{
					LoadString(g_hInst, 50, s, ARRSIZE(s)-1); // Not all of the files could be deleted!
					HWND h = GetCtrl(hwnd, IDC_LISTVIEW);
					if(SHDelete(hwnd, h, &g_fileopts) == 0)
					{
						MsgBox(hwnd, s);
					}
					free(pp[0]);
					ClearPreview(hwnd);
				}
			}
		}
		return 0;

	case IDM_RECYCLE:
		x = ListView_GetSelectionMark(GetCtrl(hwnd,IDC_LISTVIEW));
		if(x > -1 && x < g_fileopts.count)
		{
			pp = GetListViewItems(GetCtrl(hwnd, IDC_LISTVIEW), NULL, ONE_BUFFER, NULL);
			if(pp[0])
			{
				LoadString(g_hInst, 91, g_sGen0, ARRSIZE(g_sGen0)-1); // "Are you sure you want to move these item(s) to the RecycleBin?"
				if(ID_BUT_CONFIRMYES == DialogBoxParam(g_hInst, MAKEINTRESOURCE(IDDIALOG_CONFIRM),
													   hwnd, (DLGPROC) ConfirmDialogProc, (LPARAM)g_sGen0))
				{

					if(SHRecycleBin(hwnd, pp))
					{
						MsgBox(hwnd, L"Not all files could be sent to the ReCycleBin!");
					}
					DeleteListViewEntres(GetCtrl(hwnd, IDC_LISTVIEW));
				}
				free(pp[0]);
			}
		}
		return 0;

	case ID_EDIT_HEADER:							// hide this edit's caret
		if (wNotifyCode == EN_SETFOCUS)
		{
			HideCaret((HWND)hwndCtl);
		}
		return 0;

	case IDC_COMBO:
	{
		static int iLastCombo = 0;

		// if "BROWSE" is selected it becomes the entry, if cancel is clicked
		// replace "BROWSE" with last entry (sLastCombo), else if OK is clicked
		// put new string into selection (str) and copy to (sLastCombo).
		if (wNotifyCode == CBN_SELCHANGE)
		{
			idx = (int)SndCtrlMsg(hwnd, IDC_COMBO, CB_GETCURSEL, (WPARAM)0, (LPARAM)0);
			SndCtrlMsg(hwnd, IDC_COMBO, CB_GETLBTEXT, (WPARAM)idx, (LPARAM)g_sInitialDir);

			// Only do IfMruExists if selection is past the BROWSE
			if(idx > g_dwLastNative)
			{
				IfMruExists(g_sInitialDir);
				idx = g_dwLastNative+1; // If MRU was placed at top idx must reflect that
			}

			LoadString(g_hInst, 85, s, ARRSIZE(s)-1); // "BROWSE"
			if(!wcscmp(g_sInitialDir, s))  	// If BROWSE has been selected
			{
				LoadString(g_hInst, 88, s, ARRSIZE(s)-1); //Choose a Folder to Search
				if(SHBrowseDir(hwnd, s, g_sGen0))
				{
					SortMru(g_sGen0);
				}
				else
				{
					SndMsg(GetCtrl(hwnd, IDC_COMBO), CB_SETCURSEL, (WPARAM)iLastCombo, 0);
				}

			}
			else
			{
				iLastCombo = idx;
			}
			SetFocus(GetCtrl(g_hwndMain, ID_EDIT_FILTER));
		}

		return 0;
	}

	case IDM_FOLDER:
	{
		x = ListView_GetSelectionMark(GetCtrl(hwnd,IDC_LISTVIEW));
		if(x > -1 && x < g_fileopts.count)
		{
			g_pfi = g_fileopts.ppfi[x];
			SHOpenFolderSelectFile(g_pfi->pathname, g_pfi->filename);
		}
		return 0;
	}

	case IDM_DEPENDS:
	{
		if(g_strDepends == NULL || !g_activateDepends)
			return 0;

		x = ListView_GetSelectionMark(GetCtrl(hwnd,IDC_LISTVIEW));
		if(x > -1 && x < g_fileopts.count)
		{
			memset(g_sGen2, 0, PATH_SIZE);
			// get the folder and file names
			ListView_GetItemText(GetCtrl(hwnd,IDC_LISTVIEW), x, 0, g_sGen0, PATH_SIZE);
			ListView_GetItemText(GetCtrl(hwnd,IDC_LISTVIEW), x, 1, g_sGen1, PATH_SIZE);
			swprintf(g_sGen2, PATH_SIZE, L"%ls%ls", g_sGen1, g_sGen0);
			DoShellExecuteEx(hwnd, g_sGen2, g_strDepends);
		}
		return 0;
	}

	case IDM_OPEN:
	{
		x = ListView_GetSelectionMark(GetCtrl(hwnd,IDC_LISTVIEW));
		if(x > -1 && x < g_fileopts.count)
		{
			g_pfi = g_fileopts.ppfi[x];
			ListView_GetItemText(GetCtrl(hwnd,IDC_LISTVIEW), x, 0, g_sGen0, PATH_SIZE);
			ShellExecute(hwnd, NULL, g_sGen0, NULL, g_pfi->pathname, SW_SHOW);
		}
		return 0;
	}

	case ID_BUT_SEARCH:
		g_CountDirs = DIR_COUNT-1;
		GetUserParams(hwnd);
		FreeFindFile(); 						// free previous run
		ClearPreview(hwnd);
		ListView_DeleteAllItems(GetCtrl(hwnd,IDC_LISTVIEW));
		memset(&g_fileopts, 0, sizeof(FINDFILE_OPTIONS)); // clear the struct (important)
		g_fileopts.subdirs		= TRUE; 					// search subdirectories
		g_fileopts.initialdir 	= g_sInitialDir;			// initial directory to search
		g_fileopts.filter 		= g_sFilterTxt;
		g_fileopts.txtsearchWc	= g_sTxtSearchWc;
		g_fileopts.txtsearchMb	= g_sTxtSearchMb;
		g_fileopts.iCase		= g_iCase;
		g_fileopts.iSubFolder	= g_iSubFolder;
		g_fileopts.iFileCounts	= g_iFileCounts;
		g_fileopts.CallBackProc = CallBackProc;				// callback proc

		memset(&g_fileopts.ext, 0, sizeof(EXTENDED));
		memcpy(&g_fileopts.ext, &g_ext, sizeof(EXTENDED));
		EnableWindow(GetCtrl(hwnd, ID_BUT_CANCEL), TRUE);
		EnableWindow(GetCtrl(hwnd, ID_BUT_SEARCH), FALSE);
		ResetColumnBitmaps();
		SetColumnBitmap(GetCtrl(hwnd, IDC_LISTVIEW));
		g_dwStart = GetTickCount();
		LoadString(g_hInst, 30, s, ARRSIZE(s)-1); // Searching..
		SndCtrlMsg(g_hwndMain, IDC_STATUSBAR, SB_SETTEXT, (WPARAM)0, (LPARAM)s);
		FindFile(&g_fileopts);
		return 0;

	case ID_BUT_CANCEL:
		FindFileStop();
		return 0;

	case IDM_EXIT:
		PostMessage(hwnd, WM_CLOSE, 0, 0);
		return 0;
	}
	return 0;
}

static BOOL OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam)
{
	wchar_t s[150];
	// get dialog units for x & y
	GetFontDialogUnits(hwnd);
	
	// init this struct for first time
	memset(&g_ext, 0, sizeof(EXTENDED));
	g_ext.after[0] = -1;
	g_ext.after[1] = -1;
	g_ext.after[2] = -1;
	g_ext.before[0] = -1;
	g_ext.before[1] = -1;
	g_ext.before[2] = -1;

	CreateWindow(L"ComboBoxEx32", NULL, WS_BORDER | WS_VISIBLE | WS_CHILD | CBS_DROPDOWNLIST,
				 10, 10, 155, 540, hwnd, (HMENU)IDC_COMBO, g_hInst,	NULL);

	g_hBrLite  = CreateSolidBrush(g_bkCol);

	HFONT hF = (HFONT)SndMsg(GetCtrl(hwnd, ID_STATIC_EXTBACK), WM_GETFONT, 0, 0);

	// create the extended static controls
	LoadString(g_hInst, 40, s, ARRSIZE(s)-1); // Date After
	HWND h = CreateWindow(L"static", s, WS_VISIBLE | WS_CHILD, 10, 10, 80, 20, GetCtrl(hwnd, ID_STATIC_EXTBACK),(HMENU)ID_STATIC_DATE_AFTER, g_hInst, NULL);
	SndMsg(h, WM_SETFONT, (WPARAM)hF, 0);
	h = CreateWindow(L"static", L"", WS_VISIBLE | WS_CHILD, 90, 10, 80, 20, GetCtrl(hwnd, ID_STATIC_EXTBACK),(HMENU)ID_STATIC_DATE_AFTER_TXT, g_hInst, NULL);
	SndMsg(h, WM_SETFONT, (WPARAM)hF, 0);

	LoadString(g_hInst, 41, s, ARRSIZE(s)-1); // Date Before
	h = CreateWindow(L"static", s, WS_VISIBLE | WS_CHILD, 10, 40, 80, 20, GetCtrl(hwnd, ID_STATIC_EXTBACK),(HMENU)ID_STATIC_DATE_BEFORE, g_hInst,NULL);
	SndMsg(h, WM_SETFONT, (WPARAM)hF, 0);
	h = CreateWindow(L"static", L"", WS_VISIBLE | WS_CHILD, 90, 40, 80, 20, GetCtrl(hwnd, ID_STATIC_EXTBACK),(HMENU)ID_STATIC_DATE_BEFORE_TXT, g_hInst,NULL);
	SndMsg(h, WM_SETFONT, (WPARAM)hF, 0);

	LoadString(g_hInst, 42, s, ARRSIZE(s)-1); // Size Greater
	h = CreateWindow(L"static", s, WS_VISIBLE | WS_CHILD, 10, 70, 80, 20, GetCtrl(hwnd, ID_STATIC_EXTBACK), (HMENU)ID_STATIC_SIZE_MORE, g_hInst, NULL);
	SndMsg(h, WM_SETFONT, (WPARAM)hF, 0);
	h = CreateWindow(L"static", L"", WS_VISIBLE | WS_CHILD, 90, 70, 80, 20, GetCtrl(hwnd, ID_STATIC_EXTBACK), (HMENU)ID_STATIC_SIZE_MORE_TXT, g_hInst, NULL);
	SndMsg(h, WM_SETFONT, (WPARAM)hF, 0);

	LoadString(g_hInst, 43, s, ARRSIZE(s)-1); // Size Less
	h = CreateWindow(L"static", s, WS_VISIBLE | WS_CHILD, 10, 100, 80, 20, GetCtrl(hwnd, ID_STATIC_EXTBACK),(HMENU)ID_STATIC_SIZE_LESS, g_hInst, NULL);
	SndMsg(h, WM_SETFONT, (WPARAM)hF, 0);
	h = CreateWindow(L"static", L"", WS_VISIBLE | WS_CHILD, 90, 100, 80, 20, GetCtrl(hwnd, ID_STATIC_EXTBACK),(HMENU)ID_STATIC_SIZE_LESS_TXT, g_hInst, NULL);
	SndMsg(h, WM_SETFONT, (WPARAM)hF, 0);

	CheckDlgButton(hwnd, ID_CHK_ENABLE_EXT, BST_CHECKED);
	ShowWindow(GetCtrl(hwnd, ID_STATIC_EXTBACK), SW_HIDE);
	ShowWindow(GetCtrl(hwnd, ID_CHK_ENABLE_EXT), SW_HIDE);

	g_hwndMain = hwnd;
	LoadBitmaps(g_hInst);
	pSubClassExtPaneProc = (WNDPROC)SetWindowLongPtr(GetCtrl(hwnd, ID_STATIC_EXTBACK), GWLP_WNDPROC, (LONG_PTR)SubClassExtPaneProc) ;
	return InitDialog(hwnd);
}

/*
static BOOL OnPaint(HWND hwnd)
{
	PAINTSTRUCT ps;
	RECT rc;
	HPEN hPn;
	BeginPaint(hwnd, &ps);
	GetClientRect(hwnd, &rc);
	hPn = SelectObject(ps.hdc, g_hShadowPen);
	MoveToEx(ps.hdc, rc.left, 0, NULL);
	LineTo(ps.hdc, rc.right, 0);
	SelectObject(ps.hdc, g_hLightPen);
	MoveToEx(ps.hdc, rc.left, 1, NULL);
	LineTo(ps.hdc, rc.right+1, 1);
	SelectObject(ps.hdc, hPn);
	EndPaint(hwnd, &ps);
	return 0;
}
*/

static BOOL OnClose(HWND hwnd)
{
	WINDOWPLACEMENT g_wp;
	g_bEndding = TRUE;
	g_wp.length = sizeof(WINDOWPLACEMENT);
	GetWindowPlacement(hwnd, &g_wp);

	if(g_wp.showCmd == SW_SHOWMAXIMIZED)
		g_dlg.f = SW_SHOWMAXIMIZED;
	else if(g_wp.showCmd == SW_SHOWMINIMIZED)
		g_dlg.f = SW_SHOWMINIMIZED;
	else
		g_dlg.f = SW_SHOWNORMAL;

	GetWindowRect(hwnd, (RECT*)&g_dlg);
	WriteRegistry();
	if(g_strHeader)
		free(g_strHeader);

	return EndDialog(hwnd,0);
}

int OnMenuMeasureItem(HWND hwnd, WPARAM wParam, LPARAM lParam)
{
	if(!wParam)
	{
		MEASUREITEMSTRUCT * pmis = (MEASUREITEMSTRUCT *)lParam;
		SIZE size;
		HDC hdc = GetDC(hwnd);
		wchar_t s[180];

		LoadString(g_hInst, pmis->itemID-199, s, ARRSIZE(s)-1);
		GetTextExtentPoint32(hdc, s, wcslen(s), &size);
		g_menuHeight = size.cy + 6;
		pmis->itemHeight = g_menuHeight;
		pmis->itemWidth  = size.cx + 16;
		ReleaseDC(hwnd, hdc);
		return TRUE;
	}
	else
		return FALSE;
}

int OnMenuItemDraw(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if(wParam != 0)
		return FALSE;
	MENUITEMINFO mii;

	DRAWITEMSTRUCT * pdis = (DRAWITEMSTRUCT *)lParam;
	HANDLE hOldObj;
	HBRUSH hBrhHigh = CreateSolidBrush(GetSysColor(COLOR_HIGHLIGHT));
	HBRUSH hBrhLow	= CreateSolidBrush(GetSysColor(COLOR_MENU));
	HPEN hPenHigh	 = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNHIGHLIGHT));
	HPEN hPenLow	 = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNSHADOW));
	HPEN hPenMid	 = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_MENU));

	// Get the menu item info first
	GetMenuItemInfo(GetMenu(hwnd), pdis->itemID, FALSE, &mii);

	int top	   = pdis->rcItem.top + 6;
	int left   = pdis->rcItem.left + g_menuHeight;
	int right  = pdis->rcItem.right;
	int bottom = pdis->rcItem.bottom;

	if( pdis->itemAction == ODA_DRAWENTIRE)
	{
#ifndef NOMENU_IMAGES
		if(pdis->itemID == IDM_DEPENDS && pdis->itemData == DISABLED)
			DrawMenuBitMap(g_hMenuBmps[ID_NOTDEPENDS], pdis->hDC, &pdis->rcItem);
		else
			DrawMenuBitMap(g_hMenuBmps[pdis->itemID - IDM_FIRST], pdis->hDC, &pdis->rcItem);
#endif
		if( pdis->itemData == DISABLED)
		{
			// If disabled draw text twice with transparency
			SetBkMode(pdis->hDC, TRANSPARENT);
			SetTextColor(pdis->hDC, GetSysColor(COLOR_BTNHIGHLIGHT));
			TextOut(pdis->hDC, left+1, top, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
			SetTextColor(pdis->hDC, GetSysColor(COLOR_GRAYTEXT));
			TextOut(pdis->hDC, left, top - 1, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
		}
		else
		{
			// Else draw text normal
			// can be selected first time when user APT+key
			if (pdis->itemState & ODS_SELECTED)
			{
				SetBkColor(pdis->hDC, GetSysColor(COLOR_HIGHLIGHT));
				SetTextColor(pdis->hDC, GetSysColor(COLOR_HIGHLIGHTTEXT));
				TextOut(pdis->hDC, left, top - 1, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
			}
			else
			{
				SetTextColor(pdis->hDC, GetSysColor(COLOR_MENUTEXT));
				TextOut(pdis->hDC, left, top - 1, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
			}
		}
		goto ende;
	}

	if( pdis->itemAction == ODA_SELECT )
	{
#ifndef NOMENU_IMAGES
		if(pdis->itemID == IDM_DEPENDS && pdis->itemData == DISABLED)
			DrawMenuBitMap(g_hMenuBmps[ID_NOTDEPENDS], pdis->hDC, &pdis->rcItem);
		else
			DrawMenuBitMap(g_hMenuBmps[pdis->itemID - IDM_FIRST], pdis->hDC, &pdis->rcItem);
#endif
		if (pdis->itemState & ODS_SELECTED)
		{
			if( pdis->itemData == ENABLED)
			{
#ifndef NOMENU_IMAGES
				// Draw rectangle for highlight effect
				hOldObj = SelectObject(pdis->hDC, hBrhHigh);
				hOldObj = SelectObject(pdis->hDC, GetStockObject(NULL_PEN));
				Rectangle(pdis->hDC, left, top - 2, right, bottom + 1);
				SelectObject(pdis->hDC, hOldObj);

				// Draw highlight lines
				hOldObj = SelectObject(pdis->hDC, hPenHigh);
				MoveToEx(pdis->hDC, 0, bottom - 2, NULL);
				LineTo(pdis->hDC, 0, top - 1);
				LineTo(pdis->hDC, g_menuHeight - 2, top - 1);
				SelectObject(pdis->hDC, hPenLow);
				LineTo(pdis->hDC, g_menuHeight - 2, bottom - 2);
				LineTo(pdis->hDC, 0, bottom - 2);
#endif
				// Draw text
				SetBkColor(pdis->hDC, GetSysColor(COLOR_HIGHLIGHT));
				SetTextColor(pdis->hDC, GetSysColor(COLOR_HIGHLIGHTTEXT));
				TextOut(pdis->hDC, left, top - 1, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));

			}
			else if (pdis->itemData == DISABLED)
			{
				SetBkMode(pdis->hDC, TRANSPARENT);
				SetTextColor(pdis->hDC, GetSysColor(COLOR_BTNHIGHLIGHT));
				TextOut(pdis->hDC, left+1, top, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
				SetTextColor(pdis->hDC, GetSysColor(COLOR_GRAYTEXT));
				TextOut(pdis->hDC, left, top - 1, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
			}

		}
		else
		{
			// Not Selected
			hOldObj = SelectObject(pdis->hDC, hPenMid);
			MoveToEx(pdis->hDC, 0, bottom - 2, NULL);
			LineTo(pdis->hDC, 0, top - 1);
			LineTo(pdis->hDC, g_menuHeight - 2, top - 1);
			LineTo(pdis->hDC, g_menuHeight - 2, bottom - 2);
			LineTo(pdis->hDC, 0, bottom - 2);

			hOldObj = SelectObject(pdis->hDC, hBrhLow);
			hOldObj = SelectObject(pdis->hDC, GetStockObject(NULL_PEN));
			Rectangle(pdis->hDC, left, top - 2, right, bottom + 1);
			SelectObject(pdis->hDC, hOldObj);

			if( pdis->itemData == DISABLED)
			{
				// If disabled draw text twice with transparency
				SetBkMode(pdis->hDC, TRANSPARENT);
				SetTextColor(pdis->hDC, GetSysColor(COLOR_BTNHIGHLIGHT));
				TextOut(pdis->hDC, left + 1, top, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
				SetTextColor(pdis->hDC, GetSysColor(COLOR_GRAYTEXT));
				TextOut(pdis->hDC, left, top - 1, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
			}
			else
			{
				// Else draw text normal
				SetBkColor(pdis->hDC, GetSysColor(COLOR_MENU));
				SetTextColor(pdis->hDC, GetSysColor(COLOR_MENUTEXT));
				TextOut(pdis->hDC, left, top - 1, g_strMenu[pdis->itemID - IDM_FIRST], wcslen(g_strMenu[pdis->itemID - IDM_FIRST]));
			}
		}
	}
ende:
	DeleteObject(hBrhHigh);
	DeleteObject(hBrhLow);
	DeleteObject(hPenHigh);
	DeleteObject(hPenLow);
	DeleteObject(hPenMid);
	return TRUE;
}

static HBRUSH OnColourStatic(HWND hwnd, HDC hdc)
{
	int id = GetDlgCtrlID(hwnd);
	if(id >= ID_STATIC_BACK && id<= ID_CHK_UNI)
	{
		SetBkColor(hdc, g_bkCol);
		return g_hBrLite;
	}
	else
		return NULL;
}

static BOOL OnLButtonDown(HWND hwnd, int xPos, int yPos, BOOL * bInPosition, BOOL * bDoCapture)
{
	if(*bInPosition)  		// bInPosition is when the mouse is over the separator bar
	{
		SetCapture(hwnd);	// determined in WM_MOUSEMOVE
		*bDoCapture = TRUE;
		if(MoveBar(hwnd))
		{
			SizeControls(hwnd);
			InvalidateRect(hwnd, NULL, TRUE);
		}
	}
	return 0;
}

static BOOL OnLButtonUp(HWND hwnd, int xPos, int yPos, UINT keyFlags, BOOL * bDoCapture)
{
	if(*bDoCapture)
	{
		ReleaseCapture();
		*bDoCapture = FALSE;
	}
	return 0;
}

static BOOL OnMouseMove(HWND hwnd, int xPos, int yPos, UINT keyFlags, BOOL * bInPosition)
{
	int x = ((g_bk.r + 3)*g_dlg.dx)/4;
	int y = (2*g_dlg.dy)/8;
	int cy = ((g_bk.b-11)*g_dlg.dy)/8;
	int cx = ((g_bk.r + 8)*g_dlg.dx)/4;
	if( xPos > x && xPos < cx && yPos > y && yPos < cy)
	{
		SetClassLongPtr(hwnd, GCLP_HCURSOR, (LPARAM)g_hCurEW);
		*bInPosition = TRUE;
	}
	else
	{
		*bInPosition = FALSE;
		SetClassLongPtr(hwnd, GCLP_HCURSOR, (LPARAM)g_hCurArrow);
	}
	return 0;
}

static BOOL CALLBACK MainWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	static BOOL bDoCapture	= FALSE;	// used when draging the separator bar
	static BOOL bInPosition = FALSE;	// used in OnLButtonDown, OnLButtonUp, OnMouseMove

	switch (msg)
	{
	case WM_INITDIALOG:
		return OnInitDialog(hwnd, (HWND)wParam, lParam);

	case WM_COMMAND:
		return OnCommand(hwnd, LOWORD(wParam), (HWND)lParam, HIWORD(wParam));

	case WM_NOTIFY:
		return OnNotify(hwnd, (int)wParam, (LPNMHDR)lParam);

//	case WM_PAINT:
//		return OnPaint(hwnd);

	case WM_CTLCOLORSTATIC:
		return (BOOL)OnColourStatic((HWND)lParam, (HDC)wParam);

	case WM_MOUSEMOVE:
		return OnMouseMove(hwnd, LOWORD(lParam), HIWORD(lParam), wParam, &bInPosition);

	case WM_LBUTTONDOWN:
		return OnLButtonDown(hwnd, LOWORD(lParam), HIWORD(lParam), &bInPosition, &bDoCapture);

	case WM_LBUTTONUP:
		return OnLButtonUp(hwnd, LOWORD(lParam), HIWORD(lParam), wParam, &bDoCapture);

	case WM_MEASUREITEM:
		return OnMenuMeasureItem(hwnd, wParam ,lParam);

	case WM_DRAWITEM:
		return OnMenuItemDraw(hwnd, msg, wParam, lParam);

	case WM_SYSCOLORCHANGE:
		DestroyBitmaps();
		LoadBitmaps(g_hInst);
		SetColumnBitmap(GetCtrl(hwnd, IDC_LISTVIEW));
		return FALSE;

	case FF_FINISHED:
		SndCtrlMsg(hwnd, IDC_STATUSBAR, SB_SETTEXT, (WPARAM)0, (LPARAM)lParam);
		SetFocus(GetCtrl(hwnd, IDC_LISTVIEW));
		return 0;

	case WM_SIZE:
		SizeControls(hwnd);
		return 0;

	case WM_GETMINMAXINFO:
	{
		MINMAXINFO * r = (MINMAXINFO*)lParam;
		r->ptMinTrackSize.x = (198*g_dlg.dx)/4;
		r->ptMinTrackSize.y = (194*g_dlg.dy)/8;
		return 0;
	}

	case WM_CLOSE:
		return OnClose(hwnd);

	case WM_DESTROY:
		return OnDestroy(hwnd);

	default:
		return 0;
	}
	return 0;

}

void ReadRegistry(void)
{
	// read various values from registry
	g_dlg.f = ReadRegistryInt(L"WindowPos", L"full", g_dlg.f);
	g_dlg.l = ReadRegistryInt(L"WindowPos", L"left", g_dlg.l);
	g_dlg.t = ReadRegistryInt(L"WindowPos", L"top", g_dlg.t);
	g_dlg.r = ReadRegistryInt(L"WindowPos", L"width", g_dlg.r);
	g_dlg.b = ReadRegistryInt(L"WindowPos", L"height", g_dlg.b);

	g_bk.r = ReadRegistryInt(L"BarPos", L"rpos", g_bk.r);
	g_bk.b = ReadRegistryInt(L"BarPos", L"bpos", g_bk.b);

	g_ColWidth[0] = ReadRegistryInt(L"HeaderCol", L"col0", g_ColWidth[0]);
	g_ColWidth[1] = ReadRegistryInt(L"HeaderCol", L"col1", g_ColWidth[1]);
	g_ColWidth[2] = ReadRegistryInt(L"HeaderCol", L"col2", g_ColWidth[2]);
	g_ColWidth[3] = ReadRegistryInt(L"HeaderCol", L"col3", g_ColWidth[3]);
	g_iCase 	  = ReadRegistryInt(L"Opts", L"case", 1);
	g_iSubFolder  = ReadRegistryInt(L"Opts", L"sub", 1);
	g_iFileCounts = ReadRegistryInt(L"Opts", L"counts", 1);
	g_iAutoWildcards = ReadRegistryInt(L"Opts", L"wild", 1);
	g_iBmhSearch  = ReadRegistryInt(L"Opts", L"bmh", 1);

	ReadRegistryString(L"MRU", L"1st", L"", g_sMru[0]);
	ReadRegistryString(L"MRU", L"2nd", L"", g_sMru[1]);
	ReadRegistryString(L"MRU", L"3rd", L"", g_sMru[2]);
	ReadRegistryString(L"MRU", L"4th", L"", g_sMru[3]);
	ReadRegistryString(L"MRU", L"5th", L"", g_sMru[4]);
	ReadRegistryString(L"MRU", L"6th", L"", g_sMru[5]);
	ReadRegistryString(L"MRU", L"7th", L"", g_sMru[6]);
	ReadRegistryString(L"MRU", L"8th", L"", g_sMru[7]);
	ReadRegistryString(L"MRU", L"9th", L"", g_sMru[8]);
	ReadRegistryString(L"MRU", L"10th", L"", g_sMru[9]);

	ReadRegistryString(L"SendTo", L"1st", L"", g_strSendto[0]);
	ReadRegistryString(L"SendTo", L"2nd", L"", g_strSendto[1]);
	ReadRegistryString(L"SendTo", L"3rd", L"", g_strSendto[2]);
	ReadRegistryString(L"SendTo", L"4th", L"", g_strSendto[3]);
	ReadRegistryString(L"SendTo", L"5th", L"", g_strSendto[4]);
	ReadRegistryString(L"SendTo", L"6th", L"", g_strSendto[5]);

	ReadRegistryString(L"Disp", L"1st", L"", g_strDisp[0]);
	ReadRegistryString(L"Disp", L"2nd", L"", g_strDisp[1]);
	ReadRegistryString(L"Disp", L"3rd", L"", g_strDisp[2]);
	ReadRegistryString(L"Disp", L"4th", L"", g_strDisp[3]);
	ReadRegistryString(L"Disp", L"5th", L"", g_strDisp[4]);
	ReadRegistryString(L"Disp", L"6th", L"", g_strDisp[5]);

	g_strDepends = ReadRegistryDepends();

}

void WriteRegistry(void)
{
	int i0, i1, i2, i3;

	g_iCase 	  = IsDlgButtonChecked(g_hwndMain, ID_CHK_CASE);
	g_iSubFolder  = IsDlgButtonChecked(g_hwndMain, ID_CHK_SUBFOLDER);
	g_iFileCounts = IsDlgButtonChecked(g_hwndMain, ID_CHK_OCCUR);
	g_iAutoWildcards = IsDlgButtonChecked(g_hwndMain, ID_CHK_AUTOWILDC);

	HWND hListView = GetCtrl(g_hwndMain,IDC_LISTVIEW);
	// pixels to dlg units
	i0 = MulDiv(ListView_GetColumnWidth(hListView, 0), 4, g_dlg.dx);
	i1 = MulDiv(ListView_GetColumnWidth(hListView, 1), 4, g_dlg.dx);
	i2 = MulDiv(ListView_GetColumnWidth(hListView, 2), 4, g_dlg.dx);
	i3 = MulDiv(ListView_GetColumnWidth(hListView, 3), 4, g_dlg.dx);

	if (g_dlg.f != SW_SHOWMINIMIZED)
	{
		// do not write if MINIMIZED, will open MINIMIZED
		WriteRegistryInt(L"WindowPos", L"full", g_dlg.f);
	}

	if(g_dlg.f == SW_SHOWNORMAL)
	{
		WriteRegistryInt(L"WindowPos", L"left", MulDiv(g_dlg.l, 4, g_dlg.dx));
		WriteRegistryInt(L"WindowPos", L"top",	MulDiv(g_dlg.t, 8, g_dlg.dy));
		WriteRegistryInt(L"WindowPos", L"width", MulDiv(g_dlg.r - g_dlg.l, 4, g_dlg.dx));
		WriteRegistryInt(L"WindowPos", L"height", MulDiv(g_dlg.b - g_dlg.t, 8, g_dlg.dy));
	}

	WriteRegistryInt(L"BarPos",	  L"rpos", g_bk.r);
	WriteRegistryInt(L"BarPos",	  L"bpos", g_bk.b);
	WriteRegistryInt(L"HeaderCol", L"col0", i0);
	WriteRegistryInt(L"HeaderCol", L"col1", i1);
	WriteRegistryInt(L"HeaderCol", L"col2", i2);
	WriteRegistryInt(L"HeaderCol", L"col3", i3);
	WriteRegistryInt(L"Opts", L"case", g_iCase);
	WriteRegistryInt(L"Opts", L"sub", g_iSubFolder);
	WriteRegistryInt(L"Opts", L"counts", g_iFileCounts);
	WriteRegistryInt(L"Opts", L"wild", g_iAutoWildcards);
	WriteRegistryInt(L"Opts", L"bmh", g_iBmhSearch);

	WriteRegistryString(L"MRU", L"1st", L"", g_sMru[0]);
	WriteRegistryString(L"MRU", L"2nd", L"", g_sMru[1]);
	WriteRegistryString(L"MRU", L"3rd", L"", g_sMru[2]);
	WriteRegistryString(L"MRU", L"4th", L"", g_sMru[3]);
	WriteRegistryString(L"MRU", L"5th", L"", g_sMru[4]);
	WriteRegistryString(L"MRU", L"6th", L"", g_sMru[5]);
	WriteRegistryString(L"MRU", L"7th", L"", g_sMru[6]);
	WriteRegistryString(L"MRU", L"8th", L"", g_sMru[7]);
	WriteRegistryString(L"MRU", L"9th", L"", g_sMru[8]);
	WriteRegistryString(L"MRU", L"10th", L"", g_sMru[9]);

	WriteRegistryString(L"SendTo", L"1st", L"", g_strSendto[0]);
	WriteRegistryString(L"SendTo", L"2nd", L"", g_strSendto[1]);
	WriteRegistryString(L"SendTo", L"3rd", L"", g_strSendto[2]);
	WriteRegistryString(L"SendTo", L"4th", L"", g_strSendto[3]);
	WriteRegistryString(L"SendTo", L"5th", L"", g_strSendto[4]);
	WriteRegistryString(L"SendTo", L"6th", L"", g_strSendto[5]);

	WriteRegistryString(L"Disp", L"1st", L"", g_strDisp[0]);
	WriteRegistryString(L"Disp", L"2nd", L"", g_strDisp[1]);
	WriteRegistryString(L"Disp", L"3rd", L"", g_strDisp[2]);
	WriteRegistryString(L"Disp", L"4th", L"", g_strDisp[3]);
	WriteRegistryString(L"Disp", L"5th", L"", g_strDisp[4]);
	WriteRegistryString(L"Disp", L"6th", L"", g_strDisp[5]);

	wchar_t file[PATH_SIZE];

	GetModuleFileName(g_hInst, file, PATH_SIZE);
	WriteRegistryString(L"Path", L"name", L"", file);

}

LRESULT CALLBACK SubClassExtPaneProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CTLCOLORSTATIC:
		SetBkColor((HDC)wParam, g_bkCol);
		return (LRESULT)g_hBrLite;

	default:
		return CallWindowProc(pSubClassExtPaneProc, hwnd, message, wParam, lParam) ;
	}
}

LRESULT CALLBACK SubClassPictureBoxProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{

	PAINTSTRUCT ps;
	RECT rc;

	switch (message)
	{
	case WM_ERASEBKGND:
		GetClientRect(GetCtrl(g_hwndMain, ID_STATIC_PICBOX), &rc);
		rc.right -= GetSystemMetrics(SM_CXVSCROLL);
		FillRect((HDC)wParam, &rc, GetStockObject(WHITE_BRUSH));
		return 1;

	case WM_PAINT:
		BeginPaint(hwnd, &ps);

		SetRect(&rc, (3*g_dlg.dx)/4, (3*g_dlg.dy)/8, (74*g_dlg.dx)/4, (78*g_dlg.dy)/8);

		if(ghhIcon != NULL)
		{
			DrawIcon(ps.hdc, rc.top, rc.left, ghhIcon);
			EndPaint(hwnd, &ps);
			return 0;
		}

		if(S_OK == GdiPlusLoadImage(gdipFileName))
		{
			if (gpimage.nativeImage != NULL)
			{
				GdiPlusDrawImage(ps.hdc, &rc, TRUE);
				GdiPLusDelete();
				EndPaint(hwnd, &ps);
				return 0;
			}
		}
		EndPaint(hwnd, &ps);
		return 0;

	default:
		return CallWindowProc(pSubClassPictureBoxProc, hwnd, message, wParam, lParam) ;
	}
}

LRESULT CALLBACK SubClassTextBoxProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_PASTE:		// stop paste in the text box
		return 0;

	case WM_CTLCOLORSTATIC:
		SetBkColor((HDC)wParam, g_bkCol);
		return (LRESULT)g_hBrLite;

	case WM_CHAR:{		// stop editing in the text box but allow Ctrl+C
		if(wParam == 3)
			return CallWindowProc(pSubClassTextBoxProc, hwnd, message, wParam, lParam) ;
		else
			return FALSE;
	}
	default:
		return CallWindowProc(pSubClassTextBoxProc, hwnd, message, wParam, lParam) ;
	}
}

LRESULT CALLBACK SubClassRenameEditBoxProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CHAR:	// trap the RETURN
		if (wParam == VK_RETURN)
		{
			DestroyWindow(hwnd);
			return 0;
		}
		else
		{
			return CallWindowProc(pSubClassRenameEditBoxProc, hwnd, message, wParam, lParam);
		}
		break;

	case WM_KILLFOCUS:
		DestroyWindow(hwnd);
		return 0;
		break;

	case WM_DESTROY:
	{
		int len = GetWindowText(hwnd, g_sGen0, PATH_SIZE);	// g_sGen0 holds the original
		int id = (int)GetWindowLongPtr(hwnd, GWLP_USERDATA);
		FILEINFO *fi = g_fileopts.ppfi[id];
		swprintf(g_sGen1, PATH_SIZE, L"%ls%ls", fi->pathname, fi->filename);	// original
		swprintf(g_sGen2, PATH_SIZE, L"%ls%ls", fi->pathname, g_sGen0);	// intended

		if (wcscmp(g_sGen1, g_sGen0) && !g_bEndding)
		{
			if (SHRenameFile(hwnd, g_sGen1, g_sGen2) == S_OK)
			{
				if (wcslen(fi->filename) < (len + 1) * sizeof(wchar_t))
				{
					fi->filename = jmalloc(g_hMem, (len + 1) * sizeof(wchar_t));
					wcscpy(fi->filename, g_sGen0);
				}
				else
				{
					wcscpy(fi->filename, g_sGen0);
				}
				ListView_RedrawItems(GetCtrl(g_hwndMain, IDC_LISTVIEW), id, id);
			}
			else
			{
				wchar_t s[160];
				LoadString(g_hInst, 29, s, ARRSIZE(s)-1); // Could not rename file! Try a different name.
				MsgBox(g_hwndMain, s);
			}
		}

		SetWindowLongPtr(hwnd, GWLP_WNDPROC, (LONG_PTR)pSubClassRenameEditBoxProc);
		SetFocus(GetCtrl(g_hwndMain, IDC_LISTVIEW));
		return 0;
	}
	break;

	default:
		return CallWindowProc(pSubClassRenameEditBoxProc, hwnd, message, wParam, lParam);
	}

}
