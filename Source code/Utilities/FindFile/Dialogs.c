// Dialogs.c
#define NOCRYPT
#define NOSERVICE
#define NOMCX
#define NOIME

#include <windows.h>
#include <stdio.h>
#include <winver.h>
#include <tchar.h>
#include "findfileres.h"
#include "dialogs.h"
#include "shell.h"
#include "findfile.h"
#include "utils.h"
#include "buttonEx.h"

#define JOHNSWEBSITE L"http://www.johnfindlay.plus.com/pellesc/index.html"

LRESULT CALLBACK SubClassEditBoxProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

extern HINSTANCE g_hInst;
#define NUMSENDTOS 6
static WNDPROC pSubClassEditProc;
static wchar_t g_sResult[PATH_SIZE];
extern wchar_t g_strSendto[NUMSENDTOS][PATH_SIZE];
extern wchar_t g_strDisp[NUMSENDTOS][MAX_DISP];

static wchar_t g_strSendto_tmp[NUMSENDTOS][PATH_SIZE];
static wchar_t g_strDisp_tmp[NUMSENDTOS][MAX_DISP];
static HWND g_hwndDisplay;

extern COLORREF g_bkCol;

static SYSTEMTIME g_st;
static EXTENDED g_Ext;

extern HBRUSH g_hBrLite;

void DrawBitmap(HWND hwnd, HDC hdc, HBITMAP hBmp)
{
	RECT rc;
	HDC hdcMem;
	HBITMAP hbmOld;
	BITMAP bm;

	// Get the size of the bitmap
	GetObject(hBmp, sizeof(BITMAP), &bm);

	// Get the size of the client rectangle.
	GetClientRect(hwnd, &rc);

	// Create a compatible DC.
	hdcMem = CreateCompatibleDC(hdc);

	// Select the bitmap into the off-screen DC.
	hbmOld = SelectObject(hdcMem, hBmp);

	// Blt to the window DC.
	StretchBlt(hdc, rc.left, rc.top, rc.right, rc.bottom, hdcMem, 0, 0, bm.bmWidth, bm.bmHeight, SRCCOPY);

	// Cleanup
	SelectObject(hdcMem, hbmOld);
	DeleteDC(hdcMem);
}

// Stephan Zorn
#define BUFSIZE	2047
int SetVersionInfo(HWND hwndDlg, int controlid)
{
	wchar_t *szmodn = malloc(BUFSIZE * sizeof(wchar_t));
	if(szmodn == NULL)
		return 0;

	wchar_t *szvers = malloc(BUFSIZE * sizeof(wchar_t));
	if(szvers == NULL)
		return 0;

	wchar_t *sztext = malloc(BUFSIZE * sizeof(wchar_t));
	if(sztext == NULL)
		return 0;

	GetModuleFileName(
		NULL,	// handle to module to find filename for
		szmodn,	// pointer to buffer for module path
		BUFSIZE 	// size of buffer, in characters
	);

	GetFileVersionInfo(
		szmodn,	// pointer to filename string
		0,	    // ignored
		BUFSIZE,// size of buffer
		szvers 	// pointer to buffer to receive file-version info.
	);

	VS_FIXEDFILEINFO *ffi;

	DWORD dwr;
	unsigned int uilen;
	dwr = VerQueryValue(szvers, L"\\", (void**)&ffi, &uilen);
	if (!dwr)
	{
		free(szmodn);
		free(szvers);
		free(sztext);
		return -1;
	}

	wchar_t s[30];
	LoadString(g_hInst, 18, s, 30); // Version %1d.%1d.%1d.%1d\0
	swprintf(sztext, BUFSIZE, s,
			 (ffi->dwFileVersionMS >> 16),
			 (ffi->dwFileVersionMS & 0xffff),
			 (ffi->dwFileVersionLS >> 16),
			 (ffi->dwFileVersionLS & 0xffff) );

	dwr = SetDlgItemText(hwndDlg, controlid, sztext);

	free(szmodn);
	free(szvers);
	free(sztext);
	return dwr;
}

