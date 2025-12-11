#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include "main.h"

#include "babygrid.h"

/** Prototypes **************************************************************/

static LRESULT WINAPI MainWndProc(HWND, UINT, WPARAM, LPARAM);
static void Main_OnPaint(HWND);
static void Main_OnCommand(HWND, int, HWND, UINT, WPARAM, LPARAM);
static void Main_OnDestroy(HWND);
static LRESULT WINAPI AboutDlgProc(HWND, UINT, WPARAM, LPARAM);


void LoadGrid1(HWND);
void LoadGrid2(HWND);


/** Global variables ********************************************************/

static HANDLE ghInstance;

_BGCELL cell;         // <----------- You'll need to define at least one of these
                                //              to reference the grid cells for entering or
                                //              retreiving data from the grid 
HWND hgrid1,hgrid2;   // <------------ Window handles of the grids you'll create


/****************************************************************************
 *                                                                                               
 * Function: WinMain                                                                   
 *                                                                                                    
 * Purpose : Initialize the application.  Register a window class,        
 *           create and display the main window and enter the              
 *           message loop.       
 *                                         
 ****************************************************************************/

int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
    HWND hwnd;
    MSG msg;

    ghInstance = hInstance;

    // Initialize common controls. Also needed for MANIFEST's.
    InitCommonControls();

    // Register the main window class.
    if (!hPrevInstance)
    {
        WNDCLASS wc;

        wc.lpszClassName = _T("pc_bbgClass");
        wc.lpfnWndProc = MainWndProc;
        wc.style = CS_OWNDC|CS_VREDRAW|CS_HREDRAW;
        wc.hInstance = ghInstance;
        wc.hIcon = LoadIcon(ghInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
        wc.hCursor = LoadCursor(NULL, IDC_ARROW);
        wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
        wc.lpszMenuName = MAKEINTRESOURCE(IDR_MNU_MAIN);
        wc.cbClsExtra = 0;
        wc.cbWndExtra = 0;

        if (!RegisterClass(&wc))
            return 1;
    }

    // Create the main window.
    hwnd = CreateWindow(_T("pc_bbgClass"),
        _T("PellesC BabyGrid Demo"),
        WS_OVERLAPPEDWINDOW,
        0, 0, CW_USEDEFAULT,CW_USEDEFAULT,
        NULL, NULL,ghInstance, NULL);
        
    if (!hwnd) return 1;

    // Show and paint the main window.
   //ShowWindow(hwnd, nCmdShow);
    ShowWindow(hwnd,SW_MAXIMIZE	);
    UpdateWindow(hwnd);

    // Pump messages until we are done.
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}

/****************************************************************************
 *                                                                        
 * Function: MainWndProc                                                  
 *                                                                         
 * Purpose : Process application messages.                                 
 *                                                                          
 ****************************************************************************/

