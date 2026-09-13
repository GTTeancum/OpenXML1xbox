#include "guest_vmem.h"
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
size_t g_xbox_total_ram = 64u << 20;
size_t g_xbox_map_size = 256u << 20;
ptrdiff_t g_xbox_mem_offset;
#define REQUIRE(c) do { if (!(c)) { fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #c); return 1; } } while (0)
int main(void) {
    uint8_t *memory = calloc(1, g_xbox_map_size);
    REQUIRE(memory);
    g_xbox_mem_offset = (ptrdiff_t)memory;
    uint32_t base = 0x04000000, size = 0x140000, status, info[7];
    REQUIRE(guest_vmem_query(base, info) && info[4] == 0x10000 && info[3] == 0x7BFE0000);
    REQUIRE(guest_vmem_allocate(&base, &size, 0x2000, 1, &status) && !status);
    REQUIRE(base == 0x04000000 && size == 0x140000);
    REQUIRE(guest_vmem_query(base, info) && info[4] == 0x2000 && info[3] == size && info[1] == base);
    REQUIRE(guest_vmem_allocate(&base, &size, 0x2000, 1, &status) && status == 0xC0000018);
    base += 0x1234; size = 0x2010;
    REQUIRE(guest_vmem_allocate(&base, &size, 0x1000, 4, &status) && !status);
    REQUIRE(base == 0x04001000 && size == 0x3000);
    REQUIRE(guest_vmem_query(base, info) && info[4] == 0x1000 && info[3] == size && info[1] == 0x04000000);
    memory[base] = 0xA5; memory[0x1000] = 0x5A;
    REQUIRE(guest_vmem_allocate(&base, &size, 0x1000, 4, &status) && !status && memory[base] == 0xA5);
    REQUIRE(guest_vmem_free(&base, &size, 0x4000, &status) && !status);
    REQUIRE(guest_vmem_allocate(&base, &size, 0x1000, 4, &status) && !status);
    REQUIRE(!memory[base] && memory[0x1000] == 0x5A);
    size = 0;
    REQUIRE(guest_vmem_free(&base, &size, 0x8000, &status) && status);
    base = 0x04000000;
    REQUIRE(guest_vmem_free(&base, &size, 0x8000, &status) && !status && size == 0x140000);
    REQUIRE(guest_vmem_query(base, info) && info[4] == 0x10000 && info[3] == 0x7BFE0000);
    size = 0x140000;
    REQUIRE(guest_vmem_allocate(&base, &size, 0x3000, 4, &status) && !status);
    base = 0x0FFFF000; size = 0x2000;
    REQUIRE(guest_vmem_allocate(&base, &size, 0x2000, 4, &status) && status);
    base = 0xFFFFF000; size = 0x2000;
    REQUIRE(guest_vmem_allocate(&base, &size, 0x3000, 4, &status) && status);
    free(memory);
    puts("PASS: exact reserve, conflict, commit rounding, query boundaries, independent backing, recommit, decommit, release/reuse and overflow.");
    return 0;
}
