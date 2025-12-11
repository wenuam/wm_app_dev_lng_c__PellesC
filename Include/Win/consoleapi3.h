#ifndef _CONSOLEAPI3_H
#define _CONSOLEAPI3_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-console-l3 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#include <wincontypes.h>
#include <windef.h>

#ifndef NOGDI
#include <wingdi.h>
#endif /* !NOGDI */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI GetNumberOfConsoleMouseButtons(
    LPDWORD lpNumberOfMouseButtons
);

#if (_WIN32_WINNT >= 0x0500)

WINBASEAPI COORD WINAPI GetConsoleFontSize(
    HANDLE hConsoleOutput,
    DWORD nFont
);

WINBASEAPI BOOL WINAPI GetCurrentConsoleFont(
    HANDLE hConsoleOutput,
    BOOL bMaximumWindow,
    PCONSOLE_FONT_INFO lpConsoleCurrentFont
);

#ifndef NOGDI

typedef struct _CONSOLE_FONT_INFOEX {
    ULONG cbSize;
    DWORD nFont;
    COORD dwFontSize;
    UINT FontFamily;
    UINT FontWeight;
    WCHAR FaceName[LF_FACESIZE];
} CONSOLE_FONT_INFOEX, *PCONSOLE_FONT_INFOEX;

WINBASEAPI BOOL WINAPI GetCurrentConsoleFontEx(
    HANDLE hConsoleOutput,
    BOOL bMaximumWindow,
    PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx
);

WINBASEAPI BOOL WINAPI SetCurrentConsoleFontEx(
    HANDLE hConsoleOutput,
    BOOL bMaximumWindow,
    PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx
);

#endif /* !NOGDI */


#define CONSOLE_NO_SELECTION            0x0000
#define CONSOLE_SELECTION_IN_PROGRESS   0x0001
#define CONSOLE_SELECTION_NOT_EMPTY     0x0002
#define CONSOLE_MOUSE_SELECTION         0x0004
#define CONSOLE_MOUSE_DOWN              0x0008

typedef struct _CONSOLE_SELECTION_INFO {
    DWORD dwFlags;
    COORD dwSelectionAnchor;
    SMALL_RECT srSelection;
} CONSOLE_SELECTION_INFO, *PCONSOLE_SELECTION_INFO;

WINBASEAPI BOOL WINAPI GetConsoleSelectionInfo(
    PCONSOLE_SELECTION_INFO lpConsoleSelectionInfo
);

#define HISTORY_NO_DUP_FLAG  0x1

typedef struct _CONSOLE_HISTORY_INFO {
    UINT cbSize;
    UINT HistoryBufferSize;
    UINT NumberOfHistoryBuffers;
    DWORD dwFlags;
} CONSOLE_HISTORY_INFO, *PCONSOLE_HISTORY_INFO;

WINBASEAPI BOOL WINAPI GetConsoleHistoryInfo(
    PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo
);

WINBASEAPI BOOL WINAPI SetConsoleHistoryInfo(
    PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo
);

#define CONSOLE_FULLSCREEN  1
#define CONSOLE_FULLSCREEN_HARDWARE  2

WINBASEAPI BOOL APIENTRY GetConsoleDisplayMode(
    LPDWORD lpModeFlags
);

#define CONSOLE_FULLSCREEN_MODE  1
#define CONSOLE_WINDOWED_MODE  2

WINBASEAPI BOOL APIENTRY SetConsoleDisplayMode(
    HANDLE hConsoleOutput,
    DWORD dwFlags,
    PCOORD lpNewScreenBufferDimensions
);

WINBASEAPI HWND APIENTRY GetConsoleWindow(
    void
);

#endif /* _WIN32_WINNT >= 0x0500 */

#if (_WIN32_WINNT >= 0x0501)

WINBASEAPI BOOL APIENTRY AddConsoleAliasA(
    LPSTR Source,
    LPSTR Target,
    LPSTR ExeName
);
WINBASEAPI BOOL APIENTRY AddConsoleAliasW(
    LPWSTR Source,
    LPWSTR Target,
    LPWSTR ExeName
);
#ifdef UNICODE
#define AddConsoleAlias  AddConsoleAliasW
#else /* !UNICODE */
#define AddConsoleAlias  AddConsoleAliasA
#endif /* !UNICODE */

WINBASEAPI DWORD APIENTRY GetConsoleAliasA(
    LPSTR Source,
    LPSTR TargetBuffer,
    DWORD TargetBufferLength,
    LPSTR ExeName
);
WINBASEAPI DWORD APIENTRY GetConsoleAliasW(
    LPWSTR Source,
    LPWSTR TargetBuffer,
    DWORD TargetBufferLength,
    LPWSTR ExeName
);
#ifdef UNICODE
#define GetConsoleAlias  GetConsoleAliasW
#else /* !UNICODE */
#define GetConsoleAlias  GetConsoleAliasA
#endif /* !UNICODE */

