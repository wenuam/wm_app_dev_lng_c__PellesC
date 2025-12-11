#ifndef _STIREG_H
#define _STIREG_H

#if __POCC__ >= 500
#pragma once
#endif

/* Still Image API registry entries */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define REGSTR_VAL_TYPE_W            L"Type"
#define REGSTR_VAL_VENDOR_NAME_W     L"Vendor"
#define REGSTR_VAL_DEVICETYPE_W      L"DeviceType"
#define REGSTR_VAL_DEVICESUBTYPE_W   L"DeviceSubType"
#define REGSTR_VAL_DEV_NAME_W        L"DeviceName"
#define REGSTR_VAL_DRIVER_DESC_W     L"DriverDesc"
#define REGSTR_VAL_FRIENDLY_NAME_W   L"FriendlyName"
#define REGSTR_VAL_GENERIC_CAPS_W    L"Capabilities"
#define REGSTR_VAL_HARDWARE_W        L"HardwareConfig"
#define REGSTR_VAL_HARDWARE          TEXT("HardwareConfig")
#define REGSTR_VAL_DEVICE_NAME_W     L"DriverDesc"
#define REGSTR_VAL_DATA_W            L"DeviceData"
#define REGSTR_VAL_GUID_W            L"GUID"
#define REGSTR_VAL_GUID               TEXT("GUID")
#define REGSTR_VAL_LAUNCH_APPS_W     L"LaunchApplications"
#define REGSTR_VAL_LAUNCH_APPS        TEXT("LaunchApplications")
#define REGSTR_VAL_LAUNCHABLE_W      L"Launchable"
#define REGSTR_VAL_LAUNCHABLE         TEXT("Launchable")
#if (_WIN32_WINNT >= 0x0600)
#define REGSTR_VAL_SHUTDOWNDELAY_W   L"ShutdownIfUnusedDelay"
#define REGSTR_VAL_SHUTDOWNDELAY      TEXT("ShutdownIfUnusedDelay")
#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT >= 0x0501)
#define IS_DIGITAL_CAMERA_STR   L"IsDigitalCamera"
#define IS_DIGITAL_CAMERA_VAL   1
#define SUPPORTS_MSCPLUS_STR    L"SupportsMSCPlus"
#define SUPPORTS_MSCPLUS_VAL    1
#endif /* (_WIN32_WINNT >= 0x0501) */

#define STI_DEVICE_VALUE_TWAIN_NAME    L"TwainDS"
#define STI_DEVICE_VALUE_ISIS_NAME     L"ISISDriverName"
#define STI_DEVICE_VALUE_ICM_PROFILE   L"ICMProfile"
#define STI_DEVICE_VALUE_DEFAULT_LAUNCHAPP  L"DefaultLaunchApp"
#define STI_DEVICE_VALUE_TIMEOUT       L"PollTimeout"
#define STI_DEVICE_VALUE_DISABLE_NOTIFICATIONS  L"DisableNotifications"
#define REGSTR_VAL_BAUDRATE            L"BaudRate"

#define STI_DEVICE_VALUE_TWAIN_NAME_A  "TwainDS"
#define STI_DEVICE_VALUE_ISIS_NAME_A   "ISISDriverName"
#define STI_DEVICE_VALUE_ICM_PROFILE_A   "ICMProfile"
#define STI_DEVICE_VALUE_DEFAULT_LAUNCHAPP_A  "DefaultLaunchApp"
#define STI_DEVICE_VALUE_TIMEOUT_A       "PollTimeout"
#define STI_DEVICE_VALUE_DISABLE_NOTIFICATIONS_A  "DisableNotifications"
#define REGSTR_VAL_BAUDRATE_A            "BaudRate"

#include <devpropdef.h>

DEFINE_DEVPROPKEY(DEVPKEY_WIA_DeviceType, 0x6bdd1fc6, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f, 2);
DEFINE_DEVPROPKEY(DEVPKEY_WIA_USDClassId, 0x6bdd1fc6, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f, 3);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _STIREG_H */
