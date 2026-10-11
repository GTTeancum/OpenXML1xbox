#include "engine/progression/character_talent_map_owner.h"
#include <stdio.h>
#include <stdlib.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
struct allocator {uint32_t next;unsigned calls,fail;};
static uint32_t allocate(void *context,unsigned bytes) {
    struct allocator *a=context;++a->calls;
    CHECK(bytes==XML1_CHARACTER_TALENT_MAP_BYTES);
    if(a->fail)return 0;
    uint32_t result=a->next;a->next+=bytes;return result;
}
int main(void) {
    struct allocator a={0x100000,0,0};
    xml1_character_map_owner owner={0};owner.allocate=allocate;owner.context=&a;
    uint32_t maps[192];
    for(unsigned i=0;i<192;++i) {
        maps[i]=xml1_character_map_create(&owner,0x10000+i*0x200);
        CHECK(maps[i]&&xml1_character_map_find(&owner,0x10000+i*0x200)==maps[i]);
        for(unsigned j=0;j<i;++j)CHECK(maps[j]!=maps[i]);
        CHECK(xml1_character_map_contains(&owner,maps[i]));
        CHECK(xml1_character_map_contains(&owner,maps[i]+XML1_CHARACTER_TALENT_MAP_BYTES-1));
    }
    CHECK(owner.active==192&&owner.allocated==192&&a.calls==192);
    CHECK(!xml1_character_map_contains(&owner,a.next));
    CHECK(!xml1_character_map_create(&owner,0x10000)&&owner.active==192);
    for(unsigned i=0;i<192;i+=2) {
        CHECK(xml1_character_map_retire(&owner,0x10000+i*0x200));
        CHECK(!xml1_character_map_contains(&owner,maps[i]));
        CHECK(!xml1_character_map_find(&owner,0x10000+i*0x200));
        CHECK(!xml1_character_map_retire(&owner,0x10000+i*0x200));
    }
    for(unsigned round=0;round<1000;++round) {
        for(unsigned i=0;i<192;i+=2)CHECK(xml1_character_map_create(&owner,0x10000+i*0x200));
        for(unsigned i=1;i<192;i+=2)CHECK(xml1_character_map_find(&owner,0x10000+i*0x200)==maps[i]);
        for(unsigned i=0;i<192;i+=2)CHECK(xml1_character_map_retire(&owner,0x10000+i*0x200));
    }
    CHECK(a.calls==192&&owner.active==96&&owner.allocated==192);
    for(unsigned i=0;i<192;i+=2)CHECK(xml1_character_map_create(&owner,0x10000+i*0x200));
    a.fail=1;CHECK(!xml1_character_map_create(&owner,0x90000));
    CHECK(owner.active==192&&owner.allocated==192&&!xml1_character_map_find(&owner,0x90000));
    CHECK(!xml1_character_map_create(&owner,0));
    xml1_character_map_owner_destroy(&owner);CHECK(!owner.active&&!owner.allocated&&!owner.slots);
    puts("PASS character-map ownership: isolated live maps, reuse, address lifetime, bounded peak allocation, atomic failure");
    return 0;
}
