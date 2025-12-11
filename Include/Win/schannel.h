#ifndef _SCHANNEL_H
#define _SCHANNEL_H

/* SCHANNEL Security Provider definitions */

#if __POCC__ >= 500
#pragma once
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#include <minschannel.h>
#include <wincrypt.h>

#define UNISP_NAME_A    "Microsoft Unified Security Protocol Provider"
#define UNISP_NAME_W    L"Microsoft Unified Security Protocol Provider"

#define SSL2SP_NAME_A    "Microsoft SSL 2.0"
#define SSL2SP_NAME_W    L"Microsoft SSL 2.0"

#define SSL3SP_NAME_A    "Microsoft SSL 3.0"
#define SSL3SP_NAME_W    L"Microsoft SSL 3.0"

#define TLS1SP_NAME_A    "Microsoft TLS 1.0"
#define TLS1SP_NAME_W    L"Microsoft TLS 1.0"

#define PCT1SP_NAME_A    "Microsoft PCT 1.0"
#define PCT1SP_NAME_W    L"Microsoft PCT 1.0"

#define SCHANNEL_NAME_A  "Schannel"
#define SCHANNEL_NAME_W  L"Schannel"

#define DEFAULT_TLS_SSP_NAME_A  "Default TLS SSP"
#define DEFAULT_TLS_SSP_NAME_W  L"Default TLS SSP"

#ifdef UNICODE
#define UNISP_NAME  UNISP_NAME_W
#define PCT1SP_NAME  PCT1SP_NAME_W
#define SSL2SP_NAME  SSL2SP_NAME_W
#define SSL3SP_NAME  SSL3SP_NAME_W
#define TLS1SP_NAME  TLS1SP_NAME_W
#define SCHANNEL_NAME  SCHANNEL_NAME_W
#define DEFAULT_TLS_SSP_NAME  DEFAULT_TLS_SSP_NAME_W
#else /* !UNICODE */
#define UNISP_NAME  UNISP_NAME_A
#define PCT1SP_NAME  PCT1SP_NAME_A
#define SSL2SP_NAME  SSL2SP_NAME_A
#define SSL3SP_NAME  SSL3SP_NAME_A
#define TLS1SP_NAME  TLS1SP_NAME_A
#define SCHANNEL_NAME  SCHANNEL_NAME_A
#define DEFAULT_TLS_SSP_NAME  DEFAULT_TLS_SSP_NAME_A
#endif /* !UNICODE */

typedef enum _eTlsSignatureAlgorithm {
    TlsSignatureAlgorithm_Anonymous = 0,
    TlsSignatureAlgorithm_Rsa = 1,
    TlsSignatureAlgorithm_Dsa = 2,
    TlsSignatureAlgorithm_Ecdsa = 3
} eTlsSignatureAlgorithm;

typedef enum _eTlsHashAlgorithm {
    TlsHashAlgorithm_None = 0,
    TlsHashAlgorithm_Md5 = 1,
    TlsHashAlgorithm_Sha1 = 2,
    TlsHashAlgorithm_Sha224 = 3,
    TlsHashAlgorithm_Sha256 = 4,
    TlsHashAlgorithm_Sha384 = 5,
    TlsHashAlgorithm_Sha512 = 6
} eTlsHashAlgorithm;

#define UNISP_RPC_ID    14

typedef struct _SecPkgContext_RemoteCredentialInfo {
    DWORD cbCertificateChain;
    PBYTE pbCertificateChain;
    DWORD cCertificates;
    DWORD fFlags;
    DWORD dwBits;
} SecPkgContext_RemoteCredentialInfo, *PSecPkgContext_RemoteCredentialInfo;

typedef SecPkgContext_RemoteCredentialInfo SecPkgContext_RemoteCredenitalInfo, *PSecPkgContext_RemoteCredenitalInfo;

#define RCRED_STATUS_NOCRED          0x00000000
#define RCRED_CRED_EXISTS            0x00000001
#define RCRED_STATUS_UNKNOWN_ISSUER  0x00000002

typedef struct _SecPkgContext_LocalCredentialInfo {
    DWORD cbCertificateChain;
    PBYTE pbCertificateChain;
    DWORD cCertificates;
    DWORD fFlags;
    DWORD dwBits;
} SecPkgContext_LocalCredentialInfo, *PSecPkgContext_LocalCredentialInfo;

typedef SecPkgContext_LocalCredentialInfo SecPkgContext_LocalCredenitalInfo, *PSecPkgContext_LocalCredenitalInfo;

#define LCRED_STATUS_NOCRED          0x00000000
#define LCRED_CRED_EXISTS            0x00000001
#define LCRED_STATUS_UNKNOWN_ISSUER  0x00000002

