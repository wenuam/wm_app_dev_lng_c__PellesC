#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef _LMSHARE_H
#define _LMSHARE_H

#if __POCC__ >= 500
#pragma once
#endif

/* NetShare, NetSession, NetFile and NetConnection API definitions */

#include <lmcons.h>

NET_API_STATUS NET_API_FUNCTION NetShareAdd(
    LMSTR servername,
    DWORD level,
    LPBYTE buf,
    LPDWORD parm_err
);

NET_API_STATUS NET_API_FUNCTION NetShareEnum(
    LMSTR servername,
    DWORD level,
    LPBYTE *bufptr,
    DWORD prefmaxlen,
    LPDWORD entriesread,
    LPDWORD totalentries,
    LPDWORD resume_handle
);

NET_API_STATUS NET_API_FUNCTION NetShareEnumSticky(
    LMSTR servername,
    DWORD level,
    LPBYTE *bufptr,
    DWORD prefmaxlen,
    LPDWORD entriesread,
    LPDWORD totalentries,
    LPDWORD resume_handle
);

NET_API_STATUS NET_API_FUNCTION NetShareGetInfo(
    LMSTR servername,
    LMSTR netname,
    DWORD level,
    LPBYTE *bufptr
);

NET_API_STATUS NET_API_FUNCTION NetShareSetInfo(
    LMSTR servername,
    LMSTR netname,
    DWORD level,
    LPBYTE buf,
    LPDWORD parm_err
);

NET_API_STATUS NET_API_FUNCTION NetShareDel(
    LMSTR servername,
    LMSTR netname,
    DWORD reserved
);

NET_API_STATUS NET_API_FUNCTION NetShareDelSticky(
    LMSTR servername,
    LMSTR netname,
    DWORD reserved
);

NET_API_STATUS NET_API_FUNCTION NetShareCheck(
    LMSTR servername,
    LMSTR device,
    LPDWORD type
);

NET_API_STATUS NET_API_FUNCTION NetShareDelEx(
    LMSTR servername,
    DWORD level,
    LPBYTE buf
);

typedef struct _SHARE_INFO_0 {
    LMSTR shi0_netname;
} SHARE_INFO_0, *PSHARE_INFO_0, *LPSHARE_INFO_0;

typedef struct _SHARE_INFO_1 {
    LMSTR shi1_netname;
    DWORD shi1_type;
    LMSTR shi1_remark;
} SHARE_INFO_1, *PSHARE_INFO_1, *LPSHARE_INFO_1;

typedef struct _SHARE_INFO_2 {
    LMSTR shi2_netname;
    DWORD shi2_type;
    LMSTR shi2_remark;
    DWORD shi2_permissions;
    DWORD shi2_max_uses;
    DWORD shi2_current_uses;
    LMSTR shi2_path;
    LMSTR shi2_passwd;
} SHARE_INFO_2, *PSHARE_INFO_2, *LPSHARE_INFO_2;

typedef struct _SHARE_INFO_501 {
    LMSTR shi501_netname;
    DWORD shi501_type;
    LMSTR shi501_remark;
    DWORD shi501_flags;
} SHARE_INFO_501, *PSHARE_INFO_501, *LPSHARE_INFO_501;

typedef struct _SHARE_INFO_502 {
    LMSTR shi502_netname;
    DWORD shi502_type;
    LMSTR shi502_remark;
    DWORD shi502_permissions;
    DWORD shi502_max_uses;
    DWORD shi502_current_uses;
    LMSTR shi502_path;
    LMSTR shi502_passwd;
    DWORD shi502_reserved;
    PSECURITY_DESCRIPTOR shi502_security_descriptor;
} SHARE_INFO_502, *PSHARE_INFO_502, *LPSHARE_INFO_502;

typedef struct _SHARE_INFO_503 {
    LMSTR shi503_netname;
    DWORD shi503_type;
    LMSTR shi503_remark;
    DWORD shi503_permissions;
    DWORD shi503_max_uses;
    DWORD shi503_current_uses;
    LMSTR shi503_path;
    LMSTR shi503_passwd;
    LMSTR shi503_servername;
    DWORD shi503_reserved;
    PSECURITY_DESCRIPTOR shi503_security_descriptor;
} SHARE_INFO_503, *PSHARE_INFO_503, *LPSHARE_INFO_503;

