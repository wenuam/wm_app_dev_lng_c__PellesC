#ifndef _WINREG_H
#define _WINREG_H

/* Windows Registry API definitions */

#if __POCC__ >= 500
#pragma once
#endif

#include <winapifamily.h>

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef WINVER
#define WINVER  0x0500
#endif /* !WINVER */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef LONG LSTATUS;
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#define RRF_RT_REG_NONE        0x00000001
#define RRF_RT_REG_SZ          0x00000002
#define RRF_RT_REG_EXPAND_SZ   0x00000004
#define RRF_RT_REG_BINARY      0x00000008
#define RRF_RT_REG_DWORD       0x00000010
#define RRF_RT_REG_MULTI_SZ    0x00000020
#define RRF_RT_REG_QWORD       0x00000040

#define RRF_RT_DWORD           (RRF_RT_REG_BINARY | RRF_RT_REG_DWORD)
#define RRF_RT_QWORD           (RRF_RT_REG_BINARY | RRF_RT_REG_QWORD)
#define RRF_RT_ANY             0x0000ffff

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
#define RRF_SUBKEY_WOW6464KEY  0x00010000
#define RRF_SUBKEY_WOW6432KEY  0x00020000
#define RRF_WOW64_MASK         0x00030000
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD) */

#define RRF_NOEXPAND           0x10000000
#define RRF_ZEROONFAILURE      0x20000000

#define REG_PROCESS_APPKEY                  0x00000001
#define REG_USE_CURRENT_SECURITY_CONTEXT    0x00000002

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

typedef ACCESS_MASK REGSAM;

#define HKEY_CLASSES_ROOT                   ((HKEY) (ULONG_PTR)((LONG)0x80000000))
#define HKEY_CURRENT_USER                   ((HKEY) (ULONG_PTR)((LONG)0x80000001))
#define HKEY_LOCAL_MACHINE                  ((HKEY) (ULONG_PTR)((LONG)0x80000002))
#define HKEY_USERS                          ((HKEY) (ULONG_PTR)((LONG)0x80000003))
#define HKEY_PERFORMANCE_DATA               ((HKEY) (ULONG_PTR)((LONG)0x80000004))
#define HKEY_PERFORMANCE_TEXT               ((HKEY) (ULONG_PTR)((LONG)0x80000050))
#define HKEY_PERFORMANCE_NLSTEXT            ((HKEY) (ULONG_PTR)((LONG)0x80000060))
#define HKEY_CURRENT_CONFIG                 ((HKEY) (ULONG_PTR)((LONG)0x80000005))
#define HKEY_DYN_DATA                       ((HKEY) (ULONG_PTR)((LONG)0x80000006))
#define HKEY_CURRENT_USER_LOCAL_SETTINGS    ((HKEY) (ULONG_PTR)((LONG)0x80000007))

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef _PROVIDER_STRUCTS_DEFINED
#define _PROVIDER_STRUCTS_DEFINED

#define PROVIDER_KEEPS_VALUE_LENGTH  0x1

struct val_context {
    int valuelen;
    LPVOID value_context;
    LPVOID val_buff_ptr;
};

typedef struct val_context *PVALCONTEXT;

typedef struct pvalueA {
    LPSTR pv_valuename;
    int pv_valuelen;
    LPVOID pv_value_context;
    DWORD pv_type;
} PVALUEA, *PPVALUEA;
typedef struct pvalueW {
    LPWSTR pv_valuename;
    int pv_valuelen;
    LPVOID pv_value_context;
    DWORD pv_type;
} PVALUEW, *PPVALUEW;
#ifdef UNICODE
typedef PVALUEW PVALUE;
typedef PPVALUEW PPVALUE;
#else /* !UNICODE */
typedef PVALUEA PVALUE;
typedef PPVALUEA PPVALUE;
#endif /* !UNICODE */

typedef DWORD __cdecl QUERYHANDLER(
    LPVOID keycontext, PVALCONTEXT val_list, DWORD num_vals,
    LPVOID outputbuffer, DWORD *total_outlen, DWORD input_blen);

typedef QUERYHANDLER *PQUERYHANDLER;

