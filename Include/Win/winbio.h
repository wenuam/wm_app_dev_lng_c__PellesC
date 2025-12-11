#ifndef _WINBIO_H
#define _WINBIO_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Biometric API definitions (Windows 7) */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (NTDDI_VERSION >= NTDDI_WIN7)

#include "winbio_types.h"
#include "winbio_err.h"

typedef enum _WINBIO_ASYNC_NOTIFICATION_METHOD {
    WINBIO_ASYNC_NOTIFY_NONE = 0,
    WINBIO_ASYNC_NOTIFY_CALLBACK,
    WINBIO_ASYNC_NOTIFY_MESSAGE,
    WINBIO_ASYNC_NOTIFY_MAXIMUM_VALUE
} WINBIO_ASYNC_NOTIFICATION_METHOD, *PWINBIO_ASYNC_NOTIFICATION_METHOD;

typedef struct _WINBIO_ASYNC_RESULT {
    WINBIO_SESSION_HANDLE SessionHandle;
    WINBIO_OPERATION_TYPE Operation;
    ULONGLONG SequenceNumber;
    LONGLONG TimeStamp;
    HRESULT ApiStatus;
    WINBIO_UNIT_ID UnitId;
    PVOID UserData;
    union {
        struct {
            BOOLEAN Match;
            WINBIO_REJECT_DETAIL RejectDetail;
        } Verify;
        struct {
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            WINBIO_REJECT_DETAIL RejectDetail;
        }Identify;
        struct {
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
        } EnrollBegin;
        struct {
            WINBIO_REJECT_DETAIL RejectDetail;
        } EnrollCapture;
        struct {
            WINBIO_IDENTITY Identity;
            BOOLEAN IsNewTemplate;
        } EnrollCommit;
        struct {
            WINBIO_IDENTITY Identity;
            SIZE_T SubFactorCount;
            WINBIO_BIOMETRIC_SUBTYPE *SubFactorArray;
        } EnumEnrollments;
        struct {
            PWINBIO_BIR Sample;
            SIZE_T SampleSize;
            WINBIO_REJECT_DETAIL RejectDetail;
        } CaptureSample;
        struct {
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
        } DeleteTemplate;
        struct {
            WINBIO_PROPERTY_TYPE PropertyType;
            WINBIO_PROPERTY_ID PropertyId;
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            SIZE_T PropertyBufferSize;
            PVOID PropertyBuffer;
        } GetProperty;
        struct {
            WINBIO_PROPERTY_TYPE PropertyType;
            WINBIO_PROPERTY_ID PropertyId;
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            SIZE_T PropertyBufferSize;
            PVOID PropertyBuffer;
        } SetProperty;
        struct {
            WINBIO_EVENT Event;
        } GetEvent;
        struct {
            WINBIO_COMPONENT Component;
            ULONG ControlCode;
            ULONG OperationStatus;
            PUCHAR SendBuffer;
            SIZE_T SendBufferSize;
            PUCHAR ReceiveBuffer;
            SIZE_T ReceiveBufferSize;
            SIZE_T ReceiveDataSize;
        } ControlUnit;
        struct {
            SIZE_T BspCount;
            WINBIO_BSP_SCHEMA *BspSchemaArray;
        } EnumServiceProviders;
        struct {
            SIZE_T UnitCount;
            WINBIO_UNIT_SCHEMA *UnitSchemaArray;
        } EnumBiometricUnits;
        struct {
            SIZE_T StorageCount;
            WINBIO_STORAGE_SCHEMA *StorageSchemaArray;
        } EnumDatabases;
#if (NTDDI_VERSION >= NTDDI_WIN9)
        struct {
            BOOLEAN Match;
            WINBIO_REJECT_DETAIL RejectDetail;
            WINBIO_PROTECTION_TICKET Ticket;
        } VerifyAndReleaseTicket;
        struct {
            WINBIO_IDENTITY Identity;
            WINBIO_BIOMETRIC_SUBTYPE SubFactor;
            WINBIO_REJECT_DETAIL RejectDetail;
            WINBIO_PROTECTION_TICKET Ticket;
        } IdentifyAndReleaseTicket;
#endif /* (NTDDI_VERSION >= NTDDI_WIN9) */
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
        struct {
            ULONGLONG SelectorValue;
        } EnrollSelect;
        struct {
            WINBIO_PRESENCE_CHANGE ChangeType;
            SIZE_T PresenceCount;
            WINBIO_PRESENCE *PresenceArray;
        } MonitorPresence;
#endif /* (NTDDI_VERSION >= NTDDI_WINTHRESHOLD) */
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
        struct {
            WINBIO_IDENTITY Identity;
            WINBIO_PROTECTION_POLICY Policy;
        } GetProtectionPolicy;
        struct {
            WINBIO_EXTENDED_UNIT_STATUS ExtendedStatus;
        } NotifyUnitStatusChange;
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS2) */
    } Parameters;
} WINBIO_ASYNC_RESULT, *PWINBIO_ASYNC_RESULT;

