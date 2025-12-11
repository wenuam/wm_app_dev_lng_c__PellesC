#ifndef _WS2SPI_H
#define _WS2SPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* Winsock service provider definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef _WINSOCK2_H
#include <winsock2.h>
#endif /* !_WINSOCK2_H_ */

#ifndef _WIN64
#include <pshpack4.h>
#endif /* !_WIN64 */

#define WSPDESCRIPTION_LEN  255

#define WSS_OPERATION_IN_PROGRESS 0x00000103L

typedef struct WSPData {
    WORD wVersion;
    WORD wHighVersion;
    WCHAR szDescription[WSPDESCRIPTION_LEN + 1];
} WSPDATA, *LPWSPDATA;

typedef struct _WSATHREADID {
    HANDLE ThreadHandle;
    DWORD_PTR Reserved;
} WSATHREADID, *LPWSATHREADID;

#define WSPAPI WSAAPI

typedef BOOL (CALLBACK *LPBLOCKINGCALLBACK)(
    DWORD_PTR dwContext
);

typedef void (CALLBACK *LPWSAUSERAPC)(
    DWORD_PTR dwContext
);

typedef SOCKET (WSPAPI *LPWSPACCEPT)(
    SOCKET s,
    struct sockaddr *addr,
    LPINT addrlen,
    LPCONDITIONPROC lpfnCondition,
    DWORD_PTR dwCallbackData,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPADDRESSTOSTRING)(
    LPSOCKADDR lpsaAddress,
    DWORD dwAddressLength,
    LPWSAPROTOCOL_INFOW lpProtocolInfo,
    LPWSTR lpszAddressString,
    LPDWORD lpdwAddressStringLength,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPASYNCSELECT)(
    SOCKET s,
    HWND hWnd,
    unsigned int wMsg,
    long lEvent,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPBIND)(
    SOCKET s,
    const struct sockaddr *name,
    int namelen,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPCANCELBLOCKINGCALL)(
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPCLEANUP)(
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPCLOSESOCKET)(
    SOCKET s,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPCONNECT)(
    SOCKET s,
    const struct sockaddr *name,
    int namelen,
    LPWSABUF lpCallerData,
    LPWSABUF lpCalleeData,
    LPQOS lpSQOS,
    LPQOS lpGQOS,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPDUPLICATESOCKET)(
    SOCKET s,
    DWORD dwProcessId,
    LPWSAPROTOCOL_INFOW lpProtocolInfo,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPENUMNETWORKEVENTS)(
    SOCKET s,
    WSAEVENT hEventObject,
    LPWSANETWORKEVENTS lpNetworkEvents,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPEVENTSELECT)(
    SOCKET s,
    WSAEVENT hEventObject,
    long lNetworkEvents,
    LPINT lpErrno
);

typedef BOOL (WSPAPI *LPWSPGETOVERLAPPEDRESULT)(
    SOCKET s,
    LPWSAOVERLAPPED lpOverlapped,
    LPDWORD lpcbTransfer,
    BOOL fWait,
    LPDWORD lpdwFlags,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPGETPEERNAME)(
    SOCKET s,
    struct sockaddr *name,
    LPINT namelen,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPGETSOCKNAME)(
    SOCKET s,
    struct sockaddr *name,
    LPINT namelen,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPGETSOCKOPT)(
    SOCKET s,
    int level,
    int optname,
    char *optval,
    LPINT optlen,
    LPINT lpErrno
);

typedef BOOL (WSPAPI *LPWSPGETQOSBYNAME)(
    SOCKET s,
    LPWSABUF lpQOSName,
    LPQOS lpQOS,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPIOCTL)(
    SOCKET s,
    DWORD dwIoControlCode,
    LPVOID lpvInBuffer,
    DWORD cbInBuffer,
    LPVOID lpvOutBuffer,
    DWORD cbOutBuffer,
    LPDWORD lpcbBytesReturned,
    LPWSAOVERLAPPED lpOverlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);

