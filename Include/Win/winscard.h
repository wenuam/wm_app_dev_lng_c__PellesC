#ifndef _WINSCARD_H
#define _WINSCARD_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows SmartCard Subsystem definitions */

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2198)  /* Nameless field is not standard */
#endif

#include <wtypes.h>
#include <winioctl.h>
#include "winsmcrd.h"
#ifndef SCARD_S_SUCCESS
#include "scarderr.h"
#endif /* !SCARD_S_SUCCESS */
#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _LPCBYTE_DEFINED
#define _LPCBYTE_DEFINED
typedef const BYTE *LPCBYTE;
#endif /* !_LPCBYTE_DEFINED */

#ifndef _LPCVOID_DEFINED
#define _LPCVOID_DEFINED
typedef const VOID *LPCVOID;
#endif /* !_LPCVOID_DEFINED */

#ifndef WINSCARDAPI
#define WINSCARDAPI
#endif

#ifndef WINSCARDDATA
#define WINSCARDDATA  __declspec(dllimport)
#endif

#if !__midl
WINSCARDDATA extern const SCARD_IO_REQUEST
    g_rgSCardT0Pci,
    g_rgSCardT1Pci,
    g_rgSCardRawPci;
#define SCARD_PCI_T0  (&g_rgSCardT0Pci)
#define SCARD_PCI_T1  (&g_rgSCardT1Pci)
#define SCARD_PCI_RAW (&g_rgSCardRawPci)
#endif /* !__midl */

typedef ULONG_PTR SCARDCONTEXT;
typedef SCARDCONTEXT *PSCARDCONTEXT, *LPSCARDCONTEXT;

typedef ULONG_PTR SCARDHANDLE;
typedef SCARDHANDLE *PSCARDHANDLE, *LPSCARDHANDLE;

#define SCARD_AUTOALLOCATE (DWORD)(-1)

#define SCARD_SCOPE_USER     0
#define SCARD_SCOPE_TERMINAL 1
#define SCARD_SCOPE_SYSTEM   2

extern WINSCARDAPI LONG WINAPI SCardEstablishContext(
    DWORD dwScope,
    LPCVOID pvReserved1,
    LPCVOID pvReserved2,
    LPSCARDCONTEXT phContext
);

extern WINSCARDAPI LONG WINAPI SCardReleaseContext(
    SCARDCONTEXT hContext
);

extern WINSCARDAPI LONG WINAPI SCardIsValidContext(
    SCARDCONTEXT hContext
);

#define SCARD_ALL_READERS       TEXT("SCard$AllReaders\000")
#define SCARD_DEFAULT_READERS   TEXT("SCard$DefaultReaders\000")
#define SCARD_LOCAL_READERS     TEXT("SCard$LocalReaders\000")
#define SCARD_SYSTEM_READERS    TEXT("SCard$SystemReaders\000")

#define SCARD_PROVIDER_PRIMARY  1
#define SCARD_PROVIDER_CSP      2
#define SCARD_PROVIDER_KSP      3

extern WINSCARDAPI LONG WINAPI SCardListReaderGroupsA(
    SCARDCONTEXT hContext,
    LPSTR mszGroups,
    LPDWORD pcchGroups
);
extern WINSCARDAPI LONG WINAPI SCardListReaderGroupsW(
    SCARDCONTEXT hContext,
    LPWSTR mszGroups,
    LPDWORD pcchGroups
);
#ifdef UNICODE
#define SCardListReaderGroups  SCardListReaderGroupsW
#else /* !UNICODE */
#define SCardListReaderGroups  SCardListReaderGroupsA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardListReadersA(
    SCARDCONTEXT hContext,
    LPCSTR mszGroups,
    LPSTR mszReaders,
    LPDWORD pcchReaders
);
extern WINSCARDAPI LONG WINAPI SCardListReadersW(
    SCARDCONTEXT hContext,
    LPCWSTR mszGroups,
    LPWSTR mszReaders,
    LPDWORD pcchReaders
);
#ifdef UNICODE
#define SCardListReaders  SCardListReadersW
#else /* !UNICODE */
#define SCardListReaders  SCardListReadersA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardListCardsA(
    SCARDCONTEXT hContext,
    LPCBYTE pbAtr,
    LPCGUID rgquidInterfaces,
    DWORD cguidInterfaceCount,
    CHAR *mszCards,
    LPDWORD pcchCards
);
extern WINSCARDAPI LONG WINAPI SCardListCardsW(
    SCARDCONTEXT hContext,
    LPCBYTE pbAtr,
    LPCGUID rgquidInterfaces,
    DWORD cguidInterfaceCount,
    WCHAR *mszCards,
    LPDWORD pcchCards
);
#ifdef UNICODE
#define SCardListCards  SCardListCardsW
#else /* !UNICODE */
#define SCardListCards  SCardListCardsA
#endif /* !UNICODE */

