#include "engine/actors/raven_leader_stream.h"
#include <stdio.h>
#include <string.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL leader stream line %d\n",__LINE__);return 1;}}while(0)
int main(void) {
    raven_leader_zone_cache source,target,before;
    unsigned char bytes[RAVEN_LEADER_STREAM_BYTES+32],copy[sizeof(bytes)];
    raven_leader_cache_bind(&source,0x100000);
    raven_leader_cache_bind(&target,0x200000);
    memset(bytes,0xa5,sizeof(bytes));memcpy(copy,bytes,sizeof(bytes));
    CHECK(raven_leader_stream_write(&source,bytes,sizeof(bytes))==0);
    CHECK(!memcmp(bytes,copy,sizeof(bytes)));
    for(unsigned z=0;z<7;++z)for(unsigned r=1;r<600;++r)
        CHECK(raven_leader_cache_capture(&source,0x100000+z*0x39bc+4+r*20,(uint8_t)((z+r)%14)));
    CHECK(raven_leader_stream_write(&source,bytes,RAVEN_LEADER_STREAM_BYTES-1)==-1);
    CHECK(!memcmp(bytes,copy,sizeof(bytes)));
    CHECK(raven_leader_stream_write(&source,bytes,sizeof(bytes))==RAVEN_LEADER_STREAM_BYTES);
    CHECK(!memcmp(bytes+RAVEN_LEADER_STREAM_BYTES,copy+RAVEN_LEADER_STREAM_BYTES,32));
    CHECK(raven_leader_stream_read(&target,bytes,sizeof(bytes))==RAVEN_LEADER_STREAM_BYTES);
    CHECK(target.native_base==0x200000&&!memcmp(target.zones,source.zones,sizeof(source.zones)));
    before=target;
    for(unsigned n=8;n<RAVEN_LEADER_STREAM_BYTES;++n) {
        CHECK(raven_leader_stream_read(&target,bytes,n)==-1);
        CHECK(!memcmp(&target,&before,sizeof(target)));
    }
    memcpy(copy,bytes,sizeof(bytes));
    const unsigned bad_offsets[]={8,12,16,16+599,16+6*600};
    for(unsigned i=0;i<sizeof(bad_offsets)/sizeof(bad_offsets[0]);++i) {
        bytes[bad_offsets[i]]=255;
        CHECK(raven_leader_stream_read(&target,bytes,sizeof(bytes))==-1);
        CHECK(!memcmp(&target,&before,sizeof(target)));
        memcpy(bytes,copy,sizeof(bytes));
    }
    memset(bytes,0xa5,sizeof(bytes));
    CHECK(!raven_leader_stream_read(&target,bytes,sizeof(bytes)));
    CHECK(!memcmp(&target,&before,sizeof(target)));
    puts("PASS leader stream: absent omission, all zones/records, relocated native owner, truncation, malformed payload, atomic rejection and following-byte preservation");
    return 0;
}
