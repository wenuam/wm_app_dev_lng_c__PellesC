#ifndef _SECEXT_H
#define _SECEXT_H

#if __POCC__ >= 500
#pragma once
#endif

/* Security definitions not part of the SSPI interface */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef enum {
    NameUnknown = 0,
    NameFullyQualifiedDN = 1,
    NameSamCompatible = 2,
    NameDisplay = 3,
    NameUniqueId = 6,
    NameCanonical = 7,
    NameUserPrincipal = 8,
    NameCanonicalEx = 9,
    NameServicePrincipal = 10,
    NameDnsDomain = 12,
    NameGivenName = 13,
    NameSurname = 14
} EXTENDED_NAME_FORMAT, * PEXTENDED_NAME_FORMAT ;

BOOLEAN SEC_ENTRY GetUserNameExA(
    EXTENDED_NAME_FORMAT NameFormat,
    LPSTR lpNameBuffer,
    PULONG nSize
);
BOOLEAN SEC_ENTRY GetUserNameExW(
    EXTENDED_NAME_FORMAT NameFormat,
    LPWSTR lpNameBuffer,
    PULONG nSize
);
#ifdef UNICODE
#define GetUserNameEx   GetUserNameExW
#else /* !UNICODE */
#define GetUserNameEx   GetUserNameExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

BOOLEAN SEC_ENTRY GetComputerObjectNameA(
    EXTENDED_NAME_FORMAT NameFormat,
    LPSTR lpNameBuffer,
    PULONG nSize
);
BOOLEAN SEC_ENTRY GetComputerObjectNameW(
    EXTENDED_NAME_FORMAT NameFormat,
    LPWSTR lpNameBuffer,
    PULONG nSize
);
#ifdef UNICODE
#define GetComputerObjectName   GetComputerObjectNameW
#else /* !UNICODE */
#define GetComputerObjectName   GetComputerObjectNameA
#endif /* !UNICODE */

BOOLEAN SEC_ENTRY TranslateNameA(
    LPCSTR lpAccountName,
    EXTENDED_NAME_FORMAT AccountNameFormat,
    EXTENDED_NAME_FORMAT DesiredNameFormat,
    LPSTR lpTranslatedName,
    PULONG nSize
);
BOOLEAN SEC_ENTRY TranslateNameW(
    LPCWSTR lpAccountName,
    EXTENDED_NAME_FORMAT AccountNameFormat,
    EXTENDED_NAME_FORMAT DesiredNameFormat,
    LPWSTR lpTranslatedName,
    PULONG nSize
);
#ifdef UNICODE
#define TranslateName   TranslateNameW
#else /* !UNICODE */
#define TranslateName   TranslateNameA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _SECEXT_H */
