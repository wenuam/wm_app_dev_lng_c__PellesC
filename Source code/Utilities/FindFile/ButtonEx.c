// buttonex.c
// John Findlay 2003
//
// Revised on 27th April 2016
// Moved 350 lines of code out of the main switch/case block of ButtonExWndProc()
// and made OnMouseMove(), OnPaint() etc, etc.
//
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <commctrl.h>
#include <wchar.h>
#include "buttonex.h"

#define BUTX_STRUCT GWLP_USERDATA

typedef struct tagBUT
{	unsigned short x;
	unsigned short y;
	wchar_t * text;
	wchar_t * tooltext;
	DWORD    style;
	COLORREF textcol;
	COLORREF backcol;
	HBRUSH   backbrh;
	BOOL	 colflag;	// backcolor has been set, do not change the color for WM_SYSCOLORCHANGE
	HCURSOR  hCur;
	HFONT    hFont;
	HBITMAP  hBmp[2];
	HICON    hIco[2];
	// These are for the BXS_TOOL and BXS_TOOLGROUP buttons
	BOOL     toolup;
	BOOL     toolnorm;
	BOOL     depressed;
	BOOL     beenclicked;
	//-----------------------------------------------------
	BOOL     focus;
	BOOL     disabled;
}BUT;

// the struct MOUSESTATE is declared in ButtonExWndProc() and is used to
// deal with mouse activity when over a button.
typedef struct tagState
{	BOOL bCaptured;
	BOOL bSelected;
	BOOL bState;
	BOOL bMoved;
	BOOL bSet;
	BOOL bSend;
}MOUSESTATE;

#define GetButStruct(hwnd) (BUT*)GetWindowLongPtr(hwnd, BUTX_STRUCT)

#define UpdateNow(hwnd)		InvalidateRect(hwnd, NULL, TRUE); \
							UpdateWindow(hwnd)

static int EnumToolGroupNormal(HWND hwnd, int j);
static void ConvertBitmapCols(HBITMAP hBitmap, COLORREF colfrom, COLORREF colto);

static HINSTANCE hInst;

#define BUTXLIBVERS L"ButtonEx Library Version 1.1"

static HPEN  	hLitePen;
static HPEN  	hShadowPen;
static HPEN  	hHighLitePen;
static HPEN  	hBlackPen;
static HFONT 	hFont;
static COLORREF systembtncol;

static int isinit = 0;
static wchar_t buf[120];

BOOL IsButtonExClass(HWND hwnd)
{
	wchar_t buf[20] = {0};
	// if it's our class
	GetClassName(hwnd, buf, 14);
	if (wcsstr(buf, L"ButtonExClass"))
		return TRUE;
	else
		return FALSE;
}

static int EnumFuncAmpersand(HWND hwnd, int chr)
{
	// checks for an ampersand char and de-presses the button
	// sending the WM_LBUTTONDOWN & WM_LBUTTONUP messages
	// to the button control
	wchar_t * pC;
	BUT * but;

	// only button classes
	if (!IsButtonExClass(hwnd))
		return TRUE;

	but = GetButStruct(hwnd);
	if(!but->text)
		return TRUE;

	pC = wcschr(but->text, '&');
	if(pC++)
	{
		buf[0] = *pC; buf[1] = '\0';
		_wcsupr(buf);
		if(buf[0] == chr)
		{
			// do the button
			SetFocus(hwnd);
			SendMessage(hwnd, WM_LBUTTONDOWN, 0, MAKELONG(10,10));
			Sleep(100);
			SendMessage(hwnd, WM_LBUTTONUP, 0, MAKELONG(10,10));
		}
	}
	return TRUE;
}

static int EnumToolGroupNormal(HWND hwnd, int j)
{
	BUT * but;
	// sets all BXS_TOOLGROUP buttons to normal
	if (!IsButtonExClass(hwnd))
		return TRUE;

	but = GetButStruct(hwnd);
	if(but->style & BXS_TOOLGROUP)
	{
		but->depressed = FALSE;
		but->toolnorm = TRUE;
		InvalidateRect(hwnd, NULL, TRUE);
	}
	return TRUE;
}

static int EnumFuncSysColor(HWND hwnd, int j)
{
	// send a WM_SYSCOLORCHANGE to all buttons
	SendMessage(hwnd, WM_SYSCOLORCHANGE, 0, 0);
	return TRUE; // continue enumeration
}

void Butx_SetToolGroup(HWND hwnd)
{
	HWND h = 0;
	BUT * b;
	BUT * but;

	// set a particular BXS_TOOLGROUP button down
	if (!IsButtonExClass(hwnd))
		return;

	b = GetButStruct(hwnd);
	if(b->style & BXS_TOOLGROUP)
	{
		h = GetWindow(GetParent(hwnd),GW_CHILD);
		// enumerate all child windows and draw non-depressed
		while((h = GetWindow(h,GW_HWNDNEXT)) != NULL)
		{

			// only button classes
			if (!IsButtonExClass(h))
				continue;

			but = GetButStruct(h);
			if(but->style & BXS_TOOLGROUP && but->depressed == TRUE)
			{
				but->depressed = FALSE;
				but->toolnorm = TRUE;
				InvalidateRect(h, NULL, TRUE);
				break;
			}
		}
		//  EnumChildWindows causes stack problem on Win2k HERE
		//	EnumChildWindows(GetParent(hwnd), (WNDENUMPROC) EnumToolGroupNormal, 0);
		b->toolnorm = FALSE;
		b->toolup   = FALSE;
		b->depressed  = TRUE;
		SendMessage(hwnd, WM_LBUTTONDOWN, 0, MAKELONG(10,10));
		SendMessage(hwnd, WM_LBUTTONUP, 0, MAKELONG(10,10));
	}
}

void ExitButtonEx(void)
{
	// delete various global GDI objects
	if (hLitePen)
		DeleteObject(hLitePen);
	if (hShadowPen)
		DeleteObject(hShadowPen);
	if (hHighLitePen)
		DeleteObject(hHighLitePen);
	if (hBlackPen)
		DeleteObject(hBlackPen);
	if (hFont)
		DeleteObject(hFont);
}

void Butx_libvers(void)
{
	MessageBox(GetActiveWindow(), BUTXLIBVERS, L"Version", MB_OK);
}

void Butx_Style(HWND hwnd, DWORD style)
{
	BUT * but;
	// change the button style
	if (!IsButtonExClass(hwnd))
		return;

	but = GetButStruct(hwnd);
	SetWindowLongPtr(hwnd, GWL_STYLE, (LONG_PTR)(style | WS_VISIBLE | WS_CHILD));
	but->style = style;
	InvalidateRect(hwnd, NULL, TRUE);
}

