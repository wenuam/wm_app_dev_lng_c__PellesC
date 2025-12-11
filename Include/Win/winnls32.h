#ifndef _WINNLS32_H
#define _WINNLS32_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows NT 3.x compatible FarEast IMM component definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef struct _tagDATETIME {
    WORD year;
    WORD month;
    WORD day;
    WORD hour;
    WORD min;
    WORD sec;
} DATETIME;

typedef struct _tagIMEPROA {
    HWND hWnd;
    DATETIME InstDate;
    UINT wVersion;
    BYTE szDescription[50];
    BYTE szName[80];
    BYTE szOptions[30];
} IMEPROA, *PIMEPROA, *NPIMEPROA, *LPIMEPROA;
typedef struct _tagIMEPROW {
    HWND hWnd;
    DATETIME InstDate;
    UINT wVersion;
    WCHAR szDescription[50];
    WCHAR szName[80];
    WCHAR szOptions[30];
} IMEPROW, *PIMEPROW, *NPIMEPROW, *LPIMEPROW;
#ifdef UNICODE
typedef IMEPROW IMEPRO;
typedef PIMEPROW PIMEPRO;
typedef NPIMEPROW NPIMEPRO;
typedef LPIMEPROW LPIMEPRO;
#else /* !UNICODE */
typedef IMEPROA IMEPRO;
typedef PIMEPROA PIMEPRO;
typedef NPIMEPROA NPIMEPRO;
typedef LPIMEPROA LPIMEPRO;
#endif /* !UNICODE */

BOOL WINAPI IMPGetIMEA(HWND, LPIMEPROA);
BOOL WINAPI IMPGetIMEW(HWND, LPIMEPROW);
#ifdef UNICODE
#define IMPGetIME  IMPGetIMEW
#else /* !UNICODE */
#define IMPGetIME  IMPGetIMEA
#endif /* !UNICODE */

BOOL WINAPI IMPQueryIMEA(LPIMEPROA);
BOOL WINAPI IMPQueryIMEW(LPIMEPROW);
#ifdef UNICODE
#define IMPQueryIME  IMPQueryIMEW
#else /* !UNICODE */
#define IMPQueryIME  IMPQueryIMEA
#endif /* !UNICODE */

BOOL WINAPI IMPSetIMEA(HWND, LPIMEPROA);
BOOL WINAPI IMPSetIMEW(HWND, LPIMEPROW);
#ifdef UNICODE
#define IMPSetIME  IMPSetIMEW
#else /* !UNICODE */
#define IMPSetIME  IMPSetIMEA
#endif /* !UNICODE */

UINT WINAPI WINNLSGetIMEHotkey(HWND);
BOOL WINAPI WINNLSEnableIME(HWND, BOOL);
BOOL WINAPI WINNLSGetEnableStatus(HWND);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _WINNLS32_H */
