#include "engine/actors/raven_leader_power.h"
#include <stddef.h>
#include <string.h>

/* Original XML2 491B08 table, consumed by 2BAD0 and 2DF50. These are ordinary
 * package-owned power names, not a second implementation of their effects.
 * Later integration must resolve/apply them through XML1's powerup owner. */
static const char *const powers[]={
    "ldr_shared_damage", "ldr_shared_speed", "ldr_shared_elemental",
    "ldr_shared_drain", "ldr_shared_altered", "ldr_radiation",
    "ldr_health_regen", "ldr_leech_invuln", "ldr_shared_invuln",
    "ldr_need_finisher", "ldr_need_popup", "ldr_need_knockback",
    "ldr_regen_finisher", "ldr_2vuln"
};
static int equal_name(const char *a,const char *b) {
    for(;;++a,++b) {
        unsigned x=(unsigned char)*a,y=(unsigned char)*b;
        if(x>='A'&&x<='Z')x+='a'-'A';
        if(y>='A'&&y<='Z')y+='a'-'A';
        if(x!=y)return 0;
        if(!x)return 1;
    }
}
int raven_leader_select(const char *name,int32_t difficulty,
                        raven_leader_random random,void *context,uint8_t *selection) {
    if(!name || !selection)return 0;
    int maximum;
    if(equal_name(name,"random_no_invuln"))maximum=difficulty>=2?10:6;
    else if(equal_name(name,"r") || equal_name(name,"random"))maximum=10;
    else {
        for(unsigned i=0;i<sizeof(powers)/sizeof(powers[0]);++i)
            if(equal_name(name,powers[i])) {*selection=(uint8_t)i;return 1;}
        return 0;
    }
    /* 2BB7C passes (0, maximum, 1) to16E1C0. That native helper uses an
     * inclusive range; its third argument selects the RNG source, not a
     * lower/upper-bound convention. Do not reinterpret the random aliases
     * based on their English names or filter the table a second time. */
    if(!random)return 0;
    int chosen=random(context,0,maximum);
    if(chosen<0 || chosen>maximum)return 0;
    *selection=(uint8_t)chosen;return 1;
}
const char *raven_leader_power_name(uint8_t packed_selection) {
    unsigned index=packed_selection&15u; /* actual2DF50 consumer */
    return index<sizeof(powers)/sizeof(powers[0])?powers[index]:NULL;
}
void raven_leader_zone_reset(raven_leader_zone_snapshot *snapshot) {
    if(snapshot)memset(snapshot,0,sizeof(*snapshot));
}
int raven_leader_zone_capture(raven_leader_zone_snapshot *snapshot,
                             unsigned record,uint8_t selection) {
    if(!snapshot || !record || record>=RAVEN_LEADER_ZONE_RECORDS || selection>=14)return 0;
    snapshot->selected[record]=(uint8_t)(selection+1u);return 1;
}
int raven_leader_zone_get(const raven_leader_zone_snapshot *snapshot,
                         unsigned record,uint8_t *selection) {
    if(!snapshot || !selection || !record || record>=RAVEN_LEADER_ZONE_RECORDS)return 0;
    unsigned encoded=snapshot->selected[record];
    if(!encoded || encoded>14)return 0;
    *selection=(uint8_t)(encoded-1u);return 1;
}

enum { NATIVE_ZONE_BYTES=0x39bc, NATIVE_RECORD_BYTES=20, NATIVE_RECORD_START=4 };
void raven_leader_cache_bind(raven_leader_zone_cache *cache,uint32_t native_base) {
    if(!cache)return;
    memset(cache,0,sizeof(*cache));
    /* Reject wrapping guest ranges, including a last record whose start is
     * representable but whose complete native snapshot would not be. */
    if(native_base && (uint64_t)native_base+RAVEN_LEADER_ZONE_COUNT*NATIVE_ZONE_BYTES<=UINT32_MAX)
        cache->native_base=native_base;
}
int raven_leader_cache_reset_zone(raven_leader_zone_cache *cache,uint32_t snapshot) {
    if(!cache || !cache->native_base || snapshot<cache->native_base)return 0;
    uint32_t offset=snapshot-cache->native_base;
    if(offset%NATIVE_ZONE_BYTES || offset/NATIVE_ZONE_BYTES>=RAVEN_LEADER_ZONE_COUNT)return 0;
    raven_leader_zone_reset(&cache->zones[offset/NATIVE_ZONE_BYTES]);return 1;
}
static int record_identity(const raven_leader_zone_cache *cache,uint32_t address,
                           unsigned *zone,unsigned *record) {
    if(!cache || !cache->native_base || address<cache->native_base)return 0;
    uint32_t offset=address-cache->native_base;
    unsigned z=offset/NATIVE_ZONE_BYTES,r=offset%NATIVE_ZONE_BYTES;
    if(z>=RAVEN_LEADER_ZONE_COUNT || r<NATIVE_RECORD_START)return 0;
    r-=NATIVE_RECORD_START;
    if(r%NATIVE_RECORD_BYTES)return 0;
    r/=NATIVE_RECORD_BYTES;
    if(!r || r>=RAVEN_LEADER_ZONE_RECORDS)return 0;
    *zone=z;*record=r;return 1;
}
int raven_leader_cache_capture(raven_leader_zone_cache *cache,uint32_t address,uint8_t selection) {
    unsigned zone,record;
    return record_identity(cache,address,&zone,&record) &&
        raven_leader_zone_capture(&cache->zones[zone],record,selection);
}
int raven_leader_cache_get(const raven_leader_zone_cache *cache,uint32_t address,uint8_t *selection) {
    unsigned zone,record;
    return record_identity(cache,address,&zone,&record) &&
        raven_leader_zone_get(&cache->zones[zone],record,selection);
}
int raven_leader_cache_forget(raven_leader_zone_cache *cache,uint32_t address) {
    unsigned zone,record;
    if(!record_identity(cache,address,&zone,&record))return 0;
    cache->zones[zone].selected[record]=0;return 1;
}
