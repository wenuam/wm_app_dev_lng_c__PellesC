/****************************************************************************
 *                                                                          *
 * File    : excelFile.h													*
 *                                                                          *
 * Purpose : Header file for excelFile class.  A class for writing			*
 *			  Microsoft Excel BIFF 2.1 files.								*
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

/** Enumerations ************************************************************/

//enum to handle the various types of values that can be written
//to the excel file.
typedef enum
{
	xlsInteger = 0,
	xlsNumber = 1,
	xlsText = 2

}  ValueTypes;

//enum to hold cell alignment
typedef enum
{
	xlsGeneralAlign = 0,
	xlsLeftAlign = 1,
	xlsCentreAlign = 2,
	xlsRightAlign = 3,
	xlsFillCell = 4,
	xlsLeftBorder = 8,
	xlsRightBorder = 16,
	xlsTopBorder = 32,
	xlsBottomBorder = 64,
	xlsShaded = 128

} CellAlignment;

//enum to handle selecting the font for the cell
typedef enum
{
	//used by rgbAttr2
	//bits 0-5 handle the *picture* formatting, not bold/underline etc...
	//bits 6-7 handle the font number
	xlsFont0 = 0,
	xlsFont1 = 64,
	xlsFont2 = 128,
	xlsFont3 = 192

} CellFont;

typedef enum
{
	//used by rgbAttr1
	//bits 0-5 must be zero
	//bit 6 locked/unlocked
	//bit 7 hidden/not hidden
	xlsNormal = 0,
	xlsLocked = 64,
	xlsHidden = 128

} CellHiddenLocked;

//set up variables to hold the spreadsheet's layout
typedef enum
{
	xlsLeftMargin = 38,
	xlsRightMargin = 39,
	xlsTopMargin = 40,
	xlsBottomMargin = 41

} MarginTypes;

typedef enum
{
	//add these enums together. For example: xlsBold + xlsUnderline
	xlsNoFormat = 0,
	xlsBold = 1,
	xlsItalic = 2,
	xlsUnderline = 4,
	xlsStrikeout = 8

} FontFormatting;

/** Structures **************************************************************/

// enum value structs

typedef struct
{
	ValueTypes xlsInteger;
	ValueTypes xlsNumber;
	ValueTypes xlsText;

}VALUE_TYPES;

typedef struct
{
	CellAlignment xlsGeneralAlign;
	CellAlignment xlsLeftAlign;
	CellAlignment xlsCentreAlign;
	CellAlignment xlsRightAlign;
	CellAlignment xlsFillCell;
	CellAlignment xlsLeftBorder;
	CellAlignment xlsRightBorder;
	CellAlignment xlsTopBorder;
	CellAlignment xlsBottomBorder;
	CellAlignment xlsShaded;

} CELL_ALIGNMENT;

typedef struct
{
	CellFont xlsFont0;
	CellFont xlsFont1;
	CellFont xlsFont2;
	CellFont xlsFont3;

} CELL_FONT;

typedef struct
{
	CellHiddenLocked xlsNormal;
	CellHiddenLocked xlsLocked;
	CellHiddenLocked xlsHidden;

} CELL_HIDDEN_LOCKED;

typedef struct
{
	MarginTypes xlsLeftMargin;
	MarginTypes xlsRightMargin;
	MarginTypes xlsTopMargin;
	MarginTypes xlsBottomMargin;

} MARGIN_TYPES;

typedef struct
{
	FontFormatting xlsNoFormat;
	FontFormatting xlsBold;
	FontFormatting xlsItalic;
	FontFormatting xlsUnderline;
	FontFormatting xlsStrikeout;

} FONT_FORMATTING;

// Data Structs

typedef struct
{
	//49
	short opcode;
	//5+len(fontname)
	short length;
	short fontHeight;
	//bit0 bold, bit1 italic, bit2 underline, bit3 strikeout, bit4-7 reserved
	BYTE fontAttributes1;
	//reserved - always 0
	BYTE fontAttributes2;
	BYTE fontNameLength;

} FONT_RECORD;

typedef struct
{
	//47
	short opcode;
	//len(password)
	short length;

} PASSWORD_RECORD;

typedef struct
{
	//20 Header, 21 Footer
	short opcode;
	//1+len(text)
	short length;
	BYTE textLength;

} HEADER_FOOTER_RECORD;

typedef struct
{
	//18
	short opcode;
	//2
	short length;
	short protect;

} PROTECT_SPREADSHEET_RECORD;

