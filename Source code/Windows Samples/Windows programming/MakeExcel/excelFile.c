/****************************************************************************
 *                                                                          *
 * File    : excelFile.c													*
 *                                                                          *
 * Purpose : Class file for writing Microsoft Excel BIFF 2.1 files.			*
 *			 This class is intended for users who do not want to use the	*
 *			 huge Jet or ADO providers if they only want to export their	*
 *			 data to an Excel compatible file.								*
 *			 Newer versions of Excel use the OLE Structure Storage methods	*
 *			 which are quite complicated.									*
 *                                                                          *
 * History : Date      Reason                                               *
 *           07/10/01  VB source released: Paul Squires						*
 *										   rambo2000@canada.com				*
 *			 01/08/01  Added default-cellformats: Dieter Hauk				*
 *												  dieter.hauk@epost.de		*
 *			 07/09/01  Added default row height: Matthew Brewster			*
 *																			*
 *			 07/25/06  Converted Vb to Pelles C: David MacDermot			*                                                                           *
 ****************************************************************************/

#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <tchar.h>
#include <stdio.h>
#include "excelFile.h"

/** Macroes *****************************************************************/

#define ubound(T)(sizeof((T))/sizeof((T[0]))-1)

/** Global variables ********************************************************/

static BEG_FILE_RECORD BEG_FILE_MARKER;
static END_FILE_RECORD END_FILE_MARKER;
static HPAGE_BREAK_RECORD HORIZ_PAGE_BREAK;

static LPEXCELLFILE this;

/** Methods *****************************************************************/