void Butx_SetCursor(HWND hwnd, HCURSOR hCur)
{
	BUT * but;
	if (!IsButtonExClass(hwnd))
		return;
	but = GetButStruct(hwnd);
	but->hCur = hCur;
}

int Butx_AddToolTipText(HWND hwnd, wchar_t * str)
{
	HWND hFocus;
	HWND hwndTip;
	BUT * but;
	int len;
	RECT rc;
	TOOLINFO ti;

	if (!IsButtonExClass(hwnd))
		return -1;

	hFocus = GetFocus();	// get the window that currently has the focus

	hwndTip = CreateWindowEx(0, TOOLTIPS_CLASS, NULL,
                   WS_POPUP | TTS_NOPREFIX | TTS_ALWAYSTIP,
                   CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
                   hwnd, NULL, GetModuleHandle(NULL), NULL);

	if(!hwndTip)
		return -1;

	but = GetButStruct(hwnd);

	len = wcslen(str);
	but->tooltext = malloc(len*2+2);
	if(!but->tooltext)
		return -1;
	wcscpy(but->tooltext, str);

	GetClientRect(hwnd, &rc);
	ti.cbSize 		= sizeof(TOOLINFO);
	ti.uFlags 		= TTF_SUBCLASS;
	ti.hwnd   		= hwnd;
	ti.uId    		= 0;
	ti.rect.left    = 0;
	ti.rect.top     = 0;
	ti.rect.right   = rc.right;
	ti.rect.bottom  = rc.bottom;
	ti.hinst        = GetModuleHandle(NULL);
	ti.lpszText     = but->tooltext;
	SendMessage(hwndTip, TTM_ADDTOOL, 0, (long)&ti);
	SendMessage(hwndTip,TTM_SETMAXTIPWIDTH,0,300);
	SetFocus(hFocus);	// set the focus back to the original window
	return 0;
}

void Butx_SysColorChange(HWND hwnd)
{
	DeleteObject(hShadowPen);
	DeleteObject(hHighLitePen);
	hShadowPen = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNSHADOW));
	hHighLitePen = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNHIGHLIGHT));

	EnumChildWindows(hwnd, (WNDENUMPROC) EnumFuncSysColor, 0);
	// this has to be set after all child windows
	// have been altered in WM_SYSCOLORCHANGE:
	systembtncol = GetSysColor(COLOR_BTNFACE);
}

HFONT Butx_GetFont(HWND hwnd)
{
	BUT * b;

	if (!IsButtonExClass(hwnd))
		return NULL;

	b = GetButStruct(hwnd);
	return b->hFont;
}

void Butx_SetFont(HWND hwnd, HFONT hFont)
{
	BUT * b;
	if (!IsButtonExClass(hwnd))
		return;

	b = GetButStruct(hwnd);
	b->hFont = hFont;
	InvalidateRect(hwnd, NULL, TRUE);
}

void Butx_GetText(HWND hwnd, wchar_t * buf, int len)
{
	BUT * b;
	if (!IsButtonExClass(hwnd))
		return;

	b = GetButStruct(hwnd);
	wcsncpy(buf, b->text, len);
}

int Butx_SetText(HWND hwnd, wchar_t * str)
{
	BUT * b;
	int len;
	if (!IsButtonExClass(hwnd))
		return -1;

	b = GetButStruct(hwnd);
	len = wcslen(str);

 	if (b->text)
 	{
	   free(b->text);
	   b->text = NULL;
	}
	if(len)
	{
		b->text = malloc(len*2+2);
		if (!b->text)
			return -1;
		wcscpy(b->text, str);
	}
	UpdateNow(hwnd);
	return 0;
}

void Butx_SetBkColor(HWND hwnd, COLORREF colref)
{
	BUT * b;
	if (!IsButtonExClass(hwnd))
		return;

	b = GetButStruct(hwnd);
	if(b->style & BXS_XP)
		return;

	if(b->backcol != colref)
	{
		DeleteObject(b->backbrh);
		b->backbrh = CreateSolidBrush(colref);
		b->backcol = colref;
		b->colflag = TRUE;
		InvalidateRect(hwnd, NULL, TRUE);
	}
}

COLORREF Butx_GetBkColor(HWND hwnd)
{
	BUT * b;
	if (!IsButtonExClass(hwnd))
		return 0;

	b = GetButStruct(hwnd);
	return b->backcol;
}

void Butx_SetTextColor(HWND hwnd, COLORREF colref)
{
	BUT * b;
	if (!IsButtonExClass(hwnd))
		return;

	b = GetButStruct(hwnd);
	b->textcol = colref;
	InvalidateRect(hwnd, NULL, TRUE);
}

COLORREF Butx_GetTextColor(HWND hwnd)
{
	BUT * b;
	if (!IsButtonExClass(hwnd))
		return 0;

	b = GetButStruct(hwnd);
	return b->textcol;
}

void Butx_ShowWindow(HWND hwnd, DWORD show)
{
	ShowWindow(hwnd, show);
	UpdateWindow(hwnd);
}

