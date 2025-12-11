//--------------------------------------------------------------------------
// Kernel Mode Driver Manager v1.1
// Intended for making testing of Kernel Mode Drivers.
// Installing, Starting, Stoping and Uninstalling.
//
// KmdManager - utility for simplify kmd un/loading and sending control codes
// Written by Four-F (four-f@mail.ru)
// Converted from asm by John Findlay
//--------------------------------------------------------------------------

#include <windows.h>
#include <commctrl.h>
#include <stdlib.h>
#include "resource.h"

// Globals
char g_szSuccess[]             = "Success";
char g_szFail[]                = "Fail";
char g_szCriticalError[]       = "Critical Error";
char g_szOpenSCManagerError[]  = "Can't get Service Control Manager handle.";
char g_szEnterFullDriverPath[] = "Enter full driver path.";

WNDPROC   g_hPrevWndFunc = NULL;
HINSTANCE g_hInstance;

#define GETCTRL(h) GetDlgItem(hDlg, h)

char g_acErrorDescription[256];

void LastError(void)
{
	DWORD dwError = GetLastError();
	memset(g_acErrorDescription, 0, sizeof(g_acErrorDescription));
	dwError = FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_MAX_WIDTH_MASK, NULL,
		dwError, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US),
		(LPTSTR)g_acErrorDescription, 128, NULL);

    if(dwError == 0)
		strcpy(g_acErrorDescription, "Error number not found.");

}

void ReportStatus(HWND hDlg, LPSTR pszDriverName, LPSTR pszOperation, LPSTR pszStatus, LPSTR pszLastError)
{
	LV_ITEM lvi;
	int index = 0;
	lvi.mask    = LVIF_TEXT;
	lvi.pszText  = pszDriverName;
	lvi.iSubItem = 0;
	lvi.iItem    = ListView_GetItemCount(GETCTRL(IDC_REPORT_LIST));

	ListView_InsertItem(GETCTRL(IDC_REPORT_LIST), &lvi);

	ListView_SetItemText(GETCTRL(IDC_REPORT_LIST), index, 1, pszOperation);
	ListView_SetItemText(GETCTRL(IDC_REPORT_LIST), index, 2, pszStatus);
	ListView_SetItemText(GETCTRL(IDC_REPORT_LIST), index, 3, pszLastError);

	ListView_EnsureVisible(GETCTRL(IDC_REPORT_LIST), index, FALSE);

}

DWORD htodw(LPSTR pString)
{
	return strtol( pString, NULL, 16 );
}

LRESULT CALLBACK MaskedEditProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	DWORD d;
	char * userData = (char*)GetWindowLong(hwnd, GWL_USERDATA);

	// WM_NCDESTROY is the LAST message that a window will receive -
	// therefore we must finally remove the old wndproc here
	if(uMsg == WM_DESTROY){
		free(userData);
		SetWindowLong(hwnd, GWL_WNDPROC, (long)g_hPrevWndFunc);
	}else if(uMsg == WM_CHAR){
		d = (wParam & 0x0ff);
		if (( userData[d] != TRUE) && !( d == VK_BACK )){
			return 0;
		}
	}

	return CallWindowProc(g_hPrevWndFunc, hwnd, uMsg, wParam, lParam);
}

BOOL MaskEditControl(HWND hwndEdit, LPVOID pszMask, BOOL fOptions)
{
	// don't make a new mask if there is already one available

	g_hPrevWndFunc = (WNDPROC)GetWindowLong(hwndEdit, GWL_WNDPROC);
	char * p = NULL;

	if(g_hPrevWndFunc != MaskedEditProc){
		p = malloc(256);
	}else{
		p = (char*)GetWindowLong(hwndEdit, GWL_USERDATA);
	}

	// build the mask lookup table. The method varies depending
	// on whether we want to allow or disallow the specified szMask characters
	char * tmp = pszMask;

	int pos = 0;
	char c;

	if (fOptions == TRUE){
		memset(p, 0, 256);
		while ( tmp[pos] != 0 ){
			c = tmp[pos];
			p[c] = TRUE;
			pos++;
		}
	}else{
		memset(p, TRUE, 256);
		while( tmp[pos] != 0 ){
			c = tmp[pos];
			p[c] = FALSE;
			pos++;
		}
	}

	// don't update the user data if it is already in place
	if(g_hPrevWndFunc != MaskedEditProc){
		SetWindowLong(hwndEdit, GWL_WNDPROC, (long)MaskedEditProc);
		SetWindowLong(hwndEdit, GWL_USERDATA, (long)p);
	}

	return TRUE;
}

