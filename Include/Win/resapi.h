#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_CLUSTER)

#ifndef _RESAPI_DEFS_H
#define _RESAPI_DEFS_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Clusters resources definitions */

#include <windows.h>
#include <winsvc.h>
#include <clusapi.h>
#include <stdio.h>

#define STARTUP_ROUTINE "Startup"

#define CLRES_V1_FUNCTION_SIZE  sizeof(CLRES_V1_FUNCTIONS)
#define CLRES_VERSION_V1_00  0x100
#define CLRES_V1_FUNCTION_TABLE( \
    _Name, \
    _Version, \
    _Prefix,  \
    _Arbitrate, \
    _Release, \
    _ResControl, \
    _ResTypeControl \
    ) \
    CLRES_FUNCTION_TABLE _Name = { \
        CLRES_V1_FUNCTION_SIZE, \
        _Version, \
        _Prefix##Open, \
        _Prefix##Close, \
        _Prefix##Online, \
        _Prefix##Offline, \
        _Prefix##Terminate, \
        _Prefix##LooksAlive, \
        _Prefix##IsAlive, \
        _Arbitrate, \
        _Release, \
        _ResControl, \
        _ResTypeControl \
    }

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

#define STARTUP_EX_ROUTINE  "StartupEx"

#define CLRES_V2_FUNCTION_SIZE  sizeof(CLRES_V2_FUNCTIONS)
#define CLRES_VERSION_V2_00  0x200
#define CLRES_V2_FUNCTION_TABLE_SET( \
    _Name, \
    _Version, \
    _Prefix, \
    _Arbitrate, \
    _Release, \
    _ResControl, \
    _ResTypeControl, \
    _LooksAlive, \
    _IsAlive, \
    _Cancel \
    ) \
    _Name.TableSize = CLRES_V2_FUNCTION_SIZE; \
    _Name.Version = _Version; \
    _Name.V2Functions.Open = _Prefix##OpenV2; \
    _Name.V2Functions.Close = _Prefix##Close; \
    _Name.V2Functions.Online = _Prefix##OnlineV2; \
    _Name.V2Functions.Offline = _Prefix##OfflineV2; \
    _Name.V2Functions.Terminate = _Prefix##Terminate; \
    _Name.V2Functions.LooksAlive= _LooksAlive; \
    _Name.V2Functions.IsAlive = _IsAlive; \
    _Name.V2Functions.Arbitrate = _Arbitrate; \
    _Name.V2Functions.Release = _Release; \
    _Name.V2Functions.ResourceControl = _ResControl; \
    _Name.V2Functions.ResourceTypeControl = _ResTypeControl; \
    _Name.V2Functions.Cancel = _Cancel;

#define CLRES_V3_FUNCTION_SIZE  sizeof(CLRES_V3_FUNCTIONS)
#define CLRES_VERSION_V3_00  0x300
#define CLRES_V3_FUNCTION_TABLE_SET( \
    _Name, \
    _Version, \
    _Prefix, \
    _Arbitrate, \
    _Release, \
    _BeginResourceControl, \
    _BeginResourceTypeControl, \
    _LooksAlive, \
    _IsAlive, \
    _Cancel \
    ) \
    _Name.TableSize = CLRES_V3_FUNCTION_SIZE; \
    _Name.Version = _Version; \
    _Name.V3Functions.Open = _Prefix##OpenV2; \
    _Name.V3Functions.Close = _Prefix##Close; \
    _Name.V3Functions.Online = _Prefix##OnlineV2; \
    _Name.V3Functions.Offline = _Prefix##OfflineV2; \
    _Name.V3Functions.Terminate = _Prefix##Terminate; \
    _Name.V3Functions.LooksAlive= _LooksAlive; \
    _Name.V3Functions.IsAlive = _IsAlive; \
    _Name.V3Functions.Arbitrate = _Arbitrate; \
    _Name.V3Functions.Release = _Release; \
    _Name.V3Functions.Cancel = _Cancel; \
    _Name.V3Functions.BeginResourceControl= _BeginResourceControl; \
    _Name.V3Functions.BeginResourceTypeControl= _BeginResourceTypeControl

#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8 */

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINTHRESHOLD)

#define CLRES_V4_FUNCTION_SIZE  sizeof(CLRES_V4_FUNCTIONS)
#define CLRES_VERSION_V4_00  0x400
#define CLRES_V4_FUNCTION_TABLE_SET( \
    _Name, \
    _Version, \
    _Prefix, \
    _Arbitrate, \
    _Release, \
    _BeginResCtrl, \
    _BeginResTypeCtrl, \
    _LooksAlive, \
    _IsAlive, \
    _Cancel, \
    _BeginResCtrlAsUser, \
    _BeginResTypeCtrlAsUser \
    ) \
    _Name.TableSize = CLRES_V4_FUNCTION_SIZE; \
    _Name.Version = _Version; \
    _Name.V4Functions.Open = _Prefix##OpenV2; \
    _Name.V4Functions.Close = _Prefix##Close; \
    _Name.V4Functions.Online = _Prefix##OnlineV2; \
    _Name.V4Functions.Offline = _Prefix##OfflineV2; \
    _Name.V4Functions.Terminate = _Prefix##Terminate; \
    _Name.V4Functions.LooksAlive= _LooksAlive; \
    _Name.V4Functions.IsAlive = _IsAlive; \
    _Name.V4Functions.Arbitrate = _Arbitrate; \
    _Name.V4Functions.Release = _Release; \
    _Name.V4Functions.Cancel = _Cancel; \
    _Name.V4Functions.BeginResourceControl= _BeginResCtrl; \
    _Name.V4Functions.BeginResourceTypeControl= _BeginResTypeCtrl; \
    _Name.V4Functions.BeginResourceControlAsUser= _BeginResCtrlAsUser; \
    _Name.V4Functions.BeginResourceTypeControlAsUser= _BeginResTypeCtrlAsUser

#endif /* (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINTHRESHOLD) */

#endif /* _RESAPI_DEFS_H */


#ifndef _RESAPI_H
#define _RESAPI_H

typedef PVOID RESID;
typedef HANDLE RESOURCE_HANDLE;

#define ClusterResourceCannotComeOnlineOnThisNode ( CLUSTER_RESOURCE_STATE ) ( ClusterResourcePending - 1 )
#define ClusterResourceCannotComeOnlineOnAnyNode  ( CLUSTER_RESOURCE_STATE ) ( ClusterResourcePending - 2 )

typedef struct RESOURCE_STATUS {
    CLUSTER_RESOURCE_STATE ResourceState;
    DWORD CheckPoint;
    DWORD WaitHint;
    HANDLE EventHandle;
} RESOURCE_STATUS, *PRESOURCE_STATUS;

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

struct NodeUtilizationInfoElement {
    ULONGLONG Id;
    ULONGLONG AvailableMemory;
    ULONGLONG AvailableMemoryAfterReclamation;
};

struct ResourceUtilizationInfoElement {
    ULONGLONG PhysicalNumaId;
    ULONGLONG CurrentMemory;
};

typedef enum VM_RESDLL_CONTEXT {
    VmResdllContextTurnOff = 0,
    VmResdllContextSave = 1,
    VmResdllContextShutdown = 2,
    VmResdllContextShutdownForce = 3,
    VmResdllContextLiveMigration = 4
} VM_RESDLL_CONTEXT, *PVM_RESDLL_CONTEXT;

typedef enum RESDLL_CONTEXT_OPERATION_TYPE {
    ResdllContextOperationTypeFailback,
    ResdllContextOperationTypeDrain,
    ResdllContextOperationTypeDrainFailure,
    ResdllContextOperationTypeEmbeddedFailure,
    ResdllContextOperationTypePreemption,
    ResdllContextOperationTypeNetworkDisconnect,
    ResdllContextOperationTypeNetworkDisconnectMoveRetry
} RESDLL_CONTEXT_OPERATION_TYPE, *PRESDLL_CONTEXT_OPERATION_TYPE;

#define CLUSCTL_GET_OPERATION_CONTEXT_PARAMS_VERSION_1  1

typedef struct GET_OPERATION_CONTEXT_PARAMS {
    DWORD Size;
    DWORD Version;
    RESDLL_CONTEXT_OPERATION_TYPE Type;
    DWORD Priority;
} GET_OPERATION_CONTEXT_PARAMS, *PGET_OPERATION_CONTEXT_PARAMS;

#define CLUSRES_GET_OPERATION_CONTEXT_FLAGS     { CLUSRES_NAME_GET_OPERATION_CONTEXT_FLAGS, NULL, CLUSPROP_FORMAT_DWORD, 0, 0, 0xFFFFFFFF, RESUTIL_PROPITEM_REQUIRED, 0 }
#define CLUSRES_NAME_GET_OPERATION_CONTEXT_FLAGS  L"Flags"

#define RESOURCE_SPECIFIC_STATUS_PROP_ITEM      { CLUSREG_NAME_RES_STATUS, NULL, CLUSPROP_FORMAT_SZ,                0, 0, 0, RESUTIL_PROPITEM_IN_MEMORY, 0 }
#define RESOURCE_SPECIFIC_DATA1_PROP_ITEM       { CLUSREG_NAME_RES_DATA1,  NULL, CLUSPROP_FORMAT_ULARGE_INTEGER,    0, 0, 0, RESUTIL_PROPITEM_READ_ONLY | RESUTIL_PROPITEM_IN_MEMORY, 0 }
#define RESOURCE_SPECIFIC_DATA2_PROP_ITEM       { CLUSREG_NAME_RES_DATA2,  NULL, CLUSPROP_FORMAT_ULARGE_INTEGER,    0, 0, 0, RESUTIL_PROPITEM_READ_ONLY | RESUTIL_PROPITEM_IN_MEMORY, 0 }

