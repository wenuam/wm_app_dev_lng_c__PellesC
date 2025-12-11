// shell.h

#ifndef _SHELL_H_
#define _SHELL_H_

#include "find.h"
#include <shlobj.h>
#include <shellapi.h>

int SHDeleteDir(HWND hwnd, const wchar_t * buf);
void SHOpenFolderSelectFile(wchar_t * path, wchar_t * file);
int SHDelete(HWND hwnd, HWND hListView, FINDFILE_OPTIONS * pffo);
int SHCopyTo(HWND hwnd, wchar_t ** buf);
int SHMoveTo(HWND hwnd, wchar_t ** buf);
LPSHELLFOLDER GetSpecialFolder(IShellFolder * pSFDesktop, HWND hwnd, int idFolder);
int SHBrowseDir(HWND hwnd, const wchar_t *Title, wchar_t *result);
int SHRecycleBin(HWND hwnd, wchar_t ** buf);
int SHProperties(HWND hwnd, const wchar_t * filename);
int SHRenameFile(HWND hwnd, wchar_t * fileFrom, wchar_t * fileTo);
void StrRetToStr(LPSTRRET pstr, LPITEMIDLIST pidl, wchar_t * string);
int DoCopyFiles(HWND h, wchar_t * p, wchar_t * dir);
int DoShellExecuteEx(HWND hwnd, wchar_t * p, wchar_t * progname);
HRESULT CreateLink(wchar_t * szPathObj, wchar_t * szPathLink, wchar_t * szDesc);
BOOL fExists(const wchar_t * szFile);

#endif // _SHELL_H_

