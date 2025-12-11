// unicode.c

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <io.h>
#include "unicode.h"

int isUTF8(const char *data, size_t size)
{
    const uint8_t *str = (uint8_t*)data;
    const uint8_t *end = str + size;
    uint8_t byte;
    uint32_t code_length, i;
    uint32_t ch;
    while (str != end) {
        byte = *str;
        if (byte <= 0x7F) {
            /* 1 byte sequence: U+0000..U+007F */
            str += 1;
            continue;
        }

        if (0xC2 <= byte && byte <= 0xDF)
            /* 0b110xxxxx: 2 bytes sequence */
            code_length = 2;
        else if (0xE0 <= byte && byte <= 0xEF)
            /* 0b1110xxxx: 3 bytes sequence */
            code_length = 3;
        else if (0xF0 <= byte && byte <= 0xF4)
            /* 0b11110xxx: 4 bytes sequence */
            code_length = 4;
        else {
            /* invalid first byte of a multibyte character */
            return 0;
        }

        if (str + (code_length - 1) >= end) {
            /* truncated string or invalid byte sequence */
            return 0;
        }

        /* Check continuation bytes: bit 7 should be set, bit 6 should be
         * unset (b10xxxxxx). */
        for (i=1; i < code_length; i++) {
            if ((str[i] & 0xC0) != 0x80)
                return 0;
        }

        if (code_length == 2) {
            /* 2 bytes sequence: U+0080..U+07FF */
            ch = ((str[0] & 0x1f) << 6) + (str[1] & 0x3f);
            /* str[0] >= 0xC2, so ch >= 0x0080.
               str[0] <= 0xDF, (str[1] & 0x3f) <= 0x3f, so ch <= 0x07ff */
        } else if (code_length == 3) {
            /* 3 bytes sequence: U+0800..U+FFFF */
            ch = ((str[0] & 0x0f) << 12) + ((str[1] & 0x3f) << 6) +
                  (str[2] & 0x3f);
            /* (0xff & 0x0f) << 12 | (0xff & 0x3f) << 6 | (0xff & 0x3f) = 0xffff,
               so ch <= 0xffff */
            if (ch < 0x0800)
                return 0;

            /* surrogates (U+D800-U+DFFF) are invalid in UTF-8:
               test if (0xD800 <= ch && ch <= 0xDFFF) */
            if ((ch >> 11) == 0x1b)
                return 0;
        } else if (code_length == 4) {
            /* 4 bytes sequence: U+10000..U+10FFFF */
            ch = ((str[0] & 0x07) << 18) + ((str[1] & 0x3f) << 12) +
                 ((str[2] & 0x3f) << 6) + (str[3] & 0x3f);
            if ((ch < 0x10000) || (0x10FFFF < ch))
                return 0;
        }
        str += code_length;
    }
    return 1;
}


uint32_t Utf32Get(int bigEndian, const char *src)
{
	uint32_t codePoint;

	if (bigEndian)
	{
		codePoint = ((uint8_t)src[0] << 24) | ((uint8_t)src[1] << 16)
			| ((uint8_t)src[2] << 8) | (uint8_t)src[3];
	}
	else
	{
		codePoint = ((uint8_t)src[3] << 24) | ((uint8_t)src[2] << 16)
			| ((uint8_t)src[1] << 8) | (uint8_t)src[0];
	}

	return codePoint;

}

int Utf8Put(int32_t codePoint, char *dst, size_t *numUnits)
{

	if (numUnits != NULL)
		*numUnits = 0;

	if ((codePoint < 0) || (0x10FFFF < codePoint))
		return -1;

	if (dst == NULL)
		return -1;

	// One-octet code point (Unicode range U+000000 to U+00007F)?
	if (codePoint < 0x80)
	{
		dst[0] = codePoint & 0x7F;
		if (numUnits != NULL)
			*numUnits = 1;
	}

	// Two-octet code point (Unicode range U+000080 to U+0007FF)?
	else if (codePoint < 0x800)
	{
		dst[0] = 0xC0 | ((codePoint & 0x07C0) >> 6);
		dst[1] = 0x80 | (codePoint & 0x003F);
		if (numUnits != NULL)
			*numUnits = 2;
	}

	// Three-octet code point (Unicode range U+000800 to U+00FFFF)?
	else if (codePoint < 0x10000)
	{
		dst[0] = 0xE0 | ((codePoint & 0x0F000) >> 12);
		dst[1] = 0x80 | ((codePoint & 0x00FC0) >> 6);
		dst[2] = 0x80 | (codePoint & 0x0003F);
		if (numUnits != NULL)
			*numUnits = 3;
	}

	// Four-octet code point (Unicode range U+010000 to U+10FFFF)?
	else
	{
		dst[0] = 0xF0 | ((codePoint & 0x1C0000) >> 18);
		dst[1] = 0x80 | ((codePoint & 0x03F000) >> 12);
		dst[2] = 0x80 | ((codePoint & 0x000FC0) >> 6);
		dst[3] = 0x80 | (codePoint & 0x00003F);
		if (numUnits != NULL)
			*numUnits = 4;
	}

	return 0;
}