LRESULT CALLBACK AboutDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_INITDIALOG:{
		wchar_t s[100];
		SetWindowResText(hwndDlg, 13); // About FindFile
		SetWindowResText(GetCtrl(hwndDlg, ID_COPYRIGHT), 92);	// Copyright © 2003 by John Findlay
		SetWindowResText(GetCtrl(hwndDlg, ID_LNK), 93); 		// Web Site
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_OK), 94);		// OK
		SetVersionInfo(hwndDlg, ID_STATIC_VERSION);
		LoadString(g_hInst, 96, s, ARRSIZE(s)); 	// Here you will find PellesC code resources.
		Butx_AddToolTipText(GetCtrl(hwndDlg, ID_LNK), s);
		SetFocus(GetCtrl(hwndDlg, ID_BUT_OK));
		return FALSE;
		}

	case WM_CTLCOLORDLG:
		return (LRESULT)g_hBrLite;

	case WM_CTLCOLORSTATIC:
		SetBkColor((HDC)wParam, g_bkCol);
		return (LRESULT)g_hBrLite;

	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case ID_LNK:
			ShellExecute(NULL, L"open", JOHNSWEBSITE, NULL, NULL, SW_SHOW);
			return 0;
		case ID_BUT_OK:
			return EndDialog(hwndDlg, 0);
		}
		break;

	case WM_CLOSE:
		return EndDialog(hwndDlg, 0);
	}
	return 0;
}