#define SCardListCardTypes SCardListCards

extern WINSCARDAPI LONG WINAPI SCardListInterfacesA(
    SCARDCONTEXT hContext,
    LPCSTR szCard,
    LPGUID pguidInterfaces,
    LPDWORD pcguidInterfaces
);
extern WINSCARDAPI LONG WINAPI SCardListInterfacesW(
    SCARDCONTEXT hContext,
    LPCWSTR szCard,
    LPGUID pguidInterfaces,
    LPDWORD pcguidInterfaces
);
#ifdef UNICODE
#define SCardListInterfaces  SCardListInterfacesW
#else /* !UNICODE */
#define SCardListInterfaces  SCardListInterfacesA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardGetProviderIdA(
    SCARDCONTEXT hContext,
    LPCSTR szCard,
    LPGUID pguidProviderId
);
extern WINSCARDAPI LONG WINAPI SCardGetProviderIdW(
    SCARDCONTEXT hContext,
    LPCWSTR szCard,
    LPGUID pguidProviderId
);
#ifdef UNICODE
#define SCardGetProviderId  SCardGetProviderIdW
#else /* !UNICODE */
#define SCardGetProviderId  SCardGetProviderIdA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardGetCardTypeProviderNameA(
    SCARDCONTEXT hContext,
    LPCSTR szCardName,
    DWORD dwProviderId,
    CHAR *szProvider,
    LPDWORD pcchProvider
);
extern WINSCARDAPI LONG WINAPI SCardGetCardTypeProviderNameW(
    SCARDCONTEXT hContext,
    LPCWSTR szCardName,
    DWORD dwProviderId,
    WCHAR *szProvider,
    LPDWORD pcchProvider
);
#ifdef UNICODE
#define SCardGetCardTypeProviderName  SCardGetCardTypeProviderNameW
#else /* !UNICODE */
#define SCardGetCardTypeProviderName  SCardGetCardTypeProviderNameA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardIntroduceReaderGroupA(
    SCARDCONTEXT hContext,
    LPCSTR szGroupName
);
extern WINSCARDAPI LONG WINAPI SCardIntroduceReaderGroupW(
    SCARDCONTEXT hContext,
    LPCWSTR szGroupName
);
#ifdef UNICODE
#define SCardIntroduceReaderGroup  SCardIntroduceReaderGroupW
#else /* !UNICODE */
#define SCardIntroduceReaderGroup  SCardIntroduceReaderGroupA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardForgetReaderGroupA(
    SCARDCONTEXT hContext,
    LPCSTR szGroupName
);
extern WINSCARDAPI LONG WINAPI SCardForgetReaderGroupW(
    SCARDCONTEXT hContext,
    LPCWSTR szGroupName
);
#ifdef UNICODE
#define SCardForgetReaderGroup  SCardForgetReaderGroupW
#else /* !UNICODE */
#define SCardForgetReaderGroup  SCardForgetReaderGroupA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardIntroduceReaderA(
    SCARDCONTEXT hContext,
    LPCSTR szReaderName,
    LPCSTR szDeviceName
);
extern WINSCARDAPI LONG WINAPI SCardIntroduceReaderW(
    SCARDCONTEXT hContext,
    LPCWSTR szReaderName,
    LPCWSTR szDeviceName
);
#ifdef UNICODE
#define SCardIntroduceReader  SCardIntroduceReaderW
#else /* !UNICODE */
#define SCardIntroduceReader  SCardIntroduceReaderA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardForgetReaderA(
    SCARDCONTEXT hContext,
    LPCSTR szReaderName
);
extern WINSCARDAPI LONG WINAPI SCardForgetReaderW(
    SCARDCONTEXT hContext,
    LPCWSTR szReaderName
);
#ifdef UNICODE
#define SCardForgetReader  SCardForgetReaderW
#else /* !UNICODE */
#define SCardForgetReader  SCardForgetReaderA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardAddReaderToGroupA(
    SCARDCONTEXT hContext,
    LPCSTR szReaderName,
    LPCSTR szGroupName
);
extern WINSCARDAPI LONG WINAPI SCardAddReaderToGroupW(
    SCARDCONTEXT hContext,
    LPCWSTR szReaderName,
    LPCWSTR szGroupName
);
#ifdef UNICODE
#define SCardAddReaderToGroup  SCardAddReaderToGroupW
#else /* !UNICODE */
#define SCardAddReaderToGroup  SCardAddReaderToGroupA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardRemoveReaderFromGroupA(
    SCARDCONTEXT hContext,
    LPCSTR szReaderName,
    LPCSTR szGroupName
);
extern WINSCARDAPI LONG WINAPI SCardRemoveReaderFromGroupW(
    SCARDCONTEXT hContext,
    LPCWSTR szReaderName,
    LPCWSTR szGroupName
);
#ifdef UNICODE
#define SCardRemoveReaderFromGroup  SCardRemoveReaderFromGroupW
#else /* !UNICODE */
#define SCardRemoveReaderFromGroup  SCardRemoveReaderFromGroupA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardIntroduceCardTypeA(
    SCARDCONTEXT hContext,
    LPCSTR szCardName,
    LPCGUID pguidPrimaryProvider,
    LPCGUID rgguidInterfaces,
    DWORD dwInterfaceCount,
    LPCBYTE pbAtr,
    LPCBYTE pbAtrMask,
    DWORD cbAtrLen
);
extern WINSCARDAPI LONG WINAPI SCardIntroduceCardTypeW(
    SCARDCONTEXT hContext,
    LPCWSTR szCardName,
    LPCGUID pguidPrimaryProvider,
    LPCGUID rgguidInterfaces,
    DWORD dwInterfaceCount,
    LPCBYTE pbAtr,
    LPCBYTE pbAtrMask,
    DWORD cbAtrLen
);
#ifdef UNICODE
#define SCardIntroduceCardType  SCardIntroduceCardTypeW
#else /* !UNICODE */
#define SCardIntroduceCardType  SCardIntroduceCardTypeA
#endif /* !UNICODE */

