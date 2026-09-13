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
