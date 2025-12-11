#ifndef _SHLWAPI_H
#define _SHLWAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows shell "light-weight" utility API definitions */

#include <winapifamily.h>

#ifndef NOSHLWAPI

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#include <objbase.h>
#include <shtypes.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#ifndef WINSHLWAPI
#define LWSTDAPI          EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define LWSTDAPI_(type)   EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE
#define LWSTDAPIV         EXTERN_C DECLSPEC_IMPORT HRESULT STDAPIVCALLTYPE
#define LWSTDAPIV_(type)  EXTERN_C DECLSPEC_IMPORT type STDAPIVCALLTYPE
#endif /* !WINSHLWAPI */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#include <pshpack8.h>

#ifndef __IBindCtx_FWD_DEFINED__
#define __IBindCtx_FWD_DEFINED__
typedef interface IBindCtx IBindCtx;
#endif /* !__IBindCtx_FWD_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#ifndef NO_SHLWAPI_STRFCNS

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifdef USE_STRICT_CONST
LWSTDAPI_(PCSTR) StrChrA(PCSTR pszStart, WORD wMatch);
LWSTDAPI_(PCWSTR) StrChrW(PCWSTR pszStart, WCHAR wMatch);
LWSTDAPI_(PCSTR) StrChrIA(PCSTR pszStart, WORD wMatch);
LWSTDAPI_(PCWSTR) StrChrIW(PCWSTR pszStart, WCHAR wMatch);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI_(PCWSTR) StrChrNW(PCWSTR pszStart, WCHAR wMatch, UINT cchMax);
LWSTDAPI_(PCWSTR) StrChrNIW(PCWSTR pszStart, WCHAR wMatch, UINT cchMax);
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */
#else /* !USE_STRICT_CONST */
LWSTDAPI_(PSTR) StrChrA(PCSTR pszStart, WORD wMatch);
LWSTDAPI_(PWSTR) StrChrW(PCWSTR pszStart, WCHAR wMatch);
LWSTDAPI_(PSTR) StrChrIA(PCSTR pszStart, WORD wMatch);
LWSTDAPI_(PWSTR) StrChrIW(PCWSTR pszStart, WCHAR wMatch);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI_(PWSTR) StrChrNW(PCWSTR pszStart, WCHAR wMatch, UINT cchMax);
LWSTDAPI_(PWSTR) StrChrNIW(PCWSTR pszStart, WCHAR wMatch, UINT cchMax);
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */
#endif /* !USE_STRICT_CONST */
LWSTDAPI_(int) StrCmpNA(PCSTR psz1, PCSTR psz2, int nChar);
LWSTDAPI_(int) StrCmpNW(PCWSTR psz1, PCWSTR psz2, int nChar);
LWSTDAPI_(int) StrCmpNIA(PCSTR psz1, PCSTR psz2, int nChar);
LWSTDAPI_(int) StrCmpNIW(PCWSTR psz1, PCWSTR psz2, int nChar);
LWSTDAPI_(int) StrCSpnA(PCSTR pszStr, PCSTR pszSet);
LWSTDAPI_(int) StrCSpnW(PCWSTR pszStr, PCWSTR pszSet);
LWSTDAPI_(int) StrCSpnIA(PCSTR pszStr, PCSTR pszSet);
LWSTDAPI_(int) StrCSpnIW(PCWSTR pszStr, PCWSTR pszSet);
LWSTDAPI_(PSTR) StrDupA(PCSTR pszSrch);
LWSTDAPI_(PWSTR) StrDupW(PCWSTR pszSrch);

#if (NTDDI_VERSION >= NTDDI_VISTASP1)

enum tagSFBS_FLAGS {
    SFBS_FLAGS_ROUND_TO_NEAREST_DISPLAYED_DIGIT = 0x0001,
    SFBS_FLAGS_TRUNCATE_UNDISPLAYED_DECIMAL_DIGITS = 0x0002,
};
typedef int SFBS_FLAGS;

LWSTDAPI StrFormatByteSizeEx(ULONGLONG ull, SFBS_FLAGS flags, PWSTR pszBuf, UINT cchBuf);

#endif /* (NTDDI_VERSION >= NTDDI_VISTASP1) */

