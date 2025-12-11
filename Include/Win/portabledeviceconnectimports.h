#ifdef MIDL_PASS

cpp_quote("#include <winapifamily.h>")
cpp_quote("#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)")

#include <devpropdef.h>

cpp_quote("#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */")

#endif /* MIDL_PASS */
