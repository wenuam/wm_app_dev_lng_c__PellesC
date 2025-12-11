// Utils.h

#ifndef _UNICODE_H_
#define _UNICODE_H_
#include <stdint.h>

//	No BOM	  BOM      BOM     BOM	    No BOM    No BOM		BOM		  BOM     No BOM     No BOM
enum{NOBOM, UTF8B, UTF16LE, UTF16BE, UTF16LENB, UTF16BENB, UTF32LEB, UTF32BEB, UTF32LENB, UTF32BENB};
int IsASCII(const char *data, size_t size);
size_t Utf32Utf8(const char *src, int srclen, int bom, char *dst, int dstlen);
void CheckUtf16LE(const wchar_t * wstr, int * cntLE, int * cntHigh);
void CheckUtf16BE(const wchar_t * wstr, int * cntBE, int * cntHigh);
void CheckUtf32LE(const uint32_t * wstr, int * cntLE, int * cntHigh);
void CheckUtf32BE(const uint32_t * wstr, int * cntBE, int * cntHigh);
int CheckUtf8(FILE * f);
int AdjustUnix(char * str, int len);
int CheckUnix(const char * str);
int CheckBom(const wchar_t * src);
int isUTF8(const char *data, size_t size);

#endif // _UNICODE_H_
