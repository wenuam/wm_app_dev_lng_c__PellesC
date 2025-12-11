/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : BABYGRID DLG BASED DEMO										*
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

/* 
 * Either define WIN32_LEAN_AND_MEAN, or one or more of NOCRYPT,
 * NOSERVICE, NOMCX and NOIME, to decrease compile time (if you
 * don't need these defines -- see windows.h).
 */

#define WIN32_LEAN_AND_MEAN
/* #define NOCRYPT */
/* #define NOSERVICE */
/* #define NOMCX */
/* #define NOIME */

#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include "resource.h"

#include "babygrid.h"  // <------- You must include the babygrid.h header file

/** Macroes *****************************************************************/


/** Global variables ********************************************************/

static HANDLE ghInstance;

HWND hgrid1,hgrid2;   // <------------ Window handles of the grids you'll create

/** Functions ***************************************************************/

BOOL CALLBACK About_DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
		case WM_INITDIALOG:
				return TRUE;

		case WM_COMMAND:
			if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL) 
			{
				EndDialog(hDlg, LOWORD(wParam));
				return TRUE;
			}
			break;
	}
    return FALSE;
}

void LoadGrid2(HWND hgrid)
{
	//load grid 2 with initial demo data
	BabyGrid_PutCell(hgrid,0,1,"Multi-line\nHeadings\nSupported");
	BabyGrid_PutCell(hgrid,0,2,"\n\nName");
	BabyGrid_PutCell(hgrid,0,3,"\n\nAge");

	BabyGrid_SetProtect(hgrid,TRUE);
	//every cell entered after a BGM_SETPROTECT TRUE will set the 
	//protected attribute of that cell.  This keeps an editable grid
	//from allowing the user to overwrite whatever is in the protected cell

	BabyGrid_SetProtectColor(hgrid, RGB(210,210,210));
	//the setprotectcolor is optional, but it gives a visual indication
	//of which cells are protected.

	//now put some data in the cells in grid2
	BabyGrid_PutCell(hgrid,1,2,"David");
	BabyGrid_PutCell(hgrid,2,2,"Maggie");
	BabyGrid_PutCell(hgrid,3,2,"Chester");
	BabyGrid_PutCell(hgrid,4,2,"Molly");
	BabyGrid_PutCell(hgrid,5,2,"Bailey");
	                     
	BabyGrid_PutCell(hgrid,1,3,"43");
	BabyGrid_PutCell(hgrid,2,3,"41");
	BabyGrid_PutCell(hgrid,3,3,"3");
	BabyGrid_PutCell(hgrid,4,3,"3");
	BabyGrid_PutCell(hgrid,5,3,"1");

	BabyGrid_PutCell(hgrid,10,5,"Shaded cells are write-protected.");

	BabyGrid_SetProtect(hgrid,FALSE);
	//turn off automatic cell protection
	//if you don't turn off automatic cell protection, if the 
	//grid is editable, the user can enter data into empty cells
	//but cannot change what he entered... not good.

	BabyGrid_PutCell(hgrid,1,0,"Row Headers customizable");
}

void LoadGrid1(HWND hgrid)
{
	//load data into the properties grid

	BabyGrid_PutCell(hgrid,1,1,"User Column Resizing");
	BabyGrid_PutCell(hgrid,1,2,"FALSE");
	BabyGrid_PutCell(hgrid,2,1,"User Editable");
	BabyGrid_PutCell(hgrid,2,2,"FALSE");
	BabyGrid_PutCell(hgrid,3,1,"Show Ellipsis");
	BabyGrid_PutCell(hgrid,3,2,"TRUE");
	BabyGrid_PutCell(hgrid,4,1,"Auto Column Size");
	BabyGrid_PutCell(hgrid,4,2,"FALSE");
	BabyGrid_PutCell(hgrid,5,1,"Extend Last Column");
	BabyGrid_PutCell(hgrid,5,2,"TRUE");
	BabyGrid_PutCell(hgrid,6,1,"Numbered Columns");
	BabyGrid_PutCell(hgrid,6,2,"TRUE");
	BabyGrid_PutCell(hgrid,7,1,"Numbered Rows");
	BabyGrid_PutCell(hgrid,7,2,"TRUE");
	BabyGrid_PutCell(hgrid,8,1,"Highlight Row");
	BabyGrid_PutCell(hgrid,8,2,"TRUE");
	BabyGrid_PutCell(hgrid,9,1,"Show Cursor");
	BabyGrid_PutCell(hgrid,9,2,"TRUE");
	BabyGrid_PutCell(hgrid,10,1,"Show Gridlines");
	BabyGrid_PutCell(hgrid,10,2,"TRUE");

	//make the grid notify the program that the row in the 
	//grid has changed.  Usually this is done by the user clicking
	//a cell, or moving thru the grid with the keyboard.  But we
	//want the grid to initially send this message to get things going.
	//If we didn't call BGM_NOTIFYROWCHANGED, the first row would be 
	//hilighted, but the ACTION wouldn't be performed.

	BabyGrid_NotifyRowChanged(hgrid);

	//make the properties grid have the focus when the application starts
	SetFocus(hgrid);
}

