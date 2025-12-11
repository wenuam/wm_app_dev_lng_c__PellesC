#ifndef _text_h_
#define _text_h_

#define linemax 1000
#define nfonts 15
#define nhbmp 1
#define colormax 20

#define _LeftParagraph "#o#1y#1m#1b\r\n"
#define _NextLeftParagraph "#o#m#-2r#1y#1m#1b\r\n"
#define _RightParagraph "#1o#y#-3r#1b\r\n"
//#define _OffsetLeftParagraph "#1o#-2r#-3r#1x#1b\r\n"
//#define _OffsetNextLeftParagraph "#x#-2r#1b\r\n"

void textout(HDC hdc,char* buffer,int calclen,int printing);
int textline(HDC hdc,char* line,int xprint,int yprint,int* lplen,int calclen);
int textlinepart(HDC hdc,char* lpline,int slen,int xprint,int yprint,int* lplen,int calclen);
int textswitch(HDC hdc,char mode,int num,char* string,int slen,int x,int y);

HBITMAP hBmp[nhbmp];

#endif