#define CLUSRESDLL_STATUS_OFFLINE_BUSY                      0x00000001
#define CLUSRESDLL_STATUS_OFFLINE_SOURCE_THROTTLED          0x00000002
#define CLUSRESDLL_STATUS_OFFLINE_DESTINATION_THROTTLED     0x00000004
#define CLUSRESDLL_STATUS_OFFLINE_DESTINATION_REJECTED      0x00000008
#define CLUSRESDLL_STATUS_INSUFFICIENT_MEMORY               0x00000010
#define CLUSRESDLL_STATUS_INSUFFICIENT_PROCESSOR            0x00000020
#define CLUSRESDLL_STATUS_INSUFFICIENT_OTHER_RESOURCES      0x00000040
#define CLUSRESDLL_STATUS_INVALID_PARAMETERS                0x00000080
#define CLUSRESDLL_STATUS_NETWORK_NOT_AVAILABLE             0x00000100
#define CLUSRESDLL_STATUS_DO_NOT_COLLECT_WER_REPORT         0x40000000
#define CLUSRESDLL_STATUS_DUMP_NOW                          0x80000000

typedef struct RESOURCE_STATUS_EX {
    CLUSTER_RESOURCE_STATE ResourceState;
    DWORD CheckPoint;
    HANDLE EventHandle;
    DWORD ApplicationSpecificErrorCode;
    DWORD Flags;
    DWORD WaitHint;
} RESOURCE_STATUS_EX, *PRESOURCE_STATUS_EX;

typedef DWORD (_stdcall *PSET_RESOURCE_STATUS_ROUTINE_EX)(
    RESOURCE_HANDLE ResourceHandle,
    PRESOURCE_STATUS_EX ResourceStatus
);

#define ResUtilInitializeResourceStatusEx( _resource_status_ ) \
    ZeroMemory( _resource_status_, sizeof(RESOURCE_STATUS_EX) )

#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8 */

#define ResUtilInitializeResourceStatus(_resource_status_)  \
    ZeroMemory(_resource_status_, sizeof(RESOURCE_STATUS))

typedef DWORD (_stdcall *PSET_RESOURCE_STATUS_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    PRESOURCE_STATUS ResourceStatus
);

typedef void (_stdcall *PQUORUM_RESOURCE_LOST)(
    RESOURCE_HANDLE Resource
);

typedef enum LOG_LEVEL {
    LOG_INFORMATION,
    LOG_WARNING,
    LOG_ERROR,
    LOG_SEVERE
} LOG_LEVEL, *PLOG_LEVEL;

typedef void (__cdecl /*_stdcall*/ *PLOG_EVENT_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    LOG_LEVEL LogLevel,
    LPCWSTR FormatString,
    ...
);

typedef RESID (_stdcall *POPEN_ROUTINE)(
    LPCWSTR ResourceName,
    HKEY ResourceKey,
    RESOURCE_HANDLE ResourceHandle
);

typedef void (_stdcall *PCLOSE_ROUTINE)(
    RESID Resource
);

typedef DWORD (_stdcall *PONLINE_ROUTINE)(
    RESID Resource,
    LPHANDLE EventHandle
);

typedef DWORD (_stdcall *POFFLINE_ROUTINE)(
    RESID Resource
);

typedef void (_stdcall *PTERMINATE_ROUTINE)(
    RESID Resource
);

typedef BOOL (_stdcall *PIS_ALIVE_ROUTINE)(
    RESID Resource
);

typedef BOOL (_stdcall *PLOOKS_ALIVE_ROUTINE)(
    RESID Resource
);

typedef DWORD (_stdcall *PARBITRATE_ROUTINE)(
    RESID Resource,
    PQUORUM_RESOURCE_LOST LostQuorumResource
);

typedef DWORD (_stdcall *PRELEASE_ROUTINE)(
    RESID Resource
);

typedef DWORD (_stdcall *PRESOURCE_CONTROL_ROUTINE)(
    RESID Resource,
    DWORD ControlCode,
    PVOID InBuffer,
    DWORD InBufferSize,
    PVOID OutBuffer,
    DWORD OutBufferSize,
    LPDWORD BytesReturned
);

typedef DWORD (_stdcall *PRESOURCE_TYPE_CONTROL_ROUTINE)(
    LPCWSTR ResourceTypeName,
    DWORD ControlCode,
    PVOID InBuffer,
    DWORD InBufferSize,
    PVOID OutBuffer,
    DWORD OutBufferSize,
    LPDWORD BytesReturned
);

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

#define CLUS_RESDLL_OPEN_RECOVER_MONITOR_STATE 0x00000001

typedef RESID (_stdcall *POPEN_V2_ROUTINE)(
    LPCWSTR ResourceName,
    HKEY ResourceKey,
    RESOURCE_HANDLE ResourceHandle,
    DWORD OpenFlags
);

#define CLUS_RESDLL_ONLINE_RECOVER_MONITOR_STATE          0x00000001
#define CLUS_RESDLL_ONLINE_IGNORE_RESOURCE_STATUS         0x00000002
#define CLUS_RESDLL_ONLINE_RETURN_TO_SOURCE_NODE_ON_ERROR 0x00000004
#define CLUS_RESDLL_ONLINE_RESTORE_ONLINE_STATE           0x00000008
#define CLUS_RESDLL_ONLINE_IGNORE_NETWORK_CONNECTIVITY    0x00000010

typedef DWORD (_stdcall *PONLINE_V2_ROUTINE)(
    RESID Resource,
    LPHANDLE EventHandle,
    DWORD OnlineFlags,
    PBYTE InBuffer,
    DWORD InBufferSize,
    DWORD Reserved
);

#define CLUS_RESDLL_OFFLINE_IGNORE_RESOURCE_STATUS                    0x00000001
#define CLUS_RESDLL_OFFLINE_RETURN_TO_SOURCE_NODE_ON_ERROR            0x00000002
#define CLUS_RESDLL_OFFLINE_QUEUE_ENABLED                             0x00000004
#define CLUS_RESDLL_OFFLINE_RETURNING_TO_SOURCE_NODE_BECAUSE_OF_ERROR 0x00000008
#define CLUS_RESDLL_OFFLINE_DUE_TO_EMBEDDED_FAILURE                   0x00000010
#define CLUS_RESDLL_OFFLINE_IGNORE_NETWORK_CONNECTIVITY               0x00000020
#define CLUS_RESDLL_OFFLINE_DO_NOT_UPDATE_PERSISTENT_STATE            0x00000040

typedef DWORD (_stdcall *POFFLINE_V2_ROUTINE)(
    RESID Resource,
    LPCWSTR DestinationNodeName,
    DWORD OfflineFlags,
    PBYTE InBuffer,
    DWORD InBufferSize,
    DWORD Reserved
);

typedef DWORD (_stdcall *PCANCEL_ROUTINE)(
    RESID Resource,
    DWORD CancelFlags_RESERVED
);

typedef INT64 PRESTYPE_CTL_CTX;
typedef INT64 PRES_CTL_CTX;

typedef DWORD (_stdcall *PBEGIN_RESCALL_ROUTINE)(
    RESID Resource,
    DWORD ControlCode,
    PVOID InBuffer,
    DWORD InBufferSize,
    PVOID OutBuffer,
    DWORD OutBufferSize,
    LPDWORD BytesReturned,
    PRES_CTL_CTX context,
    PBOOL ReturnedAsynchronously
);

typedef DWORD (_stdcall *PBEGIN_RESTYPECALL_ROUTINE)(
    LPCWSTR ResourceTypeName,
    DWORD ControlCode,
    PVOID InBuffer,
    DWORD InBufferSize,
    PVOID OutBuffer,
    DWORD OutBufferSize,
    LPDWORD BytesReturned,
    PRESTYPE_CTL_CTX context,
    PBOOL ReturnedAsynchronously
);

#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8 */

typedef enum _RESOURCE_EXIT_STATE {
    ResourceExitStateContinue,
    ResourceExitStateTerminate,
    ResourceExitStateMax
} RESOURCE_EXIT_STATE;

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINTHRESHOLD

typedef DWORD (_stdcall *PBEGIN_RESCALL_AS_USER_ROUTINE)(
    RESID Resource,
    HANDLE TokenHandle,
    DWORD ControlCode,
    PVOID InBuffer,
    DWORD InBufferSize,
    PVOID OutBuffer,
    DWORD OutBufferSize,
    LPDWORD BytesReturned,
    PRES_CTL_CTX context,
    PBOOL ReturnedAsynchronously
);

typedef DWORD (_stdcall *PBEGIN_RESTYPECALL_AS_USER_ROUTINE)(
    LPCWSTR ResourceTypeName,
    HANDLE TokenHandle,
    DWORD ControlCode,
    PVOID InBuffer,
    DWORD InBufferSize,
    PVOID OutBuffer,
    DWORD OutBufferSize,
    LPDWORD BytesReturned,
    PRESTYPE_CTL_CTX context,
    PBOOL ReturnedAsynchronously
);

#define CLUS_RESDLL_OPEN_DONT_DELETE_TEMP_DISK 0x00000002

#define RESTYPE_MONITOR_SHUTTING_DOWN_NODE_STOP         0x00000001
#define RESTYPE_MONITOR_SHUTTING_DOWN_CLUSSVC_CRASH     0x00000002

#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINTHRESHOLD */

typedef struct CLRES_V1_FUNCTIONS {
    POPEN_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_ROUTINE Online;
    POFFLINE_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PRESOURCE_CONTROL_ROUTINE ResourceControl;
    PRESOURCE_TYPE_CONTROL_ROUTINE ResourceTypeControl;
} CLRES_V1_FUNCTIONS, *PCLRES_V1_FUNCTIONS;

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