void InsertReportListColumns(HWND hwndListView)
{
	LV_COLUMN lvc;

	ListView_SetExtendedListViewStyle(hwndListView, LVS_EX_GRIDLINES | LVS_EX_FULLROWSELECT);

	lvc.mask    = LVCF_TEXT | LVCF_WIDTH | LVCF_FMT;
	lvc.fmt     = LVCFMT_LEFT;
	lvc.pszText = "Driver";
	lvc.cx      = 80;
	ListView_InsertColumn(hwndListView, 0, &lvc);

	lvc.pszText = "Operation";
	ListView_InsertColumn(hwndListView, 1, &lvc);

	lvc.pszText = "Status";
	ListView_InsertColumn(hwndListView, 2, &lvc);

	lvc.cx = 800;
	lvc.pszText = "Last Error";
	ListView_InsertColumn(hwndListView, 3, &lvc);
}

int StopDriver(HWND hDlg, LPSTR pszDriverName)
{
	SERVICE_STATUS sest;
	int status = 0;
	char * sErr = g_szFail;
	BOOL ret = FALSE;
	SC_HANDLE scMan = OpenSCManager(NULL, NULL, SC_MANAGER_CONNECT);
	SC_HANDLE hService = NULL;

	if(scMan != NULL){
		//
		hService = OpenService(scMan, pszDriverName, SERVICE_STOP);

		LastError();

		if(hService != NULL){
			ret = ControlService(hService, SERVICE_CONTROL_STOP, &sest);

			LastError();

			if(ret != 0){
				status = 1;				// success
				sErr = g_szSuccess;
			}
			CloseServiceHandle(scMan);
		}

		CloseServiceHandle(hService);
	}else{
		MessageBox(NULL, g_szOpenSCManagerError, g_szCriticalError, MB_OK | MB_ICONSTOP);
	}

	ReportStatus(hDlg, pszDriverName, "Stop", sErr, g_acErrorDescription);

	return status;
}

int RunDriver(HWND hDlg, LPSTR pszDriverName)
{
	int status = 0;
	char * sErr = g_szFail;
	BOOL ret = FALSE;
	SC_HANDLE scMan = OpenSCManager(NULL, NULL, SC_MANAGER_CONNECT);
	SC_HANDLE hService = NULL;

	if(scMan != NULL){

		// start driver
		hService = OpenService(scMan, pszDriverName, SERVICE_START);

		LastError();

		if(hService != NULL){
			ret = StartService(hService, 0, NULL);

			LastError();

			if(ret != 0){
				status = 1;			// success
				sErr = g_szSuccess;
			}

			CloseServiceHandle(scMan);
			sErr = g_szSuccess;
		}
		CloseServiceHandle(scMan);
	}else{
		MessageBox(NULL, g_szOpenSCManagerError, g_szCriticalError, MB_OK | MB_ICONSTOP);
	}

	ReportStatus(hDlg, pszDriverName, "Start", sErr, g_acErrorDescription);

	return status;
}

