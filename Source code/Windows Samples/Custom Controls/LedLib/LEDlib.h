/***************************************************************************** 
 *
 * File    : LEDlib.h
 *
 * Purpose : Header file for a custom control which display a round LED with various colors
 *
 * Versions history :
 * v1 - 22/01/07 - initial version
 * 
 *****************************************************************************/

#ifndef __LEDLIB__
#define __LEDLIB__

#include <windows.h>

//LED colors
typedef enum 
{
	LED_RED = 1, 
	LED_GREEN, 
	LED_YELLOW, 
	LED_BLUE, 
	LED_GREY
} LEDLIB_COLOR;

//LED display mode
typedef enum 
{
	LED_ON = 1, 
	LED_OFF,
	LED_BLINK
} LEDLIB_MODE;

//message which is sent to the parent window of the LED when the LED control receive the message WM_LBUTTONDOWN
// wParam : key flags of the WM_LBUTTONDOWN message
// lParam : handle of the LED clicked
#define WM_LED_LBUTTONDOWN WM_USER + 245

//LED window handle type
typedef HWND HLED;

//function to create a LED
// - lParentWnd : handle of the parent window of the LED to create
// - lx, ly : LED center position
// - LEDLIB_COLOR lColor : LED color
// - LEDLIB_MODE lMode   : LED display mode
// - lBlinkPeriod : optional, LED blink period in 1/10 seconds
// - lBlinkTimeON : optional, LED light time in 1/10 seconds during the blink period
// return the handle of the LED created, or 0 if the LED has not be created
HLED LED_Create(HWND lParentWnd, int lx, int ly, LEDLIB_COLOR lColor, LEDLIB_MODE lMode, int lBlinkPeriod = 10, int lBlinkTimeON = 5);

//function to set the color of a LED
// return 1 if success, else return 0 if error
int LED_SetColor(HLED hLED, LEDLIB_COLOR lColor);

//function to get the color of a LED
// return the LED color, else return 0 if error
LEDLIB_COLOR LED_GetColor(HLED hLED);

//function to set the display mode of a LED
// return 1 if success, else return 0 if error
int LED_SetMode(HLED hLED, LEDLIB_MODE lMode, int lBlinkPeriod = 10, int lBlinkTimeON = 5);

//function to get the display mode of a LED
// return the LED mode, else return 0 if error
LEDLIB_MODE LED_GetMode(HLED hLED);

//function to change both the color and the display mode of a LED
// return 1 if success, else return 0 if error
int  LED_SetColorMode(HLED hLED, LEDLIB_COLOR lColor, LEDLIB_MODE lMode, int lBlinkPeriod = 10, int lBlinkTimeON = 5);

#endif //__LEDLIB__