#define PCSCardIntroduceCardType(hContext, szCardName, pbAtr, pbAtrMask, cbAtrLen, pguidPrimaryProvider, rgguidInterfaces, dwInterfaceCount) \
          SCardIntroduceCardType(hContext, szCardName, pguidPrimaryProvider, rgguidInterfaces, dwInterfaceCount, pbAtr, pbAtrMask, cbAtrLen)

extern WINSCARDAPI LONG WINAPI SCardSetCardTypeProviderNameA(
    SCARDCONTEXT hContext,
    LPCSTR szCardName,
    DWORD dwProviderId,
    LPCSTR szProvider
);
extern WINSCARDAPI LONG WINAPI SCardSetCardTypeProviderNameW(
    SCARDCONTEXT hContext,
    LPCWSTR szCardName,
    DWORD dwProviderId,
    LPCWSTR szProvider
);
#ifdef UNICODE
#define SCardSetCardTypeProviderName  SCardSetCardTypeProviderNameW
#else /* !UNICODE */
#define SCardSetCardTypeProviderName  SCardSetCardTypeProviderNameA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardForgetCardTypeA(
    SCARDCONTEXT hContext,
    LPCSTR szCardName
);
extern WINSCARDAPI LONG WINAPI SCardForgetCardTypeW(
    SCARDCONTEXT hContext,
    LPCWSTR szCardName
);
#ifdef UNICODE
#define SCardForgetCardType  SCardForgetCardTypeW
#else /* !UNICODE */
#define SCardForgetCardType  SCardForgetCardTypeA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardFreeMemory(
    SCARDCONTEXT hContext,
    LPCVOID pvMem
);

#if (NTDDI_VERSION >= NTDDI_WINXP)
extern WINSCARDAPI HANDLE WINAPI SCardAccessStartedEvent(void);
extern WINSCARDAPI void WINAPI SCardReleaseStartedEvent(void);
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

typedef struct {
    LPCSTR szReader;
    LPVOID pvUserData;
    DWORD dwCurrentState;
    DWORD dwEventState;
    DWORD cbAtr;
    BYTE rgbAtr[36];
} SCARD_READERSTATEA, *PSCARD_READERSTATEA, *LPSCARD_READERSTATEA;
typedef struct {
    LPCWSTR szReader;
    LPVOID pvUserData;
    DWORD dwCurrentState;
    DWORD dwEventState;
    DWORD cbAtr;
    BYTE rgbAtr[36];
} SCARD_READERSTATEW, *PSCARD_READERSTATEW, *LPSCARD_READERSTATEW;
#ifdef UNICODE
typedef SCARD_READERSTATEW SCARD_READERSTATE;
typedef PSCARD_READERSTATEW PSCARD_READERSTATE;
typedef LPSCARD_READERSTATEW LPSCARD_READERSTATE;
#else /* !UNICODE */
typedef SCARD_READERSTATEA SCARD_READERSTATE;
typedef PSCARD_READERSTATEA PSCARD_READERSTATE;
typedef LPSCARD_READERSTATEA LPSCARD_READERSTATE;
#endif /* !UNICODE */

