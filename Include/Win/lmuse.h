#ifndef _LMUSE_H
#define _LMUSE_H

#if __POCC__ >= 500
#pragma once
#endif

/* NetUse API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#include <lmcons.h>
#include <lmuseflg.h>

#define USE_FLAG_GLOBAL_MAPPING 0x10000

#define USE_LEVEL(LEVELFLAGS) ((LEVELFLAGS) & 0xffff)
#define USE_FLAGS(LEVELFLAGS) ((LEVELFLAGS) & 0xffff0000)

NET_API_STATUS NET_API_FUNCTION NetUseAdd(
    LPTSTR servername,
    DWORD LevelFlags,
    LPBYTE buf,
    LPDWORD parm_err
);

NET_API_STATUS NET_API_FUNCTION NetUseDel(
    LMSTR UncServerName,
    LMSTR UseName,
    DWORD ForceLevelFlags
);

NET_API_STATUS NET_API_FUNCTION NetUseEnum(
    LMSTR UncServerName,
    DWORD LevelFlags,
    LPBYTE *BufPtr,
    DWORD PreferedMaximumSize,
    LPDWORD EntriesRead,
    LPDWORD TotalEntries,
    LPDWORD ResumeHandle
);

NET_API_STATUS NET_API_FUNCTION NetUseGetInfo(
    LMSTR UncServerName,
    LMSTR UseName,
    DWORD LevelFlags,
    LPBYTE *bufptr
);

typedef struct _USE_INFO_0 {
    LMSTR ui0_local;
    LMSTR ui0_remote;
} USE_INFO_0, *PUSE_INFO_0, *LPUSE_INFO_0;

typedef struct _USE_INFO_1 {
    LMSTR ui1_local;
    LMSTR ui1_remote;
    LMSTR ui1_password;
    DWORD ui1_status;
    DWORD ui1_asg_type;
    DWORD ui1_refcount;
    DWORD ui1_usecount;
} USE_INFO_1, *PUSE_INFO_1, *LPUSE_INFO_1;

typedef struct _USE_INFO_2 {
    LMSTR ui2_local;
    LMSTR ui2_remote;
    LMSTR ui2_password;
    DWORD ui2_status;
    DWORD ui2_asg_type;
    DWORD ui2_refcount;
    DWORD ui2_usecount;
    LMSTR ui2_username;
    LMSTR ui2_domainname;
} USE_INFO_2, *PUSE_INFO_2, *LPUSE_INFO_2;

typedef struct _USE_INFO_3 {
    USE_INFO_2 ui3_ui2;
    ULONG ui3_flags;
} USE_INFO_3, *PUSE_INFO_3, *LPUSE_INFO_3;

typedef struct _USE_INFO_4 {
    USE_INFO_3 ui4_ui3;
    DWORD ui4_auth_identity_length;
    PBYTE ui4_auth_identity;
} USE_INFO_4, *PUSE_INFO_4, *LPUSE_INFO_4;

typedef struct _USE_INFO_5 {
    USE_INFO_3 ui4_ui3;
    DWORD ui4_auth_identity_length;
    PBYTE ui4_auth_identity;
    DWORD ui5_security_descriptor_length;
    PBYTE ui5_security_descriptor;
    DWORD ui5_use_options_length;
    PBYTE ui5_use_options;
} USE_INFO_5, *PUSE_INFO_5, *LPUSE_INFO_5;

#define USE_LOCAL_PARMNUM         1
#define USE_REMOTE_PARMNUM        2
#define USE_PASSWORD_PARMNUM      3
#define USE_ASGTYPE_PARMNUM       4
#define USE_USERNAME_PARMNUM      5
#define USE_DOMAINNAME_PARMNUM    6
#define USE_FLAGS_PARMNUM         7
#define USE_AUTHIDENTITY_PARMNUM  8
#define USE_SD_PARMNUM            9
#define USE_OPTIONS_PARMNUM      10

#define USE_OK        0
#define USE_PAUSED    1
#define USE_SESSLOST  2
#define USE_DISCONN   2
#define USE_NETERR    3
#define USE_CONN      4
#define USE_RECONN    5

#define USE_WILDCARD  ((DWORD)(-1))
#define USE_DISKDEV   0
#define USE_SPOOLDEV  1
#define USE_CHARDEV   2
#define USE_IPC       3

#define CREATE_NO_CONNECT  0x1
#define CREATE_BYPASS_CSC  0x2
#define CREATE_CRED_RESET  0x4

#define USE_DEFAULT_CREDENTIALS  0x4

#define CREATE_REQUIRE_CONNECTION_INTEGRITY  0x8
#define CREATE_REQUIRE_CONNECTION_PRIVACY  0x10

#define CREATE_PERSIST_MAPPING  0x20

#define CREATE_WRITE_THROUGH_SEMANTICS  0x40

#define CREATE_GLOBAL_MAPPING  0x100

#define USE_OPTION_DEFERRED_CONNECTION_PARAMS  'CfeD'
#define USE_OPTION_TRANSPORT_PARAMS  'ParT'
#define USE_OPTION_SMB_COMPRESSION_PARAMS  'PmoC'

typedef struct _USE_OPTION_GENERIC {
    ULONG Tag;
    USHORT Length;
    USHORT Reserved;
} USE_OPTION_GENERIC, *PUSE_OPTION_GENERIC;

typedef struct _USE_OPTION_DEFERRED_CONNECTION_PARAMETERS {
    ULONG Tag;
    USHORT Length;
    USHORT Reserved;
} USE_OPTION_DEFERRED_CONNECTION_PARAMETERS, *PUSE_OPTION_DEFERRED_CONNECTION_PARAMETERS ;

typedef enum _TRANSPORT_TYPE {
    UseTransportType_None,
    UseTransportType_Wsk,
    UseTransportType_Quic
} TRANSPORT_TYPE, *PTRANSPORT_TYPE;

typedef struct _TRANSPORT_INFO {
    TRANSPORT_TYPE Type;
    BOOLEAN SkipCertificateCheck;
} TRANSPORT_INFO, *PTRANSPORT_INFO;

typedef struct _USE_OPTION_TRANSPORT_PARAMETERS {
    ULONG Tag;
    USHORT Length;
    USHORT Reserved;
} USE_OPTION_TRANSPORT_PARAMETERS, *PUSE_OPTION_TRANSPORT_PARAMETERS ;

typedef struct _SMB_COMPRESSION_INFO {
    BOOLEAN Switch;
    BYTE Reserved1;
    USHORT Reserved2;
    ULONG Reserved3;
} SMB_COMPRESSION_INFO, *PSMB_COMPRESSION_INFO;

typedef struct _SMB_USE_OPTION_COMPRESSION_PARAMETERS {
    ULONG Tag;
    USHORT Length;
    USHORT Reserved;
} SMB_USE_OPTION_COMPRESSION_PARAMETERS, *PSMB_USE_OPTION_COMPRESSION_PARAMETERS;

typedef struct _SMB_TREE_CONNECT_PARAMETERS {
    ULONG EABufferOffset;
    DWORD EABufferLen;
    ULONG CreateOptions;
    ULONG TreeConnectAttributes;
} SMB_TREE_CONNECT_PARAMETERS, *PSMB_TREE_CONNECT_PARAMETERS;

typedef struct _USE_OPTION_PROPERTIES {
    ULONG Tag;
    PVOID pInfo;
    size_t Length;
} USE_OPTION_PROPERTIES, *PUSE_OPTION_PROPERTIES;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _LMUSE_H */
