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
static unsigned physical_a;
static unsigned physical_polls,physical_inits;
size_t xbox_GetMappedSize(void) {return sizeof(memory);}
void xbox_InputInit(void) {++physical_inits;}
DWORD xbox_InputGetState(DWORD port,XBOX_INPUT_STATE *state) {
    ++physical_polls;
    memset(state,0,sizeof(*state));if(port>=3)return 1167;
    state->Gamepad.bAnalogButtons[0]=(BYTE)physical_a;
    state->dwPacketNumber=1;state->Gamepad.sThumbLX=(SHORT)((port+1)*1000);return 0;
}
DWORD xbox_InputSetState(DWORD port,const XBOX_VIBRATION *state) {(void)state;++vibration_calls;vibration_port=port;return 0;}
xml1_guest_function recomp_lookup_kernel(uint32_t va) {(void)va;return NULL;}
#define REQUIRE(c) do {if(!(c)) {fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#c);return 1;}}while(0)
static uint32_t call(uint32_t va,unsigned n,const uint32_t *args) {
    g_esp=0x700000;uint32_t *stack=(uint32_t*)(memory+g_esp);stack[0]=0;
    memcpy(stack+1,args,n*4);xml1_input_lookup(va)();return g_eax;
}
static int write_command(const char *path,const char *command) {
    FILE *file=fopen(path,"wb");if(!file)return 0;
    int ok=fputs(command,file)>=0;return fclose(file)==0 && ok;
}
int main(void) {
    _putenv_s("XML1_TEST_PAD","");_putenv_s("XML1_PC_TEST_INPUT","");
    g_xbox_mem_offset=(ptrdiff_t)memory;
    Xml1PcSettings settings;xml1_pc_settings_defaults(&settings);
    settings.keyboard_player=1;settings.separate_controllers=1;
    settings.keys[1][XML1_PC_FORWARD]='T';
    REQUIRE(xml1_pc_channel_create(&settings));xml1_pc_channel_focus(1);
    xml1_pc_channel_key('T',1);
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
    Xml1PcInputSnapshot snapshot;
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && snapshot.last_device==1);
    REQUIRE(snapshot.connected_players==13); /* physical pads at players 1,3,4; player 2 keyboard only */
    physical_a=255;
    args[0]=0x3BF474;REQUIRE(call(0x3C0465,1,args)==15);
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && snapshot.last_device==1); /* enumeration */
    args[0]=handles[0];args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && snapshot.last_device==0);
    xml1_pc_channel_key('E',1);
    REQUIRE(call(0x3C0398,2,args)==0);
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && snapshot.last_device==1); /* held pad */
    physical_a=0;REQUIRE(call(0x3C0398,2,args)==0);
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && snapshot.last_device==1); /* release/idle drift */
    xml1_pc_channel_focus(0);physical_a=255;REQUIRE(call(0x3C0398,2,args)==0);
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && snapshot.last_device==1);
    physical_a=0;
    xml1_pc_channel_focus(0);xml1_pc_channel_focus(1);
    args[0]=handles[1];args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    XBOX_GAMEPAD pad;memcpy(&pad,memory+0x600004,18);REQUIRE(!pad.sThumbLY);
    xml1_pc_channel_key('W',1);
    REQUIRE(call(0x3C0398,2,args)==0);memcpy(&pad,memory+0x600004,18);REQUIRE(!pad.sThumbLY);
    xml1_pc_channel_key('T',1);xml1_pc_channel_set_menu(1);
    for(unsigned port=0;port<4;++port) {
        args[0]=handles[port];args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
        memcpy(&pad,memory+0x600004,18);XBOX_GAMEPAD zero={0};REQUIRE(!memcmp(&pad,&zero,18));
    }
    xml1_pc_channel_set_menu(0);
    /* Real guest poll boundary: apply a player-three swap after physical-slot
       routing. The same A press must remain A in native menus and player one. */
    settings.pad_bindings[2][XML1_PC_ATTACK]=XML1_PAD_B;
    settings.pad_bindings[2][XML1_PC_SMASH]=XML1_PAD_A;
    REQUIRE(xml1_pc_channel_set_settings(&settings));physical_a=200;
    args[0]=handles[2];args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.bAnalogButtons[0]==0 && pad.bAnalogButtons[1]==200);
    REQUIRE(xml1_pc_channel_capture_controller(2));
    REQUIRE(call(0x3C0398,2,args)==0);REQUIRE(!xml1_pc_channel_capture_source());
    memcpy(&pad,memory+0x600004,18);XBOX_GAMEPAD capture_zero={0};REQUIRE(!memcmp(&pad,&capture_zero,18));
    physical_a=0;REQUIRE(call(0x3C0398,2,args)==0); // consumed neutral arms
    physical_a=200;args[0]=0x3BF474;REQUIRE(call(0x3C0465,1,args)==15);
    REQUIRE(!xml1_pc_channel_capture_source()); // enumeration cannot bind
    args[0]=handles[2];args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    REQUIRE(xml1_pc_channel_capture_source()==XML1_PAD_A); // raw A, not remapped B
    REQUIRE(xml1_pc_channel_capture(0));
    REQUIRE(xml1_pc_channel_native_pointer(1));REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.bAnalogButtons[0]==200 && pad.bAnalogButtons[1]==0);
    REQUIRE(xml1_pc_channel_native_pointer(0));
    args[0]=handles[0];REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.bAnalogButtons[0]==200 && pad.bAnalogButtons[1]==0);
    physical_a=0;
    args[0]=handles[2];args[1]=0x610000;REQUIRE(call(0x3C040B,2,args)==0);
    REQUIRE(vibration_calls==1 && vibration_port==1);
    args[0]=handles[1];REQUIRE(call(0x3C040B,2,args)==0);REQUIRE(vibration_calls==1);
    xml1_pc_channel_focus(0);args[0]=handles[0];args[1]=0x600000;
    REQUIRE(call(0x3C0398,2,args)==0);memcpy(&pad,memory+0x600004,18);REQUIRE(!pad.sThumbLX);
    /* Hybrid process-local pad source must traverse the same capture/remap
       pipeline without initializing, polling or vibrating host devices. */
    unsigned polls_before=physical_polls,inits_before=physical_inits,rumble_before=vibration_calls;
    _putenv_s("XML1_TEST_PAD","1");_putenv_s("XML1_PC_TEST_INPUT","fixture");
    xml1_pc_settings_defaults(&settings);settings.pad_bindings[0][XML1_PC_ATTACK]=XML1_PAD_B;
    settings.pad_bindings[0][XML1_PC_SMASH]=XML1_PAD_A;
    REQUIRE(xml1_pc_channel_set_settings(&settings));xml1_pc_channel_focus(1);
    args[0]=0;args[1]=0;REQUIRE(call(0x3BF897,2,args)==0);
    args[0]=0x3BF474;args[1]=0;args[2]=0;args[3]=0;
    uint32_t hybrid_handle=call(0x3C0336,4,args);REQUIRE(hybrid_handle);
    XBOX_GAMEPAD synthetic={0};synthetic.bAnalogButtons[0]=180;
    REQUIRE(xml1_input_test_state(0,1,&synthetic));
    args[0]=hybrid_handle;args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.bAnalogButtons[0]==0 && pad.bAnalogButtons[1]==180);
    REQUIRE(xml1_pc_channel_capture_controller(0));REQUIRE(call(0x3C0398,2,args)==0);
    REQUIRE(!xml1_pc_channel_capture_source());
    synthetic.bAnalogButtons[0]=0;REQUIRE(xml1_input_test_state(0,1,&synthetic));
    REQUIRE(call(0x3C0398,2,args)==0);
    synthetic.sThumbRY=-32768;REQUIRE(xml1_input_test_state(0,1,&synthetic));
    REQUIRE(call(0x3C0398,2,args)==0);REQUIRE(xml1_pc_channel_capture_source()==XML1_PAD_RY_NEG);
    REQUIRE(xml1_pc_channel_capture(0));
    args[1]=0x610000;REQUIRE(call(0x3C040B,2,args)==0);
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && (snapshot.connected_players&1));
    REQUIRE(xml1_input_test_state(0,0,&synthetic));
    args[0]=0x3BF474;call(0x3C0465,1,args); /* enumeration updates disconnection */
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && !(snapshot.connected_players&1));
    REQUIRE(xml1_input_test_state(0,1,&synthetic));
    args[0]=0x3BF474;call(0x3C0465,1,args);
    REQUIRE(xml1_pc_channel_read(&snapshot,1) && (snapshot.connected_players&1));
    /* File commands address independent physical slots and release only their
       own state. Test through the same guest handles used by the game. */
    char temp_root[MAX_PATH],command_path[MAX_PATH];
    REQUIRE(GetTempPathA(MAX_PATH,temp_root));
    REQUIRE(GetTempFileNameA(temp_root,"xip",0,command_path));
    REQUIRE(write_command(command_path,"1 p2:left\n"));
    _putenv_s("XML1_TEST_INPUT_FILE",command_path);
    args[0]=0;args[1]=0;REQUIRE(call(0x3BF897,2,args)==0);
    xml1_input_test_frame(1);
    args[0]=0x3BF474;args[1]=1;args[2]=0;args[3]=0;
    uint32_t second=call(0x3C0336,4,args);REQUIRE(second);
    args[0]=second;args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.sThumbLX==-32767 && pad.sThumbLY==0);
    REQUIRE(write_command(command_path,"2 p3:up\n"));xml1_input_test_frame(2);
    args[0]=0x3BF474;args[1]=2;args[2]=0;args[3]=0;
    uint32_t third=call(0x3C0336,4,args);REQUIRE(third);
    args[0]=third;args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.sThumbLX==0 && pad.sThumbLY==32767);
    REQUIRE(write_command(command_path,"3 p2:neutral\n"));xml1_input_test_frame(3);
    args[0]=second;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(!pad.sThumbLX && !pad.sThumbLY);
    args[0]=third;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.sThumbLY==32767);
    REQUIRE(write_command(command_path,"4 p3:disconnect\n"));xml1_input_test_frame(4);
    REQUIRE(call(0x3C0398,2,args)==1167);
    Sleep(1050);xml1_input_test_frame(5); // An old release timer must not reconnect it.
    REQUIRE(call(0x3C0398,2,args)==1167);
    REQUIRE(write_command(command_path,"5 p4:right\n"));xml1_input_test_frame(6);
    args[0]=0x3BF474;args[1]=3;args[2]=0;args[3]=0;
    uint32_t fourth=call(0x3C0336,4,args);REQUIRE(fourth);
    args[0]=fourth;args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.sThumbLX==32767 && !pad.sThumbLY);
    REQUIRE(write_command(command_path,"6 a\n"));xml1_input_test_frame(7);
    args[0]=0x3BF474;args[1]=0;args[2]=0;args[3]=0;
    uint32_t first=call(0x3C0336,4,args);REQUIRE(first);
    args[0]=first;args[1]=0x600000;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(!pad.bAnalogButtons[0] && pad.bAnalogButtons[1]==255);
    args[0]=fourth;REQUIRE(call(0x3C0398,2,args)==0);
    memcpy(&pad,memory+0x600004,18);REQUIRE(pad.sThumbLX==32767 && !pad.bAnalogButtons[1]);
    REQUIRE(DeleteFileA(command_path));_putenv_s("XML1_TEST_INPUT_FILE","");
    REQUIRE(physical_polls==polls_before && physical_inits==inits_before && vibration_calls==rumble_before);
    /* Exercise all keyboard assignments through real guest handles. A key tap
       must survive enumeration and other players' polls, then be consumed once
       by its owner. Distinct pad strengths expose accidental cross-port merges. */
    for(unsigned separate=0;separate<2;++separate)for(unsigned owner=0;owner<4;++owner) {
        xml1_pc_settings_defaults(&settings);
        settings.keyboard_player=owner;settings.separate_controllers=separate;
        REQUIRE(xml1_pc_channel_set_settings(&settings));
        xml1_pc_channel_focus(0);xml1_pc_channel_focus(1);
        for(unsigned slot=0;slot<4;++slot) {
            XBOX_GAMEPAD source={0};source.bAnalogButtons[0]=(BYTE)(40+slot*40);
            REQUIRE(xml1_input_test_state(slot,1,&source));
        }
        for(unsigned port=0;port<4;++port) {
            args[0]=0x3BF474;args[1]=port;args[2]=0;args[3]=0;
            handles[port]=call(0x3C0336,4,args);REQUIRE(handles[port]);
        }
        xml1_pc_channel_key('W',1);xml1_pc_channel_key('W',0);
        args[0]=0x3BF474;REQUIRE(call(0x3C0465,1,args)==15);
        for(unsigned step=1;step<=4;++step) {
            unsigned port=(owner+step)%4; /* Owner is deliberately last. */
            int slot=separate?(port==owner?-1:(int)port-(port>owner)): (int)port;
            args[0]=handles[port];args[1]=0x600000;
            REQUIRE(call(0x3C0398,2,args)==0);memcpy(&pad,memory+0x600004,18);
            REQUIRE(pad.sThumbLY==(port==owner?32767:0));
            REQUIRE(pad.bAnalogButtons[0]==(slot<0?0:40+slot*40));
            REQUIRE(!pad.sThumbLX && !pad.bAnalogButtons[1]);
        }
        args[0]=handles[owner];REQUIRE(call(0x3C0398,2,args)==0);
        memcpy(&pad,memory+0x600004,18);REQUIRE(!pad.sThumbLY);
        for(unsigned slot=0;slot<4;++slot) {
            XBOX_GAMEPAD disconnected={0};REQUIRE(xml1_input_test_state(slot,0,&disconnected));
        }
        args[0]=0x3BF474;REQUIRE(call(0x3C0465,1,args)==(1u<<owner));
        for(unsigned port=0;port<4;++port) {
            args[0]=handles[port];args[1]=0x600000;
            REQUIRE(call(0x3C0398,2,args)==(port==owner?0:1167));
            memcpy(&pad,memory+0x600004,18);XBOX_GAMEPAD neutral={0};
            if(port==owner)REQUIRE(!memcmp(&pad,&neutral,18)); // Failed reads have no state payload.
        }
    }
    REQUIRE(physical_polls==polls_before && physical_inits==inits_before && vibration_calls==rumble_before);
    xml1_pc_channel_close();
    puts("PASS: mixed player slots, focus release, menu suppression, active-device transitions, and vibration routing; no physical input calls");return 0;
}
