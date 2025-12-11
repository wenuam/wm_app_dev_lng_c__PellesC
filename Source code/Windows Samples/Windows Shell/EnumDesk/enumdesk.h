/**************************************************************************
   THIS CODE AND INFORMATION IS PROVIDED 'AS IS' WITHOUT WARRANTY OF
   ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
   THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
   PARTICULAR PURPOSE.

   Copyright 1999 - 2000 Microsoft Corporation.  All Rights Reserved.
**************************************************************************/

/**************************************************************************

   File:          EnumDesk.h

   Description:

**************************************************************************/

/**************************************************************************
   #include statements
**************************************************************************/

#include <windows.h>

typedef struct {
    LPSHELLFOLDER pParentFolder;
    LPITEMIDLIST pidlFQ;
    LPITEMIDLIST pidlRel;
} ITEMINFO, *LPITEMINFO;

/**************************************************************************
   function prototypes
**************************************************************************/

LPITEMIDLIST Pidl_Concatenate(LPCITEMIDLIST, LPCITEMIDLIST);
LPITEMIDLIST Pidl_Copy(LPCITEMIDLIST);
void Pidl_Free(LPITEMIDLIST);

/**************************************************************************
   global variables and definitions
**************************************************************************/

extern HINSTANCE g_hInst;
extern LPMALLOC g_pMalloc;
extern IContextMenu2 *g_pcm2;

#define IDC_TREEVIEW  2000
#define IDC_LISTVIEW  2001

