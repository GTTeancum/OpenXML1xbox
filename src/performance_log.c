/* Host diagnostics only: never changes guest timing or synchronizes the GPU. */
#include "performance_log.h"
#include "build_settings.h"
#include <windows.h>
#include <intrin.h>
#include <stdio.h>
#include <string.h>
static FILE *events,*frames;
static ULONGLONG cpu_previous,tick_previous;
static ULONGLONG cpu_time(void) {
 FILETIME c,e,k,u;if(!GetProcessTimes(GetCurrentProcess(),&c,&e,&k,&u))return 0;
 return ((ULONGLONG)k.dwHighDateTime<<32)+k.dwLowDateTime+((ULONGLONG)u.dwHighDateTime<<32)+u.dwLowDateTime;
}
static SRWLOCK event_lock=SRWLOCK_INIT;
void xml1_performance_start(int enabled) {
    SetEnvironmentVariableA("XML1_PERF_SESSION",NULL);
    if(!enabled)return;
    CreateDirectoryA("logs",NULL);CreateDirectoryA("logs/performance",NULL);
    SYSTEMTIME t;GetSystemTime(&t);
    char relative[200],base[MAX_PATH],path[MAX_PATH+40];
    snprintf(relative,sizeof(relative),"logs/performance/%04u%02u%02u-%02u%02u%02u-%lu",t.wYear,t.wMonth,t.wDay,t.wHour,t.wMinute,t.wSecond,GetCurrentProcessId());
    DWORD n=GetFullPathNameA(relative,sizeof(base),base,NULL);if(!n||n>=sizeof(base))return;
    snprintf(path,sizeof(path),"%s-system.txt",base);FILE *f=fopen(path,"wb");if(!f)return;
    SYSTEM_INFO si;GetNativeSystemInfo(&si);MEMORYSTATUSEX ram={sizeof(ram)};GlobalMemoryStatusEx(&ram);
    int cpu[4];char brand[49]={0};__cpuid(cpu,0x80000000);
    if((unsigned)cpu[0]>=0x80000004)for(int i=0;i<3;i++){__cpuid(cpu,0x80000002+i);memcpy(brand+i*16,cpu,16);}
    fprintf(f,"format=1\nbuild=%s %s\ngame_pid=%lu\nstart_tick_ms=%llu\ncpu=%s\nlogical_processors=%lu\nram_total_bytes=%llu\nram_available_bytes=%llu\n",__DATE__,__TIME__,GetCurrentProcessId(),GetTickCount64(),brand,si.dwNumberOfProcessors,ram.ullTotalPhys,ram.ullAvailPhys);
    OSVERSIONINFOW os={sizeof(os)};
    typedef LONG (WINAPI *GetVersionFn)(OSVERSIONINFOW*);
    GetVersionFn version=(GetVersionFn)GetProcAddress(GetModuleHandleW(L"ntdll.dll"),"RtlGetVersion");
    if(version && version(&os)==0)fprintf(f,"windows_version=%lu.%lu.%lu\n",os.dwMajorVersion,os.dwMinorVersion,os.dwBuildNumber);
    DWORD_PTR process_mask=0,system_mask=0;
    if(GetProcessAffinityMask(GetCurrentProcess(),&process_mask,&system_mask))fprintf(f,"process_affinity=%llx\nsystem_affinity=%llx\n",(unsigned long long)process_mask,(unsigned long long)system_mask);
    SYSTEM_POWER_STATUS power;if(GetSystemPowerStatus(&power))fprintf(f,"ac_power=%u\nbattery_percent=%u\n",power.ACLineStatus,power.BatteryLifePercent);
    fprintf(f,"backend=Direct3D8\nprefer_files_loose=%d\nmodder_mode=%d\ntext_language=%s\nmovie_language=%s\naudio_language=%s\n",
        xml1_build_settings.prefer_files_loose,xml1_build_settings.modder_mode,
        xml1_build_settings.text_language,xml1_build_settings.movie_language,xml1_build_settings.audio_language);
    fclose(f);
    snprintf(path,sizeof(path),"%s-events.tsv",base);events=fopen(path,"wb");
    if(events){fputs("tick_ms\tcommand\n",events);fflush(events);}
    snprintf(path,sizeof(path),"%s-game.csv",base);frames=fopen(path,"wb");
    if(frames){fputs("tick_ms,frame,game_process_cpu_cores\n",frames);fflush(frames);}
    cpu_previous=cpu_time();tick_previous=GetTickCount64();
    SetEnvironmentVariableA("XML1_PERF_SESSION",base);
    fprintf(stderr,"[PERFORMANCE REPORT] %s-*\n",relative);
}
void xml1_performance_event(const char *command) {
    if(!events||!command)return;
    /* Only transitions: no usernames, save paths, arbitrary scripts or input. */
    if(strncmp(command,"loadmap ",8)&&strncmp(command,"beginmission ",13)&&
       strncmp(command,"openmenu ",9)&&strcmp(command,"resetgame")&&strcmp(command,"quitapp"))return;
    char clean[257];unsigned i=0;
    for(;i<256&&command[i];i++)clean[i]=(command[i]=='\t'||command[i]=='\r'||command[i]=='\n')?' ':command[i];clean[i]=0;
    AcquireSRWLockExclusive(&event_lock);
    /* Bounded to 4 MB per session, independent of customized menu frequency. */
    long size=ftell(events);if(size>=0&&size<4*1024*1024){fprintf(events,"%llu\t%s\n",GetTickCount64(),clean);fflush(events);}
    ReleaseSRWLockExclusive(&event_lock);
}

void xml1_performance_frame(unsigned frame) {
 if(!frames || frame%120)return;
 ULONGLONG tick=GetTickCount64(),cpu=cpu_time();
 double cores=tick>tick_previous?(cpu-cpu_previous)/10000.0/(tick-tick_previous):0;
 long size=ftell(frames);if(size>=0&&size<4*1024*1024)fprintf(frames,"%llu,%u,%.4f\n",tick,frame,cores);
 fflush(frames);cpu_previous=cpu;tick_previous=tick;
}
