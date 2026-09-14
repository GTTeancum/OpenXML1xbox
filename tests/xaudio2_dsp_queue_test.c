/* Native DSP output queue regression. Mock XAudio2 only; no audio device.
 * Adapted from XboxRecomp tests/xaudio2/test_main.c. */
#define COBJMACROS
#include <windows.h>
#include <xaudio2.h>
#include <stdio.h>
#include <string.h>

static HRESULT com_result, create_result, master_result, source_result;
static HRESULT start_result, submit_result;
static int starts;
static int com_refs, releases, master_destroys, source_destroys, failures;
static IXAudio2 engine;
static IXAudio2MasteringVoice master;
static IXAudio2SourceVoice source;
static IXAudio2MasteringVoiceVtbl master_vtable;
static IXAudio2SourceVoiceVtbl source_vtable;
static const BYTE *queued[12];
static BYTE snapshots[12][4096];
static UINT32 queued_bytes[12], queue_count;
static DWORD wait_result=WAIT_TIMEOUT;
static int completion_at_timeout;
static DWORD fake_wait(HANDLE event,DWORD timeout) {
    (void)event;(void)timeout;
    if(completion_at_timeout) --queue_count;
    if(wait_result==WAIT_FAILED) SetLastError(ERROR_INVALID_HANDLE);
    return wait_result;
}

#define CHECK(test) do { if (!(test)) { \
    fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #test); failures++; \
} } while (0)

static HRESULT fake_com_init(void)
{
    if (SUCCEEDED(com_result)) com_refs++;
    return com_result;
}

static HRESULT fake_create(IXAudio2 **out)
{
    if (SUCCEEDED(create_result)) *out = &engine;
    return create_result;
}

static HRESULT fake_master(IXAudio2MasteringVoice **out)
{
    if (SUCCEEDED(master_result)) *out = &master;
    return master_result;
}

static HRESULT fake_source(IXAudio2SourceVoice **out)
{
    if (SUCCEEDED(source_result)) *out = &source;
    return source_result;
}

static void STDMETHODCALLTYPE destroy_master(IXAudio2MasteringVoice *voice)
{
    CHECK(voice == &master);
    master_destroys++;
}

static void STDMETHODCALLTYPE destroy_source(IXAudio2SourceVoice *voice)
{
    CHECK(voice == &source);
    source_destroys++;
    queue_count = 0;
}

static void check_queued(void)
{
    for (UINT32 i = 0; i < queue_count; i++)
        CHECK(memcmp(queued[i], snapshots[i], queued_bytes[i]) == 0);
}

static void fake_state(XAUDIO2_VOICE_STATE *state)
{
    memset(state, 0, sizeof(*state));
    state->BuffersQueued = queue_count;
}

static HRESULT fake_submit(const XAUDIO2_BUFFER *buffer)
{
    check_queued();
    if (FAILED(submit_result)) return submit_result;
    CHECK(queue_count < 12);
    if (queue_count == 12) return E_FAIL;
    queued[queue_count] = buffer->pAudioData;
    queued_bytes[queue_count] = buffer->AudioBytes;
    memcpy(snapshots[queue_count], buffer->pAudioData, buffer->AudioBytes);
    queue_count++;
    return S_OK;
}

/* Replace only external APIs; compile the real backend, including its ring. */
#define CoInitializeEx(...) fake_com_init()
#define CoUninitialize() ((void)--com_refs)
#define XAudio2Create(out, ...) fake_create(out)
#undef IXAudio2_RegisterForCallbacks
#define IXAudio2_RegisterForCallbacks(...) S_OK
#undef IXAudio2_UnregisterForCallbacks
#define IXAudio2_UnregisterForCallbacks(...) ((void)0)
#define WaitForSingleObject(event,timeout) fake_wait(event,timeout)
#undef IXAudio2_CreateMasteringVoice
#define IXAudio2_CreateMasteringVoice(engine, out, ...) fake_master(out)
#undef IXAudio2_CreateSourceVoice
#define IXAudio2_CreateSourceVoice(engine, out, ...) fake_source(out)
#undef IXAudio2_Release
#define IXAudio2_Release(...) ((void)++releases)
#undef IXAudio2SourceVoice_Start
#define IXAudio2SourceVoice_Start(...) (++starts, start_result)
#undef IXAudio2SourceVoice_Stop
#define IXAudio2SourceVoice_Stop(...) ((void)0)
#undef IXAudio2SourceVoice_FlushSourceBuffers
#define IXAudio2SourceVoice_FlushSourceBuffers(...) ((void)0)
#undef IXAudio2SourceVoice_GetState
#define IXAudio2SourceVoice_GetState(source, state, ...) fake_state(state)
#undef IXAudio2SourceVoice_SubmitSourceBuffer
#define IXAudio2SourceVoice_SubmitSourceBuffer(source, buffer, ...) fake_submit(buffer)
#define RECOMP_APU_NATIVE_DSP_OUTPUT 1
#include "../external/xboxrecomp/src/apu/apu_xaudio2.c"