#define SCARD_READERSTATE_A SCARD_READERSTATEA
#define SCARD_READERSTATE_W SCARD_READERSTATEW
#define PSCARD_READERSTATE_A PSCARD_READERSTATEA
#define PSCARD_READERSTATE_W PSCARD_READERSTATEW
#define LPSCARD_READERSTATE_A LPSCARD_READERSTATEA
#define LPSCARD_READERSTATE_W LPSCARD_READERSTATEW

#define SCARD_STATE_UNAWARE     0x00000000
#define SCARD_STATE_IGNORE      0x00000001
#define SCARD_STATE_CHANGED     0x00000002
#define SCARD_STATE_UNKNOWN     0x00000004
#define SCARD_STATE_UNAVAILABLE 0x00000008
#define SCARD_STATE_EMPTY       0x00000010
#define SCARD_STATE_PRESENT     0x00000020
#define SCARD_STATE_ATRMATCH    0x00000040
#define SCARD_STATE_EXCLUSIVE   0x00000080
#define SCARD_STATE_INUSE       0x00000100
#define SCARD_STATE_MUTE        0x00000200
#define SCARD_STATE_UNPOWERED   0x00000400

extern WINSCARDAPI LONG WINAPI SCardLocateCardsA(
    SCARDCONTEXT hContext,
    LPCSTR mszCards,
    LPSCARD_READERSTATEA rgReaderStates,
    DWORD cReaders
);
extern WINSCARDAPI LONG WINAPI SCardLocateCardsW(
    SCARDCONTEXT hContext,
    LPCWSTR mszCards,
    LPSCARD_READERSTATEW rgReaderStates,
    DWORD cReaders
);
#ifdef UNICODE
#define SCardLocateCards  SCardLocateCardsW
#else /* !UNICODE */
#define SCardLocateCards  SCardLocateCardsA
#endif /* !UNICODE */

#if (NTDDI_VERSION >= NTDDI_WINXP)

typedef struct _SCARD_ATRMASK {
    DWORD cbAtr;
    BYTE rgbAtr[36];
    BYTE rgbMask[36];
} SCARD_ATRMASK, *PSCARD_ATRMASK, *LPSCARD_ATRMASK;

extern WINSCARDAPI LONG WINAPI SCardLocateCardsByATRA(
    SCARDCONTEXT hContext,
    LPSCARD_ATRMASK rgAtrMasks,
    DWORD cAtrs,
    LPSCARD_READERSTATEA rgReaderStates,
    DWORD cReaders
);
extern WINSCARDAPI LONG WINAPI SCardLocateCardsByATRW(
    SCARDCONTEXT hContext,
    LPSCARD_ATRMASK rgAtrMasks,
    DWORD cAtrs,
    LPSCARD_READERSTATEW rgReaderStates,
    DWORD cReaders
);
#ifdef UNICODE
#define SCardLocateCardsByATR  SCardLocateCardsByATRW
#else /* !UNICODE */
#define SCardLocateCardsByATR  SCardLocateCardsByATRA
#endif /* !UNICODE */
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

extern WINSCARDAPI LONG WINAPI SCardGetStatusChangeA(
    SCARDCONTEXT hContext,
    DWORD dwTimeout,
    LPSCARD_READERSTATEA rgReaderStates,
    DWORD cReaders
);
extern WINSCARDAPI LONG WINAPI SCardGetStatusChangeW(
    SCARDCONTEXT hContext,
    DWORD dwTimeout,
    LPSCARD_READERSTATEW rgReaderStates,
    DWORD cReaders
);
#ifdef UNICODE
#define SCardGetStatusChange  SCardGetStatusChangeW
#else /* !UNICODE */
#define SCardGetStatusChange  SCardGetStatusChangeA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardCancel(
    SCARDCONTEXT hContext
);

#define SCARD_SHARE_EXCLUSIVE 1
#define SCARD_SHARE_SHARED    2
#define SCARD_SHARE_DIRECT    3

#define SCARD_LEAVE_CARD      0
#define SCARD_RESET_CARD      1
#define SCARD_UNPOWER_CARD    2
#define SCARD_EJECT_CARD      3

extern WINSCARDAPI LONG WINAPI SCardConnectA(
    SCARDCONTEXT hContext,
    LPCSTR szReader,
    DWORD dwShareMode,
    DWORD dwPreferredProtocols,
    LPSCARDHANDLE phCard,
    LPDWORD pdwActiveProtocol
);
extern WINSCARDAPI LONG WINAPI SCardConnectW(
    SCARDCONTEXT hContext,
    LPCWSTR szReader,
    DWORD dwShareMode,
    DWORD dwPreferredProtocols,
    LPSCARDHANDLE phCard,
    LPDWORD pdwActiveProtocol
);
#ifdef UNICODE
#define SCardConnect  SCardConnectW
#else /* !UNICODE */
#define SCardConnect  SCardConnectA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardReconnect(
    SCARDHANDLE hCard,
    DWORD dwShareMode,
    DWORD dwPreferredProtocols,
    DWORD dwInitialization,
    LPDWORD pdwActiveProtocol
);

