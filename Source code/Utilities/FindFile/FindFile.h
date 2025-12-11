// findfile.h

#ifndef _FINDFILE_H_
#define _FINDFILE_H_

#define IDI_REMOVEABLE_DRIVE 0
#define IDI_FIXED_DRIVE 	1
#define IDI_CD_DRIVE 		2
#define IDI_REMOTE_DRIVE 	3
#define IDI_RAM_DRIVE 		4
#define IDI_UND_DRIVE 		5
#define IDI_FOLDER 			6
#define IDI_OPENFOLDER		7
#define IDI_NOT_DRIVE 		8

#include  "findfileres.h" // for IDM_ identifiers

#define ARRSIZE(a) (sizeof(a)/sizeof(a[0]))
#define SndMsg SendMessage
#define SndCtrlMsg SendDlgItemMessage

#define MyListView_GetItemRect(hWnd, idx, prc, code)\
  ((RECT*)(prc))->left = code;\
  SendMessage(hWnd, (UINT)LVM_GETITEMRECT, (WPARAM)idx,(LPARAM)(RECT*)&rc)

#define _TS  L"%ls"
#define _TC  L"%lc"


// declared here because IDM_FIRST is the same as IDM_FOLDER
// which makes for duplicate ID's in findfileres.h
#define	IDM_FIRST		200

// forward declarations
wchar_t ** GetListViewItems(HWND hListView, const wchar_t * ToDir, BOOL action, size_t * bufoneLen);
void   MapCtrl(HWND hCrtl, int x, int y, int cx, int cy, BOOL rePaint);
void   WriteRegistry(void);
void   ReadRegistry(void);
void   Rename(HWND hListView, int idx);
static BOOL CALLBACK MainWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK SubClassPictureBoxProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK SubClassTextBoxProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK SubClassRenameEditBoxProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

// menu DataItems
#define DISABLED  1
#define ENABLED   0

#define NUMCOLS   4	 				// number of columns of listview header
#define MAX_DISP  61*sizeof(wchar_t) // maximum chars in SendTo Display EditBox

#define TWO_BUFFER TRUE		// used in GetListViewItems() ofr
#define ONE_BUFFER FALSE	// allocating one or two buffers

// bitmap indentifiers, dependent on menu ID's
#define ID_FOLDER 		IDM_FOLDER 	- IDM_FIRST
#define ID_DEPENDS 		IDM_DEPENDS - IDM_FIRST
#define	ID_OPEN			IDM_OPEN 	- IDM_FIRST
#define ID_RENAME 		IDM_RENAME 	- IDM_FIRST
#define ID_COPYTO 		IDM_COPYTO 	- IDM_FIRST
#define ID_MOVETO 		IDM_MOVETO 	- IDM_FIRST
#define ID_DELETE 		IDM_DELETE 	- IDM_FIRST
#define ID_RECYCLE 		IDM_RECYCLE - IDM_FIRST
#define ID_PROPERTIES   IDM_PROPERTIES  - IDM_FIRST
#define	ID_EXIT			IDM_EXIT 		- IDM_FIRST
#define ID_EDITSENDTO  	IDM_EDITSENDTO  - IDM_FIRST
#define ID_EXTENDEDSEARCH IDM_EXTENDEDSEARCH - IDM_FIRST
#define ID_ABOUT		IDM_ABOUT		- IDM_FIRST
#define ID_UP		  	IDM_UP 			- IDM_FIRST
#define ID_DOWN		  	IDM_DOWN 		- IDM_FIRST
#define ID_NOTDEPENDS  	IDM_NOTDEPENDS  - IDM_FIRST
#define ID_LAST		    ID_NOTDEPENDS + 1  // (+1 gate post)
#define MAX_BITMAPS     ID_LAST

#endif // _FINDFILE_H_