int Utf32Bom(const char *src)
{
	if (((uint8_t)src[0] == 0) && ((uint8_t)src[1] == 0)
		&& ((uint8_t)src[2] == 0xFE) && ((uint8_t)src[3] == 0xFF))
	{
		return 1;	// BOM, big-endian
	}
	else if (((uint8_t)src[0] == 0xFF) && ((uint8_t)src[1] == 0xFE)
		&& ((uint8_t)src[2] == 0) && ((uint8_t)src[3] == 0))
	{
		return -1;	// BOM, little-endian
	}

	return 0;	// No BOM

}

size_t Utf32Utf8(const char *src, int srclen, int bom, char *dst, int dstlen)
{
	int bigEndian = 0;
	int32_t codePoint;
	size_t length, numUnits;

	length = 0;

	// Determine the byte order of the UTF-32 source string.
	if(bom == UTF32BENB){ // UTF-32BE NoBOM
		bigEndian = 1;
	}
	if(bom == UTF32LENB){ // UTF-32LE NoBOM
		bigEndian = 0;
	}

	if(bom != UTF32LENB && bom != UTF32BENB){
		// if the bom has not been supplied
		bigEndian = (Utf32Bom(src) >= 0);
		if (bigEndian)
		{
			src += sizeof(uint32_t);
			srclen -= sizeof(uint32_t);
		}
	}
	// Encode the UTF-32 code points as UTF-8.
	while (srclen > 0)
	{
		codePoint = Utf32Get(bigEndian, src);
		if (codePoint < 0)
		{
			return -1;
		}
		src += sizeof(uint32_t);
		srclen -= sizeof(uint32_t);
		if ((dstlen < 4) && ((codePoint > 0x0FFFF) || ((dstlen < 3)
					&& ((codePoint > 0x00800) || ((dstlen < 2)
					&& ((codePoint > 0x0007F) || (dstlen < 1)))))))
		{
			return -1;
		}
		if (Utf8Put(codePoint, dst, &numUnits))
		{
			return -1;
		}
		dst += numUnits;
		dstlen -= numUnits;
		length += numUnits;
	}

	if (dstlen >= 1)
		*dst = '\0';

	return length;

}

int IsAnsi(const char *src, int len)
{
	int ret = 0;
	char c;
	while (--len)
	{
		c = *src;
		// in ANSI range
		if (c > 0x19 && c < 0x7F || c == 0x0A || c == 0x0D || c == 0x9){
			ret = 1;
			src++;
		}
		else{
			ret = 0;
			break;	// not in range of ANSI chars
		}
	}
	return ret;
}

int IsAscii(const char *data, size_t size)
{
	const uint8_t *str = (const uint8_t *)data;
	const uint8_t *end = str + size;
	for (; str != end; str++)
	{
		if (*str >= 0x80)
			return 0;
	}
	return 1;
}

/****************************************************************************
*																			*
* Function:	CheckUtf16LE													*
*																			*
* Purpose: check if text is UTF16LE without BOM								*
*																			*
*																			*
* History : Date 	 Reason 												*
*		   06-11-13  Created												*
*																			*
****************************************************************************/
void CheckUtf16LE(const wchar_t * wstr, int * cntLE, int * cntHigh)
{
	while(*wstr){

		if(*wstr == 0x000D)
			(*cntLE)++;

		if((char)*wstr > (char)((*wstr)>>8))
			(*cntHigh)++;

		wstr++;

	}
}

void CheckUtf32LE(const uint32_t * wstr, int * cntLE, int * cntHigh)
{
	while(*wstr){

		if(*wstr == 0x0000000D)
			(*cntLE)++;

		if((wchar_t)*wstr > (wchar_t)((*wstr)>>16))
			(*cntHigh)++;

		wstr++;

	}
}

/****************************************************************************
*																			*
* Function:	CheckUtf16BE													*
*																			*
* Purpose: check if text is UTF16BE without BOM								*
*																			*
*																			*
* History : Date 	 Reason 												*
*		   06-11-13  Created												*
*																			*
****************************************************************************/
void CheckUtf16BE(const wchar_t * wstr, int * cntBE, int * cntHigh)
{
	while(*wstr){

		if(*wstr == 0x0D00)
			(*cntBE)++;

		if((char)((*wstr)>>8) > (char)*wstr)
			(*cntHigh)++;

		wstr++;

	}

}

