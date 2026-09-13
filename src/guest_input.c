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