int RegisterDriver(HWND hDlg, LPSTR pszDriverName, LPSTR pszDriverPath)
{
	char * sErr = g_szFail;
	int status = 0;
	SC_HANDLE hService = NULL;
	SC_HANDLE scMan = OpenSCManager(NULL, NULL, SC_MANAGER_CREATE_SERVICE);
	if(scMan != NULL){

		// Register driver - fill registry directory
		hService = CreateService(scMan,
					pszDriverName,
					pszDriverName,
					0,
					SERVICE_KERNEL_DRIVER,
					SERVICE_DEMAND_START,
					SERVICE_ERROR_IGNORE,
					pszDriverPath, NULL, NULL, NULL, NULL, NULL);

		LastError();

		if(hService != NULL){
			CloseServiceHandle(scMan);
			sErr = g_szSuccess;
			status = 1;
		}
		CloseServiceHandle(hService);
	}else{
		MessageBox(NULL, g_szOpenSCManagerError, g_szCriticalError, MB_OK | MB_ICONSTOP);
	}

	ReportStatus(hDlg, pszDriverName, "Register", sErr, g_acErrorDescription);

	return status;
}

int UnregisterDriver(HWND hDlg, LPSTR pszDriverName)
{
	int status = 0;
	char * sErr = g_szFail;
	BOOL ret = FALSE;
	SC_HANDLE scMan = OpenSCManager(NULL, NULL, SC_MANAGER_CONNECT);
	SC_HANDLE hService = NULL;
	if(scMan != NULL){

		// Unregister driver - remove registry directory
		hService = OpenService(scMan, pszDriverName, DELETE);

		LastError();

		if(hService != NULL){
			ret = DeleteService(hService);

			LastError();

			if(ret != 0){
				status = 1;			// success
				sErr = g_szSuccess;
			}
			CloseServiceHandle(hService);
		}

		CloseServiceHandle(scMan);
	}else{
		MessageBox(NULL, g_szOpenSCManagerError, g_szCriticalError, MB_OK | MB_ICONSTOP);
	}

	ReportStatus(hDlg, pszDriverName, "Unregister", sErr, g_acErrorDescription);

	return status;
}

int GetDriverNameFromPath(LPTSTR pDriverPath, char * strBuff, int maxCpy)
{
	char * pos, * del;
	char buffer[MAX_PATH];

	// Make a copy of original string so that the final result
	// will have the same case for all chars
	strcpy(buffer, pDriverPath);

	_strlwr(buffer);
	pos = strstr(buffer, ".sys");

	int size = (int)(pos - buffer);

	if(pos == NULL){
		MessageBox(NULL, "Can't recognize Driver Name.\nThe file extension must be '.sys'.", NULL, MB_OK + MB_ICONSTOP);
		return FALSE;
	}

	// Find the last back slash
	del = strrchr(pDriverPath, '\\');
	if(del == NULL){
		MessageBox(NULL, "Can't recognize Driver Name.\nYou need the full path and file name.", NULL, MB_OK + MB_ICONSTOP);
		return FALSE;
	}
	del++;
	pos = pDriverPath + size;
	char * p = strBuff;
	// reuse var size
	size = 0;
	while( (del < pos) && (size < maxCpy) ){
		*p++ = *del++;
		size++;
	}
	*p = 0; // Terminate it

	return 1;
}

int ControlDriver(HWND hDlg, LPSTR pszDriverName, DWORD dwCode)
{
	char acBuffer[MAX_PATH];
	DWORD dwBytesReturned;
	int status = 0;
	char * sErr = g_szFail;
	BOOL ret = FALSE;
	char s[20];
	DWORD dwVers = GetVersion();

	if(LOBYTE(LOWORD(dwVers >= 5))){
		strcpy(s, "\\\\.\\Global\\%s");
	}else{
		strcpy(s, "\\\\.\\%s");
	}
	wsprintf(acBuffer, s, pszDriverName);

	HANDLE hDevice = CreateFile(acBuffer, GENERIC_READ | GENERIC_WRITE, 0,
				NULL, OPEN_EXISTING, 0, NULL);

	LastError();

	if(hDevice != INVALID_HANDLE_VALUE){

		ret = DeviceIoControl(hDevice, dwCode, NULL, 0, NULL, 0, &dwBytesReturned, NULL);

		LastError();

		if(ret != 0){
			status = 1;				// success
			sErr = g_szSuccess;
		}
		CloseHandle(hDevice);
	}else{
		MessageBox(NULL, "Can't get Driver handle.", g_szCriticalError, MB_OK | MB_ICONSTOP);
	}

	ReportStatus(hDlg, pszDriverName, "Control", sErr, g_acErrorDescription);

	return status;

}

