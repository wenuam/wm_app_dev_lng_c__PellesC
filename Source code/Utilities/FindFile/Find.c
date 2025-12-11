// find.c
#include <process.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>
#include "find.h"
#include "findfile.h"

#pragma warn(disable:2216) // return value never used 

// Speed things up slightly
#pragma intrinsic( strlen )
#pragma intrinsic( strcpy )
#pragma intrinsic( wcscpy )
#pragma intrinsic( wcslen )
#pragma intrinsic( memcpy )

static wchar_t g_filter[PATH_SIZE];	
static FINDFILE_OPTIONS * g_pfileopts; // this g_pfileopts is copied from the one 
//										  passed from FindFile.c in Private_FindFile()
FILEINFO * g_pInfoArr;
static FILEINFO ** g_infoBuf;		//
static int g_error = ERR_OK;		//
static HMEM g_hMem = NULL;			// memory handler
uintptr_t g_hThread;				// this threads handle
static BOOL g_bTerminate = FALSE;	// if thread is terminated
static int g_memCapacity = 80000;	// initial storage size for FILEINFO's
static int g_numTokens;				// number of search tokens
extern int g_iUniSearch;

#define WC_PATHNAME   (1) 		// No wildcard can ever match `/'.
#define WC_ESCAPE	  (2)		// Backslashes don't quote special chars.
#define WC_PERIOD	  (4) 		// Leading `.' is matched only explicitly.
#define WC_LEADINGDIR (8) 		// Ignore `/...' after a match.
#define WC_NOCASE	  (16) 		// Compare without regard to case.
#define WC_FILENAME   WC_PATHNAME	// Preferred GNU name.

// value returned by `IsFilterMatch' if STRING does not match PATTERN.
#define FNM_MATCH		0			//
#define FNM_NOMATCH 	1			//

// this evaluates a char many times
#define FOLD(c) ((flags & WC_NOCASE) ? towlower(c) : (c))

#define MSIZE 0x40000				// buffer size for read file in text search

static wchar_t * g_pBufWc = 0;		// main buffer for reading file in text search
static char  * g_pBufMb = 0;		// main buffer for reading file in text search

static long long g_pos[MAX_NUMBER_MATCHES];	// max number of text matches for pos[]

int strSearchMb(const wchar_t * filename, const char * pattern, long long filesize)
{
	FILE * in;
	int number = 0, thiscount = 0;
	int patsize = strlen(pattern);
	char * pTxtbuf;
	size_t readsize;
	long long totalcount = 0;
	const char * str1, * str2;
	BOOL eof = FALSE;

	if ( !*pattern || !*filename || pattern == NULL || filename == NULL)
		return 0;

	in = _wfopen(filename, L"rb");
	if(!in)
	{
		return 0;
	}

	readsize = fread(g_pBufMb, 1, MSIZE, in);
	pTxtbuf = g_pBufMb;

	int cnt = 0, offset = 0;

	while (totalcount < filesize)
	{
		str1 = pTxtbuf;
		str2 = (char*)pattern;

		// if the last match is at the end of file and there are no more
		// characters after the match (CR/LF) the loop can go one past the count,
		// so end when the pattern end. [ check && *str2 ].
		//
		// if 'eof' == TRUE no more bytes are to be read but the
		// remaining readsize bytes still need to be processed
		//
		while ( *str1 == *str2 && *str2)
		{
			str1++, str2++;
			cnt++;
			if(thiscount + cnt == readsize)
			{
				// read new block
				if(!eof)
				{
					readsize = fread(g_pBufMb, 1, MSIZE, in);
					if(readsize != MSIZE)
						eof = TRUE;
					str1 = pTxtbuf = g_pBufMb;		// reset pointers
					thiscount = 0;
					offset = cnt;	// offset updates totalcount later
				}
			}
		}

		if(cnt == patsize)
		{
			// we have a match
			g_pos[number++] = totalcount;			// store position
			if (g_pfileopts->iFileCounts == 1)		// end if file count only
				goto ende;
			if (number >= MAX_NUMBER_MATCHES)
			{
				goto ende;
			}
			pTxtbuf	   += patsize - 1 - offset;		// update pointers
			thiscount  += patsize - 1 - offset;		//
			totalcount += patsize - 1;				// and totalcount
		}
		else if(cnt)
		{
			totalcount += offset;					// only 'offset' for this case
		}											// pTxtbuf & thiscount are incremented next
		// offset is how many cnt was when allocating
		// new block
		pTxtbuf++;
		totalcount++;
		thiscount++;

		if(thiscount == readsize)
		{
			if(!eof)
			{
				readsize = fread(g_pBufMb, 1, MSIZE, in);
				if(readsize != MSIZE)
					eof = TRUE;
				str1 = pTxtbuf = g_pBufMb;
				thiscount = 0;
			}
		}

		cnt = 0;
		offset = 0;
	} // end while (totalcount < filesize)

ende:
	fclose(in);
	return number;

}

