#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include <stdio.h>
RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_ebx, g_esi, g_edi, g_esp;
#include "flags-fixture.inc"
int main(void)
{
    const uint32_t values[] = {0, 1, 255, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF, 0x12345678};
    unsigned count = 0;
    for (unsigned kind = 0; kind < 2; ++kind)
    for (unsigned path = 0; path < 2; ++path)
    for (unsigned i = 0; i < 7; ++i)
    for (unsigned j = 0; j < 7; ++j) {
        g_eax = values[i]; g_edx = values[j]; g_ebx = ~values[i];
        g_esi = values[j]; g_ecx = path; g_edi = 0xCAFEBABE; g_esp = 1024;
        uint32_t condition = path ? g_eax != g_edx : g_ebx != g_esi;
        uint32_t expected = kind ? (condition ? g_edi : g_eax) : ((g_eax & 0xFFFFFF00u) | condition);
        if (kind) fixture_cmovne(); else fixture_setne();
        if (g_eax != expected || g_esp != 1028) {
            fprintf(stderr, "FAIL kind=%u path=%u i=%u j=%u result=%08X expected=%08X\n",
                    kind, path, i, j, g_eax, expected);
            return 1;
        }
        ++count;
    }
    printf("PASS: %u executed translated CMP-join SETNE/CMOVNE cases, both paths and cdecl return.\n", count);
    return 0;
}
