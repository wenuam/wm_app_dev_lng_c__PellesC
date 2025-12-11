#ifndef _WINEFS_H
#define _WINEFS_H

#if (NTDDI_VERSION >= NTDDI_WIN2K)

#if __POCC__ >= 500
#pragma once
#endif

/* Windows File Encryption definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define WINEFS_SETUSERKEY_SET_CAPABILITIES  0x00000001

#if (NTDDI_VERSION >= NTDDI_WINXP)

#ifndef ALGIDDEF
#define ALGIDDEF
typedef unsigned int ALG_ID;
#endif /* ALGIDDEF */

#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

typedef struct _CERTIFICATE_BLOB {
    DWORD dwCertEncodingType;
#ifdef MIDL_PASS
    [range(0, 32768)]
#endif /* MIDL_PASS */
    DWORD cbData;
#ifdef MIDL_PASS
    [size_is(cbData)]
#endif /* MIDL_PASS */
    PBYTE pbData;
} EFS_CERTIFICATE_BLOB, *PEFS_CERTIFICATE_BLOB;

typedef struct _EFS_HASH_BLOB {
#ifdef MIDL_PASS
    [range(0, 100)]
#endif /* MIDL_PASS */
    DWORD cbData;
#ifdef MIDL_PASS
    [size_is(cbData)]
#endif /* MIDL_PASS */
    PBYTE pbData;
} EFS_HASH_BLOB, *PEFS_HASH_BLOB;

#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef struct _EFS_RPC_BLOB {
#ifdef MIDL_PASS
    [range(0, 266240)]
#endif /* MIDL_PASS */
    DWORD cbData;
#ifdef MIDL_PASS
    [size_is(cbData)]
#endif /* MIDL_PASS */
    PBYTE pbData;
} EFS_RPC_BLOB, *PEFS_RPC_BLOB;
#endif /* #if (NTDDI_VERSION >= NTDDI_WINXP) */

#if (NTDDI_VERSION >= NTDDI_VISTA) 
typedef struct _EFS_PIN_BLOB {
#ifdef MIDL_PASS
    [range(0, 8)]
#endif /* MIDL_PASS */
    DWORD cbPadding;
#ifdef MIDL_PASS
    [range(0, 2048)]
#endif /* MIDL_PASS */
    DWORD cbData;
#ifdef MIDL_PASS
    [size_is(cbData + cbPadding)]
#endif /* MIDL_PASS */
    PBYTE pbData;
} EFS_PIN_BLOB, *PEFS_PIN_BLOB;
#endif /* #if (NTDDI_VERSION >= NTDDI_VISTA)  */

#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef struct _EFS_KEY_INFO {
    DWORD dwVersion;
    ULONG Entropy;
    ALG_ID Algorithm;
    ULONG KeyLength;
} EFS_KEY_INFO, *PEFS_KEY_INFO;
#endif /* #if (NTDDI_VERSION >= NTDDI_WINXP) */

#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef struct _EFS_COMPATIBILITY_INFO {
    DWORD EfsVersion;
} EFS_COMPATIBILITY_INFO, *PEFS_COMPATIBILITY_INFO;
#endif /* #if (NTDDI_VERSION >= NTDDI_WIN7) */

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
#define EFS_COMPATIBILITY_VERSION_NCRYPT_PROTECTOR 5
#endif /* #if (NTDDI_VERSION >= NTDDI_WINBLUE) */

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#define EFS_COMPATIBILITY_VERSION_PFILE_PROTECTOR 6

#define EFS_IS_DESCRIPTOR_VERSION(__v)                       \
    ( (__v == EFS_COMPATIBILITY_VERSION_NCRYPT_PROTECTOR) || \
      (__v == EFS_COMPATIBILITY_VERSION_PFILE_PROTECTOR) )

#define EFS_SUBVER_UNKNOWN          0

#define EFS_EFS_SUBVER_EFS_CERT     1

#define EFS_PFILE_SUBVER_RMS        2
#define EFS_PFILE_SUBVER_APPX       3