static SIZE size;
wchar_t tmp[MAX_PATH+100];
// DrawButText() does text and images
static void DrawButText(HWND hwnd, PAINTSTRUCT * ps, int offset)
{
	BUT * but;
	int xstarttext,ystarttext;
	int xstartbmp,ystartbmp;
	size_t i;
	int xsize = 0, cx, cy;
	HANDLE hOldFont = NULL;
	BITMAP bm;
	int drawflag;
	but = GetButStruct(hwnd);
	cx = but->x;
	cy = but->y;

	memset(&size, 0, sizeof(size)); // set to 0 at start

	// if no text do not select font or get text extent
	if (but->text)
	{
		// if ampersane take it out before passing to GetTextExtentPoint32
		wchar_t * p = tmp;
		hOldFont = SelectObject(ps->hdc, but->hFont);
		if(wcschr(but->text, '&'))
		{
			for(i = 0; i<wcslen(but->text); i++)
			{
				if(but->text[i] != '&')
					*p++ = but->text[i];
			}
			*p = 0;
		}
		else
		{
			wcscpy(tmp, but->text);
		}
		GetTextExtentPoint32(ps->hdc, tmp, wcslen(tmp), &size);
	}

	// drawflag is used in DrawState() API
	drawflag = but->disabled ? DSS_DISABLED : 0;

	if(but->hBmp[0] && (but->style & BXS_BITMAP))
	{
		GetObject(but->hBmp[0], sizeof(bm), &bm);
		if (but->text)
		{			// adjust depending on text
			xsize = size.cx + 10 + bm.bmWidth;
		}
		else
		{
			xsize = bm.bmWidth;
		}

		if ( but->style & BXS_LEFTTEXT )
		{
			xstarttext = (cx - xsize)/2;
			ystarttext = (cy - size.cy)/2 ;
			xstartbmp = (cx - xsize)/2 + 10 + size.cx;
			ystartbmp = (but->y - bm.bmHeight)/2;
		}
		else if ( but->style & BXS_TOPTEXT )
		{
			xstarttext = (cx - size.cx)/2;
			ystarttext = (8);
			xstartbmp = (cx - bm.bmWidth)/2;
			ystartbmp = (but->y - (bm.bmHeight+8));
		}
		else if ( but->style & BXS_BOTTOMTEXT )
		{
			xstarttext = (cx - size.cx)/2;
			ystarttext = (cy - (size.cy + 8));
			xstartbmp = (cx - bm.bmWidth)/2;
			ystartbmp = (10);
		}
		else if ( but->style & BXS_JUSTLEFT )
		{
			xstarttext = 14 + bm.bmWidth;
			ystarttext = (cy - size.cy)/2 ;
			xstartbmp  = 8;
			ystartbmp  = (but->y - bm.bmHeight)/2;
		}
		else
		{
			xstarttext = (cx - xsize)/2 + 10 + bm.bmWidth;
			ystarttext = (cy - size.cy)/2 ;
			xstartbmp = (cx - xsize)/2;
			ystartbmp = (but->y - bm.bmHeight)/2;
		}

		if(but->style & BXS_BMPONLY)
		{
			xstartbmp = (cx - bm.bmWidth)/2;
			ystartbmp = (cy - bm.bmHeight)/2;
		}

		// draw bitmap
		if(offset==1 && but->hBmp[1])
			DrawState(ps->hdc, NULL, NULL, (LPARAM)but->hBmp[1], 0,
					xstartbmp + offset, ystartbmp + offset, 0, 0,	drawflag | DST_BITMAP);
		else
			DrawState(ps->hdc, NULL, NULL, (LPARAM)but->hBmp[0], 0,
					xstartbmp + offset, ystartbmp + offset, 0, 0,	drawflag | DST_BITMAP);

	// sort out the position of the icon
	}
	else if(but->hIco[0] && (but->style & BXS_ICON))
	{
		ICONINFO in;
		GetIconInfo(but->hIco[0], &in);
		bm.bmWidth = in.xHotspot*2; //32;
		bm.bmHeight = in.yHotspot*2; //32;

		if (but->text)
		{			// adjust depending on test
			xsize = size.cx + 10 + bm.bmWidth;
		}

		if( but->style & BXS_LEFTTEXT )
		{
			xstarttext = (cx - xsize)/2;
			ystarttext = (cy - size.cy)/2 ;
			xstartbmp = (cx - xsize)/2 + 10 + size.cx;
			ystartbmp = (but->y - bm.bmHeight)/2;
		}
		else if ( but->style & BXS_TOPTEXT )
		{
			xstarttext = (cx - size.cx)/2;
			ystarttext = (8);
			xstartbmp = (cx - bm.bmWidth)/2;
			ystartbmp = (but->y - (bm.bmHeight+8));
		}
		else if ( but->style & BXS_BOTTOMTEXT )
		{
			xstarttext = (cx - size.cx)/2;
			ystarttext = (cy - (size.cy + 8));
			xstartbmp = (cx - bm.bmWidth)/2;
			ystartbmp = (10);
		}
		else if ( but->style & BXS_JUSTLEFT )
		{
			xstarttext = 14 + bm.bmWidth;
			ystarttext = (cy - size.cy)/2 ;
			xstartbmp  = 8;
			ystartbmp  = (but->y - bm.bmHeight)/2;
		}
		else
		{
			xstarttext = (cx - xsize)/2 + 10 + bm.bmWidth;
			ystarttext = (cy - size.cy)/2 ;
			xstartbmp = (cx - xsize)/2;
			ystartbmp = (but->y - bm.bmHeight)/2;
		}

		// draw icon
		if(offset==1 && but->hIco[1])
			DrawState(ps->hdc, NULL, NULL, (LPARAM)but->hIco[1], 0, xstartbmp + offset,
					ystartbmp + offset, 0, 0, drawflag | DST_ICON);
		else
			DrawState(ps->hdc, NULL, NULL, (LPARAM)but->hIco[0], 0, xstartbmp + offset,
					ystartbmp + offset, 0, 0, drawflag | DST_ICON);

		DeleteObject(in.hbmMask);
		DeleteObject(in.hbmColor);

	}
	else
	{
		xsize = size.cx;
		xstarttext = (cx - xsize)/2 ;
		ystarttext = (cy - size.cy)/2 ;
	}

	// do the text
	if (but->text)
	{
		SetBkColor(ps->hdc, but->backcol);

		if(but->disabled)
			SetTextColor(ps->hdc, RGB(128,128,128));
		else
			SetTextColor(ps->hdc, but->textcol);

		DrawState(ps->hdc, NULL, NULL, (LPARAM)but->text, wcslen(but->text),
					xstarttext + offset, ystarttext + offset, 0, 0,	drawflag | DST_PREFIXTEXT);//DST_TEXT

		SelectObject(ps->hdc, hOldFont);
	}

	// do focusrect
	if((but->style & BXS_XP))
		return;

	if(but->style & BXS_FOCUSRECT && but->focus)
	{
		ps->rcPaint.top   +=4; ps->rcPaint.left   +=4;
		ps->rcPaint.right -=4; ps->rcPaint.bottom -=4;
		DrawFocusRect(ps->hdc, &ps->rcPaint);
	}
}

#define DFCS_TRANSPARENT        0x0800

void DoCornersUp(HDC hdc, RECT * prc)
{
	SetPixelV(hdc, prc->left+1, prc->bottom-1, RGB(128, 128, 128));
	SetPixelV(hdc, prc->left, prc->bottom-2, RGB(128, 128, 128));

	SetPixelV(hdc, prc->left, prc->top+1, RGB(128, 128, 128));
	SetPixelV(hdc, prc->left+1, prc->top, RGB(128, 128, 128));

	SetPixelV(hdc, prc->right-2, prc->top, RGB(128, 128, 128));
	SetPixelV(hdc, prc->right-1, prc->top+1, RGB(128, 128, 128));

	SetPixelV(hdc, prc->right-1, prc->bottom-2, RGB(128, 128, 128));
	SetPixelV(hdc, prc->right-2, prc->bottom-1, RGB(128, 128, 128));

	SetPixelV(hdc, prc->left+1, prc->top+2, RGB(214, 208, 197));
	SetPixelV(hdc, prc->left+2, prc->top+1, RGB(214, 208, 197));
}

