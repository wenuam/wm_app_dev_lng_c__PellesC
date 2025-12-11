#ifndef _DDE_H
#define _DDE_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Dynamic Data Exchange definitions */

#ifndef _WINDEF_H
#include <windef.h>
#endif /* _WINDEF_H */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define WM_DDE_FIRST        0x03E0
#define WM_DDE_INITIATE     (WM_DDE_FIRST)
#define WM_DDE_TERMINATE    (WM_DDE_FIRST+1)
#define WM_DDE_ADVISE       (WM_DDE_FIRST+2)
#define WM_DDE_UNADVISE     (WM_DDE_FIRST+3)
#define WM_DDE_ACK          (WM_DDE_FIRST+4)
#define WM_DDE_DATA         (WM_DDE_FIRST+5)
#define WM_DDE_REQUEST      (WM_DDE_FIRST+6)
#define WM_DDE_POKE         (WM_DDE_FIRST+7)
#define WM_DDE_EXECUTE      (WM_DDE_FIRST+8)
#define WM_DDE_LAST         (WM_DDE_FIRST+8)

typedef struct {
    unsigned short bAppReturnCode:8, reserved:6, fBusy:1, fAck:1;
} DDEACK;

typedef struct {
    unsigned short reserved:14, fDeferUpd:1, fAckReq:1;
    short cfFormat;
} DDEADVISE;

typedef struct {
    unsigned short unused:12, fResponse:1, fRelease:1, reserved:1, fAckReq:1;
    short cfFormat;
    BYTE Value[1];
} DDEDATA;

typedef struct {
    unsigned short unused:13, fRelease:1, fReserved:2;
    short cfFormat;
    BYTE Value[1];
} DDEPOKE;

typedef struct {
    unsigned short unused:13, fRelease:1, fDeferUpd:1, fAckReq:1;
    short cfFormat;
} DDELN;

typedef struct {
    unsigned short unused:12, fAck:1, fRelease:1, fReserved:1, fAckReq:1;
    short cfFormat;
    BYTE rgb[1];
} DDEUP;

BOOL WINAPI DdeSetQualityOfService(
    HWND hwndClient,
    CONST SECURITY_QUALITY_OF_SERVICE *pqosNew,
    PSECURITY_QUALITY_OF_SERVICE pqosPrev);

BOOL WINAPI ImpersonateDdeClientWindow(
    HWND hWndClient,
    HWND hWndServer);

LPARAM APIENTRY PackDDElParam(UINT msg, UINT_PTR uiLo, UINT_PTR uiHi);
BOOL APIENTRY UnpackDDElParam(UINT msg, LPARAM lParam, PUINT_PTR puiLo, PUINT_PTR puiHi);
BOOL APIENTRY FreeDDElParam(UINT msg, LPARAM lParam);
LPARAM APIENTRY ReuseDDElParam(LPARAM lParam, UINT msgIn, UINT msgOut, UINT_PTR uiLo, UINT_PTR uiHi);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _DDE_H */
