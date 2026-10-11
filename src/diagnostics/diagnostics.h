#pragma once
void xml1_guest_memmove(void);
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static uint32_t xml1_missing_operation(const char *kind, const char *file, int line)
{
    fprintf(stderr, "[UNIMPLEMENTED] %s at %s:%d\n", kind, file, line);
    fflush(stderr);
    _exit(4);
    return 0;
}

// The current disassembler detects a debug-register read amid apparent data.
// Retain a fail-fast diagnostic if reached, never invent a register value.
#define dr2 xml1_missing_operation("debug register dr2", __FILE__, __LINE__)

#define XML1_CHECK_CDECL0(va, fn) do { \
    uint32_t sp0=g_esp, si0=g_esi, di0=g_edi, bx0=g_ebx; \
    RECOMP_ABI_CALL(va, fn); \
    if (g_esp!=sp0+4 || g_esi!=si0 || g_edi!=di0 || g_ebx!=bx0) { \
        fprintf(stderr,"[FATAL NESTED ABI] target=%08X esp=%08X/%08X esi=%08X/%08X edi=%08X/%08X ebx=%08X/%08X at %s:%d\n", \
            (unsigned)(va),g_esp,sp0+4,g_esi,si0,g_edi,di0,g_ebx,bx0,__FILE__,__LINE__); \
        fprintf(stderr,"[ABI LOCK] callback=%08X context=%08X\n",MEM32(0x5BF82C),MEM32(0x5BF830)); \
        _exit(4); \
    } \
} while (0)