static BOOL WriteDefaultFormats(void) 
{ 
	FORMAT_COUNT_RECORD cFORMAT_COUNT_RECORD; 
	FORMAT_RECORD cFORMAT_RECORD; 
	LPSTR aFormat[]={"General", //0 
					 "0",  //1
					 "0.00", //2
					 "#,##0", //3
					 "#,##0.00", //4
					 "#,##0\\ \"$\";\\-#,##0\\ \"$\"", //5
					 "#,##0\\ \"$\";[Red]\\-#,##0\\ \"$\"", //6
					 "#,##0.00\\ \"$\";\\-#,##0.00\\ \"$\"", //7
					 "#,##0.00\\ \"$\";[Red]\\-#,##0.00\\ \"$\"", //8
					 "0%", //9
					 "0.00%", //10
					 "0.00E+00", //11
					 "dd/mm/yy", //12
					 "dd/\\ mmm\\ yy", //13 
					 "dd/\\ mmm", //14
					 "mmm\\ yy", //15
					 "h:mm\\ AM/PM", //16
					 "h:mm:ss\\ AM/PM", //17
					 "hh:mm", //18
					 "hh:mm:ss", //19
					 "dd/mm/yy\\ hh:mm", //20
					 "##0.0E+0", //21
					 "mm:ss", //22
					 "@"}; //23
	cFORMAT_COUNT_RECORD.opcode = 31; 
	cFORMAT_COUNT_RECORD.length = 2; 
	cFORMAT_COUNT_RECORD.count = (short)ubound(aFormat);

	//opcode must always be written first
	if(1 != fwrite(&cFORMAT_COUNT_RECORD.opcode,
			sizeof(cFORMAT_COUNT_RECORD.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&cFORMAT_COUNT_RECORD.length,
			sizeof(cFORMAT_COUNT_RECORD.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&cFORMAT_COUNT_RECORD.count,
			sizeof(cFORMAT_COUNT_RECORD.count),1,this->pFile))
				return FALSE;

	for (int idx = 0; idx <= ubound(aFormat); idx++) 
	{ 
		cFORMAT_RECORD.opcode = 30; 
		cFORMAT_RECORD.length = (short)strlen(aFormat[idx]) + 1; 
		cFORMAT_RECORD.formatLength = (BYTE)strlen(aFormat[idx]); 

		if(1 != fwrite(&cFORMAT_RECORD.opcode,
				sizeof(cFORMAT_RECORD.opcode),1,this->pFile))
					return FALSE;
		if(1 != fwrite(&cFORMAT_RECORD.length,
				sizeof(cFORMAT_RECORD.length),1,this->pFile))
					return FALSE;
		if(1 != fwrite(&cFORMAT_RECORD.formatLength,
				sizeof(cFORMAT_RECORD.formatLength),1,this->pFile))
					return FALSE;

		//Then the actual format
		if(1 !=fwrite(aFormat[idx], strlen(aFormat[idx]),1,this->pFile))
				return FALSE;
	}
	return TRUE; 
}

static BOOL CreateExcelFile(LPSTR fileName)
{
	if((this->pFile = fopen(fileName,"wb")) != NULL) 
	{
		//opcode must always be written first
		if(1 != fwrite(&BEG_FILE_MARKER.opcode,
				sizeof(BEG_FILE_MARKER.opcode),1,this->pFile))
					return FALSE;
		if(1 != fwrite(&BEG_FILE_MARKER.length,
				sizeof(BEG_FILE_MARKER.length),1,this->pFile))
					return FALSE;
		if(1 != fwrite(&BEG_FILE_MARKER.version,
				sizeof(BEG_FILE_MARKER.version),1,this->pFile))
					return FALSE;
		if(1 != fwrite(&BEG_FILE_MARKER.ftype,
				sizeof(BEG_FILE_MARKER.ftype),1,this->pFile))
					return FALSE;

		WriteDefaultFormats();

		//create the Horizontal Page Break array
		this->horizPageBreakRows = (short*) calloc(1,sizeof(short));
		this->numHorizPageBreaks = 0;

		return TRUE;
	}
	else return FALSE;
}

//The following C-code sorts integers numbers[0]...numbers[count-1]
// in ascending order:
//Modified from original J. Tromp code --DWM
void heapSort(short numbers[], short count)
{
    for (short temp,k,j,i=count/2;count>1;numbers[j-1]=temp)
	{ 
        if (i) temp = numbers[--i];
		else(temp=numbers[--count],numbers[count]=numbers[0]); 
        for (j=i+1;(k=j*2)<=count;numbers[j-1]=numbers[k-1],j=k)
		{ 
            if (k<count&&numbers[k-1]<numbers[k]) k++; 
            if (numbers[k-1]<=temp) break; 
        } 
    } 
} 

static BOOL CloseExcelFile(void)
{
	if (this->pFile == NULL) return FALSE;

	//write the horizontal page breaks if necessary
	if (this->numHorizPageBreaks > 0)
	{
		//the Horizontal Page Break array must be in sorted order.
		heapSort(this->horizPageBreakRows, this->numHorizPageBreaks);

		//write the Horizontal Page Break Record
		HORIZ_PAGE_BREAK.opcode = 27;
		HORIZ_PAGE_BREAK.length = (short) 2 + (this->numHorizPageBreaks * 2);
		HORIZ_PAGE_BREAK.numPageBreaks = this->numHorizPageBreaks;

		if(1 != fwrite(&HORIZ_PAGE_BREAK.opcode,
				sizeof(HORIZ_PAGE_BREAK.opcode),1,this->pFile))
					return FALSE;
		if(1 != fwrite(&HORIZ_PAGE_BREAK.length,
				sizeof(HORIZ_PAGE_BREAK.length),1,this->pFile))
					return FALSE;
		if(1 != fwrite(&HORIZ_PAGE_BREAK.numPageBreaks,
				sizeof(HORIZ_PAGE_BREAK.numPageBreaks),1,this->pFile))
					return FALSE;

		for(int idx = 1; idx <= this->numHorizPageBreaks; idx++)
		{
			if(1 != fwrite(&this->horizPageBreakRows[idx],
					sizeof(this->horizPageBreakRows[idx]),1,this->pFile))
						return FALSE;
		}
	}
	if(1 != fwrite(&END_FILE_MARKER.opcode,
			sizeof(END_FILE_MARKER.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&END_FILE_MARKER.length,
			sizeof(END_FILE_MARKER.length),1,this->pFile))
				return FALSE;

	//Free Allocated array
	free(this->horizPageBreakRows);

	//Closes FileStream
	if(0 != fclose(this->pFile)) return FALSE;

	return TRUE;
}

static void InsertHorizPageBreak(int lrow)
{
	short row;
		//the row and column values are written to the excel file as
		//unsigned shorts. Therefore, must convert the integers to short.
		if (lrow > 32767)
		{
			row = (short)lrow - 65536;
		}
		else
		{
			//rows/cols in Excel binary file are zero based
			row = (short)lrow - 1;
		}

		this->numHorizPageBreaks++;
		//ReAllocate HorizPageBreakRows to hold the additional breaks
		this->horizPageBreakRows = (short*)realloc(this->horizPageBreakRows,
			this->numHorizPageBreaks+1 * sizeof(short));
		this->horizPageBreakRows[this->numHorizPageBreaks]=row;
}

// Overloaded optional arg CellFormat
static BOOL WriteValue(ValueTypes, CellFont, CellAlignment, CellHiddenLocked, int, int, LPSTR, int = 0);

static BOOL WriteValue(ValueTypes ValueType, CellFont CellFontUsed, CellAlignment Alignment, CellHiddenLocked HiddenLocked, int lrow, int lcol, LPSTR Value, int CellFormat)
{
	short col;
	short row;

	//the row and column values are written to the excel file as
	//unsigned shorts. Therefore, must convert the integers to short.
	if (lrow > 32767)
	{
		row = (short) lrow - 65536;
	}
	else
	{
		//rows/cols in Excel binary file are zero based
		row = (short) lrow - 1;
	}
	if (lcol > 32767)
	{
		col = (short) lcol - 65536;
	}
	else
	{
		//rows/cols in Excel binary file are zero based
		col = (short) lcol - 1;
	}
	tInteger INTEGER_RECORD;
	tNumber NUMBER_RECORD;
	tText TEXT_RECORD;
	switch (ValueType) 
	{
		case xlsInteger:
		
			INTEGER_RECORD.opcode = 2;
			INTEGER_RECORD.length = 9;
			INTEGER_RECORD.row = row;
			INTEGER_RECORD.col = col;
			INTEGER_RECORD.rgbAttr1 = (BYTE) HiddenLocked;
			INTEGER_RECORD.rgbAttr2 = (BYTE) CellFontUsed + CellFormat;
			INTEGER_RECORD.rgbAttr3 = (BYTE) Alignment;
			INTEGER_RECORD.intValue = (short) atoi(Value);

			if(1 != fwrite(&INTEGER_RECORD.opcode,
					sizeof(INTEGER_RECORD.opcode),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&INTEGER_RECORD.length,
					sizeof(INTEGER_RECORD.length),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&INTEGER_RECORD.row,
					sizeof(INTEGER_RECORD.row),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&INTEGER_RECORD.col,
					sizeof(INTEGER_RECORD.col),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&INTEGER_RECORD.rgbAttr1,
					sizeof(INTEGER_RECORD.rgbAttr1),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&INTEGER_RECORD.rgbAttr2,
					sizeof(INTEGER_RECORD.rgbAttr2),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&INTEGER_RECORD.rgbAttr3,
					sizeof(INTEGER_RECORD.rgbAttr3),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&INTEGER_RECORD.intValue,
					sizeof(INTEGER_RECORD.intValue),1,this->pFile))
						return FALSE;
		break;

		case xlsNumber:
			
			NUMBER_RECORD.opcode = 3;
			NUMBER_RECORD.length = 15;
			NUMBER_RECORD.row = row;
			NUMBER_RECORD.col = col;
			NUMBER_RECORD.rgbAttr1 = (BYTE) HiddenLocked;
			NUMBER_RECORD.rgbAttr2 = (BYTE) CellFontUsed + CellFormat;
			NUMBER_RECORD.rgbAttr3 = (BYTE) Alignment;
			NUMBER_RECORD.numberValue = atof(Value);

			if(1 != fwrite(&NUMBER_RECORD.opcode,
					sizeof(NUMBER_RECORD.opcode),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&NUMBER_RECORD.length,
					sizeof(NUMBER_RECORD.length),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&NUMBER_RECORD.row,
					sizeof(NUMBER_RECORD.row),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&NUMBER_RECORD.col,
					sizeof(NUMBER_RECORD.col),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&NUMBER_RECORD.rgbAttr1,
					sizeof(NUMBER_RECORD.rgbAttr1),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&NUMBER_RECORD.rgbAttr2,
					sizeof(NUMBER_RECORD.rgbAttr2),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&NUMBER_RECORD.rgbAttr3,
					sizeof(NUMBER_RECORD.rgbAttr3),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&NUMBER_RECORD.numberValue,
					sizeof(NUMBER_RECORD.numberValue),1,this->pFile))
						return FALSE;
		break;

		case xlsText:
			
			TEXT_RECORD.opcode = 4;
			TEXT_RECORD.length = 10;
			//Length of the text portion of the record
			TEXT_RECORD.textLength = (BYTE) strlen(Value);
			//Total length of the record
			TEXT_RECORD.length = (short) 8 + strlen(Value);
			TEXT_RECORD.row = row;
			TEXT_RECORD.col = col;
			TEXT_RECORD.rgbAttr1 = (BYTE) HiddenLocked;
			TEXT_RECORD.rgbAttr2 = (BYTE) CellFontUsed + CellFormat;
			TEXT_RECORD.rgbAttr3 = (BYTE) Alignment;

			//Put record header
			if(1 != fwrite(&TEXT_RECORD.opcode,
					sizeof(TEXT_RECORD.opcode),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&TEXT_RECORD.length,
					sizeof(TEXT_RECORD.length),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&TEXT_RECORD.row,
					sizeof(TEXT_RECORD.row),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&TEXT_RECORD.col,
					sizeof(TEXT_RECORD.col),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&TEXT_RECORD.rgbAttr1,
					sizeof(TEXT_RECORD.rgbAttr1),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&TEXT_RECORD.rgbAttr2,
					sizeof(TEXT_RECORD.rgbAttr2),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&TEXT_RECORD.rgbAttr3,
					sizeof(TEXT_RECORD.rgbAttr3),1,this->pFile))
						return FALSE;
			if(1 != fwrite(&TEXT_RECORD.textLength,
					sizeof(TEXT_RECORD.textLength),1,this->pFile))
						return FALSE;

			//Then the actual string data
			if(1 !=fwrite(Value, strlen(Value),1,this->pFile))
					return FALSE;
		break;

		default: return FALSE;

	}// switch
	return TRUE;
}

static BOOL SetMargin(MarginTypes Margin, double MarginValue)
{
	//write the spreadsheet's layout information (in inches)
	MARGIN_RECORD_LAYOUT MARGIN_RECORD;

	MARGIN_RECORD.opcode = (short)Margin;
	MARGIN_RECORD.length = 8;
	//in inches
	MARGIN_RECORD.marginValue = MarginValue;

	if(1 != fwrite(&MARGIN_RECORD.opcode,
			sizeof(MARGIN_RECORD.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&MARGIN_RECORD.length,
			sizeof(MARGIN_RECORD.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&MARGIN_RECORD.marginValue,
			sizeof(MARGIN_RECORD.marginValue),1,this->pFile))
				return FALSE;

	return TRUE;
}

static BOOL SetColumnWidth(BYTE FirstColumn, BYTE LastColumn, short WidthValue)
{
	COLWIDTH_RECORD COLWIDTH;
	int intWidth = WidthValue * 256;
	
	COLWIDTH.opcode = 36;
	COLWIDTH.length = 4;
	COLWIDTH.col1 = (BYTE)FirstColumn - 1;
	COLWIDTH.col2 = (BYTE)LastColumn - 1;
	if (intWidth > 32767) intWidth = 32767; 
	//Make sure that value doesn't exceed short
	//values are specified as 1/256 of a character
	COLWIDTH.columnWidth = (short)intWidth;

	if(1 != fwrite(&COLWIDTH.opcode,
			sizeof(COLWIDTH.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&COLWIDTH.length,
			sizeof(COLWIDTH.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&COLWIDTH.col1,
			sizeof(COLWIDTH.col1),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&COLWIDTH.col2,
			sizeof(COLWIDTH.col2),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&COLWIDTH.columnWidth,
			sizeof(COLWIDTH.columnWidth),1,this->pFile))
				return FALSE;

	return TRUE;
}

static BOOL SetFont(LPSTR FontName, short FontHeight, FontFormatting FontFormat)
{
	//you can set up to 4 fonts in the spreadsheet file. When writing a value such
	//as a Text or Number you can specify one of the 4 fonts (numbered 0 to 3)
	FONT_RECORD FONTNAME_RECORD;
	
	FONTNAME_RECORD.opcode = 49;
	FONTNAME_RECORD.length = (short) 5 + strlen(FontName);
	FONTNAME_RECORD.fontHeight = (short) FontHeight * 20;
	FONTNAME_RECORD.fontAttributes1 = (BYTE)FontFormat;
	//bold/underline etc...
	FONTNAME_RECORD.fontAttributes2 = (BYTE)0;
	//reserved-always zero!!
	FONTNAME_RECORD.fontNameLength = (BYTE)strlen(FontName);

	if(1 != fwrite(&FONTNAME_RECORD.opcode,
			sizeof(FONTNAME_RECORD.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&FONTNAME_RECORD.length,
			sizeof(FONTNAME_RECORD.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&FONTNAME_RECORD.fontHeight,
			sizeof(FONTNAME_RECORD.fontHeight),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&FONTNAME_RECORD.fontAttributes1,
			sizeof(FONTNAME_RECORD.fontAttributes1),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&FONTNAME_RECORD.fontAttributes2,
			sizeof(FONTNAME_RECORD.fontAttributes2),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&FONTNAME_RECORD.fontNameLength,
			sizeof(FONTNAME_RECORD.fontNameLength),1,this->pFile))
				return FALSE;

	//Then the actual font name data
	if(1 !=fwrite(FontName, strlen(FontName),1,this->pFile))
			return FALSE;

	return TRUE;
}

static BOOL SetHeader(LPSTR HeaderText)
{
	HEADER_FOOTER_RECORD HEADER_RECORD;
	
	HEADER_RECORD.opcode = 20;
	HEADER_RECORD.length = (short) 1 + strlen(HeaderText);
	HEADER_RECORD.textLength = (BYTE)strlen(HeaderText);

	if(1 != fwrite(&HEADER_RECORD.opcode,
			sizeof(HEADER_RECORD.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&HEADER_RECORD.length,
			sizeof(HEADER_RECORD.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&HEADER_RECORD.textLength,
			sizeof(HEADER_RECORD.textLength),1,this->pFile))
				return FALSE;

	//Then the actual Header text
	if(1 !=fwrite(HeaderText, strlen(HeaderText),1,this->pFile))
			return FALSE;

	return TRUE;
}

static BOOL SetFooter(LPSTR FooterText)
{
	HEADER_FOOTER_RECORD FOOTER_RECORD;
	
	FOOTER_RECORD.opcode = 21;
	FOOTER_RECORD.length = (short) 1 + strlen(FooterText);
	FOOTER_RECORD.textLength = (BYTE)strlen(FooterText);

	if(1 != fwrite(&FOOTER_RECORD.opcode,
			sizeof(FOOTER_RECORD.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&FOOTER_RECORD.length,
			sizeof(FOOTER_RECORD.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&FOOTER_RECORD.textLength,
			sizeof(FOOTER_RECORD.textLength),1,this->pFile))
				return FALSE;

	//Then the actual Header text
	if(1 !=fwrite(FooterText, strlen(FooterText),1,this->pFile))
			return FALSE;

	return TRUE;
}

static BOOL SetFilePassword(LPSTR PasswordText)
{
	PASSWORD_RECORD FILE_PASSWORD_RECORD;
	
	FILE_PASSWORD_RECORD.opcode = 47;
	FILE_PASSWORD_RECORD.length = (short)strlen(PasswordText);

	if(1 != fwrite(&FILE_PASSWORD_RECORD.opcode,
			sizeof(FILE_PASSWORD_RECORD.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&FILE_PASSWORD_RECORD.length,
			sizeof(FILE_PASSWORD_RECORD.length),1,this->pFile))
				return FALSE;

	//Then the actual Password text
	if(1 !=fwrite(PasswordText, strlen(PasswordText),1,this->pFile))
			return FALSE;

	return TRUE;
}

static BOOL SetPrintGridLines(BOOL fSet)
{
	PRINT_GRIDLINES_RECORD print_gridlines_record1;
	print_gridlines_record1.opcode = 43;
	print_gridlines_record1.length = 2;
	if (fSet)
	{
		print_gridlines_record1.printFlag = 1;
	}
	else
	{
		print_gridlines_record1.printFlag = 0;
	}
	if(1 != fwrite(&print_gridlines_record1.opcode,
			sizeof(print_gridlines_record1.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&print_gridlines_record1.length,
			sizeof(print_gridlines_record1.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&print_gridlines_record1.printFlag,
			sizeof(print_gridlines_record1.printFlag),1,this->pFile))
				return FALSE;

	return TRUE;
}

static BOOL SetProtectSpreadsheet(BOOL fSet)
{
	PROTECT_SPREADSHEET_RECORD PROTECT_RECORD;
	PROTECT_RECORD.opcode = 18;
	PROTECT_RECORD.length = 2;
	if (fSet)
	{
		PROTECT_RECORD.protect = 1;
	}
	else
	{
		PROTECT_RECORD.protect = 0;
	}
	if(1 != fwrite(&PROTECT_RECORD.opcode,
			sizeof(PROTECT_RECORD.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&PROTECT_RECORD.length,
			sizeof(PROTECT_RECORD.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&PROTECT_RECORD.protect,
			sizeof(PROTECT_RECORD.protect),1,this->pFile))
				return FALSE;

	return TRUE;
}

static BOOL SetDefaultRowHeight(short HeightValue)
{
	//Height is defined in units of 1/20th of a point. Therefore, a 10-point font
	//would be 200 (i.e. 200/20 = 10). This function takes a HeightValue such as
	//14 point and converts it the correct size before writing it to the file.
	DEF_ROWHEIGHT_RECORD DEFHEIGHT;
	
	DEFHEIGHT.opcode = 37;
	DEFHEIGHT.length = 2;
	//convert points to 1/20ths of point
	DEFHEIGHT.rowHeight = (short)HeightValue * 20;

	if(1 != fwrite(&DEFHEIGHT.opcode,
			sizeof(DEFHEIGHT.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&DEFHEIGHT.length,
			sizeof(DEFHEIGHT.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&DEFHEIGHT.rowHeight,
			sizeof(DEFHEIGHT.rowHeight),1,this->pFile))
				return FALSE;

	return TRUE;
}

static BOOL SetRowHeight(int lrow, short HeightValue)
{
	short row;
	//the row and column values are written to the excel file as
	//unsigned integers. Therefore, must convert the longs to integer.
	if (lrow > 32767)
	{
		row = (short)lrow - 65536;
	}
	else
	{
		//rows/cols in Excel binary file are zero based
		row = (short)lrow - 1;
	}
	//Height is defined in units of 1/20th of a point. Therefore, a 10-point font
	//would be 200 (i.e. 200/20 = 10). This function takes a HeightValue such as
	//14 point and converts it the correct size before writing it to the file.
	ROW_HEIGHT_RECORD ROWHEIGHTREC;
	
	ROWHEIGHTREC.opcode = 8;
	ROWHEIGHTREC.length = 16;
	ROWHEIGHTREC.rowNumber = row;
	ROWHEIGHTREC.firstColumn = 0;
	ROWHEIGHTREC.lastColumn = 256;
	ROWHEIGHTREC.rowHeight = (short)HeightValue * 20;
	//convert points to 1/20ths of point
	ROWHEIGHTREC.internal = 0;
	ROWHEIGHTREC.defaultAttributes = 0;
	ROWHEIGHTREC.fileOffset = 0;
	ROWHEIGHTREC.rgbAttr1 = 0;
	ROWHEIGHTREC.rgbAttr2 = 0;
	ROWHEIGHTREC.rgbAttr3 = 0;

	if(1 != fwrite(&ROWHEIGHTREC.opcode,
			sizeof(ROWHEIGHTREC.opcode),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.length,
			sizeof(ROWHEIGHTREC.length),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.rowNumber,
			sizeof(ROWHEIGHTREC.rowNumber),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.firstColumn,
			sizeof(ROWHEIGHTREC.firstColumn),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.lastColumn,
			sizeof(ROWHEIGHTREC.lastColumn),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.rowHeight,
			sizeof(ROWHEIGHTREC.rowHeight),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.internal,
			sizeof(ROWHEIGHTREC.internal),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.defaultAttributes,
			sizeof(ROWHEIGHTREC.defaultAttributes),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.fileOffset,
			sizeof(ROWHEIGHTREC.fileOffset),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.rgbAttr1,
			sizeof(ROWHEIGHTREC.rgbAttr1),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.rgbAttr2,
			sizeof(ROWHEIGHTREC.rgbAttr2),1,this->pFile))
				return FALSE;
	if(1 != fwrite(&ROWHEIGHTREC.rgbAttr3,
			sizeof(ROWHEIGHTREC.rgbAttr3),1,this->pFile))
				return FALSE;

	return TRUE;
}

void Select_ExcellFile(LPEXCELLFILE exfile)
{
	this=exfile;
}

void New_ExcellFile(LPEXCELLFILE exfile)
{
	this=exfile;

	// Load enumerated values into structs
	this->valueTypes.xlsText=xlsText;
	this->valueTypes.xlsInteger=xlsInteger;
	this->valueTypes.xlsNumber=xlsNumber;

	this->cellAlignment.xlsBottomBorder=xlsBottomBorder;
	this->cellAlignment.xlsCentreAlign=xlsCentreAlign;
	this->cellAlignment.xlsFillCell=xlsFillCell;
	this->cellAlignment.xlsGeneralAlign=xlsGeneralAlign;
	this->cellAlignment.xlsLeftAlign=xlsLeftAlign;
	this->cellAlignment.xlsLeftBorder=xlsLeftBorder;
	this->cellAlignment.xlsRightAlign=xlsRightAlign;
	this->cellAlignment.xlsRightBorder=xlsRightBorder;
	this->cellAlignment.xlsShaded=xlsShaded;
	this->cellAlignment.xlsTopBorder=xlsTopBorder;

	this->cellFont.xlsFont0=xlsFont0;
	this->cellFont.xlsFont1=xlsFont1;
	this->cellFont.xlsFont2=xlsFont2;
	this->cellFont.xlsFont3=xlsFont3;

	this->cellHiddenLocked.xlsHidden=xlsHidden;
	this->cellHiddenLocked.xlsLocked=xlsLocked;
	this->cellHiddenLocked.xlsNormal=xlsNormal;

	this->marginTypes.xlsBottomMargin=xlsBottomMargin;
	this->marginTypes.xlsLeftMargin=xlsLeftMargin;
	this->marginTypes.xlsRightMargin=xlsRightMargin;
	this->marginTypes.xlsTopMargin=xlsTopMargin;

	this->fontFormatting.xlsBold=xlsBold;
	this->fontFormatting.xlsItalic=xlsItalic;
	this->fontFormatting.xlsNoFormat=xlsNoFormat;
	this->fontFormatting.xlsStrikeout=xlsStrikeout;
	this->fontFormatting.xlsUnderline=xlsUnderline;

	// Point to internal public functions
	this->CloseExcelFile=&CloseExcelFile;
	this->CreateExcelFile=&CreateExcelFile;
	this->InsertHorizPageBreak=&InsertHorizPageBreak;
	this->SetColumnWidth=&SetColumnWidth;
	this->SetDefaultRowHeight=&SetDefaultRowHeight;
	this->SetFilePassword=&SetFilePassword;
	this->SetFont=&SetFont;
	this->SetFooter=&SetFooter;
	this->SetHeader=&SetHeader;
	this->SetMargin=&SetMargin;
	this->SetPrintGridLines=&SetPrintGridLines;
	this->SetProtectSpreadsheet=&SetProtectSpreadsheet;
	this->SetRowHeight=&SetRowHeight;
	this->WriteValue=&WriteValue;

	//Set up default values for records
	//These should be the values that are the same for every record of these types
	//beginning of file
	BEG_FILE_MARKER.opcode = 9;
	BEG_FILE_MARKER.length = 4;
	BEG_FILE_MARKER.version = 2;
	BEG_FILE_MARKER.ftype = 10;

	//end of file marker
	END_FILE_MARKER.opcode = 10;
	END_FILE_MARKER.length = 0;
}