int strSearchiMb(const wchar_t * filename, const char * pattern, long long filesize)
{
	FILE * in;
	int number = 0, thiscount = 0;
	int patsize = strlen(pattern);
	char * pTxtbuf;
	size_t readsize;
	long long totalcount = 0;
	const char * str1, * str2;
	BOOL eof = FALSE;

	if ( !*pattern || !*filename || pattern == NULL || filename == NULL)
		return 0;

	in = _wfopen(filename, L"rb");
	if(!in)
	{
		return 0;
	}

	readsize = fread(g_pBufMb, 1, MSIZE, in);
	pTxtbuf = g_pBufMb;

	int cnt = 0, offset = 0;

	while (totalcount < filesize)
	{
		str1 = pTxtbuf;
		str2 = pattern;

		// if the last match is at the end of file and there are no more
		// characters after the match (CR/LF) the loop can go one past the count,
		// so end when the pattern end. [ check && *str2 ].
		//
		// if 'eof' == TRUE no more bytes are to be read but the
		// remaining readsize bytes still need to be processed
		while ( toupper(*str1) == toupper(*str2) && *str2 )
		{
			str1++, str2++;
			cnt++;
			if(thiscount + cnt == readsize)
			{
				// read new block
				if(!eof)
				{
					readsize = fread(g_pBufMb, 1, MSIZE, in);
					if(readsize != MSIZE)
						eof = TRUE;
					str1 = pTxtbuf = g_pBufMb;		// reset pointers
					thiscount = 0;
					offset = cnt;	// offset updates totalcount later
				}
			}
		}

		if(cnt == patsize)
		{
			// we have a match
			g_pos[number++] = totalcount;			// store position
			if (g_pfileopts->iFileCounts == 1)		// end if file count only
				goto ende;
			if (number >= MAX_NUMBER_MATCHES)
			{
				goto ende;
			}
			pTxtbuf	   += patsize - 1 - offset;		// update pointers
			thiscount  += patsize - 1 - offset;		//
			totalcount += patsize - 1;				// and totalcount
		}
		else if(cnt)
		{
			totalcount += offset;					// only 'offset' for this case
		}											// pTxtbuf & thiscount are incremented next
		// offset is how many cnt was when allocating
		// new block
		pTxtbuf++;
		totalcount++;
		thiscount++;

		if(thiscount == readsize)
		{
			if(!eof)
			{
				readsize = fread(g_pBufMb, 1, MSIZE, in);
				if(readsize != MSIZE)
					eof = TRUE;
				str1 = pTxtbuf = g_pBufMb;
				thiscount = 0;
			}
		}

		cnt = 0;
		offset = 0;
	} // while (totalcount < filesize)
ende:
	fclose(in);
	return number;
}

int strSearchWc(const wchar_t * filename, const wchar_t * pattern, long long filesize)
{
	FILE * in;
	int number = 0, thiscount = 0;
	int patsize = wcslen(pattern);
	wchar_t * pTxtbuf;
	size_t readsize;
	long long totalcount = 0;
	const wchar_t * str1, * str2;
	BOOL eof = FALSE;

	filesize /= sizeof(wchar_t); // We are dealing with wchar_t's not chars

	if ( !*pattern || !*filename || pattern == NULL || filename == NULL)
		return 0;

	in = _wfopen(filename, L"rb");
	if(!in)
	{
		return 0;
	}

	readsize = fread(g_pBufWc, sizeof(wchar_t), MSIZE, in);
	pTxtbuf = g_pBufWc;

	int cnt = 0, offset = 0;

	while (totalcount < filesize)
	{
		str1 = pTxtbuf;
		str2 = pattern;

		// if the last match is at the end of file and there are no more
		// characters after the match (CR/LF) the loop can go one past the count,
		// so end when the pattern end. [ check && *str2 ].
		//
		// if 'eof' == TRUE no more bytes are to be read but the
		// remaining readsize bytes still need to be processed
		//
		while ( *str1 == *str2 && *str2)
		{
			str1++, str2++;
			cnt++;
			if(thiscount + cnt == readsize)
			{
				// read new block
				if(!eof)
				{
					readsize = fread(g_pBufWc, sizeof(wchar_t), MSIZE, in);
					if(readsize != MSIZE)
						eof = TRUE;
					str1 = pTxtbuf = g_pBufWc;		// reset pointers
					thiscount = 0;
					offset = cnt;	// offset updates totalcount later
				}
			}
		}

		if(cnt == patsize)
		{
			// we have a match
			g_pos[number++] = totalcount;			// store position
			if (g_pfileopts->iFileCounts == 1)		// end if file count only
				goto ende;
			if (number >= MAX_NUMBER_MATCHES)
			{
				goto ende;
			}
			pTxtbuf	   += patsize - 1 - offset;		// update pointers
			thiscount  += patsize - 1 - offset;		//
			totalcount += patsize - 1;				// and totalcount
		}
		else if(cnt)
		{
			totalcount += offset;					// only 'offset' for this case
		}											// pTxtbuf & thiscount are incremented next
		// offset is how many cnt was when allocating
		// new block
		pTxtbuf++;
		totalcount++;
		thiscount++;

		if(thiscount == readsize)
		{
			if(!eof)
			{
				readsize = fread(g_pBufWc, sizeof(wchar_t), MSIZE, in);
				if(readsize != MSIZE)
					eof = TRUE;
				str1 = pTxtbuf = g_pBufWc;
				thiscount = 0;
			}
		}

		cnt = 0;
		offset = 0;
	} // end while (totalcount < filesize)

ende:
	fclose(in);
	return number;

}

