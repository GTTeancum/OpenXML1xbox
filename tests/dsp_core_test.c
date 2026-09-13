#include "dsp.h"
#include "dsp_dma_regs.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static unsigned char scratch[0x4000];
static unsigned transfers;
#define CHECK(v) do { if (!(v)) { fprintf(stderr,"DSP CHECK failed: %s:%d: %s\n",__FILE__,__LINE__,#v); exit(1); } } while (0)
static void memory(void *opaque,uint8_t *ptr,uint32_t address,size_t bytes,bool write) {
    CHECK(opaque==scratch); CHECK((uint64_t)address+bytes<=sizeof(scratch));
    if (write) memcpy(scratch+address,ptr,bytes); else memcpy(ptr,scratch+address,bytes);
    ++transfers;
}
static void fifo(void *opaque,uint8_t *ptr,unsigned index,size_t bytes,bool write) {
    (void)opaque;(void)ptr;(void)index;(void)bytes;(void)write; CHECK(0);
}
static void dma(DSPState *d,bool out) {
    const uint32_t node[7]={NODE_POINTER_EOL,(2u<<10)|(15u<<5)|(out?NODE_CONTROL_DIRECTION:0),4,0x200,0x100,0,sizeof(scratch)-1};
    for (unsigned i=0;i<7;++i) dsp_write_memory(d,'X',0x100+i,node[i]);
    dsp_dma_write(&d->dma,DMA_NEXT_BLOCK,0x100);
    dsp_dma_write(&d->dma,DMA_CONTROL,DMA_CONTROL_ACTION_START);
    CHECK(d->dma.eol);
}
static unsigned extractu_tests(DSPState *d) {
    /* Independent bit-by-bit reference, including source/destination aliasing. */
    const uint64_t values[]={0,UINT64_C(0xffffffffffffff),UINT64_C(0x80000000000000),UINT64_C(0xabcdef12345678),UINT64_C(0x0000000003a800)};
    const unsigned widths[]={0,1,7,23,24,25,47,48,55,56};
    unsigned cases=0;
    for(unsigned s=0;s<2;++s) for(unsigned t=0;t<2;++t)
    for(unsigned v=0;v<5;++v) for(unsigned w=0;w<10;++w)
    for(unsigned off=0;off+widths[w]<=56;++off) for(unsigned scale=0;scale<3;++scale) {
        dsp_reset(d); dsp_sync_to_vm(d);
        d->core.pc=0;
        d->core.registers[DSP_REG_SR]=0xc3|(scale<<10);
        d->core.registers[s?DSP_REG_B0:DSP_REG_A0]=(uint32_t)values[v]&0xffffff;
        d->core.registers[s?DSP_REG_B1:DSP_REG_A1]=(uint32_t)(values[v]>>24)&0xffffff;
        d->core.registers[s?DSP_REG_B2:DSP_REG_A2]=(uint32_t)(values[v]>>48)&255;
        dsp_sync_from_vm(d);
        dsp_write_memory(d,'P',0,0x0c1880|(s<<4)|t);
        dsp_write_memory(d,'P',1,(widths[w]<<12)|off);
        dsp_step(d); dsp_sync_to_vm(d);
        uint64_t want=0;
        for(unsigned bit=0;bit<widths[w];++bit)
            if((values[v]>>(off+bit))&1) want|=UINT64_C(1)<<bit;
        CHECK(d->core.pc==2);
        CHECK(d->core.registers[t?DSP_REG_B0:DSP_REG_A0]==(want&0xffffff));
        CHECK(d->core.registers[t?DSP_REG_B1:DSP_REG_A1]==((want>>24)&0xffffff));
        CHECK(d->core.registers[t?DSP_REG_B2:DSP_REG_A2]==((want>>48)&255));
        if(s!=t) {
            uint64_t unchanged=((uint64_t)d->core.registers[s?DSP_REG_B2:DSP_REG_A2]<<48)|
                ((uint64_t)d->core.registers[s?DSP_REG_B1:DSP_REG_A1]<<24)|d->core.registers[s?DSP_REG_B0:DSP_REG_A0];
            CHECK(unchanged==values[v]);
        }
        unsigned signbit=scale==0?47:scale==1?48:46;
        unsigned extension=0;
        for(unsigned bit=signbit+1;bit<56;++bit)
            if(((want>>bit)&1)!=((want>>signbit)&1)) extension=1;
        unsigned unnormalized=((want>>signbit)&1)==((want>>(signbit-1))&1);
        unsigned sr=0xc0|(scale<<10)|(extension<<5)|(unnormalized<<4)|(((unsigned)(want>>55)&1)<<3)|((want==0)<<2);
        CHECK(d->core.registers[DSP_REG_SR]==sr);
        ++cases;
    }
    return cases;
}
int main(void) {
    DSPState *d=dsp_init(scratch,memory,fifo,true); CHECK(d);
    unsigned cases=0;
    const int32_t seeds[]={0,1,-1,0x7FFFFF,-0x800000};
    for (unsigned dest=0;dest<2;++dest) for (unsigned s=0;s<5;++s) for (unsigned x=0;x<64;++x) {
        dsp_reset(d); dsp_sync_to_vm(d);
        d->core.pc=0;
        d->core.registers[dest?DSP_REG_B0:DSP_REG_A0]=0;
        d->core.registers[dest?DSP_REG_B1:DSP_REG_A1]=(uint32_t)seeds[s]&0xFFFFFF;
        d->core.registers[dest?DSP_REG_B2:DSP_REG_A2]=seeds[s]<0?255:0;
        dsp_sync_from_vm(d);
        /* DSP56300 ADD #xx,A/B, with the six-bit immediate and destination bit. */
        dsp_write_memory(d,'P',0,0x014080|(x<<8)|(dest<<3));
        dsp_step(d); dsp_sync_to_vm(d);
        int64_t expected=(int64_t)seeds[s]+x;
        CHECK(d->core.pc==1);
        CHECK(d->core.registers[dest?DSP_REG_B1:DSP_REG_A1]==((uint32_t)expected&0xFFFFFF));
        CHECK(d->core.registers[dest?DSP_REG_B2:DSP_REG_A2]==(((uint64_t)expected>>24)&255));
        ++cases;
    }
    unsigned extracts=extractu_tests(d);
    memset(scratch,0x5A,sizeof(scratch));
    const uint32_t data[4]={0x123456,0xABCDEF,0x800001,0xFFFFFF};
    memcpy(scratch+0x100,data,sizeof(data));
    dma(d,false);
    for (unsigned i=0;i<4;++i) CHECK(dsp_read_memory(d,'X',0x200+i)==data[i]);
    CHECK(scratch[0xFF]==0x5A&&scratch[0x110]==0x5A);
    for (unsigned i=0;i<4;++i) dsp_write_memory(d,'X',0x200+i,data[i]^0x654321);
    dma(d,true);
    for (unsigned i=0;i<4;++i) { uint32_t v; memcpy(&v,scratch+0x100+4*i,4); CHECK(v==(data[i]^0x654321)); }
    CHECK(scratch[0xFF]==0x5A&&scratch[0x110]==0x5A);
    uint32_t boot=0xAB014780; memcpy(scratch,&boot,4);
    dsp_bootstrap(d); CHECK(dsp_read_memory(d,'P',0)==0x014780);
    dsp_destroy(d);
    printf("PASS: %u executed DSP arithmetic vectors, bidirectional scratch DMA with guards, bootstrap masking (%u transfers).\n",cases,transfers);
    printf("PASS: %u EXTRACTU vectors including flags, field boundaries and accumulator aliasing.\n",extracts);
    return 0;
}
