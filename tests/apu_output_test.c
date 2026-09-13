#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void recomp_apu_dsp_output(const int16_t *,unsigned);
void xbox_SetDeviceInterruptLine(uint32_t vector,int asserted) { (void)vector; (void)asserted; }
static int attempts,accepted;
static int16_t expected[512],received[512];
int xa2_is_active(void) { return 1; }
int xa2_submit_samples(const int16_t *samples,int frames) {
    if(frames!=256||memcmp(samples,expected,sizeof(expected))) abort();
    if(++attempts<=2) return 0;
    memcpy(received,samples,sizeof(received)); ++accepted; return 1;
}
int main(void) {
    _putenv_s("XML1_CAPTURE_DSP_PCM","0");
    for(unsigned i=0;i<512;++i) expected[i]=(int16_t)(i*129-32768);
    recomp_apu_dsp_output(expected,256);
    if(attempts!=3||accepted!=1||memcmp(received,expected,sizeof(expected))) return 1;
    puts("PASS: complete DSP stereo block preserved across output backpressure; no audio device opened");
    return 0;
}