LRESULT CALLBACK ExtendedDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	int i;
	wchar_t s[40];
	static EXTENDED * pOrigExt;
	switch (msg)
	{

	case WM_CTLCOLORDLG:
		return (LRESULT)g_hBrLite;

	case WM_CTLCOLORSTATIC:
		SetBkColor((HDC)wParam, g_bkCol);
		return (LRESULT)g_hBrLite;

	case WM_INITDIALOG:
		// Set Window Texts
		SetWindowResText(hwndDlg, 60); // Extended Search Parameters
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_OK), 65); // OK
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_CANCEL), 58); // Cancel
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_RESET), 75); // Reset
		SetWindowResText(GetCtrl(hwndDlg, 400), 76); // More Than Bytes
		SetWindowResText(GetCtrl(hwndDlg, 401), 77); // Less Than Bytes
		SetWindowResText(GetCtrl(hwndDlg, 402), 78); // Fill in one or more Parameters (dates require dd/mm/yyyy)
		SetWindowResText(GetCtrl(hwndDlg, 403), 79); // After
		SetWindowResText(GetCtrl(hwndDlg, 404), 80); // Before

		GetSystemTime(&g_st);
		pOrigExt = (EXTENDED *)lParam;
		for(i = 1; i<32; i++)
		{
			swprintf(s, 40, L"%02d", i);
			SndCtrlMsg(hwndDlg, IDC_DAY_AFTER, CB_ADDSTRING, 0,(LPARAM)(LPSTR)s) ;
			SndCtrlMsg(hwndDlg, IDC_DAY_BEFORE, CB_ADDSTRING, 0,(LPARAM)(LPSTR)s) ;
		}
		for(i = 1; i<13; i++)
		{
			swprintf(s, 40, L"%02d", i);
			SndCtrlMsg(hwndDlg, IDC_MONTH_AFTER, CB_ADDSTRING, 0,(LPARAM)(LPSTR)s) ;
			SndCtrlMsg(hwndDlg, IDC_MONTH_BEFORE, CB_ADDSTRING, 0,(LPARAM)(LPSTR)s) ;
		}
		// from 1980 to current year
		for(i = 1980; i<g_st.wYear+1; i++)
		{
			swprintf(s, 40, L"%d", i);
			SndCtrlMsg(hwndDlg, IDC_YEAR_AFTER, CB_ADDSTRING, 0,(LPARAM)(LPSTR)s) ;
			SndCtrlMsg(hwndDlg, IDC_YEAR_BEFORE, CB_ADDSTRING, 0,(LPARAM)(LPSTR)s) ;
		}
		// limit text length to 9 chars in both edit box's
		SndCtrlMsg(hwndDlg, ID_EDIT_SIZE_GREATER, EM_LIMITTEXT, 9, 0);
		SndCtrlMsg(hwndDlg, ID_EDIT_SIZE_LESS, EM_LIMITTEXT, 9, 0);

		// put values back in Edit Box's
		if(pOrigExt->dwMoreThanSize)
		{
			swprintf(s, 40, L"%d", pOrigExt->dwMoreThanSize);
			SndCtrlMsg(hwndDlg, ID_EDIT_SIZE_GREATER, WM_SETTEXT, 0, (LPARAM)(LPSTR)s);
		}
		if(pOrigExt->dwLessThanSize)
		{
			swprintf(s, 40, L"%d", pOrigExt->dwLessThanSize);
			SndCtrlMsg(hwndDlg, ID_EDIT_SIZE_LESS, WM_SETTEXT, 0, (LPARAM)(LPSTR)s);
		}

		// if these have values, put them back in the Combo Box's
		if(pOrigExt->after[0] > -1)
			SndCtrlMsg(hwndDlg, IDC_DAY_AFTER, CB_SETCURSEL, (WPARAM)pOrigExt->after[0], 0);
		if(pOrigExt->after[1] > -1)
			SndCtrlMsg(hwndDlg, IDC_MONTH_AFTER, CB_SETCURSEL, (WPARAM)pOrigExt->after[1], 0);
		if(pOrigExt->after[2] > -1)
			SndCtrlMsg(hwndDlg, IDC_YEAR_AFTER, CB_SETCURSEL, (WPARAM)pOrigExt->after[2], 0);
		if(pOrigExt->before[0] > -1)
			SndCtrlMsg(hwndDlg, IDC_DAY_BEFORE, CB_SETCURSEL, (WPARAM)pOrigExt->before[0], 0);
		if(pOrigExt->before[1] > -1)
			SndCtrlMsg(hwndDlg, IDC_MONTH_BEFORE, CB_SETCURSEL, (WPARAM)pOrigExt->before[1], 0);
		if(pOrigExt->before[2] > -1)
			SndCtrlMsg(hwndDlg, IDC_YEAR_BEFORE, CB_SETCURSEL, (WPARAM)pOrigExt->before[2], 0);
		return TRUE;

	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case ID_BUT_RESET:
			// all dialog controls back to no selection
			SndCtrlMsg(hwndDlg, IDC_DAY_AFTER, CB_SETCURSEL, (WPARAM)-1, 0);
			SndCtrlMsg(hwndDlg, IDC_MONTH_AFTER, CB_SETCURSEL, (WPARAM)-1, 0);
			SndCtrlMsg(hwndDlg, IDC_YEAR_AFTER, CB_SETCURSEL, (WPARAM)-1, 0);
			SndCtrlMsg(hwndDlg, IDC_DAY_BEFORE, CB_SETCURSEL, (WPARAM)-1, 0);
			SndCtrlMsg(hwndDlg, IDC_MONTH_BEFORE, CB_SETCURSEL, (WPARAM)-1, 0);
			SndCtrlMsg(hwndDlg, IDC_YEAR_BEFORE, CB_SETCURSEL, (WPARAM)-1, 0);
			SndCtrlMsg(hwndDlg, ID_EDIT_SIZE_GREATER, WM_SETTEXT, 0, 0);
			SndCtrlMsg(hwndDlg, ID_EDIT_SIZE_LESS, WM_SETTEXT, 0, 0);
			pOrigExt->fExtEnabled = FALSE;
			AnimateWindow(GetCtrl(GetParent(hwndDlg), ID_STATIC_EXTBACK), 400, AW_HIDE | AW_VER_NEGATIVE | AW_SLIDE);
			CheckDlgButton(GetParent(hwndDlg), ID_CHK_ENABLE_EXT, BST_UNCHECKED);
			return 0;

		case ID_BUT_OK:
		{
			int j[3] = {0,0,0};
			memset(&g_Ext, 0, sizeof(EXTENDED));
			// do sizes
			SndCtrlMsg(hwndDlg, ID_EDIT_SIZE_GREATER, WM_GETTEXT, (WPARAM)10, (LPARAM)s);
			g_Ext.dwMoreThanSize = _wtol(s);

			SndCtrlMsg(hwndDlg, ID_EDIT_SIZE_LESS, WM_GETTEXT, (WPARAM)10, (LPARAM)s);
			g_Ext.dwLessThanSize = _wtol(s);

			// do ftAfterTime
			memset(&g_st, 0, sizeof(SYSTEMTIME));

			j[0] = (int)SndCtrlMsg(hwndDlg, IDC_DAY_AFTER, CB_GETCURSEL, 0, 0);
			j[1] = (int)SndCtrlMsg(hwndDlg, IDC_MONTH_AFTER, CB_GETCURSEL, 0, 0);
			j[2] = (int)SndCtrlMsg(hwndDlg, IDC_YEAR_AFTER, CB_GETCURSEL, 0, 0);
			if(j[0] > -1 && j[1] > -1 && j[2] > -1)
			{
				// miss these out if not
				g_Ext.after[0] = j[0];
				SndCtrlMsg(hwndDlg, IDC_DAY_AFTER, CB_GETLBTEXT, (WPARAM)j[0], (LPARAM)s);
				g_st.wDay   = (WORD)_wtol(s);

				g_Ext.after[1] = j[1];
				SndCtrlMsg(hwndDlg, IDC_MONTH_AFTER, CB_GETLBTEXT, (WPARAM)j[1], (LPARAM)s);
				g_st.wMonth =  (WORD)_wtol(s);

				g_Ext.after[2] = j[2];
				SndCtrlMsg(hwndDlg, IDC_YEAR_AFTER, CB_GETLBTEXT, (WPARAM)j[2], (LPARAM)s);
				g_st.wYear  =  (WORD)_wtol(s);

				SystemTimeToFileTime(&g_st, &g_Ext.ftAfterTime);
			}
			else
			{
				// -1 here means that the values will not be put back in in WM_INITDIALOG
				g_Ext.after[0] = -1;
				g_Ext.after[1] = -1;
				g_Ext.after[2] = -1;
			}
			// do ftBeforeTime
			memset(&g_st, 0, sizeof(SYSTEMTIME));

			j[0] = (int)SndCtrlMsg(hwndDlg, IDC_DAY_BEFORE, CB_GETCURSEL, 0, 0);
			j[1] = (int)SndCtrlMsg(hwndDlg, IDC_MONTH_BEFORE, CB_GETCURSEL, 0, 0);
			j[2] = (int)SndCtrlMsg(hwndDlg, IDC_YEAR_BEFORE, CB_GETCURSEL, 0, 0);
			if(j[0] > -1 && j[1] > -1 && j[2] > -1)
			{
				g_Ext.before[0] = j[0];
				SndCtrlMsg(hwndDlg, IDC_DAY_BEFORE, CB_GETLBTEXT, (WPARAM)j[0], (LPARAM)s);
				g_st.wDay   = (WORD)_wtol(s);

				g_Ext.before[1] = j[1];
				SndCtrlMsg(hwndDlg, IDC_MONTH_BEFORE, CB_GETLBTEXT, (WPARAM)j[1], (LPARAM)s);
				g_st.wMonth =  (WORD)_wtol(s);

				g_Ext.before[2] = j[2];
				SndCtrlMsg(hwndDlg, IDC_YEAR_BEFORE, CB_GETLBTEXT, (WPARAM)j[2], (LPARAM)s);
				g_st.wYear  =  (WORD)_wtol(s);
				SystemTimeToFileTime(&g_st, &g_Ext.ftBeforeTime);
			}
			else
			{
				g_Ext.before[0] = -1;
				g_Ext.before[1] = -1;
				g_Ext.before[2] = -1;
			}
			return EndDialog(hwndDlg, IDOK);
		}
		break;
		case ID_BUT_CANCEL:
			return EndDialog(hwndDlg, IDCANCEL);
		default:
			return 0;
		}
	case WM_CLOSE:
		return EndDialog(hwndDlg, ID_BUT_CONFIRMCANCEL);
	}
	return 0;
}

