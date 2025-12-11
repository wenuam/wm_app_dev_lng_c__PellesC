#ifndef _ACTIVITYCOORDINATOR_H
#define _ACTIVITYCOORDINATOR_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet Contract for ext-ms-win-resourcemanager-activitycoordinator-l1.lib */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <activitycoordinatortypes.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

STDAPI CreateActivityCoordinatorPolicy(
    ACTIVITY_COORDINATOR_POLICY_TEMPLATE policyTemplate,
    ACTIVITY_COORDINATOR_POLICY * policy
);

STDAPI SetActivityCoordinatorPolicyResourceCondition(
    ACTIVITY_COORDINATOR_POLICY policy,
    ACTIVITY_COORDINATOR_RESOURCE resource,
    ACTIVITY_COORDINATOR_CONDITION condition
);

STDAPI GetActivityCoordinatorPolicyResourceCondition(
    ACTIVITY_COORDINATOR_POLICY policy,
    ACTIVITY_COORDINATOR_RESOURCE resource,
    ACTIVITY_COORDINATOR_CONDITION * condition
);

void WINAPI DestroyActivityCoordinatorPolicy(
    ACTIVITY_COORDINATOR_POLICY policy
);

STDAPI SubscribeActivityCoordinatorPolicy(
    ACTIVITY_COORDINATOR_POLICY policy,
    ACTIVITY_COORDINATOR_CALLBACK callback,
    void * callbackContext,
    ACTIVITY_COORDINATOR_SUBSCRIPTION * subscription
);

STDAPI UnsubscribeActivityCoordinatorPolicy(
    ACTIVITY_COORDINATOR_SUBSCRIPTION subscription
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#ifndef ext_ms_win_resourcemanager_activitycoordinator_l1_1_0_query_routines
#define ext_ms_win_resourcemanager_activitycoordinator_l1_1_0_query_routines

BOOLEAN __stdcall IsCreateActivityCoordinatorPolicyPresent(void);
BOOLEAN __stdcall IsSetActivityCoordinatorPolicyResourceConditionPresent(void);
BOOLEAN __stdcall IsGetActivityCoordinatorPolicyResourceConditionPresent(void);
BOOLEAN __stdcall IsDestroyActivityCoordinatorPolicyPresent(void);
BOOLEAN __stdcall IsSubscribeActivityCoordinatorPolicyPresent(void);
BOOLEAN __stdcall IsUnsubscribeActivityCoordinatorPolicyPresent(void);

#endif /* ext_ms_win_resourcemanager_activitycoordinator_l1_1_0_query_routines */

#endif /* _ACTIVITYCOORDINATOR_H */