typedef SOCKET (WSPAPI *LPWSPJOINLEAF)(
    SOCKET s,
    const struct sockaddr *name,
    int namelen,
    LPWSABUF lpCallerData,
    LPWSABUF lpCalleeData,
    LPQOS lpSQOS,
    LPQOS lpGQOS,
    DWORD dwFlags,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPLISTEN)(
    SOCKET s,
    int backlog,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPRECV)(
    SOCKET s,
    LPWSABUF lpBuffers,
    DWORD dwBufferCount,
    LPDWORD lpNumberOfBytesRecvd,
    LPDWORD lpFlags,
    LPWSAOVERLAPPED lpOverlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPRECVDISCONNECT)(
    SOCKET s,
    LPWSABUF lpInboundDisconnectData,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPRECVFROM)(
    SOCKET s,
    LPWSABUF lpBuffers,
    DWORD dwBufferCount,
    LPDWORD lpNumberOfBytesRecvd,
    LPDWORD lpFlags,
    struct sockaddr *lpFrom,
    LPINT lpFromlen,
    LPWSAOVERLAPPED lpOverlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPSELECT)(
    int nfds,
    fd_set *readfds,
    fd_set *writefds,
    fd_set *exceptfds,
    const struct timeval *timeout,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPSEND)(
    SOCKET s,
    LPWSABUF lpBuffers,
    DWORD dwBufferCount,
    LPDWORD lpNumberOfBytesSent,
    DWORD dwFlags,
    LPWSAOVERLAPPED lpOverlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPSENDDISCONNECT)(
    SOCKET s,
    LPWSABUF lpOutboundDisconnectData,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPSENDTO)(
    SOCKET s,
    LPWSABUF lpBuffers,
    DWORD dwBufferCount,
    LPDWORD lpNumberOfBytesSent,
    DWORD dwFlags,
    const struct sockaddr *lpTo,
    int iTolen,
    LPWSAOVERLAPPED lpOverlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPSETSOCKOPT)(
    SOCKET s,
    int level,
    int optname,
    const char *optval,
    int optlen,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPSHUTDOWN)(
    SOCKET s,
    int how,
    LPINT lpErrno
);

typedef SOCKET (WSPAPI *LPWSPSOCKET)(
    int af,
    int type,
    int protocol,
    LPWSAPROTOCOL_INFOW lpProtocolInfo,
    GROUP g,
    DWORD dwFlags,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSPSTRINGTOADDRESS)(
    LPWSTR AddressString,
    INT AddressFamily,
    LPWSAPROTOCOL_INFOW lpProtocolInfo,
    LPSOCKADDR lpAddress,
    LPINT lpAddressLength,
    LPINT lpErrno
);

typedef struct _WSPPROC_TABLE {
    LPWSPACCEPT lpWSPAccept;
    LPWSPADDRESSTOSTRING lpWSPAddressToString;
    LPWSPASYNCSELECT lpWSPAsyncSelect;
    LPWSPBIND lpWSPBind;
    LPWSPCANCELBLOCKINGCALL lpWSPCancelBlockingCall;
    LPWSPCLEANUP lpWSPCleanup;
    LPWSPCLOSESOCKET lpWSPCloseSocket;
    LPWSPCONNECT lpWSPConnect;
    LPWSPDUPLICATESOCKET lpWSPDuplicateSocket;
    LPWSPENUMNETWORKEVENTS lpWSPEnumNetworkEvents;
    LPWSPEVENTSELECT lpWSPEventSelect;
    LPWSPGETOVERLAPPEDRESULT lpWSPGetOverlappedResult;
    LPWSPGETPEERNAME lpWSPGetPeerName;
    LPWSPGETSOCKNAME lpWSPGetSockName;
    LPWSPGETSOCKOPT lpWSPGetSockOpt;
    LPWSPGETQOSBYNAME lpWSPGetQOSByName;
    LPWSPIOCTL lpWSPIoctl;
    LPWSPJOINLEAF lpWSPJoinLeaf;
    LPWSPLISTEN lpWSPListen;
    LPWSPRECV lpWSPRecv;
    LPWSPRECVDISCONNECT lpWSPRecvDisconnect;
    LPWSPRECVFROM lpWSPRecvFrom;
    LPWSPSELECT lpWSPSelect;
    LPWSPSEND lpWSPSend;
    LPWSPSENDDISCONNECT lpWSPSendDisconnect;
    LPWSPSENDTO lpWSPSendTo;
    LPWSPSETSOCKOPT lpWSPSetSockOpt;
    LPWSPSHUTDOWN lpWSPShutdown;
    LPWSPSOCKET lpWSPSocket;
    LPWSPSTRINGTOADDRESS lpWSPStringToAddress;
} WSPPROC_TABLE, *LPWSPPROC_TABLE;