typedef struct provider_info {
    PQUERYHANDLER pi_R0_1val;
    PQUERYHANDLER pi_R0_allvals;
    PQUERYHANDLER pi_R3_1val;
    PQUERYHANDLER pi_R3_allvals;
    DWORD pi_flags;
    LPVOID pi_key_context;
}REG_PROVIDER;

typedef struct provider_info *PPROVIDER;

typedef struct value_entA {
    LPSTR ve_valuename;
    DWORD ve_valuelen;
    DWORD_PTR ve_valueptr;
    DWORD ve_type;
} VALENTA, *PVALENTA;
typedef struct value_entW {
    LPWSTR ve_valuename;
    DWORD ve_valuelen;
    DWORD_PTR ve_valueptr;
    DWORD ve_type;
} VALENTW, *PVALENTW;
#ifdef UNICODE
typedef VALENTW VALENT;
typedef PVALENTW PVALENT;
#else /* !UNICODE */
typedef VALENTA VALENT;
typedef PVALENTA PVALENT;
#endif /* !UNICODE */

#endif /* !_PROVIDER_STRUCTS_DEFINED */

#define WIN31_CLASS  NULL

#define REG_MUI_STRING_TRUNCATE  0x00000001

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#define REG_SECURE_CONNECTION   1

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI LSTATUS APIENTRY RegCloseKey(
    HKEY hKey
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegOverridePredefKey(
    HKEY hKey,
    HKEY hNewHKey
);

WINADVAPI LSTATUS APIENTRY RegOpenUserClassesRoot(
    HANDLE hToken,
    DWORD dwOptions,
    REGSAM samDesired,
    PHKEY phkResult
);

WINADVAPI LSTATUS APIENTRY RegOpenCurrentUser(
    REGSAM samDesired,
    PHKEY phkResult
);

WINADVAPI LSTATUS APIENTRY RegDisablePredefinedCache(
    void
);

WINADVAPI LSTATUS APIENTRY RegDisablePredefinedCacheEx(
    void
);

WINADVAPI LSTATUS APIENTRY RegConnectRegistryA(
    LPCSTR lpMachineName,
    HKEY hKey,
    PHKEY phkResult
);
WINADVAPI LSTATUS APIENTRY RegConnectRegistryW(
    LPCWSTR lpMachineName,
    HKEY hKey,
    PHKEY phkResult
);
#ifdef UNICODE
#define RegConnectRegistry  RegConnectRegistryW
#else /* !UNICODE */
#define RegConnectRegistry  RegConnectRegistryA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegConnectRegistryExA(
    LPCSTR lpMachineName,
    HKEY hKey,
    ULONG Flags,
    PHKEY phkResult
);
WINADVAPI LSTATUS APIENTRY RegConnectRegistryExW(
    LPCWSTR lpMachineName,
    HKEY hKey,
    ULONG Flags,
    PHKEY phkResult
);
#ifdef UNICODE
#define RegConnectRegistryEx  RegConnectRegistryExW
#else /* !UNICODE */
#define RegConnectRegistryEx  RegConnectRegistryExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI LSTATUS APIENTRY RegCreateKeyA(
    HKEY hKey,
    LPCSTR lpSubKey,
    PHKEY phkResult
);
WINADVAPI LSTATUS APIENTRY RegCreateKeyW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    PHKEY phkResult
);
#ifdef UNICODE
#define RegCreateKey  RegCreateKeyW
#else /* !UNICODE */
#define RegCreateKey  RegCreateKeyA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegCreateKeyExA(
    HKEY hKey,
    LPCSTR lpSubKey,
    DWORD Reserved,
    LPSTR lpClass,
    DWORD dwOptions,
    REGSAM samDesired,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    PHKEY phkResult,
    LPDWORD lpdwDisposition
);