typedef struct CLRES_V2_FUNCTIONS {
    POPEN_V2_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_V2_ROUTINE Online;
    POFFLINE_V2_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PRESOURCE_CONTROL_ROUTINE ResourceControl;
    PRESOURCE_TYPE_CONTROL_ROUTINE ResourceTypeControl;
    PCANCEL_ROUTINE Cancel;
} CLRES_V2_FUNCTIONS, *PCLRES_V2_FUNCTIONS;

typedef struct CLRES_V3_FUNCTIONS {
    POPEN_V2_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_V2_ROUTINE Online;
    POFFLINE_V2_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PBEGIN_RESCALL_ROUTINE BeginResourceControl;
    PBEGIN_RESTYPECALL_ROUTINE BeginResourceTypeControl;
    PCANCEL_ROUTINE Cancel;
} CLRES_V3_FUNCTIONS, *PCLRES_V3_FUNCTIONS;
#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8 */

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINTHRESHOLD

typedef struct CLRES_V4_FUNCTIONS {
    POPEN_V2_ROUTINE Open;
    PCLOSE_ROUTINE Close;
    PONLINE_V2_ROUTINE Online;
    POFFLINE_V2_ROUTINE Offline;
    PTERMINATE_ROUTINE Terminate;
    PLOOKS_ALIVE_ROUTINE LooksAlive;
    PIS_ALIVE_ROUTINE IsAlive;
    PARBITRATE_ROUTINE Arbitrate;
    PRELEASE_ROUTINE Release;
    PBEGIN_RESCALL_ROUTINE BeginResourceControl;
    PBEGIN_RESTYPECALL_ROUTINE BeginResourceTypeControl;
    PCANCEL_ROUTINE Cancel;
    PBEGIN_RESCALL_AS_USER_ROUTINE BeginResourceControlAsUser;
    PBEGIN_RESTYPECALL_AS_USER_ROUTINE BeginResourceTypeControlAsUser;
} CLRES_V4_FUNCTIONS, *PCLRES_V4_FUNCTIONS;

#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINTHRESHOLD */

typedef struct CLRES_FUNCTION_TABLE {
    DWORD TableSize;
    DWORD Version;
    union {
        CLRES_V1_FUNCTIONS V1Functions;
#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8
        CLRES_V2_FUNCTIONS V2Functions;
        CLRES_V3_FUNCTIONS V3Functions;
#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8 */
#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINTHRESHOLD
        CLRES_V4_FUNCTIONS V4Functions;
#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINTHRESHOLD */
    } DUMMYUNIONNAME;
} CLRES_FUNCTION_TABLE, *PCLRES_FUNCTION_TABLE;

#ifndef FIELD_OFFSET
#define FIELD_OFFSET(type, field)  ((LONG)&(((type *)0)->field))
#endif /* !FIELD_OFFSET */

typedef struct RESUTIL_LARGEINT_DATA {
    LARGE_INTEGER Default;
    LARGE_INTEGER Minimum;
    LARGE_INTEGER Maximum;
} RESUTIL_LARGEINT_DATA, *PRESUTIL_LARGEINT_DATA;

typedef struct RESUTIL_ULARGEINT_DATA {
    ULARGE_INTEGER Default;
    ULARGE_INTEGER Minimum;
    ULARGE_INTEGER Maximum;
} RESUTIL_ULARGEINT_DATA, *PRESUTIL_ULARGEINT_DATA;

typedef struct RESUTIL_FILETIME_DATA {
    FILETIME Default;
    FILETIME Minimum;
    FILETIME Maximum;
} RESUTIL_FILETIME_DATA, *PRESUTIL_FILETIME_DATA;

typedef struct RESUTIL_PROPERTY_ITEM {
    LPWSTR Name;
    LPWSTR KeyName;
    DWORD Format;
    union {
        DWORD_PTR DefaultPtr;
        DWORD Default;
        LPVOID lpDefault;
        PRESUTIL_LARGEINT_DATA LargeIntData;
        PRESUTIL_ULARGEINT_DATA ULargeIntData;
        PRESUTIL_FILETIME_DATA FileTimeData;
    } DUMMYUNIONNAME;
    DWORD Minimum;
    DWORD Maximum;
    DWORD Flags;
#define RESUTIL_PROPITEM_READ_ONLY    0x00000001
#define RESUTIL_PROPITEM_REQUIRED     0x00000002
#define RESUTIL_PROPITEM_SIGNED       0x00000004
#define RESUTIL_PROPITEM_IN_MEMORY    0x00000008
    DWORD Offset;
} RESUTIL_PROPERTY_ITEM, *PRESUTIL_PROPERTY_ITEM;

typedef DWORD (_stdcall *PSTARTUP_ROUTINE)(
    LPCWSTR ResourceType,
    DWORD MinVersionSupported,
    DWORD MaxVersionSupported,
    PSET_RESOURCE_STATUS_ROUTINE SetResourceStatus,
    PLOG_EVENT_ROUTINE LogEvent,
    PCLRES_FUNCTION_TABLE *FunctionTable
);

#if CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8

typedef enum _FAILURE_TYPE {
    FAILURE_TYPE_GENERAL = 0,
    FAILURE_TYPE_EMBEDDED = 1,
    FAILURE_TYPE_NETWORK_LOSS = 2
} FAILURE_TYPE, *PFAILURE_TYPE;

typedef enum CLUSTER_RESOURCE_APPLICATION_STATE {
    ClusterResourceApplicationStateUnknown = 1,
    ClusterResourceApplicationOSHeartBeat,
    ClusterResourceApplicationReady
} CLUSTER_RESOURCE_APPLICATION_STATE;

typedef DWORD (_stdcall *PSET_RESOURCE_LOCKED_MODE_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    BOOL LockedModeEnabled,
    DWORD LockedModeReason
);

typedef DWORD (_stdcall *PSIGNAL_FAILURE_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    FAILURE_TYPE FailureType,
    DWORD ApplicationSpecificErrorCode
);

typedef DWORD (_stdcall *PSET_RESOURCE_INMEMORY_NODELOCAL_PROPERTIES_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    unsigned char *propertyListBuffer,
    DWORD propertyListBufferSize
);

typedef DWORD (_stdcall *PEND_CONTROL_CALL)(
    const PRES_CTL_CTX context,
    DWORD status
);

typedef DWORD (_stdcall *PEND_TYPE_CONTROL_CALL)(
    const PRESTYPE_CTL_CTX context,
    DWORD status
);

typedef DWORD (_stdcall *PEXTEND_RES_CONTROL_CALL)(
    const PRES_CTL_CTX context,
    DWORD newTimeoutInMs
);

typedef DWORD (_stdcall *PEXTEND_RES_TYPE_CONTROL_CALL)(
    const PRESTYPE_CTL_CTX context,
    DWORD newTimeoutInMs
);

typedef DWORD (_stdcall *PRAISE_RES_TYPE_NOTIFICATION)(
    LPCWSTR ResourceType,
    const PBYTE pPayload,
    DWORD payloadSize
);

typedef DWORD (_stdcall *PCHANGE_RESOURCE_PROCESS_FOR_DUMPS)(
    RESOURCE_HANDLE resource,
    LPCWSTR processName,
    DWORD processId,
    BOOL isAdd
);
typedef DWORD (_stdcall *PCHANGE_RES_TYPE_PROCESS_FOR_DUMPS)(
    LPCWSTR resourceTypeName,
    LPCWSTR processName,
    DWORD processId,
    BOOL isAdd
);

typedef DWORD (_stdcall *PSET_INTERNAL_STATE)(
    RESOURCE_HANDLE,
    CLUSTER_RESOURCE_APPLICATION_STATE stateType,
    BOOL active
);

#define LOCKED_MODE_FLAGS_DONT_REMOVE_FROM_MOVE_QUEUE  0x00000001

typedef DWORD (_stdcall *PSET_RESOURCE_LOCKED_MODE_EX_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    BOOL LockedModeEnabled,
    DWORD LockedModeReason,
    DWORD LockedModeFlags
);

typedef DWORD (_stdcall *PREQUEST_DUMP_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    BOOL DumpDueToCallInProgress,
    DWORD DumpDelayInMs
);

#define CLUSRES_DISABLE_WPR_WATCHDOG_FOR_ONLINE_CALLS   0x00000001
#define CLUSRES_DISABLE_WPR_WATCHDOG_FOR_OFFLINE_CALLS  0x00000002

typedef DWORD (_stdcall *PSET_RESOURCE_WPR_POLICY_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    DWORD WprPolicyFlags
);

#define ARM_WPR_WATCHDOG_USING_CURRENT_START_AFTER  0xffffffffffffffffULL

typedef DWORD (_stdcall *PARM_WPR_WATCHDOG_FOR_CURRENT_RESOURCE_CALL_ROUTINE)(
    RESOURCE_HANDLE ResourceHandle,
    ULONGLONG TimeoutInMs
);

typedef struct CLRES_CALLBACK_FUNCTION_TABLE {
    PLOG_EVENT_ROUTINE LogEvent;
    PSET_RESOURCE_STATUS_ROUTINE_EX SetResourceStatusEx;
    PSET_RESOURCE_LOCKED_MODE_ROUTINE SetResourceLockedMode;
    PSIGNAL_FAILURE_ROUTINE SignalFailure;
    PSET_RESOURCE_INMEMORY_NODELOCAL_PROPERTIES_ROUTINE SetResourceInMemoryNodeLocalProperties;
    PEND_CONTROL_CALL EndControlCall;
    PEND_TYPE_CONTROL_CALL EndTypeControlCall;
    PEXTEND_RES_CONTROL_CALL ExtendControlCall;
    PEXTEND_RES_TYPE_CONTROL_CALL ExtendTypeControlCall;
    PRAISE_RES_TYPE_NOTIFICATION RaiseResTypeNotification;
    PCHANGE_RESOURCE_PROCESS_FOR_DUMPS ChangeResourceProcessForDumps;
    PCHANGE_RES_TYPE_PROCESS_FOR_DUMPS ChangeResTypeProcessForDumps;
    PSET_INTERNAL_STATE SetInternalState;
    PSET_RESOURCE_LOCKED_MODE_EX_ROUTINE SetResourceLockedModeEx;
    PREQUEST_DUMP_ROUTINE RequestDump;
    PSET_RESOURCE_WPR_POLICY_ROUTINE SetResourceWprPolicy;
    PARM_WPR_WATCHDOG_FOR_CURRENT_RESOURCE_CALL_ROUTINE ArmWprWatchdogForCurrentResourceCall;
}CLRES_CALLBACK_FUNCTION_TABLE, *PCLRES_CALLBACK_FUNCTION_TABLE;

