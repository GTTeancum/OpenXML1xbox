/* Own-process DSP PCM output and optional diagnostic capture. No loopback or
 * host audio capture: these are precisely the samples submitted to XAudio2. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "apu_xaudio2.h"
void xml1_apu_trace_frame(unsigned gp,unsigned ep,const float *mix,unsigned count) {
    static unsigned frames,reported_nonzero;
    unsigned nonzero=0;
    for(unsigned i=0;i<count;++i) nonzero+=mix[i]!=0;
    ++frames;
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
        Sleep(1);
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