int Dlg_OnCommand(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	OPENFILENAME ofn;
	char acBufferPath[MAX_PATH];
	char acBufferName[MAX_PATH];
	char acIoCode[16];
	DWORD dwIoCode;
	DWORD ret = 0;

	switch(LOWORD(wParam)){
	case IDCANCEL:
		// ask only if user hit Esc key
		ret = MessageBox(hDlg, "Sure want to exit?",
							"Exit Confirmation",
							MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON1);
		if(ret == IDYES){
			EndDialog(hDlg, 0);
		}
		break;

	case IDB_EXIT:
		EndDialog(hDlg, 0);
		break;

	case IDB_BROWSE:

		// Get driver's path to load
		memset(&ofn, 0, sizeof(ofn));
		ofn.lStructSize = sizeof(ofn);
		ofn.hwndOwner   = hDlg;
		ofn.hInstance   = g_hInstance;
 		ofn.lpstrFilter = "Kernel-Mode Drivers\0*.sys\0All Files\0*.*\0";
		memset(acBufferPath, 0, sizeof(acBufferPath));
		ofn.lpstrFile   = acBufferPath;
		ofn.nMaxFile    = sizeof(acBufferPath);

		GetCurrentDirectory(sizeof(acBufferName), acBufferName);
		ofn.lpstrInitialDir = acBufferName;
		ofn.lpstrTitle      = "Choose Driver";
		ofn.Flags           = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_LONGNAMES | OFN_EXPLORER;
		ret = GetOpenFileName(&ofn);
		if(ret != 0){
			// Show it in edit control
			SetWindowText(GETCTRL(IDE_PATH), ofn.lpstrFile);
		}
		break;

	case IDB_REGISTER:

		memset(acBufferPath, 0, sizeof(acBufferPath));
		ret = GetWindowText(GETCTRL(IDE_PATH), acBufferPath, sizeof(acBufferPath));

		if(ret != 0){
			ret = GetDriverNameFromPath(acBufferPath, acBufferName, MAX_PATH);
			if(ret == TRUE){
				RegisterDriver(hDlg, acBufferName, acBufferPath);

				ret = SendMessage(GETCTRL(IDCHK_REGTORUNLINK), BM_GETCHECK, 0, 0);
				if(ret == BST_CHECKED){
					RunDriver(hDlg, acBufferName);
				}
			}
		}else{
			MessageBox(hDlg, g_szEnterFullDriverPath, NULL, MB_OK | MB_ICONSTOP);
		}
		break;

	case IDB_UNREGISTER:

		memset(acBufferPath, 0, sizeof(acBufferPath));
		ret = GetWindowText(GETCTRL(IDE_PATH), acBufferPath, sizeof(acBufferPath));

		if(ret != 0){
			ret = GetDriverNameFromPath(acBufferPath, acBufferName, MAX_PATH);
			if(ret == TRUE){
				ret = SendMessage(GETCTRL(IDCHK_UNREGTOSTOPLINK), BM_GETCHECK, 0, 0);
				if(ret == BST_CHECKED){
					StopDriver(hDlg, acBufferName);
				}
				UnregisterDriver(hDlg, acBufferName);
			}
		}else{
			MessageBox(hDlg, g_szEnterFullDriverPath, NULL, MB_OK | MB_ICONSTOP);
		}
		break;

	case IDB_RUN:

		memset(acBufferPath, 0, sizeof(acBufferPath));
		ret = GetWindowText(GETCTRL(IDE_PATH), acBufferPath, sizeof(acBufferPath));

		if(ret != 0){
			ret = GetDriverNameFromPath(acBufferPath, acBufferName, MAX_PATH);
			if(ret == TRUE){
				RunDriver(hDlg, acBufferName);
			}
		}else{
			MessageBox(hDlg, g_szEnterFullDriverPath, NULL, MB_OK | MB_ICONSTOP);
		}
		break;

	case IDB_STOP:

		memset(acBufferPath, 0, sizeof(acBufferPath));
		ret = GetWindowText(GETCTRL(IDE_PATH), acBufferPath, sizeof(acBufferPath));

		if(ret != 0){
			ret = GetDriverNameFromPath(acBufferPath, acBufferName, MAX_PATH);
			if(ret == TRUE){
				StopDriver(hDlg, acBufferName);
			}
		}else{
			MessageBox(hDlg, g_szEnterFullDriverPath, NULL, MB_OK | MB_ICONSTOP);
		}
		break;

	case IDB_IOCONTROL:

		memset(acBufferPath, 0, sizeof(acBufferPath));
		ret = GetWindowText(GETCTRL(IDE_PATH), acBufferPath, sizeof(acBufferPath));

		if(ret != 0){
			ret = GetDriverNameFromPath(acBufferPath, acBufferName, MAX_PATH);
			if(ret == TRUE){
				ret = GetWindowText(GETCTRL(IDE_CONTROL_CODE), acIoCode, sizeof(acIoCode));
				if(ret != 0){
					dwIoCode = htodw(acIoCode);
					ret = SendMessage(GETCTRL(IDCHK_IOCONTROLLINK), BM_GETCHECK, 0, 0);
					if (ret == BST_CHECKED){
						// linked
						while(TRUE){
							// he-he
							ret = RegisterDriver(hDlg, acBufferName, acBufferPath);
							if(ret == FALSE)
								break;
							ret = RunDriver(hDlg, acBufferName);
							if(ret == FALSE)
								break;
							ret = ControlDriver(hDlg, acBufferName, dwIoCode);
							if(ret == FALSE)
								break;
							ret = StopDriver(hDlg, acBufferName);
							if(ret == FALSE)
								break;
							UnregisterDriver(hDlg, acBufferName);
								break;
						}
					}else{
						ControlDriver(hDlg, acBufferName, dwIoCode);
					}

				}else{
					MessageBox(hDlg, "Enter control code first.", NULL, MB_OK | MB_ICONSTOP);
				}
			}
		}else{
			MessageBox(hDlg, g_szEnterFullDriverPath, NULL, MB_OK | MB_ICONSTOP);
		}
		break;

	case IDB_ABOUT:
		MessageBox(hDlg, "Kernel-Mode Driver Manager\n\tv 1.1\n\nWritten by Four-F\nfour-f@mail.ru",
								"About", MB_OK | MB_ICONINFORMATION);
		break;

	case IDCHK_REGTORUNLINK:
		ret = SendDlgItemMessage(hDlg, IDCHK_REGTORUNLINK, BM_GETCHECK, 0, 0);
		if(ret == BST_CHECKED){
			EnableWindow(GETCTRL(IDB_RUN), FALSE);
			SetWindowText(GETCTRL(IDB_REGISTER), "&Reg'n'Run");
		}else{
			EnableWindow(GETCTRL(IDB_RUN), TRUE);
			SetWindowText(GETCTRL(IDB_REGISTER), "Re&gister");
		}
		break;

	case IDCHK_UNREGTOSTOPLINK:
		ret = SendDlgItemMessage(hDlg, IDCHK_UNREGTOSTOPLINK, BM_GETCHECK, 0, 0);
		if(ret == BST_CHECKED){
			EnableWindow(GETCTRL(IDB_STOP), FALSE);
			SetWindowText(GETCTRL(IDB_UNREGISTER), "&Stop'n'Unreg");
		}else{
			EnableWindow(GETCTRL(IDB_STOP), TRUE);
			SetWindowText(GETCTRL(IDB_UNREGISTER), "&Unregister");
		}
		break;

	case IDCHK_IOCONTROLLINK:
		ret = SendDlgItemMessage(hDlg, IDCHK_IOCONTROLLINK, BM_GETCHECK, 0, 0);
		if(ret == BST_CHECKED){
			EnableWindow(GETCTRL(IDB_REGISTER), FALSE);
			EnableWindow(GETCTRL(IDCHK_REGTORUNLINK), FALSE);
			EnableWindow(GETCTRL(IDB_RUN), FALSE);
			EnableWindow(GETCTRL(IDB_STOP), FALSE);
			EnableWindow(GETCTRL(IDCHK_UNREGTOSTOPLINK), FALSE);
			EnableWindow(GETCTRL(IDB_UNREGISTER), FALSE);
			SetWindowText(GETCTRL(IDB_IOCONTROL), "All A&ctions");

		}else{
			EnableWindow(GETCTRL(IDB_REGISTER), TRUE);
			EnableWindow(GETCTRL(IDCHK_REGTORUNLINK), TRUE);

			ret = SendMessage(GETCTRL(IDCHK_REGTORUNLINK), BM_GETCHECK, 0, 0);
			if(ret == BST_UNCHECKED){
				EnableWindow(GETCTRL(IDB_RUN), TRUE);
			}

			ret = SendMessage(GETCTRL(IDCHK_UNREGTOSTOPLINK), BM_GETCHECK, 0, 0);
			if(ret == BST_UNCHECKED){
				EnableWindow(GETCTRL(IDB_STOP), TRUE);
			}

			EnableWindow(GETCTRL(IDCHK_UNREGTOSTOPLINK), TRUE);
			EnableWindow(GETCTRL(IDB_UNREGISTER), TRUE);

			SetWindowText(GETCTRL(IDB_IOCONTROL), "I/O &Control");
		}
	default:
		return 1;
	}
	return 0;
}

