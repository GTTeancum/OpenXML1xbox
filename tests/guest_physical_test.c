#include "xbox_memory_layout.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
ptrdiff_t g_xbox_mem_offset;
static unsigned char guest[65536],ram[65536];
static uint32_t next;
size_t xbox_GetMappedSize(void) { return sizeof(guest); }
uint32_t xbox_ContiguousAlloc(uint32_t size,uint32_t alignment) {
    uint32_t p=(next+alignment-1)&~(alignment-1); next=p+size;
    if(next>sizeof(ram)) abort();
    return 0x80000000u+p;
}
uint32_t xml1_guest_physical_address(uint32_t);
void xml1_physical_read(void *,uint32_t,void *,size_t);
void xml1_physical_write(void *,uint32_t,const void *,size_t);
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"FAIL line %d\n",__LINE__); return 1; } } while(0)
int main(void) {
    g_xbox_mem_offset=(ptrdiff_t)guest;
    /* Both page zero identities must be representable; NULL stays NULL. */
    CHECK(xml1_guest_physical_address(0)==0);
    CHECK(xml1_guest_physical_address(7)==7);
    CHECK(xml1_guest_physical_address(19)==19 && next==4096);
    guest[7]=123; unsigned char b=0;
    xml1_physical_read(ram,7,&b,1); CHECK(b==123);
    uint32_t contiguous=xbox_ContiguousAlloc(4096,4096)-0x80000000u;
    CHECK(xml1_guest_physical_address(0x80000000u+contiguous+9)==contiguous+9);
    uint32_t mapped=xml1_guest_physical_address(contiguous);
    CHECK(mapped!=contiguous && mapped==8192);
    guest[contiguous]=71; ram[contiguous]=82;
    xml1_physical_read(ram,mapped,&b,1); CHECK(b==71);
    xml1_physical_read(ram,contiguous,&b,1); CHECK(b==82);
    b=93; xml1_physical_write(ram,mapped,&b,1); CHECK(guest[contiguous]==93 && ram[contiguous]==82);
    /* Adjacent physical pages may represent distant virtual pages. */
    uint32_t other=xml1_guest_physical_address(0x7000); CHECK(other==mapped+4096);
    guest[0x1ffe]=1; guest[0x1fff]=2; guest[0x7000]=3; guest[0x7001]=4;
    unsigned char block[4],expected[4]={1,2,3,4};
    xml1_physical_read(ram,mapped+4094,block,4); CHECK(!memcmp(block,expected,4));
    memset(block,55,4); xml1_physical_write(ram,mapped+4094,block,4);
    CHECK(guest[0x1ffe]==55 && guest[0x1fff]==55 && guest[0x7000]==55 && guest[0x7001]==55);
    puts("PASS: physical zero, stable identity, collision avoidance, live CPU/DMA aliases and cross-page transfers");
    return 0;
}
