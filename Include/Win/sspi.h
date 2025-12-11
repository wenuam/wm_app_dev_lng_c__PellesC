#ifndef _SSPI_H
#define _SSPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* Security Support Provider Interface (SSPI) definitions */

#include <sdkddkver.h>
#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#ifdef SECURITY_WIN32
#define ISSP_LEVEL  32
#define ISSP_MODE   1
#endif /* SECURITY_WIN32 */

#ifdef SECURITY_KERNEL
#define ISSP_LEVEL  32

#ifdef ISSP_MODE
#undef ISSP_MODE
#endif
#define ISSP_MODE   0
#endif /* SECURITY_KERNEL */

#ifdef SECURITY_MAC
#define ISSP_LEVEL  32
#define ISSP_MODE   1
#endif /* SECURITY_MAC */

#ifndef ISSP_LEVEL
#error  You must define one of SECURITY_WIN32, SECURITY_KERNEL, or
/* #error  SECURITY_MAC */
#endif /* ISSP_LEVEL */

#if defined(_NO_KSECDD_IMPORT_)
#define KSECDDDECLSPEC
#else
#define KSECDDDECLSPEC __declspec(dllimport)
#endif

typedef WCHAR SEC_WCHAR;
typedef CHAR SEC_CHAR;

#ifndef __SECSTATUS_DEFINED__
typedef LONG SECURITY_STATUS;
#define __SECSTATUS_DEFINED__
#endif /* !__SECSTATUS_DEFINED__ */

#define SEC_TEXT TEXT
#define SEC_FAR
#define SEC_ENTRY __stdcall

#ifdef UNICODE
typedef SEC_WCHAR *SECURITY_PSTR;
typedef CONST SEC_WCHAR *SECURITY_PCSTR;
#else /* !UNICODE */
typedef SEC_CHAR *SECURITY_PSTR;
typedef CONST SEC_CHAR *SECURITY_PCSTR;
#endif /* !UNICODE */

#define __SEC_FAR SEC_FAR

#ifndef __SECHANDLE_DEFINED__
typedef struct _SecHandle {
    ULONG_PTR dwLower ;
    ULONG_PTR dwUpper ;
} SecHandle, *PSecHandle ;
#define __SECHANDLE_DEFINED__
#endif /* __SECHANDLE_DEFINED__ */

#define SecInvalidateHandle( x )    \
    ((PSecHandle) (x))->dwLower = ((PSecHandle) (x))->dwUpper = ((ULONG_PTR) ((INT_PTR)-1)) ;

#define SecIsValidHandle( x ) \
    ( ( ((PSecHandle) (x))->dwLower != ((ULONG_PTR) ((INT_PTR) -1 ))) && \
      ( ((PSecHandle) (x))->dwUpper != ((ULONG_PTR) ((INT_PTR) -1 ))) )

#define SEC_DELETED_HANDLE  ((ULONG_PTR) (-2))

typedef SecHandle CredHandle;
typedef PSecHandle PCredHandle;

typedef SecHandle CtxtHandle;
typedef PSecHandle PCtxtHandle;

#ifdef WIN32_CHICAGO
typedef unsigned __int64 QWORD;
typedef QWORD SECURITY_INTEGER, *PSECURITY_INTEGER;
#define SEC_SUCCESS(Status)  ((Status) >= 0)
#elif defined(_NTDEF_) || defined(_WINNT_)
typedef LARGE_INTEGER _SECURITY_INTEGER, SECURITY_INTEGER, *PSECURITY_INTEGER;
#else
typedef struct _SECURITY_INTEGER {
    unsigned long LowPart;
    long HighPart;
} SECURITY_INTEGER, *PSECURITY_INTEGER;
#endif

#ifndef SECURITY_MAC
typedef SECURITY_INTEGER TimeStamp;
typedef SECURITY_INTEGER *PTimeStamp;
#else /* SECURITY_MAC */
typedef unsigned long TimeStamp;
typedef unsigned long *PTimeStamp;
#endif /* SECURITY_MAC */

#ifndef _NTDEF_
typedef struct _SECURITY_STRING {
    unsigned short Length;
    unsigned short MaximumLength;
#ifdef MIDL_PASS
    [size_is(MaximumLength / 2), length_is(Length / 2)]
#endif /* MIDL_PASS */
    unsigned short *Buffer;
} SECURITY_STRING, *PSECURITY_STRING;
#else /* !_NTDEF_ */
typedef UNICODE_STRING SECURITY_STRING, *PSECURITY_STRING;
#endif /* !_NTDEF_ */

typedef struct _SecPkgInfoW {
    unsigned long fCapabilities;
    unsigned short wVersion;
    unsigned short wRPCID;
    unsigned long cbMaxToken;
#ifdef MIDL_PASS
    [string]
#endif /* MIDL_PASS */
    SEC_WCHAR *Name;
#ifdef MIDL_PASS
    [string]
#endif /* MIDL_PASS */
    SEC_WCHAR *Comment;
} SecPkgInfoW, *PSecPkgInfoW;

typedef struct _SecPkgInfoA {
    unsigned long fCapabilities;
    unsigned short wVersion;
    unsigned short wRPCID;
    unsigned long cbMaxToken;
#ifdef MIDL_PASS
    [string]
#endif /* MIDL_PASS */
    SEC_CHAR *Name;
#ifdef MIDL_PASS
    [string]
#endif /* MIDL_PASS */
    SEC_CHAR *Comment;
} SecPkgInfoA, *PSecPkgInfoA;

#ifdef UNICODE
#define SecPkgInfo  SecPkgInfoW
#define PSecPkgInfo  PSecPkgInfoW
#else /* !UNICODE */
#define SecPkgInfo  SecPkgInfoA
#define PSecPkgInfo  PSecPkgInfoA
#endif /* !UNICODE */

#define SECPKG_FLAG_INTEGRITY                    0x00000001
#define SECPKG_FLAG_PRIVACY                      0x00000002
#define SECPKG_FLAG_TOKEN_ONLY                   0x00000004
#define SECPKG_FLAG_DATAGRAM                     0x00000008
#define SECPKG_FLAG_CONNECTION                   0x00000010
#define SECPKG_FLAG_MULTI_REQUIRED               0x00000020
#define SECPKG_FLAG_CLIENT_ONLY                  0x00000040
#define SECPKG_FLAG_EXTENDED_ERROR               0x00000080
#define SECPKG_FLAG_IMPERSONATION                0x00000100
#define SECPKG_FLAG_ACCEPT_WIN32_NAME            0x00000200
#define SECPKG_FLAG_STREAM                       0x00000400
#define SECPKG_FLAG_NEGOTIABLE                   0x00000800
#define SECPKG_FLAG_GSS_COMPATIBLE               0x00001000
#define SECPKG_FLAG_LOGON                        0x00002000
#define SECPKG_FLAG_ASCII_BUFFERS                0x00004000
#define SECPKG_FLAG_FRAGMENT                     0x00008000
#define SECPKG_FLAG_MUTUAL_AUTH                  0x00010000
#define SECPKG_FLAG_DELEGATION                   0x00020000
#define SECPKG_FLAG_READONLY_WITH_CHECKSUM       0x00040000
#define SECPKG_FLAG_RESTRICTED_TOKENS            0x00080000
#define SECPKG_FLAG_NEGO_EXTENDER                0x00100000
#define SECPKG_FLAG_NEGOTIABLE2                  0x00200000
#define SECPKG_FLAG_APPCONTAINER_PASSTHROUGH     0x00400000
#define SECPKG_FLAG_APPCONTAINER_CHECKS          0x00800000

#define SECPKG_FLAG_CREDENTIAL_ISOLATION_ENABLED 0x01000000
#define SECPKG_FLAG_APPLY_LOOPBACK               0x02000000

#define SECPKG_ID_NONE      0xFFFF

#define SECPKG_CALLFLAGS_APPCONTAINER                   0x00000001
#define SECPKG_CALLFLAGS_APPCONTAINER_AUTHCAPABLE       0x00000002
#define SECPKG_CALLFLAGS_FORCE_SUPPLIED                 0x00000004
#define SECPKG_CALLFLAGS_APPCONTAINER_UPNCAPABLE        0x00000008

typedef struct _SecBuffer {
    unsigned long cbBuffer;
    unsigned long BufferType;
#ifdef MIDL_PASS
    [size_is(cbBuffer)] char *pvBuffer;
#else /* !MIDL_PASS */
    void SEC_FAR *pvBuffer;
#endif /* !MIDL_PASS */
} SecBuffer, *PSecBuffer;

typedef struct _SecBufferDesc {
    unsigned long ulVersion;
    unsigned long cBuffers;
#ifdef MIDL_PASS
    [size_is(cBuffers)]
#endif /* MIDL_PASS */
    PSecBuffer pBuffers;
} SecBufferDesc, SEC_FAR *PSecBufferDesc;

#define SECBUFFER_VERSION           0

#define SECBUFFER_EMPTY             0
#define SECBUFFER_DATA              1
#define SECBUFFER_TOKEN             2
#define SECBUFFER_PKG_PARAMS        3
#define SECBUFFER_MISSING           4
#define SECBUFFER_EXTRA             5
#define SECBUFFER_STREAM_TRAILER    6
#define SECBUFFER_STREAM_HEADER     7
#define SECBUFFER_NEGOTIATION_INFO  8
#define SECBUFFER_PADDING           9
#define SECBUFFER_STREAM            10
#define SECBUFFER_MECHLIST          11
#define SECBUFFER_MECHLIST_SIGNATURE 12
#define SECBUFFER_TARGET            13
#define SECBUFFER_CHANNEL_BINDINGS  14
#define SECBUFFER_CHANGE_PASS_RESPONSE 15
#define SECBUFFER_TARGET_HOST       16
#define SECBUFFER_ALERT             17
#define SECBUFFER_APPLICATION_PROTOCOLS 18
#define SECBUFFER_SRTP_PROTECTION_PROFILES      19
#define SECBUFFER_SRTP_MASTER_KEY_IDENTIFIER    20
#define SECBUFFER_TOKEN_BINDING                 21
#define SECBUFFER_PRESHARED_KEY                 22
#define SECBUFFER_PRESHARED_KEY_IDENTITY        23
#define SECBUFFER_DTLS_MTU                      24
#define SECBUFFER_SEND_GENERIC_TLS_EXTENSION    25
#define SECBUFFER_SUBSCRIBE_GENERIC_TLS_EXTENSION 26
#define SECBUFFER_FLAGS                         27
#define SECBUFFER_TRAFFIC_SECRETS               28
#define SECBUFFER_CERTIFICATE_REQUEST_CONTEXT   29
#define SECBUFFER_CHANNEL_BINDINGS_RESULT       30

#define SECBUFFER_ATTRMASK                      0xF0000000
#define SECBUFFER_READONLY                      0x80000000
#define SECBUFFER_READONLY_WITH_CHECKSUM        0x10000000
#define SECBUFFER_RESERVED                      0x60000000

typedef struct _SEC_NEGOTIATION_INFO {
    unsigned long Size;
    unsigned long NameLength;
    SEC_WCHAR *Name;
    void *Reserved;
} SEC_NEGOTIATION_INFO, *PSEC_NEGOTIATION_INFO ;

typedef struct _SEC_CHANNEL_BINDINGS {
    unsigned long dwInitiatorAddrType;
    unsigned long cbInitiatorLength;
    unsigned long dwInitiatorOffset;
    unsigned long dwAcceptorAddrType;
    unsigned long cbAcceptorLength;
    unsigned long dwAcceptorOffset;
    unsigned long cbApplicationDataLength;
    unsigned long dwApplicationDataOffset;
} SEC_CHANNEL_BINDINGS, *PSEC_CHANNEL_BINDINGS ;

#define SEC_CHANNEL_BINDINGS_EX_MAGIC 'XEBC'

typedef struct _SEC_CHANNEL_BINDINGS_EX {
    unsigned long magicNumber;
    unsigned long flags;
    unsigned long cbHeaderLength;
    unsigned long cbStructureLength;
    unsigned long dwInitiatorAddrType;
    unsigned long cbInitiatorLength;
    unsigned long dwInitiatorOffset;
    unsigned long dwAcceptorAddrType;
    unsigned long cbAcceptorLength;
    unsigned long dwAcceptorOffset;
    unsigned long cbApplicationDataLength;
    unsigned long dwApplicationDataOffset;
} SEC_CHANNEL_BINDINGS_EX, *PSEC_CHANNEL_BINDINGS_EX ;

#define SEC_CHANNEL_BINDINGS_AUDIT_BINDINGS 0x1

#define SEC_CHANNEL_BINDINGS_VALID_FLAGS SEC_CHANNEL_BINDINGS_AUDIT_BINDINGS

typedef struct _SEC_CHANNEL_BINDINGS_RESULT {
    unsigned long flags;
}SEC_CHANNEL_BINDINGS_RESULT, *PSEC_CHANNEL_BINDINGS_RESULT;

#define SEC_CHANNEL_BINDINGS_RESULT_CLIENT_SUPPORT 0x1
#define SEC_CHANNEL_BINDINGS_RESULT_ABSENT 0x2
#define SEC_CHANNEL_BINDINGS_RESULT_NOTVALID_MISMATCH 0x4
#define SEC_CHANNEL_BINDINGS_RESULT_NOTVALID_MISSING 0x8
#define SEC_CHANNEL_BINDINGS_RESULT_VALID_MATCHED 0x10
#define SEC_CHANNEL_BINDINGS_RESULT_VALID_PROXY 0x20
#define SEC_CHANNEL_BINDINGS_RESULT_VALID_MISSING 0x40

#define SEC_CHANNEL_BINDINGS_RESULT_VALID (SEC_CHANNEL_BINDINGS_RESULT_VALID_MATCHED | SEC_CHANNEL_BINDINGS_RESULT_VALID_PROXY | \
    SEC_CHANNEL_BINDINGS_RESULT_VALID_MISSING)

#define SEC_CHANNEL_BINDINGS_RESULT_NOTVALID (SEC_CHANNEL_BINDINGS_RESULT_NOTVALID_MISMATCH | SEC_CHANNEL_BINDINGS_RESULT_NOTVALID_MISSING)