int strSearchiWc(const wchar_t * filename, const wchar_t * pattern, long long filesize)
{
	FILE * in;
	int number = 0, thiscount = 0;
	int patsize = wcslen(pattern);
	wchar_t * pTxtbuf;
	size_t readsize;
	long long totalcount = 0;
	const wchar_t * str1, * str2;
	BOOL eof = FALSE;

	filesize /= sizeof(wchar_t); // We are dealing with wchar_t's not chars

	if ( !*pattern || !*filename || pattern == NULL || filename == NULL)
		return 0;

	in = _wfopen(filename, L"rb");
	if(!in)
	{
		return 0;
	}

	readsize = fread(g_pBufWc, sizeof(wchar_t), MSIZE, in);
	pTxtbuf = g_pBufWc;

	int cnt = 0, offset = 0;

	while (totalcount < filesize)
	{
		str1 = pTxtbuf;
		str2 = pattern;

		// if the last match is at the end of file and there are no more
		// characters after the match (CR/LF) the loop can go one past the count,
		// so end when the pattern end. [ check && *str2 ].
		//
		// if 'eof' == TRUE no more bytes are to be read but the
		// remaining readsize bytes still need to be processed
		while ( towupper(*str1) == towupper(*str2) && *str2 )
		{
			str1++, str2++;
			cnt++;
			if(thiscount + cnt == readsize)
			{
				// read new block
				if(!eof)
				{
					readsize = fread(g_pBufWc, sizeof(wchar_t), MSIZE, in);
					if(readsize != MSIZE)
						eof = TRUE;
					str1 = pTxtbuf = g_pBufWc;		// reset pointers
					thiscount = 0;
					offset = cnt;	// offset updates totalcount later
				}
			}
		}

		if(cnt == patsize)
		{
			// we have a match
			g_pos[number++] = totalcount;			// store position
			if (g_pfileopts->iFileCounts == 1)		// end if file count only
				goto ende;
			if (number >= MAX_NUMBER_MATCHES)
			{
				goto ende;
			}
			pTxtbuf	   += patsize - 1 - offset;		// update pointers
			thiscount  += patsize - 1 - offset;		//
			totalcount += patsize - 1;				// and totalcount
		}
		else if(cnt)
		{
			totalcount += offset;					// only 'offset' for this case
		}											// pTxtbuf & thiscount are incremented next
		// offset is how many cnt was when allocating
		// new block
		pTxtbuf++;
		totalcount++;
		thiscount++;

		if(thiscount == readsize)
		{
			if(!eof)
			{
				readsize = fread(g_pBufWc, sizeof(wchar_t),  MSIZE, in);
				if(readsize != MSIZE)
					eof = TRUE;
				str1 = pTxtbuf = g_pBufWc;
				thiscount = 0;
			}
		}

		cnt = 0;
		offset = 0;
	} // while (totalcount < filesize)
ende:
	fclose(in);
	return number;
}

