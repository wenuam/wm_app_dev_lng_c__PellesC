#ifndef _SCHNLSP_H
#define _SCHNLSP_H

#if __POCC__ >= 500
#pragma once
#endif

/* SCHANNEL Security Provider definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <schannel.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _SCHNLSP_H */