WINADVAPI LSTATUS APIENTRY RegCreateKeyExW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    DWORD Reserved,
    LPWSTR lpClass,
    DWORD dwOptions,
    REGSAM samDesired,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    PHKEY phkResult,
    LPDWORD lpdwDisposition
);
#ifdef UNICODE
#define RegCreateKeyEx  RegCreateKeyExW
#else /* !UNICODE */
#define RegCreateKeyEx  RegCreateKeyExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegCreateKeyTransactedA(
    HKEY hKey,
    LPCSTR lpSubKey,
    DWORD Reserved,
    LPSTR lpClass,
    DWORD dwOptions,
    REGSAM samDesired,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    PHKEY phkResult,
    LPDWORD lpdwDisposition,
    HANDLE hTransaction,
    PVOID pExtendedParemeter
);
WINADVAPI LSTATUS APIENTRY RegCreateKeyTransactedW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    DWORD Reserved,
    LPWSTR lpClass,
    DWORD dwOptions,
    REGSAM samDesired,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    PHKEY phkResult,
    LPDWORD lpdwDisposition,
    HANDLE hTransaction,
    PVOID pExtendedParemeter
);
#ifdef UNICODE
#define RegCreateKeyTransacted  RegCreateKeyTransactedW
#else /* !UNICODE */
#define RegCreateKeyTransacted  RegCreateKeyTransactedA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI LSTATUS APIENTRY RegDeleteKeyA(
    HKEY hKey,
    LPCSTR lpSubKey
);
WINADVAPI LSTATUS APIENTRY RegDeleteKeyW(
    HKEY hKey,
    LPCWSTR lpSubKey
);
#ifdef UNICODE
#define RegDeleteKey  RegDeleteKeyW
#else /* !UNICODE */
#define RegDeleteKey  RegDeleteKeyA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegDeleteKeyExA(
    HKEY hKey,
    LPCSTR lpSubKey,
    REGSAM samDesired,
    DWORD Reserved
);

WINADVAPI LSTATUS APIENTRY RegDeleteKeyExW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    REGSAM samDesired,
    DWORD Reserved
);
#ifdef UNICODE
#define RegDeleteKeyEx  RegDeleteKeyExW
#else /* !UNICODE */
#define RegDeleteKeyEx  RegDeleteKeyExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegDeleteKeyTransactedA(
    HKEY hKey,
    LPCSTR lpSubKey,
    REGSAM samDesired,
    DWORD Reserved,
    HANDLE hTransaction,
    PVOID pExtendedParameter
);
WINADVAPI LSTATUS APIENTRY RegDeleteKeyTransactedW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    REGSAM samDesired,
    DWORD Reserved,
    HANDLE hTransaction,
    PVOID pExtendedParameter
);
#ifdef UNICODE
#define RegDeleteKeyTransacted  RegDeleteKeyTransactedW
#else /* !UNICODE */
#define RegDeleteKeyTransacted  RegDeleteKeyTransactedA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LONG APIENTRY RegDisableReflectionKey(
    HKEY hBase
);

WINADVAPI LONG APIENTRY RegEnableReflectionKey(
    HKEY hBase
);