typedef DWORD (_stdcall *PSTARTUP_EX_ROUTINE)(
    LPCWSTR ResourceType,
    DWORD MinVersionSupported,
    DWORD MaxVersionSupported,
    PCLRES_CALLBACK_FUNCTION_TABLE MonitorCallbackFunctions,
    PCLRES_FUNCTION_TABLE *ResourceDllInterfaceFunctions
);

#endif /* CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8 */

typedef enum RESOURCE_MONITOR_STATE {
    RmonInitializing,
    RmonIdle,
    RmonStartingResource,
    RmonInitializingResource,
    RmonOnlineResource,
    RmonOfflineResource,
    RmonShutdownResource,
    RmonDeletingResource,
    RmonIsAlivePoll,
    RmonLooksAlivePoll,
    RmonArbitrateResource,
    RmonReleaseResource,
    RmonResourceControl,
    RmonResourceTypeControl,
    RmonTerminateResource,
    RmonDeadlocked
} RESOURCE_MONITOR_STATE;

typedef struct MONITOR_STATE {
    LARGE_INTEGER LastUpdate;
    RESOURCE_MONITOR_STATE State;
    HANDLE ActiveResource;
    BOOL ResmonStop;
} MONITOR_STATE, *PMONITOR_STATE;

typedef struct POST_UPGRADE_VERSION_INFO {
    DWORD newMajorVersion;
    DWORD newUpgradeVersion;
    DWORD oldMajorVersion;
    DWORD oldUpgradeVersion;
    DWORD reserved;
} POST_UPGRADE_VERSION_INFO, *PPOST_UPGRADE_VERSION_INFO;

#define CLUSTER_HEALTH_FAULT_PROPERTY_NAME L"ClusterHealth"

#define CLUSTER_HEALTH_FAULT_ID  0
#define CLUSTER_HEALTH_FAULT_ERRORTYPE  1
#define CLUSTER_HEALTH_FAULT_ERRORCODE  2
#define CLUSTER_HEALTH_FAULT_DESCRIPTION  3
#define CLUSTER_HEALTH_FAULT_PROVIDER  4
#define CLUSTER_HEALTH_FAULT_FLAGS  5
#define CLUSTER_HEALTH_FAULT_RESERVED  6
#define CLUSTER_HEALTH_FAULT_ARGS  7

#define CLUSTER_HEALTH_FAULT_ID_LABEL  L"Id"
#define CLUSTER_HEALTH_FAULT_ERRORTYPE_LABEL  L"ErrorType"
#define CLUSTER_HEALTH_FAULT_ERRORCODE_LABEL  L"ErrorCode"
#define CLUSTER_HEALTH_FAULT_DESCRIPTION_LABEL  L"Description"
#define CLUSTER_HEALTH_FAULT_PROVIDER_LABEL  L"Provider"
#define CLUSTER_HEALTH_FAULT_FLAGS_LABEL  L"Flags"
#define CLUSTER_HEALTH_FAULT_RESERVED_LABEL  L"Reserved"

typedef struct _CLUSTER_HEALTH_FAULT {
    LPWSTR Id;
    DWORD ErrorType;
    DWORD ErrorCode;
    LPWSTR Description;
    LPWSTR Provider;
    DWORD Flags;
    DWORD Reserved;
} CLUSTER_HEALTH_FAULT, *PCLUSTER_HEALTH_FAULT;

typedef struct _CLUSTER_HEALTH_FAULT_ARRAY {
    DWORD numFaults;
    CLUSTER_HEALTH_FAULT *faults;
} CLUSTER_HEALTH_FAULT_ARRAY, *PCLUSTER_HEALTH_FAULT_ARRAY;

DWORD InitializeClusterHealthFault(
    CLUSTER_HEALTH_FAULT *clusterHealthFault
);

DWORD InitializeClusterHealthFaultArray(
    CLUSTER_HEALTH_FAULT_ARRAY *clusterHealthFaultArray
);

DWORD FreeClusterHealthFault(
    CLUSTER_HEALTH_FAULT *clusterHealthFault
);

DWORD FreeClusterHealthFaultArray(
    CLUSTER_HEALTH_FAULT_ARRAY *clusterHealthFaultArray
);

DWORD WINAPI ClusGetClusterHealthFaults(
    HCLUSTER hCluster,
    CLUSTER_HEALTH_FAULT_ARRAY *objects,
    DWORD flags);

DWORD WINAPI ClusRemoveClusterHealthFault(
    HCLUSTER hCluster,
    LPCWSTR id,
    DWORD flags
);

DWORD WINAPI ClusAddClusterHealthFault(
    HCLUSTER hCluster,
    CLUSTER_HEALTH_FAULT *failure,
    DWORD flags
);

DWORD WINAPI ResUtilStartResourceService(
    LPCWSTR pszServiceName,
    LPSC_HANDLE phServiceHandle
);

typedef DWORD (WINAPI *PRESUTIL_START_RESOURCE_SERVICE)(
    LPCWSTR pszServiceName,
    LPSC_HANDLE phServiceHandle
);

DWORD WINAPI ResUtilVerifyResourceService(
    LPCWSTR pszServiceName
);

typedef DWORD (WINAPI *PRESUTIL_VERIFY_RESOURCE_SERVICE)(
    LPCWSTR pszServiceName
);

DWORD WINAPI ResUtilStopResourceService(
    LPCWSTR pszServiceName
);

typedef DWORD (WINAPI *PRESUTIL_STOP_RESOURCE_SERVICE)(
    LPCWSTR pszServiceName
);

DWORD WINAPI ResUtilVerifyService(
    SC_HANDLE hServiceHandle
);

typedef DWORD (WINAPI *PRESUTIL_VERIFY_SERVICE)(
    SC_HANDLE hServiceHandle
);

DWORD WINAPI ResUtilStopService(
    SC_HANDLE hServiceHandle
);

typedef DWORD (WINAPI *PRESUTIL_STOP_SERVICE)(
    SC_HANDLE hServiceHandle
);

DWORD WINAPI ResUtilCreateDirectoryTree(
    LPCWSTR pszPath
);

typedef DWORD (WINAPI *PRESUTIL_CREATE_DIRECTORY_TREE)(
    LPCWSTR pszPath
);

BOOL WINAPI ResUtilIsPathValid(
    LPCWSTR pszPath
);

typedef BOOL (WINAPI *PRESUTIL_IS_PATH_VALID)(
    LPCWSTR pszPath
);

DWORD WINAPI ResUtilEnumProperties(
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    LPWSTR pszOutProperties,
    DWORD cbOutPropertiesSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

typedef DWORD (WINAPI *PRESUTIL_ENUM_PROPERTIES)(
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    LPWSTR pszOutProperties,
    DWORD cbOutPropertiesSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

DWORD WINAPI ResUtilEnumPrivateProperties(
    HKEY hkeyClusterKey,
    LPWSTR pszOutProperties,
    DWORD cbOutPropertiesSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

typedef DWORD (WINAPI *PRESUTIL_ENUM_PRIVATE_PROPERTIES)(
    HKEY hkeyClusterKey,
    LPWSTR pszOutProperties,
    DWORD cbOutPropertiesSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

DWORD WINAPI ResUtilGetProperties(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyList,
    DWORD cbOutPropertyListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

typedef DWORD (WINAPI *PRESUTIL_GET_PROPERTIES)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyList,
    DWORD cbOutPropertyListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

DWORD WINAPI ResUtilGetAllProperties(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyList,
    DWORD cbOutPropertyListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

typedef DWORD (WINAPI *PRESUTIL_GET_ALL_PROPERTIES)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyList,
    DWORD cbOutPropertyListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

DWORD WINAPI ResUtilGetPrivateProperties(
    HKEY hkeyClusterKey,
    PVOID pOutPropertyList,
    DWORD cbOutPropertyListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

typedef DWORD (WINAPI *PRESUTIL_GET_PRIVATE_PROPERTIES)(
    HKEY hkeyClusterKey,
    PVOID pOutPropertyList,
    DWORD cbOutPropertyListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

DWORD WINAPI ResUtilGetPropertySize(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    LPDWORD pcbOutPropertyListSize,
    LPDWORD pnPropertyCount
);

typedef DWORD (WINAPI *PRESUTIL_GET_PROPERTY_SIZE)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    LPDWORD pcbOutPropertyListSize,
    LPDWORD pnPropertyCount
);

DWORD WINAPI ResUtilGetProperty(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    PVOID *pOutPropertyItem,
    LPDWORD pcbOutPropertyItemSize
);

typedef DWORD (WINAPI *PRESUTIL_GET_PROPERTY)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTableItem,
    PVOID *pOutPropertyItem,
    LPDWORD pcbOutPropertyItemSize
);

DWORD WINAPI ResUtilVerifyPropertyTable(
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    BOOL bAllowUnknownProperties,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    LPBYTE pOutParams
);

typedef DWORD (WINAPI *PRESUTIL_VERIFY_PROPERTY_TABLE)(
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    BOOL bAllowUnknownProperties,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    LPBYTE pOutParams
);

DWORD WINAPI ResUtilSetPropertyTable(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    BOOL bAllowUnknownProperties,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    LPBYTE pOutParams
);

typedef DWORD (WINAPI *PRESUTIL_SET_PROPERTY_TABLE)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    BOOL bAllowUnknownProperties,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    LPBYTE pOutParams
);

DWORD WINAPI ResUtilSetPropertyTableEx(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    BOOL bAllowUnknownProperties,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    BOOL bForceWrite,
    LPBYTE pOutParams
);

typedef DWORD (WINAPI *PRESUTIL_SET_PROPERTY_TABLE_EX)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    BOOL bAllowUnknownProperties,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    BOOL bForceWrite,
    LPBYTE pOutParams
);

DWORD WINAPI ResUtilSetPropertyParameterBlock(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    const LPBYTE pInParams,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    LPBYTE pOutParams
);

typedef DWORD (WINAPI *PRESUTIL_SET_PROPERTY_PARAMETER_BLOCK)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    const LPBYTE pInParams,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    LPBYTE pOutParams
);

DWORD WINAPI ResUtilSetPropertyParameterBlockEx(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    const LPBYTE pInParams,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    BOOL bForceWrite,
    LPBYTE pOutParams
);

typedef DWORD (WINAPI *PRESUTIL_SET_PROPERTY_PARAMETER_BLOCK_EX)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID Reserved,
    const LPBYTE pInParams,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize,
    BOOL bForceWrite,
    LPBYTE pOutParams
);

DWORD WINAPI ResUtilSetUnknownProperties(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_SET_UNKNOWN_PROPERTIES)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize
);

DWORD WINAPI ResUtilGetPropertiesToParameterBlock(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    LPBYTE pOutParams,
    BOOL bCheckForRequiredProperties,
    LPWSTR *pszNameOfPropInError
);

typedef DWORD (WINAPI *PRESUTIL_GET_PROPERTIES_TO_PARAMETER_BLOCK)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    LPBYTE pOutParams,
    BOOL bCheckForRequiredProperties,
    LPWSTR *pszNameOfPropInError
);

