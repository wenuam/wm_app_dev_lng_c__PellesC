#ifndef _CONSOLEAPI2_H
#define _CONSOLEAPI2_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-console-l2 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#include <wincontypes.h>
#include <windef.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#define FOREGROUND_BLUE      0x0001
#define FOREGROUND_GREEN     0x0002
#define FOREGROUND_RED       0x0004
#define FOREGROUND_INTENSITY 0x0008
#define BACKGROUND_BLUE      0x0010
#define BACKGROUND_GREEN     0x0020
#define BACKGROUND_RED       0x0040
#define BACKGROUND_INTENSITY 0x0080
#define COMMON_LVB_LEADING_BYTE    0x0100
#define COMMON_LVB_TRAILING_BYTE   0x0200
#define COMMON_LVB_GRID_HORIZONTAL 0x0400
#define COMMON_LVB_GRID_LVERTICAL  0x0800
#define COMMON_LVB_GRID_RVERTICAL  0x1000
#define COMMON_LVB_REVERSE_VIDEO   0x4000
#define COMMON_LVB_UNDERSCORE      0x8000

#define COMMON_LVB_SBCSDBCS        0x0300

WINBASEAPI BOOL WINAPI FillConsoleOutputCharacterA(
    HANDLE hConsoleOutput,
    CHAR cCharacter,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfCharsWritten
);

WINBASEAPI BOOL WINAPI FillConsoleOutputCharacterW(
    HANDLE hConsoleOutput,
    WCHAR cCharacter,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfCharsWritten
);
#ifdef UNICODE
#define FillConsoleOutputCharacter  FillConsoleOutputCharacterW
#else /* !UNICODE */
#define FillConsoleOutputCharacter  FillConsoleOutputCharacterA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI FillConsoleOutputAttribute(
    HANDLE hConsoleOutput,
    WORD wAttribute,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfAttrsWritten
);

WINBASEAPI BOOL WINAPI GenerateConsoleCtrlEvent(
    DWORD dwCtrlEvent,
    DWORD dwProcessGroupId
);

WINBASEAPI HANDLE WINAPI CreateConsoleScreenBuffer(
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    CONST SECURITY_ATTRIBUTES * lpSecurityAttributes,
    DWORD dwFlags,
    LPVOID lpScreenBufferData
);

WINBASEAPI BOOL WINAPI SetConsoleActiveScreenBuffer(
    HANDLE hConsoleOutput
);

WINBASEAPI BOOL WINAPI FlushConsoleInputBuffer(
    HANDLE hConsoleInput
);

WINBASEAPI BOOL WINAPI SetConsoleCP(
    UINT wCodePageID
);

WINBASEAPI BOOL WINAPI SetConsoleOutputCP(
    UINT wCodePageID
);

typedef struct _CONSOLE_CURSOR_INFO {
    DWORD dwSize;
    BOOL bVisible;
} CONSOLE_CURSOR_INFO, *PCONSOLE_CURSOR_INFO;

WINBASEAPI BOOL WINAPI GetConsoleCursorInfo(
    HANDLE hConsoleOutput,
    PCONSOLE_CURSOR_INFO lpConsoleCursorInfo
);

WINBASEAPI BOOL WINAPI SetConsoleCursorInfo(
    HANDLE hConsoleOutput,
    CONST CONSOLE_CURSOR_INFO * lpConsoleCursorInfo
);

typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
    COORD dwSize;
    COORD dwCursorPosition;
    WORD wAttributes;
    SMALL_RECT srWindow;
    COORD dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO, *PCONSOLE_SCREEN_BUFFER_INFO;

WINBASEAPI BOOL WINAPI GetConsoleScreenBufferInfo(
    HANDLE hConsoleOutput,
    PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo
);

typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX {
    ULONG cbSize;
    COORD dwSize;
    COORD dwCursorPosition;
    WORD wAttributes;
    SMALL_RECT srWindow;
    COORD dwMaximumWindowSize;
    WORD wPopupAttributes;
    BOOL bFullscreenSupported;
    COLORREF ColorTable[16];
} CONSOLE_SCREEN_BUFFER_INFOEX, *PCONSOLE_SCREEN_BUFFER_INFOEX;

WINBASEAPI BOOL WINAPI GetConsoleScreenBufferInfoEx(
    HANDLE hConsoleOutput,
    PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
);

WINBASEAPI BOOL WINAPI SetConsoleScreenBufferInfoEx(
    HANDLE hConsoleOutput,
    PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
);

WINBASEAPI BOOL WINAPI SetConsoleScreenBufferSize(
    HANDLE hConsoleOutput,
    COORD dwSize
);

WINBASEAPI BOOL WINAPI SetConsoleCursorPosition(
    HANDLE hConsoleOutput,
    COORD dwCursorPosition
);

WINBASEAPI COORD WINAPI GetLargestConsoleWindowSize(
    HANDLE hConsoleOutput
);

WINBASEAPI BOOL WINAPI SetConsoleTextAttribute(
    HANDLE hConsoleOutput,
    WORD wAttributes
);

WINBASEAPI BOOL WINAPI SetConsoleWindowInfo(
    HANDLE hConsoleOutput,
    BOOL bAbsolute,
    CONST SMALL_RECT *lpConsoleWindow
);

WINBASEAPI BOOL WINAPI WriteConsoleOutputCharacterA(
    HANDLE hConsoleOutput,
    LPCSTR lpCharacter,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfCharsWritten
);

