#include "engine/actors/raven_leader_stream.h"
#include <string.h>

static const unsigned char signature[8]={'X','M','L','1','L','D','R',0};
static unsigned read32(const unsigned char *p) {
    return (unsigned)p[0]|(unsigned)p[1]<<8|(unsigned)p[2]<<16|(unsigned)p[3]<<24;
}
static void write32(unsigned char *p,unsigned v) {
    for(unsigned i=0;i<4;++i)p[i]=(unsigned char)(v>>(i*8));
}
static int valid(const unsigned char *data,int *present) {
    *present=0;
    for(unsigned z=0;z<RAVEN_LEADER_ZONE_COUNT;++z)
        for(unsigned i=0;i<RAVEN_LEADER_ZONE_RECORDS;++i) {
            unsigned value=data[z*RAVEN_LEADER_ZONE_RECORDS+i];
            if(value>14||(!i&&value))return 0;
            if(value)*present=1;
        }
    return 1;
}
int raven_leader_stream_write(const raven_leader_zone_cache *cache,void *output,size_t room) {
    if(!cache)return -1;
    const unsigned char *data=(const unsigned char *)cache->zones;
    int present;
    if(!valid(data,&present))return -1;
    if(!present)return 0; /* Do not grow saves without imported leader state. */
    if(!cache->native_base||!output||room<RAVEN_LEADER_STREAM_BYTES)return -1;
    unsigned char *p=(unsigned char *)output;
    memcpy(p,signature,8);write32(p+8,1);write32(p+12,sizeof(cache->zones));
    memcpy(p+16,data,sizeof(cache->zones));return RAVEN_LEADER_STREAM_BYTES;
}
int raven_leader_stream_read(raven_leader_zone_cache *cache,const void *input,size_t room) {
    if(!cache||(!input&&room))return -1;
    const unsigned char *p=(const unsigned char *)input;
    if(room<8||memcmp(p,signature,8))return 0;
    if(!cache->native_base||room<RAVEN_LEADER_STREAM_BYTES||read32(p+8)!=1||
        read32(p+12)!=sizeof(cache->zones))return -1;
    int present;
    if(!valid(p+16,&present))return -1;
    /* Validate the complete payload before replacing any live selections.
     * The native cache loader already resets state for legacy/no-tag saves. */
    memcpy(cache->zones,p+16,sizeof(cache->zones));return RAVEN_LEADER_STREAM_BYTES;
}