extern WINSCARDAPI LONG WINAPI SCardDisconnect(
    SCARDHANDLE hCard,
    DWORD dwDisposition
);

extern WINSCARDAPI LONG WINAPI SCardBeginTransaction(
    SCARDHANDLE hCard
);

extern WINSCARDAPI LONG WINAPI SCardEndTransaction(
    SCARDHANDLE hCard,
    DWORD dwDisposition
);

extern WINSCARDAPI LONG WINAPI SCardCancelTransaction(
    SCARDHANDLE hCard
);

extern WINSCARDAPI LONG WINAPI SCardState(
    SCARDHANDLE hCard,
    LPDWORD pdwState,
    LPDWORD pdwProtocol,
    LPBYTE pbAtr,
    LPDWORD pcbAtrLen
);

extern WINSCARDAPI LONG WINAPI SCardStatusA(
    SCARDHANDLE hCard,
    LPSTR mszReaderNames,
    LPDWORD pcchReaderLen,
    LPDWORD pdwState,
    LPDWORD pdwProtocol,
    LPBYTE pbAtr,
    LPDWORD pcbAtrLen
);
extern WINSCARDAPI LONG WINAPI SCardStatusW(
    SCARDHANDLE hCard,
    LPWSTR mszReaderNames,
    LPDWORD pcchReaderLen,
    LPDWORD pdwState,
    LPDWORD pdwProtocol,
    LPBYTE pbAtr,
    LPDWORD pcbAtrLen
);
#ifdef UNICODE
#define SCardStatus  SCardStatusW
#else /* !UNICODE */
#define SCardStatus  SCardStatusA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardTransmit(
    SCARDHANDLE hCard,
    LPCSCARD_IO_REQUEST pioSendPci,
    LPCBYTE pbSendBuffer,
    DWORD cbSendLength,
    LPSCARD_IO_REQUEST pioRecvPci,
    LPBYTE pbRecvBuffer,
    LPDWORD pcbRecvLength
);

#if (NTDDI_VERSION >= NTDDI_VISTA)
extern WINSCARDAPI LONG WINAPI SCardGetTransmitCount(
    SCARDHANDLE hCard,
    LPDWORD pcTransmitCount
);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

extern WINSCARDAPI LONG WINAPI SCardControl(
    SCARDHANDLE hCard,
    DWORD dwControlCode,
    LPCVOID lpInBuffer,
    DWORD cbInBufferSize,
    LPVOID lpOutBuffer,
    DWORD cbOutBufferSize,
    LPDWORD lpBytesReturned
);

extern WINSCARDAPI LONG WINAPI SCardGetAttrib(
    SCARDHANDLE hCard,
    DWORD dwAttrId,
    LPBYTE pbAttr,
    LPDWORD pcbAttrLen
);

#define SCardGetReaderCapabilities SCardGetAttrib

extern WINSCARDAPI LONG WINAPI SCardSetAttrib(
    SCARDHANDLE hCard,
    DWORD dwAttrId,
    LPCBYTE pbAttr,
    DWORD cbAttrLen
);

#define SCardSetReaderCapabilities SCardSetAttrib

#define SC_DLG_MINIMAL_UI   0x01
#define SC_DLG_NO_UI        0x02
#define SC_DLG_FORCE_UI     0x04

#define SCERR_NOCARDNAME    0x4000
#define SCERR_NOGUIDS       0x8000

typedef SCARDHANDLE (WINAPI *LPOCNCONNPROCA)(SCARDCONTEXT, LPSTR, LPSTR, PVOID);
typedef SCARDHANDLE (WINAPI *LPOCNCONNPROCW)(SCARDCONTEXT, LPWSTR, LPWSTR, PVOID);
#ifdef UNICODE
#define LPOCNCONNPROC  LPOCNCONNPROCW
#else /* !UNICODE */
#define LPOCNCONNPROC  LPOCNCONNPROCA
#endif /* !UNICODE */
typedef BOOL (WINAPI *LPOCNCHKPROC)(SCARDCONTEXT, SCARDHANDLE, PVOID);
typedef void (WINAPI *LPOCNDSCPROC)(SCARDCONTEXT, SCARDHANDLE, PVOID);

