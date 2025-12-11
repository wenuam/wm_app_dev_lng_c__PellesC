// toolbar.h

#include <commctrl.h>

#define TD_CUT 		0
#define TD_COPY 	1
#define TD_PASTE 	2
#define TD_UNDO		3
#define TD_FILENEW  6
#define TD_FILEOPEN 7
#define TD_FILESAVE 8
#define TD_HELP		10
#define TD_FIND		11
#define TD_PRINT 	12

void  TBButton(TBBUTTON * tbb, int iBitmap, int idCommand, int fsState, int fsStyle);
HWND  CreateToolBarWnd(HWND hWndParent, HINSTANCE hInst);

