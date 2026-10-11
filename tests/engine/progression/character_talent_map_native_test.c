/* Execute the actual native tree-pool methods with their audited layout
 * migration. This is storage validation, not character/save integration. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "engine/progression/character_talent_map_owner.h"
static uint32_t memory[0x40000/4];
static uint32_t eax,ebx,ecx,edx,esi,edi,esp,g_ebp,g_seh_ebp;
static int g_df;
#define MEM32(a) (*(uint32_t*)((uint8_t*)memory+(uint32_t)(a)))
#define MEM8(a) (((uint8_t*)memory)[(uint32_t)(a)])
#define MEM16(a) (*(uint16_t*)((uint8_t*)memory+(uint32_t)(a)))
#define XBOX_PTR(a) ((uint8_t*)memory+(uint32_t)(a))
#define PUSH32(s,v) do {uint32_t x_=(v);(s)-=4;MEM32(s)=x_;}while(0)
#define POP32(s,r) do {(r)=MEM32(s);(s)+=4;}while(0)
#define LO8(r) ((r)&255u)
#define SET_LO8(r,v) ((r)=((r)&0xffffff00u)|((uint32_t)(v)&255u))
#define LO16(r) ((r)&65535u)
#define SET_LO16(r,v) ((r)=((r)&0xffff0000u)|((uint32_t)(v)&65535u))
#define ZX8(v) ((uint32_t)(uint8_t)(v))
#define CMP_EQ(a,b) ((a)==(b))
#define CMP_NE(a,b) ((a)!=(b))
#define CMP_BE(a,b) ((a)<=(b))
#define CMP_AE(a,b) ((a)>=(b))
#define CMP_LE(a,b) ((a)<=(b))
#define CMP_G(a,b) ((a)>(b))
#define CMP_B(a,b) ((a)<(b))
#define TEST_S(a,b) (((a)&(b))<0)
#define XBOX_FS_BASE 0x100u
#define g_esp esp
#define RECOMP_DF_STEP(n) (g_df?-(n):(n))
#define CMP_L(a,b) ((a)<(b))
#define CMP_GE(a,b) ((a)>=(b))
#define TEST_Z(a,b) (((a)&(b))==0)
#define TEST_NZ(a,b) (((a)&(b))!=0)
#define RECOMP_ABI_CALL(a,f) f()
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
#define EXPANDED 0x1000u
#define EXPANDED_COPY 0x3000u
#define RETAIL 0x5000u
#define RETAIL_COPY 0x6000u
#define STACK 0x3e000u
#include "engine/progression/character_talent_guest.h"
static uint32_t expected_stats,expected_node;
static unsigned references[256],acquired,released;
static unsigned maximum=63,refund_calls,refund_expected_rank;
static void sub_000B5980(void) {
    eax=0xc0;MEM32(0xc0)=0x800;MEM32(0x82c)=1;MEM32(0x830)=2;esp+=4;
    MEM32(0x814)=3;MEM32(0x900)=0x980;MEM32(0x984)=4;MEM32(0x9b4)=5;
}
static void reference_call(uint32_t target,uint32_t expected_stack) {
    if(target<=2) {
        CHECK(ecx==0xc0);unsigned id=MEM8(MEM32(esp+4));
        if(target==1){++references[id];++acquired;}
        else {CHECK(target==2&&references[id]);--references[id];++released;}
        esp+=8;eax=1;
    } else if(target==3) {CHECK(ecx==0xc0);eax=0x900;esp+=8;}
    else if(target==4) {CHECK(ecx==0x900);eax=maximum;esp+=4;}
    else {
        CHECK(target==5&&ecx==0x900);
        unsigned rank=MEM32(esp+4),output=MEM32(esp+8);
        CHECK(rank==refund_expected_rank);--refund_expected_rank;++refund_calls;
        MEM32(output)=1+rank%3;esp+=12;
    }
    CHECK(esp==expected_stack);
}
#define RECOMP_ICALL_SAFE(target,expected) reference_call(target,expected)
static void sub_000479D0(void) {
    /* This separate four-byte list is unchanged by the map migration. */
    CHECK(MEM32(ecx+4)<=1);esp+=4;
}
static unsigned char wire[4096];
static unsigned cursor,length;
static void sub_0006E7E0(void) {
    unsigned at=MEM32(esp+4),n=MEM32(esp+8);
    CHECK(ecx==0xa0&&cursor+n<=sizeof(wire));
    memcpy(wire+cursor,XBOX_PTR(at),n);cursor+=n;length=cursor;esp+=12;
}
static void sub_0006E830(void) {
    unsigned at=MEM32(esp+4),n=MEM32(esp+8);
    CHECK(ecx==0xa0&&cursor+n<=length);
    memcpy(XBOX_PTR(at),wire+cursor,n);cursor+=n;esp+=12;
}
static void sub_001994F0(void) {
    /* Tree balancing itself is unchanged. Attach this native insertion's new
     * node to a sorted chain, leaving allocation/records/bitmaps to 48B40. */
    uint32_t root=MEM32(esp+4),node=MEM32(ecx+8),at=MEM32(root);
    if(at==0x3fffffff)MEM32(root)=node;
    else {
        for(;;) {
            uint32_t child=ecx+at*16+(MEM8(ecx+node*16+24)<MEM8(ecx+at*16+24)?16:20);
            if(MEM32(child)==0x3fffffff) {
                MEM32(child)=node;MEM32(ecx+node*16+12)=at;break;
            }
            at=MEM32(child);
        }
    }
    eax=0x3fffffff;esp+=8;
}
static void xml1_raven_trace_rank(uint32_t stats,uint32_t id,uint32_t node) {
    CHECK(stats==expected_stats&&id==0x80&&node==expected_node);
}
static xml1_character_map_owner owner;
static uint32_t allocate_map(void *context,unsigned size) {
    uint32_t *next=context,result=*next;*next+=size;
    CHECK(*next<STACK-1024);return result;
}
static uint32_t xml1_character_talent_map_create(uint32_t original) {
    if(original==RETAIL||original==RETAIL_COPY)return original;
    uint32_t result=xml1_character_map_create(&owner,original);
    CHECK(result);memset(XBOX_PTR(result),0,XML1_CHARACTER_TALENT_MAP_BYTES);return result;
}
static uint32_t xml1_character_talent_map_resolve(uint32_t original) {
    uint32_t result=xml1_character_map_find(&owner,original);return result?result:original;
}
static void xml1_character_talent_map_retire(uint32_t original) {
    CHECK(xml1_character_map_retire(&owner,original));
}
static int xml1_character_talent_map_contains(uint32_t p) {
    return (p>=EXPANDED&&p<EXPANDED+0x1834)||(p>=EXPANDED_COPY&&p<EXPANDED_COPY+0x1834)||
           xml1_character_map_contains(&owner,p);
}
#include "native-character-map-methods.inc"
static uint32_t call0(void(*fn)(void),uint32_t self) {
    ecx=self;esp=STACK;PUSH32(esp,0);fn();CHECK(esp==STACK);return eax;
}
static uint32_t call1(void(*fn)(void),uint32_t self,uint32_t arg) {
    ecx=self;esp=STACK;PUSH32(esp,arg);PUSH32(esp,0);fn();CHECK(esp==STACK);return eax;
}
static uint32_t call2(void(*fn)(void),uint32_t self,uint32_t a,uint32_t b) {
    ecx=self;esp=STACK;PUSH32(esp,b);PUSH32(esp,a);PUSH32(esp,0);
    fn();CHECK(esp==STACK);return eax;
}
static void bounds(uint32_t base,unsigned size) {
    for(unsigned i=0;i<32;++i) {
        CHECK(MEM8(base-32+i)==0xa5);CHECK(MEM8(base+size+i)==0xa5);
    }
}
static void exercise(uint32_t base,uint32_t copy,unsigned count,
                     unsigned size,unsigned used,unsigned bitmap,unsigned free_count) {
    memset(XBOX_PTR(base-32),0xa5,size+64);
    memset(XBOX_PTR(copy-32),0xa5,size+64);
    memset(XBOX_PTR(base),0,size);memset(XBOX_PTR(copy),0,size);
    call0(sub_0013C900,base);
    CHECK(MEM32(base+free_count)==count);
    for(unsigned i=0;i<count;++i) {
        CHECK(call0(sub_000C9B50,base)==i);
        CHECK(MEM32(base+bitmap+(i/32)*4)&(1u<<(i%32)));
        for(unsigned j=0;j<16;++j)MEM8(base+i*16+j)=(uint8_t)(i+j);
    }
    CHECK(MEM32(base+used)==count&&MEM32(base+free_count)==0);
    /* More than one bitmap word is live during the native pool copy. */
    call1(sub_00048090,copy,base);
    CHECK(!memcmp(XBOX_PTR(base),XBOX_PTR(copy),size));
    for(unsigned i=0;i<count;i+=2) {
        call1(sub_000CB2B0,copy,i);
        CHECK(!(MEM32(copy+bitmap+(i/32)*4)&(1u<<(i%32))));
        CHECK(MEM32(base+bitmap+(i/32)*4)&(1u<<(i%32)));
    }
    for(unsigned i=0;i<count;i+=2)CHECK(call0(sub_000C9B50,copy)==i);
    CHECK(MEM32(copy+used)==count&&MEM32(copy+free_count)==0);
    /* Wrap the queue repeatedly and exercise every slot, including 16+ and
     * the last partial bitmap word. Other pools retain their retail layout. */
    for(unsigned round=0;round<3;++round) {
        for(unsigned i=0;i<count;++i)call1(sub_000CB2B0,copy,i);
        CHECK(MEM32(copy+used)==0&&MEM32(copy+free_count)==count);
        for(unsigned i=0;i<count;++i)CHECK(call0(sub_000C9B50,copy)==i);
    }
    bounds(base,size);bounds(copy,size);
}
static void records(uint32_t base,uint32_t copy,unsigned count) {
    unsigned bitmap=4*count, words=4*((count+31)/32), size=bitmap+words;
    memset(XBOX_PTR(base-32),0xa5,size+64);memset(XBOX_PTR(base),0,size);
    memset(XBOX_PTR(copy-32),0xa5,size+64);memset(XBOX_PTR(copy),0,size);
    /* Sparse construction must not copy unconstructed records or lose high
     * ranks in later bitmap words. Copy uses the real four-byte callback. */
    for(unsigned i=0;i<count;++i) {
        MEM32(base+i*4)=0x12345678u+i;
        MEM32(copy+i*4)=0x0badc0de;
        if(i%3==1||i==count-1)MEM32(base+bitmap+(i/32)*4)|=1u<<(i%32);
    }
    call1(sub_000478B0,copy,base);
    for(unsigned i=0;i<count;++i)
        CHECK(MEM32(copy+i*4)==((i%3==1||i==count-1)?0x12345678u+i:0x0badc0de));
    CHECK(!memcmp(XBOX_PTR(base+bitmap),XBOX_PTR(copy+bitmap),words));
    call0(sub_000476E0,copy);
    for(unsigned i=0;i<words;++i)CHECK(MEM8(copy+bitmap+i)==0);
    bounds(base,size);bounds(copy,size);
}
static void owned_copy(void) {
    const uint32_t key=0x200,copy_key=0x400;
    memset(XBOX_PTR(key),0x5a,0x1ac);memset(XBOX_PTR(copy_key),0x5a,0x1ac);
    uint32_t map=call0(sub_00048C00,key);
    CHECK(map==xml1_character_map_find(&owner,key));
    CHECK(MEM32(map+4)==0x3fffffff&&MEM32(map+8)==0xffffffff);
    for(unsigned i=0;i<254;++i) {
        CHECK(call0(sub_000C9B50,map+12)==i);
        MEM8(map+24+i*16)=(uint8_t)i;
        MEM32(map+XML1_CHARACTER_TALENT_MAP_VALUES+i*4)=0x15555555u+i;
        MEM32(map+XML1_CHARACTER_TALENT_MAP_CONSTRUCTED+(i/32)*4)|=1u<<(i%32);
    }
    uint32_t copy=call1(sub_00049040,copy_key,key);
    CHECK(copy==xml1_character_map_find(&owner,copy_key)&&copy!=map);
    CHECK(!memcmp(XBOX_PTR(map),XBOX_PTR(copy),XML1_CHARACTER_TALENT_MAP_BYTES));
    MEM32(copy+XML1_CHARACTER_TALENT_MAP_VALUES+253*4)=0;
    CHECK(MEM32(map+XML1_CHARACTER_TALENT_MAP_VALUES+253*4)==0x15555555u+253);
    for(unsigned i=0;i<0x1ac;++i)CHECK(MEM8(key+i)==0x5a&&MEM8(copy_key+i)==0x5a);
    CHECK(owner.active==2&&owner.allocated==2);
    call0(sub_00048EE0,copy_key);
    CHECK(!xml1_character_map_find(&owner,copy_key)&&owner.active==1);
    for(unsigned i=0;i<32;++i)CHECK(MEM8(copy+XML1_CHARACTER_TALENT_MAP_CONSTRUCTED+i)==0);
    CHECK(call1(sub_00049040,copy_key,key)==copy&&owner.allocated==2);
    CHECK(MEM32(copy+XML1_CHARACTER_TALENT_MAP_VALUES+253*4)==0x15555555u+253);
}
static void accessors(uint32_t original,uint32_t map,unsigned index,unsigned values) {
    const uint32_t stats=original-0x30,at=map+index*16;
    uint32_t record=0;
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_CURRENT,20));
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_PENDING,31));
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_BONUS,7));
    MEM32(map+4)=index;MEM32(at+0x10)=MEM32(at+0x14)=0x3fffffff;
    MEM8(at+0x18)=107;MEM32(map+values+index*4)=record;MEM32(0x80)=107;
    expected_stats=stats;expected_node=index;
    CHECK(LO8(call1(sub_00040DB0,stats,0x80))==20);
    CHECK(LO8(call1(sub_00048270,stats,0x80))==31);
    CHECK(LO8(call1(sub_000482B0,stats,0x80))==7);
    CHECK(LO8(call2(sub_000480F0,stats,0x80,45))==1);
    CHECK(LO8(call2(sub_000481A0,stats,0x80,19))==1);
    record=MEM32(map+values+index*4);
    CHECK(xml1_talent_record_get(record,XML1_TALENT_LIMIT)==45);
    CHECK(xml1_talent_record_get(record,XML1_TALENT_BASELINE)==19);
    CHECK(xml1_talent_record_get(record,XML1_TALENT_CURRENT)==20);
    MEM32(0x80)=108;expected_node=0x3fffffff;
    CHECK(LO8(call1(sub_00040DB0,stats,0x80))==0);
    CHECK(LO8(call1(sub_00048270,stats,0x80))==0);
    CHECK(LO8(call1(sub_000482B0,stats,0x80))==0);
    CHECK(LO8(call2(sub_000480F0,stats,0x80,1))==0);
    CHECK(LO8(call2(sub_000481A0,stats,0x80,1))==0);
    CHECK(MEM32(map+values+index*4)==record);
}
static uint32_t character(uint32_t original,unsigned count) {
    memset(XBOX_PTR(original-0x30),0,0x1e4);
    uint32_t map=call0(sub_00048C00,original);
    unsigned values=map==original?0x168:XML1_CHARACTER_TALENT_MAP_VALUES;
    unsigned bits=map==original?0x1a8:XML1_CHARACTER_TALENT_MAP_CONSTRUCTED;
    MEM32(map+4)=count?0:0x3fffffff;
    for(unsigned i=0;i<count;++i) {
        CHECK(call0(sub_000C9B50,map+12)==i);
        /* A valid ascending chain exercises the actual native next/first
         * iterators; capacity is independent of balancing in the inserter. */
        MEM32(map+12+i*16)=i?i-1:0x3fffffff;
        MEM32(map+16+i*16)=0x3fffffff;
        MEM32(map+20+i*16)=i+1<count?i+1:0x3fffffff;
        MEM8(map+24+i*16)=(uint8_t)i;
        uint32_t record=0;
        CHECK(xml1_talent_record_set(&record,XML1_TALENT_CURRENT,20+i%30));
        CHECK(xml1_talent_record_set(&record,XML1_TALENT_BONUS,i%5));
        CHECK(xml1_talent_record_set(&record,XML1_TALENT_PENDING,i%7));
        MEM32(map+values+i*4)=record;
        MEM32(map+bits+(i/32)*4)|=1u<<(i%32);
        ++references[i];
    }
    return map;
}
static void stats_copy(uint32_t source,uint32_t destination,unsigned count) {
    memset(references,0,sizeof(references));acquired=released=0;
    uint32_t src=character(source,count),dst=character(destination,count/2);
    unsigned expanded=src!=source;
    size_t active=owner.active;
    unsigned values=expanded?XML1_CHARACTER_TALENT_MAP_VALUES:0x168;
    MEM32(source-0x30+4)=0x12345678;
    for(unsigned repeat=0;repeat<8;++repeat) {
        CHECK(call1(sub_000490F0,destination-0x30,source-0x30)==destination-0x30);
        CHECK(owner.active==active);
        CHECK(!memcmp(XBOX_PTR(src+values),XBOX_PTR(dst+values),count*4));
        CHECK(MEM32(destination-0x30+4)==0x12345678);
        for(unsigned i=0;i<256;++i)CHECK(references[i]==(i<count?2u:0u));
        CHECK(call1(sub_000490F0,destination-0x30,destination-0x30)==destination-0x30);
        CHECK(owner.active==active);
        for(unsigned i=0;i<256;++i)CHECK(references[i]==(i<count?2u:0u));
    }
    CHECK(acquired==count*16);
    CHECK(released==count/2+count*15);
    if(expanded)CHECK(owner.allocated==3); /* two characters, one reusable snapshot */
    call0(sub_00048C60,destination-0x30);
    CHECK(owner.active==active&&MEM32(dst+4)==0x3fffffff);
    CHECK(MEM32(dst+(expanded?0x1418:0x164))==0);
    for(unsigned i=0;i<(expanded?32u:4u);++i)
        CHECK(MEM8(dst+(expanded?0x1814:0x1a8)+i)==0);
    for(unsigned i=0;i<256;++i)CHECK(references[i]==(i<count?1u:0u));
    call0(sub_00048F90,destination-0x30);
    call0(sub_00048F90,source-0x30);
    for(unsigned i=0;i<256;++i)CHECK(references[i]==0);
    CHECK(!expanded||owner.active==0);
    /* Original identity can now be constructed again without duplicate owner. */
    character(source,0);call0(sub_00048F90,source-0x30);
}
static void saved_maps(uint32_t source,uint32_t destination,unsigned count) {
    memset(references,0,sizeof(references));acquired=released=0;
    uint32_t src=character(source,count),dst=character(destination,count/2);
    unsigned expanded=src!=source,values=expanded?0x141c:0x168;
    size_t active=owner.active;
    MEM32(source-0x30+4)=0x13579bdf;
    MEM32(source-0x30+0x1e0)=1;MEM8(source-0x30+0x1dc)=3;
    cursor=length=0;call1(sub_00047F80,source-0x30,0xa0);
    CHECK(length==0x2c+1+count*5+2&&wire[0x2c]==count);
    CHECK(xml1_talent_stream_begin(0xa0,2));
    for(unsigned round=0;round<12;++round) {
        cursor=0;call1(sub_00049280,destination-0x30,0xa0);
        CHECK(cursor==length&&owner.active==active);
        CHECK(!memcmp(XBOX_PTR(src+values),XBOX_PTR(dst+values),count*4));
        CHECK(MEM32(destination-0x30+4)==0x13579bdf);
        CHECK(MEM32(destination-0x30+0x1e0)==1&&MEM8(destination-0x30+0x1dc)==3);
        for(unsigned i=0;i<256;++i)CHECK(references[i]==(i<count?2u:0u));
    }
    CHECK(!expanded||owner.allocated==3);
    call0(sub_00048F90,source-0x30);call0(sub_00048F90,destination-0x30);
    for(unsigned i=0;i<256;++i)CHECK(references[i]==0);
    xml1_talent_stream_reset();
}
static void legacy_save(void) {
    const uint32_t key=0x200;
    memset(references,0,sizeof(references));
    uint32_t map=character(key,20); /* replace a larger current roster */
    memset(wire,0,sizeof(wire));cursor=0;length=0x2c+1+16*4+1;wire[0x2c]=16;
    for(unsigned i=0;i<16;++i) {
        wire[0x2d+i*4]=(uint8_t)i;
        wire[0x2e+i*4]=(uint8_t)(i|((15-i)<<4));
        wire[0x2f+i*4]=0xa3;wire[0x30+i*4]=0x0f;
    }
    CHECK(xml1_talent_stream_begin(0xa0,1));
    call1(sub_00049280,key-0x30,0xa0);CHECK(cursor==length&&owner.active==1);
    CHECK(MEM32(map+0x1418)==16);
    for(unsigned i=0;i<16;++i) {
        uint8_t old[3]={(uint8_t)(i|((15-i)<<4)),0xa3,0x0f};
        CHECK(MEM32(map+0x141c+i*4)==xml1_talent_record_from_legacy(old));
    }
    for(unsigned i=0;i<256;++i)CHECK(references[i]==(i<16?1u:0u));
    call0(sub_00048F90,key-0x30);
    for(unsigned i=0;i<256;++i)CHECK(references[i]==0);
    xml1_talent_stream_reset();
}
static void progression(uint32_t key,unsigned capacity) {
    memset(references,0,sizeof(references));
    uint32_t map=character(key,0),stats=key-0x30,index=capacity-1;
    unsigned expanded=key!=map,values=expanded?0x141c:0x168,bits=expanded?0x1814:0x1a8;
    for(unsigned i=0;i<capacity;++i)CHECK(call0(sub_000C9B50,map+12)==i);
    for(unsigned i=0;i<index;++i)call1(sub_000CB2B0,map+12,i);
    MEM32(map+4)=index;MEM32(map+12+index*16)=0x3fffffff;
    MEM32(map+16+index*16)=MEM32(map+20+index*16)=0x3fffffff;
    MEM8(map+24+index*16)=42;MEM32(0x80)=42;references[42]=1;
    MEM32(map+bits+(index/32)*4)=1u<<(index%32);
    uint32_t record_address=map+values+index*4;
    maximum=63;
    for(unsigned rank=0;rank<=63;++rank)for(unsigned pending=0;pending<=63;++pending)
        for(unsigned bonus=0;bonus<=63;++bonus) {
            uint32_t record=0;
            CHECK(xml1_talent_record_set(&record,XML1_TALENT_CURRENT,rank));
            CHECK(xml1_talent_record_set(&record,XML1_TALENT_BONUS,bonus));
            MEM32(record_address)=record;
            unsigned accepted=rank+pending+bonus<=63;
            CHECK(LO8(call2(sub_00048860,stats,0x80,pending))==accepted);
            CHECK(xml1_talent_record_get(MEM32(record_address),XML1_TALENT_PENDING)==(accepted?pending:0));
            CHECK(xml1_talent_record_set(&record,XML1_TALENT_BONUS,0));
            CHECK(xml1_talent_record_set(&record,XML1_TALENT_PENDING,pending));
            MEM32(record_address)=record;
            CHECK(LO8(call2(sub_000482F0,stats,0x80,bonus))==accepted);
            CHECK(xml1_talent_record_get(MEM32(record_address),XML1_TALENT_BONUS)==(accepted?bonus:0));
        }
    for(unsigned rank=0;rank<=63;++rank)for(unsigned pending=0;rank+pending<=63;++pending) {
        uint32_t record=0;
        CHECK(xml1_talent_record_set(&record,XML1_TALENT_CURRENT,rank));
        CHECK(xml1_talent_record_set(&record,XML1_TALENT_PENDING,pending));
        CHECK(xml1_talent_record_set(&record,XML1_TALENT_BASELINE,17));
        MEM32(record_address)=record;MEM8(stats+0x2b)=7;
        unsigned points=7;
        for(unsigned i=rank;i<rank+pending;++i)points+=1+i%3;
        refund_calls=0;refund_expected_rank=rank+pending-1;
        CHECK(LO8(call0(sub_00048510,stats))==(pending!=0));
        CHECK(refund_calls==pending&&MEM8(stats+0x2b)==points);
        CHECK(xml1_talent_record_get(MEM32(record_address),XML1_TALENT_PENDING)==0);
        CHECK(xml1_talent_record_get(MEM32(record_address),XML1_TALENT_CURRENT)==rank);
        CHECK(xml1_talent_record_get(MEM32(record_address),XML1_TALENT_BASELINE)==17);
        MEM32(record_address)=record;
        CHECK(LO8(call0(sub_00048950,stats))==(pending!=0));
        CHECK(xml1_talent_record_get(MEM32(record_address),XML1_TALENT_CURRENT)==rank+pending);
        CHECK(xml1_talent_record_get(MEM32(record_address),XML1_TALENT_PENDING)==0);
    }
    for(unsigned limit=1;limit<=63;++limit) {
        MEM32(record_address)=0;maximum=20;
        call2(sub_000480F0,stats,0x80,limit);
        CHECK(LO8(call1(sub_00048140,stats,0x80))==(limit<20?limit:20));
        call2(sub_000487F0,stats,0x80,63);
        CHECK(xml1_talent_record_get(MEM32(record_address),XML1_TALENT_CURRENT)==(limit<20?limit:20));
    }
    call0(sub_00048F90,stats);CHECK(!references[42]);
}
int main(void) {
    uint32_t next=0x7000;owner.allocate=allocate_map;owner.context=&next;
    exercise(EXPANDED,EXPANDED_COPY,254,0x1410,0x140c,0x13ec,0x13e8);
    exercise(RETAIL,RETAIL_COPY,16,0x15c,0x158,0x154,0x150);
    records(EXPANDED,EXPANDED_COPY,254);
    records(RETAIL,RETAIL_COPY,16);
    owned_copy();
    accessors(0x200,xml1_character_map_find(&owner,0x200),253,XML1_CHARACTER_TALENT_MAP_VALUES);
    accessors(RETAIL,RETAIL,15,0x168);
    /* Unrelated retail cleanup must not require an external-map owner. */
    MEM32(RETAIL+0x1a8)=0xffff;
    call0(sub_00048EE0,RETAIL);CHECK(MEM32(RETAIL+0x1a8)==0);
    xml1_character_map_owner_destroy(&owner);
    next=0x7000;
    stats_copy(0x200,0x400,254);
    xml1_character_map_owner_destroy(&owner);
    stats_copy(RETAIL,RETAIL_COPY,16);
    xml1_character_map_owner_destroy(&owner);
    next=0x7000;saved_maps(0x200,0x400,254);xml1_character_map_owner_destroy(&owner);
    saved_maps(RETAIL,RETAIL_COPY,16);xml1_character_map_owner_destroy(&owner);
    next=0x7000;legacy_save();xml1_character_map_owner_destroy(&owner);
    next=0x7000;progression(0x200,254);xml1_character_map_owner_destroy(&owner);
    progression(RETAIL,16);xml1_character_map_owner_destroy(&owner);
    next=0x7000;
    CHECK(call0(sub_00048EF0,0x200-0x30)==0x200-0x30);
    uint32_t constructed=xml1_character_map_find(&owner,0x200);
    CHECK(constructed&&MEM32(constructed)==0x3cad98&&MEM32(constructed+4)==0x3fffffff);
    call0(sub_00048F90,0x200-0x30);CHECK(owner.active==0);
    xml1_character_map_owner_destroy(&owner);
    puts("PASS native character maps: 254/16 storage, high-slot progression/refund/commit, repeated copy/save/load, legacy import, balanced references, destruction, bounded ownership and ABI");
    return 0;
}
