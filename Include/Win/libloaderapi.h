#ifndef _LIBLOADERAPI_H
#define _LIBLOADERAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-libraryloader-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2027)  /* Missing prototype */
#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#define FIND_RESOURCE_DIRECTORY_TYPES       (0x0100)
#define FIND_RESOURCE_DIRECTORY_NAMES       (0x0200)
#define FIND_RESOURCE_DIRECTORY_LANGUAGES   (0x0400)

#define RESOURCE_ENUM_LN            (0x0001)
#define RESOURCE_ENUM_MUI           (0x0002)
#define RESOURCE_ENUM_MUI_SYSTEM    (0x0004)
#define RESOURCE_ENUM_VALIDATE      (0x0008)
#define RESOURCE_ENUM_MODULE_EXACT  (0x0010)

#define SUPPORT_LANG_NUMBER  32

typedef struct tagENUMUILANG {
    ULONG NumOfEnumUILang;
    ULONG SizeOfEnumUIBuffer;
    LANGID *pEnumUIBuffer;
} ENUMUILANG, *PENUMUILANG;

#ifdef STRICT

typedef BOOL (CALLBACK *ENUMRESLANGPROCA)(
    HMODULE hModule,
    LPCSTR lpType,
    LPCSTR lpName,
    WORD wLanguage,
    LONG_PTR lParam);
typedef BOOL (CALLBACK *ENUMRESLANGPROCW)(
    HMODULE hModule,
    LPCWSTR lpType,
    LPCWSTR lpName,
    WORD wLanguage,
    LONG_PTR lParam);
#ifdef UNICODE
#define ENUMRESLANGPROC  ENUMRESLANGPROCW
#else /* !UNICODE */
#define ENUMRESLANGPROC  ENUMRESLANGPROCA
#endif /* !UNICODE */

typedef BOOL (CALLBACK *ENUMRESNAMEPROCA)(
    HMODULE hModule,
    LPCSTR lpType,
    LPSTR lpName,
    LONG_PTR lParam);
typedef BOOL (CALLBACK *ENUMRESNAMEPROCW)(
    HMODULE hModule,
    LPCWSTR lpType,
    LPWSTR lpName,
    LONG_PTR lParam);
#ifdef UNICODE
#define ENUMRESNAMEPROC  ENUMRESNAMEPROCW
#else /* !UNICODE */
#define ENUMRESNAMEPROC  ENUMRESNAMEPROCA
#endif /* !UNICODE */

typedef BOOL (CALLBACK *ENUMRESTYPEPROCA)(
    HMODULE hModule,
    LPSTR lpType,
    LONG_PTR lParam
);
typedef BOOL (CALLBACK *ENUMRESTYPEPROCW)(
    HMODULE hModule,
    LPWSTR lpType,
    LONG_PTR lParam
);
#ifdef UNICODE
#define ENUMRESTYPEPROC  ENUMRESTYPEPROCW
#else /* !UNICODE */
#define ENUMRESTYPEPROC  ENUMRESTYPEPROCA
#endif /* !UNICODE */

#else /* !STRICT */

typedef FARPROC ENUMRESTYPEPROCA;
typedef FARPROC ENUMRESTYPEPROCW;
#ifdef UNICODE
typedef ENUMRESTYPEPROCW ENUMRESTYPEPROC;
#else /* !UNICODE */
typedef ENUMRESTYPEPROCA ENUMRESTYPEPROC;
#endif /* !UNICODE */

typedef FARPROC ENUMRESNAMEPROCA;
typedef FARPROC ENUMRESNAMEPROCW;
#ifdef UNICODE
typedef ENUMRESNAMEPROCW ENUMRESNAMEPROC;
#else /* !UNICODE */
typedef ENUMRESNAMEPROCA ENUMRESNAMEPROC;
#endif /* !UNICODE */

typedef FARPROC ENUMRESLANGPROCA;
typedef FARPROC ENUMRESLANGPROCW;
#ifdef UNICODE
typedef ENUMRESLANGPROCW ENUMRESLANGPROC;
#else /* !UNICODE */
typedef ENUMRESLANGPROCA ENUMRESLANGPROC;
#endif /* !UNICODE */

#endif /* !STRICT */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI DisableThreadLibraryCalls(
    HMODULE hLibModule
);

WINBASEAPI HRSRC WINAPI FindResourceExW(
    HMODULE hModule,
    LPCWSTR lpType,
    LPCWSTR lpName,
    WORD wLanguage
);

#ifdef UNICODE
#define FindResourceEx  FindResourceExW
#endif /* UNICODE */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
WINBASEAPI int WINAPI FindStringOrdinal(
    DWORD dwFindStringOrdinalFlags,
    LPCWSTR lpStringSource,
    int cchSource,
    LPCWSTR lpStringValue,
    int cchValue,
    BOOL bIgnoreCase
);
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */

WINBASEAPI BOOL WINAPI FreeLibrary(
    HMODULE hLibModule
);

