///////////////////////////////////////////////////////////////////////////////////////////
//                                                                                       //
// FileName     : MeterControl.c                                                         //
// Version      : 1.4                                                                    //
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
#include <windowsx.h>
#include "metercontrol.h"

LPMETER_OPTIONS	GetFirstMeter(void)
{
	return(lpHead);
}
LPMETER_OPTIONS	GetNextMeter(LPMETER_OPTIONS lpThis)
{
	return(lpThis->lpNext);
}
LPMETER_OPTIONS AddMeter(HWND id)
{
	LPMETER_OPTIONS lpReq = NULL;
	LPMETER_OPTIONS lpThis = NULL;
	// Allocate memory from the heap for the new meter
	lpThis = (LPMETER_OPTIONS)malloc(sizeof(METER_OPTIONS));
	if (lpThis == NULL)
	{
		MessageBox(NULL,"Out of memory?","Error:", MB_OK | MB_ICONSTOP | MB_SETFOREGROUND);
		return(NULL);
	}
	memset(lpThis,0,sizeof(METER_OPTIONS));		//good for testing 
	
	lpThis->data = NULL;
	// If the list is empty
	if (lpHead == NULL)
	{
		// Put this one at the head
		lpHead = lpThis;
    }
	else
	{
		// Walk to the end of the list
		lpReq = lpHead;
		while(lpReq->lpNext)
			lpReq = lpReq->lpNext;
		// And append this one to the end
		lpReq->lpNext = lpThis;
    }

    //
	// Fill in the METER_OPTIONS structure
	//

	lpThis->hWnd = id;
	// And return a pointer to it
	return (lpThis);

}
LPMETER_OPTIONS GetMeter(HWND id)
{
	LPMETER_OPTIONS lpHst;
	// Walk through the list looking for this HWND
	lpHst = lpHead;
	while(lpHst != NULL)
	{
		if (lpHst->hWnd == id)
			break;
		lpHst = lpHst->lpNext;
	}

	return(lpHst);
}
void DelAllMeter(void)
{
	LPMETER_OPTIONS lpReq;
	LPMETER_OPTIONS lpNext;

	// Walk through the list freeing memory
	for (lpReq = lpHead; lpReq; )
	{
		lpNext = lpReq->lpNext;
		FreeMeter(lpReq);
		lpReq = lpNext;
	}
	lpHead = NULL;
}

void DelMeter(LPMETER_OPTIONS lpThis)
{
	LPMETER_OPTIONS lpReq;
	//////////////////////////////////
	// Search for "this"			//
	// If This is the first member	//
	//////////////////////////////////
	if (lpThis == lpHead)
	{
		// This->Next becomes the head
		lpHead = lpThis->lpNext;
	}
	else
	{
		// Search the list
		for (lpReq = lpHead; lpReq; lpReq = lpReq->lpNext)
		{
			// If This is next...
			if (lpReq->lpNext == lpThis)
			{
				// Set the pointer to skip "this"
				lpReq->lpNext = lpThis->lpNext;
				break;
			}
		}
	}
	// free the memory
	FreeMeter(lpThis);
}
static void FreeMeter(LPMETER_OPTIONS lpReq)
{
	free(lpReq->data);
	free(lpReq);
}

//////////////////////////////////////////////////
// Register the class							//
//////////////////////////////////////////////////
BOOL initMeter(HINSTANCE hInst)
{
	WNDCLASSEX wc;
	OSVERSIONINFO verInfo = { 0 };
	wc.cbSize = sizeof(WNDCLASSEX);
	LPCSTR className    = "STATIC";

	if(!GetClassInfoEx(hInst,className,&wc))
		return FALSE;
	
	//If we get NULL as hInst set it to the current thread PID
	if(hInst == NULL){hInst = GetModuleHandle(NULL); }
	
	OldmeterProc	 = wc.lpfnWndProc;			//Save Old proc
	wc.lpfnWndProc	 = (WNDPROC)meterProc;		//Put new Proc
	wc.hInstance	 = hInst;					//Instance handler
	wc.lpszClassName = METER_CLASS;				//Class Name

	if(!RegisterClassEx(&wc))
		return FALSE;
	
	// Determine what system we're on 
	verInfo.dwOSVersionInfoSize = sizeof (verInfo);
	GetVersionEx(&verInfo);
	
	return TRUE;
}