typedef struct _SecPkgContext_ClientCertPolicyResult {
    HRESULT dwPolicyResult;
    GUID guidPolicyId;
} SecPkgContext_ClientCertPolicyResult, *PSecPkgContext_ClientCertPolicyResult;

typedef struct _SecPkgContext_IssuerListInfoEx {
    PCERT_NAME_BLOB aIssuers;
    DWORD cIssuers;
} SecPkgContext_IssuerListInfoEx, *PSecPkgContext_IssuerListInfoEx;

typedef struct _SecPkgContext_ConnectionInfo {
    DWORD dwProtocol;
    ALG_ID aiCipher;
    DWORD dwCipherStrength;
    ALG_ID aiHash;
    DWORD dwHashStrength;
    ALG_ID aiExch;
    DWORD dwExchStrength;
} SecPkgContext_ConnectionInfo, *PSecPkgContext_ConnectionInfo;

#define SZ_ALG_MAX_SIZE 64

#define SECPKGCONTEXT_CONNECTION_INFO_EX_V1   1

typedef struct _SecPkgContext_ConnectionInfoEx {
    DWORD dwVersion;
    DWORD dwProtocol;
    WCHAR szCipher[SZ_ALG_MAX_SIZE];
    DWORD dwCipherStrength;
    WCHAR szHash[SZ_ALG_MAX_SIZE];
    DWORD dwHashStrength;
    WCHAR szExchange[SZ_ALG_MAX_SIZE];
    DWORD dwExchStrength;
} SecPkgContext_ConnectionInfoEx, *PSecPkgContext_ConnectionInfoEx;

#define SECPKGCONTEXT_CIPHERINFO_V1 1

typedef struct _SecPkgContext_CipherInfo {
    DWORD dwVersion;
    DWORD dwProtocol;
    DWORD dwCipherSuite;
    DWORD dwBaseCipherSuite;
    WCHAR szCipherSuite[SZ_ALG_MAX_SIZE];
    WCHAR szCipher[SZ_ALG_MAX_SIZE];
    DWORD dwCipherLen;
    DWORD dwCipherBlockLen;
    WCHAR szHash[SZ_ALG_MAX_SIZE];
    DWORD dwHashLen;
    WCHAR szExchange[SZ_ALG_MAX_SIZE];
    DWORD dwMinExchangeLen;
    DWORD dwMaxExchangeLen;
    WCHAR szCertificate[SZ_ALG_MAX_SIZE];
    DWORD dwKeyType;
} SecPkgContext_CipherInfo, *PSecPkgContext_CipherInfo;

typedef struct _SecPkgContext_EapKeyBlock {
    BYTE rgbKeys[128];
    BYTE rgbIVs[64];
} SecPkgContext_EapKeyBlock, *PSecPkgContext_EapKeyBlock;

typedef struct _SecPkgContext_MappedCredAttr {
    DWORD dwAttribute;
    PVOID pvBuffer;
} SecPkgContext_MappedCredAttr, *PSecPkgContext_MappedCredAttr;

#define SSL_SESSION_RECONNECT   1

typedef struct _SecPkgContext_SessionInfo {
    DWORD dwFlags;
    DWORD cbSessionId;
    BYTE rgbSessionId[32];
} SecPkgContext_SessionInfo, *PSecPkgContext_SessionInfo;

typedef struct _SecPkgContext_SessionAppData {
    DWORD dwFlags;
    DWORD cbAppData;
    PBYTE pbAppData;
} SecPkgContext_SessionAppData, *PSecPkgContext_SessionAppData;

typedef struct _SecPkgContext_EapPrfInfo {
    DWORD dwVersion;
    DWORD cbPrfData;
    PBYTE pbPrfData;
} SecPkgContext_EapPrfInfo, *PSecPkgContext_EapPrfInfo;

typedef struct _SecPkgContext_SupportedSignatures {
    WORD cSignatureAndHashAlgorithms;
    WORD *pSignatureAndHashAlgorithms;
} SecPkgContext_SupportedSignatures, *PSecPkgContext_SupportedSignatures;

typedef struct _SecPkgContext_Certificates {
    DWORD cCertificates;
    DWORD cbCertificateChain;
    PBYTE pbCertificateChain;
} SecPkgContext_Certificates, *PSecPkgContext_Certificates;

typedef struct _SecPkgContext_CertInfo {
    DWORD dwVersion;
    DWORD cbSubjectName;
    LPWSTR pwszSubjectName;
    DWORD cbIssuerName;
    LPWSTR pwszIssuerName;
    DWORD dwKeySize;
} SecPkgContext_CertInfo, *PSecPkgContext_CertInfo;