void DoCornersDown(HDC hdc, RECT * prc)
{
	SetPixelV(hdc, prc->left+1, prc->bottom-1, RGB(128, 128, 128));
	SetPixelV(hdc, prc->left, prc->bottom-2, RGB(128, 128, 128));

	SetPixelV(hdc, prc->left, prc->top+1, RGB(128, 128, 128));
	SetPixelV(hdc, prc->left+1, prc->top, RGB(128, 128, 128));

	SetPixelV(hdc, prc->right-2, prc->top, RGB(128, 128, 128));
	SetPixelV(hdc, prc->right-1, prc->top+1, RGB(128, 128, 128));

	SetPixelV(hdc, prc->right-1, prc->bottom-2, RGB(128, 128, 128));
	SetPixelV(hdc, prc->right-2, prc->bottom-1, RGB(128, 128, 128));

	SetPixelV(hdc, prc->right-3, prc->bottom-2, RGB(214, 208, 197));
	SetPixelV(hdc, prc->right-2, prc->bottom-3, RGB(214, 208, 197));
}

static void DrawBorderUp(HWND hwnd, PAINTSTRUCT * ps)
{
	BUT * but = GetButStruct(hwnd);
	RECT rc;
	HANDLE hOldPen, hOldBrh;
	HPEN hPenDk, hPenLt, hPenXLt;

	GetClientRect(hwnd, &rc);

	if(but->style & BXS_NORMAL)
	{
		DrawFrameControl(ps->hdc, &rc, DFC_BUTTON, DFCS_BUTTONPUSH);
		goto drawtextup;
	}

	MoveToEx(ps->hdc, rc.right-1, 0, NULL);

	hOldPen = SelectObject(ps->hdc, hBlackPen);
	hOldBrh = SelectObject(ps->hdc, but->backbrh);
	// XPXP //b->backcol
	if((but->style & BXS_XP) && (but->style & BXS_FOCUSRECT) && but->focus)
	{
		RoundRect(ps->hdc, rc.left, rc.top, rc.right, rc.bottom,6,6);
		hPenDk = CreatePen(PS_SOLID, 1, RGB(153, 163, 212));
		hPenLt = CreatePen(PS_SOLID, 1, RGB(173, 197, 238));
		hPenXLt = CreatePen(PS_SOLID, 1, RGB(193, 224, 235));

		// bottom most line (hPenDk)
		SelectObject(ps->hdc, hPenDk);
		MoveToEx(ps->hdc, rc.left + 2, rc.bottom - 2, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.bottom - 2);
		// right most line  (hPenDk)
		MoveToEx(ps->hdc, rc.right - 2, rc.top + 2, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.bottom - 2);

		// bottom most line -1 (hPenLt)
		SelectObject(ps->hdc, hPenLt);
		MoveToEx(ps->hdc, rc.left + 1, rc.bottom - 3, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.bottom - 3);
		// right most line - 1 (hPenLt)
		MoveToEx(ps->hdc, rc.right - 3, rc.top + 1, NULL);
		LineTo(ps->hdc, rc.right - 3, rc.bottom - 3);

		// bottom most line -2 (hPenXLt)
		SelectObject(ps->hdc, hPenXLt);
		MoveToEx(ps->hdc, rc.left + 1, rc.bottom - 4, NULL);
		LineTo(ps->hdc, rc.right - 3, rc.bottom - 4);
		// right most line - 2 (hPenXLt)
		MoveToEx(ps->hdc, rc.right - 4, rc.top + 1, NULL);
		LineTo(ps->hdc, rc.right - 4, rc.bottom - 3);

		// top most line (hPenXLt)
		MoveToEx(ps->hdc, rc.left + 3, rc.top + 1, NULL);
		LineTo(ps->hdc, rc.right - 4, rc.top + 1);
		// left most line (hPenXLt)
		MoveToEx(ps->hdc, rc.left + 1, rc.top + 3, NULL);
		LineTo(ps->hdc, rc.left + 1, rc.bottom - 4);

		//
		DoCornersUp(ps->hdc, &rc);

		DeleteObject(hPenDk);
		DeleteObject(hPenLt);
		DeleteObject(hPenXLt);

	}
	else if((but->style & BXS_XP))
	{
		RoundRect(ps->hdc, rc.left, rc.top, rc.right, rc.bottom,6,6);
		hPenDk = CreatePen(PS_SOLID, 1, RGB(214, 208, 197));
		hPenLt = CreatePen(PS_SOLID, 1, RGB(226, 223, 214));
		hPenXLt = CreatePen(PS_SOLID, 1, RGB(236, 235, 230));

		// bottom most line (hPenDk)
		SelectObject(ps->hdc, hPenDk);
		MoveToEx(ps->hdc, rc.left + 2, rc.bottom - 2, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.bottom - 2);
		// right most line  (hPenDk)
		MoveToEx(ps->hdc, rc.right - 2, rc.top + 2, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.bottom - 2);

		// bottom most line -1 (hPenLt)
		SelectObject(ps->hdc, hPenLt);
		MoveToEx(ps->hdc, rc.left + 1, rc.bottom - 3, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.bottom - 3);
		// right most line - 1 (hPenLt)
		MoveToEx(ps->hdc, rc.right - 3, rc.top + 1, NULL);
		LineTo(ps->hdc, rc.right - 3, rc.bottom - 3);

		// bottom most line -2 (hPenXLt)
		SelectObject(ps->hdc, hPenXLt);
		MoveToEx(ps->hdc, rc.left + 1, rc.bottom - 4, NULL);
		LineTo(ps->hdc, rc.right - 3, rc.bottom - 4);
		// right most line - 2 (hPenXLt)
		MoveToEx(ps->hdc, rc.right - 4, rc.top + 1, NULL);
		LineTo(ps->hdc, rc.right - 4, rc.bottom - 3);

		DoCornersUp(ps->hdc, &rc);

		DeleteObject(hPenDk);
		DeleteObject(hPenLt);
		DeleteObject(hPenXLt);
	}
	else
	{
		if(but->style & BXS_LITE)
			SelectObject(ps->hdc, hLitePen);
		else if(but->style & BXS_XP)
			SelectObject(ps->hdc, hLitePen);
		else
			SelectObject(ps->hdc, hHighLitePen);

		LineTo(ps->hdc, 0, 0);
		LineTo(ps->hdc, 0, rc.bottom-1);

		if(but->style & BXS_LITE)
			SelectObject(ps->hdc, hBlackPen);
		else
			SelectObject(ps->hdc, hShadowPen);

		LineTo(ps->hdc, rc.right-1, rc.bottom-1);
		LineTo(ps->hdc, rc.right-1, rc.top);
	}

	SelectObject(ps->hdc, hOldPen);
	SelectObject(ps->hdc, hOldBrh);

drawtextup:
	DrawButText(hwnd, ps, 0);
}