void ViewSearchResultsWc(FINDFILE_OPTIONS * fileopts, HWND hwndHead, int index)
{
	wchar_t * pBuffer = calloc(1, (MSIZE + 2)*sizeof(wchar_t));
	if(!pBuffer)
		return;
	int num;
	FILEINFO * pfi;				// used for the fileopts.fi[]
	pfi = fileopts->ppfi[index];
	long long size = MAKELONGLONG(pfi->nFileSizeLow, pfi->nFileSizeHigh);
	size_t ii, tmp;
	wchar_t pathname[PATH_SIZE];

	wcscpy(pathname, pfi->pathname);
	wcscat(pathname, pfi->filename);

	// strSearch returns the number of occurences of the text searched in the file.
	if(fileopts->iCase == 1)
	{
		num = strSearchWc(pathname, fileopts->txtsearchWc, size);
	}
	else
	{
		num = strSearchiWc(pathname, fileopts->txtsearchWc, size);
	}

	FILE * f = _wfopen(pathname, L"rb");
	size_t txtlen, read;
	long long npos;
	fpos_t fpos;
	fgetpos(f, &fpos);

	SetWindowText(hwndHead, L"");

	for(int i = 0; i<num; i++)
	{
		if(g_pos[i]*sizeof(wchar_t) < 40)
			npos = 0;
		else
			npos = g_pos[i]*sizeof(wchar_t) - 40*sizeof(wchar_t);

		fpos.off = npos;
		fsetpos(f, &fpos);
		if(num>1)
		{
			swprintf(pBuffer, MSIZE, L"[%d] ", i+1);
			tmp = wcslen(pBuffer);
		}
		else
			tmp = 0;

		read = fread(pBuffer + tmp, 1,  (80*sizeof(wchar_t)) + wcslen(fileopts->txtsearchWc)*sizeof(wchar_t), f);
		for(ii = 0; ii<((read+tmp)/sizeof(wchar_t)); ii++)
		{
			if(pBuffer[ii] == 0)
				pBuffer[ii] = 27;
			if(pBuffer[ii] == 10 || pBuffer[ii] == 13) // take out any LFCR's that in the actual text
				pBuffer[ii] = ' ';

		}

		pBuffer[ii++] = 13;
		pBuffer[ii++] = 10; 	// CRLF
		pBuffer[ii++] = 13;
		pBuffer[ii++] = 10; 	// CRLF
		pBuffer[ii++] = 0;  					// terminate it

		txtlen = (size_t)SndMsg(hwndHead, WM_GETTEXTLENGTH, 0, 0);
		SndMsg(hwndHead, EM_SETSEL, txtlen + 1, (LPARAM)txtlen + 1);

		SndMsg(hwndHead, EM_REPLACESEL, TRUE, (LPARAM)pBuffer);
	}

	fclose(f);
	free(pBuffer);
}

void ViewSearchResultsMb(FINDFILE_OPTIONS * fileopts, HWND hwndHead, int index)
{
	char * pBuffer = calloc(1, MSIZE + 2);
	if(!pBuffer)
		return;
	int num;
	FILEINFO * pfi;				// used for the fileopts.fi[]
	pfi = fileopts->ppfi[index];
	long long size = MAKELONGLONG(pfi->nFileSizeLow, pfi->nFileSizeHigh);
	size_t ii, tmp;
	wchar_t pathname[PATH_SIZE];

	wcscpy(pathname, pfi->pathname);
	wcscat(pathname, pfi->filename);

	// strSearch returns the number of occurences of the text searched in the file.
	if(fileopts->iCase == 1)
	{
		num = strSearchMb(pathname, fileopts->txtsearchMb, size);
	}
	else
	{
		num = strSearchiMb(pathname, fileopts->txtsearchMb, size);
	}

	FILE * f = _wfopen(pathname, L"rb");
	size_t txtlen, read;
	long long npos;
	fpos_t fpos;
	fgetpos(f, &fpos);

	SetWindowText(hwndHead, L"");

	for(int i = 0; i<num; i++)
	{
		if(g_pos[i] < 40)
			npos = 0;
		else
			npos = g_pos[i] - 40;

		fpos.off = npos;
		fsetpos(f, &fpos);
		if(num>1)
		{
			snprintf(pBuffer, MSIZE, "[%d] ", i+1);
			tmp = strlen(pBuffer);
		}
		else
			tmp = 0;

		read = fread(pBuffer + tmp, 1,  80 + strlen(fileopts->txtsearchMb), f);
		for(ii = 0; ii<read+tmp; ii++)
		{
			if(pBuffer[ii] == 0)
				pBuffer[ii] = 27;
			if(pBuffer[ii] == 10 || pBuffer[ii] == 13) // take out any LFCR's that in the actual text
				pBuffer[ii] = ' ';

		}

		pBuffer[ii++] = 13;
		pBuffer[ii++] = 10; 	// CRLF
		pBuffer[ii++] = 13;
		pBuffer[ii++] = 10; 	// CRLF
		pBuffer[ii++] = 0;  					// terminate it

		txtlen = (size_t)SndMsg(hwndHead, WM_GETTEXTLENGTH, 0, 0);
		SndMsg(hwndHead, EM_SETSEL, txtlen + 1, (LPARAM)txtlen + 1);

		mbstowcs(g_pBufWc, pBuffer, MSIZE);
		SndMsg(hwndHead, EM_REPLACESEL, TRUE, (LPARAM)g_pBufWc);
	}


	fclose(f);
	free(pBuffer);
}