typedef struct _EFS_VERSION_INFO {
    DWORD EfsVersion;
    DWORD SubVersion;
} EFS_VERSION_INFO, *PEFS_VERSION_INFO;

#define EFS_IS_APPX_VERSION(__v, __subV)                    \
    ( (__v == EFS_COMPATIBILITY_VERSION_PFILE_PROTECTOR) && \
      (__subV == EFS_PFILE_SUBVER_APPX) )

#endif /* #if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD) */

#if (NTDDI_VERSION >= NTDDI_VISTA) 

typedef struct _EFS_DECRYPTION_STATUS_INFO {
    DWORD dwDecryptionError;
    DWORD dwHashOffset;
    DWORD cbHash;
} EFS_DECRYPTION_STATUS_INFO, *PEFS_DECRYPTION_STATUS_INFO;

typedef struct _EFS_ENCRYPTION_STATUS_INFO {
    BOOL bHasCurrentKey;
    DWORD dwEncryptionError;
} EFS_ENCRYPTION_STATUS_INFO, *PEFS_ENCRYPTION_STATUS_INFO;

#endif /* #if (NTDDI_VERSION >= NTDDI_VISTA) */

typedef struct _ENCRYPTION_CERTIFICATE {
    DWORD cbTotalLength;
    SID *pUserSid;
    PEFS_CERTIFICATE_BLOB pCertBlob;
} ENCRYPTION_CERTIFICATE, *PENCRYPTION_CERTIFICATE;

#define MAX_SID_SIZE 256

typedef struct _ENCRYPTION_CERTIFICATE_HASH {
    DWORD cbTotalLength;
    SID * pUserSid;
    PEFS_HASH_BLOB pHash;
#ifdef MIDL_PASS
    [string]
#endif /* MIDL_PASS */
    LPWSTR lpDisplayInformation;
} ENCRYPTION_CERTIFICATE_HASH, *PENCRYPTION_CERTIFICATE_HASH;

typedef struct _ENCRYPTION_CERTIFICATE_HASH_LIST {
#ifdef MIDL_PASS
    [range(0, 500)]
#endif /* MIDL_PASS */
    DWORD nCert_Hash;
#ifdef MIDL_PASS
    [size_is(nCert_Hash)]
#endif /* MIDL_PASS */
    PENCRYPTION_CERTIFICATE_HASH * pUsers;
} ENCRYPTION_CERTIFICATE_HASH_LIST, *PENCRYPTION_CERTIFICATE_HASH_LIST;

typedef struct _ENCRYPTION_CERTIFICATE_LIST {
#ifdef MIDL_PASS
    [range(0, 500)]
#endif /* MIDL_PASS */
    DWORD nUsers;
#ifdef MIDL_PASS
    [size_is(nUsers)]
#endif /* MIDL_PASS */
    PENCRYPTION_CERTIFICATE * pUsers;
} ENCRYPTION_CERTIFICATE_LIST, *PENCRYPTION_CERTIFICATE_LIST;

#if (NTDDI_VERSION >= NTDDI_VISTA) 

#define EFS_METADATA_ADD_USER       0x00000001
#define EFS_METADATA_REMOVE_USER    0x00000002
#define EFS_METADATA_REPLACE_USER   0x00000004
#define EFS_METADATA_GENERAL_OP     0x00000008

typedef struct _ENCRYPTED_FILE_METADATA_SIGNATURE {
    DWORD dwEfsAccessType;
    PENCRYPTION_CERTIFICATE_HASH_LIST pCertificatesAdded;
    PENCRYPTION_CERTIFICATE pEncryptionCertificate;
    PEFS_RPC_BLOB pEfsStreamSignature;
} ENCRYPTED_FILE_METADATA_SIGNATURE, *PENCRYPTED_FILE_METADATA_SIGNATURE;

#endif /* #if (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_WIN8)

