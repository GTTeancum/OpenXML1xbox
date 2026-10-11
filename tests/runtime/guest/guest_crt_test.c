#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
RECOMP_TLS uint32_t g_eax, g_esp;
ptrdiff_t g_xbox_mem_offset;
static uint8_t memory[8192], expected[8192], snapshot[8192];
size_t xbox_GetMappedSize(void) { return sizeof(memory); }
void xml1_guest_memmove(void);
int main(void) {
    unsigned cases = 0;
    g_xbox_mem_offset = (ptrdiff_t)memory;
    for (unsigned source = 128; source < 145; ++source)
    for (unsigned dest = 112; dest < 161; ++dest)
    for (unsigned count = 0; count < 130; ++count) {
        for (unsigned i = 0; i < sizeof(memory); ++i) memory[i] = (uint8_t)(i * 37 + 11);
        g_esp = 4096;
        uint32_t *args = (uint32_t *)(memory + g_esp);
        args[0] = 0x12345678; args[1] = dest; args[2] = source; args[3] = count;
        memcpy(snapshot, memory, sizeof(memory));
        memcpy(expected, memory, sizeof(memory));
        for (unsigned i = 0; i < count; ++i) expected[dest + i] = snapshot[source + i];
        xml1_guest_memmove();
        if (g_eax != dest || g_esp != 4100 || memcmp(memory, expected, sizeof(memory))) {
            fprintf(stderr, "FAIL dst=%u src=%u count=%u\n", dest, source, count); return 1;
        }
        ++cases;
    }
    printf("PASS: %u guest memmove overlap/alignment/zero-size cases, destination return and cdecl stack cleanup.\n", cases);
    return 0;
}
