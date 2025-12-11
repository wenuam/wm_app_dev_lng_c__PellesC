// statusbar.h

HWND CreateStatusBarWnd(HWND hWndParent, char *initialText, int nrOfParts);
void SizeStatusPanels(HWND hWndParent, HWND hWndStatusbar, int nrOfParts);
void SetStatusBarText(HWND hwndStatusBar, int id, char *szStatusString);