static void DrawBorderDown(HWND hwnd, PAINTSTRUCT * ps)
{
	BUT * but = GetButStruct(hwnd);
	RECT rc;
	HANDLE hOldPen, hOldBrh;
	HPEN hPenDk, hPenLt, hPenXLt;

	GetClientRect(hwnd, &rc);

	if(but->style & BXS_NORMAL)
	{
		DrawFrameControl(ps->hdc, &rc, DFC_BUTTON, DFCS_BUTTONPUSH|DFCS_PUSHED);
		goto drawtextdown;
	}

	MoveToEx(ps->hdc, rc.right-1, 0, NULL);

	hOldPen = SelectObject(ps->hdc, hBlackPen);
	hOldBrh = SelectObject(ps->hdc, but->backbrh);
	// XPXP
	if((but->style & BXS_XP) && (but->style & BXS_FOCUSRECT) && but->focus)
	{
		RoundRect(ps->hdc, rc.left, rc.top, rc.right, rc.bottom,6,6);
		hPenDk = CreatePen(PS_SOLID, 1, RGB(153, 163, 212));
		hPenLt = CreatePen(PS_SOLID, 1, RGB(173, 197, 238));
		hPenXLt = CreatePen(PS_SOLID, 1, RGB(193, 224, 235));

		// top most line (hPenDk)
		SelectObject(ps->hdc, hPenDk);
		MoveToEx(ps->hdc, rc.left + 2, rc.top + 1, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.top + 1);
		// left most line  (hPenDk)
		MoveToEx(ps->hdc, rc.left + 1, rc.top + 2, NULL);
		LineTo(ps->hdc, rc.left + 1, rc.bottom - 2);

		// top most line + 1 (hPenLt);
		SelectObject(ps->hdc, hPenLt);
		MoveToEx(ps->hdc, rc.left + 2, rc.top + 2, NULL);
		LineTo(ps->hdc, rc.right - 1, rc.top + 2);
		// left most line + 1
		MoveToEx(ps->hdc, rc.left + 2, rc.top + 2, NULL);
		LineTo(ps->hdc, rc.left + 2, rc.bottom - 1);

		// top most line + 2
		SelectObject(ps->hdc, hPenXLt);
		MoveToEx(ps->hdc, rc.left + 3, rc.top + 3, NULL);
		LineTo(ps->hdc, rc.right - 1, rc.top + 3);
		// left most line + 2
		MoveToEx(ps->hdc, rc.left + 3, rc.top + 3, NULL);
		LineTo(ps->hdc, rc.left + 3, rc.bottom - 1);

		// bottom most line (hPenXLt)
		MoveToEx(ps->hdc, rc.left + 4, rc.bottom - 2, NULL);
		LineTo(ps->hdc, rc.right - 2,  rc.bottom - 2);
		// right most line (hPenXLt)
		MoveToEx(ps->hdc, rc.right - 2, rc.top + 3, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.bottom - 3);

		DoCornersDown(ps->hdc, &rc);


		DeleteObject(hPenDk);
		DeleteObject(hPenLt);
		DeleteObject(hPenXLt);

	}
	else if((but->style & BXS_XP))
	{
		RoundRect(ps->hdc, rc.left, rc.top, rc.right, rc.bottom,6,6);
		hPenDk = CreatePen(PS_SOLID, 1, RGB(214, 208, 197));
		hPenLt = CreatePen(PS_SOLID, 1, RGB(226, 223, 214));
		hPenXLt = CreatePen(PS_SOLID, 1, RGB(236, 235, 230));

		// top most line (hPenDk)
		SelectObject(ps->hdc, hPenDk);
		MoveToEx(ps->hdc, rc.left + 2, rc.top + 1, NULL);
		LineTo(ps->hdc, rc.right - 2, rc.top + 1);
		// left most line  (hPenDk)
		MoveToEx(ps->hdc, rc.left + 1, rc.top + 2, NULL);
		LineTo(ps->hdc, rc.left + 1, rc.bottom - 2);

		// top most line + 1 (hPenLt);
		SelectObject(ps->hdc, hPenLt);
		MoveToEx(ps->hdc, rc.left + 2, rc.top + 2, NULL);
		LineTo(ps->hdc, rc.right - 1, rc.top + 2);
		// left most line + 1
		MoveToEx(ps->hdc, rc.left + 2, rc.top + 2, NULL);
		LineTo(ps->hdc, rc.left + 2, rc.bottom - 1);

		// top most line + 2
		SelectObject(ps->hdc, hPenXLt);
		MoveToEx(ps->hdc, rc.left + 3, rc.top + 3, NULL);
		LineTo(ps->hdc, rc.right - 1, rc.top + 3);
		// left most line + 2
		MoveToEx(ps->hdc, rc.left + 3, rc.top + 3, NULL);
		LineTo(ps->hdc, rc.left + 3, rc.bottom - 1);

		DoCornersDown(ps->hdc, &rc);

		DeleteObject(hPenDk);
		DeleteObject(hPenLt);
		DeleteObject(hPenXLt);

	}
	else
	{
		if(but->style & BXS_LITE)
			SelectObject(ps->hdc, hBlackPen);
		else if(but->style & BXS_XP)
			SelectObject(ps->hdc, hLitePen);
		else
			SelectObject(ps->hdc, hShadowPen);

		LineTo(ps->hdc, 0, 0);
		LineTo(ps->hdc, 0, rc.bottom-1);

		if(but->style & BXS_LITE)
			SelectObject(ps->hdc, hLitePen);
		else
			SelectObject(ps->hdc, hHighLitePen);

		LineTo(ps->hdc, rc.right-1, rc.bottom-1);
		LineTo(ps->hdc, rc.right-1, rc.top);
	}
	SelectObject(ps->hdc, hOldPen);
	SelectObject(ps->hdc, hOldBrh);

drawtextdown:
	DrawButText(hwnd, ps, 1);
}

// DrawBorderTool() & DrawBorderToolUp() are used withBXS_TOOL and BXS_TOOLGROUP buttons only
static void DrawBorderTool(HWND hwnd, PAINTSTRUCT * ps)
{
	DrawButText(hwnd, ps, 0);
}

static void DrawBorderToolUp(HWND hwnd, PAINTSTRUCT * ps)
{
	BUT * but = GetButStruct(hwnd);
	RECT rc;
	HANDLE hOldPen, hOldBrh;

	GetClientRect(hwnd, &rc);
	MoveToEx(ps->hdc, rc.right-1, 0, NULL);

	hOldPen = SelectObject(ps->hdc, hBlackPen);
	hOldBrh = SelectObject(ps->hdc, but->backbrh);

	if(but->style & BXS_LITE)
		SelectObject(ps->hdc, hLitePen);
	else
		SelectObject(ps->hdc, hHighLitePen);

	LineTo(ps->hdc, 0, 0);
	LineTo(ps->hdc, 0, rc.bottom-1);

	if(but->style & BXS_LITE)
		SelectObject(ps->hdc, hBlackPen);
	else
		SelectObject(ps->hdc, hShadowPen);

	LineTo(ps->hdc, rc.right-1, rc.bottom-1);
	LineTo(ps->hdc, rc.right-1, rc.top);

	DrawButText(hwnd, ps, 0);
	SelectObject(ps->hdc, hOldPen);
	SelectObject(ps->hdc, hOldBrh);
}

