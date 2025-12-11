#ifndef RPC_NO_WINDOWS_H
#ifndef _WINDOWS_H
#include <windows.h>
#endif /* _WINDOWS_H */
#endif /* RPC_NO_WINDOWS_H */

#ifndef _RPC_H
#define _RPC_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows RPC master include file */

#include <basetsd.h>

#if defined(_M_ARM64)
#define __RPC_ARM64__
#elif defined(_M_IA64) || defined(_M_AMD64)
#define __RPC_WIN64__
#else
#define __RPC_WIN32__
#endif /* defined(_M_ARM64) */

#if defined(__RPC_WIN64__) || defined(__RPC_ARM64__)
#include <pshpack8.h>
#endif /* defined(__RPC_WIN64__) || defined(__RPC_ARM64__) */

#ifndef __MIDL_USER_DEFINED
#define midl_user_allocate  MIDL_user_allocate
#define midl_user_free      MIDL_user_free
#define __MIDL_USER_DEFINED
#endif

typedef void *I_RPC_HANDLE;
typedef long RPC_STATUS;

#if defined(__RPC_WIN32__) || defined(__RPC_WIN64__) || defined(__RPC_ARM32__) || defined(__RPC_ARM64__)
#define RPC_UNICODE_SUPPORTED
#endif

#define __RPC_API  __stdcall
#define __RPC_USER __stdcall
#define __RPC_STUB __stdcall
#define  RPC_ENTRY __stdcall

#define __RPC_FAR

#ifndef DECLSPEC_IMPORT
#if (defined(_M_IX86) || defined(_M_AMD64) || defined(_M_ARM64)) && !defined(MIDL_PASS)
#define DECLSPEC_IMPORT  __declspec(dllimport)
#else
#define DECLSPEC_IMPORT
#endif
#endif /* DECLSPEC_IMPORT */

#define RPCRTAPI  DECLSPEC_IMPORT
#define RPCNSAPI  DECLSPEC_IMPORT

#include <rpcdce.h>
#include <rpcnsi.h>
#include <rpcnterr.h>
#include <excpt.h>
#include <winerror.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#define RpcTryExcept  __try {
#define RpcExcept(expr)  } __except (expr) {
#define RpcEndExcept  }
#define RpcTryFinally  __try {
#define RpcFinally  } __finally {
#define RpcEndFinally  }

#define RpcExceptionCode()  GetExceptionCode()
#define RpcAbnormalTermination()  AbnormalTermination()

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if (!defined(RPC_NO_WINDOWS_H) || defined(RPC_NEED_RPCASYNC_H))
#include <rpcasync.h>
#endif /* (!defined(RPC_NO_WINDOWS_H) || defined(RPC_NEED_RPCASYNC_H)) */

#if defined(__RPC_WIN64__) || defined(__RPC_ARM64__)
#include <poppack.h>
#endif

#endif /* _RPC_H */