WINADVAPI LONG APIENTRY RegQueryReflectionKey(
    HKEY hBase,
    BOOL *bIsReflectionDisabled
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI LSTATUS APIENTRY RegDeleteValueA(
    HKEY hKey,
    LPCSTR lpValueName
);
WINADVAPI LSTATUS APIENTRY RegDeleteValueW(
    HKEY hKey,
    LPCWSTR lpValueName
);
#ifdef UNICODE
#define RegDeleteValue  RegDeleteValueW
#else /* !UNICODE */
#define RegDeleteValue  RegDeleteValueA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegEnumKeyA(
    HKEY hKey,
    DWORD dwIndex,
    LPSTR lpName,
    DWORD cchName
);
WINADVAPI LSTATUS APIENTRY RegEnumKeyW(
    HKEY hKey,
    DWORD dwIndex,
    LPWSTR lpName,
    DWORD cchName
);
#ifdef UNICODE
#define RegEnumKey  RegEnumKeyW
#else /* !UNICODE */
#define RegEnumKey  RegEnumKeyA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegEnumKeyExA(
    HKEY hKey,
    DWORD dwIndex,
    LPSTR lpName,
    LPDWORD lpcchName,
    LPDWORD lpReserved,
    LPSTR lpClass,
    LPDWORD lpcchClass,
    PFILETIME lpftLastWriteTime
);
WINADVAPI LSTATUS APIENTRY RegEnumKeyExW(
    HKEY hKey,
    DWORD dwIndex,
    LPWSTR lpName,
    LPDWORD lpcchName,
    LPDWORD lpReserved,
    LPWSTR lpClass,
    LPDWORD lpcchClass,
    PFILETIME lpftLastWriteTime
);
#ifdef UNICODE
#define RegEnumKeyEx  RegEnumKeyExW
#else /* !UNICODE */
#define RegEnumKeyEx  RegEnumKeyExA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegEnumValueA(
    HKEY hKey,
    DWORD dwIndex,
    LPSTR lpValueName,
    LPDWORD lpcchValueName,
    LPDWORD lpReserved,
    LPDWORD lpType,
    LPBYTE lpData,
    LPDWORD lpcbData
);
WINADVAPI LSTATUS APIENTRY RegEnumValueW(
    HKEY hKey,
    DWORD dwIndex,
    LPWSTR lpValueName,
    LPDWORD lpcchValueName,
    LPDWORD lpReserved,
    LPDWORD lpType,
    LPBYTE lpData,
    LPDWORD lpcbData
);
#ifdef UNICODE
#define RegEnumValue  RegEnumValueW
#else /* !UNICODE */
#define RegEnumValue  RegEnumValueA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegFlushKey(
    HKEY hKey
);

WINADVAPI LSTATUS APIENTRY RegGetKeySecurity(
    HKEY hKey,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    LPDWORD lpcbSecurityDescriptor
);

WINADVAPI LSTATUS APIENTRY RegLoadKeyA(
    HKEY hKey,
    LPCSTR lpSubKey,
    LPCSTR lpFile
);

WINADVAPI LSTATUS APIENTRY RegLoadKeyW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    LPCWSTR lpFile
);
#ifdef UNICODE
#define RegLoadKey  RegLoadKeyW
#else /* !UNICODE */
#define RegLoadKey  RegLoadKeyA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegNotifyChangeKeyValue(
    HKEY hKey,
    BOOL bWatchSubtree,
    DWORD dwNotifyFilter,
    HANDLE hEvent,
    BOOL fAsynchronous
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI LSTATUS APIENTRY RegOpenKeyA(
    HKEY hKey,
    LPCSTR lpSubKey,
    PHKEY phkResult
);
WINADVAPI LSTATUS APIENTRY RegOpenKeyW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    PHKEY phkResult
);
#ifdef UNICODE
#define RegOpenKey  RegOpenKeyW
#else /* !UNICODE */
#define RegOpenKey  RegOpenKeyA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegOpenKeyExA(
    HKEY hKey,
    LPCSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult
);
WINADVAPI LSTATUS APIENTRY RegOpenKeyExW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult
);
#ifdef UNICODE
#define RegOpenKeyEx  RegOpenKeyExW
#else /* !UNICODE */
#define RegOpenKeyEx  RegOpenKeyExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegOpenKeyTransactedA(
    HKEY hKey,
    LPCSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult,
    HANDLE hTransaction,
    PVOID pExtendedParemeter
);
WINADVAPI LSTATUS APIENTRY RegOpenKeyTransactedW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    DWORD ulOptions,
    REGSAM samDesired,
    PHKEY phkResult,
    HANDLE hTransaction,
    PVOID pExtendedParemeter
);
#ifdef UNICODE
#define RegOpenKeyTransacted  RegOpenKeyTransactedW
#else /* !UNICODE */
#define RegOpenKeyTransacted  RegOpenKeyTransactedA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI LSTATUS APIENTRY RegQueryInfoKeyA(
    HKEY hKey,
    LPSTR lpClass,
    LPDWORD lpcchClass,
    LPDWORD lpReserved,
    LPDWORD lpcSubKeys,
    LPDWORD lpcbMaxSubKeyLen,
    LPDWORD lpcbMaxClassLen,
    LPDWORD lpcValues,
    LPDWORD lpcbMaxValueNameLen,
    LPDWORD lpcbMaxValueLen,
    LPDWORD lpcbSecurityDescriptor,
    PFILETIME lpftLastWriteTime
);