void CheckUtf32BE(const uint32_t * wstr, int * cntBE, int * cntHigh)
{
	while(*wstr){

		if(*wstr == 0x0D000000)
			(*cntBE)++;

		if((wchar_t)((*wstr)>>16) > (wchar_t)*wstr)
			(*cntHigh)++;

		wstr++;

	}

}

/****************************************************************************
*																			*
* Function: AdjustUnix														*
*																			*
* Purpose: 	insert CR's before LF's so that the text will display ok		*
*																			*
*																			*
* History : Date 	 Reason 												*
*		   06-11-13  Created												*
*																			*
****************************************************************************/
int AdjustUnix(char * src, int len)
{
	int cnt = 0;
	char tmp[len*2];
	char * ptmp = tmp, * psrc = src;

	// copy src to tmp while inserting CR before LF
	while(*psrc)
	{
		if(*psrc == 0x0A){
			*ptmp++ = 0x0D;
			cnt++;
		}
		*ptmp++ = *psrc++;
	}
	// copy back to src
	memcpy(src, tmp, len + cnt);
	return len + cnt;
}

/****************************************************************************
*																			*
* Function: CheckUnix														*
*																			*
* Purpose: 	check that the text is UNIX										*
*																			*
*																			*
* History : Date 	 Reason 												*
*		   06-11-13  Created												*
*																			*
****************************************************************************/
int CheckUnix(const char * str)
{
	int i = 0;
	char c;
	while(*str)
	{
		c = *str++;
		if(*str == 0x0A)
		{
			i++;
			if(c == 0x0D)
				i--;
		}
	}
	return i;
}

/****************************************************************************
*																			*
* Function:	IsvalidUtf8														*
*																			*
* Purpose: scan the text looking for UTF8 sequences							*
*																			*
* Well-Formed UTF-8 Byte Sequences											*
*																			*
* Code Points        First Byte Second Byte Third Byte Fourth Byte			*
* U+0000..U+007F     00..7F													*
* U+0080..U+07FF     C2..DF     80..BF										*
* U+0800..U+0FFF     E0         A0..BF      80..BF							*
* U+1000..U+CFFF     E1..EC     80..BF      80..BF							*
* U+D000..U+D7FF     ED         80..9F      80..BF							*
* U+E000..U+FFFF     EE..EF     80..BF      80..BF							*
* U+10000..U+3FFFF   F0         90..BF      80..BF     80..BF				*
* U+40000..U+FFFFF   F1..F3     80..BF      80..BF     80..BF				*
* U+100000.U+10FFFF	 F4         80..8F      80..BF     80..BF				*
*																			*
* History : Date 	 Reason 												*
*		   06-11-13  Created												*
*																			*
****************************************************************************/
int IsvalidUtf8(const char *str, int len, int *oneseq, int *twoseq, int *threeseq, int *fourseq, int *err)
{
	uint8_t c, c1, c2;

	while(*str)
	{
		c = *str++;

		//*********************************************************
		// check for one byte ascii
		//*********************************************************
		//	1	7F
		if(c <= 0x7F){
			(*oneseq)++;
			continue;
		}

		//*********************************************************
		// check for two byte sequences
		//*********************************************************
		//	2	C2..DF     80..BF
		if(c >= 0xC2 && c <= 0xDF){
			c = *str++;
			if((c >= 0x80 && c <= 0xBF)){
				(*twoseq)++;
				continue;
			}
		}

		//*********************************************************
		// check for three byte sequences
		//*********************************************************
		//	3	E0         A0..BF      80..BF
		if(c == 0xE0){
			c = *str++; c1 = *str++;
			if(c >= 0xA0 && c <= 0xBF && c1 >= 0x80 && c1 <= 0xBF){
				(*threeseq)++;
				continue;
			}
		}
		//	3	E1..EC     80..BF      80..BF
		if(c >= 0xE1 && c <= 0xEC){
			c = *str++; c1 = *str++;
			if(c >= 0x80 && c <= 0xBF && c1 >= 0x80 && c1 <= 0xBF){
				(*threeseq)++;
				continue;
			}
		}
		//	3	ED         80..9F      80..BF
		if(c == 0xED){
			c = *str++; c1 = *str++;
			if(c >= 0x80 && c <= 0x9F && c1 >= 0x80 && c1 <= 0xBF){
				(*threeseq)++;
				continue;
			}
		}
		//	3	EE..EF     80..BF      80..BF
		if(c >= 0xEE && c <= 0xEF)
		{
			c = *str++; c1 = *str++;
			if(c >= 0x80 && c <= 0xBF && c1 >= 0x80 || c1 <= 0xBF){
				(*threeseq)++;
				continue;
			}
		}

		//*********************************************************
		// check for four byte sequences
		//*********************************************************
		//	4	F0         90..BF      80..BF     80..BF
		if(c == 0xF0){
			c = *str++; c1 = *str++; c2 = *str++;
			if(c >= 0x90 && c <= 0xBF && c1 >= 0x80 && c1 <= 0xBF && c2 >= 0x80 && c2 <= 0xBF){
				(*fourseq)++;
				continue;
			}
		}
		//	4	F1..F3     80..BF      80..BF     80..BF
		if(c >= 0xF1 && c <= 0xF3){
			c = *str++; c1 = *str++; c2 = *str++;
			if(c >= 0x80 && c <= 0xBF && c1 >= 0x80 && c1 <= 0xBF && c2 >= 0x80 && c2 <= 0xBF){
				(*fourseq)++;
				continue;
			}
		}
		//	4	F4         80..8F      80..BF     80..BF
		if(c >= 0xF4){
			c = *str++; c1 = *str++; c2 = *str++;
			if(c >= 0x80 && c <= 0x8F && c1 >= 0x80 && c1 <= 0xBF && c2 >= 0x80 && c2 <= 0xBF){
				(*fourseq)++;
				continue;
			}
		}
	}
	return 0;
}