typedef void (CALLBACK *PWINBIO_ASYNC_COMPLETION_CALLBACK)(
    PWINBIO_ASYNC_RESULT AsyncResult
);

HRESULT WINAPI WinBioEnumServiceProviders(
    WINBIO_BIOMETRIC_TYPE Factor,
    WINBIO_BSP_SCHEMA **BspSchemaArray,
    SIZE_T *BspCount
);

HRESULT WINAPI WinBioEnumBiometricUnits(
    WINBIO_BIOMETRIC_TYPE Factor,
    WINBIO_UNIT_SCHEMA **UnitSchemaArray,
    SIZE_T *UnitCount
);

HRESULT WINAPI WinBioEnumDatabases(
    WINBIO_BIOMETRIC_TYPE Factor,
    WINBIO_STORAGE_SCHEMA **StorageSchemaArray,
    SIZE_T *StorageCount
);

HRESULT WINAPI WinBioAsyncOpenFramework(
    WINBIO_ASYNC_NOTIFICATION_METHOD NotificationMethod,
    HWND TargetWindow,
    UINT MessageCode,
    PWINBIO_ASYNC_COMPLETION_CALLBACK CallbackRoutine,
    PVOID UserData,
    BOOL AsynchronousOpen,
    WINBIO_FRAMEWORK_HANDLE *FrameworkHandle
);

HRESULT WINAPI WinBioCloseFramework(
    WINBIO_FRAMEWORK_HANDLE FrameworkHandle
);

HRESULT WINAPI WinBioAsyncEnumServiceProviders(
    WINBIO_FRAMEWORK_HANDLE FrameworkHandle,
    WINBIO_BIOMETRIC_TYPE Factor
);

HRESULT WINAPI WinBioAsyncEnumBiometricUnits(
    WINBIO_FRAMEWORK_HANDLE FrameworkHandle,
    WINBIO_BIOMETRIC_TYPE Factor
);

HRESULT WINAPI WinBioAsyncEnumDatabases(
    WINBIO_FRAMEWORK_HANDLE FrameworkHandle,
    WINBIO_BIOMETRIC_TYPE Factor
);

HRESULT WINAPI WinBioAsyncMonitorFrameworkChanges(
    WINBIO_FRAMEWORK_HANDLE FrameworkHandle,
    WINBIO_FRAMEWORK_CHANGE_TYPE ChangeTypes
);

HRESULT WINAPI WinBioOpenSession(
    WINBIO_BIOMETRIC_TYPE Factor,
    WINBIO_POOL_TYPE PoolType,
    WINBIO_SESSION_FLAGS Flags,
    WINBIO_UNIT_ID *UnitArray,
    SIZE_T UnitCount,
    GUID *DatabaseId,
    WINBIO_SESSION_HANDLE *SessionHandle
);

HRESULT WINAPI WinBioAsyncOpenSession(
    WINBIO_BIOMETRIC_TYPE Factor,
    WINBIO_POOL_TYPE PoolType,
    WINBIO_SESSION_FLAGS Flags,
    WINBIO_UNIT_ID *UnitArray,
    SIZE_T UnitCount,
    GUID *DatabaseId,
    WINBIO_ASYNC_NOTIFICATION_METHOD NotificationMethod,
    HWND TargetWindow,
    UINT MessageCode,
    PWINBIO_ASYNC_COMPLETION_CALLBACK CallbackRoutine,
    PVOID UserData,
    BOOL AsynchronousOpen,
    WINBIO_SESSION_HANDLE *SessionHandle
);

HRESULT WINAPI WinBioCloseSession(
    WINBIO_SESSION_HANDLE SessionHandle
);

HRESULT WINAPI WinBioVerify(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_IDENTITY *Identity,
    WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    WINBIO_UNIT_ID *UnitId,
    BOOLEAN *Match,
    WINBIO_REJECT_DETAIL *RejectDetail
);

typedef void (CALLBACK *PWINBIO_VERIFY_CALLBACK)(
    PVOID VerifyCallbackContext,
    HRESULT OperationStatus,
    WINBIO_UNIT_ID UnitId,
    BOOLEAN Match,
    WINBIO_REJECT_DETAIL RejectDetail
);