//////////////////////////////////////////////////
// UnregisterMeter the class					//
//////////////////////////////////////////////////
BOOL UnregisterMeter(void)
{
	DelAllMeter();	//Just in case release all members
	return UnregisterClass(METER_CLASS, GetModuleHandle(NULL));
}	
//////////////////////////////////////////////////
// Main window Procedure						//
//////////////////////////////////////////////////
LRESULT WINAPI meterProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	RECT rec;
	char errmsg[256];
	static LPMETER_OPTIONS myMeter = NULL;
	static BOOL isNcSet;
	static int WIDTH,HEIGHT;
	
	switch(msg)
	{
	case WM_CREATE:
		{
		//Add a new meter control to the linked list
		myMeter = AddMeter(hWnd);
		LPCREATESTRUCT lpCreate = (LPCREATESTRUCT)lParam;

		//fillup the structure 
		myMeter->hwndParent	 = lpCreate->hwndParent;
		myMeter->ctrID		 = lpCreate->hMenu;
		myMeter->hInstance	 = lpCreate->hInstance;
		myMeter->style		 = lpCreate->style;
		myMeter->dwExStyle	 = lpCreate->dwExStyle;
		myMeter->hFont		 = GetStockObject(DEFAULT_GUI_FONT);
                             
		myMeter->border	 	 = 10;
		myMeter->width		 = WIDTH; //lpCreate->cx; 
		myMeter->height	 	 = HEIGHT; //lpCreate->cy;
		myMeter->left		 = 0;
		myMeter->top		 = 0;
		myMeter->offset	 	 = 0;
		myMeter->bgColor 	 = RGB(0,0,0);
		myMeter->gdColor 	 = RGB(128,0,0);
		myMeter->gdColor2 	 = RGB(128,0,0);
		myMeter->fgColor 	 = RGB(128,0,0);
		myMeter->fgColor2 	 = RGB(255,0,0);
		myMeter->peakColor 	 = RGB(255,0,0);
		myMeter->bdColor	 = (COLORREF)NULL;
		myMeter->grid_space  = 10;
		myMeter->filled		 = FALSE;
		myMeter->peak		 = FALSE;
	
		ZeroMemory(&myMeter->clientPos, sizeof(RECT));
		myMeter->data = (float *)malloc((sizeof(float) * lpCreate->cx));
		
		if(myMeter->data == NULL)
		{
			free(myMeter->data);
			MessageBox(NULL,"Out of memory?","Error:", MB_OK | MB_ICONSTOP | MB_SETFOREGROUND);
			return 0;
		}
		//Clean up the Memory before using it !
		memset(myMeter->data,0,sizeof(int) * lpCreate->cx);
		//Reset for multiple windows instances 
		isNcSet = FALSE;	
		}
		break;
	case WM_DESTROY:
		myMeter = GetMeter(hWnd);
		DelMeter(myMeter);
		PostQuitMessage(0);
		break;
	case WM_PAINT:
		{
			myMeter = GetMeter(hWnd);
			PAINTSTRUCT ps;
			BeginPaint(hWnd, &ps);
			switch (myMeter->style & (MT_VUGAUGE | MT_GDGAUGE))
			{
				case MT_VUGAUGE:
					makeGaugeEx(hWnd,myMeter,0,FALSE);
				break;
				case MT_GDGAUGE:
					makeGridEx(hWnd,myMeter,0,FALSE);
				break;
			}
			EndPaint(hWnd, &ps);
		}
		break;
	case WM_WINDOWPOSCHANGED:
			{
				GetClientRect(hWnd, &rec);
				LPWINDOWPOS winPos = (LPWINDOWPOS)lParam;			
				myMeter = GetMeter(hWnd);
				if(winPos->flags == 6) { return 0; }
				//realloc more memory for the grid gauge style 
				if((myMeter->style & (MT_VUGAUGE | MT_GDGAUGE)) == MT_GDGAUGE)
				{
					myMeter->data = (float *)realloc(myMeter->data,(sizeof(float) * winPos->cx));
					if(myMeter->data == NULL)
					{
						free(myMeter->data);
						wsprintf(errmsg,"Out of memory !\nYou'r resizing to width: %d\nBytes to allocate: %d",winPos->cx,sizeof(float) * winPos->cx);
						MessageBox(NULL,errmsg,"Error:", MB_OK | MB_ICONSTOP | MB_SETFOREGROUND);
						return 0;
					}
				}
				myMeter->offset = 0;
				myMeter->width	= (rec.right - rec.left);
				myMeter->height	= (rec.bottom - rec.top);		
			}
		break;
	///////////////////////////
	//Custom messages window //
	///////////////////////////
	case WM_UPDATEMETER:
		myMeter = GetMeter(hWnd);
		switch (myMeter->style & (MT_VUGAUGE | MT_GDGAUGE))
			{
				case MT_VUGAUGE:
					makeGaugeEx(hWnd,myMeter,(float)wParam,TRUE);
				break;
				case MT_GDGAUGE:
					makeGridEx(hWnd,myMeter,(float)wParam,TRUE);
				break;	
			}	
		break;
	case WM_SETFGCOLOR:
		myMeter = GetMeter(hWnd);
		myMeter->fgColor  = (COLORREF)wParam;
		if(lParam)
		myMeter->fgColor2 = (COLORREF)lParam;
		break;
	case WM_SETBGCOLOR:
		myMeter = GetMeter(hWnd);
		myMeter->bgColor = (COLORREF)wParam;
		break;
	case WM_SETGDCOLOR:
		myMeter = GetMeter(hWnd);
		myMeter->gdColor = (COLORREF)wParam;
		if(lParam)
		myMeter->gdColor2 = (COLORREF)lParam;
		break;
	case WM_SETBDCOLOR:
		myMeter = GetMeter(hWnd);
		myMeter->bdColor = (COLORREF)wParam;
		break;
	case WM_SETGDSPACING:
		myMeter = GetMeter(hWnd);
		myMeter->grid_space = (int)wParam;
		break;	
	case WM_FILLED:
		myMeter = GetMeter(hWnd);
		myMeter->filled = (BOOL)wParam;
		break;	
	case WM_PEAK:
		myMeter = GetMeter(hWnd);
		myMeter->peak = (BOOL)wParam;
		break;	
	case WM_SETFONT:
		{
			myMeter = GetMeter(hWnd);
			DeleteObject(myMeter->hFont);
			myMeter->hFont = (HFONT)wParam;
			if((BOOL)LOWORD(lParam) == TRUE)
			{
				SendMessage(hWnd,WM_PAINT,0,0);
			}
		}
		break;
	case WM_NCCALCSIZE:
		{
			//////////////////////////////////////////////////////////////////
			//Documentation about this message is verry confusing			//
			//wParam is TRUE only if you send the SetWindowPos message 		//
			//for non resizing windows you get false 						//
			//////////////////////////////////////////////////////////////////
			BOOL fCalcValidRects = (BOOL)wParam;
			myMeter = GetMeter(hWnd);
			if(fCalcValidRects)	{
				LPNCCALCSIZE_PARAMS lpncsp = (LPNCCALCSIZE_PARAMS)lParam;
				///////////////////////////////////////////////////////////////
				//call CallWindowProc to get the LPNCCALCSIZE_PARAMS right ! //
				///////////////////////////////////////////////////////////////
				LRESULT orgRet = CallWindowProc(OldmeterProc, hWnd, msg, wParam, lParam) ;
				return WVR_REDRAW;				
			}
			else {
				//////////////////////////////////////////////////////////////////////////////////////
				//I've notice that windows send this message prior to WM_CREATE 					//
				//Chances are that we cant calculate the real size of the client area 				//
				//So we use this w_message to set our real size works with borderless windows too	//
				//////////////////////////////////////////////////////////////////////////////////////
				if(!isNcSet)
				{
					LPRECT lprect = (LPRECT)lParam;
					LRESULT orgRet = CallWindowProc(OldmeterProc, hWnd, msg, wParam, lParam) ;
					memcpy(&rec, lprect, sizeof(RECT));
					//wsprintf(errmsg,"W: [%d] H: [%d]",lprect->right - lprect->left,lprect->bottom - lprect->top);

					WIDTH	= (rec.right - rec.left);
					HEIGHT	= (rec.bottom - rec.top);
					isNcSet = TRUE;
					return FALSE;					// No action must be taken here
				}
			}
		}
		break;/**/
	case WM_NCPAINT:
		{
			RECT rcBorder;
			HBRUSH hBrush;
			myMeter = GetMeter(hWnd);
			HDC hdc = GetDCEx(hWnd, (HRGN)wParam, DCX_WINDOW|DCX_INTERSECTRGN|DCX_CACHE|DCX_CLIPSIBLINGS);
			GetWindowRect(hWnd, &rcBorder);
			
			//Calculate the border
			rcBorder.right	-= rcBorder.left; 
			rcBorder.bottom -= rcBorder.top;
			rcBorder.left	 = rcBorder.top = 0;

			if(!myMeter->bdColor) {
				DrawEdge(hdc,&rcBorder,BDR_SUNKENOUTER,BF_RECT);	
			}
			else {
				hBrush = CreateSolidBrush(myMeter->bdColor);
				FrameRect(hdc,&rcBorder,hBrush);
				DeleteObject(hBrush);
			}
			int edge = GetSystemMetrics(SM_CXEDGE);
			hBrush = CreateSolidBrush(myMeter->bgColor);
			while (edge != 0)
			{
				InflateRect(&rcBorder,-1,-1);
				FrameRect(hdc,&rcBorder,hBrush);
				edge--;
			}
			DeleteObject(hBrush);
			DeleteDC(hdc);
			return TRUE;
		}
		break;/**/
	default:
		return CallWindowProc(OldmeterProc, hWnd, msg, wParam, lParam) ;
	}
	
	return CallWindowProc(OldmeterProc, hWnd, msg, wParam, lParam) ;
}

