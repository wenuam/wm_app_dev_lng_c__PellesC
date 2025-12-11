#ifndef _RASDLG_H
#define _RASDLG_H

#if __POCC__ >= 500
#pragma once
#endif

/* Remote Access Common Dialog API definitions */

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2185)  /* Alignment of field 'x' can be less than the natural alignment */
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <pshpack4.h>

#include <ras.h>

typedef VOID (WINAPI *RASPBDLGFUNCW)(ULONG_PTR, DWORD, LPWSTR, LPVOID);
typedef VOID (WINAPI *RASPBDLGFUNCA)(ULONG_PTR, DWORD, LPSTR, LPVOID);

#define RASPBDEVENT_AddEntry    1
#define RASPBDEVENT_EditEntry   2
#define RASPBDEVENT_RemoveEntry 3
#define RASPBDEVENT_DialEntry   4
#define RASPBDEVENT_EditGlobals 5
#define RASPBDEVENT_NoUser      6
#define RASPBDEVENT_NoUserEdit  7

#define  RASNOUSER_SmartCard    0x00000001

typedef struct tagRASNOUSERW {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwTimeoutMs;
    WCHAR szUserName[ UNLEN + 1 ];
    WCHAR szPassword[ PWLEN + 1 ];
    WCHAR szDomain[ DNLEN + 1 ];
} RASNOUSERW;

typedef struct tagRASNOUSERA {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwTimeoutMs;
    CHAR szUserName[ UNLEN + 1 ];
    CHAR szPassword[ PWLEN + 1 ];
    CHAR szDomain[ DNLEN + 1 ];
} RASNOUSERA;

#ifdef UNICODE
#define RASNOUSER RASNOUSERW
#else /* UNICODE */
#define RASNOUSER RASNOUSERA
#endif /* UNICODE */

#define LPRASNOUSERW RASNOUSERW*
#define LPRASNOUSERA RASNOUSERA*
#define LPRASNOUSER  RASNOUSER*

#define RASPBDFLAG_PositionDlg      0x00000001
#define RASPBDFLAG_ForceCloseOnDial 0x00000002
#define RASPBDFLAG_NoUser           0x00000010
#define RASPBDFLAG_UpdateDefaults   0x80000000

typedef struct tagRASPBDLGW {
    DWORD dwSize;
    HWND hwndOwner;
    DWORD dwFlags;
    LONG xDlg;
    LONG yDlg;
    ULONG_PTR dwCallbackId;
    RASPBDLGFUNCW pCallback;
    DWORD dwError;
    ULONG_PTR reserved;
    ULONG_PTR reserved2;
} RASPBDLGW;

typedef struct tagRASPBDLGA {
    DWORD dwSize;
    HWND hwndOwner;
    DWORD dwFlags;
    LONG xDlg;
    LONG yDlg;
    ULONG_PTR dwCallbackId;
    RASPBDLGFUNCA pCallback;
    DWORD dwError;
    ULONG_PTR reserved;
    ULONG_PTR reserved2;
} RASPBDLGA;

#ifdef UNICODE
#define RASPBDLG     RASPBDLGW
#define RASPBDLGFUNC RASPBDLGFUNCW
#else /* UNICODE */
#define RASPBDLG     RASPBDLGA
#define RASPBDLGFUNC RASPBDLGFUNCA
#endif /* UNICODE */

#define LPRASPBDLGW RASPBDLGW*
#define LPRASPBDLGA RASPBDLGA*
#define LPRASPBDLG  RASPBDLG*

#define RASEDFLAG_PositionDlg     0x00000001
#define RASEDFLAG_NewEntry        0x00000002
#if (WINVER < 0x600)
#define RASEDFLAG_CloneEntry      0x00000004
#endif /* (WINVER < 0x600) */
#define RASEDFLAG_NoRename        0x00000008
#define RASEDFLAG_ShellOwned      0x40000000
#define RASEDFLAG_NewPhoneEntry   0x00000010
#define RASEDFLAG_NewTunnelEntry  0x00000020
#if (WINVER < 0x600)
#define RASEDFLAG_NewDirectEntry  0x00000040
#endif /* (WINVER < 0x600) */
#define RASEDFLAG_NewBroadbandEntry   0x00000080
#define RASEDFLAG_InternetEntry       0x00000100
#define RASEDFLAG_NAT                 0x00000200
#if (WINVER >= 0x600)
#define RASEDFLAG_IncomingConnection  0x00000400
#endif /* (WINVER >= 0x600) */

