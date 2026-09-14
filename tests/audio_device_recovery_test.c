/* Exercise the production recovery policy with a fake endpoint and clock.
 * No Windows device changes, audio output or desktop input. */
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static ULONGLONG clock_us;
static int active,init_failures,initializations,shutdowns,accepted,waiting,stall,bad_new_device;
static int32_t device_error;
static int16_t expected[512];
static BOOL counter(LARGE_INTEGER *value) {value->QuadPart=clock_us;return TRUE;}
static BOOL frequency(LARGE_INTEGER *value) {value->QuadPart=1000000;return TRUE;}
#define QueryPerformanceCounter(value) counter(value)
#define QueryPerformanceFrequency(value) frequency(value)
#define GetTickCount64() (clock_us/1000)
#define Sleep(ms) ((void)(clock_us+=(ULONGLONG)(ms)*1000))
#define SwitchToThread() (clock_us+=100,TRUE)
#include "audio_device_recovery.h"
int xa2_is_active(void) {return active;}
int32_t xa2_get_error(void) {return device_error;}
int xa2_init(void) {
    ++initializations;
    if(init_failures) {if(init_failures>0)--init_failures;return 0;}
    active=1;stall=0;device_error=bad_new_device?(int32_t)0x88960004:0;return 1;
}
void xa2_shutdown(void) {++shutdowns;active=0;device_error=0;}
int xa2_wait_for_buffer(unsigned ms) {clock_us+=(ULONGLONG)ms*1000;if(waiting)--waiting;return !waiting&&!stall;}
int xa2_submit_samples(const int16_t *samples,int frames) {
    if(frames!=256 || memcmp(samples,expected,sizeof(expected))) abort();
    if(!active||device_error||waiting||stall) return 0;
    ++accepted;return 1;
}
#define CHECK(value) do {if(!(value)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#value);return 1;}}while(0)
static void reset(void) {
    clock_us=0;active=1;init_failures=initializations=shutdowns=accepted=waiting=stall=bad_new_device=0;device_error=0;
}
int main(void) {
    xml1_audio_device_state state={0};reset();waiting=2;
    CHECK(xml1_audio_submit(&state,expected,256));CHECK(accepted==1 && !shutdowns && clock_us==200000);
    state=(xml1_audio_device_state){0};reset();device_error=(int32_t)0x88960004;
    CHECK(xml1_audio_submit(&state,expected,256));CHECK(accepted==1 && shutdowns==1 && initializations==1);
    state=(xml1_audio_device_state){0};reset();stall=1;
    CHECK(xml1_audio_submit(&state,expected,256));CHECK(accepted==1 && shutdowns==1 && clock_us==1000000);
    state=(xml1_audio_device_state){0};reset();active=0;init_failures=-1;
    for(int i=0;i<100;++i) CHECK(!xml1_audio_submit(&state,expected,256));
    CHECK(initializations==1 && !accepted && state.silent_frames==25600);
    CHECK(clock_us>=533300 && clock_us<534000);
    init_failures=0;clock_us=1000000;expected[0]=1234;
    CHECK(xml1_audio_submit(&state,expected,256));CHECK(accepted==1 && initializations==2 && !state.silent_frames);
    state=(xml1_audio_device_state){0};reset();device_error=(int32_t)0x88960004;bad_new_device=1;
    CHECK(!xml1_audio_submit(&state,expected,256));CHECK(initializations==1 && shutdowns==2 && !accepted);
    CHECK(!xml1_audio_submit(&state,expected,256));CHECK(initializations==1);
    bad_new_device=0;clock_us=1100000;
    CHECK(xml1_audio_submit(&state,expected,256));CHECK(accepted==1);
    puts("PASS: transient handoff, critical error, stalled endpoint, no-device clock pacing, reconnect and failing replacement; PCM accepted once");
    return 0;
}