typedef BOOL (WSPAPI *LPWPUCLOSEEVENT)(
    WSAEVENT hEvent,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWPUCLOSESOCKETHANDLE)(
    SOCKET s,
    LPINT lpErrno
);

typedef WSAEVENT (WSPAPI *LPWPUCREATEEVENT)(
    LPINT lpErrno
);

typedef SOCKET (WSPAPI *LPWPUCREATESOCKETHANDLE)(
    DWORD dwCatalogEntryId,
    DWORD_PTR dwContext,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWPUFDISSET)(
    SOCKET s,
    fd_set *fdset
);

typedef int (WSPAPI *LPWPUGETPROVIDERPATH)(
    LPGUID lpProviderId,
    WCHAR *lpszProviderDllPath,
    LPINT lpProviderDllPathLen,
    LPINT lpErrno
);

typedef SOCKET (WSPAPI *LPWPUMODIFYIFSHANDLE)(
    DWORD dwCatalogEntryId,
    SOCKET ProposedHandle,
    LPINT lpErrno
);

typedef BOOL (WSPAPI *LPWPUPOSTMESSAGE)(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam
);

typedef int (WSPAPI *LPWPUQUERYBLOCKINGCALLBACK)(
    DWORD dwCatalogEntryId,
    LPBLOCKINGCALLBACK *lplpfnCallback,
    PDWORD_PTR lpdwContext,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWPUQUERYSOCKETHANDLECONTEXT)(
    SOCKET s,
    PDWORD_PTR lpContext,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWPUQUEUEAPC)(
    LPWSATHREADID lpThreadId,
    LPWSAUSERAPC lpfnUserApc,
    DWORD_PTR dwContext,
    LPINT lpErrno
);

typedef BOOL (WSPAPI *LPWPURESETEVENT)(
    WSAEVENT hEvent,
    LPINT lpErrno
);

typedef BOOL (WSPAPI *LPWPUSETEVENT)(
    WSAEVENT hEvent,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWPUOPENCURRENTTHREAD)(
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWPUCLOSETHREAD)(
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWPUCOMPLETEOVERLAPPEDREQUEST)(
    SOCKET s,
    LPWSAOVERLAPPED lpOverlapped,
    DWORD dwError,
    DWORD cbTransferred,
    LPINT lpErrno
);

typedef struct _WSPUPCALLTABLE {
    LPWPUCLOSEEVENT lpWPUCloseEvent;
    LPWPUCLOSESOCKETHANDLE lpWPUCloseSocketHandle;
    LPWPUCREATEEVENT lpWPUCreateEvent;
    LPWPUCREATESOCKETHANDLE lpWPUCreateSocketHandle;
    LPWPUFDISSET lpWPUFDIsSet;
    LPWPUGETPROVIDERPATH lpWPUGetProviderPath;
    LPWPUMODIFYIFSHANDLE lpWPUModifyIFSHandle;
    LPWPUPOSTMESSAGE lpWPUPostMessage;
    LPWPUQUERYBLOCKINGCALLBACK lpWPUQueryBlockingCallback;
    LPWPUQUERYSOCKETHANDLECONTEXT lpWPUQuerySocketHandleContext;
    LPWPUQUEUEAPC lpWPUQueueApc;
    LPWPURESETEVENT lpWPUResetEvent;
    LPWPUSETEVENT lpWPUSetEvent;
    LPWPUOPENCURRENTTHREAD lpWPUOpenCurrentThread;
    LPWPUCLOSETHREAD lpWPUCloseThread;
} WSPUPCALLTABLE, *LPWSPUPCALLTABLE;

int WSPAPI WSPStartup(
    WORD wVersionRequested,
    LPWSPDATA lpWSPData,
    LPWSAPROTOCOL_INFOW lpProtocolInfo,
    WSPUPCALLTABLE UpcallTable,
    LPWSPPROC_TABLE lpProcTable
);