static int private_IsFilterMatch(const wchar_t * szPattern, const wchar_t * szString, int no_leading_period, int flags)
{
	register const wchar_t *pPat = szPattern, *pStr = szString;
	register wchar_t c;

	while ((c = *pPat++) != '\0')
	{
		c = (wchar_t)FOLD (c);

		switch (c)
		{
		case '?':
			if (*pStr == '\0')
			{
				return FNM_NOMATCH;
			}
			else if (*pStr == '\\' && (flags & WC_FILENAME))
			{
				return FNM_NOMATCH;
			}
			else if (*pStr == '.' && no_leading_period && (pStr == szString
					 || (pStr[-1] == '\\' && (flags & WC_FILENAME))))
			{
				return FNM_NOMATCH;
			}
			break;

		case '\\':
			if (!(flags & WC_ESCAPE))
			{
				c = *pPat++;
				if (c == '\0')
				{
					// Trailing \ loses.
					return FNM_NOMATCH;
				}
				c = (wchar_t)FOLD (c);
			}
			if (FOLD ((TBYTE) *pStr) != c)
			{
				return FNM_NOMATCH;
			}
			break;

		case '*':
			if (*pStr == '.' && no_leading_period
					&& (pStr == szString || (pStr[-1] == '\\' && (flags & WC_FILENAME))))
			{
				return FNM_NOMATCH;
			}

			for (c = *pPat++; c == '?' || c == '*'; c = *pPat++)
			{
				if (*pStr == '\\' && (flags & WC_FILENAME))
				{
					return FNM_NOMATCH;		// A slash does not match a wildcard under WC_FILENAME.
				}
				else if (c == '?')
				{
					if (*pStr == '\0')
					{
						// A ? needs to match one character.
						return FNM_NOMATCH; // There isn't another character; no match.
					}
					else
					{
						//  One character of the szString is consumed in matching
						//  this ? wildcard, so *??? won't match if there are
						//  less than three characters.
						++pStr;
					}
				}
			}

			if (c == '\0')
			{
				// The wildcard(s) is/are the last element of the szPattern.
				// If the name is a file name and contains another slash
				// this does mean it cannot match.
				return ((flags & WC_FILENAME) && wcschr (pStr, '\\') != NULL ? FNM_NOMATCH : 0);
			}
			else
			{
				const wchar_t * endp;
				// replace call to private glibc function with equivalent
				if (!(flags & WC_FILENAME) || ((endp = wcschr(pStr, '\\')) == NULL))
				{
					endp = pStr + wcslen(pStr);
				}

				if (c == '[')
				{
					int flags2 = ((flags & WC_FILENAME) ? flags : (flags & ~WC_PERIOD));
					for (--pPat; pStr < endp; ++pStr)
					{
						if (private_IsFilterMatch(pPat, pStr, (no_leading_period &&
															   ( pStr == szString ||
																	   ( pStr[-1] == '\\' && (flags & WC_FILENAME) ) ) ),flags2 )== 0 )
						{
							return 0; // Match
						}
					}
				}
				else if ( c == '\\' && (flags & WC_FILENAME) )
				{

					while (*pStr != '\0' && *pStr != '\\')
					{
						++pStr;
					}
					if ( *pStr == '\\' &&
							(private_IsFilterMatch(pPat, pStr + 1, flags & WC_PERIOD, flags) == 0))
					{
						return FNM_MATCH;
					}
				}
				else
				{
					int flags2 = ( (flags & WC_FILENAME) ? flags : (flags & ~WC_PERIOD) );

					if ( c == '\\' && !(flags & WC_ESCAPE) )
					{
						c = *pPat;
					}
					c = (wchar_t)FOLD (c);
					for (--pPat; pStr < endp; ++pStr)
					{
						if ( FOLD ((TBYTE) *pStr) == c
								&& (private_IsFilterMatch(pPat, pStr, (no_leading_period
														  && (pStr == szString || ( pStr[-1] == '\\'
																  && (flags & WC_FILENAME)))), flags2) == 0))
						{
							return FNM_MATCH;
						}
					}
				}
			}

			// If we come here no match is possible with the wildcard.
			return FNM_NOMATCH;
			break;

		default:
			if (c != FOLD ((TBYTE) *pStr))
			{
				return FNM_NOMATCH;
			}
		} // end switch
		++pStr;
	} // end while

	if (*pStr == '\0')
	{
		return FNM_MATCH;
	}

	if ( ( flags & WC_LEADINGDIR) && *pStr == '\\' )
	{
		// The WC_LEADINGDIR flag says that 'foo*' matches foobar/frobozz'.
		return FNM_MATCH;
	}

	return FNM_NOMATCH;

}

static int IsFilterMatch(const wchar_t * szPattern, const wchar_t * szString, int flags)
{
	int i = g_numTokens;
	int ret;
	while(i--)
	{
		ret = private_IsFilterMatch(szPattern, szString, flags & WC_PERIOD, flags);
		if(ret != FNM_NOMATCH)
			return ret;
		else
			szPattern += wcslen(szPattern)+1;
	}
	return FNM_NOMATCH;
}

void AbortFindFile(void)
{
	g_bTerminate = TRUE;
	g_error = ERR_ABORT;
}

void FindFileStop(void)
{
	g_bTerminate = TRUE;
	g_error = ERR_ABORT;
	g_pfileopts->CallBackProc(FF_FINISHED, (void*)g_hMem);
}

int FindFileLastErr(void)
{
	return g_error;
}

static wchar_t * CombinePath(const wchar_t * str, const wchar_t * str1)
{
	static wchar_t p[PATH_SIZE];
	wcscpy(p, str);
	p[(wcsstr(p, L"\\*") - p)] = '\0';

	wcscat(p, L"\\");
	wcscat(p, str1);
	wcscat(p, L"\\*");
	return p;
}