typedef enum _SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT {
    SecApplicationProtocolNegotiationExt_None,
    SecApplicationProtocolNegotiationExt_NPN,
    SecApplicationProtocolNegotiationExt_ALPN
} SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT, *PSEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT;

typedef struct _SEC_APPLICATION_PROTOCOL_LIST {
    SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT ProtoNegoExt;
    unsigned short ProtocolListSize;
    unsigned char ProtocolList[ANYSIZE_ARRAY];
} SEC_APPLICATION_PROTOCOL_LIST, *PSEC_APPLICATION_PROTOCOL_LIST;

typedef struct _SEC_APPLICATION_PROTOCOLS {
    unsigned long ProtocolListsSize;
    SEC_APPLICATION_PROTOCOL_LIST ProtocolLists[ANYSIZE_ARRAY];
} SEC_APPLICATION_PROTOCOLS, *PSEC_APPLICATION_PROTOCOLS;

typedef struct _SEC_SRTP_PROTECTION_PROFILES {
    unsigned short ProfilesSize;
    unsigned short ProfilesList[ANYSIZE_ARRAY];
} SEC_SRTP_PROTECTION_PROFILES, *PSEC_SRTP_PROTECTION_PROFILES;

typedef struct _SEC_SRTP_MASTER_KEY_IDENTIFIER {
    unsigned char MasterKeyIdentifierSize;
    unsigned char MasterKeyIdentifier[ANYSIZE_ARRAY];
} SEC_SRTP_MASTER_KEY_IDENTIFIER, *PSEC_SRTP_MASTER_KEY_IDENTIFIER;

typedef struct _SEC_TOKEN_BINDING {
    unsigned char MajorVersion;
    unsigned char MinorVersion;
    unsigned short KeyParametersSize;
    unsigned char KeyParameters[ANYSIZE_ARRAY];
} SEC_TOKEN_BINDING, *PSEC_TOKEN_BINDING;

typedef struct _SEC_PRESHAREDKEY {
    unsigned short KeySize;
    unsigned char Key[ANYSIZE_ARRAY];
} SEC_PRESHAREDKEY, *PSEC_PRESHAREDKEY;

typedef struct _SEC_PRESHAREDKEY_IDENTITY {
    unsigned short KeyIdentitySize;
    unsigned char KeyIdentity[ANYSIZE_ARRAY];
} SEC_PRESHAREDKEY_IDENTITY, *PSEC_PRESHAREDKEY_IDENTITY;

typedef struct _SEC_DTLS_MTU {
    unsigned short PathMTU;
} SEC_DTLS_MTU, *PSEC_DTLS_MTU;

typedef struct _SEC_FLAGS {
    unsigned long long Flags;
} SEC_FLAGS, *PSEC_FLAGS;

typedef struct _SEC_CERTIFICATE_REQUEST_CONTEXT {
    unsigned char cbCertificateRequestContext;
    unsigned char rgCertificateRequestContext[ANYSIZE_ARRAY];
} SEC_CERTIFICATE_REQUEST_CONTEXT, *PSEC_CERTIFICATE_REQUEST_CONTEXT;

typedef enum _SEC_TRAFFIC_SECRET_TYPE {
    SecTrafficSecret_None,
    SecTrafficSecret_Client,
    SecTrafficSecret_Server
} SEC_TRAFFIC_SECRET_TYPE, *PSEC_TRAFFIC_SECRET_TYPE;

#define SZ_ALG_MAX_SIZE  64

typedef struct _SEC_TRAFFIC_SECRETS {
    wchar_t SymmetricAlgId[SZ_ALG_MAX_SIZE];
    wchar_t ChainingMode[SZ_ALG_MAX_SIZE];
    wchar_t HashAlgId[SZ_ALG_MAX_SIZE];
    unsigned short KeySize;
    unsigned short IvSize;
    unsigned short MsgSequenceStart;
    unsigned short MsgSequenceEnd;
    SEC_TRAFFIC_SECRET_TYPE TrafficSecretType;
    unsigned short TrafficSecretSize;
    unsigned char TrafficSecret[ANYSIZE_ARRAY];
} SEC_TRAFFIC_SECRETS, *PSEC_TRAFFIC_SECRETS;

#define SECURITY_NATIVE_DREP        0x00000010
#define SECURITY_NETWORK_DREP       0x00000000

#define SECPKG_CRED_INBOUND         0x00000001
#define SECPKG_CRED_OUTBOUND        0x00000002
#define SECPKG_CRED_BOTH            0x00000003
#define SECPKG_CRED_DEFAULT         0x00000004
#define SECPKG_CRED_RESERVED        0xF0000000

#define SECPKG_CRED_AUTOLOGON_RESTRICTED    0x00000010

#define SECPKG_CRED_PROCESS_POLICY_ONLY     0x00000020

#define ISC_REQ_DELEGATE                0x00000001
#define ISC_REQ_MUTUAL_AUTH             0x00000002
#define ISC_REQ_REPLAY_DETECT           0x00000004
#define ISC_REQ_SEQUENCE_DETECT         0x00000008
#define ISC_REQ_CONFIDENTIALITY         0x00000010
#define ISC_REQ_USE_SESSION_KEY         0x00000020
#define ISC_REQ_PROMPT_FOR_CREDS        0x00000040
#define ISC_REQ_USE_SUPPLIED_CREDS      0x00000080
#define ISC_REQ_ALLOCATE_MEMORY         0x00000100
#define ISC_REQ_USE_DCE_STYLE           0x00000200
#define ISC_REQ_DATAGRAM                0x00000400
#define ISC_REQ_CONNECTION              0x00000800
#define ISC_REQ_CALL_LEVEL              0x00001000
#define ISC_REQ_FRAGMENT_SUPPLIED       0x00002000
#define ISC_REQ_EXTENDED_ERROR          0x00004000
#define ISC_REQ_STREAM                  0x00008000
#define ISC_REQ_INTEGRITY               0x00010000
#define ISC_REQ_IDENTIFY                0x00020000
#define ISC_REQ_NULL_SESSION            0x00040000
#define ISC_REQ_MANUAL_CRED_VALIDATION  0x00080000
#define ISC_REQ_RESERVED1               0x00100000
#define ISC_REQ_FRAGMENT_TO_FIT         0x00200000

#define ISC_REQ_FORWARD_CREDENTIALS     0x00400000
#define ISC_REQ_NO_INTEGRITY            0x00800000
#define ISC_REQ_USE_HTTP_STYLE          0x01000000
#define ISC_REQ_UNVERIFIED_TARGET_NAME  0x20000000
#define ISC_REQ_CONFIDENTIALITY_ONLY    0x40000000
#define ISC_REQ_MESSAGES                 0x0000000100000000

#define ISC_REQ_DEFERRED_CRED_VALIDATION 0x0000000200000000

#define ISC_REQ_NO_POST_HANDSHAKE_AUTH   0x0000000400000000

#define ISC_RET_DELEGATE                0x00000001
#define ISC_RET_MUTUAL_AUTH             0x00000002
#define ISC_RET_REPLAY_DETECT           0x00000004
#define ISC_RET_SEQUENCE_DETECT         0x00000008
#define ISC_RET_CONFIDENTIALITY         0x00000010
#define ISC_RET_USE_SESSION_KEY         0x00000020
#define ISC_RET_USED_COLLECTED_CREDS    0x00000040
#define ISC_RET_USED_SUPPLIED_CREDS     0x00000080
#define ISC_RET_ALLOCATED_MEMORY        0x00000100
#define ISC_RET_USED_DCE_STYLE          0x00000200
#define ISC_RET_DATAGRAM                0x00000400
#define ISC_RET_CONNECTION              0x00000800
#define ISC_RET_INTERMEDIATE_RETURN     0x00001000
#define ISC_RET_CALL_LEVEL              0x00002000
#define ISC_RET_EXTENDED_ERROR          0x00004000
#define ISC_RET_STREAM                  0x00008000
#define ISC_RET_INTEGRITY               0x00010000
#define ISC_RET_IDENTIFY                0x00020000
#define ISC_RET_NULL_SESSION            0x00040000
#define ISC_RET_MANUAL_CRED_VALIDATION  0x00080000
#define ISC_RET_RESERVED1               0x00100000
#define ISC_RET_FRAGMENT_ONLY           0x00200000

#define ISC_RET_FORWARD_CREDENTIALS     0x00400000

#define ISC_RET_USED_HTTP_STYLE         0x01000000
#define ISC_RET_NO_ADDITIONAL_TOKEN     0x02000000
#define ISC_RET_REAUTHENTICATION        0x08000000
#define ISC_RET_CONFIDENTIALITY_ONLY    0x40000000
#define ISC_RET_MESSAGES                 0x0000000100000000
#define ISC_RET_DEFERRED_CRED_VALIDATION 0x0000000200000000
#define ISC_RET_NO_POST_HANDSHAKE_AUTH   0x0000000400000000

#define ASC_REQ_DELEGATE                0x00000001
#define ASC_REQ_MUTUAL_AUTH             0x00000002
#define ASC_REQ_REPLAY_DETECT           0x00000004
#define ASC_REQ_SEQUENCE_DETECT         0x00000008
#define ASC_REQ_CONFIDENTIALITY         0x00000010
#define ASC_REQ_USE_SESSION_KEY         0x00000020
#define ASC_REQ_SESSION_TICKET          0x00000040
#define ASC_REQ_ALLOCATE_MEMORY         0x00000100
#define ASC_REQ_USE_DCE_STYLE           0x00000200
#define ASC_REQ_DATAGRAM                0x00000400
#define ASC_REQ_CONNECTION              0x00000800
#define ASC_REQ_CALL_LEVEL              0x00001000
#define ASC_REQ_FRAGMENT_SUPPLIED       0x00002000
#define ASC_REQ_EXTENDED_ERROR          0x00008000
#define ASC_REQ_STREAM                  0x00010000
#define ASC_REQ_INTEGRITY               0x00020000
#define ASC_REQ_LICENSING               0x00040000
#define ASC_REQ_IDENTIFY                0x00080000
#define ASC_REQ_ALLOW_NULL_SESSION      0x00100000
#define ASC_REQ_ALLOW_NON_USER_LOGONS   0x00200000
#define ASC_REQ_ALLOW_CONTEXT_REPLAY    0x00400000
#define ASC_REQ_FRAGMENT_TO_FIT         0x00800000

#define ASC_REQ_NO_TOKEN                0x01000000
#define ASC_REQ_PROXY_BINDINGS          0x04000000

#define ASC_REQ_ALLOW_MISSING_BINDINGS  0x10000000
#define ASC_REQ_MESSAGES                0x0000000100000000

#define ASC_RET_DELEGATE                0x00000001
#define ASC_RET_MUTUAL_AUTH             0x00000002
#define ASC_RET_REPLAY_DETECT           0x00000004
#define ASC_RET_SEQUENCE_DETECT         0x00000008
#define ASC_RET_CONFIDENTIALITY         0x00000010
#define ASC_RET_USE_SESSION_KEY         0x00000020
#define ASC_RET_SESSION_TICKET          0x00000040
#define ASC_RET_ALLOCATED_MEMORY        0x00000100
#define ASC_RET_USED_DCE_STYLE          0x00000200
#define ASC_RET_DATAGRAM                0x00000400
#define ASC_RET_CONNECTION              0x00000800
#define ASC_RET_CALL_LEVEL              0x00002000
#define ASC_RET_THIRD_LEG_FAILED        0x00004000
#define ASC_RET_EXTENDED_ERROR          0x00008000
#define ASC_RET_STREAM                  0x00010000
#define ASC_RET_INTEGRITY               0x00020000
#define ASC_RET_LICENSING               0x00040000
#define ASC_RET_IDENTIFY                0x00080000
#define ASC_RET_NULL_SESSION            0x00100000
#define ASC_RET_ALLOW_NON_USER_LOGONS   0x00200000
#define ASC_RET_ALLOW_CONTEXT_REPLAY    0x00400000
#define ASC_RET_FRAGMENT_ONLY           0x00800000
#define ASC_RET_NO_TOKEN                0x01000000
#define ASC_RET_NO_ADDITIONAL_TOKEN     0x02000000

#define ASC_RET_MESSAGES                0x0000000100000000

#define SECPKG_CRED_ATTR_NAMES        1
#define SECPKG_CRED_ATTR_SSI_PROVIDER 2
#define SECPKG_CRED_ATTR_KDC_PROXY_SETTINGS 3
#define SECPKG_CRED_ATTR_CERT         4
#define SECPKG_CRED_ATTR_PAC_BYPASS   5

typedef struct _SecPkgCredentials_NamesW {
#ifdef MIDL_PASS
    [string]
#endif /* MIDL_PASS */
    SEC_WCHAR *sUserName;
} SecPkgCredentials_NamesW, *PSecPkgCredentials_NamesW;

typedef struct _SecPkgCredentials_NamesA {
#ifdef MIDL_PASS
    [string]
#endif /* MIDL_PASS */
    SEC_CHAR *sUserName;
} SecPkgCredentials_NamesA, *PSecPkgCredentials_NamesA;

#ifdef UNICODE
#define SecPkgCredentials_Names  SecPkgCredentials_NamesW
#define PSecPkgCredentials_Names  PSecPkgCredentials_NamesW
#else /* !UNICODE */
#define SecPkgCredentials_Names  SecPkgCredentials_NamesA
#define PSecPkgCredentials_Names  PSecPkgCredentials_NamesA
#endif /* !UNICODE */

#if NTDDI_VERSION > NTDDI_WS03
typedef struct _SecPkgCredentials_SSIProviderW {
    SEC_WCHAR *sProviderName;
    unsigned long ProviderInfoLength;
    char *ProviderInfo;
} SecPkgCredentials_SSIProviderW, *PSecPkgCredentials_SSIProviderW;
#endif /* NTDDI_VERSION > NTDDI_WS03 */

typedef struct _SecPkgCredentials_SSIProviderA {
    SEC_CHAR *sProviderName;
    unsigned long ProviderInfoLength;
    char *ProviderInfo;
} SecPkgCredentials_SSIProviderA, *PSecPkgCredentials_SSIProviderA;