WINBASEAPI DWORD APIENTRY GetConsoleAliasesLengthA(LPSTR ExeName);
WINBASEAPI DWORD APIENTRY GetConsoleAliasesLengthW(LPWSTR ExeName);
#ifdef UNICODE
#define GetConsoleAliasesLength  GetConsoleAliasesLengthW
#else /* !UNICODE */
#define GetConsoleAliasesLength  GetConsoleAliasesLengthA
#endif /* !UNICODE */

WINBASEAPI DWORD APIENTRY GetConsoleAliasExesLengthA(void);
WINBASEAPI DWORD APIENTRY GetConsoleAliasExesLengthW(void);
#ifdef UNICODE
#define GetConsoleAliasExesLength  GetConsoleAliasExesLengthW
#else /* !UNICODE */
#define GetConsoleAliasExesLength  GetConsoleAliasExesLengthA
#endif /* !UNICODE */

WINBASEAPI DWORD APIENTRY GetConsoleAliasesA(
    LPSTR AliasBuffer,
    DWORD AliasBufferLength,
    LPSTR ExeName
);
WINBASEAPI DWORD APIENTRY GetConsoleAliasesW(
    LPWSTR AliasBuffer,
    DWORD AliasBufferLength,
    LPWSTR ExeName
);
#ifdef UNICODE
#define GetConsoleAliases  GetConsoleAliasesW
#else /* !UNICODE */
#define GetConsoleAliases  GetConsoleAliasesA
#endif /* !UNICODE */

WINBASEAPI DWORD APIENTRY GetConsoleAliasExesA(
    LPSTR ExeNameBuffer,
    DWORD ExeNameBufferLength
);
WINBASEAPI DWORD APIENTRY GetConsoleAliasExesW(
    LPWSTR ExeNameBuffer,
    DWORD ExeNameBufferLength
);
#ifdef UNICODE
#define GetConsoleAliasExes  GetConsoleAliasExesW
#else /* !UNICODE */
#define GetConsoleAliasExes  GetConsoleAliasExesA
#endif /* !UNICODE */

#endif /* _WIN32_WINNT >= 0x0501 */

WINBASEAPI void APIENTRY ExpungeConsoleCommandHistoryA(LPSTR ExeName);
WINBASEAPI void APIENTRY ExpungeConsoleCommandHistoryW(LPWSTR ExeName);
#ifdef UNICODE
#define ExpungeConsoleCommandHistory  ExpungeConsoleCommandHistoryW
#else /* !UNICODE */
#define ExpungeConsoleCommandHistory  ExpungeConsoleCommandHistoryA
#endif /* !UNICODE */

WINBASEAPI BOOL APIENTRY SetConsoleNumberOfCommandsA(DWORD Number, LPSTR ExeName);
WINBASEAPI BOOL APIENTRY SetConsoleNumberOfCommandsW(DWORD Number, LPWSTR ExeName);
#ifdef UNICODE
#define SetConsoleNumberOfCommands  SetConsoleNumberOfCommandsW
#else /* !UNICODE */
#define SetConsoleNumberOfCommands  SetConsoleNumberOfCommandsA
#endif /* !UNICODE */

WINBASEAPI DWORD APIENTRY GetConsoleCommandHistoryLengthA(LPSTR ExeName);
WINBASEAPI DWORD APIENTRY GetConsoleCommandHistoryLengthW(LPWSTR ExeName);
#ifdef UNICODE
#define GetConsoleCommandHistoryLength  GetConsoleCommandHistoryLengthW
#else /* !UNICODE */
#define GetConsoleCommandHistoryLength  GetConsoleCommandHistoryLengthA
#endif /* !UNICODE */

WINBASEAPI DWORD APIENTRY GetConsoleCommandHistoryA(
    LPSTR Commands,
    DWORD CommandBufferLength,
    LPSTR ExeName
);
WINBASEAPI DWORD APIENTRY GetConsoleCommandHistoryW(
    LPWSTR Commands,
    DWORD CommandBufferLength,
    LPWSTR ExeName
);
#ifdef UNICODE
#define GetConsoleCommandHistory  GetConsoleCommandHistoryW
#else /* !UNICODE */
#define GetConsoleCommandHistory  GetConsoleCommandHistoryA
#endif /* !UNICODE */

#if (_WIN32_WINNT >= 0x0501)

WINBASEAPI DWORD APIENTRY GetConsoleProcessList(
    LPDWORD lpdwProcessList,
    DWORD dwProcessCount
);

#endif /* _WIN32_WINNT >= 0x0501 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _CONSOLEAPI3_H */