typedef DWORD (WINAPI *PRESUTIL_GET_PROPERTIES_TO_PARAMETER_BLOCK)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    LPBYTE pOutParams,
    BOOL bCheckForRequiredProperties,
    LPWSTR *pszNameOfPropInError
);

DWORD WINAPI ResUtilPropertyListFromParameterBlock(
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyList,
    LPDWORD pcbOutPropertyListSize,
    const LPBYTE pInParams,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

typedef DWORD (WINAPI *PRESUTIL_PROPERTY_LIST_FROM_PARAMETER_BLOCK)(
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyList,
    LPDWORD pcbOutPropertyListSize,
    const LPBYTE pInParams,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

DWORD WINAPI ResUtilDupParameterBlock(
    LPBYTE pOutParams,
    const LPBYTE pInParams,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable
);

typedef DWORD (WINAPI *PRESUTIL_DUP_PARAMETER_BLOCK)(
    LPBYTE pOutParams,
    const LPBYTE pInParams,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable
);

void WINAPI ResUtilFreeParameterBlock(
    LPBYTE pOutParams,
    const LPBYTE pInParams,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable
);

typedef void (WINAPI *PRESUTIL_FREE_PARAMETER_BLOCK)(
    LPBYTE pOutParams,
    const LPBYTE pInParams,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable
);

DWORD WINAPI ResUtilAddUnknownProperties(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyList,
    DWORD pcbOutPropertyListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

typedef DWORD (WINAPI *PRESUTIL_ADD_UNKNOWN_PROPERTIES)(
    HKEY hkeyClusterKey,
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyList,
    DWORD pcbOutPropertyListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

DWORD WINAPI ResUtilSetPrivatePropertyList(
    HKEY hkeyClusterKey,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_SET_PRIVATE_PROPERTY_LIST)(
    HKEY hkeyClusterKey,
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize
);

DWORD WINAPI ResUtilVerifyPrivatePropertyList(
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_VERIFY_PRIVATE_PROPERTY_LIST)(
    const PVOID pInPropertyList,
    DWORD cbInPropertyListSize
);

PWSTR WINAPI ResUtilDupString(
    LPCWSTR pszInString
);

typedef PWSTR (WINAPI *PRESUTIL_DUP_STRING)(
    LPCWSTR pszInString
);

DWORD WINAPI ResUtilGetBinaryValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPBYTE *ppbOutValue,
    LPDWORD pcbOutValueSize
);

typedef DWORD (WINAPI *PRESUTIL_GET_BINARY_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPBYTE *ppbOutValue,
    LPDWORD pcbOutValueSize
);

LPWSTR WINAPI ResUtilGetSzValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName
);

typedef LPWSTR (WINAPI *PRESUTIL_GET_SZ_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName
);

LPWSTR WINAPI ResUtilGetExpandSzValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    BOOL bExpand
);

typedef LPWSTR (WINAPI *PRESUTIL_GET_EXPAND_SZ_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    BOOL bExpand
);

FORCEINLINE DWORD WINAPI_INLINE ResUtilGetMultiSzValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPWSTR *ppszOutValue,
    LPDWORD pcbOutValueSize)
{
    return ResUtilGetBinaryValue(hkeyClusterKey, pszValueName, (LPBYTE *)ppszOutValue, pcbOutValueSize);
}

DWORD WINAPI ResUtilGetDwordValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPDWORD pdwOutValue,
    DWORD dwDefaultValue
);

typedef DWORD (WINAPI *PRESUTIL_GET_DWORD_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPDWORD pdwOutValue,
    DWORD dwDefaultValue
);

DWORD WINAPI ResUtilGetQwordValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    PULONGLONG pqwOutValue,
    ULONGLONG qwDefaultValue
);

typedef DWORD (WINAPI *PRESUTIL_GET_QWORD_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    PULONGLONG pqwOutValue,
    ULONGLONG qwDefaultValue
);

DWORD WINAPI ResUtilSetBinaryValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    const LPBYTE pbNewValue,
    DWORD cbNewValueSize,
    LPBYTE *ppbOutValue,
    LPDWORD pcbOutValueSize
);

typedef DWORD (WINAPI *PRESUTIL_SET_BINARY_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    const LPBYTE pbNewValue,
    DWORD cbNewValueSize,
    LPBYTE *ppbOutValue,
    LPDWORD pcbOutValueSize
);

DWORD WINAPI ResUtilSetSzValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPCWSTR pszNewValue,
    LPWSTR *ppszOutString
);

typedef DWORD (WINAPI *PRESUTIL_SET_SZ_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPCWSTR pszNewValue,
    LPWSTR *ppszOutString
);

DWORD WINAPI ResUtilSetExpandSzValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPCWSTR pszNewValue,
    LPWSTR *ppszOutString
);

typedef DWORD (WINAPI *PRESUTIL_SET_EXPAND_SZ_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPCWSTR pszNewValue,
    LPWSTR *ppszOutString
);

DWORD WINAPI ResUtilSetMultiSzValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPCWSTR pszNewValue,
    DWORD cbNewValueSize,
    LPWSTR *ppszOutValue,
    LPDWORD pcbOutValueSize
);

typedef DWORD (WINAPI *PRESUTIL_SET_MULTI_SZ_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    LPCWSTR pszNewValue,
    DWORD cbNewValueSize,
    LPWSTR *ppszOutValue,
    LPDWORD pcbOutValueSize
);

DWORD WINAPI ResUtilSetDwordValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    DWORD dwNewValue,
    LPDWORD pdwOutValue
);

typedef DWORD (WINAPI *PRESUTIL_SET_DWORD_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    DWORD dwNewValue,
    LPDWORD pdwOutValue
);

DWORD WINAPI ResUtilSetQwordValue(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    ULONGLONG qwNewValue,
    PULONGLONG pqwOutValue
);

typedef DWORD (WINAPI *PRESUTIL_SET_QWORD_VALUE)(
    HKEY hkeyClusterKey,
    LPCWSTR pszValueName,
    ULONGLONG qwNewValue,
    PULONGLONG pqwOutValue
);

DWORD WINAPI ResUtilSetValueEx(
    HKEY hkeyClusterKey,
    LPCWSTR valueName,
    DWORD valueType,
    const LPBYTE valueData,
    DWORD valueSize,
    DWORD flags
);

