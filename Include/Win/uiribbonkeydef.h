
/* Useless crap definitions */

#if __POCC__ >= 500
#pragma once
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <propkeydef.h>

#define DEFINE_UIPROPERTYKEY(name, type, index) \
    EXTERN_C const PROPERTYKEY DECLSPEC_SELECTANY name = { \
        { 0x00000000 + index, 0x7363, 0x696e, { 0x84, 0x41, 0x79, 0x8a, 0xcf, 0x5a, 0xeb, 0xb7 } }, type }

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
