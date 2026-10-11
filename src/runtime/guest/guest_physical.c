/* Give pageable guest buffers stable, non-overlapping physical page identities.
 * Contiguous allocations already own identities in this same physical arena. */
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern ptrdiff_t g_xbox_mem_offset;
extern RECOMP_TLS uint32_t g_xbox_kernel_caller;
/* Existing arena bounds are private constants in xbox_memory_layout.c. */
#define XBOX_CONTIG_BASE 0x80000000u
#define XBOX_CONTIG_SIZE (64u*1024*1024)
extern uint32_t xbox_ContiguousAlloc(uint32_t size,uint32_t alignment);
static volatile LONG map_lock;
static uint32_t guest_to_physical[65536];
static volatile LONG physical_to_guest[16384];
uint32_t xml1_guest_physical_address(uint32_t address) {
    if(!address || address==XBOX_CONTIG_BASE) {
        static LONG reports;
        if(InterlockedIncrement(&reports)<=32)
            fprintf(stderr,"[PHYSICAL ZERO] guest=%08X kernel_caller=%08X\n",address,g_xbox_kernel_caller);
    }
    if(address>=XBOX_CONTIG_BASE && (uint64_t)address<XBOX_CONTIG_BASE+ (uint64_t)XBOX_CONTIG_SIZE)
        return address-XBOX_CONTIG_BASE;
    if(!address) return 0;
    unsigned page=address>>12;
    if(address>=xbox_GetMappedSize()||page>=65536) { fprintf(stderr,"[FATAL PHYSICAL] unsupported guest VA %08X\n",address); _exit(4); }
    while(InterlockedCompareExchange(&map_lock,1,0)) Sleep(0);
    uint32_t identity=guest_to_physical[page];
    if(!identity) {
        uint32_t allocation=xbox_ContiguousAlloc(4096,4096);
        if(!allocation) { fprintf(stderr,"[FATAL PHYSICAL] page allocation failed\n"); _exit(4); }
        uint32_t physical=allocation-XBOX_CONTIG_BASE;
        InterlockedExchange(&physical_to_guest[physical>>12],(LONG)((page<<12)+1));
        identity=physical+1;
        guest_to_physical[page]=identity;
    }
    InterlockedExchange(&map_lock,0);
    return identity-1+(address&4095);
}
static void transfer(void *ram,uint32_t physical,void *data,size_t bytes,int write) {
    if((uint64_t)physical+bytes>64u*1024*1024) { fprintf(stderr,"[FATAL PHYSICAL] DMA bounds %08X/%zu\n",physical,bytes); _exit(4); }
    while(bytes) {
        size_t part=4096-(physical&4095); if(part>bytes) part=bytes;
        uint32_t guest=(uint32_t)InterlockedCompareExchange(&physical_to_guest[physical>>12],0,0);
        void *source=guest?(void *)((uintptr_t)g_xbox_mem_offset+guest-1+(physical&4095)):(uint8_t *)ram+physical;
        if(write) memcpy(source,data,part); else memcpy(data,source,part);
        data=(uint8_t *)data+part; physical+=(uint32_t)part;bytes-=part;
    }
}
void xml1_physical_read(void *ram,uint32_t physical,void *data,size_t bytes) { transfer(ram,physical,data,bytes,0); }
void xml1_physical_write(void *ram,uint32_t physical,const void *data,size_t bytes) { transfer(ram,physical,(void *)data,bytes,1); }
