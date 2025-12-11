/*-@@+@@--------------------------------[Do not edit manually]------------
 Module   : main.c
 Created  : Tue Jan 17 01:07:18 2006
 Modified : Tue Jan 17 01:24:48 2006

 Author   : Santiago Ottonello (sanotto@yahoo.com)
 Project  : DateTimePicker control test application
 Status   : Fairly complete
 Abstract : Demonstrates using DateTimePicker Control
            Notes:
            This source uses inside-out function declaration to avoid 
            declaring functions prototypes, so the entry point is at end of 
            file...
            Comments were create used comment plugin
 ------------------------------------------------------------------@@-@@-*/


/* 
 * Either define WIN32_LEAN_AND_MEAN, or one or more of NOCRYPT,
 * NOSERVICE, NOMCX and NOIME, to decrease compile time (if you
 * don't need these defines -- see windows.h).
 */

#define WIN32_LEAN_AND_MEAN
/* #define NOCRYPT */
/* #define NOSERVICE */
/* #define NOMCX */
/* #define NOIME */

#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include "main.h"

//------------------------------------------------------------------------
// Run Time Created DateTimePicker ID
//------------------------------------------------------------------------
#define IDDT_RUNTIME 4090
//------------------------------------------------------------------------
// Global Variables
//------------------------------------------------------------------------
static HANDLE ghInstance;//App Instance Handler
static BOOL   gSync;     //Sinchronize dates


/*-@@+@@--------------------------------[Do not edit manually]------------
 Procedure: MainDlg_OnCommand
 Created  : Tue Jan 17 01:22:32 2006
 Modified : Tue Jan 17 01:22:32 2006

 Synopsys : Handles Dialog Window WM_COMMAND Message
 Input    : hWnd       : Dialog Handler
            id         : Command Id
            hWndCtl    : Handler to control that sent the message
            codeNotify : 
 Output   : True  : If message has been handled
            False : If message has NOT been handled
 Errors   : 
 ------------------------------------------------------------------@@-@@-*/
LRESULT MainDlg_OnCommand(HWND hwnd, int id, HWND hWndCtl, UINT codeNotify)
{
	char szBuffer[128];
	SYSTEMTIME st;

	switch (id)
	{
		case IDB_EXIT:
			SendMessage(hwnd,WM_CLOSE,0,0);
      break;
		case IDB_SELLONG:
			GetWindowText(GetDlgItem(hwnd,IDDT_LONG),szBuffer, 128);
			MessageBox(hwnd,szBuffer,"Selected Date is ...", MB_OK);
			break;
		case IDB_SELSHORT:	
			GetWindowText(GetDlgItem(hwnd,IDDT_SHORT),szBuffer, 128);
			MessageBox(hwnd,szBuffer,"Selected Date is ...", MB_OK);
			break;
		case IDB_SELTIME:	
			GetWindowText(GetDlgItem(hwnd,IDDT_TIME),szBuffer, 128);
			MessageBox(hwnd,szBuffer,"Selected Time is ...", MB_OK);
			break;
		case IDB_SELHAND:	
			GetWindowText(GetDlgItem(hwnd,IDDT_RUNTIME),szBuffer, 128);
			MessageBox(hwnd,szBuffer,"Selected Date (Run Time Created Control) is ...", MB_OK);
			break;
		case IDB_SETBIRTH:
			//Populate system time struct with current system time
			GetSystemTime(&st);
			//Put our own values
			st.wYear=1971;
			st.wMonth=10;
			st.wDay=07;
			DateTime_SetSystemtime(GetDlgItem(hwnd,IDDT_LONG),GDT_VALID,&st);
			break;			
		case IDB_SETHAND:
			//Populate system time struct with current system time
			GetSystemTime(&st);
			//Put our own values
			st.wYear=1971;
			st.wMonth=10;
			st.wDay=07;
			DateTime_SetSystemtime(GetDlgItem(hwnd,IDDT_RUNTIME),GDT_VALID,&st);
			break;		
		case IDC_SYNC:
			gSync=~gSync; // Not operation(~) toggles flag values
			break;	
		
		
	}

	return 0;
}

/*-@@+@@--------------------------------[Do not edit manually]------------
 Procedure: MainDlg_OnNotify
 Created  : Wed Jan 18 00:33:40 2006
 Modified : Wed Jan 18 00:33:40 2006

 Synopsys : This Function attend WM_NOTIFY messages
 Input    : 
 Output   : 
 Errors   : 
 ------------------------------------------------------------------@@-@@-*/
LRESULT MainDlg_OnNotify(HWND hwnd, int wParam, NMHDR * lParam)
{
	NMHDR *nmhdr;
	SYSTEMTIME st;

	
	//Populate Notify structure
	nmhdr=(LPNMHDR) lParam;

	//The notify came from a DateTimePicker
	if(nmhdr->code ==DTN_DATETIMECHANGE) 
  {
		switch(wParam) 
		{ 
					  //The control that changed was Long Date Control
						case IDDT_LONG:
						  //The change notified was a DateTimeChange
						  if(nmhdr->code==DTN_DATETIMECHANGE) 
							{
							  //Make sure the user is aware of it...
								//MessageBox(NULL,"Long Date has changed","Notification", MB_OK);
								//If Synchronize dates is on, set Short date
								if(gSync)
								{
									//Recover DateTime from long into st
									DateTime_GetSystemtime(GetDlgItem(hwnd,IDDT_LONG),&st);
									DateTime_SetSystemtime(GetDlgItem(hwnd,IDDT_SHORT),GDT_VALID,&st);
								}
							}
							return TRUE;
	  }		
  }
	
	return FALSE;
}

