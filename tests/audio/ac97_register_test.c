#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
void xml1_ac97_reset(void);
uint64_t xml1_ac97_read(uint32_t,unsigned);
void xml1_ac97_write(uint32_t,uint64_t,unsigned);
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"AC97 check failed: line %d: %s\n",__LINE__,#x); return 1; } } while(0)
int main(void) {
    const unsigned bases[]={0x100,0x110,0x120,0x170};
    xml1_ac97_reset();
    CHECK(xml1_ac97_read(0x130,4)==0x100);
    xml1_ac97_write(0x130,0xFFFFFFFF,4);
    CHECK(xml1_ac97_read(0x130,4)==0x100);
    for (unsigned c=0;c<4;++c) {
        unsigned b=bases[c];
        CHECK(xml1_ac97_read(b+6,2)==1);
        xml1_ac97_write(b,0x12340000+c*4096,4);
        xml1_ac97_write(b+5,17,1);
        xml1_ac97_write(b+11,0x1D,1);
        CHECK(xml1_ac97_read(b+11,1)==0x1D);
        xml1_ac97_write(b+11,2,1);
        CHECK(xml1_ac97_read(b+11,1)==0x1C); /* RR self-clears; retain old IRQ enables */
        CHECK(xml1_ac97_read(b,4)==0);
        CHECK(xml1_ac97_read(b+4,2)==0);
        CHECK(xml1_ac97_read(b+6,2)==1);
        CHECK(xml1_ac97_read(b+8,2)==0);
        CHECK(xml1_ac97_read(b+10,1)==0);
        xml1_ac97_write(b+6,0xFFFF,2);
        CHECK(xml1_ac97_read(b+6,2)==1); /* DCH is read-only */
        CHECK(xml1_ac97_read(0x130,4)==0x100);
    }
    puts("PASS: four AC97 channel resets self-clear, preserve interrupt enables, reset DMA registers and retain read-only status.");
    return 0;
}
