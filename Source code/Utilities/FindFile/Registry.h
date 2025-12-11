// registry.h


#ifndef _REGISTRY_H_
#define _REGISTRY_H_

DWORD  ReadRegistryString(const wchar_t *pszKey, const wchar_t *pszSubKey, const wchar_t *pszDefault, wchar_t *pszReturnBuffer);
BOOL   WriteRegistryString(const wchar_t *szKey, const wchar_t *szSubKey, const wchar_t *pszStr, const wchar_t *szdefault);
DWORD  ReadRegistryInt(const wchar_t *pszKey, const wchar_t *pszSubKey, int cbReturnBuffer);
BOOL   WriteRegistryInt(const wchar_t *szKey, const wchar_t *szSubKey, int n);
wchar_t * ReadRegistryDepends(void);

#endif // _REGISTRY_H_
