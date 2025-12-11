/************************************************************************************
 *                                                                          		*
 * File    : main.c                                                         		*
 * Author  : Benjamin Maggi															*
 *                                                                          		*
 * Purpose : Generic dialog based Win32 application.                        		*
 *           Testing MeterCtrl32 custom control										*
 *                                                                          		*
 * History : Date      Reason                                               		*
 *           07/11/05  Created                                              		*
 *                                                                          		*
 *																					*
 *  This program is free software; you can redistribute it            				*
 *  and/or modify it under the terms of the GNU General Public        				*
 *  License as published by the Free Software Foundation;             				*
 *  either version 2 of the License, or (at your option) any          				*
 *  later version.                                                    				*
 *                                                                    				*
 *  This program is distributed in the hope that it will be useful,   				*
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of    				*
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     				*
 *  GNU General Public License for more details.                      				*
 *                                                                                  *
 *                                                                                  *
 ************************************************************************************/
 
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
#include <commdlg.h>
#include <tchar.h>
#include "main.h"
#include "meterControl.h"

////CPU INFO
#define SystemBasicInformation       0
#define SystemPerformanceInformation 2
#define SystemTimeInformation        3
#define TIME_TEXT_SIZE				12
#define Li2Double(x) ((double)((x).HighPart) * 4.294967296E9 + (double)((x).LowPart))

typedef struct
{
    DWORD   dwUnknown1;
    ULONG   uKeMaximumIncrement;
    ULONG   uPageSize;
    ULONG   uMmNumberOfPhysicalPages;
    ULONG   uMmLowestPhysicalPage;
    ULONG   uMmHighestPhysicalPage;
    ULONG   uAllocationGranularity;
    PVOID   pLowestUserAddress;
    PVOID   pMmHighestUserAddress;
    ULONG   uKeActiveProcessors;
    BYTE    bKeNumberProcessors;
    BYTE    bUnknown2;
    WORD    wUnknown3;
} SYSTEM_BASIC_INFORMATION;

typedef struct
{
    LARGE_INTEGER   liIdleTime;
    DWORD           dwSpare[76];
} SYSTEM_PERFORMANCE_INFORMATION;

typedef struct
{
    LARGE_INTEGER liKeBootTime;
    LARGE_INTEGER liKeSystemTime;
    LARGE_INTEGER liExpTimeZoneBias;
    ULONG         uCurrentTimeZoneId;
    DWORD         dwReserved;
} SYSTEM_TIME_INFORMATION;


typedef LONG (WINAPI *PROCNTQSI)(UINT,PVOID,ULONG,PULONG);

PROCNTQSI NtQuerySystemInformation;

int			win_delay = 250;					//timer interval
#define		WIN_TIMER 5555						//Timer ID

COLORREF colors[5][2];							
int gridSize = 10;
BOOL filled = TRUE;
BOOL peak = TRUE;

/** Prototypes **************************************************************/

static LRESULT CALLBACK MainDlgProc(HWND, UINT, WPARAM, LPARAM);
static LRESULT CALLBACK StylDlgProc(HWND, UINT, WPARAM, LPARAM);
static COLORREF selectColor(HWND hWnd);
int GetCPUInfo();
/** Global variables ********************************************************/

static HANDLE ghInstance;
//Controls Handlers
HWND myControl;				
HWND myControl2;
HWND myControl3;
HWND myControl4;
HWND mainHwnd;

//Global CPU user Time 
int CPU;


