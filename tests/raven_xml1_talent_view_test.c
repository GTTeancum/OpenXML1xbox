#include "raven_xml1_talent_view.h"
#include <stdio.h>
#include <string.h>
static unsigned char memory[0x6000];
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
    strcpy((char*)memory+at+0x18,name);memory[0x100+4+0x1c58+index]=(unsigned char)id;
}
static void rank_node(unsigned stats,unsigned index,unsigned key,unsigned packed) {
    unsigned at=stats+0x30+index*16;
    word(at+0x10,0x3fffffff);word(at+0x14,0x3fffffff);
    memory[at+0x18]=(unsigned char)key;
    memory[stats+0x30+index*4+0x168]=(unsigned char)packed;
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
    CHECK(raven_xml1_talent_rank(read_bytes,0,0xfffffff0,107,&rank)==RAVEN_INVALID&&rank==1);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,255,&rank)==RAVEN_INVALID);
    word(0x3000+0x30+0x10,0);
    CHECK(raven_xml1_talent_rank(read_bytes,0,0x3000,106,&rank)==RAVEN_INVALID);
    word(0x100+4+0x10,0);
    CHECK(raven_xml1_talent_id(read_bytes,0,0x100,"missing",&id)==RAVEN_INVALID);
    puts("XML1 talent view: ownership, zero/missing, case, packed rank and corrupt-state checks passed");
    return 0;
}
