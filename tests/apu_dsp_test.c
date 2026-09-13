#include "apu_state.h"
#include <stdio.h>
void *recomp_lookup(ULONG address) { (void)address; return NULL; }
void *recomp_lookup_manual(ULONG address) { (void)address; return NULL; }
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"APU DSP test failed at line %d: %s\n",__LINE__,#x); exit(1); } } while(0)
uint64_t mcpx_apu_mmio_read(MCPXAPUState *,uint64_t,unsigned);
void mcpx_apu_mmio_write(MCPXAPUState *,uint64_t,uint64_t,unsigned);
int main(void) {
    MCPXAPUState *d=calloc(1,sizeof(*d)); CHECK(d);
    d->ram_ptr=calloc(1,64u<<20); CHECK(d->ram_ptr); g_apu_ram_ptr=d->ram_ptr;
    qemu_mutex_init(&d->lock);
    mcpx_apu_dsp_init(d);
    /* Two physical scatter/gather pages contain the GP bootstrap program. */
    uint32_t pages[4]={0x2000,0,0x3000,0};
    memcpy(d->ram_ptr+0x1000,pages,sizeof(pages));
    uint32_t first=0xAB014780,last=0xCE000000;
    memcpy(d->ram_ptr+0x2000,&first,4); memcpy(d->ram_ptr+0x3FFC,&last,4);
    d->regs[NV_PAPU_GPSADDR]=0x1000; d->regs[NV_PAPU_GPSMAXSGE]=1;
    mcpx_apu_mmio_write(d,0x30000+NV_PAPU_GPRST,0,4);
    mcpx_apu_mmio_write(d,0x30000+NV_PAPU_GPRST,NV_PAPU_GPRST_GPRST|NV_PAPU_GPRST_GPDSPRST,4);
    CHECK(mcpx_apu_mmio_read(d,0x30000+NV_PAPU_GPPMEM,4)==0x014780);
    CHECK(mcpx_apu_mmio_read(d,0x30000+NV_PAPU_GPPMEM+0x7FF*4,4)==0);
    const uint32_t regions[]={0x30000+NV_PAPU_GPXMEM,0x30000+NV_PAPU_GPYMEM,
        0x30000+NV_PAPU_GPMIXBUF,0x50000+NV_PAPU_EPXMEM,0x50000+NV_PAPU_EPYMEM,0x50000+NV_PAPU_EPPMEM};
    for (unsigned i=0;i<sizeof(regions)/sizeof(regions[0]);++i) {
        uint32_t v=0x123456+i;
        mcpx_apu_mmio_write(d,regions[i]+4,v,4);
        CHECK(mcpx_apu_mmio_read(d,regions[i]+4,4)==v);
    }
    dsp_destroy(d->gp.dsp); dsp_destroy(d->ep.dsp); free(d->ram_ptr); free(d);
    puts("PASS: APU GP reset/bootstrap across SG pages, GP/EP X/Y/P and mix-buffer MMIO; no audio device or host input.");
    return 0;
}