#ifdef UNICODE
#define SecPkgCredentials_SSIProvider  SecPkgCredentials_SSIProviderW
#define PSecPkgCredentials_SSIProvider  PSecPkgCredentials_SSIProviderW
#else /* !UNICODE */
#define SecPkgCredentials_SSIProvider  SecPkgCredentials_SSIProviderA
#define PSecPkgCredentials_SSIProvider  PSecPkgCredentials_SSIProviderA
#endif /* !UNICODE */

#define KDC_PROXY_SETTINGS_V1                 1
#define KDC_PROXY_SETTINGS_FLAGS_FORCEPROXY 0x1

typedef struct _SecPkgCredentials_KdcProxySettingsW {
    ULONG Version;
    ULONG Flags;
    USHORT ProxyServerOffset;
    USHORT ProxyServerLength;
    USHORT ClientTlsCredOffset;
    USHORT ClientTlsCredLength;
} SecPkgCredentials_KdcProxySettingsW, *PSecPkgCredentials_KdcProxySettingsW;

typedef struct _SecPkgCredentials_Cert {
    unsigned long EncodedCertSize;
    unsigned char *EncodedCert;
} SecPkgCredentials_Cert, *PSecPkgCredentials_Cert;

#define SECPKG_ATTR_SIZES           0
#define SECPKG_ATTR_NAMES           1
#define SECPKG_ATTR_LIFESPAN        2
#define SECPKG_ATTR_DCE_INFO        3
#define SECPKG_ATTR_STREAM_SIZES    4
#define SECPKG_ATTR_KEY_INFO        5
#define SECPKG_ATTR_AUTHORITY       6
#define SECPKG_ATTR_PROTO_INFO      7
#define SECPKG_ATTR_PASSWORD_EXPIRY 8
#define SECPKG_ATTR_SESSION_KEY     9
#define SECPKG_ATTR_PACKAGE_INFO    10
#define SECPKG_ATTR_USER_FLAGS      11
#define SECPKG_ATTR_NEGOTIATION_INFO 12
#define SECPKG_ATTR_NATIVE_NAMES    13
#define SECPKG_ATTR_FLAGS           14

#define SECPKG_ATTR_USE_VALIDATED   15
#define SECPKG_ATTR_CREDENTIAL_NAME 16
#define SECPKG_ATTR_TARGET_INFORMATION 17
#define SECPKG_ATTR_ACCESS_TOKEN    18

#define SECPKG_ATTR_TARGET          19
#define SECPKG_ATTR_AUTHENTICATION_ID  20

#define SECPKG_ATTR_LOGOFF_TIME     21

#define SECPKG_ATTR_NEGO_KEYS         22
#define SECPKG_ATTR_PROMPTING_NEEDED  24
#define SECPKG_ATTR_UNIQUE_BINDINGS   25
#define SECPKG_ATTR_ENDPOINT_BINDINGS 26
#define SECPKG_ATTR_CLIENT_SPECIFIED_TARGET 27

#define SECPKG_ATTR_LAST_CLIENT_TOKEN_STATUS 30
#define SECPKG_ATTR_NEGO_PKG_INFO        31
#define SECPKG_ATTR_NEGO_STATUS          32
#define SECPKG_ATTR_CONTEXT_DELETED      33

#define SECPKG_ATTR_DTLS_MTU        34
#define SECPKG_ATTR_DATAGRAM_SIZES  SECPKG_ATTR_STREAM_SIZES

#define SECPKG_ATTR_SUBJECT_SECURITY_ATTRIBUTES 128

#define SECPKG_ATTR_APPLICATION_PROTOCOL 35

#define SECPKG_ATTR_NEGOTIATED_TLS_EXTENSIONS 36
#define SECPKG_ATTR_IS_LOOPBACK 37

typedef struct _SecPkgContext_SubjectAttributes {
    void *AttributeInfo;
} SecPkgContext_SubjectAttributes, *PSecPkgContext_SubjectAttributes;

#define SECPKG_ATTR_NEGO_INFO_FLAG_NO_KERBEROS 0x1
#define SECPKG_ATTR_NEGO_INFO_FLAG_NO_NTLM     0x2

typedef enum _SECPKG_CRED_CLASS {
    SecPkgCredClass_None = 0,
    SecPkgCredClass_Ephemeral = 10,
    SecPkgCredClass_PersistedGeneric = 20,
    SecPkgCredClass_PersistedSpecific = 30,
    SecPkgCredClass_Explicit = 40,
} SECPKG_CRED_CLASS, *PSECPKG_CRED_CLASS;

typedef struct _SecPkgContext_CredInfo {
    SECPKG_CRED_CLASS CredClass;
    unsigned long IsPromptingNeeded;
} SecPkgContext_CredInfo, *PSecPkgContext_CredInfo;

typedef struct _SecPkgContext_NegoPackageInfo {
    unsigned long PackageMask;
} SecPkgContext_NegoPackageInfo, *PSecPkgContext_NegoPackageInfo;

typedef struct _SecPkgContext_NegoStatus {
    unsigned long LastStatus;
} SecPkgContext_NegoStatus, *PSecPkgContext_NegoStatus;

typedef struct _SecPkgContext_Sizes {
    unsigned long cbMaxToken;
    unsigned long cbMaxSignature;
    unsigned long cbBlockSize;
    unsigned long cbSecurityTrailer;
} SecPkgContext_Sizes, *PSecPkgContext_Sizes;

typedef struct _SecPkgContext_StreamSizes {
    unsigned long cbHeader;
    unsigned long cbTrailer;
    unsigned long cbMaximumMessage;
    unsigned long cBuffers;
    unsigned long cbBlockSize;
} SecPkgContext_StreamSizes, *PSecPkgContext_StreamSizes;

typedef SecPkgContext_StreamSizes SecPkgContext_DatagramSizes;
typedef PSecPkgContext_StreamSizes PSecPkgContext_DatagramSizes;

typedef struct _SecPkgContext_NamesW {
    SEC_WCHAR *sUserName;
} SecPkgContext_NamesW, *PSecPkgContext_NamesW;

typedef enum _SECPKG_ATTR_LCT_STATUS {
    SecPkgAttrLastClientTokenYes,
    SecPkgAttrLastClientTokenNo,
    SecPkgAttrLastClientTokenMaybe
} SECPKG_ATTR_LCT_STATUS, *PSECPKG_ATTR_LCT_STATUS;

typedef struct _SecPkgContext_LastClientTokenStatus {
    SECPKG_ATTR_LCT_STATUS LastClientTokenStatus;
} SecPkgContext_LastClientTokenStatus, *PSecPkgContext_LastClientTokenStatus;

typedef struct _SecPkgContext_NamesA {
    SEC_CHAR *sUserName;
} SecPkgContext_NamesA, *PSecPkgContext_NamesA;

#ifdef UNICODE
#define SecPkgContext_Names  SecPkgContext_NamesW
#define PSecPkgContext_Names  PSecPkgContext_NamesW
#else /* !UNICODE */
#define SecPkgContext_Names  SecPkgContext_NamesA
#define PSecPkgContext_Names  PSecPkgContext_NamesA
#endif /* !UNICODE */

typedef struct _SecPkgContext_Lifespan {
    TimeStamp tsStart;
    TimeStamp tsExpiry;
} SecPkgContext_Lifespan, *PSecPkgContext_Lifespan;

typedef struct _SecPkgContext_DceInfo {
    unsigned long AuthzSvc;
    void *pPac;
} SecPkgContext_DceInfo, *PSecPkgContext_DceInfo;

typedef struct _SecPkgContext_KeyInfoA {
    SEC_CHAR *sSignatureAlgorithmName;
    SEC_CHAR *sEncryptAlgorithmName;
    unsigned long KeySize;
    unsigned long SignatureAlgorithm;
    unsigned long EncryptAlgorithm;
} SecPkgContext_KeyInfoA, *PSecPkgContext_KeyInfoA;

typedef struct _SecPkgContext_KeyInfoW {
    SEC_WCHAR *sSignatureAlgorithmName;
    SEC_WCHAR *sEncryptAlgorithmName;
    unsigned long KeySize;
    unsigned long SignatureAlgorithm;
    unsigned long EncryptAlgorithm;
} SecPkgContext_KeyInfoW, *PSecPkgContext_KeyInfoW;

#ifdef UNICODE
#define SecPkgContext_KeyInfo   SecPkgContext_KeyInfoW
#define PSecPkgContext_KeyInfo  PSecPkgContext_KeyInfoW
#else /* !UNICODE */
#define SecPkgContext_KeyInfo   SecPkgContext_KeyInfoA
#define PSecPkgContext_KeyInfo  PSecPkgContext_KeyInfoA
#endif /* !UNICODE */

typedef struct _SecPkgContext_AuthorityA {
    SEC_CHAR *sAuthorityName;
} SecPkgContext_AuthorityA, *PSecPkgContext_AuthorityA;

typedef struct _SecPkgContext_AuthorityW {
    SEC_WCHAR *sAuthorityName;
} SecPkgContext_AuthorityW, *PSecPkgContext_AuthorityW;

#ifdef UNICODE
#define SecPkgContext_Authority  SecPkgContext_AuthorityW
#define PSecPkgContext_Authority  PSecPkgContext_AuthorityW
#else /* !UNICODE */
#define SecPkgContext_Authority  SecPkgContext_AuthorityA
#define PSecPkgContext_Authority  PSecPkgContext_AuthorityA
#endif /* !UNICODE */

typedef struct _SecPkgContext_ProtoInfoA {
    SEC_CHAR *sProtocolName;
    unsigned long majorVersion;
    unsigned long minorVersion;
} SecPkgContext_ProtoInfoA, *PSecPkgContext_ProtoInfoA;

typedef struct _SecPkgContext_ProtoInfoW {
    SEC_WCHAR *sProtocolName;
    unsigned long majorVersion;
    unsigned long minorVersion;
} SecPkgContext_ProtoInfoW, *PSecPkgContext_ProtoInfoW;

#ifdef UNICODE
#define SecPkgContext_ProtoInfo   SecPkgContext_ProtoInfoW
#define PSecPkgContext_ProtoInfo  PSecPkgContext_ProtoInfoW
#else /* !UNICODE */
#define SecPkgContext_ProtoInfo   SecPkgContext_ProtoInfoA
#define PSecPkgContext_ProtoInfo  PSecPkgContext_ProtoInfoA
#endif /* !UNICODE */

typedef struct _SecPkgContext_PasswordExpiry {
    TimeStamp tsPasswordExpires;
} SecPkgContext_PasswordExpiry, *PSecPkgContext_PasswordExpiry;

#if NTDDI_VERSION > NTDDI_WS03
typedef struct _SecPkgContext_LogoffTime {
    TimeStamp tsLogoffTime;
} SecPkgContext_LogoffTime, *PSecPkgContext_LogoffTime;
#endif /* NTDDI_VERSION > NTDDI_WS03 */

typedef struct _SecPkgContext_SessionKey {
    unsigned long SessionKeyLength;
    unsigned char *SessionKey;
} SecPkgContext_SessionKey, *PSecPkgContext_SessionKey;

typedef struct _SecPkgContext_NegoKeys {
    unsigned long KeyType;
    unsigned short KeyLength;
    unsigned char *KeyValue;
    unsigned long VerifyKeyType;
    unsigned short VerifyKeyLength;
    unsigned char *VerifyKeyValue;
} SecPkgContext_NegoKeys, *PSecPkgContext_NegoKeys;

typedef struct _SecPkgContext_PackageInfoW {
    PSecPkgInfoW PackageInfo;
} SecPkgContext_PackageInfoW, *PSecPkgContext_PackageInfoW;

typedef struct _SecPkgContext_PackageInfoA {
    PSecPkgInfoA PackageInfo;
} SecPkgContext_PackageInfoA, *PSecPkgContext_PackageInfoA;

typedef struct _SecPkgContext_UserFlags {
    unsigned long UserFlags;
} SecPkgContext_UserFlags, *PSecPkgContext_UserFlags;

typedef struct _SecPkgContext_Flags {
    unsigned long Flags;
} SecPkgContext_Flags, *PSecPkgContext_Flags;

#ifdef UNICODE
#define SecPkgContext_PackageInfo   SecPkgContext_PackageInfoW
#define PSecPkgContext_PackageInfo  PSecPkgContext_PackageInfoW
#else /* !UNICODE */
#define SecPkgContext_PackageInfo   SecPkgContext_PackageInfoA
#define PSecPkgContext_PackageInfo  PSecPkgContext_PackageInfoA
#endif /* !UNICODE */

typedef struct _SecPkgContext_NegotiationInfoA {
    PSecPkgInfoA PackageInfo ;
    unsigned long NegotiationState ;
} SecPkgContext_NegotiationInfoA, *PSecPkgContext_NegotiationInfoA ;

typedef struct _SecPkgContext_NegotiationInfoW {
    PSecPkgInfoW PackageInfo ;
    unsigned long NegotiationState ;
} SecPkgContext_NegotiationInfoW, *PSecPkgContext_NegotiationInfoW ;

#ifdef UNICODE
#define SecPkgContext_NegotiationInfo   SecPkgContext_NegotiationInfoW
#define PSecPkgContext_NegotiationInfo  PSecPkgContext_NegotiationInfoW
#else /* !UNICODE */
#define SecPkgContext_NegotiationInfo   SecPkgContext_NegotiationInfoA
#define PSecPkgContext_NegotiationInfo  PSecPkgContext_NegotiationInfoA
#endif /* !UNICODE */

#define SECPKG_NEGOTIATION_COMPLETE             0
#define SECPKG_NEGOTIATION_OPTIMISTIC           1
#define SECPKG_NEGOTIATION_IN_PROGRESS          2
#define SECPKG_NEGOTIATION_DIRECT               3
#define SECPKG_NEGOTIATION_TRY_MULTICRED        4

typedef struct _SecPkgContext_NativeNamesW {
    SEC_WCHAR *sClientName;
    SEC_WCHAR *sServerName;
} SecPkgContext_NativeNamesW, *PSecPkgContext_NativeNamesW;