void Cleanup(int err)
{
	g_error = err;
	g_hThread = 0;
	_endthread();
}

static BOOL FindFile_getFiles(HANDLE * phFindFile, WIN32_FIND_DATA * pfileData, const wchar_t * pPath)
{
	HANDLE h = NULL;
	DWORD tmp;
	if (*phFindFile == NULL)
	{
		tmp = SetErrorMode(SEM_FAILCRITICALERRORS);
		h = FindFirstFile(pPath, pfileData);
		SetErrorMode(tmp);
		if( h == INVALID_HANDLE_VALUE)
		{
			// i = wcslen(pPath);
			return FALSE;
		}
		else
		{
			*phFindFile = h;
			if (wcscmp(pfileData->cFileName, L".") != 0 && wcscmp(pfileData->cFileName, L"..") != 0)
				return TRUE;
		}
	}

	while (*phFindFile != INVALID_HANDLE_VALUE && FindNextFile(*phFindFile, pfileData))
	{
		// if it is not . or .., it's OK
		if (wcscmp(pfileData->cFileName, L".") != 0 && wcscmp(pfileData->cFileName, L"..") != 0)
			return TRUE;
	}

	FindClose(*phFindFile);
	*phFindFile = NULL;

	return FALSE;
}

BOOL IsExtendedSearch(const WIN32_FIND_DATA * pWFD)
{
	BOOL fOK = FALSE;

	DWORD ftLastWriteTime = pWFD->ftLastWriteTime.dwHighDateTime;
	long long llsize = MAKELONGLONG(pWFD->nFileSizeLow, pWFD->nFileSizeHigh);

	// look for both high and low dates being set
	if(g_pfileopts->ext.ftAfterTime.dwHighDateTime && g_pfileopts->ext.ftBeforeTime.dwHighDateTime)
	{
		if(ftLastWriteTime >= g_pfileopts->ext.ftAfterTime.dwHighDateTime && ftLastWriteTime <= g_pfileopts->ext.ftBeforeTime.dwHighDateTime)
			fOK = TRUE;
		else
			return FALSE;

		goto lsize;
	}

	// just one
	if(g_pfileopts->ext.ftAfterTime.dwHighDateTime)
	{
		if(ftLastWriteTime >= g_pfileopts->ext.ftAfterTime.dwHighDateTime)
			fOK = TRUE;
		else
			return FALSE;
	}

	// or the other
	if(g_pfileopts->ext.ftBeforeTime.dwHighDateTime)
	{
		if(ftLastWriteTime <= g_pfileopts->ext.ftBeforeTime.dwHighDateTime)
			fOK = TRUE;
		else
			return FALSE;
	}

lsize:

	// both sizes are active
	if(g_pfileopts->ext.dwMoreThanSize > 0 && g_pfileopts->ext.dwLessThanSize > 0)
	{
		if(llsize >= (long long)g_pfileopts->ext.dwMoreThanSize && llsize <= (long long)g_pfileopts->ext.dwLessThanSize)
			fOK = TRUE;
		else
			return FALSE;

		goto exit;
	}

	// only more than is active
	if(g_pfileopts->ext.dwMoreThanSize > 0)
	{
		if(llsize >= (long long)g_pfileopts->ext.dwMoreThanSize)
			fOK = TRUE;
		else
			return FALSE;
	}

	// only less than is active
	if(g_pfileopts->ext.dwLessThanSize > 0)
	{
		if(llsize <= (long long)g_pfileopts->ext.dwLessThanSize)
			fOK = TRUE;
		else
			return FALSE;
	}

exit:
	return fOK;
}

wchar_t filename[PATH_SIZE];

extern wchar_t g_sTxtSearch[];

void SendDir(const FINDFILE_OPTIONS * pfileopts, wchar_t * pPath)
{
	size_t p;
	// take off the '\*' filter
	p = wcsstr(pPath, L"\\*")-pPath;
	pPath[p] = '\0';

	pfileopts->CallBackProc(FF_READ_DIR, (void*)pPath);
	// put it back
	pPath[p] = '\\';
	pPath[p+1] = '*';
}