HRESULT WINAPI WinBioVerifyWithCallback(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_IDENTITY *Identity,
    WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    PWINBIO_VERIFY_CALLBACK VerifyCallback,
    PVOID VerifyCallbackContext
);

HRESULT WINAPI WinBioIdentify(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID *UnitId,
    WINBIO_IDENTITY *Identity,
    WINBIO_BIOMETRIC_SUBTYPE *SubFactor,
    WINBIO_REJECT_DETAIL *RejectDetail
);

typedef void (CALLBACK *PWINBIO_IDENTIFY_CALLBACK)(
    PVOID IdentifyCallbackContext,
    HRESULT OperationStatus,
    WINBIO_UNIT_ID UnitId,
    WINBIO_IDENTITY *Identity,
    WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    WINBIO_REJECT_DETAIL RejectDetail
);

HRESULT WINAPI WinBioIdentifyWithCallback(
    WINBIO_SESSION_HANDLE SessionHandle,
    PWINBIO_IDENTIFY_CALLBACK IdentifyCallback,
    PVOID IdentifyCallbackContext
);

HRESULT WINAPI WinBioWait(
    WINBIO_SESSION_HANDLE SessionHandle
);

HRESULT WINAPI WinBioCancel(
    WINBIO_SESSION_HANDLE SessionHandle
);

HRESULT WINAPI WinBioLocateSensor(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID *UnitId
);

typedef void (CALLBACK *PWINBIO_LOCATE_SENSOR_CALLBACK)(
    PVOID LocateCallbackContext,
    HRESULT OperationStatus,
    WINBIO_UNIT_ID UnitId
);

HRESULT WINAPI WinBioLocateSensorWithCallback(
    WINBIO_SESSION_HANDLE SessionHandle,
    PWINBIO_LOCATE_SENSOR_CALLBACK LocateCallback,
    PVOID LocateCallbackContext
);

HRESULT WINAPI WinBioEnrollBegin(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    WINBIO_UNIT_ID UnitId
);

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
HRESULT WINAPI WinBioEnrollSelect(
    WINBIO_SESSION_HANDLE SessionHandle,
    ULONGLONG SelectorValue
);
#endif /* (NTDDI_VERSION >= NTDDI_WINTHRESHOLD) */

HRESULT WINAPI WinBioEnrollCapture(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_REJECT_DETAIL *RejectDetail
);

typedef void (CALLBACK *PWINBIO_ENROLL_CAPTURE_CALLBACK)(
    PVOID EnrollCallbackContext,
    HRESULT OperationStatus,
    WINBIO_REJECT_DETAIL RejectDetail
);

HRESULT WINAPI WinBioEnrollCaptureWithCallback(
    WINBIO_SESSION_HANDLE SessionHandle,
    PWINBIO_ENROLL_CAPTURE_CALLBACK EnrollCallback,
    PVOID EnrollCallbackContext
);

HRESULT WINAPI WinBioEnrollCommit(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_IDENTITY *Identity,
    BOOLEAN *IsNewTemplate
);

HRESULT WINAPI WinBioEnrollDiscard(
    WINBIO_SESSION_HANDLE SessionHandle
);

HRESULT WINAPI WinBioEnumEnrollments(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID UnitId,
    WINBIO_IDENTITY *Identity,
    WINBIO_BIOMETRIC_SUBTYPE **SubFactorArray,
    SIZE_T *SubFactorCount
);

HRESULT WINAPI WinBioImproveBegin(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID UnitId
);

HRESULT WINAPI WinBioImproveEnd(
    WINBIO_SESSION_HANDLE SessionHandle
);

typedef void (CALLBACK *PWINBIO_EVENT_CALLBACK)(
    PVOID EventCallbackContext,
    HRESULT OperationStatus,
    PWINBIO_EVENT Event
);

HRESULT WINAPI WinBioRegisterEventMonitor(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_EVENT_TYPE EventMask,
    PWINBIO_EVENT_CALLBACK EventCallback,
    PVOID EventCallbackContext
);

HRESULT WINAPI WinBioUnregisterEventMonitor(
    WINBIO_SESSION_HANDLE SessionHandle
);

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
HRESULT WINAPI WinBioMonitorPresence(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID UnitId
);
#endif /* (NTDDI_VERSION >= NTDDI_WINTHRESHOLD) */

HRESULT WINAPI WinBioCaptureSample(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_BIR_PURPOSE Purpose,
    WINBIO_BIR_DATA_FLAGS Flags,
    WINBIO_UNIT_ID *UnitId,
    PWINBIO_BIR *Sample,
    SIZE_T *SampleSize,
    WINBIO_REJECT_DETAIL *RejectDetail
);