LRESULT OnKeyUp(HWND hwnd, WPARAM wParam, LPARAM lParam)
{
	BUT * but = GetButStruct(hwnd);
	if (wParam == VK_TAB && but->style & BXS_TABSTOP)
	{
		HWND h = GetNextDlgTabItem(GetParent(hwnd), hwnd, FALSE);
		if (h)
			SetFocus(h);
		else
			SendMessage(GetParent(hwnd), WM_KEYUP, wParam, lParam);
	}
	if (wParam == VK_SPACE || wParam == VK_RETURN)
	{
		SendMessage(hwnd, WM_LBUTTONDOWN, 0, MAKELONG(10, 10));
		Sleep(100);
		SendMessage(hwnd, WM_LBUTTONUP, 0, MAKELONG(10, 10));
	}
	return 0;

}

LRESULT OnCreate(HWND hwnd, LPARAM lParam)
{
	BUT * b;
	static CREATESTRUCT *pcs;
	pcs = (CREATESTRUCT *)lParam;

	b = calloc(1, sizeof(BUT));
	if (!b)
		return -1;

	if (!(pcs->style & BXS_BMPONLY))
	{
		int len = wcslen(pcs->lpszName);
		if (len)
		{
			b->text = malloc(len * 2 + 2);
			wcscpy(b->text, pcs->lpszName);
		}
	}
	b->x = pcs->cx;
	b->y = pcs->cy;
	b->hFont = hFont;
	b->backcol = GetSysColor(COLOR_BTNFACE);
	b->backbrh = CreateSolidBrush(b->backcol);
	b->textcol = 0;
	b->toolnorm = TRUE;
	systembtncol = b->backcol;

	// adjust for exclusions and inclusions
	if ((pcs->style & BXS_BORDER) && (pcs->style & BXS_XP))
	{
		pcs->style = (pcs->style ^ BXS_BORDER);
	}
	if (pcs->style & BXS_TOOLGROUP && !(pcs->style & BXS_TOOL))
	{
		pcs->style = pcs->style | BXS_TOOL;
	}

	// if it's our class
	GetClassName(hwnd, buf, 14);
	if (wcsstr(buf, TEXT("ButtonExClass")))
		SetWindowLongPtr(hwnd, GWL_STYLE, (LONG_PTR)pcs->style);

	b->style = pcs->style;
	SetWindowLongPtr(hwnd, BUTX_STRUCT, (LONG_PTR)b);
	if (pcs->style & BXS_XP)
	{
		b->backbrh = CreateSolidBrush(RGB(243, 243, 239));
		b->backcol = RGB(243, 243, 239);
		b->colflag = TRUE;
	}
	return 0;
}

LRESULT OnSysColorChange(HWND hwnd)
{
	BUT * but = GetButStruct(hwnd);
	if (!but->colflag)
	{
		DeleteObject(but->backbrh);
		but->backcol = GetSysColor(COLOR_BTNFACE);
		but->backbrh = CreateSolidBrush(but->backcol);
	}
	if (!(but->style & BXS_NOSYSCOLORCHANGE))
	{
		if (but->hBmp[0])
			ConvertBitmapCols(but->hBmp[0], systembtncol, GetSysColor(COLOR_BTNFACE));
		if (but->hBmp[1])
			ConvertBitmapCols(but->hBmp[1], systembtncol, GetSysColor(COLOR_BTNFACE));
	}
	InvalidateRect(hwnd, NULL, TRUE);
	return 0;

}

LRESULT OnPaint(HWND hwnd, BOOL bSelected)
{
	static PAINTSTRUCT ps;
	BUT * but = GetButStruct(hwnd);

	BeginPaint(hwnd, &ps);
	if (but->style & BXS_TOOL && but->style & BXS_TOOLGROUP)
	{
		if (!but->depressed && but->toolnorm)
		{
			DrawBorderTool(hwnd, &ps);
		}
		else if (but->toolup)
		{
			DrawBorderUp(hwnd, &ps);
		}
		else if (!but->toolup && !but->toolnorm)
		{
			DrawBorderDown(hwnd, &ps);
		}
	}
	else if (but->style & BXS_TOOL)
	{
		if (but->toolup)
		{
			DrawBorderToolUp(hwnd, &ps);
		}
		else if (!but->toolup && !but->toolnorm)
		{
			DrawBorderDown(hwnd, &ps);
		}
		else if (!but->toolup)
		{
			DrawBorderTool(hwnd, &ps);
		}
	}
	else
	{
		if (!bSelected)
			DrawBorderUp(hwnd, &ps);
		if (bSelected)
			DrawBorderDown(hwnd, &ps);
	}
	EndPaint(hwnd, &ps);
	return 0;
}

LRESULT OnSize(HWND hwnd, LPARAM lParam)
{
	BUT * but = GetButStruct(hwnd);
	InvalidateRect(hwnd, NULL, TRUE);
	SendMessage(hwnd, WM_NCPAINT, 1, 0);	// wParam == 1 refreshes the whole border
	but->x = LOWORD(lParam);
	but->y = HIWORD(lParam);
	return 0;
}

LRESULT OnEraseBkgnd(HWND hwnd, WPARAM wParam)
{
	HANDLE hOldBrh;
	HANDLE hOldPen;
	RECT rc;
	BUT * but = GetButStruct(hwnd);
	GetClientRect(hwnd, &rc);
	if (but->style & BXS_BMPONLY)
	{
		return 1;
	}
	else if (but->style & BXS_XP)
	{
		hOldBrh = SelectObject((HDC)wParam, but->backbrh);
		RoundRect((HDC)wParam, rc.left, rc.top, rc.right, rc.bottom, 8, 8);
		SelectObject((HDC)wParam, hOldBrh);
	}
	else if (but->style & BXS_TOOL)
	{
		hOldBrh = SelectObject((HDC)wParam, but->backbrh);
		hOldPen = SelectObject((HDC)wParam, GetStockObject(NULL_PEN));
		Rectangle((HDC)wParam, rc.left, rc.top, rc.right + 1, rc.bottom + 1);
		SelectObject((HDC)wParam, hOldBrh);
		SelectObject((HDC)wParam, hOldPen);
	}
	else
	{
		hOldBrh = SelectObject((HDC)wParam, but->backbrh);
		Rectangle((HDC)wParam, rc.left, rc.top, rc.right, rc.bottom);
		SelectObject((HDC)wParam, hOldBrh);
	}
	return 1;
}