void FindFile_scanPath(const wchar_t * path)
{
	size_t result = 0;
	FILEINFO * info = NULL;
	FILEINFO ** tmpinfo = NULL;
	HANDLE hFindFile = NULL;
	WIN32_FIND_DATA WFD;
	size_t p;

	// for the recusion, pPath carries THIS stack's string
	// default stack is 1 meg so should be enough
	wchar_t pPath[PATH_SIZE];
	wcscpy(pPath, path);
	SendDir(g_pfileopts, pPath);

	while (FindFile_getFiles(&hFindFile, &WFD, pPath))
	{
		// To include folders in the search, take out this IF
		//
		//if(!(WFD.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
		//{

		// Abort on termination signal
		if (g_bTerminate)
		{
			g_hThread = 0;
			_endthread();
		}

		if(FNM_NOMATCH == IsFilterMatch(g_filter, WFD.cFileName, WC_NOCASE | WC_ESCAPE))
			goto dir;//continue;

		if(g_pfileopts->ext.fExtEnabled)
		{
			if(!IsExtendedSearch(&WFD))
				goto dir;//continue;
		}

		if(g_sTxtSearch[0])
		{

			result = (size_t)MAKELONGLONG(WFD.nFileSizeLow, WFD.nFileSizeHigh);
			wcscpy(filename, pPath);
			wcscpy(filename+(wcslen(pPath)-1), WFD.cFileName);
			g_pfileopts->CallBackProc(FF_SEARCH_FILE, (void*)filename);
			if(g_pfileopts->iCase == 1)
			{
				if(g_iUniSearch)
				{
					result = strSearchWc(filename, g_pfileopts->txtsearchWc, result);
				}
				else
				{
					result = strSearchMb(filename, g_pfileopts->txtsearchMb, result);
				}
			}
			else
			{
				if(g_iUniSearch)
				{
					result = strSearchiWc(filename, g_pfileopts->txtsearchWc, result);
				}
				else
				{
					result = strSearchiMb(filename, g_pfileopts->txtsearchMb, result);
				}
			}
			if(!result)
				goto dir;//continue;
		}

		g_pInfoArr = g_pfileopts->ppfi[g_pfileopts->count];

		memcpy(g_pInfoArr, &WFD, 36); // partial copy of WIN32_FIND_DATA to FILEINFO
		g_pInfoArr->pathname = jmalloc( g_hMem, (wcslen(pPath) + 1)*sizeof(wchar_t));
		g_pInfoArr->filename = jmalloc( g_hMem, (wcslen(WFD.cFileName) + 1)*sizeof(wchar_t));
		g_pInfoArr->numsearch = result;
		if(g_pInfoArr->pathname == NULL)
		{
			Cleanup(ERR_MEM);
		}

		// take off filter
		p = wcsstr(pPath, L"\\*")-pPath;
		wcscpy(g_pInfoArr->pathname, pPath);
		g_pInfoArr->pathname[p+1] = '\0';
		wcscpy(g_pInfoArr->filename, WFD.cFileName);

		// add up the sizes of all the files
		g_pfileopts->ullBytes += MAKELONGLONG(WFD.nFileSizeLow, WFD.nFileSizeHigh);
		// send name to other thread
		g_pfileopts->CallBackProc(FF_READ_FILE, (void*)g_pInfoArr);

		g_pfileopts->count++;
		// allocate another 80000 bytes for another 20000 files
		if(g_pfileopts->count*(int)sizeof(FILEINFO*) >= g_memCapacity-8)
		{
			g_memCapacity += 80000;
			tmpinfo = realloc( g_infoBuf, g_memCapacity );
			if(tmpinfo == NULL)
			{
				Cleanup(ERR_MEM);
			}
			g_pfileopts->ppfi = (FILEINFO**)tmpinfo;
			g_infoBuf = tmpinfo;
		}

		// allocate memory for the next FILEINFO
		info = jmalloc( g_hMem, sizeof(FILEINFO) );
		if(info == NULL)
		{
			Cleanup(ERR_MEM);
		}

		g_pfileopts->ppfi[g_pfileopts->count] = info;

		//}
dir:
		// Skip this file/directory if not matching criteria
		if (!g_pfileopts->iSubFolder)
			continue;

		// If recursive option is set and this is a directory, then search in there too
		if (g_pfileopts->subdirs && WFD.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			FindFile_scanPath(CombinePath(pPath, WFD.cFileName));
			if(g_sTxtSearch[0])
			{
				SendDir(g_pfileopts, pPath);
			}
		}
	}
}

void SetLanguage(LANGID lid); // In FindFile.c