#define KERN_CONTEXT_CERT_INFO_V1 0x00000000

typedef struct _SecPkgContext_UiInfo {
    HWND hParentWindow;
} SecPkgContext_UiInfo, *PSecPkgContext_UiInfo;

typedef struct _SecPkgContext_EarlyStart {
    DWORD dwEarlyStartFlags;
} SecPkgContext_EarlyStart, *PSecPkgContext_EarlyStart;

#define ENABLE_TLS_CLIENT_EARLY_START           0x00000001

typedef struct _SecPkgContext_KeyingMaterialInfo {
    WORD cbLabel;
    LPSTR pszLabel;
    WORD cbContextValue;
    PBYTE pbContextValue;
    DWORD cbKeyingMaterial;
} SecPkgContext_KeyingMaterialInfo, *PSecPkgContext_KeyingMaterialInfo;

typedef struct _SecPkgContext_KeyingMaterial {
    DWORD cbKeyingMaterial;
    PBYTE pbKeyingMaterial;
} SecPkgContext_KeyingMaterial, *PSecPkgContext_KeyingMaterial;

typedef struct _SecPkgContext_KeyingMaterial_Inproc {
    WORD cbLabel;
    LPSTR pszLabel;
    WORD cbContextValue;
    PBYTE pbContextValue;
    DWORD cbKeyingMaterial;
    PBYTE pbKeyingMaterial;
} SecPkgContext_KeyingMaterial_Inproc, *PSecPkgContext_KeyingMaterial_Inproc;

typedef struct _SecPkgContext_SrtpParameters {
    WORD ProtectionProfile;
    BYTE MasterKeyIdentifierSize;
    PBYTE MasterKeyIdentifier;
} SecPkgContext_SrtpParameters, *PSecPkgContext_SrtpParameters;

typedef struct _SecPkgContext_TokenBinding {
    BYTE MajorVersion;
    BYTE MinorVersion;
    WORD KeyParametersSize;
    PBYTE KeyParameters;
} SecPkgContext_TokenBinding, *PSecPkgContext_TokenBinding;

typedef struct _SecPkgContext_CertificateValidationResult {
    DWORD dwChainErrorStatus;
    HRESULT hrVerifyChainStatus;
} SecPkgContext_CertificateValidationResult, *PSecPkgContext_CertificateValidationResult;

#define SCH_CRED_V1              0x00000001
#define SCH_CRED_V2              0x00000002
#define SCH_CRED_VERSION         0x00000002
#define SCH_CRED_V3              0x00000003
#define SCHANNEL_CRED_VERSION    0x00000004
#define SCH_CREDENTIALS_VERSION  0x00000005

struct _HMAPPER;

typedef struct _SCHANNEL_CRED {
    DWORD dwVersion;
    DWORD cCreds;
    PCCERT_CONTEXT *paCred;
    HCERTSTORE hRootStore;
    DWORD cMappers;
    struct _HMAPPER **aphMappers;
    DWORD cSupportedAlgs;
    ALG_ID *palgSupportedAlgs;
    DWORD grbitEnabledProtocols;
    DWORD dwMinimumCipherStrength;
    DWORD dwMaximumCipherStrength;
    DWORD dwSessionLifespan;
    DWORD dwFlags;
    DWORD dwCredFormat;
} SCHANNEL_CRED, *PSCHANNEL_CRED;

#ifdef SCHANNEL_USE_BLACKLISTS

#define SCHANNEL_RSA_PSS_PADDING_ALGORITHM  L"SCH_RSA_PSS_PAD"
#define SCHANNEL_RSA_PKCS_PADDING_ALGORITHM  L"SCH_RSA_PKCS_PAD"

typedef enum _eTlsAlgorithmUsage {
    TlsParametersCngAlgUsageKeyExchange,
    TlsParametersCngAlgUsageSignature,
    TlsParametersCngAlgUsageCipher,
    TlsParametersCngAlgUsageDigest,
    TlsParametersCngAlgUsageCertSig
} eTlsAlgorithmUsage;

typedef struct _CRYPTO_SETTINGS {
    eTlsAlgorithmUsage eAlgorithmUsage;
    UNICODE_STRING strCngAlgId;
    DWORD cChainingModes;
    PUNICODE_STRING rgstrChainingModes;
    DWORD dwMinBitLength;
    DWORD dwMaxBitLength;
} CRYPTO_SETTINGS, *PCRYPTO_SETTINGS;

typedef struct _TLS_PARAMETERS {
    DWORD cAlpnIds;
    PUNICODE_STRING rgstrAlpnIds;
    DWORD grbitDisabledProtocols;
    DWORD cDisabledCrypto;
    PCRYPTO_SETTINGS pDisabledCrypto;
    DWORD dwFlags;
} TLS_PARAMETERS, *PTLS_PARAMETERS;

