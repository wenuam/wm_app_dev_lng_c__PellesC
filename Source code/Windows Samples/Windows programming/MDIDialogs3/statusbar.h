// statusbar.h

HWND StatusBar_Create(HWND hWndParent, char *initialText, int nrOfParts);
void StatusBar_SizePanels(HWND hWndParent, HWND hWndStatusbar, int nrOfParts);
void StatusBar_SetText(HWND hwndStatusBar, int id, char *szStatusString);