int DoExtendedParams(HWND hwnd, EXTENDED * pExt)
{
	HWND hExtBack;
	SYSTEMTIME st;
	wchar_t s[40];
	int fEnable = FALSE;

	if(IDOK == DialogBoxParam(g_hInst, MAKEINTRESOURCE(IDDIALOG_EXTENDED), hwnd,(DLGPROC)ExtendedDialogProc, (LPARAM)pExt))
	{
		memcpy(pExt, &g_Ext, sizeof(EXTENDED));

		hExtBack = GetCtrl(hwnd, ID_STATIC_EXTBACK);
		FileTimeToSystemTime(&pExt->ftAfterTime, &st);

		if(g_st.wYear == 1601)
			s[0] = '\0';
		else
		{
			swprintf(s, 40, L"%02d/%02d/%d", g_st.wDay, g_st.wMonth, g_st.wYear);
			fEnable = TRUE;
		}
		SetWindowText(GetCtrl(hExtBack, ID_STATIC_DATE_AFTER_TXT), s);

		FileTimeToSystemTime(&pExt->ftBeforeTime, &st);
		if(g_st.wYear == 1601)
			s[0] = '\0';
		else
		{
			swprintf(s, 40, L"%02d/%02d/%d", g_st.wDay, g_st.wMonth, g_st.wYear);
			fEnable = TRUE;
		}
		SetWindowText(GetCtrl(hExtBack, ID_STATIC_DATE_BEFORE_TXT), s);

		if(pExt->dwMoreThanSize == 0)
			s[0] = '\0';
		else
		{
			swprintf(s, 40, L"%d", pExt->dwMoreThanSize);
			fEnable = TRUE;
		}
		SetWindowText(GetCtrl(hExtBack, ID_STATIC_SIZE_MORE_TXT), s);

		if(pExt->dwLessThanSize == 0)
			s[0] = '\0';
		else
		{
			swprintf(s, 40, L"%d", pExt->dwLessThanSize);
			fEnable = TRUE;
		}
		SetWindowText(GetCtrl(hExtBack, ID_STATIC_SIZE_LESS_TXT), s);

		if(fEnable == TRUE)
		{
			ShowWindow(GetCtrl(hwnd, ID_CHK_ENABLE_EXT), SW_SHOW);
			pExt->fExtEnabled = TRUE;
			PostMessage(hwnd, WM_COMMAND, (WPARAM)MAKELONG(ID_CHK_ENABLE_EXT, 0), (LPARAM)TRUE);
		}
		else
		{
			pExt->fExtEnabled = FALSE;
			PostMessage(hwnd, WM_COMMAND, (WPARAM)MAKELONG(ID_CHK_ENABLE_EXT, 0), (LPARAM)FALSE);
		}
	}
	else
	{
		pExt->fExtEnabled = FALSE;
		PostMessage(hwnd, WM_COMMAND, (WPARAM)MAKELONG(ID_CHK_ENABLE_EXT, 0), (LPARAM)FALSE);
	}

	return 0;
}

