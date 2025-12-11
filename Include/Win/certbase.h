/* Generated from certbase.idl by POIDL version 0.80 - Do not edit */

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /* COM_NO_WINDOWS_H */

#ifndef __certbase_h__
#define __certbase_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

/* Headers for imported files */

#include "wtypes.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef struct _CERTTRANSBLOB {
    unsigned long cb;
    BYTE *pb;
} CERTTRANSBLOB;

typedef struct _CERTVIEWRESTRICTION {
    DWORD ColumnIndex;
    LONG SeekOperator;
    LONG SortOrder;
    BYTE *pbValue;
    DWORD cbValue;
} CERTVIEWRESTRICTION;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __certbase_h__ */