WINADVAPI LSTATUS APIENTRY RegQueryInfoKeyW(
    HKEY hKey,
    LPWSTR lpClass,
    LPDWORD lpcchClass,
    LPDWORD lpReserved,
    LPDWORD lpcSubKeys,
    LPDWORD lpcbMaxSubKeyLen,
    LPDWORD lpcbMaxClassLen,
    LPDWORD lpcValues,
    LPDWORD lpcbMaxValueNameLen,
    LPDWORD lpcbMaxValueLen,
    LPDWORD lpcbSecurityDescriptor,
    PFILETIME lpftLastWriteTime
);
#ifdef UNICODE
#define RegQueryInfoKey  RegQueryInfoKeyW
#else /* !UNICODE */
#define RegQueryInfoKey  RegQueryInfoKeyA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegQueryValueA(
    HKEY hKey,
    LPCSTR lpSubKey,
    LPSTR lpData,
    PLONG lpcbData
);
WINADVAPI LSTATUS APIENTRY RegQueryValueW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    LPWSTR lpData,
    PLONG lpcbData
);
#ifdef UNICODE
#define RegQueryValue  RegQueryValueW
#else /* !UNICODE */
#define RegQueryValue  RegQueryValueA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegQueryMultipleValuesA(
    HKEY hKey,
    PVALENTA val_list,
    DWORD num_vals,
    LPSTR lpValueBuf,
    LPDWORD ldwTotsize
);
WINADVAPI LSTATUS APIENTRY RegQueryMultipleValuesW(
    HKEY hKey,
    PVALENTW val_list,
    DWORD num_vals,
    LPWSTR lpValueBuf,
    LPDWORD ldwTotsize
);
#ifdef UNICODE
#define RegQueryMultipleValues  RegQueryMultipleValuesW
#else /* !UNICODE */
#define RegQueryMultipleValues  RegQueryMultipleValuesA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI LSTATUS APIENTRY RegQueryValueExA(
    HKEY hKey,
    LPCSTR lpValueName,
    LPDWORD lpReserved,
    LPDWORD lpType,
    LPBYTE lpData,
    LPDWORD lpcbData
);
WINADVAPI LSTATUS APIENTRY RegQueryValueExW(
    HKEY hKey,
    LPCWSTR lpValueName,
    LPDWORD lpReserved,
    LPDWORD lpType,
    LPBYTE lpData,
    LPDWORD lpcbData
);
#ifdef UNICODE
#define RegQueryValueEx  RegQueryValueExW
#else /* !UNICODE */
#define RegQueryValueEx  RegQueryValueExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegReplaceKeyA(
    HKEY hKey,
    LPCSTR lpSubKey,
    LPCSTR lpNewFile,
    LPCSTR lpOldFile
);
WINADVAPI LSTATUS APIENTRY RegReplaceKeyW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    LPCWSTR lpNewFile,
    LPCWSTR lpOldFile
);
#ifdef UNICODE
#define RegReplaceKey  RegReplaceKeyW
#else /* !UNICODE */
#define RegReplaceKey  RegReplaceKeyA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegRestoreKeyA(
    HKEY hKey,
    LPCSTR lpFile,
    DWORD dwFlags
);
WINADVAPI LSTATUS APIENTRY RegRestoreKeyW(
    HKEY hKey,
    LPCWSTR lpFile,
    DWORD dwFlags
);
#ifdef UNICODE
#define RegRestoreKey  RegRestoreKeyW
#else /* !UNICODE */
#define RegRestoreKey  RegRestoreKeyA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (WINVER >= 0x0600)

WINADVAPI LSTATUS APIENTRY RegRenameKey(
    HKEY hKey,
    LPCWSTR lpSubKeyName,
    LPCWSTR lpNewKeyName
);

#endif /* WINVER >= 0x0600 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegSaveKeyA(
    HKEY hKey,
    LPCSTR lpFile,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
