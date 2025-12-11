#ifndef _RASEAPIF_H
#define _RASEAPIF_H

#if __POCC__ >= 500
#pragma once
#endif

/* Remote Access Service PPP engine and third party authentication module interface definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= 0x0500)

#define RAS_EAP_REGISTRY_LOCATION   \
    TEXT("System\\CurrentControlSet\\Services\\Rasman\\PPP\\EAP")

#define RAS_EAP_VALUENAME_PATH                  TEXT("Path")
#define RAS_EAP_VALUENAME_CONFIGUI              TEXT("ConfigUIPath")
#define RAS_EAP_VALUENAME_INTERACTIVEUI         TEXT("InteractiveUIPath")
#define RAS_EAP_VALUENAME_IDENTITY              TEXT("IdentityPath")
#define RAS_EAP_VALUENAME_FRIENDLY_NAME         TEXT("FriendlyName")
#define RAS_EAP_VALUENAME_DEFAULT_DATA          TEXT("ConfigData")
#define RAS_EAP_VALUENAME_REQUIRE_CONFIGUI      TEXT("RequireConfigUI")
#define RAS_EAP_VALUENAME_ENCRYPTION            TEXT("MPPEEncryptionSupported")
#define RAS_EAP_VALUENAME_INVOKE_NAMEDLG        TEXT("InvokeUsernameDialog")
#define RAS_EAP_VALUENAME_INVOKE_PWDDLG         TEXT("InvokePasswordDialog")
#define RAS_EAP_VALUENAME_CONFIG_CLSID          TEXT("ConfigCLSID")
#define RAS_EAP_VALUENAME_STANDALONE_SUPPORTED  TEXT("StandaloneSupported")
#define RAS_EAP_VALUENAME_ROLES_SUPPORTED       TEXT("RolesSupported")
#define RAS_EAP_VALUENAME_PER_POLICY_CONFIG     TEXT("PerPolicyConfig")
#define RAS_EAP_VALUENAME_ISTUNNEL_METHOD       TEXT("IsTunnelMethod")
#define RAS_EAP_VALUENAME_FILTER_INNERMETHODS   TEXT("FilterInnerMethods")

#define RAS_EAP_ROLE_AUTHENTICATOR   0x00000001
#define RAS_EAP_ROLE_AUTHENTICATEE   0x00000002
#define RAS_EAP_ROLE_EXCLUDE_IN_EAP  0x00000004
#define RAS_EAP_ROLE_EXCLUDE_IN_PEAP 0x00000008
#define RAS_EAP_ROLE_EXCLUDE_IN_VPN  0x00000010

typedef enum _RAS_AUTH_ATTRIBUTE_TYPE_ {
    raatMinimum = 0,
    raatUserName,
    raatUserPassword,
    raatMD5CHAPPassword,
    raatNASIPAddress,
    raatNASPort,
    raatServiceType,
    raatFramedProtocol,
    raatFramedIPAddress,
    raatFramedIPNetmask,
    raatFramedRouting = 10,
    raatFilterId,
    raatFramedMTU,
    raatFramedCompression,
    raatLoginIPHost,
    raatLoginService,
    raatLoginTCPPort,
    raatUnassigned17,
    raatReplyMessage,
    raatCallbackNumber,
    raatCallbackId = 20,
    raatUnassigned21,
    raatFramedRoute,
    raatFramedIPXNetwork,
    raatState,
    raatClass,
    raatVendorSpecific,
    raatSessionTimeout,
    raatIdleTimeout,
    raatTerminationAction,
    raatCalledStationId = 30,
    raatCallingStationId,
    raatNASIdentifier,
    raatProxyState,
    raatLoginLATService,
    raatLoginLATNode,
    raatLoginLATGroup,
    raatFramedAppleTalkLink,
    raatFramedAppleTalkNetwork,
    raatFramedAppleTalkZone,
    raatAcctStatusType = 40,
    raatAcctDelayTime,
    raatAcctInputOctets,
    raatAcctOutputOctets,
    raatAcctSessionId,
    raatAcctAuthentic,
    raatAcctSessionTime,
    raatAcctInputPackets,
    raatAcctOutputPackets,
    raatAcctTerminateCause,
    raatAcctMultiSessionId = 50,
    raatAcctLinkCount,
    raatAcctEventTimeStamp = 55,
    raatMD5CHAPChallenge = 60,
    raatNASPortType,
    raatPortLimit,
    raatLoginLATPort,
    raatTunnelType,
    raatTunnelMediumType,
    raatTunnelClientEndpoint,
    raatTunnelServerEndpoint,
    raatARAPPassword = 70,
    raatARAPFeatures,
    raatARAPZoneAccess,
    raatARAPSecurity,
    raatARAPSecurityData,
    raatPasswordRetry,
    raatPrompt,
    raatConnectInfo,
    raatConfigurationToken,
    raatEAPMessage,
    raatSignature = 80,
    raatARAPChallengeResponse = 84,
    raatAcctInterimInterval = 85,
    raatNASIPv6Address = 95,
    raatFramedInterfaceId,
    raatFramedIPv6Prefix,
    raatLoginIPv6Host,
    raatFramedIPv6Route,
    raatFramedIPv6Pool,
    raatARAPGuestLogon = 8096,
    raatCertificateOID,
    raatEAPConfiguration,
    raatPEAPEmbeddedEAPTypeId = 8099,
    raatInnerEAPTypeId = 8099,
    raatPEAPFastRoamedSession = 8100,
    raatFastRoamedSession = 8100,
    raatEAPTLV = 8102,
    raatCredentialsChanged,
    raatCertificateThumbprint = 8250,
    raatPeerId = 9000,
    raatServerId,
    raatMethodId,
    raatEMSK,
    raatSessionId,
    raatReserved = 0xFFFFFFFF
} RAS_AUTH_ATTRIBUTE_TYPE;

#define raatARAPChallenge              33
#define raatARAPOldPassword            19
#define raatARAPNewPassword            20
#define raatARAPPasswordChangeReason   21

#ifndef _NGCTICKETCONTEXT_
#define _NGCTICKETCONTEXT_

#define NCRYPT_PIN_CACHE_PIN_BYTE_LENGTH   90

#define NGC_TICKET_PROPERTY_STRING_LENGTH  (NCRYPT_PIN_CACHE_PIN_BYTE_LENGTH/sizeof(WCHAR))

typedef ULONG_PTR NCRYPT_KEY_HANDLE;

typedef struct _NgcTicketContext {
    WCHAR wszTicket[NGC_TICKET_PROPERTY_STRING_LENGTH];
    NCRYPT_KEY_HANDLE hKey;
    HANDLE hImpersonateToken;
} NgcTicketContext;

#endif /* _NGCTICKETCONTEXT_ */

