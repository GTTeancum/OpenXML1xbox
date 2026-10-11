#include "engine/saves/raven_saved_stats_stream.h"
#include <stdio.h>
#include <stdlib.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x); return 1; } } while(0)
static unsigned char bytes[0x2fc00];
static void marker(size_t at, const char* text) {
    memset(bytes + at, '*', 52);
    bytes[at] = bytes[at + 51] = '\n';
    memcpy(bytes + at + 1, text, strlen(text) + 1);
}
int main(int argc, char** argv) {
    size_t offset = 999;
    memset(bytes, 0xa5, sizeof(bytes));
    marker(0,"[SAVEGAMEBEGIN: fixture]");
    marker(1112,"[DANGERROOM: COURSES]");
    marker(1364,"[DANGERROOM: GRADES]");
    marker(1424,"[DANGERROOM: CREDITS]");
    CHECK(raven_saved_stats_character_offset(bytes,sizeof(bytes),&offset));
    CHECK(offset == 1478 && bytes[offset] == 0xa5);
    for(size_t size=0; size<=1478; ++size) {
        offset=999;
        CHECK(!raven_saved_stats_character_offset(bytes,size,&offset) && offset==999);
    }
    CHECK(!raven_saved_stats_character_offset(NULL,sizeof(bytes),&offset));
    CHECK(!raven_saved_stats_character_offset(bytes,sizeof(bytes),NULL));
    CHECK(!raven_saved_stats_character_offset(bytes,sizeof(bytes)+1,&offset));
    const size_t positions[]={0,1,1112,1113,1364,1365,1424,1425,1475};
    for(size_t i=0;i<sizeof(positions)/sizeof(*positions);++i) {
        unsigned char saved=bytes[positions[i]];
        bytes[positions[i]]=0xff; offset=999;
        CHECK(!raven_saved_stats_character_offset(bytes,sizeof(bytes),&offset) && offset==999);
        bytes[positions[i]]=saved;
    }
    if(argc==2) {
        /* Disk envelope is separate from the decoded payload contract.
         * This optional read-only check targets the known retail fixture. */
        FILE* f=fopen(argv[1],"rb"); CHECK(f);
        CHECK(fseek(f,24,SEEK_SET)==0);
        size_t n=fread(bytes,1,sizeof(bytes),f);
        CHECK(!ferror(f)); fclose(f);
        CHECK(n==sizeof(bytes));
        CHECK(raven_saved_stats_character_offset(bytes,n,&offset) && offset==1478);
        puts("PASS existing retail save: validated native prefix and character boundary (read only)");
    }
    puts("PASS saved-stats prefix: section boundaries, truncation, corruption and unchanged result on rejection; character decoding/integration not tested");
    return 0;
}
