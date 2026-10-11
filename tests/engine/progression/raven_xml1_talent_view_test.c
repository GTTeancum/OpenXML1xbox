#include "engine/progression/talent_registry_layout.h"
#include "engine/progression/raven_xml1_talent_view.h"
#include <stdio.h>
#include <string.h>
#include "engine/progression/character_talent_record.h"
#include "engine/progression/character_talent_map_owner.h"
static unsigned char memory[0x10000];
static uint32_t allocate_map(void *ctx,unsigned bytes) {
    uint32_t *next=(uint32_t*)ctx,at=*next;
    if(at>sizeof(memory)||bytes>sizeof(memory)-at)return 0;
    *next+=bytes;return at;
}
#define CHECK(c) do {if(!(c)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#c);return 1;}}while(0)
static int read_bytes(void *ctx,uint32_t at,void *out,size_t n) {
    (void)ctx;
    if(at>sizeof(memory)||n>sizeof(memory)-at)return 0;
    memcpy(out,memory+at,n);return 1;
}
static void word(unsigned at,unsigned v) {
    for(unsigned i=0;i<4;++i)memory[at+i]=(unsigned char)(v>>(8*i));
}
static void name_node(unsigned index,const char *name,unsigned id) {
    unsigned at=0x100+4+index*44;
    word(at+0x10,0x3fffffff);word(at+0x14,0x3fffffff);
    strcpy((char*)memory+at+0x18,name);memory[0x100+4+XML1_TALENT_NAME_VALUES+index]=(unsigned char)id;
}
static void rank_node(unsigned stats,unsigned index,unsigned key,unsigned packed) {
    unsigned at=stats+0x30+index*16;
    word(at+0x10,0x3fffffff);word(at+0x14,0x3fffffff);
    memory[at+0x18]=(unsigned char)key;
#ifdef XML1_EXPANDED_TALENT_RECORDS
    uint8_t legacy[3]={(uint8_t)packed,0,0};
    word(stats+0x30+index*4+0x168,xml1_talent_record_from_legacy(legacy));
#else
    memory[stats+0x30+index*4+0x168]=(unsigned char)packed;
#endif
}
int main(void) {
    uint8_t id=222,rank=222;
    word(0x108,0);name_node(0,"wolverine",107);name_node(1,"sunfire",108);
    word(0x100+4+0x10,1);
    CHECK(raven_xml1_talent_id(read_bytes,0,0x100,"SUNFIRE",&id)==RAVEN_FOUND&&id==108);
    CHECK(raven_xml1_talent_id(read_bytes,0,0x100,"wolverine",&id)==RAVEN_FOUND&&id==107);
    CHECK(raven_xml1_talent_id(read_bytes,0,0x100,"missing",&id)==RAVEN_MISSING&&id==107);
    CHECK(raven_xml1_talent_id(read_bytes,0,0x100,"12345678901234567890123456789012",&id)==RAVEN_INVALID);
    word(0x3034,0);rank_node(0x3000,0,107,0xa1);rank_node(0x3000,1,108,0xb0);
    word(0x3000+0x30+0x14,1);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,107,&rank)==RAVEN_FOUND&&rank==1);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,108,&rank)==RAVEN_FOUND&&rank==0);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,109,&rank)==RAVEN_MISSING&&rank==0);
    word(0x4034,0);rank_node(0x4000,0,107,0xcf);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_FOUND&&rank==15);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,107,&rank)==RAVEN_FOUND&&rank==1);
    /* Bounds, cyclic links and ID sentinel fail without clobbering outputs. */
#ifdef XML1_EXPANDED_TALENT_RECORDS
    uint32_t record=0;
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_PENDING,63));
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_BASELINE,63));
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_LIMIT,63));
    word(0x4198,record);
    CHECK(raven_xml1_talent_effective_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_FOUND&&rank==0);
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_BONUS,5));word(0x4198,record);
    CHECK(raven_xml1_talent_effective_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_FOUND&&rank==5);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_FOUND&&rank==0);
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_CURRENT,63));
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_BONUS,63));word(0x4198,record);
    CHECK(raven_xml1_talent_effective_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_FOUND&&rank==126);
    word(0x4198,0x12fc2054);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_FOUND&&rank==20);
    word(0x4198,0xffffffff);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_INVALID&&rank==20);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,107,&rank)==RAVEN_FOUND&&rank==1);
#endif
    CHECK(raven_xml1_talent_rank(read_bytes,0,0xfffffff0,107,&rank)==RAVEN_INVALID&&rank==1);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,255,&rank)==RAVEN_INVALID);
    word(0x3000+0x30+0x10,0);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,106,&rank)==RAVEN_INVALID);
    word(0x100+4+0x10,0);
    CHECK(raven_xml1_talent_id(read_bytes,0,0x100,"missing",&id)==RAVEN_INVALID);
#ifdef XML1_EXPANDED_TALENT_RECORDS
    /* Same IDs, different characters, including the last expanded node. The
     * stock embedded map remains intact and becomes visible again on retire. */
    uint32_t next=0x6000;
    xml1_character_map_owner owner={0,allocate_map,&next,0,0};
    xml1_character_map_owner other={0,allocate_map,&next,0,0};
    CHECK(xml1_character_map_bind(&owner));
    uint32_t map=xml1_character_map_create(&owner,0x3030);
    CHECK(map==0x6000);
    CHECK(!xml1_character_map_bind(&other));
    CHECK(!xml1_character_map_bind(NULL));
    CHECK(xml1_character_map_current_contains(map+XML1_CHARACTER_TALENT_MAP_BYTES-1));
    CHECK(!xml1_character_map_current_contains(map+XML1_CHARACTER_TALENT_MAP_BYTES));
    word(map+4,253);
    word(map+253*16+0x10,0x3fffffff);word(map+253*16+0x14,0x3fffffff);
    memory[map+253*16+0x18]=107;
    record=0;
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_CURRENT,20));
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_BONUS,6));
    CHECK(xml1_talent_record_set(&record,XML1_TALENT_PENDING,30));
    word(map+XML1_CHARACTER_TALENT_MAP_VALUES+253*4,record);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,107,&rank)==RAVEN_FOUND&&rank==20);
    CHECK(raven_xml1_talent_effective_rank(read_bytes,0,0x3000,107,&rank)==RAVEN_FOUND&&rank==26);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,108,&rank)==RAVEN_MISSING&&rank==26);
    word(0x4198,0);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_FOUND&&rank==0);
    word(map+4,254);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,107,&rank)==RAVEN_INVALID&&rank==0);
    word(map+4,253);word(map+253*16+0x10,253);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,106,&rank)==RAVEN_INVALID&&rank==0);
    CHECK(xml1_character_map_retire(&owner,0x3030));
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,107,&rank)==RAVEN_FOUND&&rank==1);
    CHECK(xml1_character_map_current_resolve(0x3030)==0x3030);
    CHECK(xml1_character_map_create(&owner,0x4030)==map);
    word(map+4,0x3fffffff); /* reconstruction clears old talent membership */
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x4000,107,&rank)==RAVEN_MISSING&&rank==1);
    xml1_character_map_owner_destroy(&owner);
    CHECK(xml1_character_map_current_resolve(0x4030)==0x4030);
    CHECK(xml1_character_map_bind(&other));
    xml1_character_map_owner_destroy(&other);
#endif
    puts("XML1 talent view: stock/expanded ownership, last-node ranks, effective ranks, retirement, bounds and corrupt-state checks passed");
    return 0;
}