typedef struct _RAS_AUTH_ATTRIBUTE {
    RAS_AUTH_ATTRIBUTE_TYPE raaType;
    DWORD dwLength;
    PVOID Value;
} RAS_AUTH_ATTRIBUTE, *PRAS_AUTH_ATTRIBUTE;

#define EAPCODE_Request         1
#define EAPCODE_Response        2
#define EAPCODE_Success         3
#define EAPCODE_Failure         4

#define MAXEAPCODE              4

#define RAS_EAP_FLAG_ROUTER                 0x00000001
#define RAS_EAP_FLAG_NON_INTERACTIVE        0x00000002
#define RAS_EAP_FLAG_LOGON                  0x00000004
#define RAS_EAP_FLAG_PREVIEW                0x00000008
#define RAS_EAP_FLAG_FIRST_LINK             0x00000010
#define RAS_EAP_FLAG_MACHINE_AUTH           0x00000020
#define RAS_EAP_FLAG_GUEST_ACCESS           0x00000040
#define RAS_EAP_FLAG_8021X_AUTH             0x00000080
#define RAS_EAP_FLAG_HOSTED_IN_PEAP         0x00000100
#define RAS_EAP_FLAG_RESUME_FROM_HIBERNATE  0x00000200
#define RAS_EAP_FLAG_PEAP_UPFRONT           0x00000400
#define RAS_EAP_FLAG_ALTERNATIVE_USER_DB    0x00000800
#define RAS_EAP_FLAG_PEAP_FORCE_FULL_AUTH   0x00001000
#define RAS_EAP_FLAG_PRE_LOGON              0x00020000
#define RAS_EAP_FLAG_CONFG_READONLY         0x00080000
#define RAS_EAP_FLAG_RESERVED               0x00100000
#define RAS_EAP_FLAG_SAVE_CREDMAN           0x00200000
#define RAS_EAP_FLAG_SERVER_VALIDATION_REQUIRED  0x02000000

typedef struct _PPP_EAP_PACKET {
    BYTE Code;
    BYTE Id;
    BYTE Length[2];
    BYTE Data[1];
} PPP_EAP_PACKET, *PPPP_EAP_PACKET;

#define PPP_EAP_PACKET_HDR_LEN  ( sizeof( PPP_EAP_PACKET ) - 1 )

typedef struct _PPP_EAP_INPUT {
    DWORD dwSizeInBytes;
    DWORD fFlags;
    BOOL fAuthenticator;
    WCHAR *pwszIdentity;
    WCHAR *pwszPassword;
    BYTE bInitialId;
    RAS_AUTH_ATTRIBUTE *pUserAttributes;
    BOOL fAuthenticationComplete;
    DWORD dwAuthResultCode;
    HANDLE hTokenImpersonateUser;
    BOOL fSuccessPacketReceived;
    BOOL fDataReceivedFromInteractiveUI;
    PBYTE pDataFromInteractiveUI;
    DWORD dwSizeOfDataFromInteractiveUI;
    PBYTE pConnectionData;
    DWORD dwSizeOfConnectionData;
    PBYTE pUserData;
    DWORD dwSizeOfUserData;
    HANDLE hReserved;
    GUID guidConnectionId;
    BOOL isVpn;
} PPP_EAP_INPUT, *PPPP_EAP_INPUT;

