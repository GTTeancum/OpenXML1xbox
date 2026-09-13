#include "apu_state.h"
#include <stdio.h>
void *recomp_lookup(ULONG address) { (void)address; return NULL; }
void *recomp_lookup_manual(ULONG address) { (void)address; return NULL; }
void recomp_apu_irq_level(int level) { (void)level; }
void xml1_apu_trace_frame(unsigned a,unsigned b,const float *c,unsigned n) { (void)a;(void)b;(void)c;(void)n; }
void xml1_apu_trace_voices(const uint8_t *ram,unsigned base,unsigned a,unsigned b,unsigned c) { (void)ram;(void)base;(void)a;(void)b;(void)c; }
void mcpx_apu_monitor_frame(MCPXAPUState *);
static MCPXAPUState *state;
static int available,called;
static DWORD WINAPI probe(void *unused) {
    (void)unused; available=TryEnterCriticalSection(&state->lock.cs);
    if(available) LeaveCriticalSection(&state->lock.cs);
    return 0;
}
static void probe_lock(void) {
    HANDLE thread=CreateThread(NULL,0,probe,NULL,0,NULL);
    if(!thread || WaitForSingleObject(thread,2000)!=WAIT_OBJECT_0) abort();
    CloseHandle(thread);
}
void recomp_apu_dsp_output(const int16_t *samples,unsigned frames) {
    if(frames!=256 || samples==&state->monitor.frame_buf[0][0]) abort();
    for(unsigned i=0;i<512;++i) if(samples[i]!=(int16_t)(i-256)) abort();
    probe_lock(); if(!available) abort();
    ++called;
}
int main(void) {
    state=calloc(1,sizeof(*state)); if(!state) return 1;
    qemu_mutex_init(&state->lock); state->ep_frame_div=7;
    for(unsigned i=0;i<512;++i) ((int16_t *)state->monitor.frame_buf)[i]=(int16_t)(i-256);
    qemu_mutex_lock(&state->lock); mcpx_apu_monitor_frame(state);
    if(called!=1) return 2;
    probe_lock(); if(available) return 3;
    for(unsigned i=0;i<512;++i) if(((int16_t *)state->monitor.frame_buf)[i]) return 4;
    qemu_mutex_unlock(&state->lock); DeleteCriticalSection(&state->lock.cs);free(state);
    puts("PASS: completed PCM copied, device mutex released during output and reacquired afterward; no audio device");
    return 0;
}
