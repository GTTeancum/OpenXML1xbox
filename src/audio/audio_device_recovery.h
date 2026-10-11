#pragma once
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include "apu_xaudio2.h"

typedef struct {
    int recovering;
    ULONGLONG next_attempt;
    LARGE_INTEGER frequency, deadline;
    uint64_t silent_frames;
} xml1_audio_device_state;

/* With no endpoint, keep the guest DSP clock moving at 48 kHz. Never queue
 * old audio for replay after reconnection or alter Windows device settings. */
static void xml1_audio_pace_silence(xml1_audio_device_state *state,unsigned frames) {
    LARGE_INTEGER now;QueryPerformanceCounter(&now);
    if(!state->frequency.QuadPart) QueryPerformanceFrequency(&state->frequency);
    if(!state->deadline.QuadPart || now.QuadPart-state->deadline.QuadPart>state->frequency.QuadPart/10)
        state->deadline=now;
    state->deadline.QuadPart+=(LONGLONG)frames*state->frequency.QuadPart/48000;
    while(now.QuadPart<state->deadline.QuadPart) {
        LONGLONG ms=(state->deadline.QuadPart-now.QuadPart)*1000/state->frequency.QuadPart;
        if(ms>1) Sleep((DWORD)(ms-1)); else SwitchToThread();
        QueryPerformanceCounter(&now);
    }
    state->silent_frames+=frames;
}

/* Single producer. Return 1 only when the pending PCM was actually accepted.
 * Device recovery and no-device pacing run outside the guest APU mutex. */
static int xml1_audio_submit(xml1_audio_device_state *state,const int16_t *samples,unsigned frames) {
    ULONGLONG blocked_at=GetTickCount64();int waiting_logged=0,restarted=0;
    for(;;) {
        if(!xa2_is_active()) {
            state->recovering=1;
            if(GetTickCount64()>=state->next_attempt) {
                state->next_attempt=GetTickCount64()+1000;
                if(xa2_init()) {
                    fprintf(stderr,"[APU OUTPUT] default audio device reopened; %llu frames elapsed without an output device\n",state->silent_frames);
                    state->recovering=0;state->silent_frames=0;state->deadline.QuadPart=0;
                    blocked_at=GetTickCount64();
                    waiting_logged=0;
                }
            }
            if(!xa2_is_active()) {xml1_audio_pace_silence(state,frames);return 0;}
        }
        if(xa2_submit_samples(samples,(int)frames)) {
            if(waiting_logged) fprintf(stderr,"[APU OUTPUT] queue recovered after %llu ms; pending PCM accepted once\n",GetTickCount64()-blocked_at);
            return 1;
        }
        int32_t error=xa2_get_error();
        if(error || GetTickCount64()-blocked_at>=1000) {
            fprintf(stderr,"[APU OUTPUT] reopening default audio device after %llu ms, HRESULT=%08X\n",GetTickCount64()-blocked_at,(unsigned)error);
            xa2_shutdown();state->recovering=1;state->next_attempt=0;
            /* A failed new device must not make one DSP block retry forever. */
            if(restarted) {state->next_attempt=GetTickCount64()+1000;xml1_audio_pace_silence(state,frames);return 0;}
            restarted=1;
            continue;
        }
        if(!xa2_wait_for_buffer(100) && GetTickCount64()-blocked_at>=100 && !waiting_logged) {
            waiting_logged=1;
            fprintf(stderr,"[APU OUTPUT] waiting for audio-device handoff; retaining pending PCM\n");
        }
    }
}
