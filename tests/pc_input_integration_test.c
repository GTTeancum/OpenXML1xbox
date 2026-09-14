#include "guest_input.h"
#include "pc_input_channel.h"
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
RECOMP_TLS uint32_t g_eax,g_esp;
ptrdiff_t g_xbox_mem_offset;
static uint8_t memory[8u<<20];
static unsigned vibration_calls,vibration_port;
size_t xbox_GetMappedSize(void) {return sizeof(memory);}
void xbox_InputInit(void) {}
DWORD xbox_InputGetState(DWORD port,XBOX_INPUT_STATE *state) {
    memset(state,0,sizeof(*state));if(port>=3)return 1167;
    state->dwPacketNumber=1;state->Gamepad.sThumbLX=(SHORT)((port+1)*1000);return 0;
}
DWORD xbox_InputSetState(DWORD port,const XBOX_VIBRATION *state) {(void)state;++vibration_calls;vibration_port=port;return 0;}
xml1_guest_function recomp_lookup_kernel(uint32_t va) {(void)va;return NULL;}
#define REQUIRE(c) do {if(!(c)) {fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#c);return 1;}}while(0)
static uint32_t call(uint32_t va,unsigned n,const uint32_t *args) {
    g_esp=0x700000;uint32_t *stack=(uint32_t*)(memory+g_esp);stack[0]=0;
    memcpy(stack+1,args,n*4);xml1_input_lookup(va)();return g_eax;
}
int main(void) {
    _putenv_s("XML1_TEST_PAD","");_putenv_s("XML1_PC_TEST_INPUT","");
    g_xbox_mem_offset=(ptrdiff_t)memory;
    Xml1PcSettings settings;xml1_pc_settings_defaults(&settings);
    settings.keyboard_player=1;settings.separate_controllers=1;
    REQUIRE(xml1_pc_channel_create(&settings));xml1_pc_channel_focus(1);
    xml1_pc_channel_key('W',1);
    uint32_t args[4]={0};REQUIRE(call(0x3BF897,2,args)==0);
    args[0]=0x3BF474;REQUIRE(call(0x3C0465,1,args)==15);
    uint32_t handles[4];
    for(unsigned port=0;port<4;++port) {
        args[0]=0x3BF474;args[1]=port;args[2]=0;args[3]=0;
        handles[port]=call(0x3C0336,4,args);REQUIRE(handles[port]);
        args[0]=handles[port];args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
        XBOX_GAMEPAD pad;memcpy(&pad,memory+0x600004,18);
        if(port==1)REQUIRE(pad.sThumbLX==0 && pad.sThumbLY==32767);
        else REQUIRE(pad.sThumbLY==0 && pad.sThumbLX==(port<1?1000:port*1000));
    }
    xml1_pc_channel_focus(0);xml1_pc_channel_focus(1);
    args[0]=handles[1];args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    XBOX_GAMEPAD pad;memcpy(&pad,memory+0x600004,18);REQUIRE(!pad.sThumbLY);
    xml1_pc_channel_key('W',1);xml1_pc_channel_set_menu(1);
    for(unsigned port=0;port<4;++port) {
        args[0]=handles[port];args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
        memcpy(&pad,memory+0x600004,18);XBOX_GAMEPAD zero={0};REQUIRE(!memcmp(&pad,&zero,18));
    }
    xml1_pc_channel_set_menu(0);
    args[0]=handles[2];args[1]=0x610000;REQUIRE(call(0x3C040B,2,args)==0);
    REQUIRE(vibration_calls==1 && vibration_port==1);
    args[0]=handles[1];REQUIRE(call(0x3C040B,2,args)==0);REQUIRE(vibration_calls==1);
    xml1_pc_channel_focus(0);args[0]=handles[0];args[1]=0x600000;
    REQUIRE(call(0x3C0398,2,args)==0);memcpy(&pad,memory+0x600004,18);REQUIRE(!pad.sThumbLX);
    xml1_pc_channel_close();
    puts("PASS: mixed player slots, focus release, menu suppression, and vibration routing; no physical input calls");return 0;
}