static RECT r;
static POINT pt;
LRESULT OnMouseMove(HWND hwnd, LPARAM lParam, MOUSESTATE * ms)
{
	unsigned short x, y;
	ms->bMoved = TRUE;
	x = LOWORD(lParam);
	y = HIWORD(lParam);

	BUT * but = GetButStruct(hwnd);

	if (but->style & BXS_TOOL)
	{
		GetCursorPos(&pt);
		GetWindowRect(hwnd, &r);

		// first time the mouse comes over the button
		// should only happen once each hover
		if (!but->toolup && but->toolnorm)
		{
			SetCapture(hwnd);
			but->toolup = TRUE;
			but->toolnorm = FALSE;
			InvalidateRect(hwnd, NULL, TRUE);

			// if not over button
		}
		else if (!PtInRect(&r, pt))
		{
			ReleaseCapture();
			but->toolup = FALSE;
			if (!but->depressed)
			{
				but->toolnorm = TRUE;
			}
			but->beenclicked = FALSE;	// not over button
			InvalidateRect(hwnd, NULL, TRUE);
		}
	}
	else
	{	// NON-BXS_TOOL buttons
		if (ms->bCaptured)
		{
			if (x > but->x || y > but->y)
				ms->bSelected = FALSE;
			else if (x < but->x || y < but->y)
				ms->bSelected = TRUE;
		}
		if (ms->bState != ms->bSelected)
		{
			InvalidateRect(hwnd, NULL, TRUE);
			ms->bState = ms->bSelected;
		}
	}
	return 0;
}

LRESULT OnLButtonDown(HWND hwnd, MOUSESTATE * ms)
{
	BUT *but = GetButStruct(hwnd);
	ms->bSelected = TRUE;
	ms->bCaptured = TRUE;
	ms->bState = TRUE;
	if (but->style & BXS_TOOL || but->style & BXS_TOOLGROUP)
	{
		but->toolnorm = FALSE;
		but->toolup = FALSE;
	}
	else
	{
		SetCapture(hwnd);
		//SetFocus(hwnd);
	}

	but->beenclicked = TRUE;

	if (!but->depressed)
		UpdateNow(hwnd);
	return 0;

}

LRESULT OnLButtonUp(HWND hwnd, MOUSESTATE * ms)
{
	HWND h;
	ms->bSend = FALSE; // this struct member needs setting every time.
	BUT * but = GetButStruct(hwnd);
	if (but->style & BXS_TOOLGROUP)
	{
		if (but->beenclicked)
		{
			// don't need to refresh or send message again if depressed.
			if (!but->depressed)
			{
				EnumChildWindows(GetParent(hwnd), (WNDENUMPROC)EnumToolGroupNormal, 0);
				if (!but->toolup)
				{
					ms->bSend = TRUE;
				}
			}
			but->toolnorm = FALSE;
			but->depressed = TRUE;
		}

	}
	else if (but->style & BXS_TOOL)
	{
		if (!but->toolup)
			ms->bSend = TRUE;

		but->toolnorm = FALSE;
		but->toolup = TRUE;

	}
	else
	{
		GetCursorPos(&pt);
		GetWindowRect(hwnd, &r);
		if (!PtInRect(&r, pt))	// if not in rectangle don't SendMessage to parent
			ms->bSet = FALSE;
		ReleaseCapture();

		//SetFocus(oldhwnd);
		if (ms->bSelected)
			ms->bSend = TRUE;
	}
	ms->bSelected = FALSE;
	ms->bCaptured = FALSE;
	ms->bState = FALSE;
	if (ms->bSet && but->beenclicked)	// set focus rect
	{
		h = SetFocus(hwnd);	// this button
		if (h != hwnd)
			SendMessage(h, WM_KILLFOCUS, 0, 0);	// previous button
	}
	// update button before sending message to parent window
	UpdateNow(hwnd);
	if (ms->bSend)
		SendMessage(GetParent(hwnd), WM_COMMAND, GetDlgCtrlID(hwnd), (long)hwnd);
	but->beenclicked = FALSE;
	return 0;

}

LRESULT OnDestroy(HWND hwnd)
{
	BUT * but = GetButStruct(hwnd);
	// only for ButtonEx controls
	if (IsButtonExClass(hwnd))
	{
		if (but)
		{
			if (but->backbrh)
				DeleteObject(but->backbrh);
			if (but->text)
				free(but->text);
			if (but->tooltext)
				free(but->tooltext);
			free((void *)GetWindowLongPtr(hwnd, BUTX_STRUCT));
		}
	}
	return 0;
}

LRESULT OnEnable(HWND hwnd, WPARAM wParam)
{
	BUT *but = GetButStruct(hwnd);
	if (wParam)
	{
		but->disabled = FALSE;
		InvalidateRect(hwnd, NULL, TRUE);
	}
	else
	{
		but->disabled = TRUE;
		InvalidateRect(hwnd, NULL, TRUE);
	}
	return 0;
}