void Main_OnClose(HWND hwnd)
{
	EndDialog(hwnd, 0);
}

void Main_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
	switch (id)
	{
		case IDM_ABOUT:
		   DialogBox(ghInstance, MAKEINTRESOURCE(DLG_ABOUT), hwnd, (DLGPROC)About_DlgProc);
		   break;
		case IDM_EXIT:
		   Main_OnClose(hwnd);
		   break;
		case IDC_BABYGRID1: //properties grid notification that something happened
	    {
			if(codeNotify==BGN_CELLCLICKED) //a cell was clicked in the properties grid
			{
				int row,col,dtype;

				//get the row and column of the clicked cell
				row=LOWORD(hwndCtl);
				col=HIWORD(hwndCtl);

				//get the data type that is in the cell
				//in this instance, we're looking for BOOLEAN data (types 3 [TRUE] or 4 [FALSE])
				//datatype 1 is alphanumeric data
				//datatype 2 is numeric data
				//datatype 3 is BOOLEAN TRUE data
				//datatype 4 is BOOLEAN FALSE data
				BabyGrid_GetCellDataType(hgrid1,row,col,dtype);
				if(dtype == 3) //bool true
				{
					//if the grid cell was true (checked checkbox), toggle it false
					BabyGrid_PutCell(hgrid1,row,col,"FALSE");
					//send appropriate control message to the grid based
					//on the row of the cell that was toggled
					if(row==1)
						BabyGrid_SetAllowColResize (hgrid2,FALSE);
					if(row==2)
					    BabyGrid_SetEditTable(hgrid2,FALSE);
					if(row==3)
					    BabyGrid_SetEllipsis(hgrid2,FALSE);
					if(row==4)
					    BabyGrid_SetColAutoWidth(hgrid2,FALSE);
					if(row==5)
					    BabyGrid_ExtendLastColumn(hgrid2,FALSE);
					if(row==6)
					{
					    BabyGrid_SetColsNumbered(hgrid2,FALSE);
					    LoadGrid2(hgrid2);
					}
					if(row==7)
					    BabyGrid_SetRowsNumbered(hgrid2,FALSE);
					if(row==8)
					    BabyGrid_ShowHilight(hgrid2,FALSE);
					if(row==9)
					    BabyGrid_SetCursorColor(hgrid2, RGB(0,0,0));
					if(row==10)
					    BabyGrid_SetGridLineColor(hgrid2, RGB(255,255,255));
				}
				if(dtype == 4) //bool false
				{
					//if the grid cell was false (unchecked checkbox), toggle it true
					BabyGrid_PutCell(hgrid1,row,col,"TRUE")
					//send appropriate control message to the grid based
					//on the row of the cell that was toggled
					if(row==1)
						BabyGrid_SetAllowColResize (hgrid2,TRUE);
					if(row==2)
					    BabyGrid_SetEditTable(hgrid2,TRUE);
					if(row==3)
					    BabyGrid_SetEllipsis(hgrid2,TRUE);
					if(row==4)
					    BabyGrid_SetColAutoWidth(hgrid2,TRUE);
					if(row==5)
					    BabyGrid_ExtendLastColumn(hgrid2,TRUE);
					if(row==6)
					{
					    BabyGrid_SetColsNumbered(hgrid2,TRUE);
						BabyGrid_SetHeaderRowHeight(hgrid2,21);
					}
					if(row==7)
					    BabyGrid_SetRowsNumbered(hgrid2,TRUE);
					if(row==8)
					    BabyGrid_ShowHilight(hgrid2,TRUE);
					if(row==9)
					    BabyGrid_SetCursorColor(hgrid2, RGB(255,255,255));
					if(row==10)
					    BabyGrid_SetGridLineColor(hgrid2, RGB(220,220,220));
				}
			}//if(codeNotify==BGN_CELLCLICKED)
	    }//case IDC_BABYGRID1:
	}
}

