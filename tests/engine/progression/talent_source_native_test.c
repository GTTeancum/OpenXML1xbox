/* Execute the generated registration method with only its allocator/string
 * dependencies substituted. Verifies byte IDs, full-table duplicate lookup,
 * capacity rejection and preservation of adjacent original guest globals. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "engine/progression/talent_source_table.h"
static uint32_t memory[0x800000/4];
static uint32_t eax,ebx,ecx,edx,esi,edi,esp;
static int g_df,invalid_path;
#define MEM8(a) (((uint8_t*)memory)[(uint32_t)(a)])
#define MEM32(a) (*(uint32_t*)((uint8_t*)memory+(uint32_t)(a)))
#define XBOX_PTR(a) ((uint8_t*)memory+(uint32_t)(a))
#define PUSH32(s,v) do {uint32_t temp_=(v);(s)-=4;MEM32(s)=temp_;} while(0)
#define POP32(s,r) do {(r)=MEM32(s);(s)+=4;} while(0)
#define LO8(r) ((r)&255u)
#define SET_LO8(r,v) ((r)=((r)&0xffffff00u)|((v)&255u))
#define CMP_LE(a,b) ((a)<=(b))
#define CMP_L(a,b) ((a)<(b))
#define TEST_Z(a,b) (((a)&(b))==0)
#define RECOMP_ABI_CALL(a,f) f()
#define CHECK(x) do{if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
#define TABLE 0x600000u
#define STACK 0x700000u
#define INPUT 0x710000u
uint32_t xml1_talent_source_table(void){return TABLE;}
int xml1_talent_source_path_valid(uint32_t path){CHECK(path==INPUT);return !invalid_path;}
static void sub_00343612(void) {
    eax=(uint32_t)_stricmp((char*)XBOX_PTR(MEM32(esp+4)),(char*)XBOX_PTR(MEM32(esp+8)));
    esp+=4;
}
static void sub_00340E00(void) {
    strncpy((char*)XBOX_PTR(MEM32(esp+4)),(char*)XBOX_PTR(MEM32(esp+8)),MEM32(esp+12));
    esp+=4;
}
#include "native-source-method.inc"
static unsigned insert(const char *name) {
    strcpy((char*)XBOX_PTR(INPUT),name);
    esp=STACK;ebx=0x12345678;esi=0x87654321;edi=0xfedcba98;
    PUSH32(esp,INPUT);PUSH32(esp,0);
    sub_000B41B0();
    CHECK(esp==STACK-4);CHECK(ebx==0x12345678&&esi==0x87654321&&edi==0xfedcba98);
    return eax&255u;
}
int main(void) {
    memset(XBOX_PTR(0x4d7310),0xa5,96);
    memset(XBOX_PTR(TABLE-32),0x5a,32);
    memset(XBOX_PTR(TABLE+XML1_TALENT_SOURCE_ALLOCATION),0x5a,32);
    char name[32];
    for(unsigned i=0;i<XML1_TALENT_SOURCE_CAPACITY;++i) {
        snprintf(name,sizeof(name),"data/talents/hero%03u.xml",i);
        CHECK(insert(name)==i);CHECK(MEM32(0x4d7374)==i+1);
    }
    CHECK(insert("data/talents/new.xml")==255);
    CHECK(MEM32(0x4d7374)==255);
    for(unsigned i=0;i<255;++i) {
        snprintf(name,sizeof(name),"DATA/TALENTS/HERO%03u.XML",i);
        CHECK(insert(name)==i);CHECK(MEM32(0x4d7374)==255);
    }
    invalid_path=1;CHECK(insert("invalid")==255);CHECK(MEM32(0x4d7374)==255);
    for(unsigned i=0;i<96;++i)CHECK(MEM8(0x4d7310+i)==0xa5);
    for(unsigned i=0;i<32;++i) {
        CHECK(MEM8(TABLE-32+i)==0x5a);
        CHECK(MEM8(TABLE+XML1_TALENT_SOURCE_ALLOCATION+i)==0x5a);
        CHECK(MEM8(TABLE+255*32+i)==0);
    }
    puts("PASS native source registration: 255 IDs, duplicate lookup, capacity, ABI and bounds");
    return 0;
}
