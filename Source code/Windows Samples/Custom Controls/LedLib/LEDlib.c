/***************************************************************************** 
 *
 * File    : LEDlib.h
 *
 * Purpose : Custom control which display a round LED with various colors
 *
 * Versions history :
 * v1 - 22/01/07 - initial version
 * 
 *****************************************************************************/

#include "LEDlib.h"

//private datas

//timer ID for LED blinking
int TIMER_ID = 10;

//LED radius
int LED_RADIUS = 7;

//LED colors definition
COLORREF LED_RED_ON;
COLORREF LED_RED_OFF;
COLORREF LED_GREEN_ON;
COLORREF LED_GREEN_OFF;
COLORREF LED_BLUE_ON;
COLORREF LED_BLUE_OFF;
COLORREF LED_YELLOW_ON;
COLORREF LED_YELLOW_OFF;
COLORREF LED_GREY_ON;
COLORREF LED_GREY_OFF;

//LED member datas
typedef struct
{
	HWND ParentWnd;
	int x;
	int y; 
	LEDLIB_COLOR Color; 
	LEDLIB_MODE Mode;
	LEDLIB_MODE RealMode;
	int BlinkTimeON;
	int BlinkPeriod;
	int BlinkTimer;	
} LED_INFOS;

/****************************************************************************
 Function:     LedWndProc
 Purpose:      Window procedure of a LED
****************************************************************************/
LRESULT CALLBACK LedWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{	//the LED Window Procedure

	switch (msg)
	{
	case WM_TIMER:
		{	//make blink the LED
		if (wParam == TIMER_ID)
		{
			//retrieve the address of the LED INFOS structure
			LED_INFOS *pLedInfos = (LED_INFOS*)GetWindowLong(hwnd, GWL_USERDATA);
			if (pLedInfos != NULL && pLedInfos->Mode == LED_BLINK)
			{	//the LED INFOS structure is fount

				if (pLedInfos->BlinkTimer == pLedInfos->BlinkTimeON)
				{	//end of the LED ON time
					pLedInfos->RealMode = LED_OFF;
					RedrawWindow(hwnd, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_UPDATENOW);
				}
				else if (pLedInfos->BlinkTimer == pLedInfos->BlinkPeriod)
				{	//end of the LED OFF time
					pLedInfos->RealMode = LED_ON;
					RedrawWindow(hwnd, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_UPDATENOW);
					pLedInfos->BlinkTimer = -1;
				}
				pLedInfos->BlinkTimer += 1;
			}
		}
		}
		break;

	case WM_PAINT:
		{	//paint the LED
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hwnd, &ps);

		LED_INFOS *pLedInfos = (LED_INFOS*)GetWindowLong(hwnd, GWL_USERDATA);
		if (pLedInfos != NULL)
		{
			HPEN hPen;

			//paint the LED up left half outer round
			hPen = CreatePen(PS_SOLID, 0, GetSysColor(COLOR_3DSHADOW));
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 1, 8, NULL);
			LineTo(hdc, 1, 7);
			LineTo(hdc, 0, 6);
			LineTo(hdc, 0, 4);
			LineTo(hdc, 1, 3);
			LineTo(hdc, 1, 2);
			LineTo(hdc, 2, 1);
			LineTo(hdc, 3, 1);
			LineTo(hdc, 4, 0);
			LineTo(hdc, 6, 0);
			LineTo(hdc, 7, 1);
			LineTo(hdc, 9, 1);
			DeleteObject(hPen);

			//paint the LED down right half outer round
			hPen = CreatePen(PS_SOLID, 0, GetSysColor(COLOR_3DHILIGHT));
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 9, 2, NULL);
			LineTo(hdc, 9, 3);
			LineTo(hdc, 10, 4);
			LineTo(hdc, 10, 6);
			LineTo(hdc, 9, 7);
			LineTo(hdc, 9, 8);
			LineTo(hdc, 8, 9);
			LineTo(hdc, 7, 9);
			LineTo(hdc, 6, 10);
			LineTo(hdc, 4, 10);
			LineTo(hdc, 3, 9);
			LineTo(hdc, 1, 9);
			DeleteObject(hPen);

			//paint the LED intermediate outer round
			hPen = CreatePen(PS_SOLID, 0, RGB(192,192,192));
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 1, 6, NULL);
			LineTo(hdc, 1, 4);
			LineTo(hdc, 2, 3);
			LineTo(hdc, 2, 2);
			LineTo(hdc, 3, 2);
			LineTo(hdc, 4, 1);
			LineTo(hdc, 6, 1);
			LineTo(hdc, 7, 2);
			LineTo(hdc, 8, 2);
			LineTo(hdc, 8, 3);
			LineTo(hdc, 9, 4);
			LineTo(hdc, 9, 6);
			LineTo(hdc, 8, 7);
			LineTo(hdc, 8, 8);
			LineTo(hdc, 7, 8);
			LineTo(hdc, 6, 9);
			LineTo(hdc, 4, 9);
			LineTo(hdc, 3, 8);
			LineTo(hdc, 2, 8);
			LineTo(hdc, 2, 6);
			DeleteObject(hPen);

			//read the current LED color
			COLORREF LedColor;
			if (pLedInfos->Color == LED_RED)
				LedColor = (pLedInfos->RealMode == LED_ON) ? LED_RED_ON : LED_RED_OFF;
			else if (pLedInfos->Color == LED_GREEN)
				LedColor = (pLedInfos->RealMode == LED_ON) ? LED_GREEN_ON : LED_GREEN_OFF;
			else if (pLedInfos->Color == LED_YELLOW)
				LedColor = (pLedInfos->RealMode == LED_ON) ? LED_YELLOW_ON : LED_YELLOW_OFF;
			else if (pLedInfos->Color == LED_BLUE)
				LedColor = (pLedInfos->RealMode == LED_ON) ? LED_BLUE_ON : LED_BLUE_OFF;
			else if (pLedInfos->Color == LED_GREY)
				LedColor = (pLedInfos->RealMode == LED_ON) ? LED_GREY_ON : LED_GREY_OFF;
			else 
				LedColor = LED_GREY_ON;

			//paint the LED interior
			hPen = CreatePen(PS_SOLID, 0, LedColor);
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 4, 2, NULL);
			LineTo(hdc, 7, 2);
			MoveToEx(hdc, 3, 3, NULL);
			LineTo(hdc, 8, 3);
			MoveToEx(hdc, 2, 4, NULL);
			LineTo(hdc, 9, 4);
			MoveToEx(hdc, 2, 5, NULL);
			LineTo(hdc, 9, 5);
			MoveToEx(hdc, 2, 6, NULL);
			LineTo(hdc, 9, 6);
			MoveToEx(hdc, 3, 7, NULL);
			LineTo(hdc, 8, 7);
			MoveToEx(hdc, 4, 8, NULL);
			LineTo(hdc, 7, 8);
			DeleteObject(hPen);
			
			//paint the LED reflection
			hPen = CreatePen(PS_SOLID, 0, RGB(255,255,255));
			SelectObject(hdc, hPen);
			MoveToEx(hdc, 3, 5, NULL);
			LineTo(hdc, 4, 4);
			LineTo(hdc, 6, 4);
			DeleteObject(hPen);
		}
		EndPaint(hwnd, &ps);
		}
		break;

	case WM_LBUTTONDOWN:
		{	//react to a left click on the LED
		LED_INFOS *pLedInfos = (LED_INFOS*)GetWindowLong(hwnd, GWL_USERDATA);
		if (pLedInfos != NULL)
		{
			//send a message to the parent window
			lParam = (LPARAM)hwnd;
			SendMessage(pLedInfos->ParentWnd, WM_LED_LBUTTONDOWN, wParam, lParam);
		}
		}
		break;

	case WM_DESTROY:
		//destroy the LED control
		free((void*)GetWindowLong(hwnd, GWL_USERDATA));
		KillTimer(hwnd, TIMER_ID);
		PostQuitMessage(0);
		break;

	default:
		return DefWindowProc(hwnd, msg, wParam, lParam);
	}
	return 0;
}