WINADVAPI LSTATUS APIENTRY RegSaveKeyW(
    HKEY hKey,
    LPCWSTR lpFile,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#ifdef UNICODE
#define RegSaveKey  RegSaveKeyW
#else /* !UNICODE */
#define RegSaveKey  RegSaveKeyA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegSetKeySecurity(
    HKEY hKey,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor
);

WINADVAPI LSTATUS APIENTRY RegSetValueA(
    HKEY hKey,
    LPCSTR lpSubKey,
    DWORD dwType,
    LPCSTR lpData,
    DWORD cbData
);
WINADVAPI LSTATUS APIENTRY RegSetValueW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    DWORD dwType,
    LPCWSTR lpData,
    DWORD cbData
);
#ifdef UNICODE
#define RegSetValue  RegSetValueW
#else /* !UNICODE */
#define RegSetValue  RegSetValueA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI LSTATUS APIENTRY RegSetValueExA(
    HKEY hKey,
    LPCSTR lpValueName,
    DWORD Reserved,
    DWORD dwType,
    CONST BYTE * lpData,
    DWORD cbData
);

WINADVAPI LSTATUS APIENTRY RegSetValueExW(
    HKEY hKey,
    LPCWSTR lpValueName,
    DWORD Reserved,
    DWORD dwType,
    CONST BYTE * lpData,
    DWORD cbData
);
#ifdef UNICODE
#define RegSetValueEx  RegSetValueExW
#else /* !UNICODE */
#define RegSetValueEx  RegSetValueExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegUnLoadKeyA(
    HKEY hKey,
    LPCSTR lpSubKey
);

WINADVAPI LSTATUS APIENTRY RegUnLoadKeyW(
    HKEY hKey,
    LPCWSTR lpSubKey
);
#ifdef UNICODE
#define RegUnLoadKey  RegUnLoadKeyW
#else /* !UNICODE */
#define RegUnLoadKey  RegUnLoadKeyA
#endif /* !UNICODE */

#if (_WIN32_WINNT >= 0x0600)

WINADVAPI LSTATUS APIENTRY RegDeleteKeyValueA(
    HKEY hKey,
    LPCSTR lpSubKey,
    LPCSTR lpValueName
);
WINADVAPI LSTATUS APIENTRY RegDeleteKeyValueW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    LPCWSTR lpValueName
);
#ifdef UNICODE
#define RegDeleteKeyValue  RegDeleteKeyValueW
#else /* !UNICODE */
#define RegDeleteKeyValue  RegDeleteKeyValueA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegSetKeyValueA(
    HKEY hKey,
    LPCSTR lpSubKey,
    LPCSTR lpValueName,
    DWORD dwType,
    LPCVOID lpData,
    DWORD cbData
);
WINADVAPI LSTATUS APIENTRY RegSetKeyValueW(
    HKEY hKey,
    LPCWSTR lpSubKey,
    LPCWSTR lpValueName,
    DWORD dwType,
    LPCVOID lpData,
    DWORD cbData
);
#ifdef UNICODE
#define RegSetKeyValue  RegSetKeyValueW
#else /* !UNICODE */
#define RegSetKeyValue  RegSetKeyValueA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegDeleteTreeA(
    HKEY hKey,
    LPCSTR lpSubKey
);
WINADVAPI LSTATUS APIENTRY RegDeleteTreeW(
    HKEY hKey,
    LPCWSTR lpSubKey
);
#ifdef UNICODE
#define RegDeleteTree  RegDeleteTreeW
#else /* !UNICODE */
#define RegDeleteTree  RegDeleteTreeA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegCopyTreeA(
    HKEY hKeySrc,
    LPCSTR lpSubKey,
    HKEY hKeyDest
);
#ifndef UNICODE
#define RegCopyTree  RegCopyTreeA
#endif /* !UNICODE */

#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT >= 0x0502)

WINADVAPI LSTATUS APIENTRY RegGetValueA(
    HKEY hkey,
    LPCSTR lpSubKey,
    LPCSTR lpValue,
    DWORD dwFlags,
    LPDWORD pdwType,
    PVOID pvData,
    LPDWORD pcbData
);
WINADVAPI LSTATUS APIENTRY RegGetValueW(
    HKEY hkey,
    LPCWSTR lpSubKey,
    LPCWSTR lpValue,
    DWORD dwFlags,
    LPDWORD pdwType,
    PVOID pvData,
    LPDWORD pcbData
);
#ifdef UNICODE
#define RegGetValue  RegGetValueW
#else /* !UNICODE */
#define RegGetValue  RegGetValueA
#endif /* !UNICODE */

