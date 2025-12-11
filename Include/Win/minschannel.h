#ifndef _MINSCHANNEL_H
#define _MINSCHANNEL_H

#if __POCC__ >= 500
#pragma once
#endif

/* MIN SCHANNEL Security Provider definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

#define SECPKG_ATTR_ISSUER_LIST  0x50
#define SECPKG_ATTR_REMOTE_CRED  0x51
#define SECPKG_ATTR_LOCAL_CRED  0x52
#define SECPKG_ATTR_REMOTE_CERT_CONTEXT  0x53
#define SECPKG_ATTR_LOCAL_CERT_CONTEXT  0x54
#define SECPKG_ATTR_ROOT_STORE  0x55
#define SECPKG_ATTR_SUPPORTED_ALGS  0x56
#define SECPKG_ATTR_CIPHER_STRENGTHS  0x57
#define SECPKG_ATTR_SUPPORTED_PROTOCOLS  0x58
#define SECPKG_ATTR_ISSUER_LIST_EX  0x59
#define SECPKG_ATTR_CONNECTION_INFO  0x5a
#define SECPKG_ATTR_EAP_KEY_BLOCK  0x5b
#define SECPKG_ATTR_MAPPED_CRED_ATTR  0x5c
#define SECPKG_ATTR_SESSION_INFO  0x5d
#define SECPKG_ATTR_APP_DATA  0x5e
#define SECPKG_ATTR_REMOTE_CERTIFICATES  0x5F
#define SECPKG_ATTR_CLIENT_CERT_POLICY  0x60
#define SECPKG_ATTR_CC_POLICY_RESULT  0x61
#define SECPKG_ATTR_USE_NCRYPT  0x62
#define SECPKG_ATTR_LOCAL_CERT_INFO  0x63
#define SECPKG_ATTR_CIPHER_INFO  0x64
#define SECPKG_ATTR_EAP_PRF_INFO  0x65
#define SECPKG_ATTR_SUPPORTED_SIGNATURES 0x66
#define SECPKG_ATTR_REMOTE_CERT_CHAIN  0x67
#define SECPKG_ATTR_UI_INFO  0x68
#define SECPKG_ATTR_EARLY_START  0x69
#define SECPKG_ATTR_KEYING_MATERIAL_INFO 0x6a
#define SECPKG_ATTR_KEYING_MATERIAL  0x6b
#define SECPKG_ATTR_SRTP_PARAMETERS  0x6c
#define SECPKG_ATTR_TOKEN_BINDING  0x6d
#define SECPKG_ATTR_CONNECTION_INFO_EX  0x6e
#define SECPKG_ATTR_KEYING_MATERIAL_TOKEN_BINDING  0x6f
#define SECPKG_ATTR_KEYING_MATERIAL_INPROC  0x70
#define SECPKG_ATTR_CERT_CHECK_RESULT  0x71
#define SECPKG_ATTR_CERT_CHECK_RESULT_INPROC  0x72
#define SECPKG_ATTR_SESSION_TICKET_KEYS  0x73
#define SECPKG_ATTR_SERIALIZED_REMOTE_CERT_CONTEXT_INPROC  0x74
#define SECPKG_ATTR_SERIALIZED_REMOTE_CERT_CONTEXT  0x75

typedef unsigned int ALG_ID;

typedef struct _SecPkgCred_SupportedAlgs {
    DWORD cSupportedAlgs;
    ALG_ID *palgSupportedAlgs;
} SecPkgCred_SupportedAlgs, *PSecPkgCred_SupportedAlgs;

typedef struct _SecPkgCred_CipherStrengths {
    DWORD dwMinimumCipherStrength;
    DWORD dwMaximumCipherStrength;
} SecPkgCred_CipherStrengths, *PSecPkgCred_CipherStrengths;

typedef struct _SecPkgCred_SupportedProtocols {
    DWORD grbitProtocol;
} SecPkgCred_SupportedProtocols, *PSecPkgCred_SupportedProtocols;

typedef struct _SecPkgCred_ClientCertPolicy {
    DWORD dwFlags;
    GUID guidPolicyId;
    DWORD dwCertFlags;
    DWORD dwUrlRetrievalTimeout;
    BOOL fCheckRevocationFreshnessTime;
    DWORD dwRevocationFreshnessTime;
    BOOL fOmitUsageCheck;
    LPWSTR pwszSslCtlStoreName;
    LPWSTR pwszSslCtlIdentifier;
} SecPkgCred_ClientCertPolicy, *PSecPkgCred_ClientCertPolicy;

#define SESSION_TICKET_INFO_V0 0
#define SESSION_TICKET_INFO_VERSION SESSION_TICKET_INFO_V0

typedef struct _SecPkgCred_SessionTicketKey {
    DWORD TicketInfoVersion;
    BYTE KeyId[16];
    BYTE KeyingMaterial[64];
    BYTE KeyingMaterialSize;
} SecPkgCred_SessionTicketKey, *PSecPkgCred_SessionTicketKey;

typedef struct _SecPkgCred_SessionTicketKeys {
    DWORD cSessionTicketKeys;
    PSecPkgCred_SessionTicketKey pSessionTicketKeys;
} SecPkgCred_SessionTicketKeys, *PSecPkgCred_SessionTicketKeys;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#endif /* _MINSCHANNEL_H */