void Dlg_OnInitDialog(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	// Set Dialog Icon
	HICON hIco = LoadIcon(g_hInstance, MAKEINTRESOURCE(IDI_ICON));
	SendMessage(hDlg, WM_SETICON, ICON_BIG, (long)hIco);

	MaskEditControl(GETCTRL(IDE_CONTROL_CODE), "0123456789abcdefABCDEF", TRUE);
	SendMessage(GETCTRL(IDE_CONTROL_CODE), EM_LIMITTEXT, 8, 0);

	InsertReportListColumns(GETCTRL(IDC_REPORT_LIST));

	EnableWindow(GETCTRL(IDB_OPTIONS), FALSE);
}

BOOL CALLBACK DlgProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch(uMsg){
	case WM_COMMAND:
		return Dlg_OnCommand(hDlg, uMsg, wParam, lParam);

	case WM_INITDIALOG:
		Dlg_OnInitDialog(hDlg, uMsg, wParam, lParam);
		break;

	case WM_CLOSE:
		EndDialog(hDlg, 0);

 	}
 	return FALSE;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nCmdShow)
{
	g_hInstance = hInstance;

	WNDCLASSEX wcx;

	memset( &wcx, 0, sizeof(wcx) );
	wcx.cbSize			= sizeof(wcx);
	wcx.lpfnWndProc 	= DefDlgProc;
	wcx.cbWndExtra 		= DLGWINDOWEXTRA;
	wcx.hInstance 		= hInstance;
	wcx.hCursor 		= LoadCursor( NULL, IDC_ARROW );
	wcx.hIcon 			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON));
	wcx.hbrBackground 	= (HBRUSH) (COLOR_BTNFACE + 1);
	wcx.lpszClassName 	= "kmdmanager";

	if(!RegisterClassEx( &wcx )){
		MessageBox(0, "Not today, no class!", "Error!", MB_OK | MB_ICONSTOP );
		return 0;
	}

	INITCOMMONCONTROLSEX icex;
	icex.dwSize = sizeof(INITCOMMONCONTROLSEX);
	icex.dwICC = ICC_LISTVIEW_CLASSES;

	if(!InitCommonControlsEx(&icex)){
		MessageBox(0, "Not today, could not initialize!", "Error!", MB_OK | MB_ICONSTOP );	
		return 0;
	}
		
	DialogBox(g_hInstance, MAKEINTRESOURCE(IDD_DIALOG), NULL, DlgProc);
	return 0;
}
