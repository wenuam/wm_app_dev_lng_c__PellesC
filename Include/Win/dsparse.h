#ifndef _DSPARSE_H
#define _DSPARSE_H

#if __POCC__ >= 500
#pragma once
#endif

/* whatever */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#include <schedule.h>

#define DSPARSE

typedef enum _DS_MANGLE_FOR {
    DS_MANGLE_UNKNOWN = 0,
    DS_MANGLE_OBJECT_RDN_FOR_DELETION,
    DS_MANGLE_OBJECT_RDN_FOR_NAME_CONFLICT,
} DS_MANGLE_FOR;

DSPARSE DWORD WINAPI DsMakeSpnW(
    LPCWSTR ServiceClass,
    LPCWSTR ServiceName,
    LPCWSTR InstanceName,
    USHORT InstancePort,
    LPCWSTR Referrer,
    DWORD *pcSpnLength,
    LPWSTR pszSpn
);
DSPARSE DWORD WINAPI DsMakeSpnA(
    LPCSTR ServiceClass,
    LPCSTR ServiceName,
    LPCSTR InstanceName,
    USHORT InstancePort,
    LPCSTR Referrer,
    DWORD *pcSpnLength,
    LPSTR pszSpn
);
#ifdef UNICODE
#define DsMakeSpn DsMakeSpnW
#else /* !UNICODE */
#define DsMakeSpn DsMakeSpnA
#endif /* !UNICODE */

DSPARSE DWORD WINAPI DsCrackSpnA(
    LPCSTR pszSpn,
    LPDWORD pcServiceClass,
    LPSTR ServiceClass,
    LPDWORD pcServiceName,
    LPSTR ServiceName,
    LPDWORD pcInstanceName,
    LPSTR InstanceName,
    USHORT *pInstancePort
);
DSPARSE DWORD WINAPI DsCrackSpnW(
    LPCWSTR pszSpn,
    DWORD *pcServiceClass,
    LPWSTR ServiceClass,
    DWORD *pcServiceName,
    LPWSTR ServiceName,
    DWORD *pcInstanceName,
    LPWSTR InstanceName,
    USHORT *pInstancePort
);
#ifdef UNICODE
#define DsCrackSpn DsCrackSpnW
#else /* !UNICODE */
#define DsCrackSpn DsCrackSpnA
#endif /* !UNICODE */

#ifndef MIDL_PASS

DSPARSE DWORD WINAPI DsQuoteRdnValueW(
    DWORD cUnquotedRdnValueLength,
    LPCWCH psUnquotedRdnValue,
    DWORD *pcQuotedRdnValueLength,
    LPWCH psQuotedRdnValue
);

DSPARSE DWORD WINAPI DsQuoteRdnValueA(
    DWORD cUnquotedRdnValueLength,
    LPCCH psUnquotedRdnValue,
    DWORD *pcQuotedRdnValueLength,
    LPCH psQuotedRdnValue
);

#ifdef UNICODE
#define DsQuoteRdnValue DsQuoteRdnValueW
#else /* !UNICODE */
#define DsQuoteRdnValue DsQuoteRdnValueA
#endif /* !UNICODE */

DSPARSE DWORD WINAPI DsUnquoteRdnValueW(
    DWORD cQuotedRdnValueLength,
    LPCWCH psQuotedRdnValue,
    DWORD *pcUnquotedRdnValueLength,
    LPWCH psUnquotedRdnValue
);

DSPARSE DWORD WINAPI DsUnquoteRdnValueA(
    DWORD cQuotedRdnValueLength,
    LPCCH psQuotedRdnValue,
    DWORD *pcUnquotedRdnValueLength,
    LPCH psUnquotedRdnValue
);

#ifdef UNICODE
#define DsUnquoteRdnValue DsUnquoteRdnValueW
#else /* !UNICODE */
#define DsUnquoteRdnValue DsUnquoteRdnValueA
#endif /* !UNICODE */

