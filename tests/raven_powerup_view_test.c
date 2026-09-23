#include "raven_xml2_powerup_view.h"
#include <stdio.h>
#include <string.h>
static unsigned char memory[0x3000];
static uint32_t invalid_handle;
static int read_memory(void *ctx,uint32_t at,void *out,size_t n) {
    (void)ctx;if(at>sizeof(memory)||n>sizeof(memory)-at)return 0;
    memcpy(out,memory+at,n);return 1;
}
static void put(unsigned at,uint32_t value){for(unsigned i=0;i<4;++i)memory[at+i]=(unsigned char)(value>>(8*i));}
static int valid(void *ctx,uint32_t h){(void)ctx;return h!=invalid_handle&&h>=10&&h<=12;}
static raven_lookup actor(void *ctx,uint32_t h,uint32_t *out){
    (void)ctx;if(h==12)return RAVEN_MISSING;*out=h*100;return RAVEN_FOUND;
}
#define CHECK(x) do{if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);return 1;}}while(0)
int main(void){
    const unsigned manager=0x400;
    uint32_t entity=777;
    put(manager,0x49ef3c);put(manager+0xc3c,0xff);
    put(manager+0x83c+7*4,0x107);put(manager+0x818,1u<<7);put(manager+4+7*4,0x2000);
    CHECK(raven_xml2_entity_handle(read_memory,0,manager,0x107,&entity)==RAVEN_FOUND&&entity==0x2000);
    // Same slot, different generation must never use the new occupant.
    put(manager+0x83c+7*4,0x207);put(manager+4+7*4,0x2100);
    CHECK(raven_xml2_entity_handle(read_memory,0,manager,0x107,&entity)==RAVEN_MISSING&&entity==0x2000);
    CHECK(raven_xml2_entity_handle(read_memory,0,manager,0x207,&entity)==RAVEN_FOUND&&entity==0x2100);
    put(manager+0x818,0);
    CHECK(raven_xml2_entity_handle(read_memory,0,manager,0x207,&entity)==RAVEN_MISSING&&entity==0x2100);
    put(manager+0x818,1u<<7);put(manager+4+7*4,0);
    CHECK(raven_xml2_entity_handle(read_memory,0,manager,0x207,&entity)==RAVEN_FOUND&&entity==0);
    put(manager+0xc3c,0x1ff);
    CHECK(raven_xml2_entity_handle(read_memory,0,manager,0x107,&entity)==RAVEN_MISSING);
    put(manager+0xc3c,0xff);
    for(unsigned slot=0;slot<256;++slot) {
        const uint32_t handle=0x300u|slot;
        put(manager+0x83c+slot*4,handle);
        put(manager+0x818+(slot>>5)*4,1u<<(slot&31));
        put(manager+4+slot*4,0x2000+slot*4);
        CHECK(raven_xml2_entity_handle(read_memory,0,manager,handle,&entity)==RAVEN_FOUND&&entity==0x2000+slot*4);
    }
    CHECK(raven_xml2_entity_handle(read_memory,0,manager,0,&entity)==RAVEN_MISSING);
    CHECK(raven_xml2_entity_handle(read_memory,0,0x2fff,7,&entity)==RAVEN_INVALID);
    CHECK(raven_xml2_entity_handle(read_memory,0,0xfffffff0,7,&entity)==RAVEN_INVALID);
    puts("PASS XML2 entity handles: all 256 slots, generation reuse, occupancy, null and read boundaries");
    raven_xml2_powerup_context out={999,99};
    put(32,0x4a6af4);put(32+0x18,10);put(32+0x1c,11);put(32+0x3c,0x3f000000);
    CHECK(raven_xml2_attached_powerup_context(read_memory,valid,actor,0,32,500,0,&out)==RAVEN_FOUND);
    CHECK(out.actor==1000&&out.inherited==0.5f);
    put(32+0x18,12);
    CHECK(raven_xml2_attached_powerup_context(read_memory,valid,actor,0,32,500,0,&out)==RAVEN_FOUND&&out.actor==0);
    put(32+0x18,0);
    CHECK(raven_xml2_attached_powerup_context(read_memory,valid,actor,0,32,500,0,&out)==RAVEN_FOUND&&out.actor==1100);
    invalid_handle=11;
    CHECK(raven_xml2_attached_powerup_context(read_memory,valid,actor,0,32,500,0,&out)==RAVEN_FOUND&&out.actor==500);
    put(32+0x18,11);
    CHECK(raven_xml2_attached_powerup_context(read_memory,valid,actor,0,32,500,0,&out)==RAVEN_MISSING&&out.actor==500);
    CHECK(raven_xml2_attached_powerup_context(read_memory,valid,actor,0,32,500,11,&out)==RAVEN_FOUND&&out.actor==500);
    put(32,0x12345678);
    CHECK(raven_xml2_attached_powerup_context(read_memory,valid,actor,0,32,700,0,&out)==RAVEN_INVALID&&out.actor==500);
    CHECK(raven_xml2_attached_powerup_context(read_memory,valid,actor,0,0xfffffff0,700,0,&out)==RAVEN_INVALID);
    put(0x2200,0x1800);put(0x1800,0x1900);
    memory[0x1900]=0xb8;put(0x1901,0x1a00);memory[0x1905]=0xc3;
    put(0x1a18,1u<<11);memory[0x2458]=1;
    entity=999;
    CHECK(raven_xml2_entity_actor(read_memory,0,0x2200,7,&entity)==RAVEN_FOUND&&entity==0x2200);
    memory[0x2458]=0;
    CHECK(raven_xml2_entity_actor(read_memory,0,0x2200,7,&entity)==RAVEN_FOUND);
    put(0x1a18,0);memory[0x2458]=1;
    CHECK(raven_xml2_entity_actor(read_memory,0,0x2200,7,&entity)==RAVEN_MISSING&&entity==0x2200);
    put(0x1a18,1u<<11);memory[0x1900]=0x90;
    CHECK(raven_xml2_entity_actor(read_memory,0,0x2200,7,&entity)==RAVEN_INVALID);
    memory[0x1900]=0xb8;
    put(manager+0xc3c,0xff);put(manager+0x83c+10*4,10);put(manager+0x818,1u<<10);
    put(manager+4+10*4,0x2200);put(32,0x4a6af4);put(32+0x18,10);put(32+0x1c,0);
    CHECK(raven_xml2_powerup_guest_context(read_memory,0,manager,7,0,32,500,&out)==RAVEN_FOUND);
    CHECK(out.actor==0x2200&&out.inherited==0.5f);
    put(0x1a18,0);
    CHECK(raven_xml2_powerup_guest_context(read_memory,0,manager,7,0,32,500,&out)==RAVEN_FOUND&&out.actor==0);
    put(manager+0x83c+10*4,0x10a);
    CHECK(raven_xml2_powerup_guest_context(read_memory,0,manager,7,0,32,500,&out)==RAVEN_MISSING&&out.actor==0);
    puts("PASS XML2 actor bitmap and composed native-memory powerup lookup");
    int16_t talent_context=123;
    put(0x2200+0x35c,0x2700);memory[0x2700+0x28e]=0xfe;memory[0x2700+0x28f]=0xff;
    // Flag-first affecter check intentionally differs from the source cast.
    CHECK(raven_xml2_affecter_context(read_memory,0,0x2200,8,&talent_context)==RAVEN_FOUND&&talent_context==-2);
    memory[0x2458]=0;
    CHECK(raven_xml2_affecter_context(read_memory,0,0x2200,8,&talent_context)==RAVEN_MISSING&&talent_context==-2);
    put(0x1a18,1u<<12);
    CHECK(raven_xml2_affecter_context(read_memory,0,0x2200,8,&talent_context)==RAVEN_FOUND);
    put(0x2200+0x35c,0);
    CHECK(raven_xml2_affecter_context(read_memory,0,0x2200,8,&talent_context)==RAVEN_MISSING);
    put(0x2200+0x35c,0xfffffff0);
    CHECK(raven_xml2_affecter_context(read_memory,0,0x2200,8,&talent_context)==RAVEN_INVALID&&talent_context==-2);
    puts("PASS affecter context: separate type predicate, signed ID, null stats and read boundaries");
    put(manager+0x83c+10*4,10);put(0x1a18,1u<<11);memory[0x2458]=1;
    entity=999;
    CHECK(raven_xml2_scope_actor(read_memory,0,manager,10,7,8,&entity)==RAVEN_FOUND&&entity==0x2200);
    memory[0x2458]=0;
    CHECK(raven_xml2_scope_actor(read_memory,0,manager,10,7,8,&entity)==RAVEN_MISSING&&entity==0x2200);
    put(0x1a18,(1u<<11)|(1u<<12));
    CHECK(raven_xml2_scope_actor(read_memory,0,manager,10,7,8,&entity)==RAVEN_FOUND);
    put(0x1a18,1u<<12);memory[0x2458]=1;
    CHECK(raven_xml2_scope_actor(read_memory,0,manager,10,7,8,&entity)==RAVEN_MISSING);
    put(0x1a18,1u<<11);put(0x2200+0x35c,0x2700);
    memory[0x2700+0x4c8]=2;memory[0x2700+0x4c9]=0x80;
    CHECK(raven_xml2_scope_race(read_memory,0,manager,10,7,8,1)==RAVEN_FOUND);
    CHECK(raven_xml2_scope_race(read_memory,0,manager,10,7,8,33)==RAVEN_FOUND);
    CHECK(raven_xml2_scope_race(read_memory,0,manager,10,7,8,15)==RAVEN_FOUND);
    CHECK(raven_xml2_scope_race(read_memory,0,manager,10,7,8,16)==RAVEN_MISSING);
    CHECK(raven_xml2_scope_race(read_memory,0,manager,10,7,8,0)==RAVEN_MISSING);
    put(manager+0x83c+10*4,0x10a);
    CHECK(raven_xml2_scope_race(read_memory,0,manager,10,7,8,1)==RAVEN_MISSING);
    put(manager+0x83c+10*4,10);put(0x2200+0x35c,0);
    CHECK(raven_xml2_scope_race(read_memory,0,manager,10,7,8,1)==RAVEN_INVALID);
    puts("PASS scope actor/race: distinct type indices, flag precedence, native race shifts, stale handles and null stats");
    puts("PASS XML2 attached powerup context: source precedence, non-actor, sentinel, invalidation and title layout guard");
    return 0;
}