wchar_t * MakeFilter(void)
{
	static wchar_t s1[150];
	wchar_t s2[150];
	size_t len;

	// ****************************************************
	// Messy! Have to make strings with '\0's embedded.
	// "File Type (*.exe)\0*.exe\0All Types (*.*)\0*.*\0\0"
	// ****************************************************
	LoadString(g_hInst, 19, s1, 150); // File Type (*.exe)
	len = wcslen(s1) + 1;

	wcscpy(&s1[len], L"*.exe");  // File Type (*.exe)\0*.exe

	len += 6; // Take past the last NULL

	// Second part
	LoadString(g_hInst, 90, s2, 150); // All Types (*.*)

	wcscpy(&s1[len], s2); 		  // File Type (*.exe)\0*.exe\0All Types (*.*)

	len += wcslen(s2) + 1;		  // Take past the last NULL

	wcscpy(&s1[len], L"*.*"); // File Type (*.exe)\0*.exe\0All Types (*.*)\0*.*

	len += 4;					  // Take past the last NULL

	// Finish with a double termination
	s1[len++] = '\0';
	s1[len]   = '\0';	// File Type (*.exe)\0*.exe\0All Types (*.*)\0*.*\0\0

	return s1;
}

int ChooseFile(HWND hParent, wchar_t * sResult)
{
	sResult[0] = 0;
	OPENFILENAME ofn;
	memset(&ofn, 0, sizeof(OPENFILENAME));
	ofn.lStructSize	= sizeof(OPENFILENAME);
	ofn.hInstance   = g_hInst;
	ofn.Flags		= OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY;
	ofn.hwndOwner	= hParent;

	wchar_t s[50];
	LoadString(g_hInst, 20, s, 150); // Choose Program

	ofn.lpstrFilter			= MakeFilter();
	ofn.lpstrTitle			= s;
	ofn.lpstrFile			= sResult;
	ofn.nMaxFile			= PATH_SIZE;
	ofn.lpstrCustomFilter	= NULL;
	ofn.nMaxCustFilter		= 0L;
	if (IDOK == GetOpenFileName(&ofn))
	{
		return 1;
	}
	return 0;
}

