// shell.c
#include <stdio.h>
#include <tchar.h>
#include "shell.h"
#include "findfile.h"

extern HINSTANCE g_hInst;

static LPMALLOC    g_pMalloc; 			 // The OLE task allocator

static SHFILEOPSTRUCT shf;

BOOL fExists(const wchar_t * szFile)
{
	FILE * file;
	file = _wfopen(szFile, L"r");
	if (!file)
		return FALSE;
	else
	{
		fclose(file);
		return TRUE;
	}
}

wchar_t * ExtractFname(const wchar_t * full)
{
	wchar_t * p;
	if((p = wcsrchr(full, '\\')) != NULL)
		return p+1;
	else
		return 0;
}

void ExtractPath(const wchar_t * full, wchar_t * path)
{
	wchar_t * p;
	if((p = wcsrchr(full, '\\'))!= NULL)
	{
		lstrcpyn(path, full, p - full + 1); //strncpy
		path[p - full + 1] = 0;
	}
	else
		*path = 0;
}

int DoShellExecuteEx(HWND hwnd, wchar_t * p, wchar_t * progname)
{
	wchar_t tmp[PATH_SIZE];

	while (*p != 0)
	{
		// add quotes '"' at each end of the string
		swprintf(tmp, PATH_SIZE, L"%lc%ls%lc", '"', p, '"');
		ShellExecute(hwnd, L"open", progname, tmp, NULL, SW_SHOW);
		p += wcslen(p);
		p++;
	}
	return 0;
}

int SHDelete(HWND hwnd, HWND hListView, FINDFILE_OPTIONS * pfileopts)
{
	wchar_t s[PATH_SIZE];
	int index = -1;
	int ret = 0;

	while ((-1) != (index = ListView_GetNextItem(hListView, index, LVNI_SELECTED)))
	{
		wcscpy(s, pfileopts->ppfi[index]->pathname);
		wcscat(s, pfileopts->ppfi[index]->filename);
		s[wcslen(s)+1]=0; // needs to be double terminated for SHDeleteDir.
		if(pfileopts->ppfi[index]->dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			if(SHDeleteDir(hwnd, s) == 0)
			{
				ret = 1;
			}
			else
			{
				ret = 0;
			}
		}
		else
		{
			ret = DeleteFile(s);
		}
		if(ret)
		{
			for(int i = index; i<pfileopts->count; i++)
				pfileopts->ppfi[i] = pfileopts->ppfi[i+1];

			pfileopts->count--;
			ListView_DeleteItem(hListView, index);
			index = -1;
		}
	}
	wchar_t s1[50];
	LoadString(g_hInst, 24, s1, ARRSIZE(s1)-1); // %u File(s)
	swprintf(s, PATH_SIZE, s1, pfileopts->count);
	SndCtrlMsg(GetParent(hListView), IDC_STATUSBAR, SB_SETTEXT, (WPARAM)0, (LPARAM)s);
	return ret;
}

int SHDeleteDir(HWND hwnd, const wchar_t * buf)
{
	memset(&shf, 0, sizeof(SHFILEOPSTRUCT));
	shf.hwnd  = hwnd;
	shf.wFunc = FO_DELETE;
	shf.pFrom = buf;
	shf.fFlags = FOF_NOCONFIRMATION | FOF_SIMPLEPROGRESS;
	int ret = SHFileOperation(&shf);
	return ret;
}

int SHMoveTo(HWND hwnd, wchar_t ** buf)
{
	memset(&shf, 0, sizeof(SHFILEOPSTRUCT));
	shf.hwnd  = hwnd;
	shf.wFunc = FO_MOVE;
	shf.pFrom = buf[0];
	shf.pTo   = buf[1];
	shf.fFlags = FOF_NOCONFIRMATION | FOF_SIMPLEPROGRESS;
	shf.lpszProgressTitle = L"Progress";
	return SHFileOperation(&shf);
}