typedef struct tagRASENTRYDLGW {
    DWORD dwSize;
    HWND hwndOwner;
    DWORD dwFlags;
    LONG xDlg;
    LONG yDlg;
    WCHAR szEntry[ RAS_MaxEntryName + 1 ];
    DWORD dwError;
    ULONG_PTR reserved;
    ULONG_PTR reserved2;
} RASENTRYDLGW;

typedef struct tagRASENTRYDLGA {
    DWORD dwSize;
    HWND hwndOwner;
    DWORD dwFlags;
    LONG xDlg;
    LONG yDlg;
    CHAR szEntry[ RAS_MaxEntryName + 1 ];
    DWORD dwError;
    ULONG_PTR reserved;
    ULONG_PTR reserved2;
} RASENTRYDLGA;

#ifdef UNICODE
#define RASENTRYDLG RASENTRYDLGW
#else /* UNICODE */
#define RASENTRYDLG RASENTRYDLGA
#endif /* UNICODE */

#define LPRASENTRYDLGW RASENTRYDLGW*
#define LPRASENTRYDLGA RASENTRYDLGA*
#define LPRASENTRYDLG  RASENTRYDLG*

#define RASDDFLAG_PositionDlg 0x00000001
#define RASDDFLAG_NoPrompt    0x00000002
#define RASDDFLAG_AoacRedial  0x00000004
#define RASDDFLAG_LinkFailure 0x80000000

typedef struct tagRASDIALDLG  {
    DWORD dwSize;
    HWND hwndOwner;
    DWORD dwFlags;
    LONG xDlg;
    LONG yDlg;
    DWORD dwSubEntry;
    DWORD dwError;
    ULONG_PTR reserved;
    ULONG_PTR reserved2;
} RASDIALDLG;

#define LPRASDIALDLG RASDIALDLG*

#if (WINVER >= 0x500)

typedef BOOL (WINAPI *RasCustomDialDlgFn)(
    HINSTANCE hInstDll,
    DWORD dwFlags,
    LPWSTR lpszPhonebook,
    LPWSTR lpszEntry,
    LPWSTR lpszPhoneNumber,
    LPRASDIALDLG lpInfo,
    PVOID pvInfo
);

typedef BOOL (WINAPI *RasCustomEntryDlgFn)(
    HINSTANCE hInstDll,
    LPWSTR lpszPhonebook,
    LPWSTR lpszEntry,
    LPRASENTRYDLG lpInfo,
    DWORD dwFlags
);

#endif /* (WINVER >= 0x500) */

BOOL APIENTRY RasPhonebookDlgA(
    LPSTR lpszPhonebook,
    LPSTR lpszEntry,
    LPRASPBDLGA lpInfo);

BOOL APIENTRY RasPhonebookDlgW(
    LPWSTR lpszPhonebook,
    LPWSTR lpszEntry,
    LPRASPBDLGW lpInfo);

BOOL APIENTRY RasEntryDlgA(
    LPSTR lpszPhonebook,
    LPSTR lpszEntry,
    LPRASENTRYDLGA lpInfo);

BOOL APIENTRY RasEntryDlgW(
    LPWSTR lpszPhonebook,
    LPWSTR lpszEntry,
    LPRASENTRYDLGW lpInfo);

BOOL APIENTRY RasDialDlgA(
    LPSTR lpszPhonebook,
    LPSTR lpszEntry,
    LPSTR lpszPhoneNumber,
    LPRASDIALDLG lpInfo);

BOOL APIENTRY RasDialDlgW(
    LPWSTR lpszPhonebook,
    LPWSTR lpszEntry,
    LPWSTR lpszPhoneNumber,
    LPRASDIALDLG lpInfo);

#ifdef UNICODE
#define RasPhonebookDlg RasPhonebookDlgW
#define RasEntryDlg     RasEntryDlgW
#define RasDialDlg      RasDialDlgW
#if (WINVER <= 0x500)
#define RasMonitorDlg   RasMonitorDlgW
#endif /* (WINVER <= 0x500) */
#else /* !UNICODE */
#define RasPhonebookDlg RasPhonebookDlgA
#define RasEntryDlg     RasEntryDlgA
#define RasDialDlg      RasDialDlgA
#if (WINVER <= 0x500)
#define RasMonitorDlg   RasMonitorDlgA
#endif /* (WINVER <= 0x500) */
#endif /* !UNICODE */

#include <poppack.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* _RASDLG_H */