LRESULT CALLBACK SubClassEditBoxProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CHAR:		// stop editing in the text box
		return 0;

	case WM_SETFOCUS:
		if (HIWORD(wParam) == EN_SETFOCUS)
		{
			HideCaret(hwnd);
		}
		return 0;

	default:
		return CallWindowProc(pSubClassEditProc, hwnd, message, wParam, lParam) ;
	}
}

void SetEnables(HWND hwndDlg)
{
	// first one will always be enabled so start at second control
	// and set the text for the edit box's
	int i, set;
	for(i = 0; i<NUMSENDTOS; i++)
	{
		set = i + 302;
		EnableWindow(GetCtrl(hwndDlg, set + 0 ), g_strDisp_tmp[i][0] ? TRUE : FALSE);	// EDIT BOX's
		EnableWindow(GetCtrl(hwndDlg, set + 10), g_strDisp_tmp[i][0] ? TRUE : FALSE);	// EDIT BUTS
		SetWindowText(GetCtrl(hwndDlg, ID_EDIT_1 + i), g_strDisp_tmp[i]);
	}
}

LRESULT CALLBACK EditSendToDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	wchar_t s[150];
	static int which;

	switch (msg)
	{

	case WM_CTLCOLORDLG:
		return (LRESULT)g_hBrLite;

	case WM_CTLCOLORSTATIC:
		SetBkColor((HDC)wParam, g_bkCol);
		return (LRESULT)g_hBrLite;

	case WM_INITDIALOG:
		// Set Window text
		SetWindowResText(hwndDlg, 69); // Edit SendTo Menu
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_FOLD_1), 26); // Folder
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_PROG_1), 70); // Program
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_OK), 65); // OK
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_CANCEL), 58); // Cancel
		SetWindowResText(GetCtrl(hwndDlg, IDDIALOG_EXTENDED), 71); // Choose Either a Folder or Program and enter the Display Name
		SetWindowResText(GetCtrl(hwndDlg, IDDIALOG_ABOUT), 72); // Display Name
		SetWindowResText(GetCtrl(hwndDlg, 108), 73); // The Folder Or Program

		which = (int)lParam - ID_BUT_ED1; 	// which control
		SndMsg(GetCtrl(hwndDlg, ID_EDIT_DISP), EM_LIMITTEXT, MAX_DISP-1, 0);
		SetWindowText(GetCtrl(hwndDlg, ID_EDIT_DISP), g_strDisp_tmp[which]);	// Display Name
		SetWindowText(GetCtrl(hwndDlg, ID_EDIT_1), g_strSendto_tmp[which]);	// Folder/Program
		// subclass edit box - stop editing and caret for the Folder or Program box
		pSubClassEditProc = (WNDPROC)SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_1), GWLP_WNDPROC, (LONG_PTR)SubClassEditBoxProc);
		SetFocus(GetCtrl(hwndDlg, ID_EDIT_DISP));
		return 0;

	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case ID_BUT_OK:
			GetWindowText(GetCtrl(hwndDlg, ID_EDIT_DISP), g_sResult, PATH_SIZE);
			if(!wcslen(g_sResult))
			{
				LoadString(g_hInst, 21, s, 150); // You need to enter a Display Name!
				MsgBox(hwndDlg, s);
				SetFocus(GetCtrl(hwndDlg, ID_EDIT_DISP));
				return 0;
			}
			GetWindowText(GetCtrl(hwndDlg, ID_EDIT_1), g_sResult, PATH_SIZE);
			if(!wcslen(g_sResult))
			{
				LoadString(g_hInst, 22, s, 150); // You need to select either a Folder or Program!
				MsgBox(hwndDlg, s);
				return 0;
			}
			GetWindowText(GetCtrl(hwndDlg, ID_EDIT_DISP), g_sResult, PATH_SIZE);
			wcscpy(g_strDisp_tmp[which] , g_sResult);
			GetWindowText(GetCtrl(hwndDlg, ID_EDIT_1), g_sResult, PATH_SIZE);
			wcscpy(g_strSendto_tmp[which] , g_sResult);
			SetEnables(g_hwndDisplay);
			return EndDialog(hwndDlg, IDOK);

		case ID_BUT_CANCEL:
			return EndDialog(hwndDlg, IDCANCEL);

		case ID_BUT_FOLD_1:
			LoadString(g_hInst, 89, s, 150); // Choose a Folder
			if(SHBrowseDir(hwndDlg, s, g_sResult))
			{
				wcscat(g_sResult, L"\\");
				SetWindowText(GetCtrl(hwndDlg, ID_EDIT_1), g_sResult);
			}
			break;

		case ID_BUT_PROG_1:
			if(ChooseFile(hwndDlg, g_sResult))
			{
				SetWindowText(GetCtrl(hwndDlg, ID_EDIT_1), g_sResult);
			}
			break;
		}
		return 0;

	case WM_CLOSE:
		return EndDialog(hwndDlg, IDCANCEL);

	case WM_DESTROY:
		// set control's wndproc's back to original
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_1), GWLP_WNDPROC, (LONG_PTR)pSubClassEditProc);
		break;
	}
	return 0;
}