static LRESULT CALLBACK MainWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message) 
	{
		case WM_COMMAND:
			wmId    = LOWORD(wParam); 
			wmEvent = HIWORD(wParam); 
			// Parse the menu selections:
			switch (wmId)
			{

                case 500: //properties grid notification that something happened
                    {
                     if(HIWORD(wParam)==BGN_CELLCLICKED) //a cell was clicked in the properties grid
                         {
                          
                          int row,col,dtype;

                          //get the row and column of the clicked cell
                          row=LOWORD(lParam);
                          col=HIWORD(lParam);

                          //set the _BGCELL structure variable (cell) to this row and column
                          SetCell(&cell,row,col);
                          //get the data type that is in the cell
                          //in this instance, we're looking for BOOLEAN data (types 3 [TRUE] or 4 [FALSE])
                          //datatype 1 is alphanumeric data
                          //datatype 2 is numeric data
                          //datatype 3 is BOOLEAN TRUE data
                          //datatype 4 is BOOLEAN FALSE data
                          dtype=SendMessage(hgrid1,BGM_GETTYPE,(UINT)&cell,0);
                          if(dtype == 3) //bool true
                              {
                               //if the grid cell was true (checked checkbox), toggle it false
                               SendMessage(hgrid1,BGM_SETCELLDATA,(UINT)&cell,(long)"FALSE");
                               //send appropriate control message to the grid based
                               //on the row of the cell that was toggled

                               if(row==1)
                                   {
                                    SendMessage(hgrid2,BGM_SETALLOWCOLRESIZE,FALSE,0);
                                   }
                               if(row==2)
                                   {
                                    SendMessage(hgrid2,BGM_SETEDITABLE,FALSE,0);
                                   }
                               if(row==3)
                                   {
                                    SendMessage(hgrid2,BGM_SETELLIPSIS,FALSE,0);
                                   }
                               if(row==4)
                                   {
                                    SendMessage(hgrid2,BGM_SETCOLAUTOWIDTH,FALSE,0);
                                   }
                               if(row==5)
                                   {
                                    SendMessage(hgrid2,BGM_EXTENDLASTCOLUMN,FALSE,0);
                                   }
                               if(row==6)
                                   {
                                    SendMessage(hgrid2,BGM_SETCOLSNUMBERED,FALSE,0);
                                    LoadGrid2(hgrid2);
                                   }
                               if(row==7)
                                   {
                                    SendMessage(hgrid2,BGM_SETROWSNUMBERED,FALSE,0);
                                   }
                               if(row==8)
                                   {
                                    SendMessage(hgrid2,BGM_SHOWHILIGHT,FALSE,0);
                                   }
                               if(row==9)
                                   {
                                    SendMessage(hgrid2,BGM_SETCURSORCOLOR,(UINT)RGB(0,0,0),0);
                                   }
                               if(row==10)
                                   {
                                    SendMessage(hgrid2,BGM_SETGRIDLINECOLOR,(UINT)RGB(255,255,255),0);
                                   }
                              }
                          if(dtype == 4) //bool false
                              {
                               //if the grid cell was false (unchecked checkbox), toggle it true
                               SendMessage(hgrid1,BGM_SETCELLDATA,(UINT)&cell,(long)"TRUE");
                               //send appropriate control message to the grid based
                               //on the row of the cell that was toggled
                               if(row==1)
                                   {
                                    SendMessage(hgrid2,BGM_SETALLOWCOLRESIZE,TRUE,0);
                                   }
                               if(row==2)
                                   {
                                    SendMessage(hgrid2,BGM_SETEDITABLE,TRUE,0);
                                   }
                               if(row==3)
                                   {
                                    SendMessage(hgrid2,BGM_SETELLIPSIS,TRUE,0);
                                   }
                               if(row==4)
                                   {
                                    SendMessage(hgrid2,BGM_SETCOLAUTOWIDTH,TRUE,0);
                                   }
                               if(row==5)
                                   {
                                    SendMessage(hgrid2,BGM_EXTENDLASTCOLUMN,TRUE,0);
                                   }
                               if(row==6)
                                   {
                                    SendMessage(hgrid2,BGM_SETCOLSNUMBERED,TRUE,0);
                                    SendMessage(hgrid2,BGM_SETHEADERROWHEIGHT,21,0);
                                   }
                               if(row==7)
                                   {
                                    SendMessage(hgrid2,BGM_SETROWSNUMBERED,TRUE,0);
                                   }
                               if(row==8)
                                   {
                                    SendMessage(hgrid2,BGM_SHOWHILIGHT,TRUE,0);
                                   }
                               if(row==9)
                                   {
                                    SendMessage(hgrid2,BGM_SETCURSORCOLOR,(UINT)RGB(255,255,255),0);
                                   }
                               if(row==10)
                                   {
                                    SendMessage(hgrid2,BGM_SETGRIDLINECOLOR,(UINT)RGB(220,220,220),0);
                                   }
                              }


                         }


                    }
                    break;

				default:
				   return DefWindowProc(hWnd, message, wParam, lParam);
			}
			break;
		case WM_PAINT:
			hdc = BeginPaint(hWnd, &ps);
			// TODO: Add any drawing code here...
			EndPaint(hWnd, &ps);
			break;
        case WM_SIZE:
            {
              RECT rect;
              GetClientRect(hWnd,&rect);
              MoveWindow(hgrid1,0,0,rect.right/3,rect.bottom,TRUE);
              MoveWindow(hgrid2,rect.right/3,0,rect.right-rect.right/3,rect.bottom,TRUE);
            }
            break;
        case WM_CREATE:
             RegisterGridClass(ghInstance); //initializes BABYGRID control
                                       //only call this function once in your program 

             //create 2 grids for placement on the application main window
             //the 2 grids are placed in the WM_SIZE handler.
             hgrid1=CreateWindowEx(WS_EX_CLIENTEDGE,"BABYGRID","Grid Properties",
                 WS_VISIBLE|WS_CHILD,0,0,0,0,hWnd,(HMENU)500,ghInstance,NULL);
              SendMessage(hgrid1,(UINT)WM_SETFONT,(WPARAM)GetStockObject
                                                             (DEFAULT_GUI_FONT),(LPARAM)MAKELPARAM(FALSE,0));
             hgrid2=CreateWindowEx(WS_EX_CLIENTEDGE,"BABYGRID","BABYGRID -- A simple grid for\nWin32 API Programmers",
                 WS_VISIBLE|WS_CHILD,0,0,0,0,hWnd,(HMENU)501,ghInstance,NULL);
             SendMessage(hgrid2,(UINT)WM_SETFONT,(WPARAM)GetStockObject
                                                             (DEFAULT_GUI_FONT),(LPARAM)MAKELPARAM(FALSE,0));
             //Set grid2 (the working demonstration grid) to be 100 rows by 5 columns
             SendMessage(hgrid2,BGM_SETGRIDDIM,100,5);

             //set grid1 (the properties grid) to automatically size columns 
             //based on the length of the text entered into the cells
             SendMessage(hgrid1,BGM_SETCOLAUTOWIDTH,TRUE,0);
             //only want 2 columns, rows will be added as data is entered programmatically
             SendMessage(hgrid1,BGM_SETGRIDDIM,0,2);
             //I don't want a row header, so make it 0 pixels wide
             SendMessage(hgrid1,BGM_SETCOLWIDTH,0,0);
             //this grid won't use column headings, set header row height = 0
             SendMessage(hgrid1,BGM_SETHEADERROWHEIGHT,0,0);
             //populate grid1 with data
             LoadGrid1(hgrid1);
             //populate grid2 with initial demo data
             LoadGrid2(hgrid2);
             //make grid2 header row to initial height of 21 pixels
             SendMessage(hgrid2,BGM_SETHEADERROWHEIGHT,21,0);
            break;


		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
   }
   return 0;
}