typedef struct {
    DWORD dwStructSize;
    LPSTR lpstrGroupNames;
    DWORD nMaxGroupNames;
    LPCGUID rgguidInterfaces;
    DWORD cguidInterfaces;
    LPSTR lpstrCardNames;
    DWORD nMaxCardNames;
    LPOCNCHKPROC lpfnCheck;
    LPOCNCONNPROCA lpfnConnect;
    LPOCNDSCPROC lpfnDisconnect;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
} OPENCARD_SEARCH_CRITERIAA, *POPENCARD_SEARCH_CRITERIAA, *LPOPENCARD_SEARCH_CRITERIAA;
typedef struct {
    DWORD dwStructSize;
    LPWSTR lpstrGroupNames;
    DWORD nMaxGroupNames;
    LPCGUID rgguidInterfaces;
    DWORD cguidInterfaces;
    LPWSTR lpstrCardNames;
    DWORD nMaxCardNames;
    LPOCNCHKPROC lpfnCheck;
    LPOCNCONNPROCW lpfnConnect;
    LPOCNDSCPROC lpfnDisconnect;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
} OPENCARD_SEARCH_CRITERIAW, *POPENCARD_SEARCH_CRITERIAW, *LPOPENCARD_SEARCH_CRITERIAW;
#ifdef UNICODE
typedef OPENCARD_SEARCH_CRITERIAW OPENCARD_SEARCH_CRITERIA;
typedef POPENCARD_SEARCH_CRITERIAW POPENCARD_SEARCH_CRITERIA;
typedef LPOPENCARD_SEARCH_CRITERIAW LPOPENCARD_SEARCH_CRITERIA;
#else /* !UNICODE */
typedef OPENCARD_SEARCH_CRITERIAA OPENCARD_SEARCH_CRITERIA;
typedef POPENCARD_SEARCH_CRITERIAA POPENCARD_SEARCH_CRITERIA;
typedef LPOPENCARD_SEARCH_CRITERIAA LPOPENCARD_SEARCH_CRITERIA;
#endif /* !UNICODE */

typedef struct {
    DWORD dwStructSize;
    SCARDCONTEXT hSCardContext;
    HWND hwndOwner;
    DWORD dwFlags;
    LPCSTR lpstrTitle;
    LPCSTR lpstrSearchDesc;
    HICON hIcon;
    POPENCARD_SEARCH_CRITERIAA pOpenCardSearchCriteria;
    LPOCNCONNPROCA lpfnConnect;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    LPSTR lpstrRdr;
    DWORD nMaxRdr;
    LPSTR lpstrCard;
    DWORD nMaxCard;
    DWORD dwActiveProtocol;
    SCARDHANDLE hCardHandle;
} OPENCARDNAME_EXA, *POPENCARDNAME_EXA, *LPOPENCARDNAME_EXA;
typedef struct {
    DWORD dwStructSize;
    SCARDCONTEXT hSCardContext;
    HWND hwndOwner;
    DWORD dwFlags;
    LPCWSTR lpstrTitle;
    LPCWSTR lpstrSearchDesc;
    HICON hIcon;
    POPENCARD_SEARCH_CRITERIAW pOpenCardSearchCriteria;
    LPOCNCONNPROCW lpfnConnect;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    LPWSTR lpstrRdr;
    DWORD nMaxRdr;
    LPWSTR lpstrCard;
    DWORD nMaxCard;
    DWORD dwActiveProtocol;
    SCARDHANDLE hCardHandle;
} OPENCARDNAME_EXW, *POPENCARDNAME_EXW, *LPOPENCARDNAME_EXW;
#ifdef UNICODE
typedef OPENCARDNAME_EXW OPENCARDNAME_EX;
typedef POPENCARDNAME_EXW POPENCARDNAME_EX;
typedef LPOPENCARDNAME_EXW LPOPENCARDNAME_EX;
#else /* !UNICODE */
typedef OPENCARDNAME_EXA OPENCARDNAME_EX;
typedef POPENCARDNAME_EXA POPENCARDNAME_EX;
typedef LPOPENCARDNAME_EXA LPOPENCARDNAME_EX;
#endif /* !UNICODE */

#define OPENCARDNAMEA_EX OPENCARDNAME_EXA
#define OPENCARDNAMEW_EX OPENCARDNAME_EXW
#define POPENCARDNAMEA_EX POPENCARDNAME_EXA
#define POPENCARDNAMEW_EX POPENCARDNAME_EXW
#define LPOPENCARDNAMEA_EX LPOPENCARDNAME_EXA
#define LPOPENCARDNAMEW_EX LPOPENCARDNAME_EXW

#define SCARD_READER_SEL_AUTH_PACKAGE   ((DWORD)-629)

typedef enum {
    RSR_MATCH_TYPE_READER_AND_CONTAINER = 1,
    RSR_MATCH_TYPE_SERIAL_NUMBER,
    RSR_MATCH_TYPE_ALL_CARDS
} READER_SEL_REQUEST_MATCH_TYPE;