LRESULT CALLBACK DisplaySendToDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	int i;
	switch (msg)
	{

	case WM_CTLCOLORDLG:
		return (LRESULT)g_hBrLite;

	case WM_CTLCOLORSTATIC:
		SetBkColor((HDC)wParam, g_bkCol);
		return (LRESULT)g_hBrLite;

	case WM_INITDIALOG:
		// Set Window text
		SetWindowResText(hwndDlg, 66); // SendTo Menu Items
		SetWindowResText(GetCtrl(hwndDlg, 10), 67); // Add or Edit a SendTo Menu Item
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_ED1), 68); // Edit Item
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_ED2), 68); // Edit Item
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_ED3), 68); // Edit Item
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_ED4), 68); // Edit Item
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_ED5), 68); // Edit Item
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_ED6), 68); // Edit Item
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_CLEAR), 74); // Clear All
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_OK), 65); // OK
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_CANCEL), 58); // Cancel

		g_hwndDisplay = hwndDlg;
		// subclass edit box's so as to stop editing and the caret
		pSubClassEditProc = (WNDPROC)SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_1),GWLP_WNDPROC, (LONG_PTR)SubClassEditBoxProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_2),GWLP_WNDPROC, (LONG_PTR)SubClassEditBoxProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_3),GWLP_WNDPROC, (LONG_PTR)SubClassEditBoxProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_4),GWLP_WNDPROC, (LONG_PTR)SubClassEditBoxProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_5),GWLP_WNDPROC, (LONG_PTR)SubClassEditBoxProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_6),GWLP_WNDPROC, (LONG_PTR)SubClassEditBoxProc);
		for(i = 0; i<NUMSENDTOS; i++)
		{
			wcscpy(g_strSendto_tmp[i], g_strSendto[i]);
			wcscpy(g_strDisp_tmp[i], g_strDisp[i]);
		}
		SetEnables(hwndDlg);
		SetFocus(GetCtrl(hwndDlg, IDOK));
		return 0;

	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case ID_BUT_CLEAR:
			for(i = 0; i<5; i++)
			{
				SetWindowText(GetCtrl(hwndDlg, ID_EDIT_1 + i), L"");
				g_strSendto_tmp[i][0] = 0;
				g_strDisp_tmp[i][0]   = 0;
			}

			return 0;

		case ID_BUT_OK:
			for(i = 0; i<NUMSENDTOS; i++)
			{
				wcscpy(g_strSendto[i], g_strSendto_tmp[i]);
				wcscpy(g_strDisp[i], g_strDisp_tmp[i]);
			}
			return EndDialog(hwndDlg, IDOK);

		case ID_BUT_CANCEL:
			return EndDialog(hwndDlg, IDCANCEL);

		case ID_BUT_ED1:
		case ID_BUT_ED2:
		case ID_BUT_ED3:
		case ID_BUT_ED4:
		case ID_BUT_ED5:
		case ID_BUT_ED6:
			DialogBoxParam(g_hInst, MAKEINTRESOURCE(IDDIALOG_EDITSENDTO), hwndDlg,
						   (DLGPROC)EditSendToDialogProc, (LPARAM)LOWORD(wParam));
			break;
		}
		return 0;

	case WM_CLOSE:
		return EndDialog(hwndDlg, IDCANCEL);

	case WM_DESTROY:
		// set controls wndproc's back to original
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_1),GWLP_WNDPROC, (LONG_PTR)pSubClassEditProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_2),GWLP_WNDPROC, (LONG_PTR)pSubClassEditProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_3),GWLP_WNDPROC, (LONG_PTR)pSubClassEditProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_4),GWLP_WNDPROC, (LONG_PTR)pSubClassEditProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_5),GWLP_WNDPROC, (LONG_PTR)pSubClassEditProc);
		SetWindowLongPtr(GetCtrl(hwndDlg, ID_EDIT_6),GWLP_WNDPROC, (LONG_PTR)pSubClassEditProc);
	}
	return 0;
}