#define TLS_PARAMS_OPTIONAL 0x00000001           

typedef struct _SCH_CREDENTIALS {
    DWORD dwVersion;
    DWORD dwCredFormat;
    DWORD cCreds;
    PCCERT_CONTEXT *paCred;
    HCERTSTORE hRootStore;
    DWORD cMappers;
    struct _HMAPPER **aphMappers;
    DWORD dwSessionLifespan;
    DWORD dwFlags;
    DWORD cTlsParameters;
    PTLS_PARAMETERS pTlsParameters;
} SCH_CREDENTIALS, *PSCH_CREDENTIALS;

#define SCH_CRED_MAX_SUPPORTED_PARAMETERS 16
#define SCH_CRED_MAX_SUPPORTED_ALPN_IDS 16
#define SCH_CRED_MAX_SUPPORTED_CRYPTO_SETTINGS 16
#define SCH_CRED_MAX_SUPPORTED_CHAINING_MODES 16

#endif /* SCHANNEL_USE_BLACKLISTS */

typedef struct _SEND_GENERIC_TLS_EXTENSION {
    WORD ExtensionType;
    WORD HandshakeType;
    DWORD Flags;
    WORD BufferSize;
    UCHAR Buffer[ANYSIZE_ARRAY];
} SEND_GENERIC_TLS_EXTENSION, *PSEND_GENERIC_TLS_EXTENSION;

typedef struct _TLS_EXTENSION_SUBSCRIPTION {
    WORD ExtensionType;
    WORD HandshakeType;
} TLS_EXTENSION_SUBSCRIPTION, *PTLS_EXTENSION_SUBSCRIPTION;

typedef struct _SUBSCRIBE_GENERIC_TLS_EXTENSION {
    DWORD Flags;
    DWORD SubscriptionsCount;
    TLS_EXTENSION_SUBSCRIPTION Subscriptions[ANYSIZE_ARRAY];
} SUBSCRIBE_GENERIC_TLS_EXTENSION, *PSUBSCRIBE_GENERIC_TLS_EXTENSION;

#define SCH_MAX_EXT_SUBSCRIPTIONS 2

#define SCH_CRED_FORMAT_CERT_CONTEXT    0x00000000
#define SCH_CRED_FORMAT_CERT_HASH       0x00000001
#define SCH_CRED_FORMAT_CERT_HASH_STORE 0x00000002

#define SCH_CRED_MAX_STORE_NAME_SIZE    128
#define SCH_CRED_MAX_SUPPORTED_ALGS     256
#define SCH_CRED_MAX_SUPPORTED_CERTS    100

typedef struct _SCHANNEL_CERT_HASH {
    DWORD dwLength;
    DWORD dwFlags;
    HCRYPTPROV hProv;
    BYTE ShaHash[20];
} SCHANNEL_CERT_HASH, *PSCHANNEL_CERT_HASH;

typedef struct _SCHANNEL_CERT_HASH_STORE {
    DWORD dwLength;
    DWORD dwFlags;
    HCRYPTPROV hProv;
    BYTE ShaHash[20];
    WCHAR pwszStoreName[SCH_CRED_MAX_STORE_NAME_SIZE];
} SCHANNEL_CERT_HASH_STORE, *PSCHANNEL_CERT_HASH_STORE;

#define SCH_MACHINE_CERT_HASH           0x00000001

#define SCH_CRED_NO_SYSTEM_MAPPER                    0x00000002
#define SCH_CRED_NO_SERVERNAME_CHECK                 0x00000004
#define SCH_CRED_MANUAL_CRED_VALIDATION              0x00000008
#define SCH_CRED_NO_DEFAULT_CREDS                    0x00000010
#define SCH_CRED_AUTO_CRED_VALIDATION                0x00000020
#define SCH_CRED_USE_DEFAULT_CREDS                   0x00000040
#define SCH_CRED_DISABLE_RECONNECTS                  0x00000080

#define SCH_CRED_REVOCATION_CHECK_END_CERT           0x00000100
#define SCH_CRED_REVOCATION_CHECK_CHAIN              0x00000200
#define SCH_CRED_REVOCATION_CHECK_CHAIN_EXCLUDE_ROOT 0x00000400
#define SCH_CRED_IGNORE_NO_REVOCATION_CHECK          0x00000800
#define SCH_CRED_IGNORE_REVOCATION_OFFLINE           0x00001000

#define SCH_CRED_RESTRICTED_ROOTS                    0x00002000
#define SCH_CRED_REVOCATION_CHECK_CACHE_ONLY         0x00004000
#define SCH_CRED_CACHE_ONLY_URL_RETRIEVAL            0x00008000

