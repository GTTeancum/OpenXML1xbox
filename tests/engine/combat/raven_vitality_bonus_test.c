#include "engine/combat/raven_vitality_bonus.h"
#include <stdio.h>
#include <stdlib.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
int main(void) {
    raven_vitality_owner owner={0};uint8_t value=99,wire[2]={0};
    CHECK(!raven_vitality_create(&owner,0));
    CHECK(!raven_vitality_get(&owner,0x1000,0,&value)&&value==99);
    for(unsigned i=1;i<=192;++i)CHECK(raven_vitality_create(&owner,i*0x1000));
    CHECK(raven_vitality_add(&owner,0x1000,0,20));
    CHECK(raven_vitality_add(&owner,0x1000,1,30));
    CHECK(raven_auto_equip_set(&owner,0x1000,-1));
    CHECK(raven_vitality_copy(&owner,0x2000,0x1000));
    CHECK(raven_vitality_add(&owner,0x1000,0,10));
    CHECK(raven_auto_equip_set(&owner,0x1000,0));
    CHECK(raven_auto_equip_get(&owner,0x2000,&value)&&value==1);
    CHECK(raven_vitality_get(&owner,0x2000,0,&value)&&value==20);
    CHECK(raven_vitality_write(&owner,0x2000,wire,2)&&wire[0]==20&&wire[1]==30);
    CHECK(raven_vitality_retire(&owner,0x1000));
    CHECK(!raven_vitality_copy(&owner,0x2000,0x1000));
    CHECK(raven_vitality_create(&owner,0x1000));
    CHECK(raven_auto_equip_get(&owner,0x1000,&value)&&value==0);
    CHECK(!raven_auto_equip_set(&owner,0xdead,1));
    CHECK(!raven_auto_equip_get(&owner,0xdead,&value));
    CHECK(raven_vitality_get(&owner,0x1000,0,&value)&&!value);
    CHECK(raven_vitality_read(&owner,0x1000,wire,2));
    CHECK(!raven_vitality_read(&owner,0x1000,wire,1));
    CHECK(!raven_vitality_read(&owner,0x1000,wire,3));
    CHECK(!raven_vitality_read(&owner,0x1000,NULL,2));
    CHECK(raven_vitality_get(&owner,0x1000,1,&value)&&value==30);
    CHECK(!raven_vitality_create(&owner,0x1000));
    CHECK(raven_vitality_get(&owner,0x1000,0,&value)&&value==20);
    CHECK(raven_vitality_read(&owner,0x1000,NULL,0));
    CHECK(raven_vitality_get(&owner,0x1000,0,&value)&&!value);
    CHECK(raven_vitality_get(&owner,0x1000,1,&value)&&!value);
    /* Snapshot isolation, repeated native-address reuse and a bounded peak. */
    for(unsigned n=0;n<10000;++n) {
        CHECK(raven_vitality_retire(&owner,0x1000));
        CHECK(raven_vitality_create(&owner,0x1000));
        CHECK(raven_vitality_get(&owner,0x1000,0,&value)&&!value);
    }
    CHECK(owner.active==192&&owner.allocated==192);
    CHECK(raven_vitality_get(&owner,0x2000,1,&value)&&value==30);
    CHECK(raven_vitality_add(&owner,0x1000,0,250));
    CHECK(raven_vitality_add(&owner,0x1000,0,10));
    CHECK(raven_vitality_get(&owner,0x1000,0,&value)&&value==4);
    CHECK(!raven_vitality_add(&owner,0x1000,2,10));
    raven_vitality_destroy(&owner);
    CHECK(!owner.slots&&!owner.active&&!owner.allocated);
    for(unsigned version=0;version<=6;++version) {
        CHECK(xml1_vitality_stream_begin(0x3000,version));
        CHECK(xml1_vitality_stream_version(0x3000)==(int)version);
        CHECK(xml1_vitality_stream_version(0x3004)==-1);
    }
    CHECK(!xml1_vitality_stream_begin(0x3000,7));
    CHECK(xml1_vitality_stream_version(0x3000)==-1);
    CHECK(xml1_vitality_stream_begin(0x3000,5));
    CHECK(!xml1_vitality_stream_begin(0,5));
    CHECK(xml1_vitality_stream_version(0x3000)==-1);
    puts("PASS vitality bonus owner: independent snapshots, transactional codec, legacy reset, address reuse, bounded allocation and versioned stream scope");
    return 0;
}
