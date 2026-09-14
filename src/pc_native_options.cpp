#include "pc_options_model.h"
#include "pc_input_channel.h"
#include <windows.h>
#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <string>
#include <cstdlib>

namespace {
Xml1PcOptionsModel native_model{};
unsigned native_owner=0;
struct NativeItem {
    std::string key, shown; bool initialized=false;
    int x=0,top=0,width=0,height=0;
};
std::unordered_map<unsigned, NativeItem> native_items;
constexpr unsigned visible_rows=7;
const char *action_labels[]={
    "Move forward","Move backward","Move left","Move right","Attack / Power 1",
    "Smash / Power 2","Jump / Xtreme","Use / Boost","Use powers","Health pack",
    "Energy pack","Call allies","Select hero: up","Select hero: down","Select hero: left",
    "Select hero: right","Map","Pause","Team stats","Camera up","Camera down",
    "Camera left","Camera right","Walk","Quick power 1","Quick power 2","Quick power 3",
    "Quick power 4","Rotate camera (hold)"
};
static_assert(sizeof(action_labels)/sizeof(*action_labels)==XML1_PC_ACTION_COUNT);
bool binding_index(const char *text,unsigned &action,unsigned &slot) {
    int end=0;
    return std::sscanf(text,"%u_%u%n",&action,&slot,&end)==2 && text[end]==0 &&
        action<XML1_PC_ACTION_COUNT && slot<2;
}
std::string key_name(unsigned key) {
    if(!key)return "Unbound";
    if(key==VK_LBUTTON)return "Left mouse";
    if(key==VK_RBUTTON)return "Right mouse";
    if(key==VK_MBUTTON)return "Middle mouse";
    if(key>=VK_NUMPAD0 && key<=VK_NUMPAD9)return "Num "+std::to_string(key-VK_NUMPAD0);
    char name[80]={};UINT scan=MapVirtualKeyA(key,MAPVK_VK_TO_VSC);
    if(key==VK_LEFT || key==VK_RIGHT || key==VK_UP || key==VK_DOWN || key==VK_DELETE)scan|=0x100;
    if(GetKeyNameTextA((LONG)(scan<<16),name,sizeof(name)))return name;
    return "Key "+std::to_string(key);
}
void capture_update() {
    if(native_model.binding_action<0)return;
    unsigned key=xml1_pc_channel_capture_key();if(!key)return;
    if(key==VK_ESCAPE) {
        native_model.binding_action=-1;native_model.status[0]=0;
    } else if(!xml1_pc_options_bind_slot(&native_model,native_model.binding_action,
        key==VK_DELETE?0:key,native_model.binding_alternate))return;
    xml1_pc_channel_capture(0);
    std::fprintf(stderr,"[PC NATIVE] binding capture ended key=%u\n",key);
}
std::string value(const std::string &key) {
    const auto &s=native_model.draft;
    unsigned action=0,slot=0;
    if(key.compare(0,8,"rowname_")==0 && binding_index(key.c_str()+8,action,slot) && action<visible_rows)
        return action_labels[native_model.page+action];
    if(key.compare(0,7,"rowkey_")==0 && binding_index(key.c_str()+7,action,slot) && action<visible_rows)
        return value("key_"+std::to_string(native_model.page+action)+"_"+std::to_string(slot));
    if(key=="scroll")return std::to_string(native_model.page+1)+" - "+
        std::to_string(native_model.page+visible_rows)+" of "+std::to_string(XML1_PC_ACTION_COUNT);
    if(key.compare(0,4,"key_")==0 && binding_index(key.c_str()+4,action,slot)) {
        if(native_model.binding_action==(int)action && native_model.binding_alternate==slot)return "Press key...";
        return key_name(slot?s.alternate_keys[action]:s.keys[action]);
    }
    if(key=="resolution")return "Resolution: "+std::to_string(s.width)+"x"+std::to_string(s.height);
    if(key=="window")return std::string("Window: ")+(s.fullscreen?"Fullscreen":"Windowed");
    if(key=="player")return "Keyboard player: "+std::to_string(s.keyboard_player+1);
    if(key=="sensitivity")return "Mouse sensitivity: "+std::to_string(s.mouse_sensitivity)+"%";
    if(key=="invert")return std::string("Invert camera: ")+(s.invert_camera_y?"On":"Off");
    if(key=="sharing")return std::string("Controllers: ")+(s.separate_controllers?"Separate":"Shared");
    if(key=="status")return native_model.status;
    return {};
}
}