#define SCH_CRED_MEMORY_STORE_CERT                   0x00010000

#define SCH_CRED_CACHE_ONLY_URL_RETRIEVAL_ON_CREATE  0x00020000

#define SCH_SEND_ROOT_CERT                           0x00040000
#define SCH_CRED_SNI_CREDENTIAL                      0x00080000
#define SCH_CRED_SNI_ENABLE_OCSP                     0x00100000
#define SCH_SEND_AUX_RECORD                          0x00200000
#define SCH_USE_STRONG_CRYPTO                        0x00400000
#define SCH_USE_PRESHAREDKEY_ONLY                    0x00800000
#define SCH_USE_DTLS_ONLY                            0x01000000
#define SCH_ALLOW_NULL_ENCRYPTION                    0x02000000
#define SCH_CRED_DEFERRED_CRED_VALIDATION            0x04000000

#define SCHANNEL_RENEGOTIATE    0
#define SCHANNEL_SHUTDOWN       1
#define SCHANNEL_ALERT          2
#define SCHANNEL_SESSION        3

typedef struct _SCHANNEL_ALERT_TOKEN {
    DWORD dwTokenType;
    DWORD dwAlertType;
    DWORD dwAlertNumber;
} SCHANNEL_ALERT_TOKEN;

#define TLS1_ALERT_WARNING              1
#define TLS1_ALERT_FATAL                2

#define TLS1_ALERT_CLOSE_NOTIFY                 0
#define TLS1_ALERT_UNEXPECTED_MESSAGE           10
#define TLS1_ALERT_BAD_RECORD_MAC               20
#define TLS1_ALERT_DECRYPTION_FAILED            21
#define TLS1_ALERT_RECORD_OVERFLOW              22
#define TLS1_ALERT_DECOMPRESSION_FAIL           30
#define TLS1_ALERT_HANDSHAKE_FAILURE            40
#define TLS1_ALERT_BAD_CERTIFICATE              42
#define TLS1_ALERT_UNSUPPORTED_CERT             43
#define TLS1_ALERT_CERTIFICATE_REVOKED          44
#define TLS1_ALERT_CERTIFICATE_EXPIRED          45
#define TLS1_ALERT_CERTIFICATE_UNKNOWN          46
#define TLS1_ALERT_ILLEGAL_PARAMETER            47
#define TLS1_ALERT_UNKNOWN_CA                   48
#define TLS1_ALERT_ACCESS_DENIED                49
#define TLS1_ALERT_DECODE_ERROR                 50
#define TLS1_ALERT_DECRYPT_ERROR                51
#define TLS1_ALERT_EXPORT_RESTRICTION           60
#define TLS1_ALERT_PROTOCOL_VERSION             70
#define TLS1_ALERT_INSUFFIENT_SECURITY          71
#define TLS1_ALERT_INTERNAL_ERROR               80
#define TLS1_ALERT_USER_CANCELED                90
#define TLS1_ALERT_NO_RENEGOTIATION             100
#define TLS1_ALERT_UNSUPPORTED_EXT              110
#define TLS1_ALERT_UNKNOWN_PSK_IDENTITY         115
#define TLS1_ALERT_NO_APP_PROTOCOL              120

#define SSL_SESSION_ENABLE_RECONNECTS   1
#define SSL_SESSION_DISABLE_RECONNECTS  2

typedef struct _SCHANNEL_SESSION_TOKEN {
    DWORD dwTokenType;
    DWORD dwFlags;
} SCHANNEL_SESSION_TOKEN;

typedef struct _SCHANNEL_CLIENT_SIGNATURE {
    DWORD cbLength;
    ALG_ID aiHash;
    DWORD cbHash;
    BYTE HashValue[36];
    BYTE CertThumbprint[20];
} SCHANNEL_CLIENT_SIGNATURE, *PSCHANNEL_CLIENT_SIGNATURE;

#define SP_PROT_PCT1_SERVER             0x00000001
#define SP_PROT_PCT1_CLIENT             0x00000002
#define SP_PROT_PCT1                    (SP_PROT_PCT1_SERVER | SP_PROT_PCT1_CLIENT)

#define SP_PROT_SSL2_SERVER             0x00000004
#define SP_PROT_SSL2_CLIENT             0x00000008
#define SP_PROT_SSL2                    (SP_PROT_SSL2_SERVER | SP_PROT_SSL2_CLIENT)

#define SP_PROT_SSL3_SERVER             0x00000010
#define SP_PROT_SSL3_CLIENT             0x00000020
#define SP_PROT_SSL3                    (SP_PROT_SSL3_SERVER | SP_PROT_SSL3_CLIENT)

