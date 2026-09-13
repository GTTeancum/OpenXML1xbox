/* Own-process DSP PCM output and optional diagnostic capture. No loopback or
 * host audio capture: these are precisely the samples submitted to XAudio2. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "apu_xaudio2.h"
extern void xbox_SetDeviceInterruptLine(uint32_t vector,int asserted);
void recomp_apu_irq_level(int asserted) { xbox_SetDeviceInterruptLine(5,asserted); }
void xml1_apu_trace_voices(const uint8_t *ram,unsigned base,unsigned a,unsigned b,unsigned c) {
    if(base>64u*1024*1024-256*128) { fprintf(stderr,"[APU VOICES] invalid base=%08X\n",base); return; }
    unsigned active=0,first=0xffff,state=0,format=0;
    for(unsigned i=0;i<256;++i) {
        uint32_t value; memcpy(&value,ram+base+i*128+0x54,4);
        if(value&(1u<<21)) { ++active; if(first==0xffff) { first=i;state=value;memcpy(&format,ram+base+i*128+4,4); } }
    }
    fprintf(stderr,"[APU VOICES] base=%08X heads=%04X/%04X/%04X active=%u first=%u state=%08X format=%08X\n",base,a,b,c,active,first,state,format);
}
void xml1_apu_trace_frame(unsigned gp,unsigned ep,const float *mix,unsigned count) {
    static unsigned frames,reported_nonzero;
    unsigned nonzero=0;
    for(unsigned i=0;i<count;++i) nonzero+=mix[i]!=0;
    ++frames;
    static int capture_mix=-1;
    static FILE *mix_file;
    if(capture_mix<0) {
        capture_mix=getenv("XML1_CAPTURE_APU_MIX")!=NULL;
        if(capture_mix) {
            mix_file=fopen("build/apu-premix-stereo.f32","wb");
            if(!mix_file) { fprintf(stderr,"[FATAL APU MIX] capture open failed\n"); _exit(4); }
        }
    }
    if(capture_mix) {
        if(count!=32*32) { fprintf(stderr,"[FATAL APU MIX] unexpected mix dimensions\n"); _exit(4); }
        float stereo[32][2];
        for(unsigned i=0;i<32;++i) { stereo[i][0]=mix[i]; stereo[i][1]=mix[32+i]; }
        if(fwrite(stereo,sizeof(stereo),1,mix_file)!=1) { fprintf(stderr,"[FATAL APU MIX] capture write failed\n"); _exit(4); }
        fflush(mix_file);
    }
    if(frames<=4||frames%4096==0||(nonzero&&!reported_nonzero)) {
        fprintf(stderr,"[APU DSP INPUT] frame=%u gp_reset=%08X ep_reset=%08X nonzero_mix_samples=%u\n",frames,gp,ep,nonzero);
        reported_nonzero|=nonzero!=0;
    }
}
void recomp_apu_dsp_output(const int16_t *samples,unsigned frames) {
    static int initialized,capture;
    static FILE *pcm,*timeline;
    static uint64_t total,nonzero,clipped;
    static unsigned peak;
    static LARGE_INTEGER start,frequency;
    if(!initialized) {
        const char *value=getenv("XML1_CAPTURE_DSP_PCM");
        capture=value&&!strcmp(value,"1");
        QueryPerformanceCounter(&start); QueryPerformanceFrequency(&frequency);
        if(capture) {
            pcm=fopen("build/apu-dsp-output.pcm","wb");
            timeline=fopen("build/apu-dsp-output.csv","wb");
            if(!pcm||!timeline) { fprintf(stderr,"[FATAL APU OUTPUT] capture open failed\n"); _exit(4); }
            fprintf(timeline,"wall_seconds,sample_frames,nonzero_samples,clipped_samples,peak\n");
        }
        initialized=1;
    }
    if(frames!=256||!xa2_is_active()) { fprintf(stderr,"[FATAL APU OUTPUT] invalid frame count or inactive XAudio2\n"); _exit(4); }
    unsigned retries=0;
    while(!xa2_submit_samples(samples,(int)frames)) {
        if(++retries>100) { fprintf(stderr,"[FATAL APU OUTPUT] XAudio2 submission stalled\n"); _exit(4); }
        if(!xa2_wait_for_buffer(100)) { fprintf(stderr,"[FATAL APU OUTPUT] XAudio2 completion timeout/device error\n"); _exit(4); }
    }
    for(unsigned i=0;i<frames*2;++i) {
        int value=samples[i]; unsigned magnitude=value<0?(unsigned)-value:(unsigned)value;
        nonzero+=value!=0; clipped+=value==-32768||value==32767;
        if(magnitude>peak) peak=magnitude;
    }
    total+=frames;
    if(capture) {
        if(fwrite(samples,4,frames,pcm)!=frames) { fprintf(stderr,"[FATAL APU OUTPUT] capture write failed\n"); _exit(4); }
        fflush(pcm);
    }
    if(total==256||total%48000==0) {
        LARGE_INTEGER now; QueryPerformanceCounter(&now);
        double elapsed=(double)(now.QuadPart-start.QuadPart)/frequency.QuadPart;
        fprintf(stderr,"[APU PCM] wall=%.3f frames=%llu nonzero=%llu clipped=%llu peak=%u\n",elapsed,total,nonzero,clipped,peak);
        if(capture) { fprintf(timeline,"%.6f,%llu,%llu,%llu,%u\n",elapsed,total,nonzero,clipped,peak); fflush(timeline); }
    }
}