typedef enum _PPP_EAP_ACTION {
    EAPACTION_NoAction,
    EAPACTION_Authenticate,
    EAPACTION_Done,
    EAPACTION_SendAndDone,
    EAPACTION_Send,
    EAPACTION_SendWithTimeout,
    EAPACTION_SendWithTimeoutInteractive,
    EAPACTION_IndicateTLV,
    EAPACTION_IndicateIdentity
} PPP_EAP_ACTION;

typedef struct _PPP_EAP_OUTPUT {
    DWORD dwSizeInBytes;
    PPP_EAP_ACTION Action;
    DWORD dwAuthResultCode;
    RAS_AUTH_ATTRIBUTE *pUserAttributes;
    BOOL fInvokeInteractiveUI;
    PBYTE pUIContextData;
    DWORD dwSizeOfUIContextData;
    BOOL fSaveConnectionData;
    PBYTE pConnectionData;
    DWORD dwSizeOfConnectionData;
    BOOL fSaveUserData;
    PBYTE pUserData;
    DWORD dwSizeOfUserData;
    NgcTicketContext *pNgcKerbTicket;
    BOOL fSaveToCredMan;
} PPP_EAP_OUTPUT, *PPPP_EAP_OUTPUT;

typedef struct _PPP_EAP_INFO {
    DWORD dwSizeInBytes;
    DWORD dwEapTypeId;
    DWORD (APIENTRY *RasEapInitialize)(BOOL fInitialize);
    DWORD (APIENTRY *RasEapBegin)(VOID **ppWorkBuffer, PPP_EAP_INPUT *pPppEapInput);
    DWORD (APIENTRY *RasEapEnd)(VOID *pWorkBuffer);
    DWORD (APIENTRY *RasEapMakeMessage)(
        VOID *pWorkBuf,
        PPP_EAP_PACKET *pReceivePacket,
        PPP_EAP_PACKET *pSendPacket,
        DWORD cbSendPacket,
        PPP_EAP_OUTPUT *pEapOutput,
        PPP_EAP_INPUT *pEapInput);
} PPP_EAP_INFO, *PPPP_EAP_INFO;

typedef struct _LEGACY_IDENTITY_UI_PARAMS {
    DWORD eapType;
    DWORD dwFlags;
    DWORD dwSizeofConnectionData;
    BYTE *pConnectionData;
    DWORD dwSizeofUserData;
    BYTE *pUserData;
    DWORD dwSizeofUserDataOut;
    BYTE *pUserDataOut;
    LPWSTR pwszIdentity;
    DWORD dwError;
} LEGACY_IDENTITY_UI_PARAMS;

typedef struct _LEGACY_INTERACTIVE_UI_PARAMS {
    DWORD eapType;
    DWORD dwSizeofContextData;
    BYTE *pContextData;
    DWORD dwSizeofInteractiveUIData;
    BYTE *pInteractiveUIData;
    DWORD dwError;
} LEGACY_INTERACTIVE_UI_PARAMS;

DWORD APIENTRY RasEapGetInfo(
    DWORD dwEapTypeId,
    PPP_EAP_INFO *pEapInfo
);

DWORD APIENTRY RasEapFreeMemory(
    BYTE *pMemory
);

DWORD APIENTRY RasEapInvokeInteractiveUI(
    DWORD dwEapTypeId,
    HWND hwndParent,
    BYTE *pUIContextData,
    DWORD dwSizeOfUIContextData,
    BYTE **ppDataFromInteractiveUI,
    DWORD *pdwSizeOfDataFromInteractiveUI
);

DWORD APIENTRY RasEapInvokeConfigUI(
    DWORD dwEapTypeId,
    HWND hwndParent,
    DWORD dwFlags,
    BYTE *pConnectionDataIn,
    DWORD dwSizeOfConnectionDataIn,
    BYTE **ppConnectionDataOut,
    DWORD *pdwSizeOfConnectionDataOut
);

DWORD APIENTRY RasEapGetIdentity(
    DWORD dwEapTypeId,
    HWND hwndParent,
    DWORD dwFlags,
    const WCHAR *pwszPhonebook,
    const WCHAR *pwszEntry,
    BYTE *pConnectionDataIn,
    DWORD dwSizeOfConnectionDataIn,
    BYTE *pUserDataIn,
    DWORD dwSizeOfUserDataIn,
    BYTE **ppUserDataOut,
    DWORD *pdwSizeOfUserDataOut,
    WCHAR **ppwszIdentityOut
);

#endif /* WINVER >= 0x0500 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _RASEAPIF_H */