#define SP_PROT_TLS1_SERVER             0x00000040
#define SP_PROT_TLS1_CLIENT             0x00000080
#define SP_PROT_TLS1                    (SP_PROT_TLS1_SERVER | SP_PROT_TLS1_CLIENT)

#define SP_PROT_SSL3TLS1_CLIENTS        (SP_PROT_TLS1_CLIENT | SP_PROT_SSL3_CLIENT)
#define SP_PROT_SSL3TLS1_SERVERS        (SP_PROT_TLS1_SERVER | SP_PROT_SSL3_SERVER)
#define SP_PROT_SSL3TLS1                (SP_PROT_SSL3 | SP_PROT_TLS1)

#define SP_PROT_UNI_SERVER              0x40000000
#define SP_PROT_UNI_CLIENT              0x80000000
#define SP_PROT_UNI                     (SP_PROT_UNI_SERVER | SP_PROT_UNI_CLIENT)

#define SP_PROT_ALL                     0xffffffff
#define SP_PROT_NONE                    0
#define SP_PROT_CLIENTS                 (SP_PROT_PCT1_CLIENT | SP_PROT_SSL2_CLIENT | SP_PROT_SSL3_CLIENT | SP_PROT_UNI_CLIENT | SP_PROT_TLS1_CLIENT)
#define SP_PROT_SERVERS                 (SP_PROT_PCT1_SERVER | SP_PROT_SSL2_SERVER | SP_PROT_SSL3_SERVER | SP_PROT_UNI_SERVER | SP_PROT_TLS1_SERVER)

#define SP_PROT_TLS1_0_SERVER           SP_PROT_TLS1_SERVER
#define SP_PROT_TLS1_0_CLIENT           SP_PROT_TLS1_CLIENT
#define SP_PROT_TLS1_0                  (SP_PROT_TLS1_0_SERVER | \
                                         SP_PROT_TLS1_0_CLIENT)

#define SP_PROT_TLS1_1_SERVER           0x00000100
#define SP_PROT_TLS1_1_CLIENT           0x00000200
#define SP_PROT_TLS1_1                  (SP_PROT_TLS1_1_SERVER | \
                                         SP_PROT_TLS1_1_CLIENT)

#define SP_PROT_TLS1_2_SERVER           0x00000400
#define SP_PROT_TLS1_2_CLIENT           0x00000800
#define SP_PROT_TLS1_2                  (SP_PROT_TLS1_2_SERVER | \
                                         SP_PROT_TLS1_2_CLIENT)

#define SP_PROT_TLS1_3_SERVER           0x00001000
#define SP_PROT_TLS1_3_CLIENT           0x00002000
#define SP_PROT_TLS1_3                  (SP_PROT_TLS1_3_SERVER | \
                                         SP_PROT_TLS1_3_CLIENT)

#define SP_PROT_DTLS_SERVER             0x00010000
#define SP_PROT_DTLS_CLIENT             0x00020000
#define SP_PROT_DTLS                    (SP_PROT_DTLS_SERVER | \
                                         SP_PROT_DTLS_CLIENT )

#define SP_PROT_DTLS1_0_SERVER          SP_PROT_DTLS_SERVER
#define SP_PROT_DTLS1_0_CLIENT          SP_PROT_DTLS_CLIENT
#define SP_PROT_DTLS1_0                 (SP_PROT_DTLS1_0_SERVER | SP_PROT_DTLS1_0_CLIENT)

#define SP_PROT_DTLS1_2_SERVER          0x00040000
#define SP_PROT_DTLS1_2_CLIENT          0x00080000
#define SP_PROT_DTLS1_2                 (SP_PROT_DTLS1_2_SERVER | SP_PROT_DTLS1_2_CLIENT)

#define SP_PROT_DTLS1_X_SERVER          (SP_PROT_DTLS1_0_SERVER | \
                                         SP_PROT_DTLS1_2_SERVER)

#define SP_PROT_DTLS1_X_CLIENT          (SP_PROT_DTLS1_0_CLIENT | \
                                         SP_PROT_DTLS1_2_CLIENT)

#define SP_PROT_DTLS1_X                 (SP_PROT_DTLS1_X_SERVER | \
                                         SP_PROT_DTLS1_X_CLIENT)

#define SP_PROT_TLS1_1PLUS_SERVER       (SP_PROT_TLS1_1_SERVER | \
                                         SP_PROT_TLS1_2_SERVER | \
                                         SP_PROT_TLS1_3_SERVER)
