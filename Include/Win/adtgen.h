#ifndef _ADTGEN_H
#define _ADTGEN_H

#if __POCC__ >= 500
#pragma once
#endif

/* Generic audits generating definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2198)  /* Nameless field is not standard */
#endif

#define AUDIT_TYPE_LEGACY  1
#define AUDIT_TYPE_WMI     2

typedef enum _AUDIT_PARAM_TYPE {
    APT_None = 1,
    APT_String,
    APT_Ulong,
    APT_Pointer,
    APT_Sid,
    APT_LogonId,
    APT_ObjectTypeList,
    APT_Luid,
    APT_Guid,
    APT_Time,
    APT_Int64,
    APT_IpAddress,
    APT_LogonIdWithSid
} AUDIT_PARAM_TYPE;

#define AP_ParamTypeBits   8
#define AP_ParamTypeMask   0x000000ffL

#define AP_FormatHex       (0x0001L << AP_ParamTypeBits)
#define AP_AccessMask      (0x0002L << AP_ParamTypeBits)
#define AP_Filespec        (0x0001L << AP_ParamTypeBits)
#define AP_SidAsLogonId    (0x0001L << AP_ParamTypeBits)
#define AP_PrimaryLogonId  (0x0001L << AP_ParamTypeBits)
#define AP_ClientLogonId   (0x0002L << AP_ParamTypeBits)

#define ApExtractType(TypeFlags)   ((AUDIT_PARAM_TYPE)(TypeFlags & AP_ParamTypeMask))
#define ApExtractFlags(TypeFlags)  ((TypeFlags & ~AP_ParamTypeMask))

typedef struct _AUDIT_OBJECT_TYPE {
    GUID ObjectType;
    USHORT Flags;
    USHORT Level;
    ACCESS_MASK AccessMask;
} AUDIT_OBJECT_TYPE, *PAUDIT_OBJECT_TYPE;

typedef struct _AUDIT_OBJECT_TYPES {
    USHORT Count;
    USHORT Flags;
    AUDIT_OBJECT_TYPE *pObjectTypes;
} AUDIT_OBJECT_TYPES, *PAUDIT_OBJECT_TYPES;

#define _AUTHZ_SS_MAXSIZE  128

typedef struct _AUDIT_IP_ADDRESS {
    BYTE pIpAddress[_AUTHZ_SS_MAXSIZE];
} AUDIT_IP_ADDRESS, *PAUDIT_IP_ADDRESS;

typedef struct _AUDIT_PARAM {
    AUDIT_PARAM_TYPE Type;
    ULONG Length;
    DWORD Flags;
    union {
        ULONG_PTR Data0;
        PWSTR String;
        ULONG_PTR u;
        SID *psid;
        GUID *pguid;
        ULONG LogonId_LowPart;
        AUDIT_OBJECT_TYPES *pObjectTypes;
        AUDIT_IP_ADDRESS *pIpAddress;
    } DUMMYUNIONNAME;
    union {
        ULONG_PTR Data1;
        LONG LogonId_HighPart;
    } DUMMYUNIONNAME2;
} AUDIT_PARAM, *PAUDIT_PARAM;

#define APF_AuditFailure 0x00000000
#define APF_AuditSuccess 0x00000001

#define APF_ValidFlags   (APF_AuditSuccess)

typedef struct _AUDIT_PARAMS {
    ULONG Length;
    DWORD Flags;
    USHORT Count;
    AUDIT_PARAM *Parameters;
} AUDIT_PARAMS, *PAUDIT_PARAMS;

typedef struct _AUTHZ_AUDIT_EVENT_TYPE_LEGACY {
    USHORT CategoryId;
    USHORT AuditId;
    USHORT ParameterCount;
} AUTHZ_AUDIT_EVENT_TYPE_LEGACY, *PAUTHZ_AUDIT_EVENT_TYPE_LEGACY;

typedef union _AUTHZ_AUDIT_EVENT_TYPE_UNION {
    AUTHZ_AUDIT_EVENT_TYPE_LEGACY Legacy;
} AUTHZ_AUDIT_EVENT_TYPE_UNION, *PAUTHZ_AUDIT_EVENT_TYPE_UNION;

typedef struct _AUTHZ_AUDIT_EVENT_TYPE_OLD {
    ULONG Version;
    DWORD dwFlags;
    LONG RefCount;
    ULONG_PTR hAudit;
    LUID LinkId;
    AUTHZ_AUDIT_EVENT_TYPE_UNION u;
} AUTHZ_AUDIT_EVENT_TYPE_OLD;

typedef AUTHZ_AUDIT_EVENT_TYPE_OLD *PAUTHZ_AUDIT_EVENT_TYPE_OLD;

#define AUTHZP_WPD_EVENT  0x10

typedef PVOID AUDIT_HANDLE, *PAUDIT_HANDLE;

#define AUTHZ_ALLOW_MULTIPLE_SOURCE_INSTANCES  0x1
#define AUTHZ_MIGRATED_LEGACY_PUBLISHER        0x2

#define AUTHZ_AUDIT_INSTANCE_INFORMATION  0x2

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif //_ADTGEN_H