typedef struct {
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    READER_SEL_REQUEST_MATCH_TYPE MatchType;
    union {
        struct {
            DWORD cbReaderNameOffset;
            DWORD cchReaderNameLength;
            DWORD cbContainerNameOffset;
            DWORD cchContainerNameLength;
            DWORD dwDesiredCardModuleVersion;
            DWORD dwCspFlags;
        } ReaderAndContainerParameter;
        struct {
            DWORD cbSerialNumberOffset;
            DWORD cbSerialNumberLength;
            DWORD dwDesiredCardModuleVersion;
        } SerialNumberParameter;
    } DUMMYUNIONNAME;
} READER_SEL_REQUEST, *PREADER_SEL_REQUEST;

typedef struct {
    DWORD cbReaderNameOffset;
    DWORD cchReaderNameLength;
    DWORD cbCardNameOffset;
    DWORD cchCardNameLength;
} READER_SEL_RESPONSE, *PREADER_SEL_RESPONSE;

extern WINSCARDAPI LONG WINAPI SCardUIDlgSelectCardA(LPOPENCARDNAMEA_EX);
extern WINSCARDAPI LONG WINAPI SCardUIDlgSelectCardW(LPOPENCARDNAMEW_EX);
#ifdef UNICODE
#define SCardUIDlgSelectCard  SCardUIDlgSelectCardW
#else /* !UNICODE */
#define SCardUIDlgSelectCard  SCardUIDlgSelectCardA
#endif /* !UNICODE */

typedef struct {
    DWORD dwStructSize;
    HWND hwndOwner;
    SCARDCONTEXT hSCardContext;
    LPSTR lpstrGroupNames;
    DWORD nMaxGroupNames;
    LPSTR lpstrCardNames;
    DWORD nMaxCardNames;
    LPCGUID rgguidInterfaces;
    DWORD cguidInterfaces;
    LPSTR lpstrRdr;
    DWORD nMaxRdr;
    LPSTR lpstrCard;
    DWORD nMaxCard;
    LPCSTR lpstrTitle;
    DWORD dwFlags;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    DWORD dwActiveProtocol;
    LPOCNCONNPROCA lpfnConnect;
    LPOCNCHKPROC lpfnCheck;
    LPOCNDSCPROC lpfnDisconnect;
    SCARDHANDLE hCardHandle;
} OPENCARDNAMEA, *POPENCARDNAMEA, *LPOPENCARDNAMEA;
typedef struct {
    DWORD dwStructSize;
    HWND hwndOwner;
    SCARDCONTEXT hSCardContext;
    LPWSTR lpstrGroupNames;
    DWORD nMaxGroupNames;
    LPWSTR lpstrCardNames;
    DWORD nMaxCardNames;
    LPCGUID rgguidInterfaces;
    DWORD cguidInterfaces;
    LPWSTR lpstrRdr;
    DWORD nMaxRdr;
    LPWSTR lpstrCard;
    DWORD nMaxCard;
    LPCWSTR lpstrTitle;
    DWORD dwFlags;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    DWORD dwActiveProtocol;
    LPOCNCONNPROCW lpfnConnect;
    LPOCNCHKPROC lpfnCheck;
    LPOCNDSCPROC lpfnDisconnect;
    SCARDHANDLE hCardHandle;
} OPENCARDNAMEW, *POPENCARDNAMEW, *LPOPENCARDNAMEW;
#ifdef UNICODE
typedef OPENCARDNAMEW OPENCARDNAME;
typedef POPENCARDNAMEW POPENCARDNAME;
typedef LPOPENCARDNAMEW LPOPENCARDNAME;
#else /* !UNICODE */
typedef OPENCARDNAMEA OPENCARDNAME;
typedef POPENCARDNAMEA POPENCARDNAME;
typedef LPOPENCARDNAMEA LPOPENCARDNAME;
#endif /* !UNICODE */

#define OPENCARDNAME_A OPENCARDNAMEA
#define OPENCARDNAME_W OPENCARDNAMEW
#define POPENCARDNAME_A POPENCARDNAMEA
#define POPENCARDNAME_W POPENCARDNAMEW
#define LPOPENCARDNAME_A LPOPENCARDNAMEA
#define LPOPENCARDNAME_W LPOPENCARDNAMEW

extern WINSCARDAPI LONG WINAPI GetOpenCardNameA(LPOPENCARDNAMEA);
extern WINSCARDAPI LONG WINAPI GetOpenCardNameW(LPOPENCARDNAMEW);
#ifdef UNICODE
#define GetOpenCardName  GetOpenCardNameW
#else /* !UNICODE */
#define GetOpenCardName  GetOpenCardNameA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardDlgExtendedError(void);

