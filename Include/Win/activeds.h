#ifndef _ACTIVEDS_H
#define _ACTIVEDS_H

#if __POCC__ >= 500
#pragma once
#endif

/* Active Directory Service master include file */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include "iads.h"
#include "adshlp.h"
#include "adserr.h"
#include "adsiid.h"
#include "adssts.h"
#include "adsnms.h"
#include "adsdb.h"

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _ACTIVEDS_H */