LRESULT CALLBACK MessageDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_INITDIALOG:
		// Set Window text
		SetWindowResText(hwndDlg, 64); // FindFile Message...
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_OK), 65); // OK

		GetKeyState(VK_CONTROL);
		SetWindowText(GetCtrl(hwndDlg, ID_STATIC_MESSAGETEXT), (wchar_t*)lParam);
		SetFocus(GetCtrl(hwndDlg, ID_BUT_OK));
		return FALSE;

	case WM_CTLCOLORDLG:
		return (LRESULT)g_hBrLite;

	case WM_CTLCOLORSTATIC:
		SetBkColor((HDC)wParam, g_bkCol);
		return (LRESULT)g_hBrLite;

	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case ID_BUT_OK:
			return EndDialog(hwndDlg, IDOK);
		}
		break;
	case WM_CLOSE:
		return EndDialog(hwndDlg, 0);
	}
	return 0;
}

LRESULT CALLBACK ConfirmDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	wchar_t s[150];
	wchar_t s1[150];
	// Two functions use this dialog, DELETE and MOVETO
	// lParam points to the text for the static text control
	switch (msg)
	{
	case WM_INITDIALOG:
		// Set Window text
		SetWindowResText(hwndDlg, 61); // FindFile - Confirm Operation
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_CONFIRMYES), 62); // &Yes
		SetWindowResText(GetCtrl(hwndDlg, ID_BUT_CONFIRMCANCEL), 63); // &Cancel

		// both icon windows are made containing their icons, hide one of them!
		SetWindowText(GetCtrl(hwndDlg, ID_STATIC_TEXTCONFIRM), (wchar_t*)lParam);
		LoadString(g_hInst, 7, s, 150);   // Delete
		LoadString(g_hInst, 22, s1, 150); // Move
		if(wcsstr((wchar_t*)lParam, s))
		{
			ShowWindow(GetCtrl(hwndDlg, IDI_CONFIRMICONMOV), SW_HIDE);
		}
		else if(wcsstr((wchar_t*)lParam, s1))
		{
			ShowWindow(GetCtrl(hwndDlg, IDI_CONFIRMICONDEL), SW_HIDE);
		}
		SetFocus(GetCtrl(hwndDlg, ID_BUT_CONFIRMYES)); //CANCEL
		return FALSE;

	case WM_CTLCOLORDLG:
		return (LRESULT)g_hBrLite;

	case WM_CTLCOLORSTATIC:
		SetBkColor((HDC)wParam, g_bkCol);
		return (LRESULT)g_hBrLite;

	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case ID_BUT_CONFIRMYES:
			return EndDialog(hwndDlg, ID_BUT_CONFIRMYES);
		case ID_BUT_CONFIRMCANCEL:
			return EndDialog(hwndDlg, ID_BUT_CONFIRMCANCEL);
		}
		break;

	case WM_CLOSE:
		return EndDialog(hwndDlg, ID_BUT_CONFIRMCANCEL);
	}
	return 0;
}