/****************************************************************************
 *                                                                          *
 * Function: WinMain                                                        *
 *                                                                          *
 * Purpose : Initialize the application.  Register a window class,          *
 *           create and display the main window and enter the               *
 *           message loop.                                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    WNDCLASSEX wcx;
    
    ghInstance = hInstance;

    // Initialize common controls. Also needed for MANIFEST's.
    InitCommonControls();
    // Get system dialog information.
    wcx.cbSize = sizeof(wcx);
    if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
        return 0;
    // Add our own stuff.
    wcx.hInstance = hInstance;
    wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
    wcx.lpszClassName = _T("mTestClass");
    if (!RegisterClassEx(&wcx))
        return 0;

    // The user interface is a modal dialog box.	
    return DialogBox(hInstance, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)MainDlgProc);
}

/****************************************************************************
 *                                                                          *
 * Function: MainDlgProc                                                    *
 *                                                                          *
 * Purpose : Process messages for the Main dialog.                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
static LRESULT CALLBACK StylDlgProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static msgList[5];

    switch (uMsg)
    {
        case WM_INITDIALOG:
			{
				SendMessage(GetDlgItem(hwndDlg,STYSPEED),TBM_SETRANGEMIN,FALSE,0);
				SendMessage(GetDlgItem(hwndDlg,STYSPEED),TBM_SETRANGEMAX,FALSE,1000);
				SendMessage(GetDlgItem(hwndDlg,STYSPEED),TBM_SETLINESIZE,FALSE,1);
				
				char szTemp[256];
				wsprintf(szTemp,"Backgound color");
				SendMessage(GetDlgItem(hwndDlg,COMBO1), CB_ADDSTRING, 0, (LPARAM)szTemp);
				wsprintf(szTemp,"Foreground color");
				SendMessage(GetDlgItem(hwndDlg,COMBO1), CB_ADDSTRING, 0, (LPARAM)szTemp);
				wsprintf(szTemp,"Border color");
				SendMessage(GetDlgItem(hwndDlg,COMBO1), CB_ADDSTRING, 0, (LPARAM)szTemp);
				wsprintf(szTemp,"Grid color");
				SendMessage(GetDlgItem(hwndDlg,COMBO1), CB_ADDSTRING, 0, (LPARAM)szTemp);
				wsprintf(szTemp,"Peak color");
				SendMessage(GetDlgItem(hwndDlg,COMBO1), CB_ADDSTRING, 0, (LPARAM)szTemp);
				//Select first item in combo
				SendMessage(GetDlgItem(hwndDlg,COMBO1), CB_SETCURSEL, 0, 0);
				
				msgList[0] = WM_SETBGCOLOR;
				msgList[1] = WM_SETFGCOLOR;
				msgList[2] = WM_SETBDCOLOR;
				msgList[3] = WM_SETGDCOLOR;
				msgList[4] = WM_PEAKCOLOR;
				
				if(colors[0][1] == (COLORREF)NULL || colors[0][1] < 0)
				{
					EnableWindow(GetDlgItem(hwndDlg,LBL2),FALSE);	
					EnableWindow(GetDlgItem(hwndDlg,COLOR2),FALSE);	
				}
				else
				{
					EnableWindow(GetDlgItem(hwndDlg,LBL2),TRUE);	
					EnableWindow(GetDlgItem(hwndDlg,COLOR2),TRUE);
				}
				
				
				//Combo 2
				
				wsprintf(szTemp,"MT_VUGAUGE");
				SendMessage(GetDlgItem(hwndDlg,COMBO2), CB_ADDSTRING, 0, (LPARAM)szTemp);
				wsprintf(szTemp,"MT_GDGAUGE");
				SendMessage(GetDlgItem(hwndDlg,COMBO2), CB_ADDSTRING, 0, (LPARAM)szTemp);
				SendMessage(GetDlgItem(hwndDlg,COMBO2), CB_SETCURSEL, 0, 0);
				
				EnableWindow(GetDlgItem(hwndDlg,CKFILL),FALSE);
				EnableWindow(GetDlgItem(hwndDlg,LBGDSZ),FALSE);
				EnableWindow(GetDlgItem(hwndDlg,EDGDSZ),FALSE);
				
				CheckDlgButton(hwndDlg,CKPEAK,peak);
				
				wsprintf(szTemp,"%d",gridSize);
				SetDlgItemText(hwndDlg, EDGDSZ, szTemp);
			}
			break;
		case WM_DRAWITEM:
			{
			LPDRAWITEMSTRUCT lpDs = (LPDRAWITEMSTRUCT)lParam;
			HBRUSH hBrush;
			COLORREF color;
			int iSel = SendMessage(GetDlgItem(hwndDlg,COMBO1),CB_GETCURSEL,0,0);

			switch(lpDs->CtlType)
				{
				case ODT_BUTTON:
					if(lpDs->itemState & ODS_SELECTED) //  if button is down
					{
					color = selectColor(hwndDlg)	;
					switch(lpDs->CtlID)
						{
							case COLOR1:							
								colors[iSel][0] = color;
								SendMessage(myControl,msgList[iSel], (WPARAM)colors[iSel][0], (LPARAM)colors[iSel][1]);
								SendMessage(myControl2,msgList[iSel], (WPARAM)colors[iSel][0], (LPARAM)colors[iSel][1]);
								SendMessage(myControl3,msgList[iSel], (WPARAM)colors[iSel][0], (LPARAM)colors[iSel][1]);
								SendMessage(myControl4,msgList[iSel], (WPARAM)colors[iSel][0], (LPARAM)colors[iSel][1]);
								break;
							case COLOR2:
								colors[iSel][1] = color;
								SendMessage(myControl,msgList[iSel], (WPARAM)colors[iSel][0], (LPARAM)colors[iSel][1]);
								SendMessage(myControl2,msgList[iSel], (WPARAM)colors[iSel][0], (LPARAM)colors[iSel][1]);
								SendMessage(myControl3,msgList[iSel], (WPARAM)colors[iSel][0], (LPARAM)colors[iSel][1]);
								SendMessage(myControl4,msgList[iSel], (WPARAM)colors[iSel][0], (LPARAM)colors[iSel][1]);
								break;
						}
					InvalidateRect(GetDlgItem(hwndDlg,COLOR1), NULL, TRUE); 
					InvalidateRect(GetDlgItem(hwndDlg,COLOR2), NULL, TRUE); 			
					}
						switch(lpDs->CtlID)
						{
							case COLOR1:
								{
									int iSel = SendMessage(GetDlgItem(hwndDlg,COMBO1),CB_GETCURSEL,0,0);
									color = colors[iSel][0];
								}
								break;
							case COLOR2:
								{
									int iSel = SendMessage(GetDlgItem(hwndDlg,COMBO1),CB_GETCURSEL,0,0);
									color = colors[iSel][1];
								}
								break;
						}
						if(lpDs->itemState & ODS_DISABLED)
						{
							hBrush = (HBRUSH)(COLOR_WINDOW);
							FillRect(lpDs->hDC, &lpDs->rcItem, hBrush);
						}
						else
						{
							hBrush = CreateSolidBrush(color);
							FillRect(lpDs->hDC, &lpDs->rcItem, hBrush);
						}
				break;
				}
			}
			break;
		case WM_HSCROLL:

			switch (LOWORD(wParam))
			{
				case TB_LINEDOWN:
				case TB_LINEUP:
				case TB_THUMBTRACK:
				
				win_delay = SendMessage(GetDlgItem(hwndDlg,STYSPEED),TBM_GETPOS,0,0);
				//fgcolor = RGB(0,win_delay,0);
				KillTimer(mainHwnd,WIN_TIMER);
				SetTimer (mainHwnd,WIN_TIMER, win_delay, NULL);
			}
		 case WM_COMMAND:
            switch (GET_WM_COMMAND_ID(wParam, lParam))
            {
				case COMBO1:
					{
						int iSel = SendMessage(GetDlgItem(hwndDlg,COMBO1),CB_GETCURSEL,0,0);
						if(colors[iSel][1] == (COLORREF)NULL || colors[iSel][1] < 0)
						{
							EnableWindow(GetDlgItem(hwndDlg,LBL2),FALSE);	
							EnableWindow(GetDlgItem(hwndDlg,COLOR2),FALSE);	
						}
						else
						{
							EnableWindow(GetDlgItem(hwndDlg,LBL2),TRUE);	
							EnableWindow(GetDlgItem(hwndDlg,COLOR2),TRUE);
						}
						InvalidateRect(GetDlgItem(hwndDlg,COLOR1), NULL, TRUE); 
						InvalidateRect(GetDlgItem(hwndDlg,COLOR2), NULL, TRUE); 
					}
					break;
				case COMBO2:
					{
						int iSel = SendMessage(GetDlgItem(hwndDlg,COMBO2),CB_GETCURSEL,0,0);
						if(iSel == 0)
						{
							
							EnableWindow(GetDlgItem(hwndDlg,CKPEAK),TRUE);
							CheckDlgButton(hwndDlg,CKPEAK,peak);
							///////////////////////////////////
							EnableWindow(GetDlgItem(hwndDlg,CKFILL),FALSE);
							EnableWindow(GetDlgItem(hwndDlg,LBGDSZ),FALSE);
							EnableWindow(GetDlgItem(hwndDlg,EDGDSZ),FALSE);
						}
						else
						{												
							EnableWindow(GetDlgItem(hwndDlg,CKFILL),TRUE);
							CheckDlgButton(hwndDlg,CKFILL,filled);
							
							EnableWindow(GetDlgItem(hwndDlg,LBGDSZ),TRUE);
							EnableWindow(GetDlgItem(hwndDlg,EDGDSZ),TRUE);
							//////////////////////////////////
							EnableWindow(GetDlgItem(hwndDlg,CKPEAK),FALSE);
						}
						
					}
					break;
				//Enable max peak signal
				case CKPEAK:
					{
						BOOL isChk = IsDlgButtonChecked(hwndDlg,CKPEAK);
						SendMessage(myControl,WM_PEAK, (WPARAM)isChk, (LPARAM)NULL);
						SendMessage(myControl3,WM_PEAK, (WPARAM)isChk, (LPARAM)NULL);
					}
				break;
				//Enable filled style for grid control
				case CKFILL:
					{
						BOOL isChk = IsDlgButtonChecked(hwndDlg,CKFILL);
						SendMessage(myControl2,WM_FILLED, (WPARAM)isChk, (LPARAM)NULL);
						SendMessage(myControl4,WM_FILLED, (WPARAM)isChk, (LPARAM)NULL);
					}
				break;
				
                case IDSTYOK:
                    {
      					BOOL bSuccess;              	
						gridSize = GetDlgItemInt(hwndDlg,EDGDSZ,&bSuccess,FALSE);
                    	SendMessage(myControl2,WM_SETGDSPACING, (WPARAM)gridSize, (LPARAM)NULL);
                    	SendMessage(myControl4,WM_SETGDSPACING, (WPARAM)gridSize, (LPARAM)NULL);
                    	EndDialog(hwndDlg, TRUE);
					}
				break;
            }
            break;

        case WM_CLOSE:
            EndDialog(hwndDlg, 0);			
            return TRUE;
		 }

    return FALSE;
}
static LRESULT CALLBACK MainDlgProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	DWORD threadid;
    switch (uMsg)
    {
        case WM_INITDIALOG:
            initMeter(NULL);
			mainHwnd = hwndDlg;
			colors[0][0] = RGB(000,000,000);	//BACK GROUND COLOR
			colors[0][1] = (COLORREF)NULL;		//Ignored

			colors[1][0] = RGB(255,255,000);	//FORE COLOR 1
			colors[1][1] = RGB(255,000,000);	//FORE COLOR 2

			colors[2][0] = (COLORREF)NULL;		//BORDER COLOR
			colors[2][1] = (COLORREF)NULL;		//Ignored

			colors[3][0] = RGB(064,064,000);	//GRID COLOR
			colors[3][1] = RGB(128,000,000);	//Ignored in MT_GDGAUGE Style
			
			colors[4][0] = RGB(255,000,000);	//PEAK COLOR
			colors[4][1] = (COLORREF)NULL;		//Ignored
			
			myControl = CreateWindowEx(WS_EX_CLIENTEDGE,"MeterCtrl32",
							NULL,
							WS_VISIBLE|WS_CHILD|MT_VUGAUGE,
							6,
							22,
							85,
							135,
							hwndDlg,
							(HMENU)125,
							ghInstance,
							NULL);
			myControl2 = CreateWindowEx(WS_EX_CLIENTEDGE,"MeterCtrl32",
							NULL,
							WS_VISIBLE|WS_CHILD|MT_GDGAUGE,
							110,
							22,
							260,
							135,
							hwndDlg,
							(HMENU)125,
							ghInstance,
							NULL);
			myControl3 = CreateWindowEx(WS_EX_CLIENTEDGE,"MeterCtrl32",
							NULL,
							WS_VISIBLE|WS_CHILD|MT_VUGAUGE,
							6,
							181,
							85,
							135,
							hwndDlg,
							(HMENU)125,
							ghInstance,
							NULL);
			myControl4 = CreateWindowEx(WS_EX_CLIENTEDGE,"MeterCtrl32",
							NULL,
							WS_VISIBLE|WS_CHILD|MT_GDGAUGE,
							110,
							181,
							260,
							135,
							hwndDlg,
							(HMENU)125,
							ghInstance,
							NULL);

			SendMessage(myControl,WM_SETFGCOLOR, (WPARAM)colors[1][0], (LPARAM)colors[1][1]);
			SendMessage(myControl,WM_SETGDCOLOR, (WPARAM)colors[3][0], (LPARAM)colors[3][1]);
			SendMessage(myControl,WM_PEAK, (WPARAM)TRUE, (LPARAM)NULL);
			
			SendMessage(myControl2,WM_SETFGCOLOR, (WPARAM)colors[1][0], (LPARAM)colors[1][1]);
			SendMessage(myControl2,WM_FILLED,(WPARAM)TRUE,(LPARAM)NULL);
			SendMessage(myControl2,WM_SETGDSPACING, (WPARAM)gridSize, (LPARAM)NULL);
			
			SendMessage(myControl3,WM_SETFGCOLOR, (WPARAM)colors[1][0], (LPARAM)colors[1][1]);
			SendMessage(myControl3,WM_SETGDCOLOR, (WPARAM)colors[3][0], (LPARAM)colors[3][1]);
			SendMessage(myControl3,WM_PEAK, (WPARAM)TRUE, (LPARAM)NULL);
			
			SendMessage(myControl4,WM_SETFGCOLOR, (WPARAM)colors[1][0], (LPARAM)colors[1][1]);
			SendMessage(myControl4,WM_FILLED,(WPARAM)TRUE,(LPARAM)NULL);
			SendMessage(myControl4,WM_SETGDSPACING, (WPARAM)gridSize, (LPARAM)NULL);
			
			SetTimer(hwndDlg, WIN_TIMER, win_delay, NULL);
            return TRUE;
		case WM_TIMER:
			if (wParam == WIN_TIMER)
			{
				BOOL bSuccess;
				static int ppo = 50;
				//CPU = GetCPUInfo();
				CreateThread(0, 0, GetCPUInfo,NULL, 0, &threadid);
				SendMessage(myControl,WM_UPDATEMETER, (WPARAM)CPU, (LPARAM)NULL);
				SendMessage(myControl2,WM_UPDATEMETER, (WPARAM)CPU, (LPARAM)NULL);
				//Memory status
				//Get memory
				MEMORYSTATUS mem;
				mem.dwLength = sizeof( MEMORYSTATUS );
				GlobalMemoryStatus( &mem );
				float percent = mem.dwAvailPhys / (mem.dwTotalPhys / 100);
				SendMessage(myControl3,WM_UPDATEMETER, (WPARAM)percent, (LPARAM)NULL);
				SendMessage(myControl4,WM_UPDATEMETER, (WPARAM)percent, (LPARAM)NULL);

			}
  		break;
        case WM_SIZE:
            {
				RECT rc;
				GetWindowRect(hwndDlg,&rc);
				//SetWindowPos(myControl,NULL,5,5,(rc.right - (rc.left + 15)),(rc.bottom - (rc.top + 60)),SWP_NOZORDER);

			}
            return TRUE;
        case WM_COMMAND:
            switch (GET_WM_COMMAND_ID(wParam, lParam))
            {
                case IDOK:
					return DialogBox(ghInstance, MAKEINTRESOURCE(DLG_STYLES), NULL, (DLGPROC)StylDlgProc);
				case IDABOUT:
					MessageBox(hwndDlg,"MeterCtrl32 Custom control Test App\nBenjamin Maggi 2005\nbenjaminmaggi@yahoo.com.ar","About MeterCtrl32",MB_OK | MB_ICONINFORMATION);
            }
            break;

        case WM_CLOSE:
            EndDialog(hwndDlg, 0);			
            return TRUE;

        /*
         * TODO: Add more messages, when needed.
         */
    }

    return FALSE;
}