WINBASEAPI DECLSPEC_NORETURN VOID WINAPI FreeLibraryAndExitThread(
    HMODULE hLibModule,
    DWORD dwExitCode
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI FreeResource(
    HGLOBAL hResData
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI DWORD WINAPI GetModuleFileNameA(
    HMODULE hModule,
    LPSTR lpFilename,
    DWORD nSize
);

WINBASEAPI DWORD WINAPI GetModuleFileNameW(
    HMODULE hModule,
    LPWSTR lpFilename,
    DWORD nSize
);
#ifdef UNICODE
#define GetModuleFileName  GetModuleFileNameW
#else /* !UNICODE */
#define GetModuleFileName  GetModuleFileNameA
#endif /* !UNICODE */

WINBASEAPI HMODULE WINAPI GetModuleHandleA(
    LPCSTR lpModuleName
);

WINBASEAPI HMODULE WINAPI GetModuleHandleW(
    LPCWSTR lpModuleName
);
#ifdef UNICODE
#define GetModuleHandle  GetModuleHandleW
#else /* !UNICODE */
#define GetModuleHandle  GetModuleHandleA
#endif /* !UNICODE */

#ifndef RC_INVOKED

#define GET_MODULE_HANDLE_EX_FLAG_PIN                 (0x00000001)
#define GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT  (0x00000002)
#define GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS        (0x00000004)

typedef BOOL (WINAPI *PGET_MODULE_HANDLE_EXA)(
    DWORD dwFlags,
    LPCSTR lpModuleName,
    HMODULE * phModule
);
typedef BOOL (WINAPI *PGET_MODULE_HANDLE_EXW)(
    DWORD dwFlags,
    LPCWSTR lpModuleName,
    HMODULE * phModule
);
#ifdef UNICODE
#define PGET_MODULE_HANDLE_EX  PGET_MODULE_HANDLE_EXW
#else /* !UNICODE */
#define PGET_MODULE_HANDLE_EX  PGET_MODULE_HANDLE_EXA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI GetModuleHandleExA(
    DWORD dwFlags,
    LPCSTR lpModuleName,
    HMODULE *phModule
);

WINBASEAPI BOOL WINAPI GetModuleHandleExW(
    DWORD dwFlags,
    LPCWSTR lpModuleName,
    HMODULE *phModule
);
#ifdef UNICODE
#define GetModuleHandleEx  GetModuleHandleExW
#else /* !UNICODE */
#define GetModuleHandleEx  GetModuleHandleExA
#endif /* !UNICODE */

#endif

WINBASEAPI FARPROC WINAPI GetProcAddress(
    HMODULE hModule,
    LPCSTR lpProcName
);

#define CURRENT_IMPORT_REDIRECTION_VERSION  1

typedef struct _REDIRECTION_FUNCTION_DESCRIPTOR {
    PCSTR DllName;
    PCSTR FunctionName;
    PVOID RedirectionTarget;
} REDIRECTION_FUNCTION_DESCRIPTOR, *PREDIRECTION_FUNCTION_DESCRIPTOR;

typedef const REDIRECTION_FUNCTION_DESCRIPTOR *PCREDIRECTION_FUNCTION_DESCRIPTOR;

typedef struct _REDIRECTION_DESCRIPTOR {
    ULONG Version;
    ULONG FunctionCount;
    PCREDIRECTION_FUNCTION_DESCRIPTOR Redirections;
} REDIRECTION_DESCRIPTOR, *PREDIRECTION_DESCRIPTOR;

typedef const REDIRECTION_DESCRIPTOR *PCREDIRECTION_DESCRIPTOR;

WINBASEAPI HMODULE WINAPI LoadLibraryExA(
    LPCSTR lpLibFileName,
    HANDLE hFile,
    DWORD dwFlags
);

WINBASEAPI HMODULE WINAPI LoadLibraryExW(
    LPCWSTR lpLibFileName,
    HANDLE hFile,
    DWORD dwFlags
);
#ifdef UNICODE
#define LoadLibraryEx  LoadLibraryExW
#else /* !UNICODE */
#define LoadLibraryEx  LoadLibraryExA
#endif /* !UNICODE */

#define DONT_RESOLVE_DLL_REFERENCES         0x00000001
#define LOAD_LIBRARY_AS_DATAFILE            0x00000002
#define LOAD_WITH_ALTERED_SEARCH_PATH       0x00000008
#define LOAD_IGNORE_CODE_AUTHZ_LEVEL        0x00000010
#define LOAD_LIBRARY_AS_IMAGE_RESOURCE      0x00000020
#define LOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE  0x00000040
#define LOAD_LIBRARY_REQUIRE_SIGNED_TARGET  0x00000080
#define LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR    0x00000100
#define LOAD_LIBRARY_SEARCH_APPLICATION_DIR 0x00000200
#define LOAD_LIBRARY_SEARCH_USER_DIRS       0x00000400
#define LOAD_LIBRARY_SEARCH_SYSTEM32        0x00000800
#define LOAD_LIBRARY_SEARCH_DEFAULT_DIRS    0x00001000

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
#define LOAD_LIBRARY_SAFE_CURRENT_DIRS      0x00002000
#define LOAD_LIBRARY_SEARCH_SYSTEM32_NO_FORWARDER   0x00004000
#else /* (NTDDI_VERSION < NTDDI_WIN10_RS1) */
#define LOAD_LIBRARY_SEARCH_SYSTEM32_NO_FORWARDER   LOAD_LIBRARY_SEARCH_SYSTEM32
#endif /* (NTDDI_VERSION < NTDDI_WIN10_RS1) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
#define LOAD_LIBRARY_OS_INTEGRITY_CONTINUITY   0x00008000
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS2) */

