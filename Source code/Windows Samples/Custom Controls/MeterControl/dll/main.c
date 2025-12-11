#include <windows.h>
#include <winbase.h>
#include <windowsx.h>
#include <commctrl.h>
#include "metercontrol.h"

BOOL inithed = FALSE;

BOOL APIENTRY DllMain(HINSTANCE hInstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            /*
             * Microsoft says:
             *
             * The DLL is being loaded into the virtual address space of the current
             * process as a result of the process starting up or as a result of a call
             * to LoadLibrary. DLLs can use this opportunity to initialize any instance
             * data or to use the TlsAlloc function to allocate a thread local storage
             * (TLS) index.
             */
			 //Create and register the class
			inithed = initMeter(NULL);
            break;

        case DLL_THREAD_ATTACH:
            /*
             * Microsoft says:
             *
             * The current process is creating a new thread. When this occurs, the system
             * calls the entry-point function of all DLLs currently attached to the process.
             * The call is made in the context of the new thread. DLLs can use this opportunity
             * to initialize a TLS slot for the thread. A thread calling the DLL entry-point
             * function with DLL_PROCESS_ATTACH does not call the DLL entry-point function
             * with DLL_THREAD_ATTACH.
             *
             * Note that a DLL's entry-point function is called with this value only by threads
             * created after the DLL is loaded by the process. When a DLL is loaded using
             * LoadLibrary, existing threads do not call the entry-point function of the newly
             * loaded DLL.
             */
            break;

        case DLL_THREAD_DETACH:
            /*
             * Microsoft says:
             *
             * A thread is exiting cleanly. If the DLL has stored a pointer to allocated memory
             * in a TLS slot, it should use this opportunity to free the memory. The system calls
             * the entry-point function of all currently loaded DLLs with this value. The call
             * is made in the context of the exiting thread.
             */
            break;

        case DLL_PROCESS_DETACH:
            /*
             * Microsoft says:
             *
             * The DLL is being unloaded from the virtual address space of the calling process as
             * a result of unsuccessfully loading the DLL, termination of the process, or a call
             * to FreeLibrary. The DLL can use this opportunity to call the TlsFree function to
             * free any TLS indices allocated by using TlsAlloc and to free any thread local data.
             *
             * Note that the thread that receives the DLL_PROCESS_DETACH notification is not
             * necessarily the same thread that received the DLL_PROCESS_ATTACH notification.
             */
			//Clean up all list members
			UnregisterMeter();
            break;
    }

    /* Return success */
    return TRUE;
}
__declspec( dllexport ) BOOL registerMeterCtrl(HINSTANCE hInst)
{
	if(!inithed){ inithed = initMeter(hInst); }
}
__declspec( dllexport ) BOOL unregisterMeterCtrl(void)
{
	return UnregisterMeter();
}
