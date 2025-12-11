///////////////////////////////////////////////////////////////////////////////////////////
//                                                                                       //
// FileName     : MeterControl.h 														 //
// Version      : 1.5                                                                    //
// Project      : Meter Custom Control                                                   //
// Author       : Benjamin Maggi                                                         //
// Date			: Nov 2005                                                               //
// ------------------------------------------------------------------------------------- //
//                                                                                       //
//                                                                                       //
// Note         : This program is free software; you can redistribute it                 //
//                and/or modify it under the terms of the GNU General Public             //
//                License as published by the Free Software Foundation;                  //
//                either version 2 of the License, or (at your option) any               //
//                later version.                                                         //
//                                                                                       //
//                This program is distributed in the hope that it will be useful,        //
//                but WITHOUT ANY WARRANTY; without even the implied warranty of         //
//                MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          //
//                GNU General Public License for more details.                           //
//                                                                                       //
///////////////////////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include <tchar.h>

#ifndef _METERCONTROL_h
#define _METERCONTROL_H

#define METER_CLASS _T("MeterCtrl32")
//////////////////////////////////////////////////
//Structure to hold the window options and data //
//////////////////////////////////////////////////

typedef struct	tagMETER_OPTIONS
{
	int			width;
	int			height;
	int			top;
	int			left;
	int			grid_space;
	int			border;
	int			offset;
	BOOL		filled;
	BOOL		peak;
	int 		mPeak;			//Peak Value
	COLORREF	bgColor;		//Back Color N° 1
	COLORREF	fgColor;		//Fore Color N° 1
	COLORREF	fgColor2;		//Fore Color N° 2
	COLORREF	gdColor;		//Grid Color N° 1
	COLORREF	gdColor2;		//Grid Color N° 2
	COLORREF	bdColor;		//Border Color
	COLORREF	peakColor;		//Peak Color
	HWND		hWnd;
	HWND		hwndParent;
	HFONT		hFont;
	float 		* data;
	long		style; 
	DWORD		dwExStyle;
	HMENU		ctrID;
	HINSTANCE	hInstance;
	RECT		clientPos;
	///////////////////////
	//Linked list items  //
	///////////////////////
	struct 		tagMETER_OPTIONS *lpPrevious;
	struct		tagMETER_OPTIONS *lpNext;

} METER_OPTIONS, * LPMETER_OPTIONS;

//////////////////////////////////////////////////
//Work with Gradients 	 						//
//////////////////////////////////////////////////
COLORREF InterpolateLinear(COLORREF first, COLORREF second, float position, float start, float end);
//////////////////////////////////////////////////
//Window Messagges you can safetly change it	//
//////////////////////////////////////////////////
#define WM_UPDATEMETER	WM_USER+1500
#define	WM_SETFGCOLOR	WM_USER+1501
#define	WM_SETBGCOLOR	WM_USER+1502
#define	WM_SETGDCOLOR	WM_USER+1503
#define	WM_SETBDCOLOR	WM_USER+1504
#define	WM_SETGDSPACING WM_USER+1505
#define	WM_FILLED		WM_USER+1506
#define	WM_PEAK			WM_USER+1507
#define	WM_PEAKCOLOR	WM_USER+1508

//////////////////////////////////////////////////
//Window Styles									//
//////////////////////////////////////////////////
#define MT_VUGAUGE 2
#define MT_GDGAUGE 4
//////////////////////////////////////////////////
//Creates and register the Meter Class for you 	//
//////////////////////////////////////////////////
BOOL			initMeter(HINSTANCE hInst);
BOOL			UnregisterMeter(void);
//////////////////////////////////////////////////
//Window Procedure here's where messages go 	//
//////////////////////////////////////////////////
LRESULT WINAPI	meterProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
//////////////////////////////////////////////////
//Draws the grid								//
//////////////////////////////////////////////////
void			makeGridEx(HWND hwnd, LPMETER_OPTIONS options, float newP,BOOL update);
void			makeGaugeEx(HWND hwnd, LPMETER_OPTIONS options, float newP,BOOL update);
////////////////////////////////////////////////////
//Linked List manages multiple controls instances //
////////////////////////////////////////////////////
LPMETER_OPTIONS	GetFirstMeter(void);
LPMETER_OPTIONS	GetNextMeter(LPMETER_OPTIONS);
LPMETER_OPTIONS	AddMeter(HWND id);
LPMETER_OPTIONS	GetMeter(HWND);
void			DelMeter(LPMETER_OPTIONS);
static void 	FreeMeter(LPMETER_OPTIONS);
void			DelAllMeter(void);
//////////////////////////////////////////////////
//First element in the list						//
//////////////////////////////////////////////////
static LPMETER_OPTIONS lpHead = NULL;

WNDPROC OldmeterProc;

#endif /* _METERCONTROL_h */