int SHCopyTo(HWND hwnd, wchar_t ** buf)
{
	memset(&shf, 0, sizeof(SHFILEOPSTRUCT));
	shf.hwnd  = hwnd;
	shf.wFunc = FO_COPY;
	shf.pFrom = buf[0];
	shf.pTo   = buf[1];
	shf.fFlags = FOF_NOCONFIRMATION | FOF_SIMPLEPROGRESS;
	return SHFileOperation(&shf);
}

/* SHFileOperation() 

FO_COPY		Copies the files specified by pFrom to the location specified by pTo.
FO_DELETE	Deletes the files specified by pFrom (pTo is ignored).
FO_MOVE		Moves the files specified by pFrom to the location specified by pTo.
FO_RENAME	Renames the files specified by pFrom.

*/
int SHRenameFile(HWND hwnd, wchar_t * fileFrom, wchar_t * fileTo)
{
	return _wrename(fileFrom, fileTo);
}

int SHRecycleBin(HWND hwnd, wchar_t ** buf)
{
	memset(&shf, 0, sizeof(SHFILEOPSTRUCT));
	shf.hwnd  = hwnd;
	shf.wFunc = FO_DELETE;
	shf.pFrom = buf[0];
	shf.fFlags = FOF_ALLOWUNDO | FOF_NOCONFIRMATION | FOF_SIMPLEPROGRESS;
	return SHFileOperation(&shf);
}

int SHProperties(HWND hwnd, const wchar_t * filename)
{
	SHELLEXECUTEINFO shi;
	memset(&shi, 0, sizeof(SHELLEXECUTEINFO));
	shi.cbSize 		 = sizeof(SHELLEXECUTEINFO);
	shi.fMask 		 = SEE_MASK_INVOKEIDLIST ;
	shi.hwnd 		 = hwnd;
	shi.lpVerb 		 = L"properties";
	shi.lpFile 		 = filename;
	shi.lpParameters = L"";
	shi.lpDirectory  = NULL;
	shi.nShow 		 = SW_SHOW;
	shi.hInstApp 	 = NULL;
	return ShellExecuteEx(&shi);
}

LRESULT CALLBACK BrowseForFolderDlgProc(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (uMsg == BFFM_INITIALIZED)
	{
		wchar_t szPath[30];
		wcscpy(szPath, L"c:");
		SndMsg(hDlg, BFFM_SETSELECTION, 1, (LPARAM)szPath);
	}

	return (FALSE);
}

void SHOpenFolderSelectFile(wchar_t * path, wchar_t * file)
{
	PCIDLIST_ABSOLUTE pItemIDList;
	wchar_t filename[MAX_PATH];

	wcscpy(filename, path);
	wcscat(filename, file);

	pItemIDList = ILCreateFromPath(filename);
	if (pItemIDList != NULL)
	{
		SHOpenFolderAndSelectItems(pItemIDList, 0, NULL, 0);
		ILFree((LPITEMIDLIST)pItemIDList);
	}
}

int SHBrowseDir(HWND hwnd, const wchar_t *Title, wchar_t *result)
{
	BROWSEINFO browseInfo;
	LPITEMIDLIST ItemIDList;
	int r = 0;

	// 0x1 added to ulFlags allows scrolling to desired
	// folder if needed, because of M.S. bug apparently.
	memset(&browseInfo, 0, sizeof(BROWSEINFO));
	browseInfo.hwndOwner 		= hwnd;//GetActiveWindow();
	browseInfo.pszDisplayName 	= result;
	browseInfo.lpszTitle 		= Title;
	browseInfo.ulFlags 			= BIF_NEWDIALOGSTYLE | BIF_UAHINT | 0x1 | BIF_STATUSTEXT;
	browseInfo.lpfn			 	= (BFFCALLBACK)BrowseForFolderDlgProc;
	browseInfo.lParam			= 0;

	ItemIDList = SHBrowseForFolder(&browseInfo);

	if (ItemIDList != NULL)
	{
		*result = 0;
		if (SHGetPathFromIDList(ItemIDList, result))
		{
			if (result[0])
				r = 1;
		}
	}
	CoTaskMemFree(ItemIDList);
	return r;
}

void ShellFree(LPVOID pv)
{
	g_pMalloc->lpVtbl->Free(g_pMalloc, pv);
}
