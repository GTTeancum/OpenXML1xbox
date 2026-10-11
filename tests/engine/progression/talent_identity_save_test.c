#include "engine/progression/talent_identity_save.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
int main(void) {
    xml1_saved_talent_identity entries[254]={0},out[254],sentinel[254];
    unsigned char bytes[40000];
    for(unsigned i=0;i<254;++i) {
        entries[i].id=(uint8_t)(i+1);
        snprintf(entries[i].name,32,"imported_%u",i);
        strcpy(entries[i].source,"data/talents/example.xml");
        snprintf(entries[i].selector,64,"Talent:imported_%u;Talents",i);
    }
    size_t length=xml1_talent_identities_write(bytes,sizeof(bytes),entries,254);CHECK(length);
    unsigned count=999;
    CHECK(xml1_talent_identities_read(bytes,length,out,254,&count)==length&&count==254);
    CHECK(!memcmp(entries,out,sizeof(entries)));
    /* This proves only serialization; guest registration/remapping is tested
     * separately once integrated, not inferred from a codec round trip. */
    memset(sentinel,0xa5,sizeof(sentinel));
    for(size_t truncated=0;truncated<length;++truncated) {
        memcpy(out,sentinel,sizeof(out));count=999;
        CHECK(!xml1_talent_identities_read(bytes,truncated,out,254,&count));
        CHECK(count==999&&!memcmp(out,sentinel,sizeof(out)));
    }
    entries[253].id=entries[0].id;CHECK(!xml1_talent_identities_write(bytes,sizeof(bytes),entries,254));
    entries[253].id=254;strcpy(entries[253].name,entries[0].name);
    CHECK(!xml1_talent_identities_write(bytes,sizeof(bytes),entries,254));
    CHECK(!xml1_talent_identities_write(bytes,7,NULL,0));
    CHECK(xml1_talent_identities_write(bytes,8,NULL,0)==8);
    CHECK(xml1_talent_identities_read(bytes,8,NULL,0,&count)==8&&count==0);
    bytes[4]=2;CHECK(!xml1_talent_identities_read(bytes,8,NULL,0,&count));
    puts("PASS talent identity codec: 254 declarations, exact source/selector paths, complete truncation rejection, transactional output, duplicate rejection");
}