typedef int (WSPAPI *LPWSPSTARTUP)(
    WORD wVersionRequested,
    LPWSPDATA lpWSPData,
    LPWSAPROTOCOL_INFOW lpProtocolInfo,
    WSPUPCALLTABLE UpcallTable,
    LPWSPPROC_TABLE lpProcTable
);

int WSPAPI WSCEnumProtocols(
    LPINT lpiProtocols,
    LPWSAPROTOCOL_INFOW lpProtocolBuffer,
    LPDWORD lpdwBufferLength,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSCENUMPROTOCOLS)(
    LPINT lpiProtocols,
    LPWSAPROTOCOL_INFOW lpProtocolBuffer,
    LPDWORD lpdwBufferLength,
    LPINT lpErrno
);

#if (defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCEnumProtocols32(
    LPINT lpiProtocols,
    LPWSAPROTOCOL_INFOW lpProtocolBuffer,
    LPDWORD lpdwBufferLength,
    LPINT lpErrno
);
#endif /* (defined(_WIN64) && (_WIN32_WINNT >= 0x0501)) */

int WSPAPI WSCDeinstallProvider(
    LPGUID lpProviderId,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSCDEINSTALLPROVIDER)(
    LPGUID lpProviderId,
    LPINT lpErrno
);

#if (defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCDeinstallProvider32(
    LPGUID lpProviderId,
    LPINT lpErrno
);
#endif /* (defined(_WIN64) && (_WIN32_WINNT >= 0x0501)) */

int WSPAPI WSCInstallProvider(
    LPGUID lpProviderId,
    const WCHAR *lpszProviderDllPath,
    const LPWSAPROTOCOL_INFOW lpProtocolInfoList,
    DWORD dwNumberOfEntries,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSCINSTALLPROVIDER)(
    LPGUID lpProviderId,
    const WCHAR *lpszProviderDllPath,
    const LPWSAPROTOCOL_INFOW lpProtocolInfoList,
    DWORD dwNumberOfEntries,
    LPINT lpErrno
);

#if (defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCInstallProvider64_32(
    LPGUID lpProviderId,
    const WCHAR *lpszProviderDllPath,
    const LPWSAPROTOCOL_INFOW lpProtocolInfoList,
    DWORD dwNumberOfEntries,
    LPINT lpErrno
);
#endif /* (defined(_WIN64) && (_WIN32_WINNT >= 0x0501)) */

int WSPAPI WSCGetProviderPath(
    LPGUID lpProviderId,
    WCHAR *lpszProviderDllPath,
    LPINT lpProviderDllPathLen,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSCGETPROVIDERPATH)(
    LPGUID lpProviderId,
    WCHAR *lpszProviderDllPath,
    LPINT lpProviderDllPathLen,
    LPINT lpErrno
);

#if (_WIN32_WINNT >= 0x0501)

#ifdef _WIN64
int WSPAPI WSCGetProviderPath32(
    LPGUID lpProviderId,
    WCHAR *lpszProviderDllPath,
    LPINT lpProviderDllPathLen,
    LPINT lpErrno
);
#endif /* _WIN64 */

int WSPAPI WSCUpdateProvider(
    LPGUID lpProviderId,
    const WCHAR *lpszProviderDllPath,
    const LPWSAPROTOCOL_INFOW lpProtocolInfoList,
    DWORD dwNumberOfEntries,
    LPINT lpErrno
);

typedef int (WSPAPI *LPWSCUPDATEPROVIDER)(
    LPGUID lpProviderId,
    const WCHAR *lpszProviderDllPath,
    const LPWSAPROTOCOL_INFOW lpProtocolInfoList,
    DWORD dwNumberOfEntries,
    LPINT lpErrno
);

#ifdef _WIN64
int WSPAPI WSCUpdateProvider32(
    LPGUID lpProviderId,
    const WCHAR *lpszProviderDllPath,
    const LPWSAPROTOCOL_INFOW lpProtocolInfoList,
    DWORD dwNumberOfEntries,
    LPINT lpErrno
);
#endif /* _WIN64 */

#endif /* (_WIN32_WINNT >= 0x0501) */

#if (_WIN32_WINNT < 0x0600)

int WSPAPI WSCInstallQOSTemplate(
    const LPGUID Guid,
    LPWSABUF QosName,
    LPQOS Qos
);