BOOL Main_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam)
{
	//Get window handles
	hgrid1=GetDlgItem(hwnd,IDC_BABYGRID1);
	hgrid2=GetDlgItem(hwnd,IDC_BABYGRID2);

	//Set the heading font
	HFONT hFont=CreateFont(20,0,0, 0,FW_EXTRABOLD,FALSE,FALSE,FALSE,
			ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,
			PROOF_QUALITY,VARIABLE_PITCH|FF_MODERN ,"ARIEL");
	BabyGrid_SetHeadingFont(hgrid1,hFont);
	BabyGrid_SetHeadingFont(hgrid2,hFont);

	//Set grid2 (the working demonstration grid) to be 100 rows by 5 columns
	BabyGrid_SetGridDim(hgrid2,100,5);

	//set grid1 (the properties grid) to automatically size columns 
	//based on the length of the text entered into the cells
	BabyGrid_SetColAutoWidth(hgrid1,TRUE);
	//only want 2 columns, rows will be added as data is entered programmatically
	BabyGrid_SetGridDim(hgrid1,0,2);
	//I don't want a row header, so make it 0 pixels wide
	BabyGrid_SetColWidth(hgrid1,0,0);
	//this grid won't use column headings, set header row height = 0
	BabyGrid_SetHeaderRowHeight(hgrid1,0);
	//populate grid1 with data
	LoadGrid1(hgrid1);
	//populate grid2 with initial demo data
	LoadGrid2(hgrid2);
	//make grid2 header row to initial height of 21 pixels
	BabyGrid_SetHeaderRowHeight(hgrid2,21);
	return TRUE;
}

void Main_OnSize(HWND hwnd, UINT state, int cx, int cy)
{
	RECT rect;
	GetClientRect(hwnd,&rect);
	MoveWindow(hgrid1,0,0,rect.right/3,rect.bottom,FALSE);
	MoveWindow(hgrid2,rect.right/3,0,rect.right-rect.right/3,rect.bottom,FALSE);
	BabyGrid_Refresh(hwnd);
}

/****************************************************************************
 *                                                                          *
 * Function: MainDlgProc                                                    *
 *                                                                          *
 * Purpose : Process messages for the Main dialog.                          *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

BOOL CALLBACK Main_DlgProc (HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch(msg)
	{
	HANDLE_MSG (hwndDlg, WM_CLOSE, Main_OnClose);
	HANDLE_MSG (hwndDlg, WM_COMMAND, Main_OnCommand);
	HANDLE_MSG (hwndDlg, WM_INITDIALOG, Main_OnInitDialog);
	HANDLE_MSG (hwndDlg, WM_SIZE, Main_OnSize);

	default: return FALSE;
	}
}

/****************************************************************************
 *                                                                          *
 * Function: WinMain                                                        *
 *                                                                          *
 * Purpose : Initialize the application.  Register a window class,          *
 *           create and display the main window and enter the               *
 *           message loop.                                                  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    WNDCLASSEX wcx;
    
    ghInstance = hInstance;

    // Initialize common controls. Also needed for MANIFEST's.
    InitCommonControls();

    // Load Rich Edit control support.
    // TODO: uncomment one of the lines below, if you are using a Rich Edit control.
    // LoadLibrary(_T("riched32.dll"));  // Rich Edit v1.0
    // LoadLibrary(_T("riched20.dll"));  // Rich Edit v2.0, v3.0

	// Initialize Baby Grid
    RegisterGridClass(hInstance); //initializes BABYGRID control
                                  //only call this function once in your program 

    // Get system dialog information.
    wcx.cbSize = sizeof(wcx);
    if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
        return 0;

    // Add our own stuff.
    wcx.hInstance = hInstance;
    wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
	wcx.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_SMALL));
	wcx.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
    wcx.lpszClassName = _T("BbyGrdDlgDmo");
    if (!RegisterClassEx(&wcx))
        return 0;


    // The user interface is a modal dialog box.
    return DialogBox(hInstance, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)Main_DlgProc);
}



