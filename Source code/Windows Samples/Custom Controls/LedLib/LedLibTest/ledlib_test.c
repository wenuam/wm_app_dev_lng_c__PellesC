/*------------------------------------------------------------------------
 Module:        ledlib_test.c
 Description:   Program which allow to test the LEDlib library
------------------------------------------------------------------------*/

//compiler commands in order to reduce a little the executable size using the libctiny library
//#pragma nodefaultlib
//#pragma comment(lib, "libctiny.lib");

#include "ledlib_test.h"

/*------------------------------------------------------------------------
 Procedure:     MainDlgProc
 Purpose:       Main dialog windows function
 Input:
 Output:
 Errors:
------------------------------------------------------------------------*/
BOOL CALLBACK MainDlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{

	case WM_INITDIALOG :
		break;

	case WM_COMMAND:
		if (LOWORD(wParam) == BTN_CLOSE_WINDOW && HIWORD(wParam) == BN_CLICKED)
		{	//push button CLOSE pushed
			SendMessage(hDlg, WM_CLOSE, 0, 0);
		}
		break;

	case WM_LED_LBUTTONDOWN :
		{
		HLED hLed = (HLED)lParam;
		LEDLIB_MODE LedMode = LED_GetMode(hLed);
		//change the LED display mode
		if (LedMode == LED_BLINK)
			LED_SetMode(hLed, LED_ON);
		else if (LedMode == LED_ON)
			LED_SetMode(hLed, LED_OFF);
		else
			LED_SetMode(hLed, LED_BLINK, 600, 300);
		}
		break;

	case WM_CLOSE:
		//close of the application
		//make exit from the message loop in WinMain
		PostQuitMessage(0);
		break;

	default:
		return FALSE;
	}
	return TRUE;
}
/*------------------------------------------------------------------------
 Procedure:     WinMain
 Purpose:       Main function of the application
 Input:
 Output:
 Errors:
------------------------------------------------------------------------*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
						LPSTR lpCmdLine, int nCmdShow)
{
    INITCOMMONCONTROLSEX icc;
	WNDCLASSEX wc;
	MSG msg;

	/* Initialize common controls; Also needed for MANIFEST's! */
	icc.dwSize = sizeof(icc);
	icc.dwICC = ICC_WIN95_CLASSES;
	if (!InitCommonControlsEx(&icc))
	{
		MessageBox(NULL, "Init Common Controls Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}

	hInst = hInstance;

	//register the Window Class
	ZeroMemory(&wc, sizeof(WNDCLASSEX));
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_BYTEALIGNCLIENT | CS_BYTEALIGNWINDOW;
	wc.lpfnWndProc = DefDlgProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = DLGWINDOWEXTRA;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDICON100));
	wc.hIconSm = NULL;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH) COLOR_BACKGROUND;
	wc.lpszMenuName = NULL;
	wc.lpszClassName = szAppName;
	if (!RegisterClassEx(&wc))
	{
		MessageBox(NULL, "Window Registration Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}

	//create the Main Window
	hwndMain = CreateDialog(hInstance, MAKEINTRESOURCE(FRM_MAIN), NULL, (DLGPROC)MainDlgProc);
	if (hwndMain == NULL)
	{
		MessageBox(NULL, "Window Creation Failed!", "Error!", MB_ICONEXCLAMATION | MB_OK);
		return 0;
	}

	//create the demo LEDs
	LED_Create(hwndMain, 20,  20, LED_RED,    LED_BLINK, 1000, 500);
	LED_Create(hwndMain, 40,  20, LED_GREEN,  LED_BLINK, 800, 400);
	LED_Create(hwndMain, 60,  20, LED_YELLOW, LED_BLINK, 600, 300);
	LED_Create(hwndMain, 80,  20, LED_BLUE,   LED_BLINK, 400, 200);
	LED_Create(hwndMain, 100, 20, LED_GREY,   LED_BLINK, 200, 100);

	//show the main window
	ShowWindow(hwndMain, SW_SHOW);

	//the message loop
	while(GetMessage(&msg , NULL , 0 , 0) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	//destroy the application
	DestroyWindow(hwndMain);

	//exit
	return msg.wParam;
}
/*------------------------------------------------------------------------
                               END OF FILE
------------------------------------------------------------------------*/