LWSTDAPI_(PSTR) StrFormatByteSizeA(DWORD dw, PSTR pszBuf, UINT cchBuf);
LWSTDAPI_(PSTR) StrFormatByteSize64A(LONGLONG qdw, PSTR pszBuf, UINT cchBuf);
LWSTDAPI_(PWSTR) StrFormatByteSizeW(LONGLONG qdw, PWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(PWSTR) StrFormatKBSizeW(LONGLONG qdw, PWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(PSTR) StrFormatKBSizeA(LONGLONG qdw, PSTR pszBuf, UINT cchBuf);
LWSTDAPI_(int) StrFromTimeIntervalA(PSTR pszOut, UINT cchMax, DWORD dwTimeMS, int digits);
LWSTDAPI_(int) StrFromTimeIntervalW(PWSTR pszOut, UINT cchMax, DWORD dwTimeMS, int digits);
LWSTDAPI_(BOOL) StrIsIntlEqualA(BOOL fCaseSens, PCSTR pszString1, PCSTR pszString2, int nChar);
LWSTDAPI_(BOOL) StrIsIntlEqualW(BOOL fCaseSens, PCWSTR pszString1, PCWSTR pszString2, int nChar);
LWSTDAPI_(PSTR) StrNCatA(PSTR psz1, PCSTR psz2, int cchMax);
LWSTDAPI_(PWSTR) StrNCatW(PWSTR psz1, PCWSTR psz2, int cchMax);
#ifdef USE_STRICT_CONST
LWSTDAPI_(PCSTR) StrPBrkA(PCSTR psz, PCSTR pszSet);
LWSTDAPI_(PCWSTR) StrPBrkW(PCWSTR psz, PCWSTR pszSet);
LWSTDAPI_(PCSTR) StrRChrA(PCSTR pszStart, PCSTR pszEnd, WORD wMatch);
LWSTDAPI_(PCWSTR) StrRChrW(PCWSTR pszStart, PCWSTR pszEnd, WCHAR wMatch);
LWSTDAPI_(PCSTR) StrRChrIA(PCSTR pszStart, PCSTR pszEnd, WORD wMatch);
LWSTDAPI_(PCWSTR) StrRChrIW(PCWSTR pszStart, PCWSTR pszEnd, WCHAR wMatch);
LWSTDAPI_(PCSTR) StrRStrIA(PCSTR pszSource, PCSTR pszLast, PCSTR pszSrch);
LWSTDAPI_(PCWSTR) StrRStrIW(PCWSTR pszSource, PCWSTR pszLast, PCWSTR pszSrch);
#else /* !USE_STRICT_CONST */
LWSTDAPI_(PSTR) StrPBrkA(PCSTR psz, PCSTR pszSet);
LWSTDAPI_(PWSTR) StrPBrkW(PCWSTR psz, PCWSTR pszSet);
LWSTDAPI_(PSTR) StrRChrA(PCSTR pszStart, PCSTR pszEnd, WORD wMatch);
LWSTDAPI_(PWSTR) StrRChrW(PCWSTR pszStart, PCWSTR pszEnd, WCHAR wMatch);
LWSTDAPI_(PSTR) StrRChrIA(PCSTR pszStart, PCSTR pszEnd, WORD wMatch);
LWSTDAPI_(PWSTR) StrRChrIW(PCWSTR pszStart, PCWSTR pszEnd, WCHAR wMatch);
LWSTDAPI_(PSTR) StrRStrIA(PCSTR pszSource, PCSTR pszLast, PCSTR pszSrch);
LWSTDAPI_(PWSTR) StrRStrIW(PCWSTR pszSource, PCWSTR pszLast, PCWSTR pszSrch);
#endif /* !USE_STRICT_CONST */
LWSTDAPI_(int) StrSpnA(PCSTR psz, PCSTR pszSet);
LWSTDAPI_(int) StrSpnW(PCWSTR psz, PCWSTR pszSet);
#ifdef USE_STRICT_CONST
LWSTDAPI_(PCSTR) StrStrA(PCSTR pszFirst, PCSTR pszSrch);
LWSTDAPI_(PCWSTR) StrStrW(PCWSTR pszFirst, PCWSTR pszSrch);
LWSTDAPI_(PCSTR) StrStrIA(PCSTR pszFirst, PCSTR pszSrch);
LWSTDAPI_(PCWSTR) StrStrIW(PCWSTR pszFirst, PCWSTR pszSrch);
#if (_WIN32_IE >= _WIN32_IE_IE6)
LWSTDAPI_(PCWSTR) StrStrNW(PCWSTR pszFirst, PCWSTR pszSrch, UINT cchMax);
LWSTDAPI_(PCWSTR) StrStrNIW(PCWSTR pszFirst, PCWSTR pszSrch, UINT cchMax);
#endif /* (_WIN32_IE >= _WIN32_IE_IE6) */
#else /* !USE_STRICT_CONST */
LWSTDAPI_(PSTR) StrStrA(PCSTR pszFirst, PCSTR pszSrch);
LWSTDAPI_(PWSTR) StrStrW(PCWSTR pszFirst, PCWSTR pszSrch);
LWSTDAPI_(PSTR) StrStrIA(PCSTR pszFirst, PCSTR pszSrch);
LWSTDAPI_(PWSTR) StrStrIW(PCWSTR pszFirst, PCWSTR pszSrch);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI_(PWSTR) StrStrNW(PCWSTR pszFirst, PCWSTR pszSrch, UINT cchMax);
LWSTDAPI_(PWSTR) StrStrNIW(PCWSTR pszFirst, PCWSTR pszSrch, UINT cchMax);
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */
#endif /* !USE_STRICT_CONST */

#define STIF_DEFAULT        0x00000000L
#define STIF_SUPPORT_HEX    0x00000001L
typedef int STIF_FLAGS;
LWSTDAPI_(int) StrToIntA(PCSTR pszSrc);
LWSTDAPI_(int) StrToIntW(PCWSTR pszSrc);
LWSTDAPI_(BOOL) StrToIntExA(PCSTR pszString, STIF_FLAGS dwFlags, int * piRet);
LWSTDAPI_(BOOL) StrToIntExW(PCWSTR pszString, STIF_FLAGS dwFlags, int * piRet);
#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI_(BOOL) StrToInt64ExA(PCSTR pszString, STIF_FLAGS dwFlags, LONGLONG * pllRet);
LWSTDAPI_(BOOL) StrToInt64ExW(PCWSTR pszString, STIF_FLAGS dwFlags, LONGLONG * pllRet);
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */

LWSTDAPI_(BOOL) StrTrimA(PSTR psz, PCSTR pszTrimChars);
LWSTDAPI_(BOOL) StrTrimW(PWSTR psz, PCWSTR pszTrimChars);

LWSTDAPI_(PWSTR) StrCatW(PWSTR psz1, PCWSTR psz2);
LWSTDAPI_(int) StrCmpW(PCWSTR psz1, PCWSTR psz2);
LWSTDAPI_(int) StrCmpIW(PCWSTR psz1, PCWSTR psz2);
LWSTDAPI_(PWSTR) StrCpyW(PWSTR psz1, PCWSTR psz2);
LWSTDAPI_(PWSTR) StrCpyNW(PWSTR pszDst, PCWSTR pszSrc, int cchMax);

LWSTDAPI_(PWSTR) StrCatBuffW(PWSTR pszDest, PCWSTR pszSrc, int cchDestBuffSize);
LWSTDAPI_(PSTR) StrCatBuffA(PSTR pszDest, PCSTR pszSrc, int cchDestBuffSize);
LWSTDAPI_(BOOL) ChrCmpIA(WORD w1, WORD w2);
LWSTDAPI_(BOOL) ChrCmpIW(WCHAR w1, WCHAR w2);

LWSTDAPI_(int) wvnsprintfA(PSTR pszDest, int cchDest, PCSTR pszFmt, va_list arglist);
LWSTDAPI_(int) wvnsprintfW(PWSTR pszDest, int cchDest, PCWSTR pszFmt, va_list arglist);
LWSTDAPIV_(int) wnsprintfA(PSTR pszDest, int cchDest, PCSTR pszFmt, ...);
LWSTDAPIV_(int) wnsprintfW(PWSTR pszDest, int cchDest, PCWSTR pszFmt, ...);

#define StrIntlEqNA( s1, s2, nChar)  StrIsIntlEqualA( TRUE, s1, s2, nChar)
#define StrIntlEqNW( s1, s2, nChar)  StrIsIntlEqualW( TRUE, s1, s2, nChar)
#define StrIntlEqNIA(s1, s2, nChar)  StrIsIntlEqualA(FALSE, s1, s2, nChar)
#define StrIntlEqNIW(s1, s2, nChar)  StrIsIntlEqualW(FALSE, s1, s2, nChar)

LWSTDAPI StrRetToStrA(STRRET *pstr, PCUITEMID_CHILD pidl, LPSTR *ppsz);
LWSTDAPI StrRetToStrW(STRRET *pstr, PCUITEMID_CHILD pidl, LPWSTR *ppsz);
#ifdef UNICODE
#define StrRetToStr  StrRetToStrW
#else /* !UNICODE */
#define StrRetToStr  StrRetToStrA
#endif /* !UNICODE */

LWSTDAPI StrRetToBufA(STRRET *pstr, PCUITEMID_CHILD pidl, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI StrRetToBufW(STRRET *pstr, PCUITEMID_CHILD pidl, LPWSTR pszBuf, UINT cchBuf);
#ifdef UNICODE
#define StrRetToBuf  StrRetToBufW
#else /* !UNICODE */
#define StrRetToBuf  StrRetToBufA
#endif /* !UNICODE */

LWSTDAPI SHStrDupA(LPCSTR psz, LPWSTR *ppwsz);
LWSTDAPI SHStrDupW(LPCWSTR psz, LPWSTR *ppwsz);
#ifdef UNICODE
#define SHStrDup  SHStrDupW
#else /* !UNICODE */
#define SHStrDup  SHStrDupA
#endif /* !UNICODE */

LWSTDAPI_(int) StrCmpLogicalW(PCWSTR psz1, PCWSTR psz2);
LWSTDAPI_(DWORD) StrCatChainW(PWSTR pszDst, DWORD cchDst, DWORD ichAt, PCWSTR pszSrc);
LWSTDAPI StrRetToBSTR(STRRET *pstr, PCUITEMID_CHILD pidl, BSTR *pbstr);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

LWSTDAPI SHLoadIndirectString(PCWSTR pszSource, PWSTR pszOutBuf, UINT cchOutBuf, void * *ppvReserved);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)

LWSTDAPI_(BOOL) IsCharSpaceA(CHAR wch);
LWSTDAPI_(BOOL) IsCharSpaceW(WCHAR wch);
#ifdef UNICODE
#define IsCharSpace  IsCharSpaceW
#else /* !UNICODE */
#define IsCharSpace  IsCharSpaceA
#endif /* !UNICODE */

LWSTDAPI_(int) StrCmpCA(LPCSTR pszStr1, LPCSTR pszStr2);
LWSTDAPI_(int) StrCmpCW(LPCWSTR pszStr1, LPCWSTR pszStr2);
#ifdef UNICODE
#define StrCmpC  StrCmpCW
#else /* !UNICODE */
#define StrCmpC  StrCmpCA
#endif /* !UNICODE */

LWSTDAPI_(int) StrCmpICA(LPCSTR pszStr1, LPCSTR pszStr2);
LWSTDAPI_(int) StrCmpICW(LPCWSTR pszStr1, LPCWSTR pszStr2);
#ifdef UNICODE
#define StrCmpIC  StrCmpICW
#else /* !UNICODE */
#define StrCmpIC  StrCmpICA
#endif /* !UNICODE */
#endif /* (_WIN32_IE >= _WIN32_IE_IE60SP2) */

#ifdef UNICODE
#define StrChr                  StrChrW
#define StrRChr                 StrRChrW
#define StrChrI                 StrChrIW
#define StrRChrI                StrRChrIW
#define StrCmpN                 StrCmpNW
#define StrCmpNI                StrCmpNIW
#define StrStr                  StrStrW
#define StrStrI                 StrStrIW
#define StrDup                  StrDupW
#define StrRStrI                StrRStrIW
#define StrCSpn                 StrCSpnW
#define StrCSpnI                StrCSpnIW
#define StrSpn                  StrSpnW
#define StrToInt                StrToIntW
#define StrPBrk                 StrPBrkW
#define StrToIntEx              StrToIntExW
#if (_WIN32_IE >= 0x0600)
#define StrToInt64Ex            StrToInt64ExW
#endif /* (_WIN32_IE >= 0x0600) */
#define StrFromTimeInterval     StrFromTimeIntervalW
#define StrIntlEqN              StrIntlEqNW
#define StrIntlEqNI             StrIntlEqNIW
#define StrFormatByteSize       StrFormatByteSizeW
#define StrFormatByteSize64     StrFormatByteSizeW
#define StrFormatKBSize         StrFormatKBSizeW
#define StrNCat                 StrNCatW
#define StrTrim                 StrTrimW
#define StrCatBuff              StrCatBuffW
#define ChrCmpI                 ChrCmpIW
#define wvnsprintf              wvnsprintfW
#define wnsprintf               wnsprintfW
#define StrIsIntlEqual          StrIsIntlEqualW
#else /* !UNICODE */
#define StrChr                  StrChrA
#define StrRChr                 StrRChrA
#define StrChrI                 StrChrIA
#define StrRChrI                StrRChrIA
#define StrCmpN                 StrCmpNA
#define StrCmpNI                StrCmpNIA
#define StrStr                  StrStrA
#define StrStrI                 StrStrIA
#define StrDup                  StrDupA
#define StrRStrI                StrRStrIA
#define StrCSpn                 StrCSpnA
#define StrCSpnI                StrCSpnIA
#define StrSpn                  StrSpnA
#define StrToInt                StrToIntA
#define StrPBrk                 StrPBrkA
#define StrToIntEx              StrToIntExA
#if (_WIN32_IE >= 0x0600)
#define StrToInt64Ex            StrToInt64ExA
#endif /* (_WIN32_IE >= 0x0600) */
#define StrFromTimeInterval     StrFromTimeIntervalA
#define StrIntlEqN              StrIntlEqNA
#define StrIntlEqNI             StrIntlEqNIA
#define StrFormatByteSize       StrFormatByteSizeA
#define StrFormatByteSize64     StrFormatByteSize64A
#define StrFormatKBSize         StrFormatKBSizeA
#define StrNCat                 StrNCatA
#define StrTrim                 StrTrimA
#define StrCatBuff              StrCatBuffA
#define ChrCmpI                 ChrCmpIA
#define wvnsprintf              wvnsprintfA
#define wnsprintf               wnsprintfA
#define StrIsIntlEqual          StrIsIntlEqualA
#endif /* !UNICODE */

LWSTDAPI_(int) StrCmpNCA(LPCSTR pszStr1, LPCSTR pszStr2, int nChar);
LWSTDAPI_(int) StrCmpNCW(LPCWSTR pszStr1, LPCWSTR pszStr2, int nChar);
#ifdef UNICODE
#define StrCmpNC  StrCmpNCW
#else /* !UNICODE */
#define StrCmpNC  StrCmpNCA
#endif /* !UNICODE */

LWSTDAPI_(int) StrCmpNICA(LPCSTR pszStr1, LPCSTR pszStr2, int nChar);
LWSTDAPI_(int) StrCmpNICW(LPCWSTR pszStr1, LPCWSTR pszStr2, int nChar);
#ifdef UNICODE
#define StrCmpNIC  StrCmpNICW
#else /* !UNICODE */
#define StrCmpNIC  StrCmpNICA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) IntlStrEqWorkerA(BOOL fCaseSens, LPCSTR lpString1, LPCSTR lpString2, int nChar);
LWSTDAPI_(BOOL) IntlStrEqWorkerW(BOOL fCaseSens, LPCWSTR lpString1, LPCWSTR lpString2, int nChar);

#define IntlStrEqNA( s1, s2, nChar)  IntlStrEqWorkerA( TRUE, s1, s2, nChar)
#define IntlStrEqNW( s1, s2, nChar)  IntlStrEqWorkerW( TRUE, s1, s2, nChar)
#define IntlStrEqNIA(s1, s2, nChar)  IntlStrEqWorkerA(FALSE, s1, s2, nChar)
#define IntlStrEqNIW(s1, s2, nChar)  IntlStrEqWorkerW(FALSE, s1, s2, nChar)

#ifdef UNICODE
#define IntlStrEqN      IntlStrEqNW
#define IntlStrEqNI     IntlStrEqNIW
#else /* !UNICODE */
#define IntlStrEqN      IntlStrEqNA
#define IntlStrEqNI     IntlStrEqNIA
#endif /* !UNICODE */

#define SZ_CONTENTTYPE_HTMLA    "text/html"
#define SZ_CONTENTTYPE_HTMLW    L"text/html"
#define SZ_CONTENTTYPE_CDFA     "application/x-cdf"
#define SZ_CONTENTTYPE_CDFW     L"application/x-cdf"

#ifdef UNICODE
#define SZ_CONTENTTYPE_HTML     SZ_CONTENTTYPE_HTMLW
#define SZ_CONTENTTYPE_CDF      SZ_CONTENTTYPE_CDFW
#else /* !UNICODE */
#define SZ_CONTENTTYPE_HTML     SZ_CONTENTTYPE_HTMLA
#define SZ_CONTENTTYPE_CDF      SZ_CONTENTTYPE_CDFA
#endif /* !UNICODE */

#define PathIsHTMLFileA(pszPath)     PathIsContentTypeA(pszPath, SZ_CONTENTTYPE_HTMLA)
#define PathIsHTMLFileW(pszPath)     PathIsContentTypeW(pszPath, SZ_CONTENTTYPE_HTMLW)

#define StrCatA                 lstrcatA
#define StrCmpA                 lstrcmpA
#define StrCmpIA                lstrcmpiA
#define StrCpyA                 lstrcpyA
#define StrCpyNA                lstrcpynA

#define StrToLong               StrToInt
#define StrNCmp                 StrCmpN
#define StrNCmpI                StrCmpNI
#define StrNCpy                 StrCpyN
#define StrCatN                 StrNCat

#ifdef UNICODE
#define StrCat                  StrCatW
#define StrCmp                  StrCmpW
#define StrCmpI                 StrCmpIW
#define StrCpy                  StrCpyW
#define StrCpyN                 StrCpyNW
#define StrCatBuff              StrCatBuffW
#else /* !UNICODE */
#define StrCat                  lstrcatA
#define StrCmp                  lstrcmpA
#define StrCmpI                 lstrcmpiA
#define StrCpy                  lstrcpyA
#define StrCpyN                 lstrcpynA
#define StrCatBuff              StrCatBuffA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* !NO_SHLWAPI_STRFCNS */

#ifndef NO_SHLWAPI_PATH

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

LWSTDAPI_(LPSTR) PathAddBackslashA(LPSTR pszPath);
LWSTDAPI_(LPWSTR) PathAddBackslashW(LPWSTR pszPath);
#ifdef UNICODE
#define PathAddBackslash  PathAddBackslashW
#else /* !UNICODE */
#define PathAddBackslash  PathAddBackslashA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathAddExtensionA(LPSTR pszPath, LPCSTR pszExt);
LWSTDAPI_(BOOL) PathAddExtensionW(LPWSTR pszPath, LPCWSTR pszExt);
#ifdef UNICODE
#define PathAddExtension  PathAddExtensionW
#else /* !UNICODE */
#define PathAddExtension  PathAddExtensionA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathAppendA(LPSTR pszPath, LPCSTR pszMore);
LWSTDAPI_(BOOL) PathAppendW(LPWSTR pszPath, LPCWSTR pszMore);

LWSTDAPI_(LPSTR) PathBuildRootA(LPSTR pszRoot, int iDrive);
LWSTDAPI_(LPWSTR) PathBuildRootW(LPWSTR pszRoot, int iDrive);
#ifdef UNICODE
#define PathBuildRoot  PathBuildRootW
#else /* !UNICODE */
#define PathBuildRoot  PathBuildRootA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathCanonicalizeA(LPSTR pszBuf, LPCSTR pszPath);
LWSTDAPI_(BOOL) PathCanonicalizeW(LPWSTR pszBuf, LPCWSTR pszPath);

LWSTDAPI_(LPSTR) PathCombineA(LPSTR pszDest, LPCSTR pszDir, LPCSTR pszFile);
LWSTDAPI_(LPWSTR) PathCombineW(LPWSTR pszDest, LPCWSTR pszDir, LPCWSTR pszFile);
#ifdef UNICODE
#define PathCombine  PathCombineW
#else /* !UNICODE */
#define PathCombine  PathCombineA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathCompactPathA(HDC hDC, LPSTR pszPath, UINT dx);
LWSTDAPI_(BOOL) PathCompactPathW(HDC hDC, LPWSTR pszPath, UINT dx);
LWSTDAPI_(BOOL) PathCompactPathExA(LPSTR pszOut, LPCSTR pszSrc, UINT cchMax, DWORD dwFlags);
LWSTDAPI_(BOOL) PathCompactPathExW(LPWSTR pszOut, LPCWSTR pszSrc, UINT cchMax, DWORD dwFlags);
LWSTDAPI_(int) PathCommonPrefixA(LPCSTR pszFile1, LPCSTR pszFile2, LPSTR achPath);
LWSTDAPI_(int) PathCommonPrefixW(LPCWSTR pszFile1, LPCWSTR pszFile2, LPWSTR achPath);

LWSTDAPI_(BOOL) PathFileExistsA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathFileExistsW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFileExists  PathFileExistsW
#else /* !UNICODE */
#define PathFileExists  PathFileExistsA
#endif /* !UNICODE */

#ifdef USE_STRICT_CONST

LWSTDAPI_(LPCSTR) PathFindExtensionA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathFindExtensionW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindExtension  PathFindExtensionW
#else /* !UNICODE */
#define PathFindExtension  PathFindExtensionA
#endif /* !UNICODE */

LWSTDAPI_(LPCSTR) PathFindFileNameA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathFindFileNameW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindFileName  PathFindFileNameW
#else /* !UNICODE */
#define PathFindFileName  PathFindFileNameA
#endif /* !UNICODE */

LWSTDAPI_(LPCSTR) PathFindNextComponentA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathFindNextComponentW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindNextComponent  PathFindNextComponentW
#else /* !UNICODE */
#define PathFindNextComponent  PathFindNextComponentA
#endif /* !UNICODE */

#else /* !USE_STRICT_CONST */

LWSTDAPI_(LPSTR) PathFindExtensionA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR) PathFindExtensionW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindExtension  PathFindExtensionW
#else /* !UNICODE */
#define PathFindExtension  PathFindExtensionA
#endif /* !UNICODE */

LWSTDAPI_(LPSTR) PathFindFileNameA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR) PathFindFileNameW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindFileName  PathFindFileNameW
#else /* !UNICODE */
#define PathFindFileName  PathFindFileNameA
#endif /* !UNICODE */

