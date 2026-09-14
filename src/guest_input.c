#include "guest_input.h"
#include "xbox_memory_layout.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern RECOMP_TLS uint32_t g_eax, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
extern xml1_guest_function recomp_lookup_kernel(uint32_t va);

#define GAMEPAD_TYPE 0x003BF474u /* XbSymbolDatabase, supplied XDK 5849 image */
#define DISCONNECTED 1167u
#define INVALID_ARGUMENT 87u
static int test_mode;
static uint32_t handles[4], generation, previous_mask;
static uint32_t test_connected;
static XBOX_INPUT_STATE test_states[4];
static uint32_t test_press_frame;
static uint32_t test_move_frame;
static char test_input_path[1024];
static uint32_t test_input_id;
static ULONGLONG test_release_tick;
static void test_file_input(uint32_t frame) {
    if(!test_input_path[0]) return;
    if(test_release_tick && GetTickCount64()>=test_release_tick) {
        XBOX_GAMEPAD state={0}; xml1_input_test_state(0,1,&state);
        test_release_tick=0;
        fprintf(stderr,"[INPUT FILE] frame=%u released\n",frame);
    }
    FILE *file=fopen(test_input_path,"rb");
    if(!file) return;
    char line[128]={0},action[32],extra; unsigned id;
    int read=fgets(line,sizeof(line),file)!=NULL; fclose(file);
    /* A writer may be replacing the file. Apply complete lines only. */
    if(!read || !strchr(line,'\n')) return;
    if(sscanf(line,"%u %31s %c",&id,action,&extra)!=2) {
        fprintf(stderr,"[FATAL INPUT] malformed test command\n"); _exit(4);
    }
    if(id<=test_input_id) return;
    XBOX_GAMEPAD state={0}; unsigned duration=300;
    char parts[32]; strcpy(parts,action);
    char *part=parts;
    for(;;) {
        char *next=strchr(part,'+'); if(next) *next=0;
        if(!strcmp(part,"a")) state.bAnalogButtons[XBOX_BUTTON_A]=255;
        else if(!strcmp(part,"start")) state.wButtons=XBOX_GAMEPAD_START;
        else if(!strcmp(part,"back")) state.wButtons|=XBOX_GAMEPAD_BACK;
        else if(!strcmp(part,"lthumb")) state.wButtons|=XBOX_GAMEPAD_LEFT_THUMB;
        else if(!strcmp(part,"rthumb")) state.wButtons|=XBOX_GAMEPAD_RIGHT_THUMB;
        else if(!strcmp(part,"dpadup")) state.wButtons|=XBOX_GAMEPAD_DPAD_UP;
        else if(!strcmp(part,"dpaddown")) state.wButtons|=XBOX_GAMEPAD_DPAD_DOWN;
        else if(!strcmp(part,"dpadleft")) state.wButtons|=XBOX_GAMEPAD_DPAD_LEFT;
        else if(!strcmp(part,"dpadright")) state.wButtons|=XBOX_GAMEPAD_DPAD_RIGHT;
        else if(!strcmp(part,"right")) {state.sThumbLX=32767;duration=1000;}
        else if(!strcmp(part,"left")) {state.sThumbLX=-32767;duration=1000;}
        else if(!strcmp(part,"up")) {state.sThumbLY=32767;duration=1000;}
        else if(!strcmp(part,"down")) {state.sThumbLY=-32767;duration=1000;}
        else if(!strcmp(part,"b")) state.bAnalogButtons[XBOX_BUTTON_B]=255;
        else if(!strcmp(part,"x")) state.bAnalogButtons[XBOX_BUTTON_X]=255;
        else if(!strcmp(part,"y")) state.bAnalogButtons[XBOX_BUTTON_Y]=255;
        else if(!strcmp(part,"black")) state.bAnalogButtons[XBOX_BUTTON_BLACK]=255;
        else if(!strcmp(part,"white")) state.bAnalogButtons[XBOX_BUTTON_WHITE]=255;
        else if(!strcmp(part,"lt")) state.bAnalogButtons[XBOX_BUTTON_LTRIGGER]=255;
        else if(!strcmp(part,"rt")) state.bAnalogButtons[XBOX_BUTTON_RTRIGGER]=255;
        else if(!strcmp(part,"rta")||!strcmp(part,"rtb")||!strcmp(part,"rtx")||!strcmp(part,"rty")) {
            state.bAnalogButtons[XBOX_BUTTON_RTRIGGER]=255;
            state.bAnalogButtons[part[2]=='a'?XBOX_BUTTON_A:part[2]=='b'?XBOX_BUTTON_B:part[2]=='x'?XBOX_BUTTON_X:XBOX_BUTTON_Y]=255;
        }
        else if(!strcmp(part,"neutral") && !strcmp(action,"neutral")) duration=0;
        else {fprintf(stderr,"[FATAL INPUT] unsupported test command %s\n",action);_exit(4);}
        if(!next) break;
        part=next+1;
    }
    /* Direction-only commands retain their one-second duration. Buttons and
     * movement can be combined, with the ordinary short button pulse. */
    for(unsigned i=0;i<8;++i) if(state.bAnalogButtons[i]) duration=300;
    if(state.wButtons) duration=(state.wButtons&0x000F)?50:300;
    test_input_id=id; test_release_tick=duration?GetTickCount64()+duration:0;
    xml1_input_test_state(0,1,&state);
    fprintf(stderr,"[INPUT FILE] id=%u frame=%u action=%s duration_ms=%u (process-local only)\n",id,frame,action,duration);
}

