#include "apu_state.h"
#include <stdio.h>
#include <math.h>
void *recomp_lookup(ULONG address) { (void)address; return NULL; }
void *recomp_lookup_manual(ULONG address) { (void)address; return NULL; }
int xml1_apu_resample_probe(MCPXAPUState *,uint16_t,float (*)[2],int,float);
void mcpx_apu_vp_finalize(MCPXAPUState *);
void mcpx_apu_vp_reset(MCPXAPUState *);
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"FAIL line %d\n",__LINE__); return 1; } } while(0)
static void voice(MCPXAPUState *d,unsigned v) {
    uint32_t *p=(uint32_t *)(d->ram_ptr+0x1000+v*NV_PAVS_SIZE);
    memset(p,0,NV_PAVS_SIZE);
    p[NV_PAVS_VOICE_CFG_FMT/4]=NV_PAVS_VOICE_CFG_FMT_STEREO|NV_PAVS_VOICE_CFG_FMT_LOOP|(1u<<16)|(1u<<28)|(1u<<30);
    p[NV_PAVS_VOICE_PAR_STATE/4]=NV_PAVS_VOICE_PAR_STATE_ACTIVE_VOICE;
    p[NV_PAVS_VOICE_PAR_NEXT/4]=65535;
    if(d->vp.filters[v].resampler) src_reset(d->vp.filters[v].resampler);
}
int main(void) {
    MCPXAPUState *d=calloc(1,sizeof(*d)); CHECK(d);
    d->ram_ptr=calloc(1,64u<<20); CHECK(d->ram_ptr); g_apu_ram_ptr=d->ram_ptr;
    d->regs[NV_PAPU_VPVADDR]=0x1000; d->regs[NV_PAPU_VPSGEADDR]=0x10000;
    for(unsigned p=0;p<64;++p) *(uint32_t *)(d->ram_ptr+0x10000+p*8)=0x20000+p*4096;
    int16_t *pcm=(int16_t *)(d->ram_ptr+0x20000);
    for(unsigned i=0;i<65536;++i) { pcm[2*i]=(int16_t)(12000*sin(i*6.283185307179586/48)); pcm[2*i+1]=-pcm[2*i]; }
    const float rates[]={0.5f,1.0f,48000.0f/44100.0f,2.0f};
    static float a[4096][2],b[4096][2];
    for(unsigned r=0;r<4;++r) {
        voice(d,0); voice(d,1);
        for(unsigned i=0;i<4096;i+=32) CHECK(xml1_apu_resample_probe(d,0,a+i,32,rates[r])==32);
        for(unsigned i=0;i<4096;i+=64) CHECK(xml1_apu_resample_probe(d,1,b+i,64,rates[r])==64);
        unsigned crossings=0;
        for(unsigned i=256;i<4096;++i) {
            CHECK(fabs(a[i][0]+a[i][1])<0.00001);
            CHECK(fabs(a[i][0]-b[i][0])<0.00001);
            crossings+=a[i-1][0]<=0 && a[i][0]>0;
        }
        CHECK(fabs(crossings-3840.0/(48*rates[r]))<2);
        uint32_t consumed=*(uint32_t *)(d->ram_ptr+0x1000+NV_PAVS_VOICE_PAR_OFFSET)&NV_PAVS_VOICE_PAR_OFFSET_CBO;
        CHECK(fabs(consumed-4096.0/rates[r])<128);
        printf("rate=%g consumed=%u crossings=%u\n",rates[r],consumed,crossings);
    }
    memset(pcm,0,65536*4); mcpx_apu_vp_reset(d);
    CHECK(xml1_apu_resample_probe(d,0,a,32,1.0f)==32);
    for(unsigned i=0;i<32;++i) CHECK(a[i][0]==0 && a[i][1]==0);
    mcpx_apu_vp_finalize(d); CHECK(!d->vp.filters[0].resampler && !d->vp.filters[1].resampler);
    free(d->ram_ptr);free(d);
    puts("PASS: actual VP source consumption, pitch, stereo, reset and chunk-independent continuity; no host audio device");
    return 0;
}