DSPARSE DWORD WINAPI DsGetRdnW(
    LPCWCH *ppDN,
    DWORD *pcDN,
    LPCWCH *ppKey,
    DWORD *pcKey,
    LPCWCH *ppVal,
    DWORD *pcVal
);

DSPARSE BOOL WINAPI DsCrackUnquotedMangledRdnW(
    LPCWSTR pszRDN,
    DWORD cchRDN,
    GUID *pGuid,
    DS_MANGLE_FOR *peDsMangleFor
);

DSPARSE BOOL WINAPI DsCrackUnquotedMangledRdnA(
    LPCSTR pszRDN,
    DWORD cchRDN,
    GUID *pGuid,
    DS_MANGLE_FOR *peDsMangleFor
);

#ifdef UNICODE
#define DsCrackUnquotedMangledRdn DsCrackUnquotedMangledRdnW
#else /* !UNICODE */
#define DsCrackUnquotedMangledRdn DsCrackUnquotedMangledRdnA
#endif /* !UNICODE */

DSPARSE BOOL WINAPI DsIsMangledRdnValueW(
    LPCWSTR pszRdn,
    DWORD cRdn,
    DS_MANGLE_FOR eDsMangleForDesired
);

DSPARSE BOOL WINAPI DsIsMangledRdnValueA(
    LPCSTR pszRdn,
    DWORD cRdn,
    DS_MANGLE_FOR eDsMangleForDesired
);

#ifdef UNICODE
#define DsIsMangledRdnValue DsIsMangledRdnValueW
#else /* !UNICODE */
#define DsIsMangledRdnValue DsIsMangledRdnValueA
#endif /* !UNICODE */

DSPARSE BOOL WINAPI DsIsMangledDnA(
    LPCSTR pszDn,
    DS_MANGLE_FOR eDsMangleFor
);

DSPARSE BOOL WINAPI DsIsMangledDnW(
    LPCWSTR pszDn,
    DS_MANGLE_FOR eDsMangleFor
);

#ifdef UNICODE
#define DsIsMangledDn DsIsMangledDnW
#else /* !UNICODE */
#define DsIsMangledDn DsIsMangledDnA
#endif /* !UNICODE */

DSPARSE DWORD WINAPI DsCrackSpn2A(
    LPCSTR pszSpn,
    DWORD cSpn,
    LPDWORD pcServiceClass,
    LPSTR ServiceClass,
    LPDWORD pcServiceName,
    LPSTR ServiceName,
    LPDWORD pcInstanceName,
    LPSTR InstanceName,
    USHORT *pInstancePort
);

DSPARSE DWORD WINAPI DsCrackSpn2W(
    LPCWSTR pszSpn,
    DWORD cSpn,
    DWORD *pcServiceClass,
    LPWSTR ServiceClass,
    DWORD *pcServiceName,
    LPWSTR ServiceName,
    DWORD *pcInstanceName,
    LPWSTR InstanceName,
    USHORT *pInstancePort
);

DSPARSE DWORD WINAPI DsCrackSpn3W(
    LPCWSTR pszSpn,
    DWORD cSpn,
    DWORD *pcHostName,
    LPWSTR HostName,
    DWORD *pcInstanceName,
    LPWSTR InstanceName,
    USHORT *pPortNumber,
    DWORD *pcDomainName,
    LPWSTR DomainName,
    DWORD *pcRealmName,
    LPWSTR RealmName
);

DSPARSE DWORD WINAPI DsCrackSpn4W(
    LPCWSTR pszSpn,
    DWORD cSpn,
    DWORD *pcHostName,
    LPWSTR HostName,
    DWORD *pcInstanceName,
    LPWSTR InstanceName,
    DWORD *pcPortName,
    LPWSTR PortName,
    DWORD *pcDomainName,
    LPWSTR DomainName,
    DWORD *pcRealmName,
    LPWSTR RealmName
);

#ifdef UNICODE
#define DsCrackSpn2 DsCrackSpn2W
#else /* !UNICODE */
#define DsCrackSpn2 DsCrackSpn2A
#endif /* !UNICODE */

#endif /* !MIDL_PASS */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _DSPARSE_H */
