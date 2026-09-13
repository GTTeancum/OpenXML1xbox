#pragma once
#include <windows.h>

/* A renderer can exit while the guest thread is blocked. Observe its process
 * independently of graphics submissions so audio cannot outlive the window. */
static DWORD WINAPI xml1_worker_exit_monitor(void *parameter) {
    HANDLE worker=(HANDLE)parameter;
    DWORD code=4;
    if(WaitForSingleObject(worker,INFINITE)==WAIT_OBJECT_0)
        GetExitCodeProcess(worker,&code);
    CloseHandle(worker);
    /* Do not run CRT teardown on a guest thread that may hold runtime locks.
     * Windows closes the audio device and the jobs containing our workers. */
    ExitProcess(code);
    return 0;
}

/* Takes ownership of the process handle on success only. */
static int xml1_monitor_worker_exit(HANDLE worker) {
    HANDLE monitor=CreateThread(NULL,0,xml1_worker_exit_monitor,worker,0,NULL);
    if(!monitor) return 0;
    CloseHandle(monitor);
    return 1;
}