WINBASEAPI HGLOBAL WINAPI LoadResource(
    HMODULE hModule,
    HRSRC hResInfo
);

WINUSERAPI int WINAPI LoadStringA(
    HINSTANCE hInstance,
    UINT uID,
    LPSTR lpBuffer,
    int cchBufferMax
);

WINUSERAPI int WINAPI LoadStringW(
    HINSTANCE hInstance,
    UINT uID,
    LPWSTR lpBuffer,
    int cchBufferMax
);
#ifdef UNICODE
#define LoadString  LoadStringW
#else /* !UNICODE */
#define LoadString  LoadStringA
#endif /* !UNICODE */

WINBASEAPI LPVOID WINAPI LockResource(
    HGLOBAL hResData
);

WINBASEAPI DWORD WINAPI SizeofResource(
    HMODULE hModule,
    HRSRC hResInfo
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef PVOID DLL_DIRECTORY_COOKIE, *PDLL_DIRECTORY_COOKIE;

WINBASEAPI DLL_DIRECTORY_COOKIE WINAPI AddDllDirectory(
    PCWSTR NewDirectory
);

WINBASEAPI BOOL WINAPI RemoveDllDirectory(
    DLL_DIRECTORY_COOKIE Cookie
);

WINBASEAPI BOOL WINAPI SetDefaultDllDirectories(
    DWORD DirectoryFlags
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)

WINBASEAPI BOOL APIENTRY EnumResourceLanguagesExA(
    HMODULE hModule,
    LPCSTR lpType,
    LPCSTR lpName,
    ENUMRESLANGPROCA lpEnumFunc,
    LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
);

WINBASEAPI BOOL APIENTRY EnumResourceLanguagesExW(
    HMODULE hModule,
    LPCWSTR lpType,
    LPCWSTR lpName,
    ENUMRESLANGPROCW lpEnumFunc,
    LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
);
#ifdef UNICODE
#define EnumResourceLanguagesEx  EnumResourceLanguagesExW
#else /* !UNICODE */
#define EnumResourceLanguagesEx  EnumResourceLanguagesExA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI EnumResourceNamesExA(
    HMODULE hModule,
    LPCSTR lpType,
    ENUMRESNAMEPROCA lpEnumFunc,
    LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
);

WINBASEAPI BOOL WINAPI EnumResourceNamesExW(
    HMODULE hModule,
    LPCWSTR lpType,
    ENUMRESNAMEPROCW lpEnumFunc,
    LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
);
#ifdef UNICODE
#define EnumResourceNamesEx  EnumResourceNamesExW
#else /* !UNICODE */
#define EnumResourceNamesEx  EnumResourceNamesExA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI EnumResourceTypesExA(
    HMODULE hModule,
    ENUMRESTYPEPROCA lpEnumFunc,
    LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
);

WINBASEAPI BOOL WINAPI EnumResourceTypesExW(
    HMODULE hModule,
    ENUMRESTYPEPROCW lpEnumFunc,
    LONG_PTR lParam,
    DWORD dwFlags,
    LANGID LangId
);
#ifdef UNICODE
#define EnumResourceTypesEx  EnumResourceTypesExW
#else /* !UNICODE */
#define EnumResourceTypesEx  EnumResourceTypesExA
#endif /* !UNICODE */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_VISTA) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI HRSRC WINAPI FindResourceW(
    HMODULE hModule,
    LPCWSTR lpName,
    LPCWSTR lpType
);

#ifdef UNICODE
#define FindResource  FindResourceW
#endif /* UNICODE */

WINBASEAPI HMODULE WINAPI LoadLibraryA( 
    LPCSTR lpLibFileName
);
WINBASEAPI HMODULE WINAPI LoadLibraryW(
    LPCWSTR lpLibFileName
);
#ifdef UNICODE
#define LoadLibrary  LoadLibraryW
#else /* !UNICODE */
#define LoadLibrary  LoadLibraryA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI EnumResourceNamesW(
    HMODULE hModule,
    LPCWSTR lpType,
    ENUMRESNAMEPROCW lpEnumFunc,
    LONG_PTR lParam
);
WINBASEAPI BOOL WINAPI EnumResourceNamesA(
    HMODULE hModule,
    LPCSTR lpType,
    ENUMRESNAMEPROCA lpEnumFunc,
    LONG_PTR lParam
);
#ifdef UNICODE
#define EnumResourceNames  EnumResourceNamesW
#else /* !UNICODE */
#define EnumResourceNames  EnumResourceNamesA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* _LIBLOADERAPI_H */
