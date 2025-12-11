// main.h
#define IDM_FIRST	200
#define	IDM_NEW	    201
#define	IDM_OPEN	202
#define	IDM_SAVE	203
#define	IDM_SAVEAS	204
#define	IDM_CLOSE	205
#define	IDM_PRINT	206
#define	IDM_PRINTSU	207
#define	IDM_EXIT	208
#define	IDM_UNDO	209
#define	IDM_CUT	    210
#define	IDM_COPY	211
#define	IDM_PASTE	212
#define	IDM_DELETE	213
#define	IDM_WINDOWTILE	  214
#define	IDM_WINDOWCASCADE 215
#define	IDM_WINDOWICONS	  216
#define	IDM_WINDOWCLOSEALL 217
#define	IDM_ABOUT	218
#define	IDM_HELP	219
#define	IDM_DIALOG1	6001
#define	IDM_DIALOG2	6002

#define	IDM_SEARCH	222

#define	IDM_FIRSTCHILD 300

#define	IDD_ABOUT	225


#define	ID_BITMAP	   510
#define	ID_MAINMENU	   520
#define	IDI_APP	       530
#define	IDI_CHILD	   540
#define	ID_STATUSBAR   550
#define	ID_TOOLBAR	   570
#define	ID_ACCEL	   580

#define IDS_NEW    1
#define IDS_OPEN   2
#define IDS_SAVE   3
#define IDS_SAVEAS 4
#define IDS_CLOSE  5
#define IDS_PRINT  6
#define IDS_PRINTSU 7
#define IDS_EXIT   8
#define IDS_UNDO 9
#define IDS_CUT  10
#define IDS_COPY 11
#define IDS_PASTE 12
#define IDS_DELETE 13
#define IDS_WINDOWTILE 14
#define IDS_WINDOWCASCADE 15
#define IDS_WINDOWICONS 16
#define IDS_WINDOWCLOSEALL 17
#define IDS_ABOUT 18
#define IDS_SEARCH 19
#define IDS_HELP 20
#define IDS_FIRSTCHILD 45

#define	IDS_SYSMENU	   1020



#define IDD_DIALOG1  1001

#define IDD_DIALOG2  1002

#ifndef __MAIN_H__
#define __MAIN_H__

BOOL WinMain_Init(HINSTANCE hInst);
LRESULT FrameWnd_OnCommand(HWND hwnd, int id, HWND hWndCtl, UINT codeNotify);
LRESULT FrameWnd_OnCreate(HWND hwnd, LPCREATESTRUCT lParam);
LRESULT FrameWnd_OnSize(HWND hwnd, int flag, int x, int y);
LRESULT FrameWnd_OnMenuSelect(HWND hwnd, HMENU hMenu, int uItem, HMENU hSubMenu, UINT fuFlags);
LRESULT FrameWnd_OnNotify(HWND hwnd, int wParam, NMHDR * lParam);
int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow);
LRESULT FrameWnd_OnClose(HWND hwnd);
void FrameWnd_OnDestroy(HWND hwnd);
LRESULT CALLBACK FrameWnd_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK MdiChildWnd_WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
DWORD MdiChildWnd_GetChildWindowPlacement(HWND hWndClient);
HWND MdiChildWnd_New(HWND hwnd, char *title,LPSTR dialogID, WNDPROC dialogProc);
int MdiChildWnd_EnumChildDestroy(HWND hwnd, LPARAM lParam);
HWND ClientWnd_Create(HWND hWndparent, HINSTANCE hInst);
HWND FrameWnd_Create(HINSTANCE hInst);
static BOOL MdiChildWnd_OnCreate(HWND hwnd, CREATESTRUCT *pcs);
static void MdiChildWnd_OnMDIActivate(HWND hwnd, BOOL fActive, HWND hwndActivate, HWND hwndDeactivate);



#endif	// MAIN_H__
#define IDD_SPLASH  1003
#define ID_LOGO  8001
#define IDP_PICTBOX 4010
