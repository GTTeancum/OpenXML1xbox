/* Execute the generated parser literal writer and its actual reset/destructor.
 * Only native allocation, atexit and the unrelated symbol branch are stubs. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static uint32_t memory[0x1000000/4];
static uint32_t eax,ebx,ecx,edx,esi,edi,esp,g_ebp,g_seh_ebp;
#define MEM8(a) (((uint8_t*)memory)[(uint32_t)(a)])
#define MEM32(a) (*(uint32_t*)((uint8_t*)memory+(uint32_t)(a)))
#define XBOX_PTR(a) ((uint8_t*)memory+(uint32_t)(a))
#define PUSH32(s,v) do {uint32_t temp_=(v);(s)-=4;MEM32(s)=temp_;} while(0)
#define POP32(s,r) do {(r)=MEM32(s);(s)+=4;} while(0)
#define LO8(r) ((r)&255u)
#define SET_LO8(r,v) ((r)=((r)&0xffffff00u)|((v)&255u))
#define CMP_NE(a,b) ((a)!=(b))
#define TEST_Z(a,b) (((a)&(b))==0)
#define TEST_NZ(a,b) (((a)&(b))!=0)
#define RECOMP_DF_STEP(n) (n)
#define RECOMP_ABI_CALL(a,f) f()
#define CHECK(x) do{if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
#define STACK 0x700000u
#define INPUT 0x710000u
#define OBJECT 0x780000u
static uint32_t heap=0x800000u,live,allocations;
static struct {uint32_t at,size;int freed;} blocks[64];
static void check_canaries(void) {
    for(unsigned i=0;i<allocations;++i)
        for(unsigned j=0;j<32;++j)CHECK(MEM8(blocks[i].at+blocks[i].size+j)==0xA5);
}
static void sub_00123490(void) {
    uint32_t size=MEM32(esp+4);CHECK(MEM32(esp+8)==0xE);CHECK(allocations<64);
    heap=(heap+15u)&~15u;CHECK(heap+size+32<sizeof(memory));
    /* Place the base above overflow chunks: native heaps need not be monotonic. */
    uint32_t at=allocations?heap:0xE00000u;
    blocks[allocations].at=at;blocks[allocations].size=size;++allocations;++live;
    memset(XBOX_PTR(at),0,size);memset(XBOX_PTR(at+size),0xA5,32);
    eax=at;if(allocations>1)heap+=size+32;ecx=0xBAD;edx=0xBAD;esp+=4;
}
static void sub_001234F0(void) {
    check_canaries();uint32_t at=MEM32(esp+4);CHECK(MEM32(esp+8)==0xE);
    unsigned i;for(i=0;i<allocations;++i)if(blocks[i].at==at)break;
    CHECK(i<allocations&&!blocks[i].freed);blocks[i].freed=1;--live;
    memset(XBOX_PTR(at),0xDD,blocks[i].size);eax=ecx=edx=0xBAD;esp+=4;
}
static void sub_000119F0(void){esp+=4;}
static void sub_00199FD0(void){CHECK(0);}
#include "engine/resources/parser_text_arena_guest.h"
#include "native-parser-text-methods.inc"
static uint32_t insert(unsigned length,char value) {
    memset(XBOX_PTR(INPUT),value,length);MEM8(INPUT+length)=0;
    esp=STACK;ecx=OBJECT;ebx=0x1234;esi=0x5678;edi=0x9ABC;
    PUSH32(esp,1);PUSH32(esp,INPUT);PUSH32(esp,0);
    sub_0019A060();
    CHECK(esp==STACK&&ebx==0x1234&&esi==0x5678&&edi==0x9ABC);
    uint32_t result=MEM32(OBJECT);CHECK(strlen((char*)XBOX_PTR(result))==length);
    CHECK(!memcmp(XBOX_PTR(result),XBOX_PTR(INPUT),length+1));check_canaries();return result;
}
static void reset(void){esp=STACK;PUSH32(esp,0);sub_00199E40();CHECK(esp==STACK&&live==1&&!xml1_parser_text_live_chunks);}
int main(void) {
    for(unsigned generation=0;generation<3;++generation) {
        reset();uint32_t base=MEM32(0x5B76BC);
        CHECK(insert(0,'a')==0x5B76B8);
        uint32_t first=insert(0x1E000-1,'a');CHECK(first==base&&live==1);
        CHECK(insert(0x1E000-1,'a')==first&&live==1); /* cached duplicate at full boundary */
        uint32_t second=insert(256,'b');CHECK(second!=first&&live==2);
        uint32_t large=insert(0x1E000+64,'c');CHECK(live==3);
        CHECK(strlen((char*)XBOX_PTR(first))==0x1E000-1&&MEM8(first)=='a');
        CHECK(strlen((char*)XBOX_PTR(second))==256&&MEM8(second)=='b');
        CHECK(MEM8(large)=='c');
        for(unsigned i=0;i<100;++i)insert(4096+i,(char)('d'+i%10));
        unsigned stable_allocations=allocations;
        uint32_t stable_cursor=MEM32(0x5B76B0);
        /* Reopening/querying the same document with other documents resident
         * must not append another copy of every string each time. */
        for(unsigned pass=0;pass<100;++pass)
            for(unsigned i=0;i<100;++i)insert(4096+i,(char)('d'+i%10));
        CHECK(allocations==stable_allocations&&MEM32(0x5B76B0)==stable_cursor);
        CHECK(insert(256,'b')==second);
        CHECK(insert(256,'B')!=second); /* literal values remain case-sensitive */
        CHECK(live>3);check_canaries();
    }
    esp=STACK;PUSH32(esp,0);sub_00199DB0();
    CHECK(esp==STACK&&live==0&&MEM32(0x5B76BC)==0&&!xml1_parser_text_chunks&&!xml1_parser_text_live_chunks);
    puts("PASS native parser: exact boundary, duplicate reuse, oversized strings, stable pointers, three resets, destruction, canaries and ABI");
    return 0;
}