/*-@@+@@--------------------------------[Do not edit manually]------------
 Procedure: MainDlg_OnInitDialog
 Created  : Wed Jan 18 00:32:53 2006
 Modified : Wed Jan 18 00:32:53 2006

 Synopsys : This function attends dialog initialization
 Input    : 
 Output   : TRUE : If message has been handled
            FALSE: If message has NOT beem handled
 Errors   : 
 ------------------------------------------------------------------@@-@@-*/
LRESULT MainDlg_OnInitDialog(HWND hwnd,  HWND hWndCtl, UINT codeNotify)
{
	HWND dtHwnd;
	RECT rect;
	int screenWidth, screenHeight, left, top;

	//Here we create the DateTimePicker Control
	dtHwnd=CreateWindowEx(0,
                DATETIMEPICK_CLASS,
                "DateTime",
                WS_BORDER|WS_CHILD|WS_VISIBLE|DTS_SHOWNONE,
                110,240,250,20,
                hwnd,
                (HMENU)IDDT_RUNTIME,
                ghInstance,
                NULL);
	//Now we set a custom format to show
	DateTime_SetFormat(dtHwnd,"'Today is: 'hh':'mm':'ss dddd dd MMM ', 'yyyy");
	//Center Dialog on Screen
	screenWidth=GetSystemMetrics(SM_CXFULLSCREEN);
	screenHeight=GetSystemMetrics(SM_CYFULLSCREEN);
	//Get Dialog dimesions
	GetWindowRect(hwnd, &rect);
	//Calculate new position
	left=(screenWidth/2)-((rect.right-rect.left)/2);
	top=(screenHeight/2)-((rect.bottom-rect.top)/2);
		//Move Dialog
	MoveWindow(hwnd,left,top,rect.right,rect.bottom,TRUE);
	return 0;
}


/*-@@+@@--------------------------------[Do not edit manually]------------
 Procedure: MainDlg_WndProc
 Created  : Tue Jan 17 01:11:06 2006
 Modified : Tue Jan 17 01:11:06 2006

 Synopsys : Dialog Window Procedure.
            This Function handles all the messages received by the Dialog 
            Window.
            It serves as a proxy to call more specific handlig function 
            such as OnCommand, OnSize, etc.
 Input    : hwndDlg: Dialog Handler
            msg    : Message Id.
            wParam : First Message parameter
            lParam : Second Message parameter
 Output   : True : If the message has been handled
            False: If the message has NOT been handled
 Errors   : 
 ------------------------------------------------------------------@@-@@-*/
static LRESULT CALLBACK MainDlg_WndProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	
    switch (uMsg)
    {
				//Pass WM_INIT to it's own routine
				HANDLE_MSG(hwndDlg,WM_INITDIALOG, MainDlg_OnInitDialog);
				//Pass WM_COMMAND to it's own routine
				HANDLE_MSG(hwndDlg,WM_COMMAND, MainDlg_OnCommand);
				//When DateTimePicker values changes it send a WM_NOTIFY Message
				HANDLE_MSG(hwndDlg, WM_NOTIFY, MainDlg_OnNotify);
        case WM_CLOSE:
        	EndDialog(hwndDlg, 0);
          return TRUE;
        
    }
    return FALSE;
}

/*-@@+@@--------------------------------[Do not edit manually]------------
 Procedure: WinMain
 Created  : Tue Jan 17 01:06:05 2006
 Modified : Tue Jan 17 01:06:05 2006

 Synopsys : Application entry Point
 Input    : hInstance: Application handler
            hPrevInstance: Always NULL in Win32
            lpszCmdLine  : Pointer to Command Line
            nCmdShow     : Windows show mode (Maximized, Minimized, Normal)
 Output   : Application exit status
 Errors   : 
 ------------------------------------------------------------------@@-@@-*/
int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    WNDCLASSEX wcx;
    INITCOMMONCONTROLSEX iccex;

		//Save Instance handler for future use
    ghInstance = hInstance;

    // Initialize common controls. Also needed for MANIFEST's.
    InitCommonControls();

	// Initialize extra common controls (DateTimePicker is one of them)
	iccex.dwSize=sizeof(INITCOMMONCONTROLSEX);
	iccex.dwICC=ICC_DATE_CLASSES ; //Init date controls
	InitCommonControlsEx(&iccex);
    // Get system dialog information.
    wcx.cbSize = sizeof(wcx);
    if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
        return 0;

    // Add our own stuff.
    wcx.hInstance = hInstance;
    wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
    wcx.lpszClassName = _T("Test_DatClass");
    if (!RegisterClassEx(&wcx))
        return 0;

    // The user interface is a modal dialog box.
    return DialogBox(hInstance, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)MainDlg_WndProc);
}
