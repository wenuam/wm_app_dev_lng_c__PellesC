#ifndef _CONSOLEAPI_H
#define _CONSOLEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-console-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#include <wincontypes.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI AllocConsole(void);
WINBASEAPI BOOL WINAPI FreeConsole(void);

#if (_WIN32_WINNT >= 0x0500)

WINBASEAPI BOOL WINAPI AttachConsole(DWORD dwProcessId);

#define ATTACH_PARENT_PROCESS  ((DWORD)-1)

#endif /* _WIN32_WINNT >= 0x0500 */

WINBASEAPI UINT WINAPI GetConsoleCP(void);
WINBASEAPI UINT WINAPI GetConsoleOutputCP(void);

#define ENABLE_PROCESSED_INPUT              0x0001
#define ENABLE_LINE_INPUT                   0x0002
#define ENABLE_ECHO_INPUT                   0x0004
#define ENABLE_WINDOW_INPUT                 0x0008
#define ENABLE_MOUSE_INPUT                  0x0010
#define ENABLE_INSERT_MODE                  0x0020
#define ENABLE_QUICK_EDIT_MODE              0x0040
#define ENABLE_EXTENDED_FLAGS               0x0080
#define ENABLE_AUTO_POSITION                0x0100
#define ENABLE_VIRTUAL_TERMINAL_INPUT       0x0200

#define ENABLE_PROCESSED_OUTPUT             0x0001
#define ENABLE_WRAP_AT_EOL_OUTPUT           0x0002
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING  0x0004
#define DISABLE_NEWLINE_AUTO_RETURN         0x0008
#define ENABLE_LVB_GRID_WORLDWIDE           0x0010

WINBASEAPI BOOL WINAPI GetConsoleMode(
    HANDLE hConsoleHandle,
    LPDWORD lpMode
);

WINBASEAPI BOOL WINAPI SetConsoleMode(
    HANDLE hConsoleHandle,
    DWORD dwMode
);

WINBASEAPI BOOL WINAPI GetNumberOfConsoleInputEvents(
    HANDLE hConsoleInput,
    LPDWORD lpNumberOfEvents
);

WINBASEAPI BOOL WINAPI ReadConsoleInputA(
    HANDLE hConsoleInput,
    PINPUT_RECORD lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsRead
);

WINBASEAPI BOOL WINAPI ReadConsoleInputW(
    HANDLE hConsoleInput,
    PINPUT_RECORD lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsRead
);
#ifdef UNICODE
#define ReadConsoleInput  ReadConsoleInputW
#else /* !UNICODE */
#define ReadConsoleInput  ReadConsoleInputA
#endif /* !UNICODE */

#ifndef UNICODE
#define PeekConsoleInput  PeekConsoleInputA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI PeekConsoleInputA(
    HANDLE hConsoleInput,
    PINPUT_RECORD lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsRead
);

WINBASEAPI BOOL WINAPI PeekConsoleInputW(
    HANDLE hConsoleInput,
    PINPUT_RECORD lpBuffer,
    DWORD nLength,
    LPDWORD lpNumberOfEventsRead
);
#ifdef UNICODE
#define PeekConsoleInput  PeekConsoleInputW
#else /* !UNICODE */
#define PeekConsoleInput  PeekConsoleInputA
#endif /* !UNICODE */

typedef struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
} CONSOLE_READCONSOLE_CONTROL, *PCONSOLE_READCONSOLE_CONTROL;

WINBASEAPI BOOL WINAPI ReadConsoleA(
    HANDLE hConsoleInput,
    LPVOID lpBuffer,
    DWORD nNumberOfCharsToRead,
    LPDWORD lpNumberOfCharsRead,
    PCONSOLE_READCONSOLE_CONTROL pInputControl
);

WINBASEAPI BOOL WINAPI ReadConsoleW(
    HANDLE hConsoleInput,
    LPVOID lpBuffer,
    DWORD nNumberOfCharsToRead,
    LPDWORD lpNumberOfCharsRead,
    PCONSOLE_READCONSOLE_CONTROL pInputControl
);
#ifdef UNICODE
#define ReadConsole  ReadConsoleW
#else /* !UNICODE */
#define ReadConsole  ReadConsoleA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI WriteConsoleA(
    HANDLE hConsoleOutput,
    CONST VOID *lpBuffer,
    DWORD nNumberOfCharsToWrite,
    LPDWORD lpNumberOfCharsWritten,
    LPVOID lpReserved
);

WINBASEAPI BOOL WINAPI WriteConsoleW(
    HANDLE hConsoleOutput,
    CONST VOID *lpBuffer,
    DWORD nNumberOfCharsToWrite,
    LPDWORD lpNumberOfCharsWritten,
    LPVOID lpReserved
);
#ifdef UNICODE
#define WriteConsole  WriteConsoleW
#else /* !UNICODE */
#define WriteConsole  WriteConsoleA
#endif /* !UNICODE */

#define CTRL_C_EVENT        0
#define CTRL_BREAK_EVENT    1
#define CTRL_CLOSE_EVENT    2
#define CTRL_LOGOFF_EVENT   5
#define CTRL_SHUTDOWN_EVENT 6

typedef BOOL (WINAPI *PHANDLER_ROUTINE)(
    DWORD CtrlType
);

WINBASEAPI BOOL WINAPI SetConsoleCtrlHandler(
    PHANDLER_ROUTINE HandlerRoutine,
    BOOL Add
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)

#define PSEUDOCONSOLE_INHERIT_CURSOR  (0x1)

WINBASEAPI HRESULT WINAPI CreatePseudoConsole(
    COORD size,
    HANDLE hInput,
    HANDLE hOutput,
    DWORD dwFlags,
    HPCON *phPC
);

WINBASEAPI HRESULT WINAPI ResizePseudoConsole(
    HPCON hPC,
    COORD size
);

WINBASEAPI VOID WINAPI ClosePseudoConsole(
    HPCON hPC
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS5) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _CONSOLEAPI_H */
