#include "guest_input.h"
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
RECOMP_TLS uint32_t g_eax, g_esp;
ptrdiff_t g_xbox_mem_offset;
static uint8_t memory[8u << 20];
static unsigned host_calls, event_calls;
size_t xbox_GetMappedSize(void) { return sizeof(memory); }
void xbox_InputInit(void) { ++host_calls; }
DWORD xbox_InputGetState(DWORD port, XBOX_INPUT_STATE *state) { (void)port; (void)state; ++host_calls; return 1167; }
DWORD xbox_InputSetState(DWORD port, const XBOX_VIBRATION *state) { (void)port; (void)state; ++host_calls; return 1167; }
static void signal_event(void) {
    if (*(uint32_t *)(memory + g_esp + 4) != 123) { puts("FAIL event handle"); exit(1); }
    ++event_calls; g_esp += 12; g_eax = 0;
}
xml1_guest_function recomp_lookup_kernel(uint32_t va) { return va == 0xFE1234 ? signal_event : NULL; }
#define REQUIRE(c) do { if (!(c)) { fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #c); return 1; } } while (0)
static uint32_t call(uint32_t va, unsigned n, const uint32_t *args) {
    g_esp = 0x700000;
    uint32_t *stack = (uint32_t *)(memory + g_esp);
    stack[0] = 0xCAFECAFE;
    for (unsigned i = 0; i < n; ++i) stack[i + 1] = args[i];
    xml1_guest_function fn = xml1_input_lookup(va);
    if (!fn) { puts("FAIL lookup"); exit(1); }
    fn();
    if (g_esp != 0x700004 + n * 4) { puts("FAIL stdcall cleanup"); exit(1); }
    return g_eax;
}
int main(void) {
    char command_path[MAX_PATH];
    REQUIRE(GetTempFileNameA(".","xml",0,command_path)!=0);
    _putenv_s("XML1_TEST_INPUT_FILE",command_path);
    _putenv_s("XML1_TEST_PAD", "1");
    _putenv_s("XML1_TEST_A_FRAME", "600");
    _putenv_s("XML1_TEST_MOVE_FRAME", "750");
    g_xbox_mem_offset = (ptrdiff_t)memory;
    uint32_t args[4] = {0};
    REQUIRE(call(0x3BF897, 2, args) == 0);
    args[0] = 0x3BF474; args[1] = 0x600000; args[2] = 0x600004;
    REQUIRE(call(0x3C0487, 3, args) == 1 && *(uint32_t *)(memory + 0x600000) == 1);
    REQUIRE(call(0x3C0487, 3, args) == 0);
    REQUIRE(call(0x3C0465, 1, args) == 1);
    args[1] = 0; args[2] = 0; args[3] = 0;
    uint32_t handle = call(0x3C0336, 4, args);
    REQUIRE(handle);
    XBOX_GAMEPAD state = {0};
    state.wButtons = XBOX_GAMEPAD_START;
    state.bAnalogButtons[XBOX_BUTTON_A] = 255;
    state.sThumbLX = -1234;
    REQUIRE(xml1_input_test_state(0, 1, &state));
    memset(memory + 0x600000, 0xA5, 32);
    args[0] = handle; args[1] = 0x600004;
    REQUIRE(call(0x3C0398, 2, args) == 0);
    REQUIRE(memory[0x600003] == 0xA5 && memory[0x60001C] == 0xA5);
    REQUIRE(*(uint32_t *)(memory + 0x600004) == 2);
    REQUIRE(memcmp(memory + 0x600008, &state, 18) == 0);
    xml1_input_test_frame(600);
    REQUIRE(call(0x3C0398, 2, args) == 0);
    REQUIRE(memory[0x60000A] == 255);
    REQUIRE(*(uint16_t *)(memory+0x600008) == 0);
    xml1_input_test_frame(612);
    REQUIRE(call(0x3C0398, 2, args) == 0);
    REQUIRE(memory[0x60000A] == 0);
    xml1_input_test_frame(750);
    REQUIRE(call(0x3C0398, 2, args) == 0);
    REQUIRE(*(int16_t *)(memory+0x600012) == 32767);
    xml1_input_test_frame(810);
    REQUIRE(call(0x3C0398, 2, args) == 0);
    REQUIRE(*(int16_t *)(memory+0x600012) == 0);
    FILE *command=fopen(command_path,"wb"); REQUIRE(command); fputs("1 a",command); fclose(command);
    xml1_input_test_frame(1000); REQUIRE(call(0x3C0398,2,args)==0 && memory[0x60000A]==0);
    command=fopen(command_path,"wb"); REQUIRE(command); fputs("1 a\n",command); fclose(command);
    xml1_input_test_frame(1001); REQUIRE(call(0x3C0398,2,args)==0 && memory[0x60000A]==255);
    xml1_input_test_frame(1013); REQUIRE(call(0x3C0398,2,args)==0 && memory[0x60000A]==255);
    Sleep(350);
    xml1_input_test_frame(1013); REQUIRE(call(0x3C0398,2,args)==0 && memory[0x60000A]==0);
    xml1_input_test_frame(1014); REQUIRE(call(0x3C0398,2,args)==0 && memory[0x60000A]==0);
    command=fopen(command_path,"wb"); REQUIRE(command); fputs("2 start\n",command); fclose(command);
    xml1_input_test_frame(1020); REQUIRE(call(0x3C0398,2,args)==0 && *(uint16_t *)(memory+0x600008)==XBOX_GAMEPAD_START);
    Sleep(350);
    xml1_input_test_frame(1032); REQUIRE(call(0x3C0398,2,args)==0 && *(uint16_t *)(memory+0x600008)==0);
    command=fopen(command_path,"wb"); REQUIRE(command); fputs("3 right\n",command); fclose(command);
    xml1_input_test_frame(1040); REQUIRE(call(0x3C0398,2,args)==0 && *(int16_t *)(memory+0x600012)==32767);
    command=fopen(command_path,"wb"); REQUIRE(command); fputs("4 neutral\n",command); fclose(command);
    xml1_input_test_frame(1041); REQUIRE(call(0x3C0398,2,args)==0 && *(int16_t *)(memory+0x600012)==0);
    const char *directions[]={"left","up","down"};
    for(unsigned i=0;i<3;++i) {
        command=fopen(command_path,"wb"); REQUIRE(command); fprintf(command,"%u %s\n",5+i,directions[i]); fclose(command);
        xml1_input_test_frame(1050+i); REQUIRE(call(0x3C0398,2,args)==0);
        REQUIRE(*(int16_t *)(memory+0x600012)==(i==0?-32767:0));
        REQUIRE(*(int16_t *)(memory+0x600014)==(i==1?32767:i==2?-32767:0));
    }
    const char *buttons[]={"b","x","y","black","white","lt","rt"};
    for(unsigned i=0;i<7;++i) {
        command=fopen(command_path,"wb"); REQUIRE(command); fprintf(command,"%u %s\n",8+i,buttons[i]); fclose(command);
        xml1_input_test_frame(1060+i); REQUIRE(call(0x3C0398,2,args)==0);
        for(unsigned j=0;j<8;++j) REQUIRE(memory[0x60000A+j]==(j==i+1?255:0));
    }
    const char *powers[]={"rta","rtb","rtx","rty"};
    for(unsigned i=0;i<4;++i) {
        command=fopen(command_path,"wb"); REQUIRE(command); fprintf(command,"%u %s\n",15+i,powers[i]); fclose(command);
        xml1_input_test_frame(1080+i); REQUIRE(call(0x3C0398,2,args)==0);
        for(unsigned j=0;j<8;++j) REQUIRE(memory[0x60000A+j]==(j==i||j==7?255:0));
    }
    command=fopen(command_path,"wb"); REQUIRE(command); fputs("19 up+left+a+rt\n",command); fclose(command);
    xml1_input_test_frame(1100); REQUIRE(call(0x3C0398,2,args)==0);
    REQUIRE(memory[0x60000A]==255 && memory[0x600011]==255);
    REQUIRE(*(int16_t *)(memory+0x600012)==-32767 && *(int16_t *)(memory+0x600014)==32767);
    command=fopen(command_path,"wb"); REQUIRE(command); fputs("20 neutral\n",command); fclose(command);
    xml1_input_test_frame(1101); REQUIRE(call(0x3C0398,2,args)==0);
    for(unsigned j=0;j<8;++j) REQUIRE(memory[0x60000A+j]==0);
    REQUIRE(*(int16_t *)(memory+0x600012)==0 && *(int16_t *)(memory+0x600014)==0);
    REQUIRE(DeleteFileA(command_path));
    puts("PASS: file commands wait for complete lines, apply once, release buttons and stay process-local");
    memset(memory + 0x600100, 0, 70);
    *(uint32_t *)(memory + 0x600104) = 123;
    *(uint32_t *)(memory + 0x3C6C90) = 0xFE1234;
    args[1] = 0x600100;
    REQUIRE(call(0x3C040B, 2, args) == 0 && event_calls == 1);
    REQUIRE(*(uint32_t *)(memory + 0x600100) == 0);
    REQUIRE(call(0x3C038C, 1, args) == 0);
    args[1] = 0x600004;
    REQUIRE(call(0x3C0398, 2, args) == 1167);
    REQUIRE(xml1_input_test_state(0, 0, &state));
    args[0] = 0x3BF474; args[1] = 0x600000; args[2] = 0x600004;
    REQUIRE(call(0x3C0487, 3, args) == 1 && *(uint32_t *)(memory + 0x600004) == 1);
    args[1] = 0; args[2] = 0;
    REQUIRE(call(0x3C0336, 4, args) == 0);
    REQUIRE(host_calls == 0);
    puts("PASS: process-local input enumeration, transitions, handles, wire state, completion event and stack cleanup; zero host input/output calls.");
    return 0;
}