#define SP_PROT_TLS1_1PLUS_CLIENT       (SP_PROT_TLS1_1_CLIENT | \
                                         SP_PROT_TLS1_2_CLIENT | \
                                         SP_PROT_TLS1_3_CLIENT)

#define SP_PROT_TLS1_1PLUS              (SP_PROT_TLS1_1PLUS_SERVER | \
                                         SP_PROT_TLS1_1PLUS_CLIENT)

#define SP_PROT_TLS1_3PLUS_SERVER       SP_PROT_TLS1_3_SERVER
#define SP_PROT_TLS1_3PLUS_CLIENT       SP_PROT_TLS1_3_CLIENT
#define SP_PROT_TLS1_3PLUS              (SP_PROT_TLS1_3PLUS_SERVER | \
                                         SP_PROT_TLS1_3PLUS_CLIENT)

#define SP_PROT_TLS1_X_SERVER           (SP_PROT_TLS1_0_SERVER | \
                                         SP_PROT_TLS1_1_SERVER | \
                                         SP_PROT_TLS1_2_SERVER | \
                                         SP_PROT_TLS1_3_SERVER)
#define SP_PROT_TLS1_X_CLIENT           (SP_PROT_TLS1_0_CLIENT | \
                                         SP_PROT_TLS1_1_CLIENT | \
                                         SP_PROT_TLS1_2_CLIENT | \
                                         SP_PROT_TLS1_3_CLIENT)
#define SP_PROT_TLS1_X                  (SP_PROT_TLS1_X_SERVER | \
                                         SP_PROT_TLS1_X_CLIENT)

#define SP_PROT_SSL3TLS1_X_CLIENTS      (SP_PROT_TLS1_X_CLIENT | \
                                         SP_PROT_SSL3_CLIENT)
#define SP_PROT_SSL3TLS1_X_SERVERS      (SP_PROT_TLS1_X_SERVER | \
                                         SP_PROT_SSL3_SERVER)
#define SP_PROT_SSL3TLS1_X              (SP_PROT_SSL3 | SP_PROT_TLS1_X)

#define SP_PROT_X_CLIENTS               (SP_PROT_CLIENTS | \
                                         SP_PROT_TLS1_X_CLIENT | \
                                         SP_PROT_DTLS1_X_CLIENT )
#define SP_PROT_X_SERVERS               (SP_PROT_SERVERS | \
                                         SP_PROT_TLS1_X_SERVER | \
                                         SP_PROT_DTLS1_X_SERVER )

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef BOOL (WINAPI *SSL_EMPTY_CACHE_FN_A)(
    LPSTR pszTargetName,
    DWORD dwFlags);

BOOL WINAPI SslEmptyCacheA(
    LPSTR pszTargetName,
    DWORD dwFlags);

typedef BOOL (WINAPI *SSL_EMPTY_CACHE_FN_W)(
    LPWSTR pszTargetName,
    DWORD dwFlags);

BOOL WINAPI SslEmptyCacheW(
    LPWSTR pszTargetName,
    DWORD dwFlags);

#ifdef UNICODE
#define SSL_EMPTY_CACHE_FN SSL_EMPTY_CACHE_FN_W
#define SslEmptyCache SslEmptyCacheW
#else /* !UNICODE */
#define SSL_EMPTY_CACHE_FN SSL_EMPTY_CACHE_FN_A
#define SslEmptyCache SslEmptyCacheA
#endif /* !UNICODE */

typedef struct _SSL_CREDENTIAL_CERTIFICATE {
    DWORD cbPrivateKey;
    PBYTE pPrivateKey;
    DWORD cbCertificate;
    PBYTE pCertificate;
    PSTR pszPassword;
} SSL_CREDENTIAL_CERTIFICATE, *PSSL_CREDENTIAL_CERTIFICATE;

#define SCHANNEL_SECRET_TYPE_CAPI   0x00000001
#define SCHANNEL_SECRET_PRIVKEY     0x00000002
#define SCH_CRED_X509_CERTCHAIN     0x00000001
#define SCH_CRED_X509_CAPI          0x00000002
#define SCH_CRED_CERT_CONTEXT       0x00000003

struct _HMAPPER;
typedef struct _SCH_CRED {
    DWORD dwVersion;
    DWORD cCreds;
    PVOID *paSecret;
    PVOID *paPublic;
    DWORD cMappers;
    struct _HMAPPER **aphMappers;
} SCH_CRED, *PSCH_CRED;

typedef struct _SCH_CRED_SECRET_CAPI {
    DWORD dwType;
    HCRYPTPROV hProv;
} SCH_CRED_SECRET_CAPI, *PSCH_CRED_SECRET_CAPI;