typedef struct _SHARE_INFO_1004 {
    LMSTR shi1004_remark;
} SHARE_INFO_1004, *PSHARE_INFO_1004, *LPSHARE_INFO_1004;

typedef struct _SHARE_INFO_1005 {
    DWORD shi1005_flags;
} SHARE_INFO_1005, *PSHARE_INFO_1005, *LPSHARE_INFO_1005;

typedef struct _SHARE_INFO_1006 {
    DWORD shi1006_max_uses;
} SHARE_INFO_1006, *PSHARE_INFO_1006, *LPSHARE_INFO_1006;

typedef struct _SHARE_INFO_1501 {
    DWORD shi1501_reserved;
    PSECURITY_DESCRIPTOR shi1501_security_descriptor;
} SHARE_INFO_1501, *PSHARE_INFO_1501, *LPSHARE_INFO_1501;

typedef struct _SHARE_INFO_1503 {
    GUID shi1503_sharefilter;
} SHARE_INFO_1503, *PSHARE_INFO_1503, *LPSHARE_INFO_1503;

NET_API_STATUS NET_API_FUNCTION NetServerAliasAdd(
    LMSTR servername,
    DWORD level,
    LPBYTE buf
);

NET_API_STATUS NET_API_FUNCTION NetServerAliasDel(
    LMSTR servername,
    DWORD level,
    LPBYTE buf
);

NET_API_STATUS NET_API_FUNCTION NetServerAliasEnum(
    LMSTR servername,
    DWORD level,
    LPBYTE *bufptr,
    DWORD prefmaxlen,
    LPDWORD entriesread,
    LPDWORD totalentries,
    LPDWORD resumehandle
);

typedef struct _SERVER_ALIAS_INFO_0 {
    LMSTR srvai0_alias;
    LMSTR srvai0_target;
    BOOLEAN srvai0_default;
    ULONG srvai0_reserved;
} SERVER_ALIAS_INFO_0, *PSERVER_ALIAS_INFO_0, *LPSERVER_ALIAS_INFO_0;

#define SHARE_NETNAME_PARMNUM         1
#define SHARE_TYPE_PARMNUM            3
#define SHARE_REMARK_PARMNUM          4
#define SHARE_PERMISSIONS_PARMNUM     5
#define SHARE_MAX_USES_PARMNUM        6
#define SHARE_CURRENT_USES_PARMNUM    7
#define SHARE_PATH_PARMNUM            8
#define SHARE_PASSWD_PARMNUM          9
#define SHARE_FILE_SD_PARMNUM       501
#define SHARE_SERVER_PARMNUM        503
#define SHARE_QOS_POLICY_PARMNUM    504

#define SHARE_REMARK_INFOLEVEL \
    (PARMNUM_BASE_INFOLEVEL + SHARE_REMARK_PARMNUM)
#define SHARE_MAX_USES_INFOLEVEL \
    (PARMNUM_BASE_INFOLEVEL + SHARE_MAX_USES_PARMNUM)
#define SHARE_FILE_SD_INFOLEVEL \
    (PARMNUM_BASE_INFOLEVEL + SHARE_FILE_SD_PARMNUM)

#define SHI1_NUM_ELEMENTS       4
#define SHI2_NUM_ELEMENTS       10

#define STYPE_DISKTREE          0
#define STYPE_PRINTQ            1
#define STYPE_DEVICE            2
#define STYPE_IPC               3

#define STYPE_MASK              0x000000FF

#define STYPE_RESERVED1         0x01000000
#define STYPE_RESERVED2         0x02000000
#define STYPE_RESERVED3         0x04000000
#define STYPE_RESERVED4         0x08000000
#define STYPE_RESERVED5         0x00100000
#define STYPE_RESERVED_ALL      0x3FFFFF00

#define STYPE_TEMPORARY         0x40000000
#define STYPE_SPECIAL           0x80000000

#define SHI_USES_UNLIMITED      (DWORD)-1

#define SHI1005_FLAGS_DFS       0x0001
#define SHI1005_FLAGS_DFS_ROOT  0x0002

#define CSC_MASK_EXT            0x2030
#define CSC_MASK                0x0030

#define CSC_CACHE_MANUAL_REINT  0x0000
#define CSC_CACHE_AUTO_REINT    0x0010
#define CSC_CACHE_VDO           0x0020
#define CSC_CACHE_NONE          0x0030

