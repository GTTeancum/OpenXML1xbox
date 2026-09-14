#include "pc_controls.h"
#include "pc_options_model.h"
#include "pc_input_channel.h"
#include "pc_gamepad.h"
#include "pc_menu.h"
#include <windows.h>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <stdexcept>
#include <set>

#define REQUIRE(x) do {if(!(x))throw std::runtime_error(#x);}while(0)
int main(int argc,char **argv) {
    try {
        // A separate executable (also built Win32) exercises the exact IPC ABI.
        if(argc==2 && !std::strcmp(argv[1],"--producer")) {
            REQUIRE(xml1_pc_channel_connect());
            xml1_pc_channel_focus(1);
            xml1_pc_channel_key('W',1);xml1_pc_channel_key('W',0);
            xml1_pc_channel_key('A',1);xml1_pc_channel_mouse(320,240,120);
            xml1_pc_channel_close();return 0;
        }
        Xml1PcSettings defaults;xml1_pc_settings_defaults(&defaults);
        char error[160];REQUIRE(xml1_pc_settings_validate(&defaults,error,sizeof(error)));
        REQUIRE(defaults.width==1920 && defaults.height==1080);
        REQUIRE(defaults.keys[XML1_PC_FORWARD]=='W');
        REQUIRE(defaults.keys[XML1_PC_ATTACK]==VK_NUMPAD4);
        REQUIRE(defaults.alternate_keys[XML1_PC_ATTACK]==VK_LBUTTON);
        REQUIRE(defaults.alternate_keys[XML1_PC_SMASH]==VK_RBUTTON);
        REQUIRE(defaults.alternate_keys[XML1_PC_CAMERA_DRAG]==VK_MBUTTON);
        auto dir=std::filesystem::temp_directory_path()/
            ("OpenXML1-controls-test-"+std::to_string(GetCurrentProcessId()));
        std::filesystem::create_directory(dir);
        auto path=dir/"pc-settings.ini";
        Xml1PcSettings loaded{};
        REQUIRE(xml1_pc_settings_load(path.u8string().c_str(),&loaded,error,sizeof(error)));
        REQUIRE(!std::memcmp(&loaded,&defaults,sizeof(defaults)));
        Xml1PcOptionsModel m;xml1_pc_options_open(&m,&defaults);
        REQUIRE(!xml1_pc_options_bind(&m,XML1_PC_ATTACK,'W'));
        REQUIRE(m.draft.keys[XML1_PC_ATTACK]==VK_NUMPAD4);
        REQUIRE(!xml1_pc_options_bind_slot(&m,XML1_PC_JUMP,VK_LBUTTON,1));
        REQUIRE(xml1_pc_options_bind_slot(&m,XML1_PC_ATTACK,VK_LBUTTON,1));
        REQUIRE(m.draft.keys[XML1_PC_ATTACK]==VK_NUMPAD4);
        REQUIRE(xml1_pc_options_bind(&m,XML1_PC_ATTACK,VK_LBUTTON));
        m.draft.width=1280;m.draft.height=720;m.draft.keyboard_player=2;
        REQUIRE(xml1_pc_options_apply(&m,path.u8string().c_str()));
        REQUIRE(std::strstr(m.status,"restart"));
        REQUIRE(xml1_pc_settings_load(path.u8string().c_str(),&loaded,error,sizeof(error)));
        REQUIRE(!std::memcmp(&loaded,&m.applied,sizeof(loaded)));
        xml1_pc_options_defaults(&m);xml1_pc_options_cancel(&m);
        REQUIRE(!std::memcmp(&m.draft,&loaded,sizeof(loaded)));
        REQUIRE(!m.active);
        xml1_pc_options_open(&m,&loaded);
        m.draft.keys[XML1_PC_ATTACK]='W';
        REQUIRE(!xml1_pc_options_apply(&m,path.u8string().c_str()));
        Xml1PcSettings after{};
        REQUIRE(xml1_pc_settings_load(path.u8string().c_str(),&after,error,sizeof(error)));
        REQUIRE(!std::memcmp(&loaded,&after,sizeof(loaded)));
        // A failed write must retain the live configuration.
        m.draft=defaults;
        REQUIRE(!xml1_pc_options_apply(&m,(dir/"missing"/"settings.ini").u8string().c_str()));
        REQUIRE(!std::memcmp(&loaded,&m.applied,sizeof(loaded)));
        for(const char *bad:{"[PC]\nWidth=-1\n","[PC]\nWidth=abc\n",
            "[PC]\nFSAA=3\n","[PC]\nMouseSensitivity=0\n",
            "[Bindings]\nAttack=87\n","[PC]\nKeyboardPlayer=4\n",
            "[Bindings]\nMoveForward=256\n","[PC]\nUnknown=0\n"}) {
            std::ofstream f(path);f<<bad;f.close();
            REQUIRE(!xml1_pc_settings_load(path.u8string().c_str(),&after,error,sizeof(error)));
            REQUIRE(!std::memcmp(&loaded,&after,sizeof(loaded)));
        }
        Xml1PcControlState keys{};
        xml1_pc_control_focus(&keys,1);xml1_pc_control_key(&keys,VK_LBUTTON,1);
        REQUIRE(xml1_pc_action_down(&defaults,&keys,XML1_PC_ATTACK));
        xml1_pc_control_focus(&keys,0);
        xml1_pc_control_key(&keys,'W',1);REQUIRE(!xml1_pc_action_down(&defaults,&keys,XML1_PC_FORWARD));
        xml1_pc_control_focus(&keys,1);xml1_pc_control_key(&keys,'W',1);
        REQUIRE(xml1_pc_action_down(&defaults,&keys,XML1_PC_FORWARD));
        xml1_pc_control_focus(&keys,0);xml1_pc_control_focus(&keys,1);
        REQUIRE(!xml1_pc_action_down(&defaults,&keys,XML1_PC_FORWARD));
        Xml1PcInputSnapshot mapped{};mapped.settings=defaults;mapped.controls.focused=1;
        mapped.controls.held['W']=mapped.controls.held['D']=1;
        Xml1PcGamepad pad{};xml1_pc_map_gamepad(&mapped,&pad);
        REQUIRE(pad.lx==23169 && pad.ly==23169);
        mapped.controls.held['S']=1;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.ly==0 && pad.lx==32767);
        mapped.controls.held[VK_SHIFT]=1;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.lx==12000);
        mapped.controls.held['1']=1;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.analog[0]==255 && pad.analog[7]==255);
        mapped.menu_active=1;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(!pad.lx && !pad.analog[0]);
        mapped.menu_active=0;mapped.controls={};mapped.controls.focused=1;mapped.controls.held['V']=1;
        mapped.controls.mouse_dx=12;mapped.controls.mouse_dy=6;
        xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.rx==9600 && pad.ry==-4800);
        mapped.settings.invert_camera_y=1;mapped.settings.mouse_sensitivity=200;
        xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(pad.rx==19200 && pad.ry==9600);
        mapped.controls.focused=0;xml1_pc_map_gamepad(&mapped,&pad);REQUIRE(!pad.rx && !pad.ry);
        for(unsigned keyboard=0;keyboard<4;++keyboard) {
            mapped.settings.keyboard_player=keyboard;mapped.settings.separate_controllers=1;
            int physical=0;
            for(unsigned port=0;port<4;++port) {
                int slot=xml1_pc_controller_slot(&mapped.settings,port);
                if(port==keyboard)REQUIRE(slot==-1);else REQUIRE(slot==physical++);
            }
        }
        REQUIRE(xml1_pc_channel_create(&defaults));
        if(argc==2) {
            std::string command="\""+std::string(argv[1])+"\" --producer";
            STARTUPINFOA si{};si.cb=sizeof(si);PROCESS_INFORMATION pi{};
            REQUIRE(CreateProcessA(nullptr,command.data(),nullptr,nullptr,FALSE,CREATE_NO_WINDOW,nullptr,nullptr,&si,&pi));
            REQUIRE(WaitForSingleObject(pi.hProcess,10000)==WAIT_OBJECT_0);
            DWORD code;REQUIRE(GetExitCodeProcess(pi.hProcess,&code));
            CloseHandle(pi.hThread);CloseHandle(pi.hProcess);REQUIRE(code==0);
        } else {
            xml1_pc_channel_focus(1);xml1_pc_channel_key('W',1);xml1_pc_channel_key('W',0);
            xml1_pc_channel_key('A',1);xml1_pc_channel_mouse(320,240,120);
        }
        Xml1PcInputSnapshot s;
        REQUIRE(xml1_pc_channel_read(&s,1));REQUIRE(!s.controls.held['W']);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(s.controls.held['W']);
        REQUIRE(s.controls.held['A'] && s.controls.mouse_x==320 && s.controls.wheel==120);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.controls.held['W'] && !s.controls.wheel);
        REQUIRE(s.controls.held['A']);
        xml1_pc_channel_focus(0);xml1_pc_channel_key('W',1);xml1_pc_channel_focus(1);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.controls.held['W'] && !s.controls.held['A']);
        xml1_pc_channel_request_menu();xml1_pc_channel_set_menu(1);
        REQUIRE(xml1_pc_channel_read(&s,1));REQUIRE(s.menu_requested==1 && s.menu_active);
        REQUIRE(xml1_pc_channel_set_settings(&loaded));
        REQUIRE(xml1_pc_channel_read(&s,1));REQUIRE(s.settings.keyboard_player==2);
        xml1_pc_channel_close();
        // Native gamevar updates must survive edits, apply and a reopened menu,
        // without writing menu assets or retaining a reused native item binding.
        REQUIRE(xml1_pc_settings_save(path.u8string().c_str(),&defaults,error,sizeof(error)));
        auto previous_cwd=std::filesystem::current_path();
        std::filesystem::current_path(dir);
        REQUIRE(xml1_pc_native_token("pcnative_open"));
        xml1_pc_native_item(101,"pcnative_resolution");
        char label[160]={};
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1920x1080"));
        REQUIRE(!xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(xml1_pc_native_token("pcnative_resolution"));
        REQUIRE(!xml1_pc_native_value(101,label,4));
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1280x720"));
        REQUIRE(xml1_pc_native_token("pcnative_apply"));
        REQUIRE(xml1_pc_native_token("pcnative_defaults"));
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1920x1080"));
        REQUIRE(xml1_pc_native_token("pcnative_cancel"));
        REQUIRE(!xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(xml1_pc_native_token("pcnative_open"));
        REQUIRE(xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1280x720"));
        xml1_pc_native_item(101,nullptr);
        REQUIRE(!xml1_pc_native_value(101,label,sizeof(label)));
        REQUIRE(!xml1_pc_native_token("openmenu"));
        REQUIRE(!std::filesystem::exists("ui"));
        REQUIRE(xml1_pc_channel_create(&defaults));
        xml1_pc_channel_focus(1);
        xml1_pc_native_item(202,"pcnative_key_0_0");
        xml1_pc_channel_key(VK_RETURN,1);
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_key(VK_RETURN,1); // auto-repeat of the activation key
        REQUIRE(!xml1_pc_channel_capture_key());
        xml1_pc_channel_key(VK_RETURN,0);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(s.menu_active);
        xml1_pc_channel_key('T',1);xml1_pc_channel_key('T',0);
        REQUIRE(xml1_pc_channel_read(&s,0)); // ordinary consumer cannot lose capture
        REQUIRE(xml1_pc_native_value(202,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"T"));
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.menu_active && !s.controls.held['T']);
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_key(VK_ESCAPE,1);xml1_pc_channel_key(VK_ESCAPE,0);
        xml1_pc_native_value(202,label,sizeof(label));
        REQUIRE(!std::strcmp(label,"T"));
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        xml1_pc_channel_key(VK_DELETE,1);xml1_pc_channel_key(VK_DELETE,0);
        REQUIRE(xml1_pc_native_value(202,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Unbound"));
        std::set<std::string> listed_actions;
        for(unsigned page=0;page<5;++page) {
            for(unsigned row=0;row<7;++row) {
                auto variable="pcnative_rowname_"+std::to_string(row)+"_0";
                xml1_pc_native_item(203,variable.c_str());
                REQUIRE(xml1_pc_native_value(203,label,sizeof(label)));
                listed_actions.insert(label);
            }
            REQUIRE(xml1_pc_native_token("pcnative_scroll_next"));
        }
        REQUIRE(listed_actions.size()==XML1_PC_ACTION_COUNT);
        xml1_pc_native_item(203,"pcnative_rowkey_6_1");
        REQUIRE(xml1_pc_native_token("pcnative_rowbind_6_1"));
        xml1_pc_channel_key('Z',1);xml1_pc_channel_key('Z',0);
        REQUIRE(xml1_pc_native_value(203,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Z"));
        REQUIRE(xml1_pc_native_token("pcnative_rowbind_7_0"));
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.menu_active);
        // Opening a child closes its parent internally. Only closing the
        // registered Advanced Options owner may discard the current draft.
        xml1_pc_native_item(204,"pcnative_resolution");
        xml1_pc_native_owner(204,0x4000);
        xml1_pc_native_closed(0x3000);
        REQUIRE(xml1_pc_native_token("pcnative_resolution"));
        REQUIRE(xml1_pc_native_value(204,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1920x1080"));
        REQUIRE(xml1_pc_native_token("pcnative_bind_0_0"));
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(s.menu_active);
        xml1_pc_native_closed(0x4000);
        REQUIRE(xml1_pc_channel_read(&s,0));REQUIRE(!s.menu_active);
        REQUIRE(!xml1_pc_native_value(204,label,sizeof(label)));
        REQUIRE(xml1_pc_native_token("pcnative_open"));
        xml1_pc_native_item(204,"pcnative_resolution");
        REQUIRE(xml1_pc_native_value(204,label,sizeof(label)));
        REQUIRE(!std::strcmp(label,"Resolution: 1280x720"));
        xml1_pc_channel_close();
        std::filesystem::current_path(previous_cwd);
        std::filesystem::remove(path);std::filesystem::remove(dir);
        std::puts("PC settings, transactions, focus, short presses and input channel passed");return 0;
    } catch(const std::exception &e) {std::fprintf(stderr,"FAIL: %s\n",e.what());return 1;}
}