typedef struct _SCH_CRED_SECRET_PRIVKEY {
    DWORD dwType;
    PBYTE pPrivateKey;
    DWORD cbPrivateKey;
    PSTR pszPassword;
} SCH_CRED_SECRET_PRIVKEY, *PSCH_CRED_SECRET_PRIVKEY;

typedef struct _SCH_CRED_PUBLIC_CERTCHAIN {
    DWORD dwType;
    DWORD cbCertChain;
    PBYTE pCertChain;
} SCH_CRED_PUBLIC_CERTCHAIN, *PSCH_CRED_PUBLIC_CERTCHAIN;

typedef struct _PctPublicKey {
    DWORD Type;
    DWORD cbKey;
    UCHAR pKey[1];
} PctPublicKey;

typedef struct _X509Certificate {
    DWORD Version;
    DWORD SerialNumber[4];
    ALG_ID SignatureAlgorithm;
    FILETIME ValidFrom;
    FILETIME ValidUntil;
    PSTR pszIssuer;
    PSTR pszSubject;
    PctPublicKey *pPublicKey;
} X509Certificate, *PX509Certificate;

BOOL WINAPI SslGenerateKeyPair(
    PSSL_CREDENTIAL_CERTIFICATE pCerts,
    PSTR pszDN,
    PSTR pszPassword,
    DWORD Bits);

void WINAPI SslGenerateRandomBits(
    PUCHAR pRandomData,
    LONG cRandomData
);

BOOL WINAPI SslCrackCertificate(
    PUCHAR pbCertificate,
    DWORD cbCertificate,
    DWORD dwFlags,
    PX509Certificate *ppCertificate
);

void WINAPI SslFreeCertificate(
    PX509Certificate pCertificate
);

DWORD WINAPI SslGetMaximumKeySize(
    DWORD Reserved);

BOOL WINAPI SslGetDefaultIssuers(
    PBYTE pbIssuers,
    DWORD *pcbIssuers);

#define SSL_CRACK_CERTIFICATE_NAME  TEXT("SslCrackCertificate")
#define SSL_FREE_CERTIFICATE_NAME   TEXT("SslFreeCertificate")

typedef BOOL (WINAPI *SSL_CRACK_CERTIFICATE_FN)(
    PUCHAR pbCertificate,
    DWORD cbCertificate,
    BOOL VerifySignature,
    PX509Certificate *ppCertificate
);

typedef void (WINAPI *SSL_FREE_CERTIFICATE_FN)(
    PX509Certificate pCertificate
);

typedef SECURITY_STATUS (WINAPI *SslGetServerIdentityFn)(
    PBYTE ClientHello,
    DWORD ClientHelloSize,
    PBYTE *ServerIdentity,
    PDWORD ServerIdentitySize,
    DWORD Flags
);

EXTERN_C SECURITY_STATUS WINAPI SslGetServerIdentity(
    PBYTE ClientHello,
    DWORD ClientHelloSize,
    PBYTE *ServerIdentity,
    PDWORD ServerIdentitySize,
    DWORD Flags);

#if (NTDDI_VERSION >= NTDDI_WIN10_19H1)
typedef struct _SCH_EXTENSION_DATA {
    WORD ExtensionType;
    const BYTE *pExtData;
    DWORD cbExtData;
}SCH_EXTENSION_DATA;

typedef enum _SchGetExtensionsOptions {
    SCH_EXTENSIONS_OPTIONS_NONE = 0x0,
    SCH_NO_RECORD_HEADER = 0x1
} SchGetExtensionsOptions;
/*DEFINE_ENUM_FLAG_OPERATORS(SchGetExtensionsOptions);*/

typedef SECURITY_STATUS (WINAPI *SslGetExtensionsFn)(
    const BYTE *clientHello,
    DWORD clientHelloByteSize,
    SCH_EXTENSION_DATA *genericExtensions,
    BYTE genericExtensionsCount,
    DWORD *bytesToRead,
    SchGetExtensionsOptions flags
);

EXTERN_C SECURITY_STATUS WINAPI SslGetExtensions(
    const BYTE *clientHello,
    DWORD clientHelloByteSize,
    SCH_EXTENSION_DATA *genericExtensions,
    BYTE genericExtensionsCount,
    DWORD *bytesToRead,
    SchGetExtensionsOptions flags
);

typedef SECURITY_STATUS (WINAPI *SslDeserializeCertificateStoreFn)(
    CERT_BLOB SerializedCertificateStore,
    PCCERT_CONTEXT *ppCertContext
);

EXTERN_C SECURITY_STATUS WINAPI SslDeserializeCertificateStore(
    CERT_BLOB SerializedCertificateStore,
    PCCERT_CONTEXT *ppCertContext
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_19H1) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _SCHANNEL_H */
