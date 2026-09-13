#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "xbox_memory_layout.h"
#include "guest_input.h"
extern volatile uint32_t g_icall_trace[16], g_icall_trace_idx;
extern volatile uint64_t g_icall_count;
extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_ebx, g_esi, g_edi, g_ebp, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
typedef void (*recomp_func_t)(void);
void xml1_guest_memmove(void);
void xml1_graphics_swap(void);
recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    if (xbox_va == 0x00342AA0) return xml1_guest_memmove;
    if (xbox_va == 0x00368BE0) return xml1_graphics_swap;
    return xml1_input_lookup(xbox_va);
}

/* Stop at the first unresolved call; skipped initialization is not success. */
static void stop_at_call(uint32_t va)
{
    if (va < xbox_GetMappedSize()-4096) {
        FILE *code=fopen("build/unresolved-target.bin","wb");
        if (code) {
            fwrite((const void *)((uintptr_t)g_xbox_mem_offset+va),1,4096,code);
            fclose(code);
        }
    }
    fprintf(stderr, "[FATAL ICALL] target=%08X call=%llu eax=%08X ecx=%08X edx=%08X ebx=%08X esi=%08X edi=%08X ebp=%08X esp=%08X\n",
        va, (unsigned long long)g_icall_count, g_eax, g_ecx, g_edx,
        g_ebx, g_esi, g_edi, g_ebp, g_esp);
    if (g_esp < xbox_GetMappedSize() - 256) {
        const uint32_t *stack = (const uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp);
        for (unsigned j = 0; j < 64; ++j)
            fprintf(stderr, "  [%08X] %08X\n", g_esp + j * 4, stack[j]);
    }
    for (unsigned i = 0; i < 16; ++i)
        fprintf(stderr, "  recent[%u]=%08X\n", i, g_icall_trace[(g_icall_trace_idx - 16 + i) & 15]);
    FILE *dump = fopen("build/guest-failure.bin", "wb");
    if (dump) {
        fwrite((const void *)(uintptr_t)g_xbox_mem_offset, 1, xbox_GetMappedSize(), dump);
        fclose(dump);
    }
    fflush(stderr);
    _exit(4);
}
void recomp_icall_fail_log(uint32_t va) { stop_at_call(va); }
void recomp_icall_not_code_log(uint32_t va) { stop_at_call(va); }