//////////////////////////////////////////////////
// Draws the VU style mater control				//
//////////////////////////////////////////////////
void makeGaugeEx(HWND hwnd, LPMETER_OPTIONS options, float newP,BOOL update)
{
	int WIDTH		= options->width;		//Width in pixels of the drawing surface
	int HEIGHT		= options->height;		//Height in pixels of the drawing surface
	int border		= options->border;
	float midPoint	= WIDTH / 2;			//The midpoint
	static int peak	= 0;					//Peak signal
	int tmp;
	COLORREF gradient;						//Used to store the gradient value
	RECT mRect;								//For use in FillRect
	HPEN colorPen;							//The pen !
	char msg[256];							//Debugging pruporse array
	int percent;							//Metric percentage
	static int oldP;						//Old percentage value used in non update mode
	HDC drawSrfc = GetDC(hwnd);				//Primary draw surface
	//Grid color
	HBITMAP hbmp = CreateCompatibleBitmap(drawSrfc,WIDTH,HEIGHT);
	HDC hdcMem = CreateCompatibleDC(0);		//Color compatible DC	
	SelectObject(hdcMem, hbmp);				//Select the backBuffer
	//////////////////////////
	//Paint the background	//
	//////////////////////////
	HBRUSH hBrush = CreateSolidBrush(options->bgColor);
	mRect.top	 = 0;
	mRect.left	 = 0;
	mRect.right  = options->width;
	mRect.bottom = options->height;
	
	FillRect(hdcMem,&mRect,hBrush);
	DeleteObject(hBrush);
	
	HFONT hfntPrev	= SelectObject(hdcMem, options->hFont);
	SIZE  sizTxt;
	RECT  rcTxt; 
	wsprintf(msg,"%d %s",(int)newP,"%");
	GetTextExtentPoint32(hdcMem,msg,strlen(msg),&sizTxt);
	
	rcTxt.top	 = HEIGHT - ( border + sizTxt.cy );
	rcTxt.bottom = HEIGHT;
	rcTxt.left	 = border;
	rcTxt.right	 = WIDTH - border;
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////
	//depending on the message either update the data or just show what we have (use FALSE on WM_PAINT)	//
	//////////////////////////////////////////////////////////////////////////////////////////////////////
	if(update)
	{
		oldP = percent = (newP / 100) * (HEIGHT - (border + sizTxt.cy));
		
		if(options->peak)
		if(peak < percent){
		   peak = (newP / 100) * (HEIGHT - (border + sizTxt.cy));
		}
		else {
			tmp = peak;
			tmp -= ((peak - percent) / 10);										//Nice fall-off effect 
			if(tmp >= percent) {peak = tmp;} else {peak = percent;}
		}	
	}
	else
	{
		percent = oldP;
	}
	//////////////////
	//Draw the grid	//
	//////////////////
	SetBkMode(hdcMem, TRANSPARENT);
	COLORREF prevColor = SetTextColor(hdcMem, options->fgColor);
	
	gradient = InterpolateLinear(options->gdColor2,options->gdColor,border,border,HEIGHT - (border + sizTxt.cy));
	colorPen = SelectObject(hdcMem,CreatePen(PS_SOLID,1,gradient));				//Grid Pen
	for(int y = border; y <= HEIGHT - (border + sizTxt.cy) ; y+=4)				//options->grid_space Vertical Lines
	{
		if(y > (HEIGHT - (border + sizTxt.cy))  - percent)
		{
			DeleteObject(SelectObject(hdcMem, colorPen));
			gradient = InterpolateLinear(options->fgColor2,options->fgColor,y,border,HEIGHT - (border + sizTxt.cy));
			colorPen = SelectObject(hdcMem,CreatePen(PS_SOLID,1,gradient));
		}
		if(options->peak)
		if( 
		    (y > (( HEIGHT - (border + sizTxt.cy) ) - peak) - 2 )
	    &&  (y < (( HEIGHT - (border + sizTxt.cy) ) - peak) + 3 )
	      )
		{
			DeleteObject(SelectObject(hdcMem, colorPen));
			colorPen = SelectObject(hdcMem,CreatePen(PS_SOLID,1,options->peakColor));
		}
		//Left - 1
		MoveToEx(hdcMem, midPoint - ( midPoint - border),y, NULL);
		LineTo  (hdcMem, midPoint - 1,y);
		//Right - 1
		MoveToEx(hdcMem, midPoint + 1,y, NULL);
		LineTo  (hdcMem, midPoint + ( midPoint - border),y);	
		//Left + 1
		MoveToEx(hdcMem, midPoint - ( midPoint - border),y+1, NULL);
		LineTo  (hdcMem, midPoint - 1,y+1);
		//Right + 1
		MoveToEx(hdcMem, midPoint + 1,y+1, NULL);
		LineTo  (hdcMem, midPoint + ( midPoint - border),y+1);
		
		//Draws the text
		DrawText(hdcMem, msg , -1, &rcTxt, DT_SINGLELINE | DT_CENTER | DT_VCENTER);	
		
		///////////////////////
		// Reset the color	 //
		///////////////////////
		gradient = InterpolateLinear(options->gdColor2,options->gdColor,y,border,HEIGHT - (border + sizTxt.cy));
		DeleteObject(SelectObject(hdcMem, colorPen));
		colorPen = SelectObject(hdcMem,CreatePen(PS_SOLID,1,gradient));
	}
	DeleteObject(SelectObject(hdcMem, colorPen));
	DeleteObject(hfntPrev);
	
	//////////////////////////////////////////////////
	//Blit the backBuffer to the primary DC Surface	//
	//////////////////////////////////////////////////
	BitBlt(drawSrfc, 0, 0, WIDTH, HEIGHT, hdcMem, 0, 0, SRCCOPY);
	
	DeleteObject(SelectObject(hdcMem, colorPen));
	DeleteDC(hdcMem);
	DeleteObject(hbmp);
	DeleteDC(drawSrfc);
	
	return;
}	

