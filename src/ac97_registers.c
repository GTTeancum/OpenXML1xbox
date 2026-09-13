/* AC'97 bus-master startup registers. Register/reset semantics checked against
 * xemu hw/audio/ac97.c at 75650bd8cd91945f7b79774e2cee0b200ca373ff.
 * Audio DMA advancement and interrupts are not implemented by this register layer;
 * actual DSP output is handled separately by the APU monitor/XAudio2 backend. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static uint8_t regs[4096];
static int initialized;
static const unsigned channels[]={0x100,0x110,0x120,0x170};
void xml1_ac97_reset(void) {
    memset(regs,0,sizeof(regs));
    regs[0x131]=1; /* primary codec ready, global status bit 8 */
    for (unsigned i=0;i<4;++i) regs[channels[i]+6]=1; /* DMA controller halted */
    initialized=1;
}
static void bounds(uint32_t address,unsigned size) {
    if (!initialized) xml1_ac97_reset();
    if (!size||size>8||(uint64_t)address+size>sizeof(regs)) {
        fprintf(stderr,"[AC97] invalid register access %X/%u\n",address,size); _exit(4);
    }
}
uint64_t xml1_ac97_read(uint32_t address,unsigned size) {
    bounds(address,size); uint64_t value=0; memcpy(&value,regs+address,size); return value;
}
void xml1_ac97_write(uint32_t address,uint64_t value,unsigned size) {
    bounds(address,size);
    for (unsigned i=0;i<4;++i) {
        unsigned base=channels[i];
        if (address==base+11&&size==1) {
            if (value&2) {
                uint8_t enables=regs[base+11]&0x1C;
                memset(regs+base,0,12); regs[base+6]=1; regs[base+11]=enables;
                fprintf(stderr,"[AC97] channel %u reset completed\n",i);
            } else {
                regs[address]=(uint8_t)value&0x1F;
                if (value&1) regs[base+6]&=(uint8_t)~1u; else regs[base+6]|=1;
            }
            return;
        }
        if (address==base+6&&(size==1||size==2)) {
            regs[address]&=(uint8_t)~(value&0x1C); /* W1C; retain read-only bits */
            return;
        }
    }
    if (address==0x130&&size==4) return; /* no asserted W1C IRQ bits yet */
    memcpy(regs+address,&value,size);
}