#if (NTDDI_VERSION >= NTDDI_VISTA)

extern WINSCARDAPI LONG WINAPI SCardReadCacheA(
    SCARDCONTEXT hContext,
    UUID *CardIdentifier,
    DWORD FreshnessCounter,
    LPSTR LookupName,
    PBYTE Data,
    DWORD *DataLen
);
extern WINSCARDAPI LONG WINAPI SCardReadCacheW(
    SCARDCONTEXT hContext,
    UUID *CardIdentifier,
    DWORD FreshnessCounter,
    LPWSTR LookupName,
    PBYTE Data,
    DWORD *DataLen
);
#ifdef UNICODE
#define SCardReadCache  SCardReadCacheW
#else /* !UNICODE */
#define SCardReadCache  SCardReadCacheA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardWriteCacheA(
    SCARDCONTEXT hContext,
    UUID *CardIdentifier,
    DWORD FreshnessCounter,
    LPSTR LookupName,
    PBYTE Data,
    DWORD DataLen
);
extern WINSCARDAPI LONG WINAPI SCardWriteCacheW(
    SCARDCONTEXT hContext,
    UUID *CardIdentifier,
    DWORD FreshnessCounter,
    LPWSTR LookupName,
    PBYTE Data,
    DWORD DataLen
);
#ifdef UNICODE
#define SCardWriteCache  SCardWriteCacheW
#else /* !UNICODE */
#define SCardWriteCache  SCardWriteCacheA
#endif /* !UNICODE */

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_WIN8)

extern WINSCARDAPI LONG WINAPI SCardGetReaderIconA(
    SCARDCONTEXT hContext,
    LPCSTR szReaderName,
    LPBYTE pbIcon,
    LPDWORD pcbIcon
);
extern WINSCARDAPI LONG WINAPI SCardGetReaderIconW(
    SCARDCONTEXT hContext,
    LPCWSTR szReaderName,
    LPBYTE pbIcon,
    LPDWORD pcbIcon
);
#ifdef UNICODE
#define SCardGetReaderIcon  SCardGetReaderIconW
#else /* !UNICODE */
#define SCardGetReaderIcon  SCardGetReaderIconA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardGetDeviceTypeIdA(
    SCARDCONTEXT hContext,
    LPCSTR szReaderName,
    LPDWORD pdwDeviceTypeId
);
extern WINSCARDAPI LONG WINAPI SCardGetDeviceTypeIdW(
    SCARDCONTEXT hContext,
    LPCWSTR szReaderName,
    LPDWORD pdwDeviceTypeId
);
#ifdef UNICODE
#define SCardGetDeviceTypeId  SCardGetDeviceTypeIdW
#else /* !UNICODE */
#define SCardGetDeviceTypeId  SCardGetDeviceTypeIdA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardGetReaderDeviceInstanceIdA(
    SCARDCONTEXT hContext,
    LPCSTR szReaderName,
    LPSTR szDeviceInstanceId,
    LPDWORD pcchDeviceInstanceId
);
extern WINSCARDAPI LONG WINAPI SCardGetReaderDeviceInstanceIdW(
    SCARDCONTEXT hContext,
    LPCWSTR szReaderName,
    LPWSTR szDeviceInstanceId,
    LPDWORD pcchDeviceInstanceId
);
#ifdef UNICODE
#define SCardGetReaderDeviceInstanceId  SCardGetReaderDeviceInstanceIdW
#else /* !UNICODE */
#define SCardGetReaderDeviceInstanceId  SCardGetReaderDeviceInstanceIdA
#endif /* !UNICODE */

extern WINSCARDAPI LONG WINAPI SCardListReadersWithDeviceInstanceIdA(
    SCARDCONTEXT hContext,
    LPCSTR szDeviceInstanceId,
    LPSTR mszReaders,
    LPDWORD pcchReaders
);
extern WINSCARDAPI LONG WINAPI SCardListReadersWithDeviceInstanceIdW(
    SCARDCONTEXT hContext,
    LPCWSTR szDeviceInstanceId,
    LPWSTR mszReaders,
    LPDWORD pcchReaders
);
#ifdef UNICODE
#define SCardListReadersWithDeviceInstanceId  SCardListReadersWithDeviceInstanceIdW
#else /* !UNICODE */
#define SCardListReadersWithDeviceInstanceId  SCardListReadersWithDeviceInstanceIdA
#endif /* !UNICODE */

#define SCARD_AUDIT_CHV_FAILURE 0x0
#define SCARD_AUDIT_CHV_SUCCESS 0x1

extern WINSCARDAPI LONG WINAPI SCardAudit(
    SCARDCONTEXT hContext,
    DWORD dwEvent
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* _WINSCARD_H */