static void reset(void)
{
    /* Fake resources are static, so even a broken cleanup can be reset. */
    g_xa2 = NULL;
    g_xa2_master = NULL;
    g_xa2_source = NULL;
    g_xa2_initialized = 0;
    com_refs = releases = master_destroys = source_destroys = 0;
    queue_count = 0;
    com_result = create_result = master_result = source_result = S_OK;
    start_result = submit_result = S_OK;
}


int main(void) {
    master_vtable.DestroyVoice=destroy_master; source_vtable.DestroyVoice=destroy_source;
    master.lpVtbl=&master_vtable; source.lpVtbl=&source_vtable;
    reset(); CHECK(xa2_init()); CHECK(starts==0);
    int16_t pcm[256][2];
    for(int i=0;i<12;++i) {
        memset(pcm,i+1,sizeof(pcm));
        CHECK(xa2_submit_samples(&pcm[0][0],256));
        CHECK(starts==(i>=5)); check_queued();
    }
    CHECK(!xa2_submit_samples(&pcm[0][0],256));
    CHECK(!xa2_submit_samples(&pcm[0][0],257));
    CHECK(!xa2_submit_samples(NULL,256));
    CHECK(!xa2_submit_samples(&pcm[0][0],0));
    CHECK(!xa2_wait_for_buffer(0) && !xa2_get_error());
    completion_at_timeout=1;
    CHECK(xa2_wait_for_buffer(0) && !xa2_get_error());
    completion_at_timeout=0;queue_count=12;
    wait_result=WAIT_FAILED;CHECK(!xa2_wait_for_buffer(0));
    CHECK(xa2_get_error()==(int32_t)HRESULT_FROM_WIN32(ERROR_INVALID_HANDLE));
    wait_result=WAIT_TIMEOUT;g_xa2_voice_error=0;
    for(int j=0;j<30;++j) {
        for(unsigned i=0;i<11;++i) {
            queued[i]=queued[i+1]; queued_bytes[i]=queued_bytes[i+1];
            memcpy(snapshots[i],snapshots[i+1],queued_bytes[i]);
        }
        --queue_count; memset(pcm,j+20,sizeof(pcm));
        CHECK(xa2_submit_samples(&pcm[0][0],256)); check_queued();
        CHECK(starts==1);
    }
    cb_critical(&g_xa2_engine_callback,XAUDIO2_E_DEVICE_INVALIDATED);
    CHECK(xa2_get_error()==(int32_t)XAUDIO2_E_DEVICE_INVALIDATED);
    CHECK(!xa2_submit_samples(&pcm[0][0],256));
    xa2_shutdown(); CHECK(com_refs==0); reset(); starts=0; CHECK(xa2_init());
    CHECK(!xa2_get_error());
    start_result=E_FAIL;
    for(int i=0;i<6;++i) CHECK(xa2_submit_samples(&pcm[0][0],256));
    CHECK(starts==1 && queue_count==6);
    CHECK(!xa2_wait_for_buffer(0));
    CHECK(!xa2_submit_samples(&pcm[0][0],256));
    CHECK(queue_count==6); xa2_shutdown();
    printf("Native DSP queue regression: %d failures; priming, capacity, backpressure, ring lifetime, start failure; no audio device\n",failures);
    return failures?1:0;
}