typedef int (WSPAPI *LPWSCINSTALLQOSTEMPLATE)(
    const LPGUID Guid,
    LPWSABUF QosName,
    LPQOS Qos
);

int WSPAPI WSCRemoveQOSTemplate(
    const LPGUID Guid,
    LPWSABUF QosName
);

typedef int (WSPAPI *LPWSCREMOVEQOSTEMPLATE)(
    const LPGUID Guid,
    LPWSABUF QosName
);

#endif /* (_WIN32_WINNT < 0x0600) */

#if (_WIN32_WINNT >= 0x0600)

#define LSP_SYSTEM             0x80000000
#define LSP_INSPECTOR          0x00000001
#define LSP_REDIRECTOR         0x00000002
#define LSP_PROXY              0x00000004
#define LSP_FIREWALL           0x00000008
#define LSP_INBOUND_MODIFY     0x00000010
#define LSP_OUTBOUND_MODIFY    0x00000020
#define LSP_CRYPTO_COMPRESS    0x00000040
#define LSP_LOCAL_CACHE        0x00000080

typedef enum _WSC_PROVIDER_INFO_TYPE {
    ProviderInfoLspCategories,
    ProviderInfoAudit,
} WSC_PROVIDER_INFO_TYPE ;

typedef struct _WSC_PROVIDER_AUDIT_INFO {
    DWORD RecordSize;
    PVOID Reserved;
} WSC_PROVIDER_AUDIT_INFO;

int WSPAPI WSCSetProviderInfo(
    LPGUID lpProviderId,
    WSC_PROVIDER_INFO_TYPE InfoType,
    PBYTE Info,
    size_t InfoSize,
    DWORD Flags,
    LPINT lpErrno
);

int WSPAPI WSCGetProviderInfo(
    LPGUID lpProviderId,
    WSC_PROVIDER_INFO_TYPE InfoType,
    PBYTE Info,
    size_t *InfoSize,
    DWORD Flags,
    LPINT lpErrno
);

#ifdef _WIN64

int WSPAPI WSCSetProviderInfo32(
    LPGUID lpProviderId,
    WSC_PROVIDER_INFO_TYPE InfoType,
    PBYTE Info,
    size_t InfoSize,
    DWORD Flags,
    LPINT lpErrno
);

int WSPAPI WSCGetProviderInfo32(
    LPGUID lpProviderId,
    WSC_PROVIDER_INFO_TYPE InfoType,
    PBYTE Info,
    size_t *InfoSize,
    DWORD Flags,
    LPINT lpErrno
);

#endif /* _WIN64 */

int WSPAPI WSCSetApplicationCategory(
    LPCWSTR Path,
    DWORD PathLength,
    LPCWSTR Extra,
    DWORD ExtraLength,
    DWORD PermittedLspCategories,
    DWORD *pPrevPermLspCat,
    LPINT lpErrno
);

int WSPAPI WSCGetApplicationCategory(
    LPCWSTR Path,
    DWORD PathLength,
    LPCWSTR Extra,
    DWORD ExtraLength,
    DWORD *pPermittedLspCategories,
    LPINT lpErrno
);

#endif /* (_WIN32_WINNT >= 0x0600) */

BOOL WSPAPI WPUCloseEvent(
    WSAEVENT hEvent,
    LPINT lpErrno
);

int WSPAPI WPUCloseSocketHandle(
    SOCKET s,
    LPINT lpErrno
);

WSAEVENT WSPAPI WPUCreateEvent(
    LPINT lpErrno
);

SOCKET WSPAPI WPUCreateSocketHandle(
    DWORD dwCatalogEntryId,
    DWORD_PTR dwContext,
    LPINT lpErrno
);

int WSPAPI WPUFDIsSet(
    SOCKET s,
    fd_set *fdset
);

int WSPAPI WPUGetProviderPath(
    LPGUID lpProviderId,
    WCHAR *lpszProviderDllPath,
    LPINT lpProviderDllPathLen,
    LPINT lpErrno
);

SOCKET WSPAPI WPUModifyIFSHandle(
    DWORD dwCatalogEntryId,
    SOCKET ProposedHandle,
    LPINT lpErrno
);

BOOL WSPAPI WPUPostMessage(
    HWND hWnd,
    UINT Msg,
    WPARAM wParam,
    LPARAM lParam
);

