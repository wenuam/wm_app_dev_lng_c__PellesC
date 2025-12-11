#ifndef __SPLASHDIALOG_H__
#define __SPLASHDIALOG_H__

VOID CALLBACK SplashDialog_TimerProc( HWND hwnd,  UINT uMsg,  UINT idEvent,  DWORD dwTime  );
BOOL APIENTRY SplashDlg_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
DWORD WINAPI SplashDialog_ThreadFunc( LPVOID pParams);
void SplashDialog_Launch();

#endif	// SPLASHDIALOG_H__