static COLORREF selectColor(HWND hWnd)
{
	CHOOSECOLOR	cc;
	DWORD       custcolor[16];
	int			values;
	for(int i = 0; i < 16;i++)
	{
		values = (255 / 16) * i;
		custcolor[i] = RGB(values,values,values);
	}
	memset(&cc, 0, sizeof(CHOOSECOLOR));
	
	cc.lStructSize  = sizeof(cc);
	cc.rgbResult	= RGB(0,0,0);
	cc.hwndOwner    = hWnd;
	cc.lpCustColors = custcolor;
	cc.Flags        = CC_RGBINIT | CC_FULLOPEN;
	if (ChooseColor(&cc) == IDOK)
		{
			return cc.rgbResult;
		}
		else
		{
			return (COLORREF)NULL;
		}
}

int GetCPUInfo()
{

	SYSTEM_PERFORMANCE_INFORMATION SysPerfInfo;
    SYSTEM_TIME_INFORMATION        SysTimeInfo;
    SYSTEM_BASIC_INFORMATION       SysBaseInfo;
    double                         dbIdleTime;
    double                         dbSystemTime;
    LONG                           status;
    LARGE_INTEGER                  liOldIdleTime = {0,0};
    LARGE_INTEGER                  liOldSystemTime = {0,0};

    NtQuerySystemInformation = (PROCNTQSI)GetProcAddress(
                                          GetModuleHandle("ntdll"),
                                         "NtQuerySystemInformation"
                                         );

    if (!NtQuerySystemInformation)
        return 0;

	////Get number of processors in the system
    status = NtQuerySystemInformation(SystemBasicInformation,&SysBaseInfo,sizeof(SysBaseInfo),NULL);
    if (status != NO_ERROR)
        return 0;

	while(1)
    {
        // get new system time
	    status = NtQuerySystemInformation(SystemTimeInformation,&SysTimeInfo,sizeof(SysTimeInfo),0);
        if (status!=NO_ERROR)
            return 0;

        // get new CPU's idle time
        status = NtQuerySystemInformation(SystemPerformanceInformation,&SysPerfInfo,sizeof(SysPerfInfo),NULL);
        if (status != NO_ERROR)
            return 0;

        // if it's a first call - skip it
       if (liOldIdleTime.QuadPart != 0)
       {
            // CurrentValue = NewValue - OldValue
            dbIdleTime = Li2Double(SysPerfInfo.liIdleTime) - Li2Double(liOldIdleTime);
            dbSystemTime = Li2Double(SysTimeInfo.liKeSystemTime) - Li2Double(liOldSystemTime);

            // CurrentCpuIdle = IdleTime / SystemTime
            dbIdleTime = dbIdleTime / dbSystemTime;

            // CurrentCpuUsage% = 100 - (CurrentCpuIdle * 100) / NumberOfProcessors
            dbIdleTime = 100.0 - dbIdleTime * 100.0 / (double)SysBaseInfo.bKeNumberProcessors + 0.5;

			CPU = (UINT)dbIdleTime;
			return (UINT)dbIdleTime;
       }

        // store new CPU's idle and system time
        liOldIdleTime = SysPerfInfo.liIdleTime;
        liOldSystemTime = SysTimeInfo.liKeSystemTime;

        // wait one second
        Sleep(500);
    }
}

//////////////////////////////////////////////////////
// Converting of file size							//
//////////////////////////////////////////////////////
void FormatBytes(TCHAR *szMsg, int bytes){
	if (bytes < 1000)
		wsprintf(szMsg, "%d bytes", bytes);
	else if (bytes < 1000000)
		sprintf(szMsg, "%.4g KB", (float)bytes / 1024.0 );
	else if (bytes < 1000000000)
		wsprintf(szMsg, "%d,%03d KB", bytes / 1024000, (bytes / 1024) % 1000);
	else
	    sprintf(szMsg, "%.4g GB", (float)bytes / (1024.0*1024.0*1024.0) );
}







