#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
void xml1_graphics_live_observe(uint32_t va);
void xml1_movie_watch_arm(uint32_t va);
void xml1_movie_watch_report(void);
static uint32_t movie_source_to_watch;
static RECOMP_TLS ULONGLONG movie_convert_start;
static RECOMP_TLS struct { uint32_t va; LARGE_INTEGER at; } movie_timeline[256];
static RECOMP_TLS unsigned movie_timeline_count;
static RECOMP_TLS int movie_timeline_done;
static void trace_movie_timeline(uint32_t va) {
    static volatile LONG enabled=-1;
    LONG capture=InterlockedCompareExchange(&enabled,0,0);
    if(capture<0) {
        capture=getenv("XML1_MOVIE_TIMELINE")!=NULL;
        InterlockedCompareExchange(&enabled,capture,-1);
    }
    if (movie_timeline_done || !capture) return;
    if (!movie_timeline_count && va!=0x32B8A0) return;
    if (movie_timeline_count<256) {
        movie_timeline[movie_timeline_count].va=va;
        QueryPerformanceCounter(&movie_timeline[movie_timeline_count++].at);
    }
    if (va==0x3A6D39) {
        LARGE_INTEGER frequency; QueryPerformanceFrequency(&frequency);
        for(unsigned i=0;i<movie_timeline_count;++i)
            fprintf(stderr,"[MOVIE TIMELINE] va=%08X elapsed_ms=%.3f\n",movie_timeline[i].va,
                1000.0*(movie_timeline[i].at.QuadPart-movie_timeline[0].at.QuadPart)/frequency.QuadPart);
        movie_timeline_done=1;
    }
}