void xml1_input_test_frame(uint32_t frame)
{
    if(!test_mode) return;
    test_file_input(frame);
    if(test_press_frame && (frame==test_press_frame || frame==test_press_frame+12)) {
        XBOX_GAMEPAD state={0};
        state.bAnalogButtons[XBOX_BUTTON_A]=frame==test_press_frame?255:0;
        xml1_input_test_state(0,1,&state);
        fprintf(stderr,"[INPUT TEST] frame=%u A=%u (process-local only)\n",frame,state.bAnalogButtons[XBOX_BUTTON_A]);
    }
    if(test_move_frame && (frame==test_move_frame || frame==test_move_frame+60)) {
        XBOX_GAMEPAD state={0};
        state.sThumbLX=frame==test_move_frame?32767:0;
        xml1_input_test_state(0,1,&state);
        fprintf(stderr,"[INPUT TEST] frame=%u left-stick-X=%d (process-local only)\n",frame,state.sThumbLX);
    }
}

static void *guest(uint32_t va, size_t size)
{
    if (!va || (uint64_t)va + size > xbox_GetMappedSize()) {
        fprintf(stderr, "[FATAL INPUT] invalid guest buffer %08X size=%zu\n", va, size);
        _exit(4);
    }
    return (void *)((uintptr_t)g_xbox_mem_offset + va);
}
static uint32_t read32(uint32_t va) { uint32_t v; memcpy(&v, guest(va, 4), 4); return v; }
static void write32(uint32_t va, uint32_t v) { memcpy(guest(va, 4), &v, 4); }
static uint32_t arg(unsigned n) { return read32(g_esp + 4 + 4 * n); }
static void finish(unsigned args, uint32_t result) { g_eax = result; g_esp += 4 + args * 4; }
static DWORD poll(unsigned port, XBOX_INPUT_STATE *state)
{
    if (port >= 4) return DISCONNECTED;
    if (test_mode) {
        if (!(test_connected & (1u << port))) return DISCONNECTED;
        *state = test_states[port];
        static uint32_t logged_packet[4];
        if(logged_packet[port]!=state->dwPacketNumber) {
            fprintf(stderr,"[INPUT POLL] port=%u packet=%u A=%u buttons=%04X leftX=%d leftY=%d\n",port,
                state->dwPacketNumber,state->Gamepad.bAnalogButtons[XBOX_BUTTON_A],
                state->Gamepad.wButtons,state->Gamepad.sThumbLX,state->Gamepad.sThumbLY);
            logged_packet[port]=state->dwPacketNumber;
        }
        return 0;
    }
    return xbox_InputGetState(port, state);
}
static uint32_t connected_mask(void)
{
    uint32_t result = 0;
    for (unsigned i = 0; i < 4; ++i) {
        XBOX_INPUT_STATE state;
        if (!poll(i, &state)) result |= 1u << i;
    }
    return result;
}
static int port_for(uint32_t handle)
{
    for (unsigned p = 0; p < 4; ++p) if (handle && handles[p] == handle) return (int)p;
    return -1;
}
int xml1_input_test_state(unsigned port, int connected, const XBOX_GAMEPAD *state)
{
    if (!test_mode || port >= 4 || !state) return 0;
    if (memcmp(&test_states[port].Gamepad, state, sizeof(*state))) {
        test_states[port].Gamepad = *state;
        ++test_states[port].dwPacketNumber;
    }
    if (connected) test_connected |= 1u << port;
    else test_connected &= ~(1u << port);
    return 1;
}
void xml1_XInitDevices(void)
{
    const char *mode = getenv("XML1_TEST_PAD");
    test_mode = mode && strcmp(mode, "1") == 0;
    test_input_path[0]=0; test_input_id=0; test_release_tick=0;
    const char *input_file=getenv("XML1_TEST_INPUT_FILE");
    if(test_mode && input_file && *input_file) {
        if(strlen(input_file)>=sizeof(test_input_path)) {fprintf(stderr,"[FATAL INPUT] test command path too long\n");_exit(4);}
        strcpy(test_input_path,input_file);
    }
    const char *press=getenv("XML1_TEST_A_FRAME");
    test_press_frame=0;
    if(test_mode && press && *press) {
        char *end=NULL; unsigned long parsed=strtoul(press,&end,10);
        if(!end || *end || parsed==0 || parsed>1000000) {
            fprintf(stderr,"[FATAL INPUT] XML1_TEST_A_FRAME must be 1..1000000\n"); _exit(4);
        }
        test_press_frame=(uint32_t)parsed;
    }
    const char *move=getenv("XML1_TEST_MOVE_FRAME");
    test_move_frame=0;
    if(test_mode && move && *move) {
        char *end=NULL; unsigned long parsed=strtoul(move,&end,10);
        if(!end || *end || !parsed || parsed>1000000 || (test_press_frame && parsed<=test_press_frame+12)) {
            fprintf(stderr,"[FATAL INPUT] XML1_TEST_MOVE_FRAME must be 1..1000000 and after A release\n"); _exit(4);
        }
        test_move_frame=(uint32_t)parsed;
    }
    memset(handles, 0, sizeof(handles));
    memset(test_states, 0, sizeof(test_states));
    test_connected = test_mode ? 1 : 0;
    test_states[0].dwPacketNumber = 1;
    previous_mask = 0;
    if (!test_mode) xbox_InputInit();
    uint32_t mask = connected_mask();
    write32(GAMEPAD_TYPE, mask);
    write32(GAMEPAD_TYPE + 4, mask);
    write32(GAMEPAD_TYPE + 8, 0);
    fprintf(stderr, "[INPUT] initialized %s; connected mask=%X\n", test_mode ? "process-local test pad" : "Windows XInput", mask);
    finish(2, 0);
}
void xml1_XGetDevices(void)
{
    uint32_t type = arg(0), mask = type == GAMEPAD_TYPE ? connected_mask() : 0;
    if (type == GAMEPAD_TYPE) {
        previous_mask = mask;
        write32(type, mask); write32(type + 4, 0); write32(type + 8, mask);
    }
    finish(1, mask);
}
void xml1_XGetDeviceChanges(void)
{
    uint32_t type = arg(0), inserts = 0, removes = 0;
    if (type == GAMEPAD_TYPE) {
        uint32_t mask = connected_mask();
        inserts = mask & ~previous_mask; removes = previous_mask & ~mask;
        previous_mask = mask;
        write32(type, mask); write32(type + 4, 0); write32(type + 8, mask);
    }
    write32(arg(1), inserts); write32(arg(2), removes);
    finish(3, (inserts | removes) != 0);
}
void xml1_XInputOpen(void)
{
    uint32_t type = arg(0), port = arg(1), slot = arg(2);
    XBOX_INPUT_STATE state;
    if (type != GAMEPAD_TYPE || slot || port >= 4 || poll(port, &state)) { finish(4, 0); return; }
    if (!handles[port]) {
        generation = (generation + 1) & 0xFFF;
        handles[port] = 0x58490000u | (generation << 4) | (port + 1);
    }
    finish(4, handles[port]);
}
void xml1_XInputClose(void)
{
    int port = port_for(arg(0));
    if (port >= 0) handles[port] = 0;
    finish(1, 0);
}
void xml1_XInputGetState(void)
{
    int port = port_for(arg(0));
    uint32_t dest = arg(1);
    XBOX_INPUT_STATE state = {0};
    DWORD result = port < 0 ? DISCONNECTED : poll((unsigned)port, &state);
    if (!dest) result = INVALID_ARGUMENT;
    if (!result) {
        /* Xbox wire payload is packet[4] + gamepad[18], struct padded to 24. */
        uint8_t *out = guest(dest, 24);
        memset(out, 0, 24);
        memcpy(out, &state.dwPacketNumber, 4);
        memcpy(out + 4, &state.Gamepad, 18);
    }
    finish(2, result);
}
void xml1_XInputSetState(void)
{
    int port = port_for(arg(0));
    uint32_t feedback = arg(1);
    if (!feedback) { finish(2, INVALID_ARGUMENT); return; }
    /* Xbox packed feedback: 66-byte header, then two 16-bit motor speeds. */
    const uint8_t *bytes = guest(feedback, 70);
    XBOX_VIBRATION vibration;
    memcpy(&vibration, bytes + 66, 4);
    DWORD result = port < 0 ? DISCONNECTED : 0;
    XBOX_INPUT_STATE state;
    if (!result) result = poll((unsigned)port, &state);
    if (!result && !test_mode) result = xbox_InputSetState((DWORD)port, &vibration);
    write32(feedback, result);
    uint32_t event = read32(feedback + 4);
    if (event) {
        uint32_t saved_sp = g_esp;
        g_esp -= 12;
        write32(g_esp, 0); write32(g_esp + 4, event); write32(g_esp + 8, 0);
        /* Verified retail thunk for ordinal 225: preserves synthetic handles. */
        xml1_guest_function set_event = recomp_lookup_kernel(read32(0x003C6C90));
        if (!set_event) { fprintf(stderr, "[FATAL INPUT] NtSetEvent bridge missing\n"); _exit(4); }
        set_event();
        g_esp = saved_sp;
    }
    finish(2, result);
}
xml1_guest_function xml1_input_lookup(uint32_t va)
{
    switch (va) {
    case 0x003BF897: return xml1_XInitDevices;
    case 0x003C0465: return xml1_XGetDevices;
    case 0x003C0487: return xml1_XGetDeviceChanges;
    case 0x003C0336: return xml1_XInputOpen;
    case 0x003C038C: return xml1_XInputClose;
    case 0x003C0398: return xml1_XInputGetState;
    case 0x003C040B: return xml1_XInputSetState;
    default: return NULL;
    }
}
