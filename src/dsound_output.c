/* Output thread for the DirectSound replacement: mixes 256-frame blocks and
 * hands them to XAudio2. xml1_audio_submit blocks while the device queue is
 * full, so the device's consumption paces mixing; the frame loop never does.
 * XML1_CAPTURE_DSOUND_PCM=1 records exactly the submitted samples to
 * build/dsound-output.pcm (s16le, 48 kHz, stereo). */
#include "dsound_mixer.h"
#include "audio_device_recovery.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define BLOCK_FRAMES 256u

static DWORD WINAPI output_thread(LPVOID unused)
{
    (void)unused;
    static float mix[BLOCK_FRAMES * 2];
    static int16_t pcm[BLOCK_FRAMES * 2];
    xml1_audio_device_state device = {0};
    FILE *capture = getenv("XML1_CAPTURE_DSOUND_PCM") ? fopen("build/dsound-output.pcm", "wb") : NULL;
    uint64_t clipped = 0, blocks = 0;
    if (!SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST))
        fprintf(stderr, "[DSOUND OUTPUT] priority change failed (%lu)\n", GetLastError());
    if (!xa2_init()) fprintf(stderr, "[DSOUND OUTPUT] no audio device at start; pacing silence until one appears\n");
    for (;;) {
        dsm_mix(mix, BLOCK_FRAMES);
        for (unsigned i = 0; i < BLOCK_FRAMES * 2; ++i) {
            float s = mix[i] * 32768.0f;
            if (s > 32767.0f) { s = 32767.0f; ++clipped; }
            if (s < -32768.0f) { s = -32768.0f; ++clipped; }
            pcm[i] = (int16_t)lrintf(s);
        }
        if (capture) { fwrite(pcm, sizeof(pcm), 1, capture); fflush(capture); }
        xml1_audio_submit(&device, pcm, BLOCK_FRAMES);
        if (++blocks % 11250 == 0)
            fprintf(stderr, "[DSOUND OUTPUT] %llu s mixed, %llu clipped samples\n",
                (unsigned long long)(blocks * BLOCK_FRAMES / DSM_RATE), (unsigned long long)clipped);
    }
}

void xml1_dsound_output_start(void)
{
    static LONG started;
    if (InterlockedExchange(&started, 1)) return;
    HANDLE thread = CreateThread(NULL, 0, output_thread, NULL, 0, NULL);
    if (!thread) { fprintf(stderr, "[FATAL DSOUND OUTPUT] thread creation failed (%lu)\n", GetLastError()); _exit(4); }
    CloseHandle(thread);
    fprintf(stderr, "[DSOUND OUTPUT] native DirectSound mixer started\n");
}