typedef void (CALLBACK *PWINBIO_CAPTURE_CALLBACK)(
    PVOID CaptureCallbackContext,
    HRESULT OperationStatus,
    WINBIO_UNIT_ID UnitId,
    PWINBIO_BIR Sample,
    SIZE_T SampleSize,
    WINBIO_REJECT_DETAIL RejectDetail
);

HRESULT WINAPI WinBioCaptureSampleWithCallback(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_BIR_PURPOSE Purpose,
    WINBIO_BIR_DATA_FLAGS Flags,
    PWINBIO_CAPTURE_CALLBACK CaptureCallback,
    PVOID CaptureCallbackContext
);

HRESULT WINAPI WinBioDeleteTemplate(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID UnitId,
    WINBIO_IDENTITY *Identity,
    WINBIO_BIOMETRIC_SUBTYPE SubFactor
);

HRESULT WINAPI WinBioLockUnit(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID UnitId
);

HRESULT WINAPI WinBioUnlockUnit(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID UnitId
);

HRESULT WINAPI WinBioControlUnit(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID UnitId,
    WINBIO_COMPONENT Component,
    ULONG ControlCode,
    PUCHAR SendBuffer,
    SIZE_T SendBufferSize,
    PUCHAR ReceiveBuffer,
    SIZE_T ReceiveBufferSize,
    SIZE_T *ReceiveDataSize,
    ULONG *OperationStatus
);

HRESULT WINAPI WinBioControlUnitPrivileged(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_UNIT_ID UnitId,
    WINBIO_COMPONENT Component,
    ULONG ControlCode,
    PUCHAR SendBuffer,
    SIZE_T SendBufferSize,
    PUCHAR ReceiveBuffer,
    SIZE_T ReceiveBufferSize,
    SIZE_T *ReceiveDataSize,
    ULONG *OperationStatus
);

HRESULT WINAPI WinBioGetProperty(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_PROPERTY_TYPE PropertyType,
    WINBIO_PROPERTY_ID PropertyId,
    WINBIO_UNIT_ID UnitId,
    WINBIO_IDENTITY *Identity,
    WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    PVOID *PropertyBuffer,
    SIZE_T *PropertyBufferSize
);

HRESULT WINAPI WinBioSetProperty(
    WINBIO_SESSION_HANDLE SessionHandle,
    WINBIO_PROPERTY_TYPE PropertyType,
    WINBIO_PROPERTY_ID PropertyId,
    WINBIO_UNIT_ID UnitId,
    WINBIO_IDENTITY *Identity,
    WINBIO_BIOMETRIC_SUBTYPE SubFactor,
    PVOID PropertyBuffer,
    SIZE_T PropertyBufferSize
);

HRESULT WINAPI WinBioFree(
    PVOID Address
);

HRESULT WINAPI WinBioSetCredential(
    WINBIO_CREDENTIAL_TYPE Type,
    PUCHAR Credential,
    SIZE_T CredentialSize,
    WINBIO_CREDENTIAL_FORMAT Format
);

HRESULT WINAPI WinBioRemoveCredential(
    WINBIO_IDENTITY Identity,
    WINBIO_CREDENTIAL_TYPE Type
);

HRESULT WINAPI WinBioRemoveAllCredentials(
    void
);

HRESULT WINAPI WinBioRemoveAllDomainCredentials(
    void
);

HRESULT WINAPI WinBioGetCredentialState(
    WINBIO_IDENTITY Identity,
    WINBIO_CREDENTIAL_TYPE Type,
    WINBIO_CREDENTIAL_STATE *CredentialState
);

HRESULT WINAPI WinBioLogonIdentifiedUser(
    WINBIO_SESSION_HANDLE SessionHandle
);

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
HRESULT WINAPI WinBioGetEnrolledFactors(
    WINBIO_IDENTITY *AccountOwner,
    WINBIO_BIOMETRIC_TYPE *EnrolledFactors
);
#endif /* (NTDDI_VERSION >= NTDDI_WINTHRESHOLD) */

void WINAPI WinBioGetEnabledSetting(
    BOOLEAN *Value,
    PWINBIO_SETTING_SOURCE_TYPE Source
);

void WINAPI WinBioGetLogonSetting(
    BOOLEAN *Value,
    PWINBIO_SETTING_SOURCE_TYPE Source
);

void WINAPI WinBioGetDomainLogonSetting(
    BOOLEAN *Value,
    PWINBIO_SETTING_SOURCE_TYPE Source
);

HRESULT WINAPI WinBioAcquireFocus(
    void
);

HRESULT WINAPI WinBioReleaseFocus(
    void
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _WINBIO_H */
