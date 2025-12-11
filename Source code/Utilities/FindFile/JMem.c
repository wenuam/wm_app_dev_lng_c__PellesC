// jmem.c

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <stdlib.h>
#include <stdio.h>
#include "jmem.h"
#include "findfileres.h"
#include "dialogs.h"

// allocating and free-ing many thousands of memory blocks
// can take an age, these routines make it more reasonable.
#define ALIGN 8     // align on 8 byte boundry

LRESULT CALLBACK MessageDialogProc(HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam);
void FindFileStop(void);

int get_block( HMEM hmem )
{
	return hmem->curblock+1;
}

int get_numblocks( HMEM hmem )
{
	return hmem->numblocks+1;
}

HMEM add_blocks( HMEM hmem, int num )
{
	unsigned long i;
	HMEM tmp = realloc( hmem, sizeof(struct tagJMem) + (hmem->numblocks + num)* sizeof(char*));
	if (tmp)
	{
		hmem = tmp;
		for ( i = hmem->numblocks; i<=(hmem->numblocks+num); i++)
		{
			hmem->block[i] = NULL;
		}
		hmem->numblocks += num;
		return hmem;
	}
	else
	{
		return NULL;
	}
}

HMEM InitJMem( int blocksize, int numblocks )
{
	HMEM hmem = calloc( 1, sizeof(struct tagJMem) + (numblocks * sizeof(char*)) );
	if ( hmem == NULL )
		return NULL;

	hmem->blocksize	= blocksize;
	hmem->numblocks	= numblocks -1;
	hmem->curblock  = 0;
	hmem->curoffset = 0;

	hmem->block[hmem->curblock] = calloc( 1, hmem->blocksize );
	if (hmem->block[hmem->curblock] == NULL )
		return NULL;
	else
		return hmem;
}
extern HINSTANCE g_hInst;
extern HWND g_hwndMain;
void * jmalloc( HMEM hmem, int size )
{
	char * pnewmem;
	hmem->curoffset = (hmem->curoffset + ALIGN - 1) & ~(ALIGN - 1);

	if( (hmem->curoffset + size) > hmem->blocksize )
	{
		if ( hmem->curblock >= hmem->numblocks )
			return NULL;

		pnewmem = calloc( 1, hmem->blocksize );

		if ( pnewmem == NULL ){
			MsgBox(g_hwndMain, L"No more memory!");
			FindFileStop();
			return NULL;
		}

		hmem->curblock++;
		hmem->block[hmem->curblock] = pnewmem;
		hmem->curoffset = size;

	}
	else
	{
		pnewmem = hmem->block[hmem->curblock] + hmem->curoffset;
		hmem->curoffset += size;
	}
	return pnewmem;
}

void jfree( HMEM hmem )
{
	for( unsigned long i =0; i<=(hmem->curblock); i++)
	{
		if ( hmem->block[i] )
			free( hmem->block[i] );
	}
	free( hmem );
}