#define SHI1005_FLAGS_RESTRICT_EXCLUSIVE_OPENS                  0x000100
#define SHI1005_FLAGS_FORCE_SHARED_DELETE                       0x000200
#define SHI1005_FLAGS_ALLOW_NAMESPACE_CACHING                   0x000400
#define SHI1005_FLAGS_ACCESS_BASED_DIRECTORY_ENUM               0x000800
#define SHI1005_FLAGS_FORCE_LEVELII_OPLOCK                      0x001000
#define SHI1005_FLAGS_ENABLE_HASH                               0x002000
#define SHI1005_FLAGS_ENABLE_CA                                 0x004000
#define SHI1005_FLAGS_ENCRYPT_DATA                              0x008000
#define SHI1005_FLAGS_RESERVED                                  0x010000
#define SHI1005_FLAGS_DISABLE_CLIENT_BUFFERING                  0x020000
#define SHI1005_FLAGS_IDENTITY_REMOTING                         0x040000
#define SHI1005_FLAGS_CLUSTER_MANAGED                           0x080000
#define SHI1005_FLAGS_COMPRESS_DATA                             0x100000
#define SHI1005_FLAGS_ISOLATED_TRANSPORT                        0x200000
#define SHI1005_FLAGS_DISABLE_DIRECTORY_HANDLE_LEASING          0x400000

#define SHI1005_VALID_FLAGS_SET    (CSC_MASK|                                           \
                                    SHI1005_FLAGS_RESTRICT_EXCLUSIVE_OPENS|             \
                                    SHI1005_FLAGS_FORCE_SHARED_DELETE|                  \
                                    SHI1005_FLAGS_ALLOW_NAMESPACE_CACHING|              \
                                    SHI1005_FLAGS_ACCESS_BASED_DIRECTORY_ENUM|          \
                                    SHI1005_FLAGS_FORCE_LEVELII_OPLOCK|                 \
                                    SHI1005_FLAGS_ENABLE_HASH|                          \
                                    SHI1005_FLAGS_ENABLE_CA |                           \
                                    SHI1005_FLAGS_ENCRYPT_DATA |                        \
                                    SHI1005_FLAGS_DISABLE_CLIENT_BUFFERING |            \
                                    SHI1005_FLAGS_IDENTITY_REMOTING |                   \
                                    SHI1005_FLAGS_CLUSTER_MANAGED |                     \
                                    SHI1005_FLAGS_RESERVED |                            \
                                    SHI1005_FLAGS_COMPRESS_DATA |                       \
                                    SHI1005_FLAGS_ISOLATED_TRANSPORT |                  \
                                    SHI1005_FLAGS_DISABLE_DIRECTORY_HANDLE_LEASING)

#endif /* _LMSHARE_H */

#ifndef _LMSESSION_H
#define _LMSESSION_H

NET_API_STATUS NET_API_FUNCTION NetSessionEnum(
    LMSTR servername,
    LMSTR UncClientName,
    LMSTR username,
    DWORD level,
    LPBYTE *bufptr,
    DWORD prefmaxlen,
    LPDWORD entriesread,
    LPDWORD totalentries,
    LPDWORD resume_handle
);

NET_API_STATUS NET_API_FUNCTION NetSessionDel(
    LMSTR servername,
    LMSTR UncClientName,
    LMSTR username
);

NET_API_STATUS NET_API_FUNCTION NetSessionGetInfo(
    LMSTR servername,
    LMSTR UncClientName,
    LMSTR username,
    DWORD level,
    LPBYTE *bufptr
);

typedef struct _SESSION_INFO_0 {
    LMSTR sesi0_cname;
} SESSION_INFO_0, *PSESSION_INFO_0, *LPSESSION_INFO_0;

typedef struct _SESSION_INFO_1 {
    LMSTR sesi1_cname;
    LMSTR sesi1_username;
    DWORD sesi1_num_opens;
    DWORD sesi1_time;
    DWORD sesi1_idle_time;
    DWORD sesi1_user_flags;
} SESSION_INFO_1, *PSESSION_INFO_1, *LPSESSION_INFO_1;

typedef struct _SESSION_INFO_2 {
    LMSTR sesi2_cname;
    LMSTR sesi2_username;
    DWORD sesi2_num_opens;
    DWORD sesi2_time;
    DWORD sesi2_idle_time;
    DWORD sesi2_user_flags;
    LMSTR sesi2_cltype_name;
} SESSION_INFO_2, *PSESSION_INFO_2, *LPSESSION_INFO_2;

