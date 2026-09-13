#include <windows.h>
#include <dbghelp.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static HANDLE guest_thread;
extern ptrdiff_t g_xbox_mem_offset;
extern __declspec(thread) uint32_t g_esp;
static volatile LONG movie_watch_state;
static uintptr_t movie_watch_page;
static uint64_t movie_watch_rip;
static uint32_t movie_watch_sp,movie_watch_access,movie_watch_words[12];
static LONG CALLBACK movie_watch_handler(EXCEPTION_POINTERS *exception) {
    if(exception->ExceptionRecord->ExceptionCode!=STATUS_GUARD_PAGE_VIOLATION || movie_watch_state!=1)
        return EXCEPTION_CONTINUE_SEARCH;
    uintptr_t address=exception->ExceptionRecord->ExceptionInformation[1];
    if(address<movie_watch_page||address>=movie_watch_page+4096) return EXCEPTION_CONTINUE_SEARCH;
    movie_watch_rip=exception->ContextRecord->Rip;
    movie_watch_sp=g_esp;
    movie_watch_access=(uint32_t)exception->ExceptionRecord->ExceptionInformation[0];
    if(g_esp<0x10000000-48) memcpy(movie_watch_words,(const void *)((uintptr_t)g_xbox_mem_offset+g_esp),48);
    InterlockedExchange(&movie_watch_state,2);
    return EXCEPTION_CONTINUE_EXECUTION;
}
void xml1_movie_watch_arm(uint32_t va) {
    if(!getenv("XML1_MOVIE_WATCH")||movie_watch_state) return;
    movie_watch_page=((uintptr_t)g_xbox_mem_offset+va)&~(uintptr_t)4095;
    MEMORY_BASIC_INFORMATION info;
    if(!VirtualQuery((void *)movie_watch_page,&info,sizeof(info))||info.State!=MEM_COMMIT||info.Protect!=PAGE_READWRITE) return;
    if(!AddVectoredExceptionHandler(1,movie_watch_handler)) return;
    DWORD previous;
    InterlockedExchange(&movie_watch_state,1);
    if(!VirtualProtect((void *)movie_watch_page,4096,PAGE_READWRITE|PAGE_GUARD,&previous)) {InterlockedExchange(&movie_watch_state,0);return;}
    fprintf(stderr,"[MOVIE WATCH] armed one-shot process-local page at guest %08X\n",va);
}
void xml1_movie_watch_report(void);
static unsigned delay_ms;
static uintptr_t profile_stack_start;
static size_t profile_stack_size;
static unsigned char profile_stack[65536];
static BOOL CALLBACK profile_read(HANDLE process,DWORD64 address,PVOID buffer,DWORD size,LPDWORD read) {
    if(address>=profile_stack_start && address-profile_stack_start<=profile_stack_size &&
       size<=profile_stack_size-(size_t)(address-profile_stack_start)) {
        memcpy(buffer,profile_stack+(size_t)(address-profile_stack_start),size);*read=size;return TRUE;
    }
    /* Never read the live version of a stack page after resuming its owner. */
    if(address>=profile_stack_start && address-profile_stack_start<16u*1024*1024) {*read=0;return FALSE;}
    SIZE_T done=0;BOOL ok=ReadProcessMemory(process,(void *)(uintptr_t)address,buffer,size,&done);
    *read=(DWORD)done;return ok;
}
static DWORD WINAPI profile(LPVOID unused) {
    (void)unused;
    uint64_t addresses[200][16]={0};
    Sleep(5000);
    for(unsigned n=0;n<200;++n) {
        CONTEXT context={0}; context.ContextFlags=CONTEXT_FULL;
        profile_stack_size=0;
        if(SuspendThread(guest_thread)==(DWORD)-1) break;
        if(GetThreadContext(guest_thread,&context)) {
            addresses[n][0]=context.Rip;
            profile_stack_start=context.Rsp;
            MEMORY_BASIC_INFORMATION region;
            if(VirtualQuery((void *)context.Rsp,&region,sizeof(region))&&region.State==MEM_COMMIT&&!(region.Protect&(PAGE_NOACCESS|PAGE_GUARD))) {
                profile_stack_size=(uintptr_t)region.BaseAddress+region.RegionSize-context.Rsp;
                if(profile_stack_size>sizeof(profile_stack)) profile_stack_size=sizeof(profile_stack);
                memcpy(profile_stack,(const void *)context.Rsp,profile_stack_size);
            }
        }
        /* No allocation, symbol lookup or logging while the guest is suspended. */
        ResumeThread(guest_thread);
        if(addresses[n][0]&&profile_stack_size) {
            STACKFRAME64 frame={0};
            frame.AddrPC.Offset=context.Rip;frame.AddrPC.Mode=AddrModeFlat;
            frame.AddrStack.Offset=context.Rsp;frame.AddrStack.Mode=AddrModeFlat;
            frame.AddrFrame.Offset=context.Rbp;frame.AddrFrame.Mode=AddrModeFlat;
            for(unsigned depth=1;depth<16;++depth) {
                if(!StackWalk64(IMAGE_FILE_MACHINE_AMD64,GetCurrentProcess(),guest_thread,&frame,&context,
                    profile_read,SymFunctionTableAccess64,SymGetModuleBase64,NULL)||!frame.AddrPC.Offset) break;
                addresses[n][depth]=frame.AddrPC.Offset;
            }
        }
        Sleep(50);
    }
    CloseHandle(guest_thread);
    FILE *out=fopen("build/native-profile.csv","wb");
    if(!out) return 0;
    fputs("sample,depth,address,symbol,displacement\n",out);
    for(unsigned n=0;n<200;++n) for(unsigned depth=0;depth<16;++depth) {
        uint64_t address=addresses[n][depth];
        if(!address) continue;
        char storage[sizeof(SYMBOL_INFO)+256]={0};
        SYMBOL_INFO *info=(SYMBOL_INFO *)storage;
        info->SizeOfStruct=sizeof(*info);info->MaxNameLen=255;
        DWORD64 displacement=0;
        BOOL ok=SymFromAddr(GetCurrentProcess(),address,&displacement,info);
        fprintf(out,"%u,%u,%016llX,%s,%llX\n",n,depth,address,ok?info->Name:"unknown",displacement);
    }
    fclose(out);
    fprintf(stderr,"[NATIVE PROFILE] own main-thread captured-stack unwind samples saved\n");
    return 0;
}
static void symbol(uint64_t address) {
    char storage[sizeof(SYMBOL_INFO)+256]={0};
    SYMBOL_INFO *info=(SYMBOL_INFO *)storage;
    info->SizeOfStruct=sizeof(*info); info->MaxNameLen=255;
    DWORD64 displacement=0;
    if (SymFromAddr(GetCurrentProcess(),address,&displacement,info))
        fprintf(stderr,"[NATIVE PROBE] %016llX %s+%llX\n",(unsigned long long)address,info->Name,(unsigned long long)displacement);
}
void xml1_movie_watch_report(void) {
    if(InterlockedCompareExchange(&movie_watch_state,3,2)!=2) return;
    fprintf(stderr,"[MOVIE WATCH] access=%u guest_sp=%08X\n",movie_watch_access,movie_watch_sp);
    symbol(movie_watch_rip);
    for(unsigned i=0;i<12;++i) fprintf(stderr,"  watch_stack[%u]=%08X\n",i,movie_watch_words[i]);
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
    int profiling=getenv("XML1_NATIVE_PROFILE")!=NULL;
    if (!getenv("XML1_NATIVE_PROBE")&&!profiling) return;
    unsigned seconds=(unsigned)atoi(getenv("RECOMP_WATCHDOG_SECS")?getenv("RECOMP_WATCHDOG_SECS"):"10");
    delay_ms=(seconds>2?seconds-2:1)*1000;
    if (!DuplicateHandle(GetCurrentProcess(),GetCurrentThread(),GetCurrentProcess(),&guest_thread,
            THREAD_SUSPEND_RESUME|THREAD_GET_CONTEXT,FALSE,0)) return;
    HANDLE monitor=CreateThread(NULL,0,profiling?profile:sample,NULL,0,NULL);
    if (monitor) CloseHandle(monitor); else CloseHandle(guest_thread);
}
