#include "engine/actors/raven_leader_power.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
struct random_call {int count,low,high,result;};
static int random_value(void *context,int low,int high) {
    struct random_call *r=context;++r->count;r->low=low;r->high=high;return r->result;
}
int main(void) {
    const char *names[]={"ldr_shared_damage","ldr_shared_speed","ldr_shared_elemental",
        "ldr_shared_drain","ldr_shared_altered","ldr_radiation","ldr_health_regen",
        "ldr_leech_invuln","ldr_shared_invuln","ldr_need_finisher","ldr_need_popup",
        "ldr_need_knockback","ldr_regen_finisher","ldr_2vuln"};
    struct random_call r={0};uint8_t selection=255;
    for(unsigned i=0;i<14;++i) {
        CHECK(raven_leader_select(names[i],0,random_value,&r,&selection)&&selection==i);
        CHECK(!r.count);
        CHECK(!strcmp(raven_leader_power_name((uint8_t)(i|0xa0)),names[i]));
    }
    CHECK(!raven_leader_power_name(14)&&!raven_leader_power_name(255));
    CHECK(raven_leader_select("LDR_SHARED_DAMAGE",2,NULL,NULL,&selection)&&selection==0);
    for(int difficulty=-1;difficulty<=3;++difficulty)
    for(int alias=0;alias<3;++alias) {
        const char *name=alias==0?"random_no_invuln":alias==1?"random":"R";
        int bound=alias==0&&difficulty<2?6:10;
        for(int sample=0;sample<=bound;++sample) {
            r.count=0;r.result=sample;
            CHECK(raven_leader_select(name,difficulty,random_value,&r,&selection));
            CHECK(selection==sample&&r.count==1&&r.low==0&&r.high==bound);
        }
    }
    selection=77;r.count=0;
    CHECK(!raven_leader_select(NULL,0,random_value,&r,&selection));
    CHECK(!raven_leader_select("",0,random_value,&r,&selection));
    CHECK(!raven_leader_select("unknown",0,random_value,&r,&selection));
    CHECK(!raven_leader_select("r",0,NULL,&r,&selection));
    CHECK(!raven_leader_select("r",0,random_value,&r,NULL));
    CHECK(selection==77&&r.count==0);
    r.result=-1;CHECK(!raven_leader_select("r",0,random_value,&r,&selection)&&selection==77);
    r.result=11;CHECK(!raven_leader_select("r",0,random_value,&r,&selection)&&selection==77);
    raven_leader_zone_snapshot zone,retained;
    raven_leader_zone_reset(&zone);
    CHECK(!raven_leader_zone_get(&zone,1,&selection)&&selection==77);
    for(unsigned record=1;record<RAVEN_LEADER_ZONE_RECORDS;++record)
        CHECK(raven_leader_zone_capture(&zone,record,(uint8_t)(record%14)));
    retained=zone; /* independent native snapshot lifetimes */
    CHECK(!raven_leader_zone_capture(&zone,0,1));
    CHECK(!raven_leader_zone_capture(&zone,600,1));
    CHECK(!raven_leader_zone_capture(&zone,1,14));
    CHECK(!raven_leader_zone_capture(&zone,1,255));
    CHECK(!memcmp(&zone,&retained,sizeof(zone)));
    raven_leader_zone_reset(&zone);
    for(unsigned record=1;record<RAVEN_LEADER_ZONE_RECORDS;++record) {
        selection=77;
        CHECK(!raven_leader_zone_get(&zone,record,&selection)&&selection==77);
        CHECK(raven_leader_zone_get(&retained,record,&selection)&&selection==record%14);
    }
    CHECK(sizeof(zone)==600); /* fixed native record bound; no growing actor map */
    CHECK(raven_leader_zone_capture(&zone,1,0));
    CHECK(raven_leader_zone_get(&zone,1,&selection)&&selection==0);
    raven_leader_zone_cache cache;
    const uint32_t base=0x100000;
    raven_leader_cache_bind(&cache,base);
    for(unsigned z=0;z<7;++z)
    for(unsigned i=1;i<600;++i)
        CHECK(raven_leader_cache_capture(&cache,base+z*0x39bc+4+i*20,(uint8_t)((z+i)%14)));
    /* Exhaust the native range, including headers, reserved record0, interior
     * record pointers and the non-entity metadata after the record array. */
    for(unsigned offset=0;offset<7*0x39bc+20;++offset) {
        unsigned z=offset/0x39bc,local=offset%0x39bc;
        int valid=z<7&&local>=24&&local<12004&&(local-4)%20==0;
        selection=77;
        CHECK(raven_leader_cache_get(&cache,base+offset,&selection)==valid);
        CHECK(selection==(valid?(z+(local-4)/20)%14:77));
    }
    CHECK(!raven_leader_cache_reset_zone(&cache,base+1));
    CHECK(!raven_leader_cache_reset_zone(&cache,base+7*0x39bc));
    CHECK(!raven_leader_cache_capture(&cache,base-1,0));
    CHECK(!raven_leader_cache_capture(&cache,base+24,14));
    CHECK(raven_leader_cache_reset_zone(&cache,base+3*0x39bc));
    for(unsigned z=0;z<7;++z) {
        selection=77;
        CHECK(raven_leader_cache_get(&cache,base+z*0x39bc+24,&selection)==(z!=3));
        CHECK(selection==(z==3?77:(z+1)%14));
    }
    /* Loading into the same native allocation must retire all prior identities. */
    raven_leader_cache_bind(&cache,base);
    CHECK(!raven_leader_cache_get(&cache,base+24,&selection));
    raven_leader_cache_bind(&cache,UINT32_MAX-10);
    CHECK(!cache.native_base);
    CHECK(!raven_leader_cache_capture(&cache,base+24,0));
    CHECK(sizeof(cache)==4204);
    puts("PASS seven-zone bounded record ownership, complete address-range admission and cache replacement; native hooks unconnected");
    puts("PASS bounded leader zone-record identity, snapshot isolation, reset/reuse and slot-zero exclusion; native save hooks unconnected");
    puts("PASS leader name table, packed lookup, RNG ranges/ownership and rejected-selection isolation; actor scheduling untested");
    return 0;
}