typedef struct _SESSION_INFO_10 {
    LMSTR sesi10_cname;
    LMSTR sesi10_username;
    DWORD sesi10_time;
    DWORD sesi10_idle_time;
} SESSION_INFO_10, *PSESSION_INFO_10, *LPSESSION_INFO_10;

typedef struct _SESSION_INFO_502 {
    LMSTR sesi502_cname;
    LMSTR sesi502_username;
    DWORD sesi502_num_opens;
    DWORD sesi502_time;
    DWORD sesi502_idle_time;
    DWORD sesi502_user_flags;
    LMSTR sesi502_cltype_name;
    LMSTR sesi502_transport;
} SESSION_INFO_502, *PSESSION_INFO_502, *LPSESSION_INFO_502;

#define SESS_GUEST          0x00000001
#define SESS_NOENCRYPTION   0x00000002

#define SESI1_NUM_ELEMENTS  8
#define SESI2_NUM_ELEMENTS  9

#endif /* _LMSESSION_H */


#ifndef _LMCONNECTION_H
#define _LMCONNECTION_H

NET_API_STATUS NET_API_FUNCTION NetConnectionEnum(
    LMSTR servername,
    LMSTR qualifier,
    DWORD level,
    LPBYTE *bufptr,
    DWORD prefmaxlen,
    LPDWORD entriesread,
    LPDWORD totalentries,
    LPDWORD resume_handle
);

typedef struct _CONNECTION_INFO_0 {
    DWORD coni0_id;
} CONNECTION_INFO_0, *PCONNECTION_INFO_0, *LPCONNECTION_INFO_0;

typedef struct _CONNECTION_INFO_1 {
    DWORD coni1_id;
    DWORD coni1_type;
    DWORD coni1_num_opens;
    DWORD coni1_num_users;
    DWORD coni1_time;
    LMSTR coni1_username;
    LMSTR coni1_netname;
} CONNECTION_INFO_1, *PCONNECTION_INFO_1, *LPCONNECTION_INFO_1;

#endif /* _LMCONNECTION_H */


#ifndef _LMFILE_H
#define _LMFILE_H

NET_API_STATUS NET_API_FUNCTION NetFileClose(
    LMSTR servername,
    DWORD fileid
);

NET_API_STATUS NET_API_FUNCTION NetFileEnum(
    LMSTR servername,
    LMSTR basepath,
    LMSTR username,
    DWORD level,
    LPBYTE *bufptr,
    DWORD prefmaxlen,
    LPDWORD entriesread,
    LPDWORD totalentries,
    PDWORD_PTR resume_handle
);

NET_API_STATUS NET_API_FUNCTION NetFileGetInfo(
    LMSTR servername,
    DWORD fileid,
    DWORD level,
    LPBYTE *bufptr
);

typedef struct _FILE_INFO_2 {
    DWORD fi2_id;
} FILE_INFO_2, *PFILE_INFO_2, *LPFILE_INFO_2;

typedef struct _FILE_INFO_3 {
    DWORD fi3_id;
    DWORD fi3_permissions;
    DWORD fi3_num_locks;
    LMSTR fi3_pathname;
    LMSTR fi3_username;
} FILE_INFO_3, *PFILE_INFO_3, *LPFILE_INFO_3;

typedef enum _SERVER_CERTIFICATE_TYPE {
    QUIC
} SERVER_CERTIFICATE_TYPE;

typedef struct _SERVER_CERTIFICATE_INFO_0 {
    LMSTR srvci0_name;
    LMSTR srvci0_subject;
    LMSTR srvci0_issuer;
    LMSTR srvci0_thumbprint;
    LMSTR srvci0_friendlyname;
    LMSTR srvci0_notbefore;
    LMSTR srvci0_notafter;
    LMSTR srvci0_storelocation;
    LMSTR srvci0_storename;
    LMSTR srvci0_renewalchain;
    DWORD srvci0_type;
    DWORD srvci0_flags;
    DWORD srvci0_mapping_status;
} SERVER_CERTIFICATE_INFO_0, *PSERVER_CERTIFICATE_INFO_0, *LPSERVER_CERTIFICATE_INFO_0;

#define PERM_FILE_READ      0x1
#define PERM_FILE_WRITE     0x2
#define PERM_FILE_CREATE    0x4

#endif /* _LMFILE_H */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
