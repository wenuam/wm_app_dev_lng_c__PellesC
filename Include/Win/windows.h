#include <winapifamily.h>

#ifndef _WINDOWS_
#define _WINDOWS_

#include <sdkddkver.h>

#ifndef _WINDOWS_H
#define _WINDOWS_H

#if __POCC__ >= 500
#pragma once
#endif

#if !defined(_MSC_EXTENSIONS) && !defined(RC_INVOKED)
#error <windows.h> requires the /Ze compiler option
#endif /* !_MSC_EXTENSIONS && !RC_INVOKED */

/* Shut up permanently */
#if __POCC__ >= 290
#pragma warn(disable:1067)  /* more than x macro identifiers */
#pragma warn(disable:2109)  /* more than x external identifiers */
#pragma warn(disable:2121)  /* redeclaration of 'type' */
#pragma warn(disable:2265)  /* array size is zero */
#endif

/* Windows API master include file */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if defined(RC_INVOKED) && !defined(NOWINRES)

#include <winresrc.h>

#else /* whatever */

#ifdef RC_INVOKED
#define NOATOM
#define NOGDI
#define NOGDICAPMASKS
#define NOMETAFILE
#define NOMINMAX
#define NOMSG
#define NOOPENFILE
#define NORASTEROPS
#define NOSCROLL
#define NOSOUND
#define NOSYSMETRICS
#define NOTEXTMETRIC
#define NOWH
#define NOCOMM
#define NOKANJI
#define NOCRYPT
#define NOMCX
#endif /* RC_INVOKED */

#if !defined(_X86_) && !defined(_AMD64_) && !defined(_ARM64_) && !defined(_ARM64EC_) && defined(_M_IX86)
#define _X86_
#if !defined(_CHPE_X86_ARM64_) && defined(_M_HYBRID)
#define _CHPE_X86_ARM64_
#endif
#endif

#if !defined(_X86_) && !defined(_AMD64_) && !defined(_ARM64_) && (defined(_M_AMD64) || defined(_M_ARM64EC))
#define _AMD64_
#endif

#if !defined(_X86_) && !defined(_AMD64_) && !defined(_ARM64_) && !defined(_ARM64EC_) && defined(_M_ARM64)
#define _ARM64_
#endif

#if !defined(_X86_) && !defined(_ARM64_) && !defined(_ARM64EC_) && defined(_M_ARM64EC)
#define _ARM64EC_
#endif

#ifndef RC_INVOKED
#include <excpt.h>
#include <stdarg.h>
#endif /* RC_INVOKED */

#include <windef.h>
#include <winbase.h>
#include <wingdi.h>
#include <winuser.h>
#include <winnls.h>
#include <wincon.h>
#include <winver.h>
#include <winreg.h>
#include <winnetwk.h>

#ifndef WIN32_LEAN_AND_MEAN
#include <cderr.h>
#include <dde.h>
#include <ddeml.h>
#include <dlgs.h>
#include <lzexpand.h>
#include <mmsystem.h>
#include <nb30.h>
#include <rpc.h>
#include <shellapi.h>
#include <winperf.h>
#include <winsock.h>
#ifndef NOCRYPT
#include <wincrypt.h>
#include <winefs.h>
#include <winscard.h>
#endif /* !NOCRYPT */
#ifndef NOGDI
#include <winspool.h>
#include <ole2.h>
#include <commdlg.h>
#endif /* !NOGDI */
#endif /* WIN32_LEAN_AND_MEAN */

/* #include <stralign.h> */

#ifndef NOSERVICE
#include <winsvc.h>
#endif /* !NOSERVICE */

#ifndef NOMCX
#include <mcx.h>
#endif /* !NOMCX */
#ifndef NOIME
#include <imm.h>
#endif /* !NOIME */

#endif /* RC_INVOKED */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _WINDOWS_H */

#endif /* _WINDOWS_ */
