/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Generic dialog based Win32 application.                        *
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
#include <stdio.h>
#include "excelFile.h"
#include "main.h"

/** Prototypes **************************************************************/

static LRESULT CALLBACK MainDlgProc(HWND, UINT, WPARAM, LPARAM);

/** Global variables ********************************************************/

static HANDLE ghInstance;

/** Functions ***************************************************************/

void FormMain_OnClose(HWND hwnd)
{
	PostQuitMessage(0);// turn off message loop
	EndDialog(hwnd, 0);
}

void cmdCreate_Click (HWND hwnd)
{
	char buf [MAX_PATH];
	char FileName [MAX_PATH];
	EXCELLFILE ExcelFile;

	New_ExcellFile(&ExcelFile);

	__try 
	{
		//create spreadsheet in the current directory
		strcpy(FileName,".\\cTest.xls");
		
		//Create the new spreadsheet
		if(!ExcelFile.CreateExcelFile(FileName))
		{
			sprintf(buf,"Unable to open file.\r\nFilename: %s",FileName);
			MessageBox( NULL, buf, "Error",
				MB_OK | MB_ICONERROR | MB_TOPMOST);
			return;
		}

		//set a Password for the file. If set, the rest of the spreadsheet will
		//be encrypted. If a password is used it must immediately follow the
		//CreateExcellFile method.
		//This is different then protecting the spreadsheet (see below).

		//Paul Squires note follows:
		//NOTE: For some reason this function does not work. Excel will
		//recognize that the file is password protected, but entering the password
		//will not work. Also, the file is not encrypted. Therefore, do not use
		//this function until I can figure out why it doesn't work. There is not
		//much documentation on this function available.

		//ExcelFile.SetFilePassword("PAUL");

		//specify whether to print the gridlines or not
		//this should come before the setting of fonts and margins
		ExcelFile.SetPrintGridLines(FALSE);

		//it is a good idea to set margins, fonts and column widths
		//prior to writing any text/numerics to the spreadsheet. These
		//should come before setting the fonts.
		ExcelFile.SetMargin(ExcelFile.marginTypes.xlsTopMargin, 1.5);
		//set to 1.5 inches
		ExcelFile.SetMargin(ExcelFile.marginTypes.xlsLeftMargin, 1.5);
		ExcelFile.SetMargin(ExcelFile.marginTypes.xlsRightMargin, 1.5);
		ExcelFile.SetMargin(ExcelFile.marginTypes.xlsBottomMargin, 1.5);
		//to insert a Horizontal Page Break you need to specify the row just
		//after where you want the page break to occur. You can insert as many
		//page breaks as you wish (in any order).
		ExcelFile.InsertHorizPageBreak(10);
		ExcelFile.InsertHorizPageBreak(20);
		//set a default row height for the entire spreadsheet (1/20th of a point)
		ExcelFile.SetDefaultRowHeight(14);
		//Up to 4 fonts can be specified for the spreadsheet. This is a
		//limitation of the Excel 2.1 format. For each value written to the
		//spreadsheet you can specify which font to use.
		ExcelFile.SetFont("Arial", 10, ExcelFile.fontFormatting.xlsNoFormat);
		//font0
		ExcelFile.SetFont("Arial", 10, ExcelFile.fontFormatting.xlsBold);
		//font1
		ExcelFile.SetFont("Arial", 10, ExcelFile.fontFormatting.xlsBold | ExcelFile.fontFormatting.xlsUnderline);
		//font2
		ExcelFile.SetFont("Courier", 16, ExcelFile.fontFormatting.xlsBold | ExcelFile.fontFormatting.xlsItalic);
		//font3
		//Column widths are specified in Excel as 1/256th of a character.
		int j = 8;
		for(int i = 1; i <= 25; i++)
		{
			//If i Mod 5 = 0 Then j += 8
			ExcelFile.SetColumnWidth((BYTE)i, (BYTE)i, (short)j);
			j += 2;
		}
		
		//Set special row heights for row 1 and 2
		//NOTE: if Row height is changed the text may be
		//  invisible until spreadsheet saved and reopened --DWM
		ExcelFile.SetRowHeight(1, 30);
		ExcelFile.SetRowHeight(2, 30);

		//set any header or footer that you want to print on
		//every page. This text will be centered at the top and/or
		//bottom of each page. The font will always be the font that
		//is specified as font0, therefore you should only set the
		//header/footer after specifying the fonts through SetFont.
		ExcelFile.SetHeader("BIFF 2.1 API");
		ExcelFile.SetFooter("Paul Squires - Excel BIFF Class");

		//write a normal left aligned string using font3 (Courier Italic)
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont3, ExcelFile.cellAlignment.xlsLeftAlign, ExcelFile.cellHiddenLocked.xlsNormal, 1, 1, "Quarterly Report");
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont1, ExcelFile.cellAlignment.xlsLeftAlign, ExcelFile.cellHiddenLocked.xlsNormal, 2, 1, "Cool Guy Corporation");
		//write some data to the spreadsheet

		//Use the default format #3 "#,##0" (refer to the WriteDefaultFormats function)
		//The WriteDefaultFormats function is compliments of Dieter Hauk in Germany.
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsInteger, ExcelFile.cellFont.xlsFont0, ExcelFile.cellAlignment.xlsLeftAlign, ExcelFile.cellHiddenLocked.xlsNormal, 6, 1, "2000", 3);
		//write a cell with a shaded number with a bottom border
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsNumber, ExcelFile.cellFont.xlsFont1, ExcelFile.cellAlignment.xlsRightAlign | ExcelFile.cellAlignment.xlsBottomBorder | ExcelFile.cellAlignment.xlsShaded, ExcelFile.cellHiddenLocked.xlsNormal, 7, 1, "12123.456", 4);
		//write a normal left aligned string using font2 (bold & underline)
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont2, ExcelFile.cellAlignment.xlsLeftAlign, ExcelFile.cellHiddenLocked.xlsNormal, 8, 1, "This is a test string");
		//write a locked cell. The cell will not be able to be overwritten, BUT you
		//must set the sheet PROTECTION to on before it will take effect!!!
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont3, ExcelFile.cellAlignment.xlsLeftAlign, ExcelFile.cellHiddenLocked.xlsLocked, 9, 1, "This cell is locked");
		//fill the cell with "F"'s
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont0, ExcelFile.cellAlignment.xlsFillCell, ExcelFile.cellHiddenLocked.xlsNormal, 10, 1, "F");
		//write a hidden cell to the spreadsheet. This only works for cells
		//that contain formulae. Text, Number, Integer value text can not be hidden
		//using this feature. It is included here for the sake of completeness.
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont0, ExcelFile.cellAlignment.xlsCentreAlign, ExcelFile.cellHiddenLocked.xlsHidden, 11, 1, "If this were a formula it would be hidden!");

		//write some dates to the file. NOTE: you need to write dates as xlsText
		//NOTE: Formatting will not display until cell is double clicked (refreshed) in excel
		// however this does set the cells format even though initially it doesn't display in that format -- DWM
		strcpy(buf,"01/15/2001");
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont0, ExcelFile.cellAlignment.xlsCentreAlign, ExcelFile.cellHiddenLocked.xlsNormal, 15, 1, buf, 12);
		strcpy(buf,"12/31/1999");
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont0, ExcelFile.cellAlignment.xlsCentreAlign, ExcelFile.cellHiddenLocked.xlsNormal, 16, 1, buf, 13);
		strcpy(buf,"04/01/2002");
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont0, ExcelFile.cellAlignment.xlsCentreAlign, ExcelFile.cellHiddenLocked.xlsNormal, 17, 1, buf, 14);
		strcpy(buf,"10/21/1998");
		ExcelFile.WriteValue(ExcelFile.valueTypes.xlsText, ExcelFile.cellFont.xlsFont0, ExcelFile.cellAlignment.xlsCentreAlign, ExcelFile.cellHiddenLocked.xlsNormal, 18, 1, buf, 15);

		//PROTECT the spreadsheet so any cells specified as LOCKED will not be
		//overwritten. Also, all cells with HIDDEN set will hide their formulae.
		//PROTECT does not use a password.
		ExcelFile.SetProtectSpreadsheet(TRUE);

		//Finally, close the spreadsheet
		ExcelFile.CloseExcelFile();

		sprintf(buf,"Excel BIFF Spreadsheet created.\r\nFilename: %s",FileName);
		MessageBox( NULL, buf, "Excel Class",
			MB_OK | MB_ICONINFORMATION | MB_TOPMOST);
	}
	__except (EXCEPTION_EXECUTE_HANDLER) 
	{
		MessageBox( NULL, "cmdCreate_Click()\n", "Error",
			MB_OK | MB_ICONERROR | MB_TOPMOST);
	}
}

void cmdCancel_Click (HWND hwnd)
{
	FormMain_OnClose(hwnd);
}

void FormMain_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
{
	switch (id)
	{
		case IDC_CREATE:
			cmdCreate_Click (hwnd);
		break;
		case IDC_CANCEL:
			cmdCancel_Click (hwnd);
		break;
		default: break;
	}
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

BOOL CALLBACK FormMain_DlgProc (HWND hwndDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch(msg)
	{
		HANDLE_MSG (hwndDlg, WM_CLOSE, FormMain_OnClose);
		HANDLE_MSG (hwndDlg, WM_COMMAND, FormMain_OnCommand);
		
		//// TODO: Add dialog message crackers here...

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

    // Get system dialog information.
    wcx.cbSize = sizeof(wcx);
    if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
        return 0;

    // Add our own stuff.
    wcx.hInstance = hInstance;
    wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_ICO_MAIN));
    wcx.lpszClassName = _T("MakeExceClass");
    if (!RegisterClassEx(&wcx))
        return 0;

    // The user interface is a modal dialog box.
    return DialogBox(hInstance, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)FormMain_DlgProc);
}