LWSTDAPI_(LPSTR) PathFindNextComponentA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR) PathFindNextComponentW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathFindNextComponent  PathFindNextComponentW
#else /* !UNICODE */
#define PathFindNextComponent  PathFindNextComponentA
#endif /* !UNICODE */

#endif /* !USE_STRICT_CONST */

LWSTDAPI_(BOOL) PathFindOnPathA(LPSTR pszPath, PZPCSTR ppszOtherDirs);
LWSTDAPI_(BOOL) PathFindOnPathW(LPWSTR pszPath, PZPCWSTR ppszOtherDirs);

LWSTDAPI_(LPCSTR) PathFindSuffixArrayA(LPCSTR pszPath, const LPCSTR *apszSuffix, int iArraySize);
LWSTDAPI_(LPCWSTR) PathFindSuffixArrayW(LPCWSTR pszPath, const LPCWSTR *apszSuffix, int iArraySize);
#ifdef UNICODE
#define PathFindSuffixArray  PathFindSuffixArrayW
#else /* !UNICODE */
#define PathFindSuffixArray  PathFindSuffixArrayA
#endif /* !UNICODE */

#ifdef USE_STRICT_CONST

LWSTDAPI_(LPCSTR) PathGetArgsA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathGetArgsW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathGetArgs  PathGetArgsW
#else /* !UNICODE */
#define PathGetArgs  PathGetArgsA
#endif /* !UNICODE */

#else /* !USE_STRICT_CONST */

LWSTDAPI_(LPSTR) PathGetArgsA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR) PathGetArgsW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathGetArgs  PathGetArgsW
#else /* !UNICODE */
#define PathGetArgs  PathGetArgsA
#endif /* !UNICODE */

#endif /* !USE_STRICT_CONST */

LWSTDAPI_(BOOL) PathIsLFNFileSpecA(LPCSTR pszName);
LWSTDAPI_(BOOL) PathIsLFNFileSpecW(LPCWSTR pszName);
#ifdef UNICODE
#define PathIsLFNFileSpec  PathIsLFNFileSpecW
#else /* !UNICODE */
#define PathIsLFNFileSpec  PathIsLFNFileSpecA
#endif /* !UNICODE */

LWSTDAPI_(UINT) PathGetCharTypeA(UCHAR ch);
LWSTDAPI_(UINT) PathGetCharTypeW(WCHAR ch);

#define GCT_INVALID         0x0000
#define GCT_LFNCHAR         0x0001
#define GCT_SHORTCHAR       0x0002
#define GCT_WILD            0x0004
#define GCT_SEPARATOR       0x0008

LWSTDAPI_(int) PathGetDriveNumberA(LPCSTR pszPath);
LWSTDAPI_(int) PathGetDriveNumberW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathGetDriveNumber  PathGetDriveNumberW
#else /* !UNICODE */
#define PathGetDriveNumber  PathGetDriveNumberA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsDirectoryA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsDirectoryW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsDirectory  PathIsDirectoryW
#else /* !UNICODE */
#define PathIsDirectory  PathIsDirectoryA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsDirectoryEmptyA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsDirectoryEmptyW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsDirectoryEmpty  PathIsDirectoryEmptyW
#else /* !UNICODE */
#define PathIsDirectoryEmpty  PathIsDirectoryEmptyA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsFileSpecA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsFileSpecW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsFileSpec  PathIsFileSpecW
#else /* !UNICODE */
#define PathIsFileSpec  PathIsFileSpecA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsPrefixA(LPCSTR pszPrefix, LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsPrefixW(LPCWSTR pszPrefix, LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsPrefix  PathIsPrefixW
#else /* !UNICODE */
#define PathIsPrefix  PathIsPrefixA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsRelativeA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsRelativeW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsRelative  PathIsRelativeW
#else /* !UNICODE */
#define PathIsRelative  PathIsRelativeA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsRootA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsRootW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsRoot  PathIsRootW
#else /* !UNICODE */
#define PathIsRoot  PathIsRootA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsSameRootA(LPCSTR pszPath1, LPCSTR pszPath2);
LWSTDAPI_(BOOL) PathIsSameRootW(LPCWSTR pszPath1, LPCWSTR pszPath2);
#ifdef UNICODE
#define PathIsSameRoot  PathIsSameRootW
#else /* !UNICODE */
#define PathIsSameRoot  PathIsSameRootA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsUNCA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsUNCW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsUNC  PathIsUNCW
#else /* !UNICODE */
#define PathIsUNC  PathIsUNCA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsNetworkPathA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsNetworkPathW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsNetworkPath  PathIsNetworkPathW
#else /* !UNICODE */
#define PathIsNetworkPath  PathIsNetworkPathA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsUNCServerA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsUNCServerW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsUNCServer  PathIsUNCServerW
#else /* !UNICODE */
#define PathIsUNCServer  PathIsUNCServerA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsUNCServerShareA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsUNCServerShareW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsUNCServerShare  PathIsUNCServerShareW
#else /* !UNICODE */
#define PathIsUNCServerShare  PathIsUNCServerShareA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsContentTypeA(LPCSTR pszPath, LPCSTR pszContentType);
LWSTDAPI_(BOOL) PathIsContentTypeW(LPCWSTR pszPath, LPCWSTR pszContentType);

LWSTDAPI_(BOOL) PathIsURLA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathIsURLW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathIsURL  PathIsURLW
#else /* !UNICODE */
#define PathIsURL  PathIsURLA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathMakePrettyA(LPSTR pszPath);
LWSTDAPI_(BOOL) PathMakePrettyW(LPWSTR pszPath);
LWSTDAPI_(BOOL) PathMatchSpecA(LPCSTR pszFile, LPCSTR pszSpec);
LWSTDAPI_(BOOL) PathMatchSpecW(LPCWSTR pszFile, LPCWSTR pszSpec);

#if (_WIN32_IE >= _WIN32_IE_IE70)

#define PMSF_NORMAL            0x00000000
#define PMSF_MULTIPLE          0x00000001
#define PMSF_DONT_STRIP_SPACES 0x00010000

LWSTDAPI PathMatchSpecExA(LPCSTR pszFile, LPCSTR pszSpec, DWORD dwFlags);
LWSTDAPI PathMatchSpecExW(LPCWSTR pszFile, LPCWSTR pszSpec, DWORD dwFlags);

#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */

LWSTDAPI_(int) PathParseIconLocationA(LPSTR pszIconFile);
LWSTDAPI_(int) PathParseIconLocationW(LPWSTR pszIconFile);
LWSTDAPI_(BOOL) PathQuoteSpacesA(LPSTR lpsz);
LWSTDAPI_(BOOL) PathQuoteSpacesW(LPWSTR lpsz);
LWSTDAPI_(BOOL) PathRelativePathToA(LPSTR pszPath, LPCSTR pszFrom, DWORD dwAttrFrom, LPCSTR pszTo, DWORD dwAttrTo);
LWSTDAPI_(BOOL) PathRelativePathToW(LPWSTR pszPath, LPCWSTR pszFrom, DWORD dwAttrFrom, LPCWSTR pszTo, DWORD dwAttrTo);
LWSTDAPI_(void) PathRemoveArgsA(LPSTR pszPath);
LWSTDAPI_(void) PathRemoveArgsW(LPWSTR pszPath);

LWSTDAPI_(LPSTR) PathRemoveBackslashA(LPSTR pszPath);
LWSTDAPI_(LPWSTR) PathRemoveBackslashW(LPWSTR pszPath);
#ifdef UNICODE
#define PathRemoveBackslash  PathRemoveBackslashW
#else /* !UNICODE */
#define PathRemoveBackslash  PathRemoveBackslashA
#endif /* !UNICODE */

