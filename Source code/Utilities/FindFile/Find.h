// find.h

#ifndef _FIND_H_
#define _FIND_H_

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "jmem.h"

#define	PATH_SIZE  MAX_PATH+MAX_PATH*sizeof(wchar_t)

#define FF_READ_DIR	 		0x100
#define FF_READ_FILE	 	0x101
#define FF_SEARCH_FILE	 	0x102
#define ERR_OK		 		0
#define ERR_WRONGDIR 		-1
#define ERR_MEM      		-2
#define ERR_ABORT    		-3
#define ERR_ALREADYWORKING  -4

#define FF_FINISHED 		WM_APP+10

typedef struct tagR
{	int l;	// left
	int t;	// top
	int r;	// right
	int b;	// bottom
	int f;  // window maximum
	int dx; // dialogbase unit
	int dy; // dialogbase unit
	HWND hDlg;
} RD;

typedef struct _Ext
{	FILETIME ftAfterTime;
	int      after[3];
	FILETIME ftBeforeTime;
	int      before[3];
	DWORD    dwMoreThanSize;
	DWORD    dwLessThanSize;
	BOOL     fExtEnabled;
} EXTENDED;

typedef struct tagFileInfo
{	DWORD 	 dwFileAttributes;
	FILETIME ftCreationTime;
	FILETIME ftLastAccessTime;
	FILETIME ftLastWriteTime;
	ULONG 	 nFileSizeHigh;
	ULONG 	 nFileSizeLow;
	wchar_t  * pathname;
	wchar_t  * filename;
	int      numsearch;	// number of found matches in file
} FILEINFO;

#define MAKELONGLONG(low,high) ((long long)(((long)(low)&0xFFFFFFFF) | ((long long)((long)(high)&0xFFFFFFFF)) << 32))

typedef struct tagFindFileOptions FINDFILE_OPTIONS;

typedef struct tagFindFileOptions
{	BOOL   subdirs;   			// search subdirectories
	wchar_t * initialdir;   	// initial directory to search
	wchar_t * filter;       	// filter - files to be included
	wchar_t * txtsearchWc;  	// wc text to be searched for
	char * txtsearchMb;    		// mb text to be searched for
	int    iFileCounts;			// just filecounts with text search
	int    iCase;				// case sensitive ?
	int    iUniSearch;      	// Unicode search ?
	void   (*CallBackProc)(int msg, void * name);
	int    count;				// how many files found?
	int    iSubFolder;			// do you want to search subfolders?
	long long ullBytes;			// sum of the files bytes
	EXTENDED ext;
	FILEINFO ** ppfi;
} FINDFILE_OPTIONS;

#define MAX_NUMBER_MATCHES 1000		// max number of matches allowed

void AbortFindFile(void);
int  FindFile(FINDFILE_OPTIONS * fileopts);
void FreeFindFile(void);
void FindFileStop(void);
int  FindFileLastErr(void);
void ViewSearchResultsWc(FINDFILE_OPTIONS * fileopts, HWND hwndHead, int index);
void ViewSearchResultsMb(FINDFILE_OPTIONS * fileopts, HWND hwndHead, int index);

#endif //_FIND_H_
