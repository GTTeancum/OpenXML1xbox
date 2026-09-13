#include <windows.h>
#include <dbghelp.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static HANDLE guest_thread;
static unsigned delay_ms;
static void symbol(uint64_t address) {
    char storage[sizeof(SYMBOL_INFO)+256]={0};
    SYMBOL_INFO *info=(SYMBOL_INFO *)storage;
    info->SizeOfStruct=sizeof(*info); info->MaxNameLen=255;
    DWORD64 displacement=0;
    if (SymFromAddr(GetCurrentProcess(),address,&displacement,info))
        fprintf(stderr,"[NATIVE PROBE] %016llX %s+%llX\n",(unsigned long long)address,info->Name,(unsigned long long)displacement);
}
static DWORD WINAPI sample(LPVOID unused) {
    (void)unused; Sleep(delay_ms);
    CONTEXT context={0}; context.ContextFlags=CONTEXT_CONTROL;
    uint64_t stack[128]={0}; size_t count=0;
    if (SuspendThread(guest_thread)==(DWORD)-1) return 0;
    BOOL ok=GetThreadContext(guest_thread,&context);
    if (ok) {
        MEMORY_BASIC_INFORMATION region;
        if (VirtualQuery((void *)context.Rsp,&region,sizeof(region))&&region.State==MEM_COMMIT&&!(region.Protect&(PAGE_NOACCESS|PAGE_GUARD))) {
            size_t available=(uintptr_t)region.BaseAddress+region.RegionSize-context.Rsp;
            count=(available<sizeof(stack)?available:sizeof(stack))/8;
            memcpy(stack,(const void *)context.Rsp,count*8);
        }
    }
    /* Resume before symbol lookup or output: neither runs while the sampled
     * process-local guest thread could own an allocator/loader/output lock. */
    ResumeThread(guest_thread); CloseHandle(guest_thread);
    if (!ok) return 0;
    fprintf(stderr,"[NATIVE PROBE] sampled own guest thread RIP=%016llX RSP=%016llX\n",
        (unsigned long long)context.Rip,(unsigned long long)context.Rsp);
    symbol(context.Rip);
    uintptr_t base=(uintptr_t)GetModuleHandleW(NULL);
    IMAGE_DOS_HEADER *dos=(IMAGE_DOS_HEADER *)base;
    IMAGE_NT_HEADERS *nt=(IMAGE_NT_HEADERS *)(base+dos->e_lfanew);
    fprintf(stderr,"[NATIVE PROBE] following addresses are stack candidates, not an unwound call chain\n");
    for (size_t i=0;i<count;++i) if (stack[i]>=base&&stack[i]<base+nt->OptionalHeader.SizeOfImage) symbol(stack[i]);
    return 0;
}
void xml1_native_probe_start(void) {
    if (!getenv("XML1_NATIVE_PROBE")) return;
    unsigned seconds=(unsigned)atoi(getenv("RECOMP_WATCHDOG_SECS")?getenv("RECOMP_WATCHDOG_SECS"):"10");
    delay_ms=(seconds>2?seconds-2:1)*1000;
    if (!DuplicateHandle(GetCurrentProcess(),GetCurrentThread(),GetCurrentProcess(),&guest_thread,
            THREAD_SUSPEND_RESUME|THREAD_GET_CONTEXT,FALSE,0)) return;
    HANDLE monitor=CreateThread(NULL,0,sample,NULL,0,NULL);
    if (monitor) CloseHandle(monitor); else CloseHandle(guest_thread);
}