typedef struct _SecPkgContext_NativeNamesA {
    SEC_CHAR *sClientName;
    SEC_CHAR *sServerName;
} SecPkgContext_NativeNamesA, *PSecPkgContext_NativeNamesA;

#ifdef UNICODE
#define SecPkgContext_NativeNames  SecPkgContext_NativeNamesW
#define PSecPkgContext_NativeNames  PSecPkgContext_NativeNamesW
#else /* !UNICODE */
#define SecPkgContext_NativeNames  SecPkgContext_NativeNamesA
#define PSecPkgContext_NativeNames  PSecPkgContext_NativeNamesA
#endif /* !UNICODE */

#if OSVER(NTDDI_VERSION) > NTDDI_WIN2K
typedef struct _SecPkgContext_CredentialNameW {
    unsigned long CredentialType;
    SEC_WCHAR *sCredentialName;
} SecPkgContext_CredentialNameW, *PSecPkgContext_CredentialNameW;
#endif /* OSVER(NTDDI_VERSION) > NTDDI_WIN2K */

typedef struct _SecPkgContext_CredentialNameA {
    unsigned long CredentialType;
    SEC_CHAR *sCredentialName;
} SecPkgContext_CredentialNameA, *PSecPkgContext_CredentialNameA;

#ifdef UNICODE
#define SecPkgContext_CredentialName  SecPkgContext_CredentialNameW
#define PSecPkgContext_CredentialName  PSecPkgContext_CredentialNameW
#else /* !UNICODE */
#define SecPkgContext_CredentialName  SecPkgContext_CredentialNameA
#define PSecPkgContext_CredentialName  PSecPkgContext_CredentialNameA
#endif /* !UNICODE */

typedef struct _SecPkgContext_AccessToken {
    void *AccessToken;
} SecPkgContext_AccessToken, *PSecPkgContext_AccessToken;

typedef struct _SecPkgContext_TargetInformation {
    unsigned long MarshalledTargetInfoLength;
    unsigned char *MarshalledTargetInfo;
} SecPkgContext_TargetInformation, *PSecPkgContext_TargetInformation;

typedef struct _SecPkgContext_AuthzID {
    unsigned long AuthzIDLength;
    char *AuthzID;
} SecPkgContext_AuthzID, *PSecPkgContext_AuthzID;

typedef struct _SecPkgContext_Target {
    unsigned long TargetLength;
    char *Target;
} SecPkgContext_Target, *PSecPkgContext_Target;

typedef struct _SecPkgContext_ClientSpecifiedTarget {
    SEC_WCHAR *sTargetName;
} SecPkgContext_ClientSpecifiedTarget, *PSecPkgContext_ClientSpecifiedTarget;

typedef struct _SecPkgContext_Bindings {
    unsigned long BindingsLength;
    SEC_CHANNEL_BINDINGS *Bindings;
} SecPkgContext_Bindings, *PSecPkgContext_Bindings;

typedef enum _SEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS {
    SecApplicationProtocolNegotiationStatus_None,
    SecApplicationProtocolNegotiationStatus_Success,
    SecApplicationProtocolNegotiationStatus_SelectedClientOnly
} SEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS, *PSEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS;

#define MAX_PROTOCOL_ID_SIZE 0xff

typedef struct _SecPkgContext_ApplicationProtocol {
    SEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS ProtoNegoStatus;
    SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT ProtoNegoExt;
    unsigned char ProtocolIdSize;
    unsigned char ProtocolId[MAX_PROTOCOL_ID_SIZE];
} SecPkgContext_ApplicationProtocol, *PSecPkgContext_ApplicationProtocol;

typedef struct _SecPkgContext_NegotiatedTlsExtensions {
    unsigned long ExtensionsCount;
    unsigned short *Extensions;
} SecPkgContext_NegotiatedTlsExtensions, *PSecPkgContext_NegotiatedTlsExtensions;

typedef struct _SECPKG_APP_MODE_INFO {
    ULONG UserFunction;
    ULONG_PTR Argument1;
    ULONG_PTR Argument2;
    SecBuffer UserData;
    BOOLEAN ReturnToLsa;
} SECPKG_APP_MODE_INFO, *PSECPKG_APP_MODE_INFO;

typedef void (SEC_ENTRY *SEC_GET_KEY_FN)(
    void *Arg,
    void *Principal,
    unsigned long KeyVer,
    void **Key,
    SECURITY_STATUS *Status
);

#define SECPKG_CONTEXT_EXPORT_RESET_NEW         0x00000001
#define SECPKG_CONTEXT_EXPORT_DELETE_OLD        0x00000002

#define SECPKG_CONTEXT_EXPORT_TO_KERNEL         0x00000004

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY AcquireCredentialsHandleW(
#if ISSP_MODE == 0
    PSECURITY_STRING pPrincipal,
    PSECURITY_STRING pPackage,
#else /* ISSP_MODE != 0 */
    LPWSTR pszPrincipal,
    LPWSTR pszPackage,
#endif /* ISSP_MODE != 0 */
    unsigned long fCredentialUse,
    void *pvLogonId,
    void *pAuthData,
    SEC_GET_KEY_FN pGetKeyFn,
    void *pvGetKeyArgument,
    PCredHandle phCredential,
    PTimeStamp ptsExpiry
);

typedef SECURITY_STATUS (SEC_ENTRY *ACQUIRE_CREDENTIALS_HANDLE_FN_W)(
#if ISSP_MODE == 0
    PSECURITY_STRING,
    PSECURITY_STRING,
#else /* ISSP_MODE != 0 */
    SEC_WCHAR *,
    SEC_WCHAR *,
#endif /* ISSP_MODE != 0 */
    unsigned long,
    void *,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PCredHandle,
    PTimeStamp
);

SECURITY_STATUS SEC_ENTRY AcquireCredentialsHandleA(
    LPSTR pszPrincipal,
    LPSTR pszPackage,
    unsigned long fCredentialUse,
    void *pvLogonId,
    void *pAuthData,
    SEC_GET_KEY_FN pGetKeyFn,
    void *pvGetKeyArgument,
    PCredHandle phCredential,
    PTimeStamp ptsExpiry
);

typedef SECURITY_STATUS (SEC_ENTRY *ACQUIRE_CREDENTIALS_HANDLE_FN_A)(
    SEC_CHAR *,
    SEC_CHAR *,
    unsigned long,
    void *,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PCredHandle,
    PTimeStamp
);

#ifdef UNICODE
#define AcquireCredentialsHandle  AcquireCredentialsHandleW
#define ACQUIRE_CREDENTIALS_HANDLE_FN  ACQUIRE_CREDENTIALS_HANDLE_FN_W
#else /* !UNICODE */
#define AcquireCredentialsHandle  AcquireCredentialsHandleA
#define ACQUIRE_CREDENTIALS_HANDLE_FN  ACQUIRE_CREDENTIALS_HANDLE_FN_A
#endif /* !UNICODE */

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY FreeCredentialsHandle(
    PCredHandle phCredential
);