static void dump_region(const char *path, uint32_t va, size_t bytes)
{
    const void *memory = (const void *)((uintptr_t)g_xbox_mem_offset + va);
    MEMORY_BASIC_INFORMATION info;
    if (!VirtualQuery(memory, &info, sizeof(info)) || info.State != MEM_COMMIT ||
        (info.Protect & (PAGE_GUARD | PAGE_NOACCESS)) ||
        (uintptr_t)memory + bytes > (uintptr_t)info.BaseAddress + info.RegionSize) {
        fprintf(stderr, "[D3D TRACE] region unavailable: %08X size=%zu\n", va, bytes);
        return;
    }
    FILE *out = fopen(path, "wb");
    if (!out) { fprintf(stderr, "[D3D TRACE] cannot write %s\n", path); _exit(4); }
    if (fwrite(memory, 1, bytes, out) != bytes) { fclose(out); _exit(4); }
    fclose(out);
}
void xml1_graphics_observe(uint32_t va)
{
    /* Read-only CRI audio diagnostics. Addresses come from error-string
       references and call targets in the supplied executable. */
    static int adx_trace=-1;
    if(adx_trace<0) adx_trace=getenv("XML1_TRACE_ADX")!=NULL;
    if(adx_trace && (va==0x305E20 || va==0x309F00 || va==0x306590 || va==0x30C9C0
                    || va==0x30B460 || va==0x30B990 || va==0x30B080 || va==0x30AC80)
       && g_esp<xbox_GetMappedSize()-20) {
        static unsigned reports;
        if(++reports<=160) {
            const uint32_t *stack=(const uint32_t *)((uintptr_t)g_xbox_mem_offset+g_esp);
            fprintf(stderr,"[ADX TRACE] va=%08X caller=%08X args=%08X/%08X/%08X/%08X\n",
                    va,stack[0],stack[1],stack[2],stack[3],stack[4]);
            if((va==0x30B460 || va==0x30B990 || va==0x30B080) && stack[1]
               && stack[1]<xbox_GetMappedSize()-0x58) {
                const uint32_t *object=(const uint32_t *)((uintptr_t)g_xbox_mem_offset+stack[1]);
                fprintf(stderr,"[ADX MIX STATE] object=%08X mode=%u output_channels=%u input_channels=%u pan=%d/%d flags=%08X\n",
                        stack[1],object[3],object[0x2C/4],object[0x30/4],
                        (int32_t)object[0x44/4],(int32_t)object[0x48/4],object[0x4C/4]);
            }
        }
    }
    /* Script bindings identified from the supplied XBE's function/name/type
       table. Observe the original calls; do not alter script or fade state. */
    static int script_trace=-1;
    if(script_trace<0) script_trace=getenv("XML1_TRACE_SUBWAY")!=NULL;
    if(script_trace && g_esp<xbox_GetMappedSize()-32) {
        const char *verb=NULL;
        switch(va) {
        case 0x98EC0: verb="screenFade"; break;
        case 0x9B8A0: verb="copyOriginAndAngles"; break;
        case 0x99FA0: verb="cameraToLocationAngles"; break;
        case 0x98EA0: verb="cameraResetOldSchool"; break;
        case 0x9A040: verb="setPartyLightColor"; break;
        case 0x99B00: verb="lockControls"; break;
        case 0xCC9F0: verb="waittimed"; break;
        case 0x993F0: verb="setallaiactive"; break;
        }
        const uint8_t *memory=(const uint8_t *)(uintptr_t)g_xbox_mem_offset;
        const uint32_t *stack=(const uint32_t *)(memory+g_esp);
        static RECOMP_TLS unsigned reset_count, reset_calls;
        static RECOMP_TLS int trace_reset;
        if(stack[0]==0x98EAF) {
            ++reset_count;
            trace_reset=reset_count==2;
            reset_calls=0;
        }
        if(stack[0]==0x98F09) trace_reset=0;
        if(trace_reset && ++reset_calls<=2000) {
            const float *camera=(const float *)(memory+0x48D128);
            fprintf(stderr,"[CAMERA RESET TRACE] n=%u va=%08X caller=%08X ecx=%08X args=%08X/%08X/%08X p=%.9g/%.9g/%.9g angle=%.9g/%.9g\n",
                reset_calls,va,stack[0],g_ecx,stack[1],stack[2],stack[3],
                camera[0xF8/4],camera[0xFC/4],camera[0x100/4],camera[0x74/4],camera[0x230/4]);
        }
        if(verb) fprintf(stderr,"[SUBWAY SCRIPT] tick=%llu verb=%s va=%08X caller=%08X context=%08X\n",
            GetTickCount64(),verb,va,stack[0],stack[1]);
        if(stack[0]==0x98F09 || stack[0]==0x9A037 || stack[0]==0x98EAF) {
            static unsigned camera_snapshot;
            char camera_path[160];
            snprintf(camera_path,sizeof(camera_path),"build/subway-camera-%llu-%u.bin",
                GetTickCount64(),++camera_snapshot);
            /* Original camera singleton; preserve raw fields without assuming
               that a requested position is the current rendered view. */
            dump_region(camera_path,0x48D128,0x420);
            fprintf(stderr,"[SUBWAY CALL] tick=%llu target=%08X caller=%08X this=%08X args=%08X/%08X/%08X\n",
                GetTickCount64(),va,stack[0],g_ecx,stack[1],stack[2],stack[3]);
            if(stack[0]==0x98F09) {
                float alpha,seconds; memcpy(&alpha,stack+1,4); memcpy(&seconds,stack+2,4);
                fprintf(stderr,"[SUBWAY FADE] alpha=%.9g seconds=%.9g\n",alpha,seconds);
            }
        }
    }
    trace_movie_timeline(va);
    if(va==0x32B8A0) movie_convert_start=GetTickCount64();
    if(va==0x35DDC0) {
        static unsigned reports;
        uint32_t *stack=(uint32_t *)((uintptr_t)g_xbox_mem_offset+g_esp);
        if(++reports<=40) fprintf(stderr,"[FADE FACTOR] caller=%08X value=%08X\n",stack[0],stack[1]);
    }
    if(va==0x374D3E && g_ecx<xbox_GetMappedSize()-0x74) {
        static LONG reports;
        if(InterlockedIncrement(&reports)<=100) {
            const uint8_t *memory=(const uint8_t *)(uintptr_t)g_xbox_mem_offset;
            uint32_t settings=*(const uint32_t *)(memory+g_ecx+0x70);
            if(settings && settings<xbox_GetMappedSize()-0xC0) {
                const uint32_t *s=(const uint32_t *)(memory+settings);
                fprintf(stderr,"[GAIN CALC] voice=%08X settings=%08X hwvoices=%u bins=%u master=%d spatial=%08X gains=%d/%d/%d/%d/%d/%d\n",g_ecx,settings,memory[g_ecx+0x64],s[0x24/4],(int32_t)s[0x1C/4],s[0xB8/4],(int32_t)s[0x30/4],(int32_t)s[0x34/4],(int32_t)s[0x38/4],(int32_t)s[0x3C/4],(int32_t)s[0x40/4],(int32_t)s[0x44/4]);
            }
        }
    }
    if(va==0x3706A9||va==0x370821||va==0x36F87B||va==0x36F782) {
        static LONG reports;
        if(g_esp<xbox_GetMappedSize()-16 && InterlockedIncrement(&reports)<=600) {
            const uint8_t *memory=(const uint8_t *)(uintptr_t)g_xbox_mem_offset;
            const uint32_t *a=(const uint32_t *)(memory+g_esp+4);
            fprintf(stderr,"[GUEST AUDIO GAIN] call=%08X ecx=%08X arg0=%08X arg1=%08X signed1=%d caller=%08X\n",va,g_ecx,a[0],a[1],(int32_t)a[1],*(const uint32_t *)(memory+g_esp));
            if(va==0x36F782 && a[0] && a[0]<xbox_GetMappedSize()-8) {
                const uint32_t *mix=(const uint32_t *)(memory+a[0]);
                if(mix[0]<=32 && mix[1] && (uint64_t)mix[1]+mix[0]*8<=xbox_GetMappedSize()) {
                    const uint32_t *pairs=(const uint32_t *)(memory+mix[1]);
                    for(unsigned i=0;i<mix[0];++i) fprintf(stderr,"  mixbin=%u volume=%d\n",pairs[i*2],(int32_t)pairs[i*2+1]);
                }
            }
        }
    }
    if(va==0x367AF0) xml1_movie_watch_report();
    if(va==0x39A7D1 && g_esp<xbox_GetMappedSize()-16) {
        static LONG reports;
        const uint8_t *memory=(const uint8_t *)(uintptr_t)g_xbox_mem_offset;
        const uint32_t *a=(const uint32_t *)(memory+g_esp+4);
        if(a[0]<xbox_GetMappedSize()-68 && *(const uint32_t *)(memory+a[0]+4)==6 && InterlockedIncrement(&reports)<=4) {
            if(a[1]<xbox_GetMappedSize()-68) movie_source_to_watch=*(const uint32_t *)(memory+a[1]);
            for(unsigned j=0;j<2;++j) if(a[j]<xbox_GetMappedSize()-68) {
                const uint32_t *s=(const uint32_t *)(memory+a[j]);
                fprintf(stderr,"[MOVIE BLIT] %s",j?"source":"destination");
                for(unsigned k=0;k<17;++k) fprintf(stderr," %08X",s[k]);
                fputc('\n',stderr);
            }
        }
    }
    if (va==0x3A6D39 && g_esp<xbox_GetMappedSize()-40) {
        if(movie_convert_start) {
            ULONGLONG elapsed=GetTickCount64()-movie_convert_start;
            if(elapsed>=30) fprintf(stderr,"[MOVIE CONVERT TO SWIZZLE] ms=%llu\n",elapsed);
            movie_convert_start=0;
        }
        if(getenv("XML1_CAPTURE_MOVIE_SOURCE")) {
            extern unsigned xml1_graphics_frame_number(void);
            const uint32_t *a=(const uint32_t *)((uintptr_t)g_xbox_mem_offset+g_esp+4);
            if(xml1_graphics_frame_number()==299 && a[7]==4 && a[1]==4096 && a[4]==1024 && a[5]==512)
                dump_region("build/movie-source-frame300.bgra",a[0],4096*480);
            static unsigned source_count;
            if(a[7]==4 && a[1]==4096 && a[4]==1024 && a[5]==512 && ++source_count%20==0) {
                char path[128]; snprintf(path,sizeof(path),"build/movie-source-%03u.bgra",source_count);
                dump_region(path,a[0],4096*480);
            }
        }
        if(movie_source_to_watch) { xml1_movie_watch_arm(movie_source_to_watch+4096); movie_source_to_watch=0; }
        static LONG reports;
        if (InterlockedIncrement(&reports)<=12) {
            const uint8_t *memory=(const uint8_t *)(uintptr_t)g_xbox_mem_offset;
            const uint32_t *a=(const uint32_t *)(memory+g_esp+4);
            fprintf(stderr,"[MOVIE SWIZZLE] source=%08X pitch=%u rect=%08X dest=%08X size=%ux%u point=%08X bpp=%u\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
            if (a[2] && a[2]<xbox_GetMappedSize()-16) {
                const uint32_t *r=(const uint32_t *)(memory+a[2]);
                fprintf(stderr,"  rect=%u,%u,%u,%u\n",r[0],r[1],r[2],r[3]);
            }
            if (a[6] && a[6]<xbox_GetMappedSize()-8) {
                const uint32_t *p=(const uint32_t *)(memory+a[6]);
                fprintf(stderr,"  point=%u,%u\n",p[0],p[1]);
            }
            if (a[7]==4 && a[0] && (uint64_t)a[0]+(uint64_t)a[1]*a[5]<xbox_GetMappedSize()) {
                unsigned rows=0;size_t alpha=0,rgb=0;
                for(unsigned y=0;y<a[5];++y) {
                    const uint32_t *row=(const uint32_t *)(memory+a[0]+y*a[1]);
                    unsigned active=0;
                    for(unsigned x=0;x<a[4];++x) {alpha+=(row[x]>>24)!=0;rgb+=(row[x]&0xFFFFFF)!=0;active|=row[x];}
                    rows+=active!=0;
                }
                fprintf(stderr,"  source rows=%u alpha=%zu rgb=%zu caller=%08X\n",rows,alpha,rgb,*(const uint32_t *)(memory+g_esp));
            }
        }
    }
    if ((va==0x30EF30||va==0x30EF60||va==0x30EF90) && g_esp<xbox_GetMappedSize()-64) {
        const uint8_t *memory=(const uint8_t *)(uintptr_t)g_xbox_mem_offset;
        const uint32_t *stack=(const uint32_t *)(memory+g_esp);
        if (va!=0x30EF90||stack[1]==0x5E9100) {
            fprintf(stderr,"[MOVIE LIFETIME] call=%08X thread=%lu caller=%08X object_arg=%08X refcount=%08X vtable=%08X\n",
                va,GetCurrentThreadId(),stack[0],stack[1],*(const uint32_t *)(memory+0x5BFA78),*(const uint32_t *)(memory+0x5E9100));
            for (unsigned i=0;i<12;++i) fprintf(stderr,"  lifetime_stack[%u]=%08X\n",i,stack[i]);
        }
    }
    xml1_graphics_live_observe(va);
    static int enabled = -1;
    static FILE *calls;
    static unsigned count;
    static uint32_t stream, stride, texture;
    if (enabled < 0) {
        const char *mode = getenv("XML1_TRACE_D3D");
        enabled = mode && strcmp(mode, "1") == 0;
    }
    if (!enabled || va < 0x0035ADA0 || va >= 0x0036F300) return;
    if (!calls) {
        calls = fopen("build/d3d-calls.csv", "wb");
        if (!calls) _exit(4);
        fputs("va,esp,eax,ecx,edx,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7", calls);
        for (unsigned i = 0; i < 16; ++i) fprintf(calls, ",payload%u", i);
        fputc('\n', calls);
    }
    if ((uint64_t)g_esp + 36 > xbox_GetMappedSize()) _exit(4);
    const uint32_t *args = (const uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp + 4);
    fprintf(calls, "%08X,%08X,%08X,%08X,%08X", va, g_esp, g_eax, g_ecx, g_edx);
    for (unsigned i = 0; i < 8; ++i) fprintf(calls, ",%08X", args[i]);
    /* Pointer arguments on the guest stack are transient: retain them at the
     * call, rather than reconstructing matrices from the end-of-frame dump. */
    unsigned words = va == 0x0035AE90 ? 16 : va == 0x0035BA10 ? 6 : 0;
    uint32_t pointer = va == 0x0035AE90 ? args[1] : args[0];
    if (words && (uint64_t)pointer + words * 4 > xbox_GetMappedSize()) _exit(4);
    for (unsigned i = 0; i < 16; ++i) {
        uint32_t value = 0;
        if (i < words) memcpy(&value, (const void *)((uintptr_t)g_xbox_mem_offset + pointer + i * 4), 4);
        fprintf(calls, ",%08X", value);
    }
    fputc('\n', calls);
    ++count;
    if (va == 0x0035D360 && args[0] == 0) { stream = args[1]; stride = args[2]; }
    if (va == 0x0035C060 && args[0] == 0) texture = args[1];
    if (va == 0x00367AF0) {
        char path[128];
        snprintf(path, sizeof(path), "build/d3d-draw-%04u-state.bin", count);
        dump_region(path, 0x0036C660, 0x4A0);
        if (!stream || !texture || (uint64_t)stream + 12 > xbox_GetMappedSize() ||
            (uint64_t)texture + 20 > xbox_GetMappedSize()) _exit(4);
        const uint32_t *vb = (const uint32_t *)((uintptr_t)g_xbox_mem_offset + stream);
        const uint32_t *tex = (const uint32_t *)((uintptr_t)g_xbox_mem_offset + texture);
        uint64_t offset = (uint64_t)vb[1] + (uint64_t)args[1] * stride;
        uint64_t bytes = (uint64_t)args[2] * stride;
        if (offset + bytes > (64u << 20) || ((tex[3] >> 8) & 255) != 14 || tex[4]) _exit(4);
        snprintf(path, sizeof(path), "build/d3d-draw-%04u-vertices.bin", count);
        dump_region(path, 0x80000000u + (uint32_t)offset, (size_t)bytes);
        unsigned width = 1u << ((tex[3] >> 20) & 15), height = 1u << ((tex[3] >> 24) & 15);
        bytes = (uint64_t)((width + 3) / 4) * ((height + 3) / 4) * 16;
        if ((uint64_t)tex[1] + bytes > (64u << 20)) _exit(4);
        snprintf(path, sizeof(path), "build/d3d-draw-%04u-texture.bin", count);
        dump_region(path, 0x80000000u + tex[1], (size_t)bytes);
    }
    /* Capture actual game submissions before the first Xbox hardware swap wait.
     * This is source data for the native DX8 implementation, not a screenshot. */
    if (va == 0x00368BE0 || count == 20000) {
        fflush(calls); fclose(calls);
        dump_region("build/d3d-frame-ram.bin", 0, xbox_GetMappedSize());
        dump_region("build/d3d-frame-contiguous.bin", 0x80000000, 64u << 20);
        dump_region("build/d3d-frame-nv2a.bin", 0xFD000000, 16u << 20);
        fprintf(stderr, "[D3D TRACE] captured %u calls at %08X; no render milestone claimed\n", count, va);
        _exit(4);
    }
}

static RECOMP_TLS LARGE_INTEGER convert_wall_start;
static RECOMP_TLS uint64_t convert_cpu_start;
static uint64_t thread_cpu_ticks(void) {
    FILETIME create, exit, kernel, user;
    if (!GetThreadTimes(GetCurrentThread(), &create, &exit, &kernel, &user)) return 0;
    return (((uint64_t)kernel.dwHighDateTime<<32)|kernel.dwLowDateTime)
         + (((uint64_t)user.dwHighDateTime<<32)|user.dwLowDateTime);
}
void xml1_movie_convert_begin(void) {
    QueryPerformanceCounter(&convert_wall_start);
    convert_cpu_start=thread_cpu_ticks();
}
void xml1_movie_convert_end(void) {
    static LONG reports;
    LARGE_INTEGER end, frequency;
    QueryPerformanceCounter(&end); QueryPerformanceFrequency(&frequency);
    uint64_t cpu=thread_cpu_ticks()-convert_cpu_start;
    LONG count=InterlockedIncrement(&reports);
    if(count<=8 || count%60==0)
        fprintf(stderr,"[MOVIE CONVERTER] count=%ld wall_ms=%.3f cpu_ms=%.3f\n",count,
            1000.0*(end.QuadPart-convert_wall_start.QuadPart)/frequency.QuadPart,cpu/10000.0);
}
