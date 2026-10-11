/* Actual generated pool methods: exercise the formerly out-of-bounds slots,
 * free/reuse generations, bitmaps beyond word five, and the retail branch.
 * The trivial record destructor is substituted; package/UI lifetime is not. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "engine/progression/talent_registry_layout.h"
static uint32_t memory[0x800000/4];
static uint32_t eax,ebx,ecx,edx,esi,edi,esp;
#define g_ecx ecx
#define g_esp esp
#define MEM8(a) (((uint8_t*)memory)[(uint32_t)(a)])
#define MEM16(a) (*(uint16_t*)((uint8_t*)memory+(uint32_t)(a)))
#define MEM32(a) (*(uint32_t*)((uint8_t*)memory+(uint32_t)(a)))
#define XBOX_PTR(a) ((uint8_t*)memory+(uint32_t)(a))
#define PUSH32(s,v) do {uint32_t temp_=(v);(s)-=4;MEM32(s)=temp_;} while(0)
#define POP32(s,r) do {(r)=MEM32(s);(s)+=4;} while(0)
#define LO8(r) ((r)&255u)
#define LO16(r) ((r)&65535u)
#define SET_LO8(r,v) ((r)=((r)&0xffffff00u)|((v)&255u))
#define TEST_Z(a,b) (((a)&(b))==0)
#define TEST_NZ(a,b) (((a)&(b))!=0)
#define CMP_L(a,b) ((a)<(b))
#define CMP_EQ(a,b) ((a)==(b))
#define CMP_NE(a,b) ((a)!=(b))
#define RECOMP_ABI_CALL(a,f) f()
#define RECOMP_ICALL_SAFE(a,s) do {(void)(a);(void)(s);esp+=8;} while(0)
#define CHECK(x) do{if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
#include "engine/progression/talent_registry_ids.h"
#define POOL 0x600000u
#define STOCK 0x640000u
#define STACK 0x700000u
int xml1_talent_registry_contains(uint32_t p){return p>=POOL&&p<POOL+XML1_TALENT_REGISTRY_SIZE;}
void xml1_talent_registry_clear_bits(uint32_t p,unsigned kind) {
    unsigned bitmap=kind==1?XML1_TALENT_NAME_BITMAP:
        kind==2?XML1_TALENT_META_BITMAP:XML1_TALENT_ID_BITMAP;
    if(kind==2)memset(XBOX_PTR(p+XML1_TALENT_META_CONSTRUCTED),0,32);
    memset(XBOX_PTR(p+bitmap),0,32);
}
#include "native-registry-methods.inc"
static uint32_t call0(void(*fn)(void),uint32_t self) {
    ecx=self;esp=STACK;PUSH32(esp,0);fn();CHECK(esp==STACK);return eax;
}
static uint32_t call1(void(*fn)(void),uint32_t self,uint32_t arg) {
    ecx=self;esp=STACK;PUSH32(esp,arg);PUSH32(esp,0);fn();CHECK(esp==STACK);return eax;
}
static void exercise(uint32_t pool,unsigned n,unsigned size,unsigned used) {
    uint32_t handles[254];
    memset(XBOX_PTR(pool-32),0x5a,size+64);
    call0(sub_000B4770,pool);
    for(unsigned i=0;i<n;++i) {
        handles[i]=call0(sub_000B55D0,pool);
        CHECK((handles[i]&255)==i);
        CHECK(call1(sub_000B39E0,pool,handles[i])==1);
    }
    CHECK(MEM32(pool+used)==n);
    for(unsigned i=0;i<n;i+=2) {
        call1(sub_000B4F60,pool,handles[i]);
        CHECK(!(call1(sub_000B39E0,pool,handles[i])&255));
    }
    for(unsigned i=0;i<n;i+=2) {
        uint32_t h=call0(sub_000B55D0,pool);
        CHECK((h&255)==i&&h!=handles[i]);
        CHECK(call1(sub_000B39E0,pool,h)==1);
        CHECK(!(call1(sub_000B39E0,pool,handles[i])&255));
    }
    CHECK(MEM32(pool+used)==n);
    for(unsigned i=0;i<32;++i) {
        CHECK(MEM8(pool-32+i)==0x5a);CHECK(MEM8(pool+size+i)==0x5a);
    }
}
static void tree(uint32_t pool,unsigned n,unsigned size,unsigned used,unsigned bitmap,
    void(*init)(void),void(*allocate)(void),void(*release)(void)) {
    memset(XBOX_PTR(pool-32),0x5a,size+64);memset(XBOX_PTR(pool),0,size);
    call0(init,pool);
    for(unsigned i=0;i<n;++i) {
        CHECK(call0(allocate,pool)==i);
        CHECK(MEM32(pool+bitmap+(i/32)*4)&(1u<<(i%32)));
    }
    CHECK(MEM32(pool+used)==n);
    for(unsigned i=0;i<n;i+=2)call1(release,pool,i);
    for(unsigned i=0;i<n;i+=2)CHECK(call0(allocate,pool)==i);
    CHECK(MEM32(pool+used)==n);
    for(unsigned i=0;i<32;++i) {
        CHECK(MEM8(pool-32+i)==0x5a);CHECK(MEM8(pool+size+i)==0x5a);
    }
}
static void manager_lookup(uint32_t manager,unsigned pool_offset,unsigned n) {
    const uint32_t pool=manager+pool_offset;
    memset(XBOX_PTR(manager),0xa5,XML1_TALENT_REGISTRY_SIZE);
    call0(sub_000B4770,pool);
    for(unsigned i=0;i<n;++i){
        uint32_t handle=call0(sub_000B55D0,pool);
        CHECK(call1(sub_000B3E90,manager,handle)==pool+i*84);
        call1(sub_000B4F60,pool,handle);
        CHECK(call1(sub_000B3E90,manager,handle)==0);
    }
}
static void id_reuse(void) {
    const unsigned pool=POOL+XML1_TALENT_ID_MAP+12;
    memset(XBOX_PTR(POOL),0,XML1_TALENT_REGISTRY_SIZE);
    call0(sub_000EA9E0,pool);
    CHECK(xml1_talent_id_predecessor(POOL)==0);
    for(unsigned i=0;i<254;++i) {
        unsigned slot=call0(sub_000B36B0,pool);
        MEM8(pool+slot*16+12)=(uint8_t)(i+1);
        CHECK(xml1_talent_id_predecessor(POOL)==(i==253?255:i+1));
    }
    /* Keep ID254 alive while every other ID is released/reused. The native
     * free method deliberately leaves stale keys in unoccupied nodes. */
    for(unsigned i=0;i<253;++i) {
        call1(sub_000B5040,pool,i);
        CHECK(xml1_talent_id_predecessor(POOL)==i);
        unsigned slot=call0(sub_000B36B0,pool);
        MEM8(pool+slot*16+12)=(uint8_t)(i+1);
        CHECK(xml1_talent_id_predecessor(POOL)==255);
    }
}
int main(void) {
    id_reuse();
    manager_lookup(POOL,XML1_TALENT_META_POOL,254);
    manager_lookup(STOCK,0x1cf4,150);
    exercise(POOL,254,0x5ba4,XML1_TALENT_META_USED);
    exercise(STOCK,150,0x362c,0x33c8);
    tree(POOL,254,0x2fd8,XML1_TALENT_NAME_USED,XML1_TALENT_NAME_BITMAP,
        sub_000B4090,sub_000B3640,sub_000B4FF0);
    tree(STOCK,150,0x1c4c,0x1c48,0x1c34,sub_000B4090,sub_000B3640,sub_000B4FF0);
    tree(POOL,254,0x1410,XML1_TALENT_ID_USED,XML1_TALENT_ID_BITMAP,
        sub_000EA9E0,sub_000B36B0,sub_000B5040);
    tree(STOCK,150,0xbe4,0xbe0,0xbcc,sub_000EA9E0,sub_000B36B0,sub_000B5040);
    puts("PASS all three native pools: 254 expanded / 150 retail, occupancy, generations, reuse, ABI and bounds");
    return 0;
}
