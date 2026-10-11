#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern RECOMP_TLS uint32_t g_eax, g_esp;
extern ptrdiff_t g_xbox_mem_offset;

/* Retail XBE 0x00342AA0: cdecl void *memmove(dst, src, count).
 * Verified entry arguments, overlap-direction test, and destination return.
 * EBP/EBX/ESI/EDI and the caller-owned arguments remain intact. */
void xml1_guest_memmove(void)
{
    uint8_t *memory = (uint8_t *)(uintptr_t)g_xbox_mem_offset;
    uint32_t *args = (uint32_t *)(memory + g_esp + 4);
    uint32_t dest = args[0], source = args[1], count = args[2];
    size_t limit = xbox_GetMappedSize();
    if (count && ((uint64_t)dest + count > limit || (uint64_t)source + count > limit)) {
        fprintf(stderr, "[FATAL] memmove outside guest mapping: dst=%08X src=%08X count=%u\n", dest, source, count);
        _exit(4);
    }
    if (count) memmove(memory + dest, memory + source, count);
    g_eax = dest;
    g_esp += 4;
}