// Called for each token by the existing native command dispatcher. Returning
// true consumes only this PC action; native semicolon-separated commands continue.
extern "C" int xml1_pc_native_token(const char *token) {
    if(!token || std::strncmp(token,"pcnative_",9))return 0;
    const char *action=token+9;
    if(!std::strcmp(action,"open")) {
        xml1_pc_channel_capture(0);
        Xml1PcSettings settings;char error[160]={};
        xml1_pc_settings_defaults(&settings);
        if(!xml1_pc_settings_load("pc-settings.ini",&settings,error,sizeof(error))) {
            std::fprintf(stderr,"[PC NATIVE] Cannot load settings: %s\n",error);return 1;
        }
        xml1_pc_options_open(&native_model,&settings);native_owner=0;
    } else if(!native_model.active) {
        std::fprintf(stderr,"[PC NATIVE] Ignored action outside settings session: %s\n",action);return 1;
    } else if(!std::strcmp(action,"cancel")) {
        xml1_pc_channel_capture(0);
        xml1_pc_options_cancel(&native_model);
    } else if(!std::strcmp(action,"defaults")) {
        xml1_pc_channel_capture(0);
        xml1_pc_options_defaults(&native_model);
    } else if(!std::strcmp(action,"scroll_next") || !std::strcmp(action,"scroll_prev")) {
        if(native_model.binding_action>=0)return 1;
        if(!std::strcmp(action,"scroll_next"))
            native_model.page=native_model.page+visible_rows>XML1_PC_ACTION_COUNT-visible_rows?
                XML1_PC_ACTION_COUNT-visible_rows:native_model.page+visible_rows;
        else native_model.page=native_model.page<visible_rows?0:native_model.page-visible_rows;
    } else if(!std::strncmp(action,"rowbind_",8)) {
        unsigned row=0,slot=0;
        if(binding_index(action+8,row,slot) && row<visible_rows) {
            auto command="pcnative_bind_"+std::to_string(native_model.page+row)+"_"+std::to_string(slot);
            return xml1_pc_native_token(command.c_str());
        }
    } else if(!std::strncmp(action,"bind_",5)) {
        unsigned index=0,slot=0;
        if(binding_index(action+5,index,slot) && xml1_pc_channel_capture(1)) {
            native_model.binding_action=index;native_model.binding_alternate=slot;
            std::snprintf(native_model.status,sizeof(native_model.status),"Press a key. Delete unbinds; Esc cancels.");
        }
    } else if(!std::strcmp(action,"apply")) {
        if(xml1_pc_options_apply(&native_model,"pc-settings.ini")) {
            Xml1PcInputSnapshot current{};
            if(xml1_pc_channel_read(&current,1)) {
                auto live=native_model.applied;
                live.width=current.settings.width;live.height=current.settings.height;
                live.fullscreen=current.settings.fullscreen;live.fsaa=current.settings.fsaa;
                live.keyboard_enabled=current.settings.keyboard_enabled;
                live.keyboard_player=current.settings.keyboard_player;
                live.separate_controllers=current.settings.separate_controllers;
                xml1_pc_channel_set_settings(&live);
            }
        }
    } else {
        auto &s=native_model.draft;native_model.status[0]=0;
        if(!std::strcmp(action,"resolution")) {
            if(s.width==1920){s.width=1280;s.height=720;}else{s.width=1920;s.height=1080;}
        } else if(!std::strcmp(action,"window"))s.fullscreen=!s.fullscreen;
        else if(!std::strcmp(action,"player"))s.keyboard_player=(s.keyboard_player+1)%4;
        else if(!std::strcmp(action,"sensitivity"))s.mouse_sensitivity=s.mouse_sensitivity>=300?25:s.mouse_sensitivity+25;
        else if(!std::strcmp(action,"invert"))s.invert_camera_y=!s.invert_camera_y;
        else if(!std::strcmp(action,"sharing"))s.separate_controllers=!s.separate_controllers;
        else {std::fprintf(stderr,"[PC NATIVE] Unknown action: %s\n",action);return 1;}
    }
    std::fprintf(stderr,"[PC NATIVE] action=%s resolution=%ux%u active=%u status=%s\n",action,
        native_model.draft.width,native_model.draft.height,native_model.active,native_model.status);
    return 1;
}

// The ordinary CMenuItem initializer resets registrations on every reuse.
extern "C" void xml1_pc_native_item(unsigned item,const char *gamevar) {
    native_items.erase(item);
    if(gamevar && !std::strncmp(gamevar,"pcnative_",9))
        native_items.emplace(item,NativeItem{gamevar+9,{}});
}
extern "C" int xml1_pc_native_value(unsigned item,char *buffer,unsigned size) {
    capture_update();
    auto it=native_items.find(item);
    if(it==native_items.end() || !native_model.active || !size)return 0;
    auto next=value(it->second.key);
    if((it->second.initialized && next==it->second.shown) || next.size()>=size)return 0;
    std::memcpy(buffer,next.c_str(),next.size()+1);it->second.shown=next;it->second.initialized=true;
    return 1;
}
extern "C" void xml1_pc_native_owner(unsigned item,unsigned owner) {
    if(native_model.active && native_items.find(item)!=native_items.end())native_owner=owner;
}
extern "C" void xml1_pc_native_bounds(unsigned item,int x,int top,int width,int height) {
    auto it=native_items.find(item);
    if(it==native_items.end() || !native_model.active)return;
    auto &entry=it->second;
    if(entry.x==x && entry.top==top && entry.width==width && entry.height==height)return;
    entry.x=x;entry.top=top;entry.width=width;entry.height=height;
    if(std::getenv("XML1_PC_NATIVE_BOUNDS"))
        std::fprintf(stderr,"[PC BOUNDS] %s x=%d top=%d width=%d height=%d owner=%08X\n",
            entry.key.c_str(),x,top,width,height,native_owner);
}
extern "C" void xml1_pc_native_closed(unsigned owner) {
    if(!native_model.active || !native_owner || owner!=native_owner)return;
    xml1_pc_channel_capture(0);
    xml1_pc_options_cancel(&native_model);
    std::fprintf(stderr,"[PC NATIVE] Native menu closed; discarded unapplied draft\n");
}
