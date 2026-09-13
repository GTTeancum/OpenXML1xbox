#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
void xml1_graphics_live_observe(uint32_t va);

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