//////////////////////////////////////////////////
// Draws the Grid like meter control			//
//////////////////////////////////////////////////
void makeGridEx(HWND hwnd, LPMETER_OPTIONS options, float newP,BOOL update)
{
	int WIDTH		= options->width;		//Width in pixels of the drawing surface
	int HEIGHT		= options->height;		//Height in pixels of the drawing surface
	int offset		= options->offset;		//Drawing Offset	
	int	cnt			= 0;					//Array index
	COLORREF gradient;						//Used to store the gradient value
	RECT mRect;								//For use in FillRect
	HPEN colorPen;							//The pen !
	char msg[256];							//Debugging pruporse array	
	HDC drawSrfc = GetDC(hwnd);				//Primary draw surface
	HBITMAP hbmp = CreateCompatibleBitmap(drawSrfc,WIDTH * 2 , HEIGHT);	//Color compatible bitmap
	HDC hdcMem = CreateCompatibleDC(0);		//Color compatible DC	
	SelectObject(hdcMem, hbmp);				//Select the backBuffer
	
	//////////////////////////
	//Paint the background	//
	//////////////////////////
	HBRUSH hBrush = CreateSolidBrush(options->bgColor);
	mRect.top	 = 0;
	mRect.left	 = 0;
	mRect.right  = options->width * 2;
	mRect.bottom = options->height;
	
	FillRect(hdcMem,&mRect,hBrush);
	DeleteObject(hBrush);

	//Draw the grid
	colorPen = SelectObject(hdcMem,CreatePen(PS_SOLID,1,options->gdColor));		//Pen for the grid
	for(int x = 0; x <= WIDTH + offset; x+= options->grid_space)				//Vertical Lines
	{
		MoveToEx(hdcMem, x, 0, NULL);
		LineTo  (hdcMem, x, HEIGHT);
	}
	for(int y = 0; y <= HEIGHT; y+= options->grid_space)						//Horizontal Lines
	{
		MoveToEx(hdcMem, 0, y, NULL);
		LineTo  (hdcMem, WIDTH * 2, y);
	}
	//Delete the grid pen
	DeleteObject(SelectObject(hdcMem, colorPen));

	//////////////////////////////////////////////////////////////////////////////////////////////////////
	//depending on the message either update the data or just show what we have (use FALSE on WM_PAINT)	//
	//////////////////////////////////////////////////////////////////////////////////////////////////////
	if(update && options->data != NULL)
	{		
		options->data[WIDTH] = newP;					//Last item = new item !		
		for(int i = 0; i <= WIDTH; i++)
			{
				options->data[i] = options->data[i+1];	//Shift values left
			}
	}
	//Select the pen for the data in this case is 1px solid
	colorPen = SelectObject(hdcMem,CreatePen(PS_SOLID,1,options->fgColor));
	cnt = 0;
	MoveToEx(hdcMem, offset, HEIGHT - ((options->data[cnt] / 100) * HEIGHT), NULL);
	for(int x = offset; x < WIDTH + offset; x++)
	{
		if(options->data != NULL){		
			if (options->filled) 
			{
			for(int y = HEIGHT; y >= HEIGHT - ((options->data[cnt] / 100) * HEIGHT); y--)		
				{
					gradient = InterpolateLinear(options->fgColor2,options->fgColor,y,0,HEIGHT);
					SetPixel(hdcMem,x,y,gradient);
				}
			}
			else
			{
				//MoveToEx(hdcMem, x, HEIGHT, NULL); }			//Reset if filled, easy fill with one color only
				LineTo(hdcMem, x, HEIGHT - ((options->data[cnt] / 100) * HEIGHT));	//Make the line	
			}
		}
		cnt++;
	}
	//Delete the pen !
	DeleteObject(SelectObject(hdcMem, colorPen));
	//////////////////////////////////////////////////
	//Blit the backBuffer to the primary DC Surface	//
	//////////////////////////////////////////////////
	BitBlt(drawSrfc, 0, 0, WIDTH, HEIGHT, hdcMem, offset, 0, SRCCOPY);

	//Reset the offset
	if(offset >= WIDTH) { offset = 0;}
	//incremet the offset only if updating !
	if(update){offset++;}
	options->offset = offset;
	//////////////////////
	//Selease resuouces	//
	//////////////////////
	DeleteObject(SelectObject(hdcMem, colorPen));
	DeleteDC(hdcMem);
	DeleteObject(hbmp);
	DeleteDC(drawSrfc);
	return;

}
//////////////////////////////////////////////////////////////////
// Linear Interpolation the easy way to do gradients			//
//////////////////////////////////////////////////////////////////
COLORREF InterpolateLinear(COLORREF first, COLORREF second, float position, float start, float end)
{
	if(start == end) return first;
	if(end - start == 0) return second;
	if(position == start) return first;
	if(position == end) return second;
	return RGB((BYTE)((GetRValue(second)*(position - start) + GetRValue(first)*(end-position))/(end-start)),
		(BYTE)((GetGValue(second)*(position - start) + GetGValue(first)*(end-position))/(end-start)),
		(BYTE)((GetBValue(second)*(position - start) + GetBValue(first)*(end-position))/(end-start)));
}