typedef struct _ENCRYPTION_PROTECTOR {
    DWORD cbTotalLength;
    SID * pUserSid;
#ifdef MIDL_PASS
    [string]
#endif /* MIDL_PASS */
    LPWSTR lpProtectorDescriptor;
} ENCRYPTION_PROTECTOR, *PENCRYPTION_PROTECTOR;

typedef struct _ENCRYPTION_PROTECTOR_LIST {
    DWORD nProtectors;
#ifdef MIDL_PASS
    [size_is(nProtectors)]
#endif /* MIDL_PASS */
    PENCRYPTION_PROTECTOR *pProtectors;
} ENCRYPTION_PROTECTOR_LIST, *PENCRYPTION_PROTECTOR_LIST;

#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

WINADVAPI DWORD WINAPI QueryUsersOnEncryptedFile(
    LPCWSTR lpFileName,
    PENCRYPTION_CERTIFICATE_HASH_LIST *pUsers
);

WINADVAPI DWORD WINAPI QueryRecoveryAgentsOnEncryptedFile(
    LPCWSTR lpFileName,
    PENCRYPTION_CERTIFICATE_HASH_LIST *pRecoveryAgents
);

WINADVAPI DWORD WINAPI RemoveUsersFromEncryptedFile(
    LPCWSTR lpFileName,
    PENCRYPTION_CERTIFICATE_HASH_LIST pHashes
);

WINADVAPI DWORD WINAPI AddUsersToEncryptedFile(
    LPCWSTR lpFileName,
    PENCRYPTION_CERTIFICATE_LIST pEncryptionCertificates
);

WINADVAPI DWORD WINAPI SetUserFileEncryptionKey(
    PENCRYPTION_CERTIFICATE pEncryptionCertificate
);

#if (NTDDI_VERSION >= NTDDI_VISTA) 
WINADVAPI DWORD WINAPI SetUserFileEncryptionKeyEx(
    PENCRYPTION_CERTIFICATE pEncryptionCertificate,
    DWORD dwCapabilities,
    DWORD dwFlags,
    LPVOID pvReserved
);
#endif /* #if (NTDDI_VERSION >= NTDDI_VISTA) */

WINADVAPI VOID WINAPI FreeEncryptionCertificateHashList(
    PENCRYPTION_CERTIFICATE_HASH_LIST pUsers
);

WINADVAPI BOOL WINAPI EncryptionDisable(
    LPCWSTR DirPath,
    BOOL Disable
);

#if (NTDDI_VERSION >= NTDDI_WS03)
WINADVAPI DWORD WINAPI DuplicateEncryptionInfoFile(
    LPCWSTR SrcFileName,
    LPCWSTR DstFileName,
    DWORD dwCreationDistribution,
    DWORD dwAttributes,
    CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#elif (NTDDI_VERSION >= NTDDI_WINXP)
WINADVAPI DWORD WINAPI DuplicateEncryptionInfoFile(
    LPCWSTR SrcFileName,
    LPCWSTR DstFileName,
    DWORD dwCreationDistribution,
    DWORD dwAttributes,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#endif 

#if (NTDDI_VERSION >= NTDDI_VISTA) 
/* __declspec(deprecated) */
WINADVAPI DWORD WINAPI GetEncryptedFileMetadata(
    LPCWSTR lpFileName,
    PDWORD pcbMetadata,
    PBYTE *ppbMetadata
);

/* __declspec(deprecated) */
WINADVAPI DWORD WINAPI SetEncryptedFileMetadata(
    LPCWSTR lpFileName,
    PBYTE pbOldMetadata,
    PBYTE pbNewMetadata,
    PENCRYPTION_CERTIFICATE_HASH pOwnerHash,
    DWORD dwOperation,
    PENCRYPTION_CERTIFICATE_HASH_LIST pCertificatesAdded
);

/* __declspec(deprecated) */
WINADVAPI VOID WINAPI FreeEncryptedFileMetadata(
    PBYTE pbMetadata
);

#endif /* #if (NTDDI_VERSION >= NTDDI_VISTA) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* #if (NTDDI_VERSION >= NTDDI_WIN2K) */

#endif /* _WINEFS_H */