#endif /* (_WIN32_WINNT >= 0x0502) */

#if (_WIN32_WINNT >= 0x0600)

WINADVAPI LSTATUS APIENTRY RegCopyTreeW(
    HKEY hKeySrc,
    LPCWSTR lpSubKey,
    HKEY hKeyDest
);
#ifdef UNICODE
#define RegCopyTree  RegCopyTreeW
#endif /* UNICODE */

WINADVAPI LSTATUS APIENTRY RegLoadMUIStringA(
    HKEY hKey,
    LPCSTR pszValue,
    LPSTR pszOutBuf,
    DWORD cbOutBuf,
    LPDWORD pcbData,
    DWORD Flags,
    LPCSTR pszDirectory
);
WINADVAPI LSTATUS APIENTRY RegLoadMUIStringW(
    HKEY hKey,
    LPCWSTR pszValue,
    LPWSTR pszOutBuf,
    DWORD cbOutBuf,
    LPDWORD pcbData,
    DWORD Flags,
    LPCWSTR pszDirectory
);
#ifdef UNICODE
#define RegLoadMUIString  RegLoadMUIStringW
#else /* !UNICODE */
#define RegLoadMUIString  RegLoadMUIStringA
#endif /* !UNICODE */

WINADVAPI LSTATUS APIENTRY RegLoadAppKeyA(
    LPCSTR lpFile,
    PHKEY phkResult,
    REGSAM samDesired,
    DWORD dwOptions,
    DWORD Reserved
);
WINADVAPI LSTATUS APIENTRY RegLoadAppKeyW(
    LPCWSTR lpFile,
    PHKEY phkResult,
    REGSAM samDesired,
    DWORD dwOptions,
    DWORD Reserved
);
#ifdef UNICODE
#define RegLoadAppKey  RegLoadAppKeyW
#else /* !UNICODE */
#define RegLoadAppKey  RegLoadAppKeyA
#endif /* !UNICODE */

#endif /* (_WIN32_WINNT >= 0x0600) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL APIENTRY InitiateSystemShutdownA(
    LPSTR lpMachineName,
    LPSTR lpMessage,
    DWORD dwTimeout,
    BOOL bForceAppsClosed,
    BOOL bRebootAfterShutdown
);
WINADVAPI BOOL APIENTRY InitiateSystemShutdownW(
    LPWSTR lpMachineName,
    LPWSTR lpMessage,
    DWORD dwTimeout,
    BOOL bForceAppsClosed,
    BOOL bRebootAfterShutdown
);
#ifdef UNICODE
#define InitiateSystemShutdown  InitiateSystemShutdownW
#else /* !UNICODE */
#define InitiateSystemShutdown  InitiateSystemShutdownA
#endif /* !UNICODE */

WINADVAPI BOOL APIENTRY AbortSystemShutdownA(
    LPSTR lpMachineName
);
WINADVAPI BOOL APIENTRY AbortSystemShutdownW(
    LPWSTR lpMachineName
);
#ifdef UNICODE
#define AbortSystemShutdown  AbortSystemShutdownW
#else /* !UNICODE */
#define AbortSystemShutdown  AbortSystemShutdownA
#endif /* !UNICODE */

#include <reason.h>