/****************************************************************************
 Function:     LED_Create
 Purpose:      Create a LED
****************************************************************************/
HLED LED_Create(HWND lParentWnd, int lx, int ly, LEDLIB_COLOR lColor, LEDLIB_MODE lMode, int lBlinkPeriod, int lBlinkTimeON)
{
	static BOOL Initialized = FALSE;

	if (Initialized == FALSE)
	{	//initialize the common LED datas

		// Registering the Window Class
		WNDCLASSEX      wc;
		wc.cbSize = sizeof(WNDCLASSEX);
		wc.style = 0;
		wc.lpfnWndProc = LedWndProc;
		wc.cbClsExtra = 0;
		wc.cbWndExtra = 0;
		wc.hInstance = GetModuleHandle(NULL);
		wc.hIcon = 0;
		wc.hIconSm = 0;
		wc.hCursor = 0;
		wc.hbrBackground = NULL;
		wc.lpszMenuName = NULL; 
		wc.lpszClassName = "LEDclass";
		if (!RegisterClassEx(&wc))
		{
			MessageBox(NULL, "LED class registration failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
			return 0;
		}

		//define the various LED colours
		LED_RED_ON      = RGB(255,  0,  0);
		LED_RED_OFF     = RGB(128,  0,  0);
		LED_GREEN_ON    = RGB(  0,255,  0);
		LED_GREEN_OFF   = RGB(  0,128,  0);
		LED_BLUE_ON     = RGB(  0,  0,255);
		LED_BLUE_OFF    = RGB(  0,  0,128);
		LED_YELLOW_ON   = RGB(255,255,  0);
		LED_YELLOW_OFF  = RGB(128,128,  0);
		LED_GREY_ON     = GetSysColor(COLOR_BTNFACE);
		LED_GREY_OFF    = GetSysColor(COLOR_BTNSHADOW);

		Initialized = TRUE;
	}

	//create the LED window
	HLED hLED = CreateWindow("LEDclass", "LED", WS_CHILD | WS_VISIBLE, 
										lx - LED_RADIUS, ly - LED_RADIUS, 
										2 * LED_RADIUS, 2 * LED_RADIUS, 
										lParentWnd, NULL, GetModuleHandle(NULL), NULL);
	if (hLED == 0)
	{
		MessageBox(NULL, "LED creation failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}
	
	//allocate and define the LED member datas
	SetWindowLong(hLED, GWL_USERDATA, (long)malloc(sizeof(LED_INFOS)));
	LED_INFOS *pLedInfos = (LED_INFOS*)GetWindowLong(hLED, GWL_USERDATA);
	if (pLedInfos != NULL)
	{
		pLedInfos->x = lx;
		pLedInfos->y = ly;
		pLedInfos->ParentWnd = lParentWnd;
		LED_SetColorMode(hLED, lColor, lMode, lBlinkPeriod, lBlinkTimeON);
	}
	return hLED;
}

/****************************************************************************
 Function:     LED_SetColor
 Purpose:      Set the color of a LED
****************************************************************************/
int  LED_SetColor(HLED hLED, LEDLIB_COLOR lColor)
{
	return LED_SetColorMode(hLED, lColor, 0);
}

/****************************************************************************
 Function:     LED_GetColor
 Purpose:      Get the color of a LED
****************************************************************************/
LEDLIB_COLOR LED_GetColor(HLED hLED)
{
	LED_INFOS *pLedInfos = (LED_INFOS*)GetWindowLong(hLED, GWL_USERDATA);
	if (pLedInfos != NULL)
	{
		return pLedInfos->Color;
	}
	else
		return 0;
}

/****************************************************************************
 Function:     LED_SetMode
 Purpose:      Set the display mode of a LED
****************************************************************************/
int  LED_SetMode(HLED hLED, LEDLIB_MODE lMode, int lBlinkPeriod, int lBlinkTimeON)
{
	return LED_SetColorMode(hLED, 0, lMode, lBlinkPeriod, lBlinkTimeON);
}

/****************************************************************************
 Function:     LED_GetMode
 Purpose:      Get the display mode of a LED
****************************************************************************/
LEDLIB_MODE LED_GetMode(HLED hLED)
{
	LED_INFOS *pLedInfos = (LED_INFOS*)GetWindowLong(hLED, GWL_USERDATA);
	if (pLedInfos != NULL)
	{
		return pLedInfos->Mode;
	}
	else
		return 0;
}

/****************************************************************************
 Function:     LED_SetColorMode
 Purpose:      Set the color and the display mode of a LED
****************************************************************************/
int  LED_SetColorMode(HLED hLED, LEDLIB_COLOR lColor, LEDLIB_MODE lMode, int lBlinkPeriod, int lBlinkTimeON)
{
	LED_INFOS *pLedInfos = (LED_INFOS*)GetWindowLong(hLED, GWL_USERDATA);
	if (pLedInfos != NULL)
	{
		if (lColor > 0)
			pLedInfos->Color = lColor;

		if (lMode > 0)
		{
			//check the coherency of the parameters
			if (lBlinkPeriod <= 0) lBlinkPeriod = 2;
			if (lBlinkTimeON <= 0) lBlinkTimeON = 1;
			if (lBlinkTimeON > lBlinkPeriod) lBlinkTimeON = lBlinkPeriod - 1;

			pLedInfos->Mode = lMode;
			pLedInfos->BlinkTimeON = lBlinkTimeON / 100; //time in 1/10 sec
			pLedInfos->BlinkPeriod = lBlinkPeriod / 100; //time in 1/10 sec

			if (lMode == LED_BLINK)
			{
				SetTimer(hLED, TIMER_ID, 100, NULL);
				pLedInfos->BlinkTimer = 0;
				pLedInfos->RealMode = LED_ON;
			}
			else
			{
				KillTimer(hLED, TIMER_ID);
				pLedInfos->RealMode = pLedInfos->Mode;
			}
		}
		RedrawWindow(hLED, NULL, NULL, RDW_ERASE | RDW_INVALIDATE | RDW_UPDATENOW);
		return 1;
	}
	else
		return 0;
}

/****************** END OF FILE **********************/
