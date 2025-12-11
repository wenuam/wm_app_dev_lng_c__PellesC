// Utils.h

#ifndef _UTILS_H_
#define _UTILS_H_

wchar_t * FormatCommas(unsigned long long num);
const TCHAR * TranslateMessageToString( UINT message );
int GetLastSysError(void);
void SetWindowResText(HWND hwnd, int resID);
int  DrawMenuBitMap(HBITMAP hBmp, HDC hDc, RECT * rc);
int  InitMenu(HWND hwnd);
void RemoveFileCountBraces(wchar_t * s);
int  GetFontHeight(HWND hWnd, HFONT hFont);
void ListView_SetColHeadTxtAll( HWND hwndLbx, int nCols);
void ListView_SetColumnWidths(HWND hwndLbx, int baseunitX, int numcols, int * width);
void ExtractExt(const wchar_t * path, wchar_t * ext);
void ExtractFileName(const wchar_t * path, wchar_t * fname);
int  CALLBACK CompareFunc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);
BOOL CreateSBar(HWND hwndParent, const wchar_t *initialText, int nrOfParts);
void DestroyBitmaps(void);
void LoadBitmaps(HINSTANCE hInst);
void SortItems(HWND hListview, FINDFILE_OPTIONS * fileopts, int type);
void SetColumnBitmap(HWND hListview);
void ResetColumnBitmaps(void);
int  GetMenuItemState(HMENU hmenu, int id);
BOOL IsImageFile(const wchar_t * pathname);
BOOL IsModuleFile(const wchar_t * pathname);

#endif //_UTILS_H_