LWSTDAPI_(void) PathRemoveBlanksA(LPSTR pszPath);
LWSTDAPI_(void) PathRemoveBlanksW(LPWSTR pszPath);
LWSTDAPI_(void) PathRemoveExtensionA(LPSTR pszPath);
LWSTDAPI_(void) PathRemoveExtensionW(LPWSTR pszPath);
LWSTDAPI_(BOOL) PathRemoveFileSpecA(LPSTR pszPath);
LWSTDAPI_(BOOL) PathRemoveFileSpecW(LPWSTR pszPath);
LWSTDAPI_(BOOL) PathRenameExtensionA(LPSTR pszPath, LPCSTR pszExt);
LWSTDAPI_(BOOL) PathRenameExtensionW(LPWSTR pszPath, LPCWSTR pszExt);
LWSTDAPI_(BOOL) PathSearchAndQualifyA(LPCSTR pszPath, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(BOOL) PathSearchAndQualifyW(LPCWSTR pszPath, LPWSTR pszBuf, UINT cchBuf);
LWSTDAPI_(void) PathSetDlgItemPathA(HWND hDlg, int id, LPCSTR pszPath);
LWSTDAPI_(void) PathSetDlgItemPathW(HWND hDlg, int id, LPCWSTR pszPath);

#ifdef USE_STRICT_CONST

LWSTDAPI_(LPCSTR) PathSkipRootA(LPCSTR pszPath);
LWSTDAPI_(LPCWSTR) PathSkipRootW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathSkipRoot  PathSkipRootW
#else /* !UNICODE */
#define PathSkipRoot  PathSkipRootA
#endif /* !UNICODE */

#else /* !USE_STRICT_CONST */

LWSTDAPI_(LPSTR) PathSkipRootA(LPCSTR pszPath);
LWSTDAPI_(LPWSTR) PathSkipRootW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathSkipRoot  PathSkipRootW
#else /* !UNICODE */
#define PathSkipRoot  PathSkipRootA
#endif /* !UNICODE */

#endif /* !USE_STRICT_CONST */

LWSTDAPI_(void) PathStripPathA(LPSTR pszPath);
LWSTDAPI_(void) PathStripPathW(LPWSTR pszPath);
#ifdef UNICODE
#define PathStripPath  PathStripPathW
#else /* !UNICODE */
#define PathStripPath  PathStripPathA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathStripToRootA(LPSTR pszPath);
LWSTDAPI_(BOOL) PathStripToRootW(LPWSTR pszPath);
#ifdef UNICODE
#define PathStripToRoot  PathStripToRootW
#else /* !UNICODE */
#define PathStripToRoot  PathStripToRootA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathUnquoteSpacesA(LPSTR lpsz);
LWSTDAPI_(BOOL) PathUnquoteSpacesW(LPWSTR lpsz);

LWSTDAPI_(BOOL) PathMakeSystemFolderA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathMakeSystemFolderW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathMakeSystemFolder  PathMakeSystemFolderW
#else /* !UNICODE */
#define PathMakeSystemFolder  PathMakeSystemFolderA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathUnmakeSystemFolderA(LPCSTR pszPath);
LWSTDAPI_(BOOL) PathUnmakeSystemFolderW(LPCWSTR pszPath);
#ifdef UNICODE
#define PathUnmakeSystemFolder  PathUnmakeSystemFolderW
#else /* !UNICODE */
#define PathUnmakeSystemFolder  PathUnmakeSystemFolderA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathIsSystemFolderA(LPCSTR pszPath, DWORD dwAttrb);
LWSTDAPI_(BOOL) PathIsSystemFolderW(LPCWSTR pszPath, DWORD dwAttrb);
#ifdef UNICODE
#define PathIsSystemFolder  PathIsSystemFolderW
#else /* !UNICODE */
#define PathIsSystemFolder  PathIsSystemFolderA
#endif /* !UNICODE */

LWSTDAPI_(void) PathUndecorateA(LPSTR pszPath);
LWSTDAPI_(void) PathUndecorateW(LPWSTR pszPath);
#ifdef UNICODE
#define PathUndecorate  PathUndecorateW
#else /* !UNICODE */
#define PathUndecorate  PathUndecorateA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) PathUnExpandEnvStringsA(LPCSTR pszPath, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(BOOL) PathUnExpandEnvStringsW(LPCWSTR pszPath, LPWSTR pszBuf, UINT cchBuf);
#ifdef UNICODE
#define PathUnExpandEnvStrings  PathUnExpandEnvStringsW
#else /* !UNICODE */
#define PathUnExpandEnvStrings  PathUnExpandEnvStringsA
#endif /* !UNICODE */

#ifdef UNICODE
#define PathAppend              PathAppendW
#define PathCanonicalize        PathCanonicalizeW
#define PathCompactPath         PathCompactPathW
#define PathCompactPathEx       PathCompactPathExW
#define PathCommonPrefix        PathCommonPrefixW
#define PathFindOnPath          PathFindOnPathW
#define PathGetCharType         PathGetCharTypeW
#define PathIsContentType       PathIsContentTypeW
#define PathIsHTMLFile          PathIsHTMLFileW
#define PathMakePretty          PathMakePrettyW
#define PathMatchSpec           PathMatchSpecW
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define PathMatchSpecEx         PathMatchSpecExW
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */
#define PathParseIconLocation   PathParseIconLocationW
#define PathQuoteSpaces         PathQuoteSpacesW
#define PathRelativePathTo      PathRelativePathToW
#define PathRemoveArgs          PathRemoveArgsW
#define PathRemoveBlanks        PathRemoveBlanksW
#define PathRemoveExtension     PathRemoveExtensionW
#define PathRemoveFileSpec      PathRemoveFileSpecW
#define PathRenameExtension     PathRenameExtensionW
#define PathSearchAndQualify    PathSearchAndQualifyW
#define PathSetDlgItemPath      PathSetDlgItemPathW
#define PathUnquoteSpaces       PathUnquoteSpacesW
#else /* !UNICODE */
#define PathAppend              PathAppendA
#define PathCanonicalize        PathCanonicalizeA
#define PathCompactPath         PathCompactPathA
#define PathCompactPathEx       PathCompactPathExA
#define PathCommonPrefix        PathCommonPrefixA
#define PathFindOnPath          PathFindOnPathA
#define PathGetCharType         PathGetCharTypeA
#define PathIsContentType       PathIsContentTypeA
#define PathIsHTMLFile          PathIsHTMLFileA
#define PathMakePretty          PathMakePrettyA
#define PathMatchSpec           PathMatchSpecA
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define PathMatchSpecEx         PathMatchSpecExA
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */
#define PathParseIconLocation   PathParseIconLocationA
#define PathQuoteSpaces         PathQuoteSpacesA
#define PathRelativePathTo      PathRelativePathToA
#define PathRemoveArgs          PathRemoveArgsA
#define PathRemoveBlanks        PathRemoveBlanksA
#define PathRemoveExtension     PathRemoveExtensionA
#define PathRemoveFileSpec      PathRemoveFileSpecA
#define PathRenameExtension     PathRenameExtensionA
#define PathSearchAndQualify    PathSearchAndQualifyA
#define PathSetDlgItemPath      PathSetDlgItemPathA
#define PathUnquoteSpaces       PathUnquoteSpacesA
#endif /* !UNICODE */

typedef enum {
    URL_SCHEME_INVALID = -1,
    URL_SCHEME_UNKNOWN = 0,
    URL_SCHEME_FTP,
    URL_SCHEME_HTTP,
    URL_SCHEME_GOPHER,
    URL_SCHEME_MAILTO,
    URL_SCHEME_NEWS,
    URL_SCHEME_NNTP,
    URL_SCHEME_TELNET,
    URL_SCHEME_WAIS,
    URL_SCHEME_FILE,
    URL_SCHEME_MK,
    URL_SCHEME_HTTPS,
    URL_SCHEME_SHELL,
    URL_SCHEME_SNEWS,
    URL_SCHEME_LOCAL,
    URL_SCHEME_JAVASCRIPT,
    URL_SCHEME_VBSCRIPT,
    URL_SCHEME_ABOUT,
    URL_SCHEME_RES,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    URL_SCHEME_MSSHELLROOTED,
    URL_SCHEME_MSSHELLIDLIST,
    URL_SCHEME_MSHELP,
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */
#if (_WIN32_IE >= _WIN32_IE_IE70)
    URL_SCHEME_MSSHELLDEVICE,
    URL_SCHEME_WILDCARD,
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */
#if (NTDDI_VERSION >= NTDDI_VISTA)
    URL_SCHEME_SEARCH_MS,
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
#if (NTDDI_VERSION >= NTDDI_VISTASP1)
    URL_SCHEME_SEARCH,
#endif /* (NTDDI_VERSION >= NTDDI_VISTASP1) */
#if (NTDDI_VERSION >= NTDDI_WIN7)
    URL_SCHEME_KNOWNFOLDER,
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */
    URL_SCHEME_MAXVALUE,
} URL_SCHEME;

typedef enum {
    URL_PART_NONE = 0,
    URL_PART_SCHEME = 1,
    URL_PART_HOSTNAME,
    URL_PART_USERNAME,
    URL_PART_PASSWORD,
    URL_PART_PORT,
    URL_PART_QUERY,
} URL_PART;

typedef enum {
    URLIS_URL,
    URLIS_OPAQUE,
    URLIS_NOHISTORY,
    URLIS_FILEURL,
    URLIS_APPLIABLE,
    URLIS_DIRECTORY,
    URLIS_HASQUERY,
} URLIS;

#define URL_UNESCAPE                    0x10000000
#define URL_ESCAPE_UNSAFE               0x20000000
#define URL_PLUGGABLE_PROTOCOL          0x40000000
#define URL_WININET_COMPATIBILITY       0x80000000
#define URL_DONT_ESCAPE_EXTRA_INFO      0x02000000
#define URL_DONT_UNESCAPE_EXTRA_INFO    URL_DONT_ESCAPE_EXTRA_INFO
#define URL_BROWSER_MODE                URL_DONT_ESCAPE_EXTRA_INFO
#define URL_ESCAPE_SPACES_ONLY          0x04000000
#define URL_DONT_SIMPLIFY               0x08000000
#define URL_NO_META                     URL_DONT_SIMPLIFY
#define URL_UNESCAPE_INPLACE            0x00100000
#define URL_CONVERT_IF_DOSPATH          0x00200000
#define URL_UNESCAPE_HIGH_ANSI_ONLY     0x00400000
#define URL_INTERNAL_PATH               0x00800000
#define URL_FILE_USE_PATHURL            0x00010000
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define URL_DONT_UNESCAPE               0x00020000
#endif /* (_WIN32_IE >= _WIN32_IE_IE60SP2) */
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define URL_ESCAPE_AS_UTF8              0x00040000
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define URL_UNESCAPE_AS_UTF8            URL_ESCAPE_AS_UTF8
#define URL_ESCAPE_ASCII_URI_COMPONENT  0x00080000
#define URL_ESCAPE_URI_COMPONENT        (URL_ESCAPE_ASCII_URI_COMPONENT | URL_ESCAPE_AS_UTF8)
#define URL_UNESCAPE_URI_COMPONENT      URL_UNESCAPE_AS_UTF8
#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */
#define URL_ESCAPE_PERCENT              0x00001000
#define URL_ESCAPE_SEGMENT_ONLY         0x00002000

#define URL_PARTFLAG_KEEPSCHEME         0x00000001

#define URL_APPLY_DEFAULT               0x00000001
#define URL_APPLY_GUESSSCHEME           0x00000002
#define URL_APPLY_GUESSFILE             0x00000004
#define URL_APPLY_FORCEAPPLY            0x00000008

LWSTDAPI_(int) UrlCompareA(PCSTR psz1, PCSTR psz2, BOOL fIgnoreSlash);
LWSTDAPI_(int) UrlCompareW(PCWSTR psz1, PCWSTR psz2, BOOL fIgnoreSlash);
LWSTDAPI UrlCombineA(PCSTR pszBase, PCSTR pszRelative, PSTR pszCombined, DWORD *pcchCombined, DWORD dwFlags);
LWSTDAPI UrlCombineW(PCWSTR pszBase, PCWSTR pszRelative, PWSTR pszCombined, DWORD *pcchCombined, DWORD dwFlags);
LWSTDAPI UrlCanonicalizeA(PCSTR pszUrl, PSTR pszCanonicalized, DWORD *pcchCanonicalized, DWORD dwFlags);
LWSTDAPI UrlCanonicalizeW(PCWSTR pszUrl, PWSTR pszCanonicalized, DWORD *pcchCanonicalized, DWORD dwFlags);
LWSTDAPI_(BOOL) UrlIsOpaqueA(PCSTR pszURL);
LWSTDAPI_(BOOL) UrlIsOpaqueW(PCWSTR pszURL);
LWSTDAPI_(BOOL) UrlIsNoHistoryA(PCSTR pszURL);
LWSTDAPI_(BOOL) UrlIsNoHistoryW(PCWSTR pszURL);
#define UrlIsFileUrlA(pszURL) UrlIsA(pszURL, URLIS_FILEURL)
#define UrlIsFileUrlW(pszURL) UrlIsW(pszURL, URLIS_FILEURL)
LWSTDAPI_(BOOL) UrlIsA(PCSTR pszUrl, URLIS UrlIs);
LWSTDAPI_(BOOL) UrlIsW(PCWSTR pszUrl, URLIS UrlIs);
LWSTDAPI_(LPCSTR) UrlGetLocationA(PCSTR pszURL);
LWSTDAPI_(LPCWSTR) UrlGetLocationW(PCWSTR pszURL);
LWSTDAPI UrlUnescapeA(PSTR pszUrl, PSTR pszUnescaped, DWORD *pcchUnescaped, DWORD dwFlags);
LWSTDAPI UrlUnescapeW(PWSTR pszUrl, PWSTR pszUnescaped, DWORD *pcchUnescaped, DWORD dwFlags);
LWSTDAPI UrlEscapeA(PCSTR pszUrl, PSTR pszEscaped, DWORD *pcchEscaped, DWORD dwFlags);
LWSTDAPI UrlEscapeW(PCWSTR pszUrl, PWSTR pszEscaped, DWORD *pcchEscaped, DWORD dwFlags);
LWSTDAPI UrlCreateFromPathA(PCSTR pszPath, PSTR pszUrl, DWORD *pcchUrl, DWORD dwFlags);
LWSTDAPI UrlCreateFromPathW(PCWSTR pszPath, PWSTR pszUrl, DWORD *pcchUrl, DWORD dwFlags);
LWSTDAPI PathCreateFromUrlA(PCSTR pszUrl, PSTR pszPath, DWORD *pcchPath, DWORD dwFlags);
LWSTDAPI PathCreateFromUrlW(PCWSTR pszUrl, PWSTR pszPath, DWORD *pcchPath, DWORD dwFlags);
#if (_WIN32_IE >= _WIN32_IE_IE70)
LWSTDAPI PathCreateFromUrlAlloc(PCWSTR pszIn, PWSTR *ppszOut, DWORD dwFlags);
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */
LWSTDAPI UrlHashA(PCSTR pszUrl, BYTE *pbHash, DWORD cbHash);
LWSTDAPI UrlHashW(PCWSTR pszUrl, BYTE *pbHash, DWORD cbHash);
LWSTDAPI UrlGetPartW(PCWSTR pszIn, PWSTR pszOut, DWORD *pcchOut, DWORD dwPart, DWORD dwFlags);
LWSTDAPI UrlGetPartA(PCSTR pszIn, PSTR pszOut, DWORD *pcchOut, DWORD dwPart, DWORD dwFlags);
LWSTDAPI UrlApplySchemeA(PCSTR pszIn, PSTR pszOut, DWORD *pcchOut, DWORD dwFlags);
LWSTDAPI UrlApplySchemeW(PCWSTR pszIn, PWSTR pszOut, DWORD *pcchOut, DWORD dwFlags);
LWSTDAPI HashData(BYTE *pbData, DWORD cbData, BYTE *pbHash, DWORD cbHash);
LWSTDAPI UrlFixupW(PCWSTR pcszUrl, PWSTR pszTranslatedUrl, DWORD cchMax);

#ifdef UNICODE
#define UrlCompare              UrlCompareW
#define UrlCombine              UrlCombineW
#define UrlCanonicalize         UrlCanonicalizeW
#define UrlIsOpaque             UrlIsOpaqueW
#define UrlIsFileUrl            UrlIsFileUrlW
#define UrlGetLocation          UrlGetLocationW
#define UrlUnescape             UrlUnescapeW
#define UrlEscape               UrlEscapeW
#define UrlCreateFromPath       UrlCreateFromPathW
#define PathCreateFromUrl       PathCreateFromUrlW
#define UrlHash                 UrlHashW
#define UrlGetPart              UrlGetPartW
#define UrlApplyScheme          UrlApplySchemeW
#define UrlIs                   UrlIsW
#define UrlFixup                UrlFixupW
#else /* !UNICODE */
#define UrlCompare              UrlCompareA
#define UrlCombine              UrlCombineA
#define UrlCanonicalize         UrlCanonicalizeA
#define UrlIsOpaque             UrlIsOpaqueA
#define UrlIsFileUrl            UrlIsFileUrlA
#define UrlGetLocation          UrlGetLocationA
#define UrlUnescape             UrlUnescapeA
#define UrlEscape               UrlEscapeA
#define UrlCreateFromPath       UrlCreateFromPathA
#define PathCreateFromUrl       PathCreateFromUrlA
#define UrlHash                 UrlHashA
#define UrlGetPart              UrlGetPartA
#define UrlApplyScheme          UrlApplySchemeA
#define UrlIs                   UrlIsA

#endif /* !UNICODE */

#define UrlEscapeSpaces(pszUrl, pszEscaped, pcchEscaped)  UrlCanonicalize(pszUrl, pszEscaped, pcchEscaped, URL_ESCAPE_SPACES_ONLY |URL_DONT_ESCAPE_EXTRA_INFO )
#define UrlUnescapeInPlace(pszUrl, dwFlags)               UrlUnescape(pszUrl, NULL, NULL, dwFlags | URL_UNESCAPE_INPLACE)

typedef struct tagPARSEDURLA {
    DWORD cbSize;
    LPCSTR pszProtocol;
    UINT cchProtocol;
    LPCSTR pszSuffix;
    UINT cchSuffix;
    UINT nScheme;
} PARSEDURLA, * PPARSEDURLA;
typedef struct tagPARSEDURLW {
    DWORD cbSize;
    LPCWSTR pszProtocol;
    UINT cchProtocol;
    LPCWSTR pszSuffix;
    UINT cchSuffix;
    UINT nScheme;
} PARSEDURLW, * PPARSEDURLW;
#ifdef UNICODE
typedef PARSEDURLW PARSEDURL;
typedef PPARSEDURLW PPARSEDURL;
#else /* !UNICODE */
typedef PARSEDURLA PARSEDURL;
typedef PPARSEDURLA PPARSEDURL;
#endif /* !UNICODE */

LWSTDAPI ParseURLA(LPCSTR pcszURL, PARSEDURLA * ppu);
LWSTDAPI ParseURLW(LPCWSTR pcszURL, PARSEDURLW * ppu);
#ifdef UNICODE
#define ParseURL  ParseURLW
#else /* !UNICODE */
#define ParseURL  ParseURLA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* !NO_SHLWAPI_PATH */

#ifndef NO_SHLWAPI_REG

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

LWSTDAPI_(LSTATUS) SHDeleteEmptyKeyA(HKEY hkey, LPCSTR pszSubKey);
LWSTDAPI_(LSTATUS) SHDeleteEmptyKeyW(HKEY hkey, LPCWSTR pszSubKey);
#ifdef UNICODE
#define SHDeleteEmptyKey  SHDeleteEmptyKeyW
#else /* !UNICODE */
#define SHDeleteEmptyKey  SHDeleteEmptyKeyA
#endif /* !UNICODE */

LWSTDAPI_(LSTATUS) SHDeleteKeyA(HKEY hkey, LPCSTR pszSubKey);
LWSTDAPI_(LSTATUS) SHDeleteKeyW(HKEY hkey, LPCWSTR pszSubKey);
#ifdef UNICODE
#define SHDeleteKey  SHDeleteKeyW
#else /* !UNICODE */
#define SHDeleteKey  SHDeleteKeyA
#endif /* !UNICODE */

LWSTDAPI_(HKEY) SHRegDuplicateHKey(HKEY hkey);

LWSTDAPI_(LSTATUS) SHDeleteValueA(HKEY hkey, LPCSTR pszSubKey, LPCSTR pszValue);
LWSTDAPI_(LSTATUS) SHDeleteValueW(HKEY hkey, LPCWSTR pszSubKey, LPCWSTR pszValue);
#ifdef UNICODE
#define SHDeleteValue  SHDeleteValueW
#else /* !UNICODE */
#define SHDeleteValue  SHDeleteValueA
#endif /* !UNICODE */

LWSTDAPI_(LSTATUS) SHGetValueA(
    HKEY hkey,
    LPCSTR pszSubKey,
    LPCSTR pszValue,
    DWORD *pdwType,
    void *pvData,
    DWORD *pcbData
);
LWSTDAPI_(LSTATUS) SHGetValueW(
    HKEY hkey,
    LPCWSTR pszSubKey,
    LPCWSTR pszValue,
    DWORD *pdwType,
    void *pvData,
    DWORD *pcbData
);
#ifdef UNICODE
#define SHGetValue  SHGetValueW
#else /* !UNICODE */
#define SHGetValue  SHGetValueA
#endif /* !UNICODE */

LWSTDAPI_(LSTATUS) SHSetValueA(
    HKEY hkey,
    LPCSTR pszSubKey,
    LPCSTR pszValue,
    DWORD dwType,
    LPCVOID pvData,
    DWORD cbData
);
LWSTDAPI_(LSTATUS) SHSetValueW(
    HKEY hkey,
    LPCWSTR pszSubKey,
    LPCWSTR pszValue,
    DWORD dwType,
    LPCVOID pvData,
    DWORD cbData
);
#ifdef UNICODE
#define SHSetValue  SHSetValueW
#else /* !UNICODE */
#define SHSetValue  SHSetValueA
#endif /* !UNICODE */

#if (_WIN32_IE >= 0x0602)

typedef int SRRF;

#define SRRF_RT_REG_NONE        0x00000001
#define SRRF_RT_REG_SZ          0x00000002
#define SRRF_RT_REG_EXPAND_SZ   0x00000004
#define SRRF_RT_REG_BINARY      0x00000008
#define SRRF_RT_REG_DWORD       0x00000010
#define SRRF_RT_REG_MULTI_SZ    0x00000020
#define SRRF_RT_REG_QWORD       0x00000040

#define SRRF_RT_DWORD           (SRRF_RT_REG_BINARY | SRRF_RT_REG_DWORD)
#define SRRF_RT_QWORD           (SRRF_RT_REG_BINARY | SRRF_RT_REG_QWORD)
#define SRRF_RT_ANY             0x0000ffff

#define SRRF_RM_ANY             0x00000000
#define SRRF_RM_NORMAL          0x00010000
#define SRRF_RM_SAFE            0x00020000
#define SRRF_RM_SAFENETWORK     0x00040000

#define SRRF_NOEXPAND           0x10000000
#define SRRF_ZEROONFAILURE      0x20000000
#define SRRF_NOVIRT             0x40000000

LWSTDAPI_(LSTATUS) SHRegGetValueA(
    HKEY hkey,
    LPCSTR pszSubKey,
    LPCSTR pszValue,
    SRRF srrfFlags,
    DWORD *pdwType,
    void *pvData,
    DWORD *pcbData
);
LWSTDAPI_(LSTATUS) SHRegGetValueW(
    HKEY hkey,
    LPCWSTR pszSubKey,
    LPCWSTR pszValue,
    SRRF srrfFlags,
    DWORD *pdwType,
    void *pvData,
    DWORD *pcbData
);
#ifdef UNICODE
#define SHRegGetValue  SHRegGetValueW
#else /* !UNICODE */
#define SHRegGetValue  SHRegGetValueA
#endif /* !UNICODE */

LWSTDAPI_(LSTATUS) SHRegSetValue(
    HKEY hkey,
    LPCWSTR pszSubKey,
    LPCWSTR pszValue,
    SRRF srrfFlags,
    DWORD dwType,
    LPCVOID pvData,
    DWORD cbData
);

LWSTDAPI_(LSTATUS) SHRegGetValueFromHKCUHKLM(
    PCWSTR pwszKey,
    PCWSTR pwszValue,
    SRRF srrfFlags,
    DWORD* pdwType,
    void * pvData,
    DWORD * pcbData
);

STDAPI_(BOOL) SHRegGetBoolValueFromHKCUHKLM(
    PCWSTR pszKey,
    PCWSTR pszValue,
    BOOL fDefault
);

#endif /* (_WIN32_IE >= 0x0602) */

LWSTDAPI_(LSTATUS) SHQueryValueExA(
    HKEY hkey,
    LPCSTR pszValue,
    DWORD *pdwReserved,
    DWORD *pdwType,
    void *pvData,
    DWORD *pcbData
);
LWSTDAPI_(LSTATUS) SHQueryValueExW(
    HKEY hkey,
    LPCWSTR pszValue,
    DWORD *pdwReserved,
    DWORD *pdwType,
    void *pvData,
    DWORD *pcbData
);
#ifdef UNICODE
#define SHQueryValueEx  SHQueryValueExW
#else /* !UNICODE */
#define SHQueryValueEx  SHQueryValueExA
#endif /* !UNICODE */

LWSTDAPI_(LSTATUS) SHEnumKeyExA(HKEY hkey, DWORD dwIndex, LPSTR pszName, LPDWORD pcchName);
LWSTDAPI_(LSTATUS) SHEnumKeyExW(HKEY hkey, DWORD dwIndex, LPWSTR pszName, LPDWORD pcchName);
LWSTDAPI_(LSTATUS) SHEnumValueA(HKEY hkey, DWORD dwIndex, PSTR pszValueName, LPDWORD pcchValueName, LPDWORD pdwType, void *pvData, LPDWORD pcbData);
LWSTDAPI_(LSTATUS) SHEnumValueW(HKEY hkey, DWORD dwIndex, PWSTR pszValueName, LPDWORD pcchValueName, LPDWORD pdwType, void *pvData, LPDWORD pcbData);
LWSTDAPI_(LSTATUS) SHQueryInfoKeyA(HKEY hkey, LPDWORD pcSubKeys, LPDWORD pcchMaxSubKeyLen, LPDWORD pcValues, LPDWORD pcchMaxValueNameLen);
LWSTDAPI_(LSTATUS) SHQueryInfoKeyW(HKEY hkey, LPDWORD pcSubKeys, LPDWORD pcchMaxSubKeyLen, LPDWORD pcValues, LPDWORD pcchMaxValueNameLen);

LWSTDAPI_(LSTATUS) SHCopyKeyA(HKEY hkeySrc, LPCSTR pszSrcSubKey, HKEY hkeyDest, DWORD fReserved);
LWSTDAPI_(LSTATUS) SHCopyKeyW(HKEY hkeySrc, LPCWSTR pszSrcSubKey, HKEY hkeyDest, DWORD fReserved);

LWSTDAPI_(LSTATUS) SHRegGetPathA(HKEY hKey, LPCSTR pcszSubKey, LPCSTR pcszValue, LPSTR pszPath, DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegGetPathW(HKEY hKey, LPCWSTR pcszSubKey, LPCWSTR pcszValue, LPWSTR pszPath, DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegSetPathA(HKEY hKey, LPCSTR pcszSubKey, LPCSTR pcszValue, LPCSTR pcszPath, DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegSetPathW(HKEY hKey, LPCWSTR pcszSubKey, LPCWSTR pcszValue, LPCWSTR pcszPath, DWORD dwFlags);

#ifdef UNICODE
#define SHEnumKeyEx           SHEnumKeyExW
#define SHEnumValue           SHEnumValueW
#define SHQueryInfoKey        SHQueryInfoKeyW
#define SHCopyKey             SHCopyKeyW
#define SHRegGetPath          SHRegGetPathW
#define SHRegSetPath          SHRegSetPathW
#else /* !UNICODE */
#define SHEnumKeyEx           SHEnumKeyExA
#define SHEnumValue           SHEnumValueA
#define SHQueryInfoKey        SHQueryInfoKeyA
#define SHCopyKey             SHCopyKeyA
#define SHRegGetPath          SHRegGetPathA
#define SHRegSetPath          SHRegSetPathA
#endif /* !UNICODE */

typedef enum {
    SHREGDEL_DEFAULT = 0x00000000,
    SHREGDEL_HKCU = 0x00000001,
    SHREGDEL_HKLM = 0x00000010,
    SHREGDEL_BOTH = 0x00000011,
} SHREGDEL_FLAGS;

typedef enum {
    SHREGENUM_DEFAULT = 0x00000000,
    SHREGENUM_HKCU = 0x00000001,
    SHREGENUM_HKLM = 0x00000010,
    SHREGENUM_BOTH = 0x00000011,
} SHREGENUM_FLAGS;

#define SHREGSET_HKCU           0x00000001
#define SHREGSET_FORCE_HKCU     0x00000002
#define SHREGSET_HKLM           0x00000004
#define SHREGSET_FORCE_HKLM     0x00000008
#define SHREGSET_DEFAULT        (SHREGSET_FORCE_HKCU | SHREGSET_HKLM)

typedef HANDLE HUSKEY;
typedef HUSKEY *PHUSKEY;

LWSTDAPI_(LSTATUS) SHRegCreateUSKeyA(LPCSTR pszPath, REGSAM samDesired, HUSKEY hRelativeUSKey, PHUSKEY phNewUSKey, DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegCreateUSKeyW(LPCWSTR pwzPath, REGSAM samDesired, HUSKEY hRelativeUSKey, PHUSKEY phNewUSKey, DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegOpenUSKeyA(LPCSTR pszPath, REGSAM samDesired, HUSKEY hRelativeUSKey, PHUSKEY phNewUSKey, BOOL fIgnoreHKCU);
LWSTDAPI_(LSTATUS) SHRegOpenUSKeyW(LPCWSTR pwzPath, REGSAM samDesired, HUSKEY hRelativeUSKey, PHUSKEY phNewUSKey, BOOL fIgnoreHKCU);
LWSTDAPI_(LSTATUS) SHRegQueryUSValueA(HUSKEY hUSKey, LPCSTR pszValue, DWORD * pdwType, void * pvData, DWORD * pcbData, BOOL fIgnoreHKCU, void * pvDefaultData, DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS) SHRegQueryUSValueW(HUSKEY hUSKey, LPCWSTR pszValue, DWORD * pdwType, void * pvData, DWORD * pcbData, BOOL fIgnoreHKCU, void * pvDefaultData, DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS) SHRegWriteUSValueA(HUSKEY hUSKey, LPCSTR pszValue, DWORD dwType, const void *pvData, DWORD cbData, DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegWriteUSValueW(HUSKEY hUSKey, LPCWSTR pwzValue, DWORD dwType, const void *pvData, DWORD cbData, DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegDeleteUSValueA(HUSKEY hUSKey, LPCSTR pszValue, SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS) SHRegDeleteUSValueW(HUSKEY hUSKey, LPCWSTR pwzValue, SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS) SHRegDeleteEmptyUSKeyW(HUSKEY hUSKey, LPCWSTR pwzSubKey, SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS) SHRegDeleteEmptyUSKeyA(HUSKEY hUSKey, LPCSTR pszSubKey, SHREGDEL_FLAGS delRegFlags);
LWSTDAPI_(LSTATUS) SHRegEnumUSKeyA(HUSKEY hUSKey, DWORD dwIndex, LPSTR pszName, LPDWORD pcchName, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegEnumUSKeyW(HUSKEY hUSKey, DWORD dwIndex, LPWSTR pwzName, LPDWORD pcchName, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegEnumUSValueA(HUSKEY hUSkey, DWORD dwIndex, LPSTR pszValueName, LPDWORD pcchValueName, LPDWORD pdwType, void *pvData, LPDWORD pcbData, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegEnumUSValueW(HUSKEY hUSkey, DWORD dwIndex, LPWSTR pszValueName, LPDWORD pcchValueName, LPDWORD pdwType, void *pvData, LPDWORD pcbData, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegQueryInfoUSKeyA(HUSKEY hUSKey, LPDWORD pcSubKeys, LPDWORD pcchMaxSubKeyLen, LPDWORD pcValues, LPDWORD pcchMaxValueNameLen, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegQueryInfoUSKeyW(HUSKEY hUSKey, LPDWORD pcSubKeys, LPDWORD pcchMaxSubKeyLen, LPDWORD pcValues, LPDWORD pcchMaxValueNameLen, SHREGENUM_FLAGS enumRegFlags);
LWSTDAPI_(LSTATUS) SHRegCloseUSKey(HUSKEY hUSKey);
STDAPI_(LSTATUS) SHRegGetUSValueA(LPCSTR pszSubKey, LPCSTR pszValue, DWORD *pdwType, void *pvData, DWORD *pcbData, BOOL fIgnoreHKCU, void *pvDefaultData, DWORD dwDefaultDataSize);
STDAPI_(LSTATUS) SHRegGetUSValueW(LPCWSTR pszSubKey, LPCWSTR pszValue, DWORD *pdwType, void *pvData, DWORD *pcbData, BOOL fIgnoreHKCU, void *pvDefaultData, DWORD dwDefaultDataSize);
LWSTDAPI_(LSTATUS) SHRegSetUSValueA(LPCSTR pszSubKey, LPCSTR pszValue, DWORD dwType, const void *pvData, DWORD cbData, DWORD dwFlags);
LWSTDAPI_(LSTATUS) SHRegSetUSValueW(LPCWSTR pwzSubKey, LPCWSTR pwzValue, DWORD dwType, const void *pvData, DWORD cbData, DWORD dwFlags);
LWSTDAPI_(int) SHRegGetIntW(HKEY hk, PCWSTR pwzKey, int iDefault);

#ifdef UNICODE
#define SHRegCreateUSKey        SHRegCreateUSKeyW
#define SHRegOpenUSKey          SHRegOpenUSKeyW
#define SHRegQueryUSValue       SHRegQueryUSValueW
#define SHRegWriteUSValue       SHRegWriteUSValueW
#define SHRegDeleteUSValue      SHRegDeleteUSValueW
#define SHRegDeleteEmptyUSKey   SHRegDeleteEmptyUSKeyW
#define SHRegEnumUSKey          SHRegEnumUSKeyW
#define SHRegEnumUSValue        SHRegEnumUSValueW
#define SHRegQueryInfoUSKey     SHRegQueryInfoUSKeyW
#define SHRegGetUSValue         SHRegGetUSValueW
#define SHRegSetUSValue         SHRegSetUSValueW
#define SHRegGetInt             SHRegGetIntW
#else /* !UNICODE */
#define SHRegCreateUSKey        SHRegCreateUSKeyA
#define SHRegOpenUSKey          SHRegOpenUSKeyA
#define SHRegQueryUSValue       SHRegQueryUSValueA
#define SHRegWriteUSValue       SHRegWriteUSValueA
#define SHRegDeleteUSValue      SHRegDeleteUSValueA
#define SHRegDeleteEmptyUSKey   SHRegDeleteEmptyUSKeyA
#define SHRegEnumUSKey          SHRegEnumUSKeyA
#define SHRegEnumUSValue        SHRegEnumUSValueA
#define SHRegQueryInfoUSKey     SHRegQueryInfoUSKeyA
#define SHRegGetUSValue         SHRegGetUSValueA
#define SHRegSetUSValue         SHRegSetUSValueA
#endif /* !UNICODE */

LWSTDAPI_(BOOL) SHRegGetBoolUSValueA(LPCSTR pszSubKey, LPCSTR pszValue, BOOL fIgnoreHKCU, BOOL fDefault);
LWSTDAPI_(BOOL) SHRegGetBoolUSValueW(LPCWSTR pszSubKey, LPCWSTR pszValue, BOOL fIgnoreHKCU, BOOL fDefault);
#ifdef UNICODE
#define SHRegGetBoolUSValue  SHRegGetBoolUSValueW
#else /* !UNICODE */
#define SHRegGetBoolUSValue  SHRegGetBoolUSValueA
#endif /* !UNICODE */

enum {
    ASSOCF_NONE = 0x00000000,
    ASSOCF_INIT_NOREMAPCLSID = 0x00000001,
    ASSOCF_INIT_BYEXENAME = 0x00000002,
    ASSOCF_OPEN_BYEXENAME = 0x00000002,
    ASSOCF_INIT_DEFAULTTOSTAR = 0x00000004,
    ASSOCF_INIT_DEFAULTTOFOLDER = 0x00000008,
    ASSOCF_NOUSERSETTINGS = 0x00000010,
    ASSOCF_NOTRUNCATE = 0x00000020,
    ASSOCF_VERIFY = 0x00000040,
    ASSOCF_REMAPRUNDLL = 0x00000080,
    ASSOCF_NOFIXUPS = 0x00000100,
    ASSOCF_IGNOREBASECLASS = 0x00000200,
    ASSOCF_INIT_IGNOREUNKNOWN = 0x00000400,
#if (NTDDI_VERSION >= NTDDI_WIN8)
    ASSOCF_INIT_FIXED_PROGID = 0x00000800,
    ASSOCF_IS_PROTOCOL = 0x00001000,
    ASSOCF_INIT_FOR_FILE = 0x00002000,
#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */
#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
    ASSOCF_IS_FULL_URI = 0x00004000,
    ASSOCF_PER_MACHINE_ONLY = 0x00008000,
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS1) */
#if (NTDDI_VERSION >= NTDDI_WIN10_RS4)
    ASSOCF_APP_TO_APP = 0x00010000,
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS4) */
};
typedef DWORD ASSOCF;

typedef enum {
    ASSOCSTR_COMMAND = 1,
    ASSOCSTR_EXECUTABLE,
    ASSOCSTR_FRIENDLYDOCNAME,
    ASSOCSTR_FRIENDLYAPPNAME,
    ASSOCSTR_NOOPEN,
    ASSOCSTR_SHELLNEWVALUE,
    ASSOCSTR_DDECOMMAND,
    ASSOCSTR_DDEIFEXEC,
    ASSOCSTR_DDEAPPLICATION,
    ASSOCSTR_DDETOPIC,
    ASSOCSTR_INFOTIP,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    ASSOCSTR_QUICKTIP,
    ASSOCSTR_TILEINFO,
    ASSOCSTR_CONTENTTYPE,
    ASSOCSTR_DEFAULTICON,
    ASSOCSTR_SHELLEXTENSION,
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */
#if (_WIN32_IE >= _WIN32_IE_IE80)
    ASSOCSTR_DROPTARGET,
    ASSOCSTR_DELEGATEEXECUTE,
#endif /* (_WIN32_IE >= _WIN32_IE_IE80) */
    ASSOCSTR_SUPPORTED_URI_PROTOCOLS,
#if (NTDDI_VERSION >= NTDDI_WIN10)
    ASSOCSTR_PROGID,
    ASSOCSTR_APPID,
    ASSOCSTR_APPPUBLISHER,
    ASSOCSTR_APPICONREFERENCE,
#endif /* (NTDDI_VERSION >= NTDDI_WIN10) */
    ASSOCSTR_MAX
} ASSOCSTR;

typedef enum {
    ASSOCKEY_SHELLEXECCLASS = 1,
    ASSOCKEY_APP,
    ASSOCKEY_CLASS,
    ASSOCKEY_BASECLASS,
    ASSOCKEY_MAX
} ASSOCKEY;

typedef enum {
    ASSOCDATA_MSIDESCRIPTOR = 1,
    ASSOCDATA_NOACTIVATEHANDLER,
    ASSOCDATA_UNUSED1,
    ASSOCDATA_HASPERUSERASSOC,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    ASSOCDATA_EDITFLAGS,
    ASSOCDATA_VALUE,
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */
    ASSOCDATA_MAX
} ASSOCDATA;

typedef enum {
    ASSOCENUM_NONE
} ASSOCENUM;

typedef enum {
    FTA_None = 0x00000000,
    FTA_Exclude = 0x00000001,
    FTA_Show = 0x00000002,
    FTA_HasExtension = 0x00000004,
    FTA_NoEdit = 0x00000008,
    FTA_NoRemove = 0x00000010,
    FTA_NoNewVerb = 0x00000020,
    FTA_NoEditVerb = 0x00000040,
    FTA_NoRemoveVerb = 0x00000080,
    FTA_NoEditDesc = 0x00000100,
    FTA_NoEditIcon = 0x00000200,
    FTA_NoEditDflt = 0x00000400,
    FTA_NoEditVerbCmd = 0x00000800,
    FTA_NoEditVerbExe = 0x00001000,
    FTA_NoDDE = 0x00002000,
    FTA_NoEditMIME = 0x00008000,
    FTA_OpenIsSafe = 0x00010000,
    FTA_AlwaysUnsafe = 0x00020000,
    FTA_NoRecentDocs = 0x00100000,
    FTA_SafeForElevation = 0x00200000,
    FTA_AlwaysUseDirectInvoke = 0x00400000,
} FILETYPEATTRIBUTEFLAGS;
/*DEFINE_ENUM_FLAG_OPERATORS(FILETYPEATTRIBUTEFLAGS)*/

#undef INTERFACE
#define INTERFACE IQueryAssociations
DECLARE_INTERFACE_IID_(IQueryAssociations, IUnknown, "c46ca590-3c3f-11d2-bee6-0000f805ca57" )
{
    STDMETHOD (Init)(THIS_ ASSOCF flags, LPCWSTR pszAssoc, HKEY hkProgid, HWND hwnd) PURE;
    STDMETHOD(GetString)(THIS_ ASSOCF flags, ASSOCSTR str, LPCWSTR pszExtra, LPWSTR pszOut, DWORD *pcchOut) PURE;
    STDMETHOD(GetKey)(THIS_ ASSOCF flags, ASSOCKEY key, LPCWSTR pszExtra, HKEY *phkeyOut) PURE;
    STDMETHOD(GetData)(THIS_ ASSOCF flags, ASSOCDATA data, LPCWSTR pszExtra, void * pvOut, DWORD *pcbOut) PURE;
    STDMETHOD(GetEnum)(THIS_ ASSOCF flags, ASSOCENUM assocenum, LPCWSTR pszExtra, REFIID riid, void **ppvOut) PURE;
};

LWSTDAPI AssocCreate(CLSID clsid, REFIID riid, void * *ppv);
STDAPI_(DWORD) SHGetAssocKeys(IQueryAssociations *pqa, HKEY *rgKeys, DWORD cKeys);

LWSTDAPI AssocQueryStringA(ASSOCF flags, ASSOCSTR str, LPCSTR pszAssoc, LPCSTR pszExtra, LPSTR pszOut, DWORD *pcchOut);
LWSTDAPI AssocQueryStringW(ASSOCF flags, ASSOCSTR str, LPCWSTR pszAssoc, LPCWSTR pszExtra, LPWSTR pszOut, DWORD *pcchOut);
#ifdef UNICODE
#define AssocQueryString  AssocQueryStringW
#else /* !UNICODE */
#define AssocQueryString  AssocQueryStringA
#endif /* !UNICODE */

LWSTDAPI AssocQueryStringByKeyA(ASSOCF flags, ASSOCSTR str, HKEY hkAssoc, LPCSTR pszExtra, LPSTR pszOut, DWORD *pcchOut);
LWSTDAPI AssocQueryStringByKeyW(ASSOCF flags, ASSOCSTR str, HKEY hkAssoc, LPCWSTR pszExtra, LPWSTR pszOut, DWORD *pcchOut);
#ifdef UNICODE
#define AssocQueryStringByKey  AssocQueryStringByKeyW
#else /* !UNICODE */
#define AssocQueryStringByKey  AssocQueryStringByKeyA
#endif /* !UNICODE */

LWSTDAPI AssocQueryKeyA(ASSOCF flags, ASSOCKEY key, LPCSTR pszAssoc, LPCSTR pszExtra, HKEY *phkeyOut);
LWSTDAPI AssocQueryKeyW(ASSOCF flags, ASSOCKEY key, LPCWSTR pszAssoc, LPCWSTR pszExtra, HKEY *phkeyOut);
#ifdef UNICODE
#define AssocQueryKey  AssocQueryKeyW
#else /* !UNICODE */
#define AssocQueryKey  AssocQueryKeyA
#endif /* !UNICODE */

#if (_WIN32_IE >= 0x0601)
LWSTDAPI_(BOOL) AssocIsDangerous(PCWSTR pszAssoc);
#endif /* (_WIN32_IE >= 0x0601) */

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
LWSTDAPI AssocGetPerceivedType(PCWSTR pszExt, PERCEIVED *ptype, PERCEIVEDFLAG *pflag, PWSTR *ppszType);
#endif /* (_WIN32_IE >= _WIN32_IE_IE60SP2) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* !NO_SHLWAPI_REG */

#ifndef NO_SHLWAPI_STREAM

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef __IStream_FWD_DEFINED__
#define __IStream_FWD_DEFINED__
typedef interface IStream IStream;
#endif /* !__IStream_FWD_DEFINED__ */

LWSTDAPI_(IStream *) SHOpenRegStreamA(HKEY hkey, LPCSTR pszSubkey, LPCSTR pszValue, DWORD grfMode);
LWSTDAPI_(IStream *) SHOpenRegStreamW(HKEY hkey, LPCWSTR pszSubkey, LPCWSTR pszValue, DWORD grfMode);
#ifdef UNICODE
#define SHOpenRegStream  SHOpenRegStreamW
#else /* !UNICODE */
#define SHOpenRegStream  SHOpenRegStreamA
#endif /* !UNICODE */

LWSTDAPI_(IStream *) SHOpenRegStream2A(HKEY hkey, LPCSTR pszSubkey, LPCSTR pszValue, DWORD grfMode);
LWSTDAPI_(IStream *) SHOpenRegStream2W(HKEY hkey, LPCWSTR pszSubkey, LPCWSTR pszValue, DWORD grfMode);
#ifdef UNICODE
#define SHOpenRegStream2  SHOpenRegStream2W
#else /* !UNICODE */
#define SHOpenRegStream2  SHOpenRegStream2A
#endif /* !UNICODE */

#undef SHOpenRegStream
#define SHOpenRegStream SHOpenRegStream2

LWSTDAPI SHCreateStreamOnFileA(LPCSTR pszFile, DWORD grfMode, IStream * *ppstm);
LWSTDAPI SHCreateStreamOnFileW(LPCWSTR pszFile, DWORD grfMode, IStream * *ppstm);
#ifdef UNICODE
#define SHCreateStreamOnFile  SHCreateStreamOnFileW
#else /* !UNICODE */
#define SHCreateStreamOnFile  SHCreateStreamOnFileA
#endif /* !UNICODE */

#if (_WIN32_IE >= 0x0600)
LWSTDAPI SHCreateStreamOnFileEx(LPCWSTR pszFile, DWORD grfMode, DWORD dwAttributes, BOOL fCreate, IStream *pstmTemplate, IStream * *ppstm);
#endif /* (_WIN32_IE >= 0x0600) */

LWSTDAPI_(IStream *) SHCreateMemStream(const BYTE *pInit, UINT cbInit);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* !NO_SHLWAPI_STREAM */

#ifndef NO_SHLWAPI_HTTP

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if (_WIN32_IE >= 0x0603)
LWSTDAPI GetAcceptLanguagesA(LPSTR pszLanguages, DWORD *pcchLanguages);
LWSTDAPI GetAcceptLanguagesW(LPWSTR pszLanguages, DWORD *pcchLanguages);
#ifdef UNICODE
#define GetAcceptLanguages  GetAcceptLanguagesW
#else /* !UNICODE */
#define GetAcceptLanguages  GetAcceptLanguagesA
#endif /* !UNICODE */
#endif /* (_WIN32_IE >= 0x0603) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#endif /* !NO_SHLWAPI_HTTP */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (_WIN32_IE < _WIN32_IE_IE70) && !defined(NO_SHLWAPI_STOPWATCH)

#define SPMODE_SHELL      0x00000001
#define SPMODE_DEBUGOUT   0x00000002
#define SPMODE_TEST       0x00000004
#define SPMODE_BROWSER    0x00000008
#define SPMODE_FLUSH      0x00000010
#define SPMODE_EVENT      0x00000020
#define SPMODE_MSVM       0x00000040
#define SPMODE_FORMATTEXT 0x00000080
#define SPMODE_PROFILE    0x00000100
#define SPMODE_DEBUGBREAK 0x00000200
#define SPMODE_MSGTRACE   0x00000400
#define SPMODE_PERFTAGS   0x00000800
#define SPMODE_MEMWATCH   0x00001000
#define SPMODE_DBMON      0x00002000
#define SPMODE_MULTISTOP  0x00004000
#ifndef NO_ETW_TRACING
#define SPMODE_EVENTTRACE 0x00008000
#endif /* !NO_ETW_TRACING */

DWORD WINAPI StopWatchMode(void);
DWORD WINAPI StopWatchFlush(void);

#endif /* (_WIN32_IE < _WIN32_IE_IE70) && !defined(NO_SHLWAPI_STOPWATCH) */

LWSTDAPI_(void) IUnknown_Set(IUnknown * * ppunk, IUnknown * punk);
LWSTDAPI_(void) IUnknown_AtomicRelease(void * * ppunk);
LWSTDAPI IUnknown_GetWindow(IUnknown * punk, HWND * phwnd);
LWSTDAPI IUnknown_SetSite(IUnknown *punk, IUnknown *punkSite);
LWSTDAPI IUnknown_GetSite(IUnknown *punk, REFIID riid, void * *ppv);
LWSTDAPI IUnknown_QueryService(IUnknown * punk, REFGUID guidService, REFIID riid, void * * ppvOut);

#undef IStream_Read
#undef IStream_Write

LWSTDAPI IStream_Read(IStream *pstm, void *pv, ULONG cb);
LWSTDAPI IStream_Write(IStream *pstm, const void *pv, ULONG cb);
LWSTDAPI IStream_Reset(IStream *pstm);
LWSTDAPI IStream_Size(IStream *pstm, ULARGE_INTEGER *pui);

#ifndef __IConnectionPoint_FWD_DEFINED__
#define __IConnectionPoint_FWD_DEFINED__
typedef interface IConnectionPoint IConnectionPoint;
#endif /* !__IConnectionPoint_FWD_DEFINED__ */

LWSTDAPI ConnectToConnectionPoint(IUnknown * punk, REFIID riidEvent, BOOL fConnect, IUnknown * punkTarget, DWORD * pdwCookie, IConnectionPoint * * ppcpOut);

#if (NTDDI_VERSION >= NTDDI_VISTA)
LWSTDAPI IStream_ReadPidl(IStream *pstm, PIDLIST_RELATIVE *ppidlOut);
LWSTDAPI IStream_WritePidl(IStream *pstm, PCUIDLIST_RELATIVE pidlWrite);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (_WIN32_IE >= _WIN32_IE_IE70)
LWSTDAPI IStream_ReadStr(IStream *pstm, PWSTR *ppsz);
LWSTDAPI IStream_WriteStr(IStream *pstm, PCWSTR psz);
LWSTDAPI IStream_Copy(IStream *pstmFrom, IStream *pstmTo, DWORD cb);
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */

#if (_WIN32_IE >= 0x0600)
#define SHGVSPB_PERUSER             0x00000001
#define SHGVSPB_ALLUSERS            0x00000002
#define SHGVSPB_PERFOLDER           0x00000004
#define SHGVSPB_ALLFOLDERS          0x00000008
#define SHGVSPB_INHERIT             0x00000010
#define SHGVSPB_ROAM                0x00000020
#define SHGVSPB_NOAUTODEFAULTS      0x80000000

#define SHGVSPB_FOLDER              (SHGVSPB_PERUSER | SHGVSPB_PERFOLDER)
#define SHGVSPB_FOLDERNODEFAULTS    (SHGVSPB_PERUSER | SHGVSPB_PERFOLDER | SHGVSPB_NOAUTODEFAULTS)
#define SHGVSPB_USERDEFAULTS        (SHGVSPB_PERUSER | SHGVSPB_ALLFOLDERS)
#define SHGVSPB_GLOBALDEFAULTS      (SHGVSPB_ALLUSERS | SHGVSPB_ALLFOLDERS)

LWSTDAPI SHGetViewStatePropertyBag(PCIDLIST_ABSOLUTE pidl, PCWSTR pszBagName, DWORD dwFlags, REFIID riid, void * *ppv);
#endif /* (_WIN32_IE >= 0x0600) */

#define FDTF_SHORTTIME          0x00000001
#define FDTF_SHORTDATE          0x00000002
#define FDTF_DEFAULT            (FDTF_SHORTDATE | FDTF_SHORTTIME)
#define FDTF_LONGDATE           0x00000004
#define FDTF_LONGTIME           0x00000008
#define FDTF_RELATIVE           0x00000010
#define FDTF_LTRDATE            0x00000100
#define FDTF_RTLDATE            0x00000200
#define FDTF_NOAUTOREADINGORDER 0x00000400

LWSTDAPI_(int) SHFormatDateTimeA(const FILETIME UNALIGNED * pft, DWORD * pdwFlags, LPSTR pszBuf, UINT cchBuf);
LWSTDAPI_(int) SHFormatDateTimeW(const FILETIME UNALIGNED * pft, DWORD * pdwFlags, LPWSTR pszBuf, UINT cchBuf);
#ifdef UNICODE
#define SHFormatDateTime  SHFormatDateTimeW
#else /* !UNICODE */
#define SHFormatDateTime  SHFormatDateTimeA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

LWSTDAPI_(int) SHAnsiToUnicode(PCSTR pszSrc, PWSTR pwszDst, int cwchBuf);
LWSTDAPI_(int) SHAnsiToAnsi(PCSTR pszSrc, PSTR pszDst, int cchBuf);
LWSTDAPI_(int) SHUnicodeToAnsi(PCWSTR pwszSrc, PSTR pszDst, int cchBuf);
LWSTDAPI_(int) SHUnicodeToUnicode(PCWSTR pwzSrc, PWSTR pwzDst, int cwchBuf);

#ifdef UNICODE
#define SHTCharToUnicode(wzSrc, wzDest, cchSize)                SHUnicodeToUnicode(wzSrc, wzDest, cchSize)
#define SHTCharToAnsi(wzSrc, szDest, cchSize)                   SHUnicodeToAnsi(wzSrc, szDest, cchSize)
#define SHUnicodeToTChar(wzSrc, wzDest, cchSize)                SHUnicodeToUnicode(wzSrc, wzDest, cchSize)
#define SHAnsiToTChar(szSrc, wzDest, cchSize)                   SHAnsiToUnicode(szSrc, wzDest, cchSize)
#else /* !UNICODE */
#define SHTCharToUnicode(szSrc, wzDest, cchSize)                SHAnsiToUnicode(szSrc, wzDest, cchSize)
#define SHTCharToAnsi(szSrc, szDest, cchSize)                   SHAnsiToAnsi(szSrc, szDest, cchSize)
#define SHUnicodeToTChar(wzSrc, szDest, cchSize)                SHUnicodeToAnsi(wzSrc, szDest, cchSize)
#define SHAnsiToTChar(szSrc, szDest, cchSize)                   SHAnsiToAnsi(szSrc, szDest, cchSize)
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

LWSTDAPI_(int) SHMessageBoxCheckA(HWND hwnd, LPCSTR pszText, LPCSTR pszCaption, UINT uType, int iDefault, LPCSTR pszRegVal);
LWSTDAPI_(int) SHMessageBoxCheckW(HWND hwnd, LPCWSTR pszText, LPCWSTR pszCaption, UINT uType, int iDefault, LPCWSTR pszRegVal);
#ifdef UNICODE
#define SHMessageBoxCheck  SHMessageBoxCheckW
#else /* !UNICODE */
#define SHMessageBoxCheck  SHMessageBoxCheckA
#endif /* !UNICODE */

LWSTDAPI_(LRESULT) SHSendMessageBroadcastA(UINT uMsg, WPARAM wParam, LPARAM lParam);
LWSTDAPI_(LRESULT) SHSendMessageBroadcastW(UINT uMsg, WPARAM wParam, LPARAM lParam);
#ifdef UNICODE
#define SHSendMessageBroadcast  SHSendMessageBroadcastW
#else /* !UNICODE */
#define SHSendMessageBroadcast  SHSendMessageBroadcastA
#endif /* !UNICODE */

LWSTDAPI_(CHAR) SHStripMneumonicA(LPSTR pszMenu);
LWSTDAPI_(WCHAR) SHStripMneumonicW(LPWSTR pszMenu);
#ifdef UNICODE
#define SHStripMneumonic  SHStripMneumonicW
#else /* !UNICODE */
#define SHStripMneumonic  SHStripMneumonicA
#endif /* !UNICODE */

#ifndef NO_SHLWAPI_ISOS

#define OS_WINDOWS                  0
#define OS_NT                       1
#define OS_WIN95ORGREATER           2
#define OS_NT4ORGREATER             3
#define OS_WIN98ORGREATER           5
#define OS_WIN98_GOLD               6
#define OS_WIN2000ORGREATER         7

#define OS_WIN2000PRO               8
#define OS_WIN2000SERVER            9
#define OS_WIN2000ADVSERVER         10
#define OS_WIN2000DATACENTER        11
#define OS_WIN2000TERMINAL          12

#define OS_EMBEDDED                 13
#define OS_TERMINALCLIENT           14
#define OS_TERMINALREMOTEADMIN      15
#define OS_WIN95_GOLD               16
#define OS_MEORGREATER              17
#define OS_XPORGREATER              18
#define OS_HOME                     19
#define OS_PROFESSIONAL             20
#define OS_DATACENTER               21
#define OS_ADVSERVER                22
#define OS_SERVER                   23
#define OS_TERMINALSERVER           24
#define OS_PERSONALTERMINALSERVER   25
#define OS_FASTUSERSWITCHING        26
#define OS_WELCOMELOGONUI           27
#define OS_DOMAINMEMBER             28
#define OS_ANYSERVER                29
#define OS_WOW6432                  30
#define OS_WEBSERVER                31
#define OS_SMALLBUSINESSSERVER      32
#define OS_TABLETPC                 33
#define OS_SERVERADMINUI            34
#define OS_MEDIACENTER              35
#define OS_APPLIANCE                36

LWSTDAPI_(BOOL) IsOS(DWORD dwOS);

#endif /* !NO_SHLWAPI_ISOS */

typedef enum {
    GLOBALCOUNTER_SEARCHMANAGER,
    GLOBALCOUNTER_SEARCHOPTIONS,
    GLOBALCOUNTER_FOLDERSETTINGSCHANGE,
    GLOBALCOUNTER_RATINGS,
    GLOBALCOUNTER_APPROVEDSITES,
    GLOBALCOUNTER_RESTRICTIONS,
    GLOBALCOUNTER_SHELLSETTINGSCHANGED,
    GLOBALCOUNTER_SYSTEMPIDLCHANGE,
    GLOBALCOUNTER_OVERLAYMANAGER,
    GLOBALCOUNTER_QUERYASSOCIATIONS,
    GLOBALCOUNTER_IESESSIONS,
    GLOBALCOUNTER_IEONLY_SESSIONS,
    GLOBALCOUNTER_APPLICATION_DESTINATIONS,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_CSCSYNCINPROGRESS,
    GLOBALCOUNTER_BITBUCKETNUMDELETERS,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_SHARES,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_A,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_B,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_C,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_D,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_E,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_F,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_G,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_H,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_I,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_J,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_K,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_L,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_M,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_N,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_O,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_P,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Q,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_R,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_S,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_T,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_U,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_V,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_W,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_X,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Y,
    GLOBALCOUNTER_RECYCLEDIRTYCOUNT_DRIVE_Z,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_RECYCLEDIRTYCOUNT_SERVERDRIVE,
    __UNUSED_RECYCLE_WAS_GLOBALCOUNTER_RECYCLEGLOBALDIRTYCOUNT,
    GLOBALCOUNTER_RECYCLEBINENUM,
    GLOBALCOUNTER_RECYCLEBINCORRUPTED,
    GLOBALCOUNTER_RATINGS_STATECOUNTER,
    GLOBALCOUNTER_PRIVATE_PROFILE_CACHE,
    GLOBALCOUNTER_INTERNETTOOLBAR_LAYOUT,
    GLOBALCOUNTER_FOLDERDEFINITION_CACHE,
    GLOBALCOUNTER_COMMONPLACES_LIST_CACHE,
    GLOBALCOUNTER_PRIVATE_PROFILE_CACHE_MACHINEWIDE,
    GLOBALCOUNTER_ASSOCCHANGED,
#if (NTDDI_VERSION >= NTDDI_WIN8)
    GLOBALCOUNTER_APP_ITEMS_STATE_STORE_CACHE,
    GLOBALCOUNTER_SETTINGSYNC_ENABLED,
    GLOBALCOUNTER_APPSFOLDER_FILETYPEASSOCIATION_COUNTER,
    GLOBALCOUNTER_USERINFOCHANGED,
#if (NTDDI_VERSION >= NTDDI_WINBLUE)
    GLOBALCOUNTER_SYNC_ENGINE_INFORMATION_CACHE_MACHINEWIDE,
#endif /* (NTDDI_VERSION >= NTDDI_WINBLUE) */
#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */
#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
    GLOBALCOUNTER_BANNERS_DATAMODEL_CACHE_MACHINEWIDE,
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS1) */
    GLOBALCOUNTER_MAXIMUMVALUE
} SHGLOBALCOUNTER;

#if (NTDDI_VERSION >= NTDDI_WIN7)
LWSTDAPI_(long) SHGlobalCounterGetValue(const SHGLOBALCOUNTER id);
LWSTDAPI_(long) SHGlobalCounterIncrement(const SHGLOBALCOUNTER id);
LWSTDAPI_(long) SHGlobalCounterDecrement(const SHGLOBALCOUNTER id);
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#if (_WIN32_IE >= 0x0603)
LWSTDAPI_(HANDLE) SHAllocShared(const void *pvData, DWORD dwSize, DWORD dwProcessId);
LWSTDAPI_(BOOL) SHFreeShared(HANDLE hData, DWORD dwProcessId);
LWSTDAPI_(void *) SHLockShared(HANDLE hData, DWORD dwProcessId);
LWSTDAPI_(BOOL) SHUnlockShared(void *pvData);
#endif /* (_WIN32_IE >= 0x0603) */

LWSTDAPI_(UINT) WhichPlatform(void);

#define PLATFORM_UNKNOWN     0
#define PLATFORM_IE3         1
#define PLATFORM_BROWSERONLY 1
#define PLATFORM_INTEGRATED  2

typedef struct {
    const IID * piid;
    DWORD dwOffset;
} QITAB, *LPQITAB;
typedef const QITAB *LPCQITAB;

#define QITABENTMULTI(Cthis, Ifoo, Iimpl) \
    { (IID*) &IID_##Ifoo, OFFSETOFCLASS(Iimpl, Cthis) }

#define QITABENTMULTI2(Cthis, Ifoo, Iimpl) \
    { (IID*) &Ifoo, OFFSETOFCLASS(Iimpl, Cthis) }

#define QITABENT(Cthis, Ifoo)  QITABENTMULTI(Cthis, Ifoo, Ifoo)

STDAPI QISearch(void * that, LPCQITAB pqit, REFIID riid, void * *ppv);

#ifndef STATIC_CAST
#define STATIC_CAST(typ)   static_cast<typ>
#ifndef _X86_
#undef  STATIC_CAST
#define STATIC_CAST(typ)  (typ)
#endif
#endif

#ifndef OFFSETOFCLASS
#define OFFSETOFCLASS(base, derived) \
    ((DWORD)(DWORD_PTR)(STATIC_CAST(base*)((derived*)8))-8)
#endif

#define ILMM_IE4   0

LWSTDAPI_(BOOL) SHIsLowMemoryMachine(DWORD dwType);
LWSTDAPI_(int) GetMenuPosFromID(HMENU hmenu, UINT id);
LWSTDAPI SHGetInverseCMAP(BYTE *pbMap, ULONG cbMap);

#define SHACF_DEFAULT                   0x00000000
#define SHACF_FILESYSTEM                0x00000001
#define SHACF_URLALL                    (SHACF_URLHISTORY | SHACF_URLMRU)
#define SHACF_URLHISTORY                0x00000002
#define SHACF_URLMRU                    0x00000004
#define SHACF_USETAB                    0x00000008
#define SHACF_FILESYS_ONLY              0x00000010
#if (_WIN32_IE >= 0x0600)
#define SHACF_FILESYS_DIRS              0x00000020
#endif /* (_WIN32_IE >= 0x0600) */
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SHACF_VIRTUAL_NAMESPACE         0x00000040
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */
#define SHACF_AUTOSUGGEST_FORCE_ON      0x10000000
#define SHACF_AUTOSUGGEST_FORCE_OFF     0x20000000
#define SHACF_AUTOAPPEND_FORCE_ON       0x40000000
#define SHACF_AUTOAPPEND_FORCE_OFF      0x80000000

LWSTDAPI SHAutoComplete(HWND hwndEdit, DWORD dwFlags);

#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
LWSTDAPI SHCreateThreadRef(LONG *pcRef, IUnknown * *ppunk);
#endif /* (_WIN32_IE >= _WIN32_IE_IE60SP2) */
LWSTDAPI SHSetThreadRef(IUnknown *punk);
LWSTDAPI SHGetThreadRef(IUnknown * *ppunk);

LWSTDAPI_(BOOL) SHSkipJunction(IBindCtx * pbc, const CLSID *pclsid);

enum {
    CTF_INSIST = 0x00000001,
    CTF_THREAD_REF = 0x00000002,
    CTF_PROCESS_REF = 0x00000004,
    CTF_COINIT_STA = 0x00000008,
    CTF_COINIT = 0x00000008,
#if (_WIN32_IE >= _WIN32_IE_IE60)
    CTF_FREELIBANDEXIT = 0x00000010,
    CTF_REF_COUNTED = 0x00000020,
    CTF_WAIT_ALLOWCOM = 0x00000040,
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */
#if (_WIN32_IE >= _WIN32_IE_IE70)
    CTF_UNUSED = 0x00000080,
    CTF_INHERITWOW64 = 0x00000100,
#endif /* (_WIN32_IE >= _WIN32_IE_IE70) */
#if (NTDDI_VERSION >= NTDDI_VISTA)
    CTF_WAIT_NO_REENTRANCY = 0x00000200,
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */
#if (NTDDI_VERSION >= NTDDI_WIN7)
    CTF_KEYBOARD_LOCALE = 0x00000400,
    CTF_OLEINITIALIZE = 0x00000800,
    CTF_COINIT_MTA = 0x00001000,
    CTF_NOADDREFLIB = 0x00002000,
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */
};

typedef DWORD SHCT_FLAGS;

LWSTDAPI_(BOOL) SHCreateThread(LPTHREAD_START_ROUTINE pfnThreadProc, void *pData, SHCT_FLAGS flags, LPTHREAD_START_ROUTINE pfnCallback);
LWSTDAPI_(BOOL) SHCreateThreadWithHandle(LPTHREAD_START_ROUTINE pfnThreadProc, void *pData, SHCT_FLAGS flags, LPTHREAD_START_ROUTINE pfnCallback, HANDLE *pHandle);

#if (NTDDI_VERSION >= NTDDI_WIN8)
LWSTDAPI_(void) SetProcessReference(IUnknown *punk);
LWSTDAPI GetProcessReference(IUnknown **punk);
#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

#if (_WIN32_IE >= _WIN32_IE_IE60)
LWSTDAPI SHReleaseThreadRef(void);
#endif /* (_WIN32_IE >= _WIN32_IE_IE60) */

#ifndef NO_SHLWAPI_GDI

LWSTDAPI_(HPALETTE) SHCreateShellPalette(HDC hdc);

LWSTDAPI_(void) ColorRGBToHLS(COLORREF clrRGB, WORD* pwHue, WORD * pwLuminance, WORD* pwSaturation);
LWSTDAPI_(COLORREF) ColorHLSToRGB(WORD wHue, WORD wLuminance, WORD wSaturation);
LWSTDAPI_(COLORREF) ColorAdjustLuma(COLORREF clrRGB, int n, BOOL fScale);

#endif /* !NO_SHLWAPI_GDI */

typedef struct _DLLVERSIONINFO {
    DWORD cbSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformID;
} DLLVERSIONINFO;

#define DLLVER_PLATFORM_WINDOWS         0x00000001
#define DLLVER_PLATFORM_NT              0x00000002

typedef struct _DLLVERSIONINFO2 {
    DLLVERSIONINFO info1;
    DWORD dwFlags;
    ULONGLONG ullVersion;
} DLLVERSIONINFO2;

#define DLLVER_MAJOR_MASK       0xFFFF000000000000
#define DLLVER_MINOR_MASK       0x0000FFFF00000000
#define DLLVER_BUILD_MASK       0x00000000FFFF0000
#define DLLVER_QFE_MASK         0x000000000000FFFF

#define MAKEDLLVERULL(major, minor, build, qfe) \
    (((ULONGLONG)(major) << 48) |        \
     ((ULONGLONG)(minor) << 32) |        \
     ((ULONGLONG)(build) << 16) |        \
     ((ULONGLONG)(  qfe) <<  0))

typedef HRESULT (CALLBACK * DLLGETVERSIONPROC)(DLLVERSIONINFO *);

STDAPI DllInstall(BOOL bInstall, PCWSTR pszCmdLine);

#if (_WIN32_IE >= 0x0602)
LWSTDAPI_(BOOL) IsInternetESCEnabled(void);
#endif /* (_WIN32_IE >= 0x0602) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <poppack.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* !NOSHLWAPI */

#endif /* _SHLWAPI_H */
