/* Real XAudio2 engine lifecycle, silent PCM, process-local fault injection.
 * Does not disconnect devices, change Windows settings or generate UI input. */
#define RECOMP_APU_NATIVE_DSP_OUTPUT 1
#include "../external/xboxrecomp/src/apu/apu_xaudio2.c"
#include "audio_device_recovery.h"
int main(void) {
    xml1_audio_device_state state={0};int16_t silence[512]={0};unsigned accepted=0;
    if(!xa2_init()) {fprintf(stderr,"No default audio device available for live test\n");return 77;}
    ULONGLONG start=GetTickCount64();
    for(unsigned block=0;block<600;++block) {
        if(block==180) {
            IXAudio2_StopEngine(g_xa2);
            cb_critical(&g_xa2_engine_callback,XAUDIO2_E_DEVICE_INVALIDATED);
        }
        if(block==360) IXAudio2_StopEngine(g_xa2);
        accepted+=xml1_audio_submit(&state,silence,256);
    }
    ULONGLONG elapsed=GetTickCount64()-start;
    xa2_shutdown();
    if(accepted!=600 || elapsed<2000 || elapsed>15000) return 1;
    printf("PASS: real XAudio2 critical-error recovery and stopped-engine recovery; %u PCM blocks accepted, %llu ms; no device settings changed\n",accepted,elapsed);
    return 0;
}