static LRESULT CALLBACK ButtonExWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static MOUSESTATE ms = {0};
	BUT * but = 0;

	switch (uMsg)
	{
	case WM_SYSCHAR:
		return 0;		// stop the speaker beep when Alt+Key is pressed

	case WM_CREATE:
		return OnCreate(hwnd, lParam);

	case WM_SYSKEYUP: // Enumerate for any Ampersand
		EnumChildWindows(GetParent(hwnd), (WNDENUMPROC) EnumFuncAmpersand, wParam);
		return 0;

	// If SetCapture() is active, ALT+F4 will not propagate through to
	// the main window so have to do this
	case WM_SYSKEYDOWN:
		if(wParam==VK_F4){
			ReleaseCapture();
			return DefWindowProc(hwnd, uMsg, wParam, lParam);
		}
		return 0;

	case WM_KEYUP:
		return OnKeyUp(hwnd, wParam, lParam);

	case WM_SYSCOLORCHANGE:
		return OnSysColorChange(hwnd);

	case WM_ENABLE:
		return OnEnable(hwnd, wParam);

	case BXM_SETBKCOLOR:
		Butx_SetBkColor(hwnd, (COLORREF)lParam);
		return 0;

	case BXM_GETBKCOLOR:
		but = GetButStruct(hwnd);
		return but->backcol;

	case BXM_CLEARIMAGE:
		but = GetButStruct(hwnd);
		if (wParam == IMAGE_BITMAP){
			but->hBmp[0] = 0;
			but->hBmp[1] = 0;
		}else if (wParam == IMAGE_ICON){
			but->hIco[0] = 0;
			but->hIco[1] = 0;
		}
		return 0;

	case BXM_SETIMAGE:
		but = GetButStruct(hwnd);
		if (wParam == IMAGE_BITMAP){
			if(!but->hBmp[0])
				but->hBmp[0] = (HBITMAP)lParam;
			else
				but->hBmp[1] = (HBITMAP)lParam;
		}else if (wParam == IMAGE_ICON){
			if(!but->hIco[0])
				but->hIco[0] = (HICON)lParam;
			else
				but->hIco[1] = (HICON)lParam;
		}
		return 0;

	case WM_SETCURSOR:
		but = GetButStruct(hwnd);
		if (but->hCur){
			SetCursor(but->hCur);
			return TRUE;
		}
		break;

	case WM_LBUTTONUP:
		return OnLButtonUp(hwnd, &ms);

	case WM_SIZE:
		return OnSize(hwnd, lParam);

	case BXM_SETTEXT:
		return Butx_SetText(hwnd, (wchar_t *)lParam);

	case BXM_GETTEXT:
		Butx_GetText(hwnd, (wchar_t *)lParam, wParam);
		return 0;

	case BXM_SETFONT:
		Butx_SetFont(hwnd, (HFONT)wParam);
		return 0;

	case BXM_GETFONT:
		but = GetButStruct(hwnd);
		return (LRESULT)but->hFont;

	case WM_PAINT:
		return OnPaint(hwnd, ms.bSelected);

	case WM_ERASEBKGND:
		return OnEraseBkgnd(hwnd, wParam);

	case WM_MOUSEMOVE:
		return OnMouseMove(hwnd, lParam, &ms);

	case WM_LBUTTONDOWN:
		return OnLButtonDown(hwnd, &ms);

	case WM_SETFOCUS:
		but = GetButStruct(hwnd);
		but->focus = TRUE;
		UpdateNow(hwnd);
		return 0;

	case WM_KILLFOCUS:
		but = GetButStruct(hwnd);
		but->focus = FALSE;
		UpdateNow(hwnd);
		return 0;

	case WM_DESTROY:
		return OnDestroy(hwnd);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

BOOL InitButtonEx(void)
{
	WNDCLASS wc;
	INITCOMMONCONTROLSEX iccex;
	HINSTANCE hInst = GetModuleHandle(NULL);

	if (isinit)
		return TRUE;

	wc.style			= 0; //CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc		= (WNDPROC)ButtonExWndProc;
	wc.cbClsExtra		= 0;
	wc.cbWndExtra		= 4;
	wc.hInstance		= hInst;
	wc.hbrBackground	= (HBRUSH)(COLOR_BTNFACE+1);
	wc.lpszMenuName		= NULL;
	wc.hIcon			= NULL;
	wc.hCursor			= LoadCursor(NULL, IDC_ARROW);
	wc.lpszClassName	= BUTTONEX;

	if (!RegisterClass(&wc))
		return FALSE;

	hShadowPen   = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNSHADOW));
	hHighLitePen = CreatePen(PS_SOLID, 1, GetSysColor(COLOR_BTNHIGHLIGHT));
	hBlackPen    = CreatePen(PS_SOLID, 1, 0);
	hLitePen     = CreatePen(PS_SOLID, 1, RGB(255,255,255));

	isinit = 1;

	hFont = CreateFont(16, 0, 0, 0, FW_DONTCARE, FALSE, 0,
		   		0, (DWORD)DEFAULT_CHARSET, 0, 0, 0, 0, TEXT("MS Sans Serif"));

	iccex.dwICC = ICC_WIN95_CLASSES;
    iccex.dwSize = sizeof(INITCOMMONCONTROLSEX);
    InitCommonControlsEx(&iccex);

	return TRUE;

}

HWND CreateButtonEx(wchar_t * text, DWORD dwStyle, int x, int y, int cx, int cy, HWND hwndParent, DWORD id)
{
	HWND hWndButx;
	// Get our instance handle
	hInst = GetModuleHandle(NULL);

	if (!isinit)
	{
		if (!InitButtonEx())
			return NULL;
	}

	// A few checks
	if (hwndParent == NULL)	// O dear, forgot the parent
		return (HWND)0;

	dwStyle |= WS_CHILD;// | WS_VISIBLE;

	// create button window
	hWndButx = CreateWindowEx(0, BUTTONEX, text, dwStyle,
					x, y, cx, cy,
					hwndParent,
					(HMENU)id,
					hInst, 0);

	if (!hWndButx)
		return (HWND)0;

	return hWndButx;
}

HBITMAP LoadConvertBitmapCols(int res, COLORREF colfrom, COLORREF colto)
{
    HDC hdcMem;
    HGDIOBJ hOldObject;
    int x, y;

	HDC tmp;
    BITMAP bm;
    // load the bitmap from the resource
    HBITMAP hBitmap = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(res));

    if (!hBitmap)
        return NULL;

    // Create memDC and Select the bitmap
	tmp = GetDC(NULL);
    hdcMem = CreateCompatibleDC(tmp);
    hOldObject = SelectObject(hdcMem, hBitmap);

    // Get size
    GetObject(hBitmap, sizeof(bm), &bm);

    // Change the background colour to ColTo
    for (x = 0; x<bm.bmWidth; x++)
    {
        for (y = 0; y<bm.bmHeight; y++)
        {
            if (GetPixel(hdcMem, x, y) == colfrom)
                SetPixelV(hdcMem, x, y, colto);
        }
    }

    // Select old object back and delete memDC.
    SelectObject(hdcMem, hOldObject);
    DeleteDC(hdcMem);
	ReleaseDC(NULL, tmp);

    // return the bitmap
    return hBitmap;
}

static void ConvertBitmapCols(HBITMAP hBitmap, COLORREF colfrom, COLORREF colto)
{
    BITMAP bm;
    HDC hdcMem;
    HGDIOBJ hOldObject;
    int x, y;

    if (!hBitmap)
        return;

    // Create memDC and Select the bitmap
    hdcMem = CreateCompatibleDC(GetDC(NULL));
    hOldObject = SelectObject(hdcMem, hBitmap);

    // Get size
    GetObject(hBitmap, sizeof(bm), &bm);

    // Change the background colour to ColTo
    for (x = 0; x<bm.bmWidth; x++)
    {
        for (y = 0; y<bm.bmHeight; y++)
        {
            if (GetPixel(hdcMem, x, y) == colfrom)
                SetPixelV(hdcMem, x, y, colto);
        }
    }

    // Select old object back and delete memDC.
    SelectObject(hdcMem, hOldObject);
    DeleteDC(hdcMem);
}




