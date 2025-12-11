#ifndef _RPCNSIP_H
#define _RPCNSIP_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows RPC runtime autohandle definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef struct {
    RPC_NS_HANDLE LookupContext;
    RPC_BINDING_HANDLE ProposedHandle;
    RPC_BINDING_VECTOR *Bindings;
} RPC_IMPORT_CONTEXT_P, *PRPC_IMPORT_CONTEXT_P;

/* Stub Auto Binding routines */
RPCNSAPI RPC_STATUS RPC_ENTRY I_RpcNsGetBuffer(PRPC_MESSAGE Message);
RPCNSAPI RPC_STATUS RPC_ENTRY I_RpcNsSendReceive(PRPC_MESSAGE Message, RPC_BINDING_HANDLE *Handle);
RPCNSAPI void RPC_ENTRY I_RpcNsRaiseException(PRPC_MESSAGE Message, RPC_STATUS Status);
RPCNSAPI RPC_STATUS RPC_ENTRY I_RpcReBindBuffer(PRPC_MESSAGE Message);
RPCNSAPI RPC_STATUS RPC_ENTRY I_NsServerBindSearch(void);
RPCNSAPI RPC_STATUS RPC_ENTRY I_NsClientBindSearch(void);
RPCNSAPI void RPC_ENTRY I_NsClientBindDone(void);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _RPCNSIP_H */
