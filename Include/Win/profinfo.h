#ifndef _PROFINFO_H
#define _PROFINFO_H

#if __POCC__ >= 500
#pragma once
#endif

/* Profile info definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifdef __midl
/* #define FAR */
#define MIDL_STRING [string, unique]
#else /* !__midl */
#define MIDL_STRING
#endif /* !__midl */

typedef struct _PROFILEINFOA {
    DWORD dwSize;
    DWORD dwFlags;
    MIDL_STRING LPSTR lpUserName;
    MIDL_STRING LPSTR lpProfilePath;
    MIDL_STRING LPSTR lpDefaultPath;
    MIDL_STRING LPSTR lpServerName;
    MIDL_STRING LPSTR lpPolicyPath;
#ifdef __midl
    ULONG_PTR hProfile;
#else /* !__midl */
    HANDLE hProfile;
#endif /* !__midl */
} PROFILEINFOA, *LPPROFILEINFOA;
typedef struct _PROFILEINFOW {
    DWORD dwSize;
    DWORD dwFlags;
    MIDL_STRING LPWSTR lpUserName;
    MIDL_STRING LPWSTR lpProfilePath;
    MIDL_STRING LPWSTR lpDefaultPath;
    MIDL_STRING LPWSTR lpServerName;
    MIDL_STRING LPWSTR lpPolicyPath;
#ifdef __midl
    ULONG_PTR hProfile;
#else /* !__midl */
    HANDLE hProfile;
#endif /* !__midl */
} PROFILEINFOW, * LPPROFILEINFOW;
#ifdef UNICODE
typedef PROFILEINFOW PROFILEINFO;
typedef LPPROFILEINFOW LPPROFILEINFO;
#else /* !UNICODE */
typedef PROFILEINFOA PROFILEINFO;
typedef LPPROFILEINFOA LPPROFILEINFO;
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _PROFINFO_H */