int WSPAPI WPUQueryBlockingCallback(
    DWORD dwCatalogEntryId,
    LPBLOCKINGCALLBACK *lplpfnCallback,
    PDWORD_PTR lpdwContext,
    LPINT lpErrno
);

int WSPAPI WPUQuerySocketHandleContext(
    SOCKET s,
    PDWORD_PTR lpContext,
    LPINT lpErrno
);

int WSPAPI WPUQueueApc(
    LPWSATHREADID lpThreadId,
    LPWSAUSERAPC lpfnUserApc,
    DWORD_PTR dwContext,
    LPINT lpErrno
);

BOOL WSPAPI WPUResetEvent(
    WSAEVENT hEvent,
    LPINT lpErrno
);

BOOL WSPAPI WPUSetEvent(
    WSAEVENT hEvent,
    LPINT lpErrno
);

int WSPAPI WPUCompleteOverlappedRequest(
    SOCKET s,
    LPWSAOVERLAPPED lpOverlapped,
    DWORD dwError,
    DWORD cbTransferred,
    LPINT lpErrno
);

#if (_WIN32_WINNT >= 0x0501)
int WSPAPI WPUOpenCurrentThread(
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);

int WSPAPI WPUCloseThread(
    LPWSATHREADID lpThreadId,
    LPINT lpErrno
);
#endif /* (_WIN32_WINNT >= 0x0501) */

#if (_WIN32_WINNT >= 0x0501)

#define WSCEnumNameSpaceProviders  WSAEnumNameSpaceProvidersW
#define LPFN_WSCENUMNAMESPACEPROVIDERS  LPFN_WSAENUMNAMESPACEPROVIDERSW

#ifdef _WIN64
int WSAAPI WSCEnumNameSpaceProviders32(
    LPDWORD lpdwBufferLength,
    LPWSANAMESPACE_INFOW lpnspBuffer
);
#endif /* _WIN64 */

#endif /* (_WIN32_WINNT >= 0x0501) */

#if (_WIN32_WINNT >= 0x0600)

#define WSCEnumNameSpaceProvidersEx  WSAEnumNameSpaceProvidersExW
#define LPFN_WSCENUMNAMESPACEPROVIDERSEX  LPFN_WSAENUMNAMESPACEPROVIDERSEXW

#ifdef _WIN64
int WSAAPI WSCEnumNameSpaceProvidersEx32(
    LPDWORD lpdwBufferLength,
    LPWSANAMESPACE_INFOEXW lpnspBuffer
);
#endif /* _WIN64 */

#endif /* (_WIN32_WINNT >= 0x0600) */

int WSPAPI WSCInstallNameSpace(
    LPWSTR lpszIdentifier,
    LPWSTR lpszPathName,
    DWORD dwNameSpace,
    DWORD dwVersion,
    LPGUID lpProviderId
);

typedef int (WSPAPI *LPWSCINSTALLNAMESPACE)(
    LPWSTR lpszIdentifier,
    LPWSTR lpszPathName,
    DWORD dwNameSpace,
    DWORD dwVersion,
    LPGUID lpProviderId
);

#if (defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCInstallNameSpace32(
    LPWSTR lpszIdentifier,
    LPWSTR lpszPathName,
    DWORD dwNameSpace,
    DWORD dwVersion,
    LPGUID lpProviderId
);
#endif /* (defined(_WIN64) && (_WIN32_WINNT >= 0x0501)) */

int WSPAPI WSCUnInstallNameSpace(
    LPGUID lpProviderId
);

typedef int (WSPAPI *LPWSCUNINSTALLNAMESPACE)(
    LPGUID lpProviderId
);

#if (_WIN32_WINNT >= 0x0600)
int WSPAPI WSCInstallNameSpaceEx(
    LPWSTR lpszIdentifier,
    LPWSTR lpszPathName,
    DWORD dwNameSpace,
    DWORD dwVersion,
    LPGUID lpProviderId,
    LPBLOB lpProviderSpecific
);
#endif /* (_WIN32_WINNT >= 0x0600) */