typedef SECURITY_STATUS (SEC_ENTRY *FREE_CREDENTIALS_HANDLE_FN)(
    PCredHandle
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY AddCredentialsW(
    PCredHandle hCredentials,
#if ISSP_MODE == 0
    PSECURITY_STRING pPrincipal,
    PSECURITY_STRING pPackage,
#else /* ISSP_MODE != 0 */
    LPWSTR pszPrincipal,
    LPWSTR pszPackage,
#endif /* ISSP_MODE != 0 */
    unsigned long fCredentialUse,
    void *pAuthData,
    SEC_GET_KEY_FN pGetKeyFn,
    void *pvGetKeyArgument,
    PTimeStamp ptsExpiry
);

typedef SECURITY_STATUS (SEC_ENTRY *ADD_CREDENTIALS_FN_W)(
    PCredHandle,
#if ISSP_MODE == 0
    PSECURITY_STRING,
    PSECURITY_STRING,
#else /* ISSP_MODE != 0 */
    SEC_WCHAR *,
    SEC_WCHAR *,
#endif /* ISSP_MODE != 0 */
    unsigned long,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PTimeStamp
);

SECURITY_STATUS SEC_ENTRY AddCredentialsA(
    PCredHandle hCredentials,
    LPSTR pszPrincipal,
    LPSTR pszPackage,
    unsigned long fCredentialUse,
    void *pAuthData,
    SEC_GET_KEY_FN pGetKeyFn,
    void *pvGetKeyArgument,
    PTimeStamp ptsExpiry
);

typedef SECURITY_STATUS (SEC_ENTRY *ADD_CREDENTIALS_FN_A)(
    PCredHandle,
    SEC_CHAR *,
    SEC_CHAR *,
    unsigned long,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PTimeStamp
);

#ifdef UNICODE
#define AddCredentials  AddCredentialsW
#define ADD_CREDENTIALS_FN  ADD_CREDENTIALS_FN_W
#else /* !UNICODE */
#define AddCredentials  AddCredentialsA
#define ADD_CREDENTIALS_FN ADD_CREDENTIALS_FN_A
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if ISSP_MODE == 0

typedef struct _SspiAsyncContext SspiAsyncContext;

typedef void ( *SspiAsyncNotifyCallback)(
    SspiAsyncContext *Handle,
    PVOID CallbackData
);

SspiAsyncContext *SspiCreateAsyncContext(void);

void SspiFreeAsyncContext(
    SspiAsyncContext *Handle
);

NTSTATUS SspiReinitAsyncContext(
    SspiAsyncContext *Handle
);

SECURITY_STATUS SspiSetAsyncNotifyCallback(
    SspiAsyncContext *Context,
    SspiAsyncNotifyCallback Callback,
    void *CallbackData
);

BOOLEAN SspiAsyncContextRequiresNotify(
    SspiAsyncContext *AsyncContext
);

SECURITY_STATUS SspiGetAsyncCallStatus(
    SspiAsyncContext *Handle
);

SECURITY_STATUS SspiAcquireCredentialsHandleAsyncW(
    SspiAsyncContext *AsyncContext,
#if ISSP_MODE == 0
    PSECURITY_STRING pszPrincipal,
    PSECURITY_STRING pszPackage,
#else /* ISSP_MODE != 0 */
    LPWSTR pszPrincipal,
    LPWSTR pszPackage,
#endif /* ISSP_MODE != 0 */
    unsigned long fCredentialUse,
    void *pvLogonId,
    void *pAuthData,
    SEC_GET_KEY_FN pGetKeyFn,
    void *pvGetKeyArgument,
    PCredHandle phCredential,
    PTimeStamp ptsExpiry
);

SECURITY_STATUS SspiAcquireCredentialsHandleAsyncA(
    SspiAsyncContext *AsyncContext,
    LPSTR pszPrincipal,
    LPSTR pszPackage,
    unsigned long fCredentialUse,
    void *pvLogonId,
    void *pAuthData,
    SEC_GET_KEY_FN pGetKeyFn,
    void *pvGetKeyArgument,
    PCredHandle phCredential,
    PTimeStamp ptsExpiry
);

SECURITY_STATUS SspiInitializeSecurityContextAsyncW(
    SspiAsyncContext *AsyncContext,
    PCredHandle phCredential,
    PCtxtHandle phContext,
#if ISSP_MODE == 0
    PSECURITY_STRING pszTargetName,
#else /* ISSP_MODE != 0 */
    LPWSTR pszTargetName,
#endif /* ISSP_MODE != 0 */
    unsigned long fContextReq,
    unsigned long Reserved1,
    unsigned long TargetDataRep,
    PSecBufferDesc pInput,
    unsigned long Reserved2,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);

SECURITY_STATUS SspiInitializeSecurityContextAsyncA(
    SspiAsyncContext *AsyncContext,
    PCredHandle phCredential,
    PCtxtHandle phContext,
    LPSTR pszTargetName,
    unsigned long fContextReq,
    unsigned long Reserved1,
    unsigned long TargetDataRep,
    PSecBufferDesc pInput,
    unsigned long Reserved2,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);

SECURITY_STATUS SspiAcceptSecurityContextAsync(
    SspiAsyncContext *AsyncContext,
    PCredHandle phCredential,
    PCtxtHandle phContext,
    PSecBufferDesc pInput,
    unsigned long fContextReq,
    unsigned long TargetDataRep,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);

SECURITY_STATUS SspiFreeCredentialsHandleAsync(
    SspiAsyncContext *AsyncContext,
    PCredHandle phCredential
);
SECURITY_STATUS SspiDeleteSecurityContextAsync(
    SspiAsyncContext *AsyncContext,
    PCtxtHandle phContext
);
#ifdef UNICODE
#define SspiAcquireCredentialsHandleAsync  SspiAcquireCredentialsHandleAsyncW
#define SspiInitializeSecurityContextAsync  SspiInitializeSecurityContextAsyncW
#else /* !UNICODE */
#define SspiAcquireCredentialsHandleAsync  SspiAcquireCredentialsHandleAsyncA
#define SspiInitializeSecurityContextAsync  SspiInitializeSecurityContextAsync
#endif /* !UNICODE */

#endif /* ISSP_MODE == 0 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if ISSP_MODE != 0

SECURITY_STATUS SEC_ENTRY ChangeAccountPasswordW(
    SEC_WCHAR *pszPackageName,
    SEC_WCHAR *pszDomainName,
    SEC_WCHAR *pszAccountName,
    SEC_WCHAR *pszOldPassword,
    SEC_WCHAR *pszNewPassword,
    BOOLEAN bImpersonating,
    unsigned long dwReserved,
    PSecBufferDesc pOutput
);

typedef SECURITY_STATUS (SEC_ENTRY *CHANGE_PASSWORD_FN_W)(
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    BOOLEAN,
    unsigned long,
    PSecBufferDesc
);

SECURITY_STATUS SEC_ENTRY ChangeAccountPasswordA(
    SEC_CHAR *pszPackageName,
    SEC_CHAR *pszDomainName,
    SEC_CHAR *pszAccountName,
    SEC_CHAR *pszOldPassword,
    SEC_CHAR *pszNewPassword,
    BOOLEAN bImpersonating,
    unsigned long dwReserved,
    PSecBufferDesc pOutput
);

typedef SECURITY_STATUS (SEC_ENTRY *CHANGE_PASSWORD_FN_A)(
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    BOOLEAN,
    unsigned long,
    PSecBufferDesc
);

#ifdef UNICODE
#define ChangeAccountPassword  ChangeAccountPasswordW
#define CHANGE_PASSWORD_FN  CHANGE_PASSWORD_FN_W
#else /* !UNICODE */
#define ChangeAccountPassword  ChangeAccountPasswordA
#define CHANGE_PASSWORD_FN  CHANGE_PASSWORD_FN_A
#endif /* !UNICODE */

#endif /* ISSP_MODE != 0 */

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY InitializeSecurityContextW(
    PCredHandle phCredential,
    PCtxtHandle phContext,
#if ISSP_MODE == 0
    PSECURITY_STRING pTargetName,
#else /* ISSP_MODE != 0 */
    SEC_WCHAR *pszTargetName,
#endif /* ISSP_MODE != 0 */
    unsigned long fContextReq,
    unsigned long Reserved1,
    unsigned long TargetDataRep,
    PSecBufferDesc pInput,
    unsigned long Reserved2,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);

typedef SECURITY_STATUS (SEC_ENTRY *INITIALIZE_SECURITY_CONTEXT_FN_W)(
    PCredHandle,
    PCtxtHandle,
#if ISSP_MODE == 0
    PSECURITY_STRING,
#else /* ISSP_MODE != 0 */
    SEC_WCHAR *,
#endif /* ISSP_MODE != 0 */
    unsigned long,
    unsigned long,
    unsigned long,
    PSecBufferDesc,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp);

SECURITY_STATUS SEC_ENTRY InitializeSecurityContextA(
    PCredHandle phCredential,
    PCtxtHandle phContext,
    SEC_CHAR *pszTargetName,
    unsigned long fContextReq,
    unsigned long Reserved1,
    unsigned long TargetDataRep,
    PSecBufferDesc pInput,
    unsigned long Reserved2,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);

typedef SECURITY_STATUS (SEC_ENTRY *INITIALIZE_SECURITY_CONTEXT_FN_A)(
    PCredHandle,
    PCtxtHandle,
    SEC_CHAR *,
    unsigned long,
    unsigned long,
    unsigned long,
    PSecBufferDesc,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp
);

#ifdef UNICODE
#define InitializeSecurityContext  InitializeSecurityContextW
#define INITIALIZE_SECURITY_CONTEXT_FN  INITIALIZE_SECURITY_CONTEXT_FN_W
#else /* !UNICODE */
#define InitializeSecurityContext  InitializeSecurityContextA
#define INITIALIZE_SECURITY_CONTEXT_FN  INITIALIZE_SECURITY_CONTEXT_FN_A
#endif /* !UNICODE */

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY AcceptSecurityContext(
    PCredHandle phCredential,
    PCtxtHandle phContext,
    PSecBufferDesc pInput,
    unsigned long fContextReq,
    unsigned long TargetDataRep,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);

typedef SECURITY_STATUS (SEC_ENTRY *ACCEPT_SECURITY_CONTEXT_FN)(
    PCredHandle,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp
);

SECURITY_STATUS SEC_ENTRY CompleteAuthToken(
    PCtxtHandle phContext,
    PSecBufferDesc pToken
);

typedef SECURITY_STATUS (SEC_ENTRY *COMPLETE_AUTH_TOKEN_FN)(
    PCtxtHandle,
    PSecBufferDesc
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY ImpersonateSecurityContext(
    PCtxtHandle phContext
);

typedef SECURITY_STATUS (SEC_ENTRY *IMPERSONATE_SECURITY_CONTEXT_FN)(
    PCtxtHandle
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY RevertSecurityContext(
    PCtxtHandle phContext
);

typedef SECURITY_STATUS (SEC_ENTRY *REVERT_SECURITY_CONTEXT_FN)(
    PCtxtHandle
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY QuerySecurityContextToken(
    PCtxtHandle phContext,
    void **Token
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_SECURITY_CONTEXT_TOKEN_FN)(
    PCtxtHandle, void **
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY DeleteSecurityContext(
    PCtxtHandle phContext
);

typedef SECURITY_STATUS (SEC_ENTRY *DELETE_SECURITY_CONTEXT_FN)(
    PCtxtHandle
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY ApplyControlToken(
    PCtxtHandle phContext,
    PSecBufferDesc pInput
);

typedef SECURITY_STATUS (SEC_ENTRY *APPLY_CONTROL_TOKEN_FN)(
    PCtxtHandle, PSecBufferDesc
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY QueryContextAttributesW(
    PCtxtHandle phContext,
    unsigned long ulAttribute,
    void *pBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_CONTEXT_ATTRIBUTES_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *
);

SECURITY_STATUS SEC_ENTRY QueryContextAttributesExW(
    PCtxtHandle phContext,
    unsigned long ulAttribute,
    void *pBuffer,
    unsigned long cbBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_CONTEXT_ATTRIBUTES_EX_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long
);

SECURITY_STATUS SEC_ENTRY QueryContextAttributesA(
    PCtxtHandle phContext,
    unsigned long ulAttribute,
    void *pBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_CONTEXT_ATTRIBUTES_FN_A)(
    PCtxtHandle,
    unsigned long,
    void *
);

SECURITY_STATUS SEC_ENTRY QueryContextAttributesExA(
    PCtxtHandle phContext,
    unsigned long ulAttribute,
    void *pBuffer,
    unsigned long cbBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_CONTEXT_ATTRIBUTES_EX_FN_A)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long
);

#ifdef UNICODE
#define QueryContextAttributes  QueryContextAttributesW
#define QUERY_CONTEXT_ATTRIBUTES_FN  QUERY_CONTEXT_ATTRIBUTES_FN_W
#define QueryContextAttributesEx  QueryContextAttributesExW
#define QUERY_CONTEXT_ATTRIBUTES_EX_FN  QUERY_CONTEXT_ATTRIBUTES_EX_FN_W
#else /* !UNICODE */
#define QueryContextAttributes  QueryContextAttributesA
#define QUERY_CONTEXT_ATTRIBUTES_FN  QUERY_CONTEXT_ATTRIBUTES_FN_A
#define QueryContextAttributesEx  QueryContextAttributesExA
#define QUERY_CONTEXT_ATTRIBUTES_EX_FN  QUERY_CONTEXT_ATTRIBUTES_EX_FN_A
#endif /* !UNICODE */

#if (OSVER(NTDDI_VERSION) > NTDDI_WIN2K)
SECURITY_STATUS SEC_ENTRY SetContextAttributesW(
    PCtxtHandle phContext,
    unsigned long ulAttribute,
    void *pBuffer,
    unsigned long cbBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *SET_CONTEXT_ATTRIBUTES_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long
);
#endif /* (OSVER(NTDDI_VERSION) > NTDDI_WIN2K) */

SECURITY_STATUS SEC_ENTRY SetContextAttributesA(
    PCtxtHandle phContext,
    unsigned long ulAttribute,
    void *pBuffer,
    unsigned long cbBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *SET_CONTEXT_ATTRIBUTES_FN_A)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long
);

#ifdef UNICODE
#define SetContextAttributes  SetContextAttributesW
#define SET_CONTEXT_ATTRIBUTES_FN  SET_CONTEXT_ATTRIBUTES_FN_W
#else /* !UNICODE */
#define SetContextAttributes  SetContextAttributesA
#define SET_CONTEXT_ATTRIBUTES_FN  SET_CONTEXT_ATTRIBUTES_FN_A
#endif /* !UNICODE */

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY QueryCredentialsAttributesW(
    PCredHandle phCredential,
    unsigned long ulAttribute,
    void *pBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_CREDENTIALS_ATTRIBUTES_FN_W)(
    PCredHandle,
    unsigned long,
    void *
);

SECURITY_STATUS SEC_ENTRY QueryCredentialsAttributesExW(
    PCredHandle phCredential,
    unsigned long ulAttribute,
    void *pBuffer,
    unsigned long cbBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_W)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long
);

SECURITY_STATUS SEC_ENTRY QueryCredentialsAttributesA(
    PCredHandle phCredential,
    unsigned long ulAttribute,
    void *pBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_CREDENTIALS_ATTRIBUTES_FN_A)(
    PCredHandle,
    unsigned long,
    void *
);

SECURITY_STATUS SEC_ENTRY QueryCredentialsAttributesExA(
    PCredHandle phCredential,
    unsigned long ulAttribute,
    void *pBuffer,
    unsigned long cbBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_A)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long
);

#ifdef UNICODE
#define QueryCredentialsAttributes  QueryCredentialsAttributesW
#define QUERY_CREDENTIALS_ATTRIBUTES_FN  QUERY_CREDENTIALS_ATTRIBUTES_FN_W
#define QueryCredentialsAttributesEx  QueryCredentialsAttributesExW
#define QUERY_CREDENTIALS_ATTRIBUTES_EX_FN  QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_W
#else /* !UNICODE */
#define QueryCredentialsAttributes  QueryCredentialsAttributesA
#define QUERY_CREDENTIALS_ATTRIBUTES_FN  QUERY_CREDENTIALS_ATTRIBUTES_FN_A
#define QueryCredentialsAttributesEx  QueryCredentialsAttributesExA
#define QUERY_CREDENTIALS_ATTRIBUTES_EX_FN  QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_A
#endif /* !UNICODE */

#if NTDDI_VERSION > NTDDI_WS03
KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY SetCredentialsAttributesW(
    PCredHandle phCredential,
    unsigned long ulAttribute,
    void *pBuffer,
    unsigned long cbBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *SET_CREDENTIALS_ATTRIBUTES_FN_W)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long
);
#endif /* NTDDI_VERSION > NTDDI_WS03 */

SECURITY_STATUS SEC_ENTRY SetCredentialsAttributesA(
    PCredHandle phCredential,
    unsigned long ulAttribute,
    void *pBuffer,
    unsigned long cbBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *SET_CREDENTIALS_ATTRIBUTES_FN_A)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long
);

#ifdef UNICODE
#define SetCredentialsAttributes  SetCredentialsAttributesW
#define SET_CREDENTIALS_ATTRIBUTES_FN  SET_CREDENTIALS_ATTRIBUTES_FN_W
#else /* !UNICODE */
#define SetCredentialsAttributes  SetCredentialsAttributesA
#define SET_CREDENTIALS_ATTRIBUTES_FN  SET_CREDENTIALS_ATTRIBUTES_FN_A
#endif /* !UNICODE */

SECURITY_STATUS SEC_ENTRY FreeContextBuffer(
    PVOID pvContextBuffer
);

typedef SECURITY_STATUS (SEC_ENTRY *FREE_CONTEXT_BUFFER_FN)(
    PVOID
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY MakeSignature(
    PCtxtHandle phContext,
    unsigned long fQOP,
    PSecBufferDesc pMessage,
    unsigned long MessageSeqNo
);

typedef SECURITY_STATUS (SEC_ENTRY *MAKE_SIGNATURE_FN)(
    PCtxtHandle,
    unsigned long,
    PSecBufferDesc,
    unsigned long
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY VerifySignature(
    PCtxtHandle phContext,
    PSecBufferDesc pMessage,
    unsigned long MessageSeqNo,
    unsigned long *pfQOP
);

typedef SECURITY_STATUS (SEC_ENTRY *VERIFY_SIGNATURE_FN)(
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long,
    unsigned long *
);

#define SECQOP_WRAP_NO_ENCRYPT      0x80000001
#define SECQOP_WRAP_OOB_DATA        0x40000000

SECURITY_STATUS SEC_ENTRY EncryptMessage(
    PCtxtHandle phContext,
    unsigned long fQOP,
    PSecBufferDesc pMessage,
    unsigned long MessageSeqNo
);

typedef SECURITY_STATUS (SEC_ENTRY *ENCRYPT_MESSAGE_FN)(
    PCtxtHandle, unsigned long, PSecBufferDesc, unsigned long
);

SECURITY_STATUS SEC_ENTRY DecryptMessage(
    PCtxtHandle phContext,
    PSecBufferDesc pMessage,
    unsigned long MessageSeqNo,
    unsigned long *pfQOP
);

typedef SECURITY_STATUS (SEC_ENTRY *DECRYPT_MESSAGE_FN)(
    PCtxtHandle, PSecBufferDesc, unsigned long,
    unsigned long *
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY EnumerateSecurityPackagesW(
    unsigned long *pcPackages,
    PSecPkgInfoW *ppPackageInfo
);

typedef SECURITY_STATUS (SEC_ENTRY *ENUMERATE_SECURITY_PACKAGES_FN_W)(
    unsigned long *,
    PSecPkgInfoW *
);

SECURITY_STATUS SEC_ENTRY EnumerateSecurityPackagesA(
    unsigned long *pcPackages,
    PSecPkgInfoA *ppPackageInfo
);

typedef SECURITY_STATUS (SEC_ENTRY *ENUMERATE_SECURITY_PACKAGES_FN_A)(
    unsigned long *,
    PSecPkgInfoA *
);

#ifdef UNICODE
#define EnumerateSecurityPackages  EnumerateSecurityPackagesW
#define ENUMERATE_SECURITY_PACKAGES_FN  ENUMERATE_SECURITY_PACKAGES_FN_W
#else /* !UNICODE */
#define EnumerateSecurityPackages  EnumerateSecurityPackagesA
#define ENUMERATE_SECURITY_PACKAGES_FN  ENUMERATE_SECURITY_PACKAGES_FN_A
#endif /* !UNICODE */

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY QuerySecurityPackageInfoW(
#if ISSP_MODE == 0
    PSECURITY_STRING pPackageName,
#else /* ISSP_MODE != 0 */
    LPWSTR pszPackageName,
#endif /* ISSP_MODE != 0 */
    PSecPkgInfoW *ppPackageInfo
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_SECURITY_PACKAGE_INFO_FN_W)(
#if ISSP_MODE == 0
    PSECURITY_STRING,
#else /* ISSP_MODE != 0 */
    SEC_WCHAR *,
#endif /* ISSP_MODE != 0 */
    PSecPkgInfoW *
);

SECURITY_STATUS SEC_ENTRY QuerySecurityPackageInfoA(
    LPSTR pszPackageName,
    PSecPkgInfoA *ppPackageInfo
);

typedef SECURITY_STATUS (SEC_ENTRY *QUERY_SECURITY_PACKAGE_INFO_FN_A)(
    SEC_CHAR *,
    PSecPkgInfoA *
);

#ifdef UNICODE
#define QuerySecurityPackageInfo  QuerySecurityPackageInfoW
#define QUERY_SECURITY_PACKAGE_INFO_FN  QUERY_SECURITY_PACKAGE_INFO_FN_W
#else /* !UNICODE */
#define QuerySecurityPackageInfo  QuerySecurityPackageInfoA
#define QUERY_SECURITY_PACKAGE_INFO_FN  QUERY_SECURITY_PACKAGE_INFO_FN_A
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef enum _SecDelegationType {
    SecFull,
    SecService,
    SecTree,
    SecDirectory,
    SecObject
} SecDelegationType, *PSecDelegationType;

SECURITY_STATUS SEC_ENTRY DelegateSecurityContext(
    PCtxtHandle phContext,
#if ISSP_MODE == 0
    PSECURITY_STRING pTarget,
#else /* ISSP_MODE != 0 */
    LPSTR pszTarget,
#endif /* ISSP_MODE != 0 */
    SecDelegationType DelegationType,
    PTimeStamp pExpiry,
    PSecBuffer pPackageParameters,
    PSecBufferDesc pOutput
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY ExportSecurityContext(
    PCtxtHandle phContext,
    ULONG fFlags,
    PSecBuffer pPackedContext,
    void **pToken
);

typedef SECURITY_STATUS (SEC_ENTRY *EXPORT_SECURITY_CONTEXT_FN)(
    PCtxtHandle,
    ULONG,
    PSecBuffer,
    void **
);

KSECDDDECLSPEC SECURITY_STATUS SEC_ENTRY ImportSecurityContextW(
#if ISSP_MODE == 0
    PSECURITY_STRING pszPackage,
#else /* ISSP_MODE != 0 */
    LPWSTR pszPackage,
#endif /* ISSP_MODE != 0 */
    PSecBuffer pPackedContext,
    void *Token,
    PCtxtHandle phContext
);

typedef SECURITY_STATUS (SEC_ENTRY *IMPORT_SECURITY_CONTEXT_FN_W)(
#if ISSP_MODE == 0
    PSECURITY_STRING,
#else /* ISSP_MODE != 0 */
    SEC_WCHAR *,
#endif /* ISSP_MODE != 0 */
    PSecBuffer,
    VOID *,
    PCtxtHandle
);

SECURITY_STATUS SEC_ENTRY ImportSecurityContextA(
    LPSTR pszPackage,
    PSecBuffer pPackedContext,
    VOID *Token,
    PCtxtHandle phContext
);

typedef SECURITY_STATUS (SEC_ENTRY *IMPORT_SECURITY_CONTEXT_FN_A)(
    SEC_CHAR *,
    PSecBuffer,
    void *,
    PCtxtHandle
);

#ifdef UNICODE
#define ImportSecurityContext  ImportSecurityContextW
#define IMPORT_SECURITY_CONTEXT_FN  IMPORT_SECURITY_CONTEXT_FN_W
#else /* !UNICODE */
#define ImportSecurityContext  ImportSecurityContextA
#define IMPORT_SECURITY_CONTEXT_FN  IMPORT_SECURITY_CONTEXT_FN_A
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if ISSP_MODE == 0
KSECDDDECLSPEC NTSTATUS NTAPI SecMakeSPN(
    PUNICODE_STRING ServiceClass,
    PUNICODE_STRING ServiceName,
    PUNICODE_STRING InstanceName,
    USHORT InstancePort,
    PUNICODE_STRING Referrer,
    PUNICODE_STRING Spn,
    PULONG Length,
    BOOLEAN Allocate
);

#if OSVER(NTDDI_VERSION) > NTDD_WIN2K

KSECDDDECLSPEC NTSTATUS NTAPI SecMakeSPNEx(
    PUNICODE_STRING ServiceClass,
    PUNICODE_STRING ServiceName,
    PUNICODE_STRING InstanceName,
    USHORT InstancePort,
    PUNICODE_STRING Referrer,
    PUNICODE_STRING TargetInfo,
    PUNICODE_STRING Spn,
    PULONG Length,
    BOOLEAN Allocate
);

#if OSVER(NTDDI_VERSION) > NTDDI_WS03
KSECDDDECLSPEC NTSTATUS NTAPI SecMakeSPNEx2(
    PUNICODE_STRING ServiceClass,
    PUNICODE_STRING ServiceName,
    PUNICODE_STRING InstanceName,
    USHORT InstancePort,
    PUNICODE_STRING Referrer,
    PUNICODE_STRING InTargetInfo,
    PUNICODE_STRING Spn,
    PULONG TotalSize,
    BOOLEAN Allocate,
    BOOLEAN IsTargetInfoMarshaled
);
#endif /* OSVER(NTDDI_VERSION) > NTDDI_WS03 */

KSECDDDECLSPEC NTSTATUS SEC_ENTRY SecLookupAccountSid(
    PSID Sid,
    PULONG NameSize,
    PUNICODE_STRING NameBuffer,
    PULONG DomainSize,
    PUNICODE_STRING DomainBuffer,
    PSID_NAME_USE NameUse
);

KSECDDDECLSPEC NTSTATUS SEC_ENTRY SecLookupAccountName(
    PUNICODE_STRING Name,
    PULONG SidSize,
    PSID Sid,
    PSID_NAME_USE NameUse,
    PULONG DomainSize,
    PUNICODE_STRING ReferencedDomain
);

#endif /* OSVER(NTDDI_VERSION) > NTDD_WIN2K */

#if OSVER(NTDDI_VERSION) > NTDDI_WINXP
KSECDDDECLSPEC NTSTATUS SEC_ENTRY SecLookupWellKnownSid(
    WELL_KNOWN_SID_TYPE SidType,
    PSID Sid,
    ULONG SidBufferSize,
    PULONG SidSize
);
#endif /* OSVER(NTDDI_VERSION) > NTDDI_WINXP */

#endif /* ISSP_MODE == 0 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#define SECURITY_ENTRYPOINT_ANSIW "InitSecurityInterfaceW"
#define SECURITY_ENTRYPOINT_ANSIA "InitSecurityInterfaceA"
#define SECURITY_ENTRYPOINTW SEC_TEXT("InitSecurityInterfaceW")
#define SECURITY_ENTRYPOINTA SEC_TEXT("InitSecurityInterfaceA")
#define SECURITY_ENTRYPOINT16 "INITSECURITYINTERFACEA"

#ifdef SECURITY_WIN32
#ifdef UNICODE
#define SECURITY_ENTRYPOINT SECURITY_ENTRYPOINTW
#define SECURITY_ENTRYPOINT_ANSI SECURITY_ENTRYPOINT_ANSIW
#else /* !UNICODE */
#define SECURITY_ENTRYPOINT SECURITY_ENTRYPOINTA
#define SECURITY_ENTRYPOINT_ANSI SECURITY_ENTRYPOINT_ANSIA
#endif /* !UNICODE */
#else /* !SECURITY_WIN32 */
#define SECURITY_ENTRYPOINT SECURITY_ENTRYPOINT16
#define SECURITY_ENTRYPOINT_ANSI SECURITY_ENTRYPOINT16
#endif /* !SECURITY_WIN32 */

#define FreeCredentialHandle FreeCredentialsHandle

typedef struct _SECURITY_FUNCTION_TABLE_W {
    unsigned long dwVersion;
    ENUMERATE_SECURITY_PACKAGES_FN_W EnumerateSecurityPackagesW;
    QUERY_CREDENTIALS_ATTRIBUTES_FN_W QueryCredentialsAttributesW;
    ACQUIRE_CREDENTIALS_HANDLE_FN_W AcquireCredentialsHandleW;
    FREE_CREDENTIALS_HANDLE_FN FreeCredentialsHandle;
    void *Reserved2;
    INITIALIZE_SECURITY_CONTEXT_FN_W InitializeSecurityContextW;
    ACCEPT_SECURITY_CONTEXT_FN AcceptSecurityContext;
    COMPLETE_AUTH_TOKEN_FN CompleteAuthToken;
    DELETE_SECURITY_CONTEXT_FN DeleteSecurityContext;
    APPLY_CONTROL_TOKEN_FN ApplyControlToken;
    QUERY_CONTEXT_ATTRIBUTES_FN_W QueryContextAttributesW;
    IMPERSONATE_SECURITY_CONTEXT_FN ImpersonateSecurityContext;
    REVERT_SECURITY_CONTEXT_FN RevertSecurityContext;
    MAKE_SIGNATURE_FN MakeSignature;
    VERIFY_SIGNATURE_FN VerifySignature;
    FREE_CONTEXT_BUFFER_FN FreeContextBuffer;
    QUERY_SECURITY_PACKAGE_INFO_FN_W QuerySecurityPackageInfoW;
    void *Reserved3;
    void *Reserved4;
    EXPORT_SECURITY_CONTEXT_FN ExportSecurityContext;
    IMPORT_SECURITY_CONTEXT_FN_W ImportSecurityContextW;
    ADD_CREDENTIALS_FN_W AddCredentialsW ;
    void *Reserved8;
    QUERY_SECURITY_CONTEXT_TOKEN_FN QuerySecurityContextToken;
    ENCRYPT_MESSAGE_FN EncryptMessage;
    DECRYPT_MESSAGE_FN DecryptMessage;
#if OSVER(NTDDI_VERSION) > NTDDI_WIN2K
    SET_CONTEXT_ATTRIBUTES_FN_W SetContextAttributesW;
#endif /* OSVER(NTDDI_VERSION) > NTDDI_WIN2K */
#if NTDDI_VERSION > NTDDI_WS03SP1
    SET_CREDENTIALS_ATTRIBUTES_FN_W SetCredentialsAttributesW;
#endif /* NTDDI_VERSION > NTDDI_WS03SP1 */
#if ISSP_MODE != 0
    CHANGE_PASSWORD_FN_W ChangeAccountPasswordW;
#else
    void *Reserved9;
#endif
#if NTDDI_VERSION > NTDDI_WINBLUE
    QUERY_CONTEXT_ATTRIBUTES_EX_FN_W QueryContextAttributesExW;
    QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_W QueryCredentialsAttributesExW;
#endif /* NTDDI_VERSION > NTDDI_WINBLUE */
} SecurityFunctionTableW, *PSecurityFunctionTableW;

typedef struct _SECURITY_FUNCTION_TABLE_A {
    unsigned long dwVersion;
    ENUMERATE_SECURITY_PACKAGES_FN_A EnumerateSecurityPackagesA;
    QUERY_CREDENTIALS_ATTRIBUTES_FN_A QueryCredentialsAttributesA;
    ACQUIRE_CREDENTIALS_HANDLE_FN_A AcquireCredentialsHandleA;
    FREE_CREDENTIALS_HANDLE_FN FreeCredentialHandle;
    void *Reserved2;
    INITIALIZE_SECURITY_CONTEXT_FN_A InitializeSecurityContextA;
    ACCEPT_SECURITY_CONTEXT_FN AcceptSecurityContext;
    COMPLETE_AUTH_TOKEN_FN CompleteAuthToken;
    DELETE_SECURITY_CONTEXT_FN DeleteSecurityContext;
    APPLY_CONTROL_TOKEN_FN ApplyControlToken;
    QUERY_CONTEXT_ATTRIBUTES_FN_A QueryContextAttributesA;
    IMPERSONATE_SECURITY_CONTEXT_FN ImpersonateSecurityContext;
    REVERT_SECURITY_CONTEXT_FN RevertSecurityContext;
    MAKE_SIGNATURE_FN MakeSignature;
    VERIFY_SIGNATURE_FN VerifySignature;
    FREE_CONTEXT_BUFFER_FN FreeContextBuffer;
    QUERY_SECURITY_PACKAGE_INFO_FN_A QuerySecurityPackageInfoA;
    void *Reserved3;
    void *Reserved4;
    EXPORT_SECURITY_CONTEXT_FN ExportSecurityContext;
    IMPORT_SECURITY_CONTEXT_FN_A ImportSecurityContextA;
    ADD_CREDENTIALS_FN_A AddCredentialsA ;
    void *Reserved8;
    QUERY_SECURITY_CONTEXT_TOKEN_FN QuerySecurityContextToken;
    ENCRYPT_MESSAGE_FN EncryptMessage;
    DECRYPT_MESSAGE_FN DecryptMessage;
    SET_CONTEXT_ATTRIBUTES_FN_A SetContextAttributesA;
    SET_CREDENTIALS_ATTRIBUTES_FN_A SetCredentialsAttributesA;
#if ISSP_MODE != 0
    CHANGE_PASSWORD_FN_A ChangeAccountPasswordA;
#else
    void *Reserved9;
#endif
#if NTDDI_VERSION > NTDDI_WINBLUE
    QUERY_CONTEXT_ATTRIBUTES_EX_FN_A QueryContextAttributesExA;
    QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_A QueryCredentialsAttributesExA;
#endif /* NTDDI_VERSION > NTDDI_WINBLUE */
} SecurityFunctionTableA, *PSecurityFunctionTableA;

#ifdef UNICODE
#define SecurityFunctionTable  SecurityFunctionTableW
#define PSecurityFunctionTable  PSecurityFunctionTableW
#else /* !UNICODE */
#define SecurityFunctionTable  SecurityFunctionTableA
#define PSecurityFunctionTable  PSecurityFunctionTableA
#endif /* !UNICODE */

#define SECURITY_

#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION     1
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_2   2
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_3   3
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_4   4
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_5   5

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

PSecurityFunctionTableA SEC_ENTRY InitSecurityInterfaceA(void);

typedef PSecurityFunctionTableA(SEC_ENTRY *INIT_SECURITY_INTERFACE_A)(void);

KSECDDDECLSPEC PSecurityFunctionTableW SEC_ENTRY InitSecurityInterfaceW(void);

typedef PSecurityFunctionTableW(SEC_ENTRY *INIT_SECURITY_INTERFACE_W)(void);

#ifdef UNICODE
#define InitSecurityInterface  InitSecurityInterfaceW
#define INIT_SECURITY_INTERFACE  INIT_SECURITY_INTERFACE_W
#else /* !UNICODE */
#define InitSecurityInterface  InitSecurityInterfaceA
#define INIT_SECURITY_INTERFACE  INIT_SECURITY_INTERFACE_A
#endif /* !UNICODE */

#ifdef SECURITY_WIN32

SECURITY_STATUS SEC_ENTRY SaslEnumerateProfilesA(
    LPSTR *ProfileList,
    ULONG *ProfileCount
);
SECURITY_STATUS SEC_ENTRY SaslEnumerateProfilesW(
    LPWSTR *ProfileList,
    ULONG *ProfileCount
);
#ifdef UNICODE
#define SaslEnumerateProfiles   SaslEnumerateProfilesW
#else /* !UNICODE */
#define SaslEnumerateProfiles   SaslEnumerateProfilesA
#endif /* !UNICODE */

SECURITY_STATUS SEC_ENTRY SaslGetProfilePackageA(
    LPSTR ProfileName,
    PSecPkgInfoA *PackageInfo
);
SECURITY_STATUS SEC_ENTRY SaslGetProfilePackageW(
    LPWSTR ProfileName,
    PSecPkgInfoW *PackageInfo
);
#ifdef UNICODE
#define SaslGetProfilePackage   SaslGetProfilePackageW
#else /* !UNICODE */
#define SaslGetProfilePackage   SaslGetProfilePackageA
#endif /* !UNICODE */

SECURITY_STATUS SEC_ENTRY SaslIdentifyPackageA(
    PSecBufferDesc pInput,
    PSecPkgInfoA *PackageInfo
);
SECURITY_STATUS SEC_ENTRY SaslIdentifyPackageW(
    PSecBufferDesc pInput,
    PSecPkgInfoW *PackageInfo
);
#ifdef UNICODE
#define SaslIdentifyPackage SaslIdentifyPackageW
#else /* !UNICODE */
#define SaslIdentifyPackage SaslIdentifyPackageA
#endif /* !UNICODE */

SECURITY_STATUS SEC_ENTRY SaslInitializeSecurityContextA(
    PCredHandle phCredential,
    PCtxtHandle phContext,
    LPSTR pszTargetName,
    unsigned long fContextReq,
    unsigned long Reserved1,
    unsigned long TargetDataRep,
    PSecBufferDesc pInput,
    unsigned long Reserved2,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);
SECURITY_STATUS SEC_ENTRY SaslInitializeSecurityContextW(
    PCredHandle phCredential,
    PCtxtHandle phContext,
    LPWSTR pszTargetName,
    unsigned long fContextReq,
    unsigned long Reserved1,
    unsigned long TargetDataRep,
    PSecBufferDesc pInput,
    unsigned long Reserved2,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);
#ifdef UNICODE
#define SaslInitializeSecurityContext   SaslInitializeSecurityContextW
#else /* !UNICODE */
#define SaslInitializeSecurityContext   SaslInitializeSecurityContextA
#endif /* !UNICODE */

SECURITY_STATUS SEC_ENTRY SaslAcceptSecurityContext(
    PCredHandle phCredential,
    PCtxtHandle phContext,
    PSecBufferDesc pInput,
    unsigned long fContextReq,
    unsigned long TargetDataRep,
    PCtxtHandle phNewContext,
    PSecBufferDesc pOutput,
    unsigned long *pfContextAttr,
    PTimeStamp ptsExpiry
);

#define SASL_OPTION_SEND_SIZE           1
#define SASL_OPTION_RECV_SIZE           2
#define SASL_OPTION_AUTHZ_STRING        3
#define SASL_OPTION_AUTHZ_PROCESSING    4

typedef enum _SASL_AUTHZID_STATE {
    Sasl_AuthZIDForbidden,
    Sasl_AuthZIDProcessed
} SASL_AUTHZID_STATE ;

SECURITY_STATUS SEC_ENTRY SaslSetContextOption(
    PCtxtHandle ContextHandle,
    ULONG Option,
    PVOID Value,
    ULONG Size
);

SECURITY_STATUS SEC_ENTRY SaslGetContextOption(
    PCtxtHandle ContextHandle,
    ULONG Option,
    PVOID Value,
    ULONG Size,
    PULONG Needed
);

#endif /* SECURITY_WIN32 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#ifndef _AUTH_IDENTITY_EX2_DEFINED
#define _AUTH_IDENTITY_EX2_DEFINED

#define SEC_WINNT_AUTH_IDENTITY_VERSION_2 0x201

typedef struct _SEC_WINNT_AUTH_IDENTITY_EX2 {
    unsigned long Version;
    unsigned short cbHeaderLength;
    unsigned long cbStructureLength;
    unsigned long UserOffset;
    unsigned short UserLength;
    unsigned long DomainOffset;
    unsigned short DomainLength;
    unsigned long PackedCredentialsOffset;
    unsigned short PackedCredentialsLength;
    unsigned long Flags;
    unsigned long PackageListOffset;
    unsigned short PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EX2, *PSEC_WINNT_AUTH_IDENTITY_EX2;

#endif /* !_AUTH_IDENTITY_EX2_DEFINED */

#ifndef _AUTH_IDENTITY_DEFINED
#define _AUTH_IDENTITY_DEFINED

#define SEC_WINNT_AUTH_IDENTITY_ANSI    0x1
#define SEC_WINNT_AUTH_IDENTITY_UNICODE 0x2

typedef struct _SEC_WINNT_AUTH_IDENTITY_W {
    unsigned short *User;
    unsigned long UserLength;
    unsigned short *Domain;
    unsigned long DomainLength;
    unsigned short *Password;
    unsigned long PasswordLength;
    unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W, *PSEC_WINNT_AUTH_IDENTITY_W;

#define _AUTH_IDENTITY_A_DEFINED

typedef struct _SEC_WINNT_AUTH_IDENTITY_A {
    unsigned char *User;
    unsigned long UserLength;
    unsigned char *Domain;
    unsigned long DomainLength;
    unsigned char *Password;
    unsigned long PasswordLength;
    unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_A, *PSEC_WINNT_AUTH_IDENTITY_A;

#ifdef UNICODE
#define SEC_WINNT_AUTH_IDENTITY SEC_WINNT_AUTH_IDENTITY_W
#define PSEC_WINNT_AUTH_IDENTITY PSEC_WINNT_AUTH_IDENTITY_W
#define _SEC_WINNT_AUTH_IDENTITY _SEC_WINNT_AUTH_IDENTITY_W
#else /* !UNICODE */
#define SEC_WINNT_AUTH_IDENTITY SEC_WINNT_AUTH_IDENTITY_A
#define PSEC_WINNT_AUTH_IDENTITY PSEC_WINNT_AUTH_IDENTITY_A
#define _SEC_WINNT_AUTH_IDENTITY _SEC_WINNT_AUTH_IDENTITY_A
#endif /* !UNICODE */

#endif /* !_AUTH_IDENTITY_DEFINED */

#ifndef SEC_WINNT_AUTH_IDENTITY_VERSION
#define SEC_WINNT_AUTH_IDENTITY_VERSION  0x200

typedef struct _SEC_WINNT_AUTH_IDENTITY_EXW {
    unsigned long Version;
    unsigned long Length;
    unsigned short *User;
    unsigned long UserLength;
    unsigned short *Domain;
    unsigned long DomainLength;
    unsigned short *Password;
    unsigned long PasswordLength;
    unsigned long Flags;
    unsigned short *PackageList;
    unsigned long PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EXW, *PSEC_WINNT_AUTH_IDENTITY_EXW;

typedef struct _SEC_WINNT_AUTH_IDENTITY_EXA {
    unsigned long Version;
    unsigned long Length;
    unsigned char *User;
    unsigned long UserLength;
    unsigned char *Domain;
    unsigned long DomainLength;
    unsigned char *Password;
    unsigned long PasswordLength;
    unsigned long Flags;
    unsigned char *PackageList;
    unsigned long PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EXA, *PSEC_WINNT_AUTH_IDENTITY_EXA;

#ifdef UNICODE
#define SEC_WINNT_AUTH_IDENTITY_EX  SEC_WINNT_AUTH_IDENTITY_EXW
#define PSEC_WINNT_AUTH_IDENTITY_EX PSEC_WINNT_AUTH_IDENTITY_EXW
#else /* !UNICODE */
#define SEC_WINNT_AUTH_IDENTITY_EX  SEC_WINNT_AUTH_IDENTITY_EXA
#endif /* !UNICODE */

#endif /* !SEC_WINNT_AUTH_IDENTITY_VERSION */

#ifndef _AUTH_IDENTITY_INFO_DEFINED
#define _AUTH_IDENTITY_INFO_DEFINED

typedef union _SEC_WINNT_AUTH_IDENTITY_INFO {
    SEC_WINNT_AUTH_IDENTITY_EXW AuthIdExw;
    SEC_WINNT_AUTH_IDENTITY_EXA AuthIdExa;
    SEC_WINNT_AUTH_IDENTITY_A AuthId_a;
    SEC_WINNT_AUTH_IDENTITY_W AuthId_w;
    SEC_WINNT_AUTH_IDENTITY_EX2 AuthIdEx2;
} SEC_WINNT_AUTH_IDENTITY_INFO, *PSEC_WINNT_AUTH_IDENTITY_INFO;

#define SEC_WINNT_AUTH_IDENTITY_FLAGS_PROCESS_ENCRYPTED 0x10
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_SYSTEM_PROTECTED  0x20
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_USER_PROTECTED    0x40
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_SYSTEM_ENCRYPTED  0x80

#define SEC_WINNT_AUTH_IDENTITY_FLAGS_RESERVED       0x10000
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_NULL_USER      0x20000
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_NULL_DOMAIN    0x40000
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_ID_PROVIDER    0x80000

#define SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_USE_MASK              0xFF000000
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_CREDPROV_DO_NOT_SAVE  0x80000000
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_SAVE_CRED_BY_CALLER   SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_CREDPROV_DO_NOT_SAVE
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_SAVE_CRED_CHECKED     0x40000000
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_NO_CHECKBOX           0x20000000
#define SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_CREDPROV_DO_NOT_LOAD  0x10000000

#define SEC_WINNT_AUTH_IDENTITY_FLAGS_VALID_SSPIPFC_FLAGS   \
    (SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_CREDPROV_DO_NOT_SAVE | \
     SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_SAVE_CRED_CHECKED | \
     SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_NO_CHECKBOX | \
     SEC_WINNT_AUTH_IDENTITY_FLAGS_SSPIPFC_CREDPROV_DO_NOT_LOAD)

#endif /* !_AUTH_IDENTITY_INFO_DEFINED */

#ifndef _SSPIPFC_NONE_
typedef PVOID PSEC_WINNT_AUTH_IDENTITY_OPAQUE;
#else /* _SSPIPFC_NONE_ */
typedef PSEC_WINNT_AUTH_IDENTITY_INFO PSEC_WINNT_AUTH_IDENTITY_OPAQUE;
#endif /* _SSPIPFC_NONE_ */

#define SSPIPFC_CREDPROV_DO_NOT_SAVE    0x00000001
#define SSPIPFC_SAVE_CRED_BY_CALLER     SSPIPFC_CREDPROV_DO_NOT_SAVE
#define SSPIPFC_NO_CHECKBOX             0x00000002
#define SSPIPFC_CREDPROV_DO_NOT_LOAD    0x00000004
#define SSPIPFC_USE_CREDUIBROKER        0x00000008

#define SSPIPFC_VALID_FLAGS (SSPIPFC_CREDPROV_DO_NOT_SAVE | SSPIPFC_NO_CHECKBOX | SSPIPFC_CREDPROV_DO_NOT_LOAD | SSPIPFC_USE_CREDUIBROKER)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _SSPIPFC_NONE_
unsigned long SEC_ENTRY SspiPromptForCredentialsW(
    PCWSTR pszTargetName,
#ifdef _CREDUI_INFO_DEFINED
    PCREDUI_INFOW pUiInfo,
#else /* !_CREDUI_INFO_DEFINED */
    PVOID pUiInfo,
#endif /* !_CREDUI_INFO_DEFINED */
    unsigned long dwAuthError,
    PCWSTR pszPackage,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE pInputAuthIdentity,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity,
    int *pfSave,
    unsigned long dwFlags
);

unsigned long SEC_ENTRY SspiPromptForCredentialsA(
    PCSTR pszTargetName,
#ifdef _CREDUI_INFO_DEFINED
    PCREDUI_INFOA pUiInfo,
#else /* !_CREDUI_INFO_DEFINED */
    PVOID pUiInfo,
#endif /* !_CREDUI_INFO_DEFINED */
    unsigned long dwAuthError,
    PCSTR pszPackage,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE pInputAuthIdentity,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity,
    int *pfSave,
    unsigned long dwFlags
);
#endif /* !_SSPIPFC_NONE_ */

#ifdef UNICODE
#define SspiPromptForCredentials   SspiPromptForCredentialsW
#else /* !UNICODE */
#define SspiPromptForCredentials   SspiPromptForCredentialsA
#endif /* !UNICODE */

#ifdef _SEC_WINNT_AUTH_TYPES

typedef struct _SEC_WINNT_AUTH_BYTE_VECTOR {
    unsigned long ByteArrayOffset;
    unsigned short ByteArrayLength;
} SEC_WINNT_AUTH_BYTE_VECTOR, *PSEC_WINNT_AUTH_BYTE_VECTOR;

typedef struct _SEC_WINNT_AUTH_DATA {
    GUID CredType;
    SEC_WINNT_AUTH_BYTE_VECTOR CredData;
} SEC_WINNT_AUTH_DATA, *PSEC_WINNT_AUTH_DATA;

typedef struct _SEC_WINNT_AUTH_PACKED_CREDENTIALS {
    unsigned short cbHeaderLength;
    unsigned short cbStructureLength;
    SEC_WINNT_AUTH_DATA AuthData;
} SEC_WINNT_AUTH_PACKED_CREDENTIALS, *PSEC_WINNT_AUTH_PACKED_CREDENTIALS;

EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_PASSWORD = { 0x28bfc32f, 0x10f6, 0x4738, { 0x98, 0xd1, 0x1a, 0xc0, 0x61, 0xdf, 0x71, 0x6a } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_CERT = { 0x235f69ad, 0x73fb, 0x4dbc, { 0x82, 0x3, 0x6, 0x29, 0xe7, 0x39, 0x33, 0x9b } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_CREDMAN_CERT = { 0x7cb72412, 0x1016, 0x491a, { 0x8c, 0x87, 0x4d, 0x2a, 0xa1, 0xb7, 0xdd, 0x3a } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_NGC = { 0x10a47879, 0x5ebf, 0x4b85, { 0xbd, 0x8d, 0xc2, 0x1b, 0xb4, 0xf4, 0x9c, 0x8a } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_FIDO = { 0x32e8f8d7, 0x7871, 0x4bcc, { 0x83, 0xc5, 0x46, 0xf, 0x66, 0xc6, 0x13, 0x5c } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_KEYTAB = { 0xd587aae8, 0xf78f, 0x4455, { 0xa1, 0x12, 0xc9, 0x34, 0xbe, 0xee, 0x7c, 0xe1 } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_DELEGATION_TOKEN = { 0x12e52e0f, 0x6f9b, 0x4f83, { 0x90, 0x20, 0x9d, 0xe4, 0x2b, 0x22, 0x62, 0x67 } };

typedef struct _SEC_WINNT_AUTH_DATA_PASSWORD {
    SEC_WINNT_AUTH_BYTE_VECTOR UnicodePassword;
} SEC_WINNT_AUTH_DATA_PASSWORD, PSEC_WINNT_AUTH_DATA_PASSWORD;

EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_CSP_DATA = { 0x68fd9879, 0x79c, 0x4dfe, { 0x82, 0x81, 0x57, 0x8a, 0xad, 0xc1, 0xc1, 0x0 } };
EXTERN_C __declspec(selectany) const GUID SEC_WINNT_AUTH_DATA_TYPE_SMARTCARD_CONTEXTS = { 0xb86c4ff3, 0x49d7, 0x4dc4, { 0xb5, 0x60, 0xb1, 0x16, 0x36, 0x85, 0xb2, 0x36 } };

typedef struct _SEC_WINNT_AUTH_CERTIFICATE_DATA {
    unsigned short cbHeaderLength;
    unsigned short cbStructureLength;
    SEC_WINNT_AUTH_BYTE_VECTOR Certificate;
} SEC_WINNT_AUTH_CERTIFICATE_DATA, *PSEC_WINNT_AUTH_CERTIFICATE_DATA;

typedef struct _SEC_WINNT_AUTH_NGC_DATA {
    LUID LogonId;
    unsigned long Flags;
    SEC_WINNT_AUTH_BYTE_VECTOR CspInfo;
    SEC_WINNT_AUTH_BYTE_VECTOR UserIdKeyAuthTicket;
    SEC_WINNT_AUTH_BYTE_VECTOR DecryptionKeyName;
    SEC_WINNT_AUTH_BYTE_VECTOR DecryptionKeyAuthTicket;
} SEC_WINNT_AUTH_NGC_DATA, *PSEC_WINNT_AUTH_NGC_DATA;

#define NGC_DATA_FLAG_KERB_CERTIFICATE_LOGON_FLAG_CHECK_DUPLICATES     (0x1)
#define NGC_DATA_FLAG_KERB_CERTIFICATE_LOGON_FLAG_USE_CERTIFICATE_INFO (0x2)
#define NGC_DATA_FLAG_IS_SMARTCARD_DATA                                (0x4)
#define NGC_DATA_FLAG_IS_CLOUD_TRUST_CRED                              (0x8)

typedef struct _SEC_WINNT_AUTH_DATA_TYPE_SMARTCARD_CONTEXTS_DATA {
    PVOID pcc;
    PVOID hProv;
    LPWSTR pwszECDHKeyName;
} SEC_WINNT_AUTH_DATA_TYPE_SMARTCARD_CONTEXTS_DATA, *PSEC_WINNT_AUTH_DATA_TYPE_SMARTCARD_CONTEXTS_DATA;

typedef struct _SEC_WINNT_AUTH_FIDO_DATA {
    unsigned short cbHeaderLength;
    unsigned short cbStructureLength;
    SEC_WINNT_AUTH_BYTE_VECTOR Secret;
    SEC_WINNT_AUTH_BYTE_VECTOR NewSecret;
    SEC_WINNT_AUTH_BYTE_VECTOR EncryptedNewSecret;
    SEC_WINNT_AUTH_BYTE_VECTOR NetworkLogonBuffer;
    ULONG64 ulSignatureCount;
} SEC_WINNT_AUTH_FIDO_DATA, *PSEC_WINNT_AUTH_FIDO_DATA;

typedef struct _SEC_WINNT_CREDUI_CONTEXT_VECTOR {
    ULONG CredUIContextArrayOffset;
    USHORT CredUIContextCount;
} SEC_WINNT_CREDUI_CONTEXT_VECTOR, *PSEC_WINNT_CREDUI_CONTEXT_VECTOR;

typedef struct _SEC_WINNT_AUTH_SHORT_VECTOR {
    ULONG ShortArrayOffset;
    USHORT ShortArrayCount;
} SEC_WINNT_AUTH_SHORT_VECTOR, *PSEC_WINNT_AUTH_SHORT_VECTOR;

SECURITY_STATUS SEC_ENTRY SspiGetCredUIContext(
    HANDLE ContextHandle,
    GUID* CredType,
    LUID *LogonId,
    PSEC_WINNT_CREDUI_CONTEXT_VECTOR* CredUIContexts,
    HANDLE *TokenHandle
);

SECURITY_STATUS SEC_ENTRY SspiUpdateCredentials(
    HANDLE ContextHandle,
    GUID* CredType,
    ULONG FlatCredUIContextLength,
    PUCHAR FlatCredUIContext
);

typedef struct _CREDUIWIN_MARSHALED_CONTEXT {
    GUID StructureType;
    USHORT cbHeaderLength;
    LUID LogonId;
    GUID MarshaledDataType;
    ULONG MarshaledDataOffset;
    USHORT MarshaledDataLength;
} CREDUIWIN_MARSHALED_CONTEXT, *PCREDUIWIN_MARSHALED_CONTEXT;

typedef struct _SEC_WINNT_CREDUI_CONTEXT {
    USHORT cbHeaderLength;
    HANDLE CredUIContextHandle;
#ifdef _CREDUI_INFO_DEFINED
    PCREDUI_INFOW UIInfo;
#else /* !_CREDUI_INFO_DEFINED */
    PVOID UIInfo;
#endif /* !_CREDUI_INFO_DEFINED */
    ULONG dwAuthError;
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE pInputAuthIdentity;
    PUNICODE_STRING TargetName;
} SEC_WINNT_CREDUI_CONTEXT, *PSEC_WINNT_CREDUI_CONTEXT;

EXTERN_C __declspec(selectany) const GUID CREDUIWIN_STRUCTURE_TYPE_SSPIPFC =
    { 0x3c3e93d9, 0xd96b, 0x49b5, { 0x94, 0xa7, 0x45, 0x85, 0x92, 0x8, 0x83, 0x37 } };

EXTERN_C __declspec(selectany) const GUID SSPIPFC_STRUCTURE_TYPE_CREDUI_CONTEXT =
    { 0xc2fffe6f, 0x503d, 0x4c3d, { 0xa9, 0x5e, 0xbc, 0xe8, 0x21, 0x21, 0x3d, 0x44 } };

typedef struct _SEC_WINNT_AUTH_PACKED_CREDENTIALS_EX {
    unsigned short cbHeaderLength;
    unsigned long Flags;
    SEC_WINNT_AUTH_BYTE_VECTOR PackedCredentials;
    SEC_WINNT_AUTH_SHORT_VECTOR PackageList;
} SEC_WINNT_AUTH_PACKED_CREDENTIALS_EX, *PSEC_WINNT_AUTH_PACKED_CREDENTIALS_EX;

SECURITY_STATUS SEC_ENTRY SspiUnmarshalCredUIContext(
    PUCHAR MarshaledCredUIContext,
    ULONG MarshaledCredUIContextLength,
    PSEC_WINNT_CREDUI_CONTEXT *CredUIContext
);

#endif /* _SEC_WINNT_AUTH_TYPES */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

SECURITY_STATUS SEC_ENTRY SspiPrepareForCredRead(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    PCWSTR pszTargetName,
    PULONG pCredmanCredentialType,
    PCWSTR* ppszCredmanTargetName
);

SECURITY_STATUS SEC_ENTRY SspiPrepareForCredWrite(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    PCWSTR pszTargetName,
    PULONG pCredmanCredentialType,
    PCWSTR* ppszCredmanTargetName,
    PCWSTR *ppszCredmanUserName,
    PUCHAR *ppCredentialBlob,
    PULONG pCredentialBlobSize
);

#define SEC_WINNT_AUTH_IDENTITY_ENCRYPT_SAME_LOGON        0x1
#define SEC_WINNT_AUTH_IDENTITY_ENCRYPT_SAME_PROCESS      0x2
#define SEC_WINNT_AUTH_IDENTITY_ENCRYPT_FOR_SYSTEM        0x4

SECURITY_STATUS SEC_ENTRY SspiEncryptAuthIdentity(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
);

SECURITY_STATUS SEC_ENTRY SspiEncryptAuthIdentityEx(
    ULONG Options,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
);

SECURITY_STATUS SEC_ENTRY SspiDecryptAuthIdentity(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE EncryptedAuthData
);

SECURITY_STATUS SEC_ENTRY SspiDecryptAuthIdentityEx(
    ULONG Options,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE EncryptedAuthData
);

BOOLEAN SEC_ENTRY SspiIsAuthIdentityEncrypted(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE EncryptedAuthData
);

#if (NTDDI_VERSION >= NTDDI_WIN7)

SECURITY_STATUS SEC_ENTRY SspiEncodeAuthIdentityAsStrings(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE pAuthIdentity,
    PCWSTR* ppszUserName,
    PCWSTR *ppszDomainName,
    PCWSTR* ppszPackedCredentialsString
);

SECURITY_STATUS SEC_ENTRY SspiValidateAuthIdentity(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
);

SECURITY_STATUS SEC_ENTRY SspiCopyAuthIdentity(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE *AuthDataCopy
);

void SEC_ENTRY SspiFreeAuthIdentity(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
);

void SEC_ENTRY SspiZeroAuthIdentity(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
);

void SEC_ENTRY SspiLocalFree(
    PVOID DataBuffer
);

SECURITY_STATUS SEC_ENTRY SspiEncodeStringsAsAuthIdentity(
    PCWSTR pszUserName,
    PCWSTR pszDomainName,
    PCWSTR pszPackedCredentialsString,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE *ppAuthIdentity
);

SECURITY_STATUS SEC_ENTRY SspiCompareAuthIdentities(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity1,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity2,
    PBOOLEAN SameSuppliedUser,
    PBOOLEAN SameSuppliedIdentity
);

SECURITY_STATUS SEC_ENTRY SspiMarshalAuthIdentity(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    unsigned long *AuthIdentityLength,
    char **AuthIdentityByteArray
);

SECURITY_STATUS SEC_ENTRY SspiUnmarshalAuthIdentity(
    unsigned long AuthIdentityLength,
    char *AuthIdentityByteArray,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (NTDDI_VERSION >= NTDDI_WIN7)
BOOLEAN SEC_ENTRY SspiIsPromptingNeeded(
    unsigned long ErrorOrNtStatus
);
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (NTDDI_VERSION >= NTDDI_WIN7)

SECURITY_STATUS SEC_ENTRY SspiGetTargetHostName(
    PCWSTR pszTargetName,
    PWSTR* pszHostName
);

SECURITY_STATUS SEC_ENTRY SspiExcludePackage(
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    PCWSTR pszPackageName,
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE *ppNewAuthIdentity
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#define SEC_WINNT_AUTH_IDENTITY_MARSHALLED      0x4
#define SEC_WINNT_AUTH_IDENTITY_ONLY            0x8

SECURITY_STATUS SEC_ENTRY SspiSetChannelBindingFlags(
    SecPkgContext_Bindings *pBindings,
    unsigned long flags
);

typedef struct _SECURITY_PACKAGE_OPTIONS {
    unsigned long Size;
    unsigned long Type;
    unsigned long Flags;
    unsigned long SignatureSize;
    void *Signature;
} SECURITY_PACKAGE_OPTIONS, *PSECURITY_PACKAGE_OPTIONS;

#define SECPKG_OPTIONS_TYPE_UNKNOWN 0
#define SECPKG_OPTIONS_TYPE_LSA     1
#define SECPKG_OPTIONS_TYPE_SSPI    2

#define SECPKG_OPTIONS_PERMANENT    0x00000001

SECURITY_STATUS SEC_ENTRY AddSecurityPackageA(
    LPSTR pszPackageName,
    PSECURITY_PACKAGE_OPTIONS pOptions
);
SECURITY_STATUS SEC_ENTRY AddSecurityPackageW(
    LPWSTR pszPackageName,
    PSECURITY_PACKAGE_OPTIONS pOptions
);
#ifdef UNICODE
#define AddSecurityPackage  AddSecurityPackageW
#else /* !UNICODE */
#define AddSecurityPackage  AddSecurityPackageA
#endif /* !UNICODE */

SECURITY_STATUS SEC_ENTRY DeleteSecurityPackageA(
    LPSTR pszPackageName
);
SECURITY_STATUS SEC_ENTRY DeleteSecurityPackageW(
    LPWSTR pszPackageName
);
#ifdef UNICODE
#define DeleteSecurityPackage   DeleteSecurityPackageW
#else /* !UNICODE */
#define DeleteSecurityPackage   DeleteSecurityPackageA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _SSPI_H */