void _cdecl Private_FindFile(void * fileopts)
{
	/* These calls to SetLanguage() are only for testing purposes.
	   Normally the Locale is set automatically for your locale by the OS.
    */

	//SetLanguage(0x0809); // English (UK)
	//SetLanguage(0x040c); // French
	//SetLanguage(0x0407); // German (Standard) 
	//SetLanguage(0x0416); // Portuguese (Brazil)
	//SetLanguage(0x040b); // Finnish
	//SetLanguage(0x0419); // Rusian
	//SetLanguage(0x0413); // Dutch

	g_pfileopts = (FINDFILE_OPTIONS *)fileopts;
	wchar_t path[PATH_SIZE];

	// check for '\' at end of initialdir
	if( wcslen(g_pfileopts->initialdir)-2 != (size_t)(wcsrchr(g_pfileopts->initialdir, '\\')-g_pfileopts->initialdir ))
	{
		g_error = ERR_WRONGDIR;
		g_hThread = 0;
		_endthread();
		return;
	}

	// make a local copy of filter as used throughout this translation unit
	// clear filter of previous search
	memset(g_filter, 0, PATH_SIZE);
	wcscpy(g_filter, g_pfileopts->filter);

	// Decide how many tokens have been passed. IsFilterMatch() will
	// do a patterm matching search for each token.
	g_numTokens = 0;
	wchar_t * ptr;
	wchar_t seps[] = L",";
	wchar_t * token = wcstok(g_filter, seps, &ptr);
	while( token != NULL )  	// While there are tokens in filter
	{
		token = wcstok( NULL, seps, &ptr);
		g_numTokens++;
	}

	if(g_numTokens == 0)
		g_numTokens = 1;

	// if filter == *.* or *. or zero
	if(g_filter[0] == 0 || !wcscmp(g_filter, L"*.*") || !wcscmp(g_filter, L"*."))
		wcscpy(g_filter, L"*");

	// if filter has '.' at the end, change to '*'
	size_t len = wcslen(g_filter)-1;
	if(g_filter[len] == '.')
	{
		wcscpy(&g_filter[len+1], L"*");
	}

	extern int g_iAutoWildcards;
	wchar_t tmp[100];
	wchar_t tmpFilter[PATH_SIZE];
	wchar_t * p = g_filter;
	size_t lenTot = 0, lenght = 0;
	int cnt = g_numTokens;
	if (g_iAutoWildcards)
	{
		while(cnt--)
		{
			wcscpy(tmp, p);
			p += wcslen(tmp)+1; // point p to next token
			if(tmp[0] != '*')
			{
				for(size_t i = wcslen(tmp)+1; i>0; i--)
				{
					tmp[i] = tmp[i-1];
				}
				tmp[0] = '*';
			}

			// if no wild cards at end
			size_t ln = wcslen(tmp);
			if(tmp[ln-1] != '*')
			{
				tmp[ln] = '*';
				tmp[ln+1] = '\0';
			}

			wcscpy(tmpFilter+lenTot, tmp);
			lenght = wcslen(tmp)+1;
			lenTot += lenght;
		}
		// copy the new auto-wildcard corrected filter
		memcpy(g_filter, tmpFilter, (lenTot+1)*sizeof(wchar_t));
	}

	// 1000 1meg blocks should be enough
	g_hMem = InitJMem( 1000000, 1000 );
	if(g_hMem == NULL)
	{
		Cleanup(ERR_MEM);
		return;
	}

	// allocate memory for the array of pointers to FILEINFO's
	// enough for 200000 files.
	g_infoBuf = malloc( g_memCapacity );
	if(g_infoBuf == NULL)
	{
		Cleanup(ERR_MEM);
		return;
	}

	// use malloc here for g_infoBuf as it's easier to re-allocate later
	// all other memory uses jmalloc()
	g_pfileopts->ppfi = g_infoBuf;

	// allocate memory for the first FILEINFO
	g_pInfoArr = jmalloc( g_hMem, sizeof(FILEINFO) );
	if(g_pInfoArr == NULL)
	{
		Cleanup(ERR_MEM);
		return;
	}
	g_pfileopts->ppfi[0] = g_pInfoArr;

	wcscpy(path, g_pfileopts->initialdir);
	wchar_t * pSep = wcschr(g_pfileopts->initialdir, ';');
	wchar_t * pStr = g_pfileopts->initialdir;

	g_pBufWc = calloc(sizeof(wchar_t), (MSIZE + 1));
	if(!g_pBufWc)
	{
		Cleanup(ERR_MEM);
		return;
	}

	g_pBufMb = calloc(1, (MSIZE + 1));
	if(!g_pBufMb)
	{
		Cleanup(ERR_MEM);
		return;
	}

	while(pSep!=NULL)
	{
		memset(path, 0, PATH_SIZE);
		lstrcpyn(path, pStr, (pSep - pStr)+1); // lstrcpyn auto null terminates
		path[wcslen(path)] = '*';
		FindFile_scanPath(path);
		pSep += 1;
		pSep = wcschr(pSep, ';' );
		pStr += 4;
	}
	g_pfileopts->CallBackProc(FF_FINISHED, (void*)g_hMem);
	g_bTerminate = TRUE;
	g_hThread = 0;
}

void FreeFindFile(void)
{
	if(g_hMem)
		jfree(g_hMem);

	g_hMem = NULL;

	if(g_infoBuf)
		free(g_infoBuf);

	g_infoBuf = NULL;

	if(g_pBufWc)
	{
		free(g_pBufWc);
		g_pBufWc = 0;
	}
	if(g_pBufMb)
	{
		free(g_pBufMb);
		g_pBufMb = 0;
	}
}

int FindFile(FINDFILE_OPTIONS * fileopts)
{

	if(	g_hThread == 0)
	{
		g_error 	 = ERR_OK;
		g_bTerminate = FALSE;
		g_hThread	 = _beginthread(Private_FindFile, 0, fileopts);
	}
	else
	{
		g_error = ERR_ALREADYWORKING;
	}
	return g_error;
}


