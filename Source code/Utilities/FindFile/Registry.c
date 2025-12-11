// registry.c
#include <tchar.h>
#include "find.h"
#include "registry.h"

#define KEY HKEY_CURRENT_USER
static wchar_t g_szRegSubKey[] = L"Software\\";
static wchar_t g_szRegName[]   = L"FindFile\\";
static wchar_t g_szCurrentKey[PATH_SIZE];

/******************************************************************************

  FUNCTION	: ReadRegistryString(wchar_t *szKey, wchar_t *szSubKey, int szReturnBuffer)

  PURPOSE	: Reads a int registry entry for this app.

  RETURN   	: int value or default value supplied by caller (cbReturnBuffer)

  PARAMS   	: *szKey		 - e.g. WindowPos
  			: *szSubKey 	 - e.g. left
			: cbReturnBuffer - default value returned if no reg entry

*******************************************************************************/
DWORD ReadRegistryString(const wchar_t *szKey, const wchar_t *szSubKey, const wchar_t *pszDefault, wchar_t * szReturnBuffer)
{
	HKEY  hKey;
	DWORD dwType;

	DWORD size = PATH_SIZE;

	// make whole key string
	wcscpy(g_szCurrentKey, g_szRegSubKey);
	wcscat(g_szCurrentKey, g_szRegName);
	wcscat(g_szCurrentKey, szKey);

	if (ERROR_SUCCESS == RegOpenKeyEx(KEY, g_szCurrentKey, 0, KEY_QUERY_VALUE, &hKey))
	{
		dwType = REG_SZ;

		if (ERROR_SUCCESS == RegQueryValueEx(hKey, szSubKey, 0, &dwType, (PBYTE)szReturnBuffer, &size))
		{
			RegCloseKey(hKey);
			return (size);
		}
		else
		{
			wcscpy(szReturnBuffer, pszDefault);
			return 0;
		}
	}
	else
	{
		wcscpy(szReturnBuffer, pszDefault);
		return 0;
	}
}

wchar_t * ReadRegistryDepends(void)
{
	static wchar_t szdepends[PATH_SIZE];

	HKEY  hKey;
	DWORD dwType;
	unsigned long size = PATH_SIZE;

#define KEY1 HKEY_LOCAL_MACHINE

	// make whole key string
	wcscpy(g_szCurrentKey, g_szRegSubKey);
	wcscat(g_szCurrentKey, L"Microsoft\\Shared Tools\\depends.exe");

	if (ERROR_SUCCESS == RegOpenKeyEx(KEY1, g_szCurrentKey, 0, KEY_QUERY_VALUE, &hKey))
	{
		dwType = REG_SZ;

		if (ERROR_SUCCESS == RegQueryValueEx(hKey, L"", 0, &dwType, (PBYTE)szdepends, &size))
		{
			RegCloseKey(hKey);
			return szdepends;
		}
		else
		{
			return NULL;
		}
	}
	else
	{
		return NULL;
	}
}

/**********************************************************************************

  FUNCTION	: WriteRegistryString(wchar_t *szKey, wchar_t *szSubKey, wchar_t *pszStr)

  PURPOSE	: Writes a string registry entry for this app. If entry does not
			  exist creates a new one.

  RETURN   	: TRUE

  PARAMS   	: *szKey	- e.g. 'MRU'
			: *szSubKey	- e.g. '1st'
			: *pszStr	- the string

***********************************************************************************/
BOOL WriteRegistryString(const wchar_t *szKey, const wchar_t *szSubKey, const wchar_t *pszStr, const wchar_t *szdefault)
{
	DWORD dwdisp;
	HKEY  hkey;

	// make whole key string
	wcscpy(g_szCurrentKey, g_szRegSubKey);
	wcscat(g_szCurrentKey, g_szRegName);
	wcscat(g_szCurrentKey, szKey);

	// The RegCreateKeyEx function creates the specified key. If the key
	// already exists in the registry, the function opens it.
	if (ERROR_SUCCESS != RegCreateKeyEx(KEY, g_szCurrentKey, 0, 0,
										REG_OPTION_NON_VOLATILE, KEY_WRITE, 0, &hkey, &dwdisp))
	{
		return FALSE;
	}

	if (*pszStr != 0)
		RegSetValueEx(hkey, szSubKey, 0, REG_SZ, (PBYTE)pszStr, wcslen(pszStr)*sizeof(wchar_t));
	else
		RegSetValueEx(hkey, szSubKey, 0, REG_SZ, (PBYTE)szdefault, wcslen(szdefault)*sizeof(wchar_t));

	RegCloseKey(hkey);

	return TRUE;

}

/*****************************************************************************

  FUNCTION	: ReadRegistryInt(wchar_t *szKey, wchar_t *szSubKey, int cbReturnBuffer)

  PURPOSE	: Reads a int registry entry for this app.

  RETURN   	: int value or default value supplied by caller (cbReturnBuffer)

  PARAMS   	: *szKey		 - e.g. 'WindowPos'
			: *szSubKey 	 - e.g. 'left'
			: cbReturnBuffer - default value returned if no reg entry

******************************************************************************/
DWORD ReadRegistryInt(const wchar_t * szKey, const wchar_t * szSubKey, int cbReturnBuffer)
{
	HKEY  hKey;
	DWORD IntBuffer = 0, cbValue, dwType, result;

	// make whole key string
	wcscpy(g_szCurrentKey, g_szRegSubKey);
	wcscat(g_szCurrentKey, g_szRegName);
	wcscat(g_szCurrentKey, szKey);

	if (RegOpenKeyEx(KEY, g_szCurrentKey,	0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
	{
		cbValue = 4;
		dwType  = REG_DWORD;

		if (RegQueryValueEx(hKey, szSubKey, 0, &dwType, (BYTE*)&IntBuffer, &cbValue) == 0)
			result = IntBuffer;
		else
			result = cbReturnBuffer;

		RegCloseKey(hKey);

		return (result);
	}
	else
		return cbReturnBuffer;
}

/************************************************************************

  FUNCTION	: WriteRegistryInt(wchar_t *szKey, wchar_t *szSubKey, int n)

  PURPOSE	: Writes a int registry entry for this app. If entry does not
			  exist creates a new one.

  RETURN   	: TRUE

  PARAMS   	: *szKey	 - e.g. 'WindowPos'
 			: *szSubKey - e.g. 'left'
			: n			 - the int value to write

*************************************************************************/
BOOL WriteRegistryInt(const wchar_t * szKey, const wchar_t * szSubKey, int n)
{
	DWORD dwdisp;
	HKEY  hkey;

	// make whole key string
	wcscpy(g_szCurrentKey, g_szRegSubKey);
	wcscat(g_szCurrentKey, g_szRegName);
	wcscat(g_szCurrentKey, szKey);

	// The RegCreateKeyEx function creates the specified key. If the key
	// already exists in the registry, the function opens it.
	if (ERROR_SUCCESS != RegCreateKeyEx(KEY, g_szCurrentKey, 0, 0,
										REG_OPTION_NON_VOLATILE, KEY_WRITE, 0, &hkey, &dwdisp))
	{
		return FALSE;
	}

	RegSetValueEx(hkey, szSubKey, 0, REG_BINARY, (BYTE*)&n, sizeof(int));
	RegCloseKey(hkey);

	return TRUE;

}