#define REASON_SWINSTALL    (SHTDN_REASON_MAJOR_SOFTWARE|SHTDN_REASON_MINOR_INSTALLATION)
#define REASON_HWINSTALL    (SHTDN_REASON_MAJOR_HARDWARE|SHTDN_REASON_MINOR_INSTALLATION)
#define REASON_SERVICEHANG  (SHTDN_REASON_MAJOR_SOFTWARE|SHTDN_REASON_MINOR_HUNG)
#define REASON_UNSTABLE     (SHTDN_REASON_MAJOR_SYSTEM|SHTDN_REASON_MINOR_UNSTABLE)
#define REASON_SWHWRECONF   (SHTDN_REASON_MAJOR_SOFTWARE|SHTDN_REASON_MINOR_RECONFIG)
#define REASON_OTHER        (SHTDN_REASON_MAJOR_OTHER|SHTDN_REASON_MINOR_OTHER)
#define REASON_UNKNOWN      SHTDN_REASON_UNKNOWN
#define REASON_LEGACY_API   SHTDN_REASON_LEGACY_API
#define REASON_PLANNED_FLAG SHTDN_REASON_FLAG_PLANNED

#define MAX_SHUTDOWN_TIMEOUT (10*365*24*60*60)

WINADVAPI BOOL APIENTRY InitiateSystemShutdownExA(
    LPSTR lpMachineName,
    LPSTR lpMessage,
    DWORD dwTimeout,
    BOOL bForceAppsClosed,
    BOOL bRebootAfterShutdown,
    DWORD dwReason
);
WINADVAPI BOOL APIENTRY InitiateSystemShutdownExW(
    LPWSTR lpMachineName,
    LPWSTR lpMessage,
    DWORD dwTimeout,
    BOOL bForceAppsClosed,
    BOOL bRebootAfterShutdown,
    DWORD dwReason
);
#ifdef UNICODE
#define InitiateSystemShutdownEx  InitiateSystemShutdownExW
#else /* !UNICODE */
#define InitiateSystemShutdownEx  InitiateSystemShutdownExA
#endif /* !UNICODE */

#define SHUTDOWN_FORCE_OTHERS           0x00000001
#define SHUTDOWN_FORCE_SELF             0x00000002
#define SHUTDOWN_RESTART                0x00000004
#define SHUTDOWN_POWEROFF               0x00000008
#define SHUTDOWN_NOREBOOT               0x00000010
#define SHUTDOWN_GRACE_OVERRIDE         0x00000020
#define SHUTDOWN_INSTALL_UPDATES        0x00000040
#define SHUTDOWN_RESTARTAPPS            0x00000080
#define SHUTDOWN_SKIP_SVC_PRESHUTDOWN   0x00000100
#define SHUTDOWN_HYBRID                 0x00000200
#define SHUTDOWN_RESTART_BOOTOPTIONS    0x00000400
#define SHUTDOWN_SOFT_REBOOT            0x00000800
#define SHUTDOWN_MOBILE_UI              0x00001000
#define SHUTDOWN_ARSO                   0x00002000
#define SHUTDOWN_CHECK_SAFE_FOR_SERVER  0x00004000
#define SHUTDOWN_VAIL_CONTAINER         0x00008000
#define SHUTDOWN_SYSTEM_INITIATED       0x00010000

WINADVAPI DWORD APIENTRY InitiateShutdownA(
    LPSTR lpMachineName,
    LPSTR lpMessage,
    DWORD dwGracePeriod,
    DWORD dwShutdownFlags,
    DWORD dwReason
);
WINADVAPI DWORD APIENTRY InitiateShutdownW(
    LPWSTR lpMachineName,
    LPWSTR lpMessage,
    DWORD dwGracePeriod,
    DWORD dwShutdownFlags,
    DWORD dwReason
);
#ifdef UNICODE
#define InitiateShutdown  InitiateShutdownW
#else /* !UNICODE */
#define InitiateShutdown  InitiateShutdownA
#endif /* !UNICODE */

WINADVAPI DWORD APIENTRY CheckForHiberboot(
    PBOOLEAN pHiberboot,
    BOOLEAN bClearFlag
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LSTATUS APIENTRY RegSaveKeyExA(
    HKEY hKey,
    LPCSTR lpFile,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD Flags
);

WINADVAPI LSTATUS APIENTRY RegSaveKeyExW(
    HKEY hKey,
    LPCWSTR lpFile,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD Flags
);
#ifdef UNICODE
#define RegSaveKeyEx  RegSaveKeyExW
#else /* !UNICODE */
#define RegSaveKeyEx  RegSaveKeyExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _WINREG_H */