WINBASEAPI BOOL WINAPI WriteConsoleOutputCharacterW(
    HANDLE hConsoleOutput,
    LPCWSTR lpCharacter,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfCharsWritten
);
#ifdef UNICODE
#define WriteConsoleOutputCharacter  WriteConsoleOutputCharacterW
#else /* !UNICODE */
#define WriteConsoleOutputCharacter  WriteConsoleOutputCharacterA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI WriteConsoleOutputAttribute(
    HANDLE hConsoleOutput,
    CONST WORD * lpAttribute,
    DWORD nLength,
    COORD dwWriteCoord,
    LPDWORD lpNumberOfAttrsWritten
);

WINBASEAPI BOOL WINAPI ReadConsoleOutputCharacterA(
    HANDLE hConsoleOutput,
    LPSTR lpCharacter,
    DWORD nLength,
    COORD dwReadCoord,
    LPDWORD lpNumberOfCharsRead
);

WINBASEAPI BOOL WINAPI ReadConsoleOutputCharacterW(
    HANDLE hConsoleOutput,
    LPWSTR lpCharacter,
    DWORD nLength,
    COORD dwReadCoord,
    LPDWORD lpNumberOfCharsRead
);
#ifdef UNICODE
#define ReadConsoleOutputCharacter  ReadConsoleOutputCharacterW
#else /* !UNICODE */
#define ReadConsoleOutputCharacter  ReadConsoleOutputCharacterA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI ReadConsoleOutputAttribute(
    HANDLE hConsoleOutput,
    LPWORD lpAttribute,
    DWORD nLength,
    COORD dwReadCoord,
    LPDWORD lpNumberOfAttrsRead
);

WINBASEAPI BOOL WINAPI WriteConsoleInputA(
    HANDLE hConsoleInput,
    CONST INPUT_RECORD * lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsWritten
);

WINBASEAPI BOOL WINAPI WriteConsoleInputW(
    HANDLE hConsoleInput,
    CONST INPUT_RECORD * lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsWritten
);
#ifdef UNICODE
#define WriteConsoleInput  WriteConsoleInputW
#else /* !UNICODE */
#define WriteConsoleInput  WriteConsoleInputA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI ScrollConsoleScreenBufferA(
    HANDLE hConsoleOutput,
    CONST SMALL_RECT *lpScrollRectangle,
    CONST SMALL_RECT *lpClipRectangle,
    COORD dwDestinationOrigin,
    CONST CHAR_INFO *lpFill
);

WINBASEAPI BOOL WINAPI ScrollConsoleScreenBufferW(
    HANDLE hConsoleOutput,
    CONST SMALL_RECT *lpScrollRectangle,
    CONST SMALL_RECT *lpClipRectangle,
    COORD dwDestinationOrigin,
    CONST CHAR_INFO *lpFill
);
#ifdef UNICODE
#define ScrollConsoleScreenBuffer  ScrollConsoleScreenBufferW
#else /* !UNICODE */
#define ScrollConsoleScreenBuffer  ScrollConsoleScreenBufferA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI WriteConsoleOutputA(
    HANDLE hConsoleOutput,
    CONST CHAR_INFO *lpBuffer,
    COORD dwBufferSize,
    COORD dwBufferCoord,
    PSMALL_RECT lpWriteRegion
);

WINBASEAPI BOOL WINAPI WriteConsoleOutputW(
    HANDLE hConsoleOutput,
    CONST CHAR_INFO *lpBuffer,
    COORD dwBufferSize,
    COORD dwBufferCoord,
    PSMALL_RECT lpWriteRegion
);
#ifdef UNICODE
#define WriteConsoleOutput  WriteConsoleOutputW
#else /* !UNICODE */
#define WriteConsoleOutput  WriteConsoleOutputA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI ReadConsoleOutputA(
    HANDLE hConsoleOutput,
    PCHAR_INFO lpBuffer,
    COORD dwBufferSize,
    COORD dwBufferCoord,
    PSMALL_RECT lpReadRegion
);

WINBASEAPI BOOL WINAPI ReadConsoleOutputW(
    HANDLE hConsoleOutput,
    PCHAR_INFO lpBuffer,
    COORD dwBufferSize,
    COORD dwBufferCoord,
    PSMALL_RECT lpReadRegion
);
#ifdef UNICODE
#define ReadConsoleOutput  ReadConsoleOutputW
#else /* !UNICODE */
#define ReadConsoleOutput  ReadConsoleOutputA
#endif /* !UNICODE */

WINBASEAPI DWORD WINAPI GetConsoleTitleA(
    LPSTR lpConsoleTitle,
    DWORD nSize
);

WINBASEAPI DWORD WINAPI GetConsoleTitleW(
    LPWSTR lpConsoleTitle,
    DWORD nSize
);
#ifdef UNICODE
#define GetConsoleTitle  GetConsoleTitleW
#else /* !UNICODE */
#define GetConsoleTitle  GetConsoleTitleA
#endif /* !UNICODE */

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI DWORD WINAPI GetConsoleOriginalTitleA(
    LPSTR lpConsoleTitle,
    DWORD nSize
);

WINBASEAPI DWORD WINAPI GetConsoleOriginalTitleW(
    LPWSTR lpConsoleTitle,
    DWORD nSize
);
#ifdef UNICODE
#define GetConsoleOriginalTitle  GetConsoleOriginalTitleW
#else /* !UNICODE */
#define GetConsoleOriginalTitle  GetConsoleOriginalTitleA
#endif /* !UNICODE */

#endif /* _WIN32_WINNT >= 0x0600 */

WINBASEAPI BOOL WINAPI SetConsoleTitleA(
    LPCSTR lpConsoleTitle
);

WINBASEAPI BOOL WINAPI SetConsoleTitleW(
    LPCWSTR lpConsoleTitle
);
#ifdef UNICODE
#define SetConsoleTitle  SetConsoleTitleW
#else /* !UNICODE */
#define SetConsoleTitle  SetConsoleTitleA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _CONSOLEAPI2_H */