typedef struct
{
	//1f
	short opcode;
	//2
	short length;
	short count;

} FORMAT_COUNT_RECORD;

typedef struct
{
	//1e
	short opcode;
	//1+len(format)
	short length;
	//len(format)
	BYTE formatLength;

} FORMAT_RECORD;

//+ followed by the Format-Picture
typedef struct
{
	//36
	short opcode;
	//4
	short length;
	//first column
	BYTE col1;
	//last column
	BYTE col2;
	//at 1/256th of a character
	short columnWidth;

} COLWIDTH_RECORD;

//Beginning Of File record
typedef struct
{
	short opcode;
	short length;
	short version;
	short ftype;

} BEG_FILE_RECORD;

//End Of File record
typedef struct
{
	short opcode;
	short length;

} END_FILE_RECORD;

//true/false to print gridlines
typedef struct
{
	short opcode;
	short length;
	short printFlag;

} PRINT_GRIDLINES_RECORD;

//Integer record
typedef struct
{
	short opcode;
	short length;
	//unsigned integer
	short row;
	short col;
	//rgbAttr1 handles whether cell is hidden and/or locked
	BYTE rgbAttr1;
	//rgbAttr2 handles the Font# and Formatting assigned to this cell
	BYTE rgbAttr2;
	//rgbAttr3 handles the Cell Alignment/borders/shading
	BYTE rgbAttr3;
	//the actual integer value
	short intValue;

} tInteger;

//Number record
typedef struct
{
	short opcode;
	short length;
	short row;
	short col;
	BYTE rgbAttr1;
	BYTE rgbAttr2;
	BYTE rgbAttr3;
	//8 Bytes
	double numberValue;

} tNumber;

//Label (Text) record
typedef struct
{
	short opcode;
	short length;
	short row;
	short col;
	BYTE rgbAttr1;
	BYTE rgbAttr2;
	BYTE rgbAttr3;
	BYTE textLength;

} tText;

typedef struct
{
	short opcode;
	short length;
	//8 bytes
	double marginValue;

} MARGIN_RECORD_LAYOUT;

typedef struct
{
	short opcode;
	short length;
	short numPageBreaks;

} HPAGE_BREAK_RECORD;

typedef struct
{
	short opcode;
	short length;
	short rowHeight;

} DEF_ROWHEIGHT_RECORD;

typedef struct
{
	//08
	short opcode;
	//should always be 16 bytes
	short length;
	short rowNumber;
	short firstColumn;
	short lastColumn;
	//written to file as 1/20ths of a point
	short rowHeight;
	short internal;
	//set to zero for no default attributes
	BYTE defaultAttributes;
	short fileOffset;
	BYTE rgbAttr1;
	BYTE rgbAttr2;
	BYTE rgbAttr3;

} ROW_HEIGHT_RECORD;

/** Class Instance Struct ****************************************************/

typedef struct ExcellFile 
{
	FILE  *pFile; // pointer to output file
	short *horizPageBreakRows; // pointer to array of page breaks
	short numHorizPageBreaks;

	// pointers to methods
	BOOL (*CreateExcelFile)(LPSTR);
	BOOL (*SetPrintGridLines)(BOOL);
	BOOL (*SetMargin)(MarginTypes, double);
	void (*InsertHorizPageBreak)(int);
	BOOL (*SetDefaultRowHeight)(short);
	BOOL (*SetFont)(LPSTR, short, FontFormatting);
	BOOL (*SetColumnWidth)(BYTE, BYTE, short);
	BOOL (*SetRowHeight)(int, short);
	BOOL (*SetHeader)(LPSTR);
	BOOL (*SetFooter)(LPSTR);
	BOOL (*WriteValue)(ValueTypes, CellFont, CellAlignment, CellHiddenLocked, int, int, LPSTR, int=0);
	BOOL (*SetProtectSpreadsheet)(BOOL);
	BOOL (*SetFilePassword)(LPSTR);
	BOOL (*CloseExcelFile)(void);

	// Structs containing enum values
	VALUE_TYPES valueTypes;
	CELL_ALIGNMENT cellAlignment;
	CELL_FONT cellFont;
	CELL_HIDDEN_LOCKED cellHiddenLocked;
	MARGIN_TYPES marginTypes;
	FONT_FORMATTING fontFormatting;
 
}EXCELLFILE, *LPEXCELLFILE;

/** Prototypes **************************************************************/

void New_ExcellFile(LPEXCELLFILE);

void Select_ExcellFile(LPEXCELLFILE);