DWORD WINAPI ResUtilGetBinaryProperty(
    LPBYTE *ppbOutValue,
    LPDWORD pcbOutValueSize,
    const PCLUSPROP_BINARY pValueStruct,
    const LPBYTE pbOldValue,
    DWORD cbOldValueSize,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_GET_BINARY_PROPERTY)(
    LPBYTE *ppbOutValue,
    LPDWORD pcbOutValueSize,
    const PCLUSPROP_BINARY pValueStruct,
    const LPBYTE pbOldValue,
    DWORD cbOldValueSize,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

DWORD WINAPI ResUtilGetSzProperty(
    LPWSTR *ppszOutValue,
    const PCLUSPROP_SZ pValueStruct,
    LPCWSTR pszOldValue,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_GET_SZ_PROPERTY)(
    LPWSTR *ppszOutValue,
    const PCLUSPROP_SZ pValueStruct,
    LPCWSTR pszOldValue,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

DWORD WINAPI ResUtilGetMultiSzProperty(
    LPWSTR *ppszOutValue,
    LPDWORD pcbOutValueSize,
    const PCLUSPROP_SZ pValueStruct,
    LPCWSTR pszOldValue,
    DWORD cbOldValueSize,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_GET_MULTI_SZ_PROPERTY)(
    LPWSTR *ppszOutValue,
    LPDWORD pcbOutValueSize,
    const PCLUSPROP_SZ pValueStruct,
    LPCWSTR pszOldValue,
    DWORD cbOldValueSize,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

DWORD WINAPI ResUtilGetDwordProperty(
    LPDWORD pdwOutValue,
    const PCLUSPROP_DWORD pValueStruct,
    DWORD dwOldValue,
    DWORD dwMinimum,
    DWORD dwMaximum,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_GET_DWORD_PROPERTY)(
    LPDWORD pdwOutValue,
    const PCLUSPROP_DWORD pValueStruct,
    DWORD dwOldValue,
    DWORD dwMinimum,
    DWORD dwMaximum,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

DWORD WINAPI ResUtilGetLongProperty(
    LPLONG plOutValue,
    const PCLUSPROP_LONG pValueStruct,
    LONG lOldValue,
    LONG lMinimum,
    LONG lMaximum,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_GET_LONG_PROPERTY)(
    LPLONG plOutValue,
    const PCLUSPROP_LONG pValueStruct,
    LONG lOldValue,
    LONG lMinimum,
    LONG lMaximum,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

DWORD WINAPI ResUtilGetFileTimeProperty(
    LPFILETIME pftOutValue,
    const PCLUSPROP_FILETIME pValueStruct,
    FILETIME ftOldValue,
    FILETIME ftMinimum,
    FILETIME ftMaximum,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

typedef DWORD (WINAPI *PRESUTIL_GET_FILETIME_PROPERTY)(
    LPFILETIME pftOutValue,
    const PCLUSPROP_FILETIME pValueStruct,
    FILETIME ftOldValue,
    FILETIME ftMinimum,
    FILETIME ftMaximum,
    LPBYTE *ppPropertyList,
    LPDWORD pcbPropertyListSize
);

LPVOID WINAPI ResUtilGetEnvironmentWithNetName(
    HRESOURCE hResource
);

typedef LPVOID (WINAPI *PRESUTIL_GET_ENVIRONMENT_WITH_NET_NAME)(
    HRESOURCE hResource
);

DWORD WINAPI ResUtilFreeEnvironment(
    LPVOID lpEnvironment
);

typedef DWORD (WINAPI *PRESUTIL_FREE_ENVIRONMENT)(
    LPVOID lpEnvironment
);

LPWSTR WINAPI ResUtilExpandEnvironmentStrings(
    LPCWSTR pszSrc
);

typedef LPWSTR (WINAPI *PRESUTIL_EXPAND_ENVIRONMENT_STRINGS)(
    LPCWSTR pszSrc
);

DWORD WINAPI ResUtilSetResourceServiceEnvironment(
    LPCWSTR pszServiceName,
    HRESOURCE hResource,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

typedef DWORD (WINAPI *PRESUTIL_SET_RESOURCE_SERVICE_ENVIRONMENT)(
    LPCWSTR pszServiceName,
    HRESOURCE hResource,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

DWORD WINAPI ResUtilRemoveResourceServiceEnvironment(
    LPCWSTR pszServiceName,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

typedef DWORD (WINAPI *PRESUTIL_REMOVE_RESOURCE_SERVICE_ENVIRONMENT)(
    LPCWSTR pszServiceName,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

DWORD WINAPI ResUtilSetResourceServiceStartParameters(
    LPCWSTR pszServiceName,
    SC_HANDLE schSCMHandle,
    LPSC_HANDLE phService,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

typedef DWORD (WINAPI *PRESUTIL_SET_RESOURCE_SERVICE_START_PARAMETERS)(
    LPCWSTR pszServiceName,
    SC_HANDLE schSCMHandle,
    LPSC_HANDLE phService,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

DWORD WINAPI ResUtilFindSzProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPWSTR *pszPropertyValue
);

typedef DWORD (WINAPI *PRESUTIL_FIND_SZ_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPWSTR *pszPropertyValue
);

DWORD WINAPI ResUtilFindExpandSzProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPWSTR *pszPropertyValue
);

typedef DWORD (WINAPI *PRESUTIL_FIND_EXPAND_SZ_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPWSTR *pszPropertyValue
);

DWORD WINAPI ResUtilFindExpandedSzProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPWSTR *pszPropertyValue
);

typedef DWORD (WINAPI *PRESUTIL_FIND_EXPANDED_SZ_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPWSTR *pszPropertyValue
);

DWORD WINAPI ResUtilFindDwordProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPDWORD pdwPropertyValue
);

typedef DWORD (WINAPI *PRESUTIL_FIND_DWORD_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPDWORD pdwPropertyValue
);

DWORD WINAPI ResUtilFindBinaryProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPBYTE *pbPropertyValue,
    LPDWORD pcbPropertyValueSize
);

typedef DWORD (WINAPI *PRESUTIL_FIND_BINARY_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPBYTE *pbPropertyValue,
    LPDWORD pcbPropertyValueSize
);

DWORD WINAPI ResUtilFindMultiSzProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPWSTR *pszPropertyValue,
    LPDWORD pcbPropertyValueSize
);

typedef DWORD (WINAPI *PRESUTIL_FIND_MULTI_SZ_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPWSTR *pszPropertyValue,
    LPDWORD pcbPropertyValueSize
);

DWORD WINAPI ResUtilFindLongProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPLONG plPropertyValue
);

typedef DWORD (WINAPI *PRESUTIL_FIND_LONG_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPLONG plPropertyValue
);

DWORD WINAPI ResUtilFindULargeIntegerProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    ULONGLONG *plPropertyValue
);

typedef DWORD (WINAPI *PRESUTIL_FIND_ULARGEINTEGER_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    ULONGLONG *plPropertyValue
);

DWORD WINAPI ResUtilFindFileTimeProperty(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPFILETIME pftPropertyValue
);

typedef DWORD (WINAPI *PRESUTIL_FIND_FILETIME_PROPERTY)(
    const PVOID pPropertyList,
    DWORD cbPropertyListSize,
    LPCWSTR pszPropertyName,
    LPFILETIME pftPropertyValue
);

typedef struct CLUS_WORKER {
    HANDLE hThread;
    BOOL Terminate;
} CLUS_WORKER, *PCLUS_WORKER;

typedef DWORD (WINAPI *PWORKER_START_ROUTINE)(
    PCLUS_WORKER pWorker,
    LPVOID lpThreadParameter
);

DWORD WINAPI ClusWorkerCreate(
    PCLUS_WORKER lpWorker,
    PWORKER_START_ROUTINE lpStartAddress,
    PVOID lpParameter
);

typedef DWORD (WINAPI *PCLUSAPI_CLUS_WORKER_CREATE)(
    PCLUS_WORKER lpWorker,
    PWORKER_START_ROUTINE lpStartAddress,
    PVOID lpParameter
);

BOOL WINAPI ClusWorkerCheckTerminate(
    PCLUS_WORKER lpWorker
);

typedef BOOL (WINAPI *PCLUSAPIClusWorkerCheckTerminate)(
    PCLUS_WORKER lpWorker
);

void WINAPI ClusWorkerTerminate(
    PCLUS_WORKER lpWorker
);

typedef void (WINAPI *PCLUSAPI_CLUS_WORKER_TERMINATE)(
    PCLUS_WORKER lpWorker
);

DWORD WINAPI ClusWorkerTerminateEx(
    PCLUS_WORKER ClusWorker,
    DWORD TimeoutInMilliseconds,
    BOOL WaitOnly
);

DWORD ClusWorkersTerminate(
    PCLUS_WORKER *ClusWorkers,
    size_t const ClusWorkersCount,
    DWORD TimeoutInMilliseconds,
    BOOL WaitOnly
);

typedef DWORD (*LPRESOURCE_CALLBACK)(HRESOURCE, HRESOURCE, PVOID);
typedef DWORD (*LPRESOURCE_CALLBACK_EX)(HCLUSTER, HRESOURCE, HRESOURCE, PVOID);
typedef DWORD (*LPGROUP_CALLBACK_EX)(HCLUSTER, HGROUP, HGROUP, PVOID);
typedef DWORD (*LPNODE_CALLBACK)(HCLUSTER, HNODE, CLUSTER_NODE_STATE, PVOID);

BOOL WINAPI ResUtilResourcesEqual(
    HRESOURCE hSelf,
    HRESOURCE hResource
);

typedef BOOL (WINAPI *PRESUTIL_RESOURCES_EQUAL)(
    HRESOURCE hSelf,
    HRESOURCE hResource
);

BOOL WINAPI ResUtilResourceTypesEqual(
    LPCWSTR lpszResourceTypeName,
    HRESOURCE hResource
);

typedef BOOL (WINAPI *PRESUTIL_RESOURCE_TYPES_EQUAL)(
    LPCWSTR lpszResourceTypeName,
    HRESOURCE hResource
);

BOOL WINAPI ResUtilIsResourceClassEqual(
    PCLUS_RESOURCE_CLASS_INFO prci,
    HRESOURCE hResource
);

typedef BOOL (WINAPI *PRESUTIL_IS_RESOURCE_CLASS_EQUAL)(
    PCLUS_RESOURCE_CLASS_INFO prci,
    HRESOURCE hResource
);

DWORD WINAPI ResUtilEnumResources(
    HRESOURCE hSelf,
    LPCWSTR lpszResTypeName,
    LPRESOURCE_CALLBACK pResCallBack,
    PVOID pParameter
);

typedef DWORD (WINAPI *PRESUTIL_ENUM_RESOURCES)(
    HRESOURCE hSelf,
    LPCWSTR lpszResTypeName,
    LPRESOURCE_CALLBACK pResCallBack,
    PVOID pParameter
);

DWORD WINAPI ResUtilEnumResourcesEx(
    HCLUSTER hCluster,
    HRESOURCE hSelf,
    LPCWSTR lpszResTypeName,
    LPRESOURCE_CALLBACK_EX pResCallBack,
    PVOID pParameter
);

typedef DWORD (WINAPI *PRESUTIL_ENUM_RESOURCES_EX)(
    HCLUSTER hCluster,
    HRESOURCE hSelf,
    LPCWSTR lpszResTypeName,
    LPRESOURCE_CALLBACK_EX pResCallBack,
    PVOID pParameter
);

HRESOURCE WINAPI ResUtilGetResourceDependency(
    HANDLE hSelf,
    LPCWSTR lpszResourceType
);

typedef HRESOURCE (WINAPI *PRESUTIL_GET_RESOURCE_DEPENDENCY)(
    HANDLE hSelf,
    LPCWSTR lpszResourceType
);

HRESOURCE WINAPI ResUtilGetResourceDependencyByName(
    HCLUSTER hCluster,
    HANDLE hSelf,
    LPCWSTR lpszResourceType,
    BOOL bRecurse
);

typedef HRESOURCE (WINAPI *PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_NAME)(
    HCLUSTER hCluster,
    HANDLE hSelf,
    LPCWSTR lpszResourceType,
    BOOL bRecurse
);

HRESOURCE WINAPI ResUtilGetResourceDependencyByClass(
    HCLUSTER hCluster,
    HANDLE hSelf,
    PCLUS_RESOURCE_CLASS_INFO prci,
    BOOL bRecurse
);

typedef HRESOURCE (WINAPI *PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_CLASS)(
    HCLUSTER hCluster,
    HANDLE hSelf,
    PCLUS_RESOURCE_CLASS_INFO prci,
    BOOL bRecurse
);

HRESOURCE WINAPI ResUtilGetResourceNameDependency(
    LPCWSTR lpszResourceName,
    LPCWSTR lpszResourceType
);

typedef HRESOURCE (WINAPI *PRESUTIL_GET_RESOURCE_NAME_DEPENDENCY)(
    LPCWSTR lpszResourceName,
    LPCWSTR lpszResourceType
);

DWORD WINAPI ResUtilGetResourceDependentIPAddressProps(
    HRESOURCE hResource,
    LPWSTR pszAddress,
    DWORD *pcchAddress,
    LPWSTR pszSubnetMask,
    DWORD *pcchSubnetMask,
    LPWSTR pszNetwork,
    DWORD *pcchNetwork
);

typedef DWORD (WINAPI *PRESUTIL_GET_RESOURCE_DEPENDENTIP_ADDRESS_PROPS)(
    HRESOURCE hResource,
    LPWSTR pszAddress,
    DWORD *pcchAddress,
    LPWSTR pszSubnetMask,
    DWORD *pcchSubnetMask,
    LPWSTR pszNetwork,
    DWORD *pcchNetwork
);

DWORD WINAPI ResUtilFindDependentDiskResourceDriveLetter(
    HCLUSTER hCluster,
    HRESOURCE hResource,
    LPWSTR pszDriveLetter,
    DWORD *pcchDriveLetter
);

typedef DWORD (WINAPI *PRESUTIL_FIND_DEPENDENT_DISK_RESOURCE_DRIVE_LETTER)(
    HCLUSTER hCluster,
    HRESOURCE hResource,
    LPWSTR pszDriveLetter,
    DWORD *pcchDriveLetter
);

DWORD WINAPI ResUtilTerminateServiceProcessFromResDll(
    DWORD dwServicePid,
    BOOL bOffline,
    PDWORD pdwResourceState,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

typedef DWORD (WINAPI *PRESUTIL_TERMINATE_SERVICE_PROCESS_FROM_RES_DLL)(
    DWORD dwServicePid,
    BOOL bOffline,
    PDWORD pdwResourceState,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

DWORD WINAPI ResUtilGetPropertyFormats(
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyFormatList,
    DWORD cbPropertyFormatListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

typedef DWORD (WINAPI *PRESUTIL_GET_PROPERTY_FORMATS)(
    const PRESUTIL_PROPERTY_ITEM pPropertyTable,
    PVOID pOutPropertyFormatList,
    DWORD cbPropertyFormatListSize,
    LPDWORD pcbBytesReturned,
    LPDWORD pcbRequired
);

DWORD WINAPI ResUtilGetCoreClusterResources(
    HCLUSTER hCluster,
    HRESOURCE *phClusterNameResource,
    HRESOURCE *phClusterIPAddressResource,
    HRESOURCE *phClusterQuorumResource
);

typedef DWORD (WINAPI *PRESUTIL_GET_CORE_CLUSTER_RESOURCES)(
    HCLUSTER hCluster,
    HRESOURCE *phClusterNameResource,
    HRESOURCE *phClusterIPAddressResource,
    HRESOURCE *phClusterQuorumResource
);

DWORD WINAPI ResUtilGetResourceName(
    HRESOURCE hResource,
    PWSTR pszResourceName,
    DWORD *pcchResourceNameInOut
);

typedef DWORD (WINAPI *PRESUTIL_GET_RESOURCE_NAME)(
    HRESOURCE hResource,
    PWSTR pszResourceName,
    DWORD *pcchResourceNameInOut
);

typedef enum _CLUSTER_ROLE {
    ClusterRoleDHCP,
    ClusterRoleDTC,
    ClusterRoleFileServer,
    ClusterRoleGenericApplication,
    ClusterRoleGenericScript,
    ClusterRoleGenericService,
    ClusterRoleISCSINameServer,
    ClusterRoleMSMQ,
    ClusterRoleNFS,
    ClusterRolePrintServer,
    ClusterRoleStandAloneNamespaceServer,
    ClusterRoleVolumeShadowCopyServiceTask,
    ClusterRoleWINS,
    ClusterRoleTaskScheduler,
    ClusterRoleNetworkFileSystem,
    ClusterRoleDFSReplicatedFolder,
    ClusterRoleDistributedFileSystem,
    ClusterRoleDistributedNetworkName,
    ClusterRoleFileShare,
    ClusterRoleFileShareWitness,
    ClusterRoleHardDisk,
    ClusterRoleIPAddress,
    ClusterRoleIPV6Address,
    ClusterRoleIPV6TunnelAddress,
    ClusterRoleISCSITargetServer,
    ClusterRoleNetworkName,
    ClusterRolePhysicalDisk,
    ClusterRoleSODAFileServer,
    ClusterRoleStoragePool,
    ClusterRoleVirtualMachine,
    ClusterRoleVirtualMachineConfiguration,
    ClusterRoleVirtualMachineReplicaBroker
} CLUSTER_ROLE;

typedef enum _CLUSTER_ROLE_STATE {
    ClusterRoleUnknown = -1,
    ClusterRoleClustered,
    ClusterRoleUnclustered
} CLUSTER_ROLE_STATE;

CLUSTER_ROLE_STATE WINAPI
ResUtilGetClusterRoleState(
    HCLUSTER hCluster,
    CLUSTER_ROLE eClusterRole
);

BOOL WINAPI ClusterIsPathOnSharedVolume(
    LPCWSTR lpszPathName
);

typedef BOOL (WINAPI *PCLUSTER_IS_PATH_ON_SHARED_VOLUME)(
    LPCWSTR lpszPathName
);

BOOL WINAPI ClusterGetVolumePathName(
    LPCWSTR lpszFileName,
    LPWSTR lpszVolumePathName,
    DWORD cchBufferLength
);

typedef BOOL (WINAPI *PCLUSTER_GET_VOLUME_PATH_NAME)(
    LPCWSTR lpszFileName,
    LPWSTR lpszVolumePathName,
    DWORD cchBufferLength
);

BOOL WINAPI ClusterGetVolumeNameForVolumeMountPoint(
    LPCWSTR lpszVolumeMountPoint,
    LPWSTR lpszVolumeName,
    DWORD cchBufferLength
);

typedef BOOL (WINAPI *PCLUSTER_GET_VOLUME_NAME_FOR_VOLUME_MOUNT_POINT)(
    LPCWSTR lpszVolumeMountPoint,
    LPWSTR lpszVolumeName,
    DWORD cchBufferLength
);

DWORD WINAPI ClusterPrepareSharedVolumeForBackup(
    LPCWSTR lpszFileName,
    LPWSTR lpszVolumePathName,
    LPDWORD lpcchVolumePathName,
    LPWSTR lpszVolumeName,
    LPDWORD lpcchVolumeName
);

typedef DWORD (WINAPI *PCLUSTER_PREPARE_SHARED_VOLUME_FOR_BACKUP)(
    LPCWSTR lpszFileName,
    LPWSTR lpszVolumePathName,
    LPDWORD lpcchVolumePathName,
    LPWSTR lpszVolumeName,
    LPDWORD lpcchVolumeName
);

DWORD WINAPI ClusterClearBackupStateForSharedVolume(
    LPCWSTR lpszVolumePathName
);

typedef DWORD (WINAPI *PCLUSTER_CLEAR_BACKUP_STATE_FOR_SHARED_VOLUME)(
    LPCWSTR lpszVolumePathName
);

#if (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8)

DWORD WINAPI ResUtilSetResourceServiceStartParametersEx(
    LPCWSTR pszServiceName,
    SC_HANDLE schSCMHandle,
    LPSC_HANDLE phService,
    DWORD dwDesiredAccess,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

typedef DWORD (WINAPI *PRESUTIL_SET_RESOURCE_SERVICE_START_PARAMETERS_EX)(
    LPCWSTR pszServiceName,
    SC_HANDLE schSCMHandle,
    LPSC_HANDLE phService,
    DWORD dwDesiredAccess,
    PLOG_EVENT_ROUTINE pfnLogEvent,
    RESOURCE_HANDLE hResourceHandle
);

DWORD WINAPI ResUtilEnumResourcesEx2(
    HCLUSTER hCluster,
    HRESOURCE hSelf,
    LPCWSTR lpszResTypeName,
    LPRESOURCE_CALLBACK_EX pResCallBack,
    PVOID pParameter,
    DWORD dwDesiredAccess
);

typedef DWORD (WINAPI *PRESUTIL_ENUM_RESOURCES_EX2)(
    HCLUSTER hCluster,
    HRESOURCE hSelf,
    LPCWSTR lpszResTypeName,
    LPRESOURCE_CALLBACK_EX pResCallBack,
    PVOID pParameter,
    DWORD dwDesiredAccess
);

HRESOURCE WINAPI ResUtilGetResourceDependencyEx(
    HANDLE hSelf,
    LPCWSTR lpszResourceType,
    DWORD dwDesiredAccess
);

typedef HRESOURCE (WINAPI *PRESUTIL_GET_RESOURCE_DEPENDENCY_EX)(
    HANDLE hSelf,
    LPCWSTR lpszResourceType,
    DWORD dwDesiredAccess
);

HRESOURCE WINAPI ResUtilGetResourceDependencyByNameEx(
    HCLUSTER hCluster,
    HANDLE hSelf,
    LPCWSTR lpszResourceType,
    BOOL bRecurse,
    DWORD dwDesiredAccess
);

typedef HRESOURCE (WINAPI *PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_NAME_EX)(
    HCLUSTER hCluster,
    HANDLE hSelf,
    LPCWSTR lpszResourceType,
    BOOL bRecurse,
    DWORD dwDesiredAccess
);

HRESOURCE WINAPI ResUtilGetResourceDependencyByClassEx(
    HCLUSTER hCluster,
    HANDLE hSelf,
    PCLUS_RESOURCE_CLASS_INFO prci,
    BOOL bRecurse,
    DWORD dwDesiredAccess
);

typedef HRESOURCE (WINAPI *PRESUTIL_GET_RESOURCE_DEPENDENCY_BY_CLASS_EX)(
    HCLUSTER hCluster,
    HANDLE hSelf,
    PCLUS_RESOURCE_CLASS_INFO prci,
    BOOL bRecurse,
    DWORD dwDesiredAccess
);

HRESOURCE WINAPI ResUtilGetResourceNameDependencyEx(
    LPCWSTR lpszResourceName,
    LPCWSTR lpszResourceType,
    DWORD dwDesiredAccess
);

typedef HRESOURCE (WINAPI *PRESUTIL_GET_RESOURCE_NAME_DEPENDENCY_EX)(
    LPCWSTR lpszResourceName,
    LPCWSTR lpszResourceType,
    DWORD dwDesiredAccess
);

DWORD WINAPI ResUtilGetCoreClusterResourcesEx(
    HCLUSTER hClusterIn,
    HRESOURCE *phClusterNameResourceOut,
    HRESOURCE *phClusterQuorumResourceOut,
    DWORD dwDesiredAccess
);

typedef DWORD (WINAPI *PRESUTIL_GET_CORE_CLUSTER_RESOURCES_EX)(
    HCLUSTER hClusterIn,
    HRESOURCE *phClusterNameResourceOut,
    HRESOURCE *phClusterIPAddressResourceOut,
    HRESOURCE *phClusterQuorumResourceOut,
    DWORD dwDesiredAccess
);

#define CLUS_CREATE_CRYPT_CONTAINER_NOT_FOUND  0x0001

typedef struct _HCLUSCRYPTPROVIDER *HCLUSCRYPTPROVIDER;

HCLUSCRYPTPROVIDER WINAPI OpenClusterCryptProvider(
    LPCWSTR lpszResource,
    LPCTSTR lpszProvider,
    DWORD dwType,
    DWORD dwFlags
);

typedef HCLUSCRYPTPROVIDER (WINAPI *POPEN_CLUSTER_CRYPT_PROVIDER)(
    LPCWSTR lpszResource,
    LPCTSTR lpszProvider,
    DWORD dwType,
    DWORD dwFlags
);

HCLUSCRYPTPROVIDER WINAPI OpenClusterCryptProviderEx(
    LPCWSTR lpszResource,
    LPCWSTR lpszKeyname,
    LPCTSTR lpszProvider,
    DWORD dwType,
    DWORD dwFlags
);

typedef HCLUSCRYPTPROVIDER (WINAPI *POPEN_CLUSTER_CRYPT_PROVIDEREX)(
    LPCWSTR lpszResource,
    LPCWSTR lpszKeyname,
    LPCTSTR lpszProvider,
    DWORD dwType,
    DWORD dwFlags
);

DWORD WINAPI CloseClusterCryptProvider(
    HCLUSCRYPTPROVIDER hClusCryptProvider
);

typedef DWORD (WINAPI *PCLOSE_CLUSTER_CRYPT_PROVIDER)(
    HCLUSCRYPTPROVIDER hClusCryptProvider
);

DWORD WINAPI ClusterEncrypt(
    HCLUSCRYPTPROVIDER hClusCryptProvider,
    PBYTE pData,
    DWORD cbData,
    PBYTE *ppData,
    PDWORD pcbData
);

typedef DWORD (WINAPI *PCLUSTER_ENCRYPT)(
    HCLUSCRYPTPROVIDER hClusCryptProvider,
    PBYTE pData,
    DWORD cbData,
    PBYTE *ppData,
    PDWORD pcbData
);

DWORD WINAPI ClusterDecrypt(
    HCLUSCRYPTPROVIDER hClusCryptProvider,
    PBYTE pCryptInput,
    DWORD cbCryptInput,
    PBYTE *ppCryptOutput,
    PDWORD pcbCryptOutput
);

typedef DWORD (WINAPI *PCLUSTER_DECRYPT)(
    HCLUSCRYPTPROVIDER hClusCryptProvider,
    PBYTE pCryptInput,
    DWORD cbCryptInput,
    PBYTE *ppCryptOutput,
    PDWORD pcbCryptOutput
);

DWORD WINAPI FreeClusterCrypt(
    PVOID pCryptInfo
);

typedef DWORD (WINAPI *PFREE_CLUSTER_CRYPT)(
    PVOID pCryptInfo
);

DWORD WINAPI ResUtilVerifyShutdownSafe(
    DWORD flags,
    DWORD reason,
    PDWORD pResult
);

typedef DWORD (WINAPI *PRES_UTIL_VERIFY_SHUTDOWN_SAFE)(
    DWORD flags,
    DWORD reason,
    PDWORD pResult
);

#endif /* (CLUSAPI_VERSION >= CLUSAPI_VERSION_WINDOWS8) */

typedef struct _PaxosTagCStruct {
    unsigned __int64 __padding__PaxosTagVtable;
    unsigned __int64 __padding__NextEpochVtable;
    unsigned __int64 __padding__NextEpoch_DateTimeVtable;
    unsigned __int64 NextEpoch_DateTime_ticks;
    int NextEpoch_Value;
    DWORD __padding__BoundryNextEpoch;
    unsigned __int64 __padding__EpochVtable;
    unsigned __int64 __padding__Epoch_DateTimeVtable;
    unsigned __int64 Epoch_DateTime_ticks;
    int Epoch_Value;
    DWORD __padding__BoundryEpoch;
    int Sequence;
    DWORD __padding__BoundrySequence;
} PaxosTagCStruct, *PPaxosTagCStruct;

typedef struct _WitnessTagUpdateHelper {
    int Version;
    PaxosTagCStruct paxosToSet;
    PaxosTagCStruct paxosToValidate;
}WitnessTagUpdateHelper;

typedef struct _WitnessTagHelper {
    int Version;
    PaxosTagCStruct paxosToValidate;
}WitnessTagHelper;

BOOL ResUtilPaxosComparer(
    const PaxosTagCStruct * const left,
    const PaxosTagCStruct * const right
);

BOOL ResUtilLeftPaxosIsLessThanRight(
    const PaxosTagCStruct * const left,
    const PaxosTagCStruct * const right
);

DWORD ResUtilsDeleteKeyTree(
    HKEY key,
    LPCWSTR keyName,
    BOOL treatNoKeyAsError
);

DWORD WINAPI ResUtilGroupsEqual(
    HGROUP hSelf,
    HGROUP hGroup,
    BOOL *pEqual
);

DWORD WINAPI ResUtilEnumGroups(
    HCLUSTER hCluster,
    HGROUP hSelf,
    LPGROUP_CALLBACK_EX pResCallBack,
    PVOID pParameter
);

DWORD WINAPI ResUtilEnumGroupsEx(
    HCLUSTER hCluster,
    HGROUP hSelf,
    CLUSGROUP_TYPE groupType,
    LPGROUP_CALLBACK_EX pResCallBack,
    PVOID pParameter
);

DWORD WINAPI ResUtilDupGroup(HGROUP group, HGROUP *copy);

DWORD WINAPI ResUtilGetClusterGroupType(HGROUP hGroup, CLUSGROUP_TYPE *groupType);

HGROUP WINAPI ResUtilGetCoreGroup(HCLUSTER hCluster);

DWORD WINAPI ResUtilResourceDepEnum(
    HRESOURCE hSelf,
    DWORD enumType,
    LPRESOURCE_CALLBACK_EX pResCallBack,
    PVOID pParameter
);

DWORD WINAPI ResUtilDupResource(HRESOURCE group, HRESOURCE *copy);

DWORD WINAPI ResUtilGetClusterId(HCLUSTER hCluster, GUID *guid);

DWORD WINAPI ResUtilNodeEnum(
    HCLUSTER hCluster,
    LPNODE_CALLBACK pNodeCallBack,
    PVOID pParameter
);

#endif /* _RESAPI_H */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_CLUSTER) */
