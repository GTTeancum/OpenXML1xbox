#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
extern int xbox_ContiguousFree(uint32_t);

int xml1_contiguous_reuse_test(void)
{
    /* Resource-sized lifetimes: hold one allocation, free adjacent resources
     * out of order, reuse their merged hole, then unload the entire group. */
    uint32_t first=0;
    for(unsigned pass=0;pass<100;++pass) {
        uint32_t a=xbox_ContiguousAlloc(4u<<20,4096);
        uint32_t b=xbox_ContiguousAlloc(4u<<20,4096);
        uint32_t c=xbox_ContiguousAlloc(4u<<20,4096);
        uint32_t d=xbox_ContiguousAlloc(4u<<20,4096);
        if(!a||!b||!c||!d||(pass&&a!=first))return 30;
        first=a;
        if(!xbox_ContiguousFree(c)||!xbox_ContiguousFree(b))return 31;
        uint32_t merged=xbox_ContiguousAlloc(8u<<20,4096);
        if(merged!=b||merged+(8u<<20)>d)return 32;
        if(!xbox_ContiguousFree(a)||!xbox_ContiguousFree(d)||!xbox_ContiguousFree(merged))return 33;
        if(xbox_ContiguousFree(merged))return 34;
    }
    uint32_t a=xbox_ContiguousAlloc(4096,4096);
    uint32_t b=xbox_ContiguousAlloc(4096,1u<<20);
    if(!a||!b||(b&((1u<<20)-1)))return 35;
    if(!xbox_ContiguousFree(a)||!xbox_ContiguousFree(b))return 36;
    puts("[CONTIGUOUS TEST] 100 unload/reload cycles, merged-hole reuse, alignment and double-free rejection passed");
    return 0;
}