/****************************************************************************
*																			*
* Function: CheckUtf8														*
*																			*
* Purpose:  Check if a file is UTF-8 without BOM							*
*																			*
*																			*
* History : Date 	 Reason 												*
*		   06-11-13  Created												*
*																			*
****************************************************************************/
int CheckUtf8(FILE * f)
{
	//**************************************************************
	// Special case in that a UTF8 file without BOM could be normal
	// ascii for 20k then have a few lines of unicode so need to
	// check the whole file.
	//**************************************************************
	long len;
	int err = 0, oneseq = 0, twoseq = 0, threeseq = 0, fourseq = 0;
	rewind(f);
	len = _filelength(_fileno(f));

	len = (len > 1000000) ? 1000000 : len; // one meg is enough though.

	char * buffer = malloc(len+10);
	fread(buffer, len, 1, f);	// file is closed in DisplayFileHead()

	//**************************************************************
	// Add a few zero's so that the while loop in isvalid_utf8()
	// can if necessary go pass the end of the text without crashing,
	// before exiting the loop. The buffer is 10 bytes larger.
	//**************************************************************
	memset(&buffer[len], 0, 9);
	IsvalidUtf8(buffer, len, &oneseq, &twoseq, &threeseq, &fourseq, &err);
 	free(buffer);

	// guessing here
	if(len > 1000){
		if(twoseq >= 8 || threeseq >= 8 || fourseq >= 8)
			return 1;

	}else if(len > 100){
		if(twoseq >= 4 || threeseq >= 4 || fourseq >= 4)
			return 1;

	}else if(len > 10){
		if(twoseq >= 2 || threeseq >= 2 || fourseq >= 2)
			return 1;

	}else if(len > 2){
		if(twoseq >= 1 || threeseq >= 1 || fourseq >= 1)
			return 1;

	}
	return 0;
}

/****************************************************************************
*																			*
* Function:	CheckBom														*
*																			*
* Purpose:	Check BOM's for 16LE, 16BE, 32LE, 32BE  and UTF8.				*
*																			*
*	Bytes Encoding 		Form												*
*	00 00 FE FF	UTF-32, big-endian											*
*	FF FE 00 00	UTF-32, little-endian										*
*	FE FF UTF-16, 		big-endian											*
*	FF FE UTF-16,	 	little-endian										*
*	EF BB BF			UTF-8												*
*																			*
* History : Date 	 Reason 												*
*		   06-11-13  Created												*
*																			*
****************************************************************************/
int CheckBom(const wchar_t *str)
{
	uint32_t uc = *(uint32_t*)str;
	if(uc == 0x0000FEFF)
		return UTF32LEB; // Unicode-32LE BOM

	if(uc == 0xFFFE0000)
		return UTF32BEB; // Unicode-32LE BOM

	if (str[0] == 0xFEFF)
		return UTF16LE;	// Unicode-16LE BOM

	else if (str[0] == 0xFFFE)
		return UTF16BE;	// Unicode-16BE BOM

	else if (str[0] == 0xBBEF)
	{
		if ((uint8_t)str[1] == 0xBF)
			return UTF8B; // Unicode-UTF8 BOM
		else
			return NOBOM; // Unknown - return NOBOM
	}
	return NOBOM;
}
