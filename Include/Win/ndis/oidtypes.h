#if __POCC__ >= 500
#pragma once
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

EXTERN_C_START

typedef ULONG NDIS_OID, *PNDIS_OID;

typedef enum _NDIS_REQUEST_TYPE {
    NdisRequestQueryInformation,
    NdisRequestSetInformation,
    NdisRequestQueryStatistics,
#ifdef NDIS_INCLUDE_LEGACY_NAMES
    NdisRequestOpen,
    NdisRequestClose,
    NdisRequestSend,
    NdisRequestTransferData,
    NdisRequestReset,
    NdisRequestGeneric1,
    NdisRequestGeneric2,
    NdisRequestGeneric3,
    NdisRequestGeneric4,
#endif /* NDIS_INCLUDE_LEGACY_NAMES */
#if NDIS_SUPPORT_NDIS6
    NdisRequestMethod = 12,
#endif /* NDIS_SUPPORT_NDIS6 */
} NDIS_REQUEST_TYPE, *PNDIS_REQUEST_TYPE;

#define NDIS_OBJECT_TYPE_OID_REQUEST            0x96

EXTERN_C_END

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