void PutCell(HWND hgrid,int row, int col, char* text)
    {
     //worker function to keep from having to send hundreds of SendMessage() with
     //BGM_SETCELLDATA in the main program.  Just simplifies the main program code
     SetCell(&cell,row,col);
     SendMessage(hgrid,BGM_SETCELLDATA,(UINT)&cell,(long)text);
    }


void LoadGrid2(HWND hgrid)
    {
     //load grid 2 with initial demo data
        PutCell(hgrid,0,1,"Multi-line\nHeadings\nSupported");
        PutCell(hgrid,0,2,"\n\nName");
        PutCell(hgrid,0,3,"\n\nAge");

        SendMessage(hgrid,BGM_SETPROTECT,TRUE,0);
        //every cell entered after a BGM_SETPROTECT TRUE will set the 
        //protected attribute of that cell.  This keeps an editable grid
        //from allowing the user to overwrite whatever is in the protected cell

        SendMessage(hgrid,BGM_SETPROTECTCOLOR,(UINT)RGB(210,210,210),0);
        //the setprotectcolor is optional, but it gives a visual indication
        //of which cells are protected.

        //now put some data in the cells in grid2
        PutCell(hgrid,1,2,"David");
        PutCell(hgrid,2,2,"Maggie");
        PutCell(hgrid,3,2,"Chester");
        PutCell(hgrid,4,2,"Molly");
        PutCell(hgrid,5,2,"Bailey");
                             
        PutCell(hgrid,1,3,"43");
        PutCell(hgrid,2,3,"41");
        PutCell(hgrid,3,3,"3");
        PutCell(hgrid,4,3,"3");
        PutCell(hgrid,5,3,"1");

        PutCell(hgrid,10,5,"Shaded cells are write-protected.");

        SendMessage(hgrid,BGM_SETPROTECT,FALSE,0);
        //turn off automatic cell protection
        //if you don't turn off automatic cell protection, if the 
        //grid is editable, the user can enter data into empty cells
        //but cannot change what he entered... not good.

        PutCell(hgrid,1,0,"Row Headers customizable");

    }

void LoadGrid1(HWND hgrid)
    {
     //load data into the properties grid

     PutCell(hgrid,1,1,"User Column Resizing");
     PutCell(hgrid,1,2,"FALSE");
     PutCell(hgrid,2,1,"User Editable");
     PutCell(hgrid,2,2,"FALSE");
     PutCell(hgrid,3,1,"Show Ellipsis");
     PutCell(hgrid,3,2,"TRUE");
     PutCell(hgrid,4,1,"Auto Column Size");
     PutCell(hgrid,4,2,"FALSE");
     PutCell(hgrid,5,1,"Extend Last Column");
     PutCell(hgrid,5,2,"TRUE");
     PutCell(hgrid,6,1,"Numbered Columns");
     PutCell(hgrid,6,2,"TRUE");
     PutCell(hgrid,7,1,"Numbered Rows");
     PutCell(hgrid,7,2,"TRUE");
     PutCell(hgrid,8,1,"Highlight Row");
     PutCell(hgrid,8,2,"TRUE");
     PutCell(hgrid,9,1,"Show Cursor");
     PutCell(hgrid,9,2,"TRUE");
     PutCell(hgrid,10,1,"Show Gridlines");
     PutCell(hgrid,10,2,"TRUE");

     //make the grid notify the program that the row in the 
     //grid has changed.  Usually this is done by the user clicking
     //a cell, or moving thru the grid with the keyboard.  But we
     //want the grid to initially send this message to get things going.
     //If we didn't call BGM_NOTIFYROWCHANGED, the first row would be 
     //hilighted, but the ACTION wouldn't be performed.

     SendMessage(hgrid,BGM_NOTIFYROWCHANGED,0,0);

     //make the properties grid have the focus when the application starts
     SetFocus(hgrid);

    }

