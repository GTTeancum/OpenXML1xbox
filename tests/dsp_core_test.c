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
    return 0;
}
