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
#include "native-source-cache-methods.inc"
static uint32_t call0(void(*fn)(void),uint32_t self) {
 ecx=self;esp=STACK;PUSH32(esp,0);fn();CHECK(esp==STACK);return eax;
}
static void call1(void(*fn)(void),uint32_t self,uint32_t arg) {
 ecx=self;esp=STACK;PUSH32(esp,arg);PUSH32(esp,0);fn();CHECK(esp==STACK);
}
static void exercise(uint32_t p,unsigned n,unsigned size,unsigned used,unsigned available,unsigned bitmap) {
 for(unsigned pass=0;pass<3;pass++) {
  memset(XBOX_PTR(p-32),0x5a,size+64);
  call0(sub_000B47E0,p);
  CHECK(MEM32(p+used)==0&&MEM32(p+available)==n);
  for(unsigned i=0;i<n;i++) {
   CHECK(call0(sub_000B3E20,p)==i);
   CHECK(MEM32(p+used)==i+1&&MEM32(p+available)==n-i-1);
   CHECK(MEM32(p+bitmap+(i/32)*4)&(1u<<(i%32)));
  }
  // Retain odd slots, release and reuse even slots; no live entry overwritten.
  for(unsigned i=0;i<n;i+=2)call1(sub_000B5360,p,i);
  for(unsigned i=0;i<n;i+=2)CHECK(call0(sub_000B3E20,p)==i);
  CHECK(MEM32(p+used)==n&&MEM32(p+available)==0);
  for(unsigned i=0;i<n;i++)call1(sub_000B5360,p,i);
  CHECK(MEM32(p+used)==0&&MEM32(p+available)==n);
  for(unsigned i=0;i<32;i++)CHECK(MEM8(p-32+i)==0x5a&&MEM8(p+size+i)==0x5a);
 }
}
int main(void) {
 exercise(POOL,255,20456,20452,20416,20420);
 exercise(STOCK,3,268,264,256,260);
 puts("PASS native source cache: 255 expanded / 3 retail, occupancy, pinned-slot retention, reuse, reset, ABI and bounds");
 return 0;
}