#if (defined(_WIN64) && (_WIN32_WINNT >= 0x0600))
int WSPAPI WSCInstallNameSpaceEx32(
    LPWSTR lpszIdentifier,
    LPWSTR lpszPathName,
    DWORD dwNameSpace,
    DWORD dwVersion,
    LPGUID lpProviderId,
    LPBLOB lpProviderSpecific
);
#endif /* (defined(_WIN64) && (_WIN32_WINNT >= 0x0600)) */

#if (defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCUnInstallNameSpace32(
    LPGUID lpProviderId
);
#endif /* (defined(_WIN64) && (_WIN32_WINNT >= 0x0501)) */

int WSPAPI WSCEnableNSProvider(
    LPGUID lpProviderId,
    BOOL fEnable
);

typedef int (WSPAPI *LPWSCENABLENSPROVIDER)(
    LPGUID lpProviderId,
    BOOL fEnable
);

#if (defined(_WIN64) && (_WIN32_WINNT >= 0x0501))
int WSPAPI WSCEnableNSProvider32(
    LPGUID lpProviderId,
    BOOL fEnable
);
#endif /* (defined(_WIN64) && (_WIN32_WINNT >= 0x0501)) */

#if (_WIN32_WINNT >= 0x0600)

#ifdef _WIN64
int WSPAPI WSCInstallProviderAndChains64_32(
#else /* !_WIN64 */
int WSPAPI WSCInstallProviderAndChains(
#endif /* !_WIN64 */
    LPGUID lpProviderId,
    const LPWSTR lpszProviderDllPath,
#ifdef _WIN64
    const LPWSTR lpszProviderDllPath32,
#endif /* _WIN64 */
    const LPWSTR lpszLspName,
    DWORD dwServiceFlags,
    LPWSAPROTOCOL_INFOW lpProtocolInfoList,
    DWORD dwNumberOfEntries,
    LPDWORD lpdwCatalogEntryId,
    LPINT lpErrno
);
#endif /* (_WIN32_WINNT >= 0x0600) */

typedef int (WSAAPI *LPNSPCLEANUP)(
    LPGUID lpProviderId
);

typedef int (WSAAPI *LPNSPLOOKUPSERVICEBEGIN)(
    LPGUID lpProviderId,
    LPWSAQUERYSETW lpqsRestrictions,
    LPWSASERVICECLASSINFOW lpServiceClassInfo,
    DWORD dwControlFlags,
    LPHANDLE lphLookup
);

typedef int (WSAAPI *LPNSPLOOKUPSERVICENEXT)(
    HANDLE hLookup,
    DWORD dwControlFlags,
    LPDWORD lpdwBufferLength,
    LPWSAQUERYSETW lpqsResults
);

#if (_WIN32_WINNT >= 0x0501)
typedef int (WSAAPI *LPNSPIOCTL)(
    HANDLE hLookup,
    DWORD dwControlCode,
    LPVOID lpvInBuffer,
    DWORD cbInBuffer,
    LPVOID lpvOutBuffer,
    DWORD cbOutBuffer,
    LPDWORD lpcbBytesReturned,
    LPWSACOMPLETION lpCompletion,
    LPWSATHREADID lpThreadId
);
#endif /* (_WIN32_WINNT >= 0x0501) */

typedef int (WSAAPI *LPNSPLOOKUPSERVICEEND)(
    HANDLE hLookup
);

typedef int (WSAAPI *LPNSPSETSERVICE)(
    LPGUID lpProviderId,
    LPWSASERVICECLASSINFOW lpServiceClassInfo,
    LPWSAQUERYSETW lpqsRegInfo,
    WSAESETSERVICEOP essOperation,
    DWORD dwControlFlags
);

typedef int (WSAAPI *LPNSPINSTALLSERVICECLASS)(
    LPGUID lpProviderId,
    LPWSASERVICECLASSINFOW lpServiceClassInfo
);

typedef int (WSAAPI *LPNSPREMOVESERVICECLASS)(
    LPGUID lpProviderId,
    LPGUID lpServiceClassId
);

typedef int (WSAAPI *LPNSPGETSERVICECLASSINFO)(
    LPGUID lpProviderId,
    LPDWORD lpdwBufSize,
    LPWSASERVICECLASSINFOW lpServiceClassInfo
);

typedef struct _NSP_ROUTINE {
    DWORD cbSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    LPNSPCLEANUP NSPCleanup;
    LPNSPLOOKUPSERVICEBEGIN NSPLookupServiceBegin;
    LPNSPLOOKUPSERVICENEXT NSPLookupServiceNext;
    LPNSPLOOKUPSERVICEEND NSPLookupServiceEnd;
    LPNSPSETSERVICE NSPSetService;
    LPNSPINSTALLSERVICECLASS NSPInstallServiceClass;
    LPNSPREMOVESERVICECLASS NSPRemoveServiceClass;
    LPNSPGETSERVICECLASSINFO NSPGetServiceClassInfo;
#if (_WIN32_WINNT >= 0x0501)
    LPNSPIOCTL NSPIoctl;
#endif /* (_WIN32_WINNT >= 0x0501) */
} NSP_ROUTINE, *LPNSP_ROUTINE;

int WSAAPI NSPStartup(
    LPGUID lpProviderId,
    LPNSP_ROUTINE lpnspRoutines
);

typedef INT (WSAAPI *LPNSPSTARTUP)(
    LPGUID lpProviderId,
    LPNSP_ROUTINE lpnspRoutines
);

typedef int (WSAAPI *LPNSPV2STARTUP)(
    LPGUID lpProviderId,
    LPVOID *ppvClientSessionArg
);

typedef int (WSAAPI *LPNSPV2CLEANUP)(
    LPGUID lpProviderId,
    LPVOID pvClientSessionArg
);

typedef int (WSAAPI *LPNSPV2LOOKUPSERVICEBEGIN)(
    LPGUID lpProviderId,
    LPWSAQUERYSET2W lpqsRestrictions,
    DWORD dwControlFlags,
    LPVOID lpvClientSessionArg,
    LPHANDLE lphLookup
);

typedef void (WSAAPI *LPNSPV2LOOKUPSERVICENEXTEX)(
    HANDLE hAsyncCall,
    HANDLE hLookup,
    DWORD dwControlFlags,
    LPDWORD lpdwBufferLength,
    LPWSAQUERYSET2W lpqsResults
);

typedef int (WSAAPI *LPNSPV2LOOKUPSERVICEEND)(
    HANDLE hLookup
);

typedef void (WSAAPI *LPNSPV2SETSERVICEEX)(
    HANDLE hAsyncCall,
    LPGUID lpProviderId,
    LPWSAQUERYSET2W lpqsRegInfo,
    WSAESETSERVICEOP essOperation,
    DWORD dwControlFlags,
    LPVOID lpvClientSessionArg
);

typedef void (WSAAPI *LPNSPV2CLIENTSESSIONRUNDOWN)(
    LPGUID lpProviderId,
    LPVOID pvClientSessionArg
);

typedef struct _NSPV2_ROUTINE {
    DWORD cbSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    LPNSPV2STARTUP NSPv2Startup;
    LPNSPV2CLEANUP NSPv2Cleanup;
    LPNSPV2LOOKUPSERVICEBEGIN NSPv2LookupServiceBegin;
    LPNSPV2LOOKUPSERVICENEXTEX NSPv2LookupServiceNextEx;
    LPNSPV2LOOKUPSERVICEEND NSPv2LookupServiceEnd;
    LPNSPV2SETSERVICEEX NSPv2SetServiceEx;
    LPNSPV2CLIENTSESSIONRUNDOWN NSPv2ClientSessionRundown;
} NSPV2_ROUTINE, *PNSPV2_ROUTINE, *LPNSPV2_ROUTINE;
typedef const NSPV2_ROUTINE *PCNSPV2_ROUTINE, *LPCNSPV2_ROUTINE;

#if (_WIN32_WINNT >= 0x0600)

int WSAAPI WSAAdvertiseProvider(
    const GUID *puuidProviderId,
    const LPCNSPV2_ROUTINE pNSPv2Routine
);

int WSAAPI WSAUnadvertiseProvider(
    const GUID *puuidProviderId
);

int WSAAPI WSAProviderCompleteAsyncCall(
    HANDLE hAsyncCall,
    INT iRetCode
);

#endif /* (_WIN32_WINNT >= 0x0600) */

#ifndef _WIN64
#include <poppack.h>
#endif /* !_WIN64 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _WS2SPI_H */
