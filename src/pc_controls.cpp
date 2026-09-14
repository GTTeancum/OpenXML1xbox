#include "pc_controls.h"
#include <cstdio>
#include <cstring>
#include <string>
#include <fstream>
#include <filesystem>
#include <charconv>
#include <windows.h>

static const char *action_names[] = {
    "MoveForward", "MoveBackward", "MoveLeft", "MoveRight",
    "Attack", "Smash", "Jump", "Use", "Powers", "HealthPack", "EnergyPack", "CallAllies",
    "HeroUp", "HeroDown", "HeroLeft", "HeroRight", "Map", "Pause", "Stats",
    "CameraUp", "CameraDown", "CameraLeft", "CameraRight", "Walk",
    "Power1", "Power2", "Power3", "Power4", "RotateCamera"
};
static_assert(sizeof(action_names)/sizeof(action_names[0]) == XML1_PC_ACTION_COUNT);
extern "C" const char *xml1_pc_action_name(unsigned action) {
    return action < XML1_PC_ACTION_COUNT ? action_names[action] : "";
}
extern "C" void xml1_pc_settings_defaults(Xml1PcSettings *s) {
    *s = {};
    s->width=1920; s->height=1080; s->keyboard_enabled=1;
    s->mouse_sensitivity=100;
    const uint32_t keys[]={'W','S','A','D',VK_NUMPAD4,VK_NUMPAD6,VK_SPACE,'E',
        VK_NUMPAD5,'P','O','C',VK_UP,VK_DOWN,VK_LEFT,VK_RIGHT,'M',VK_ESCAPE,VK_F1,
        'I','K','J','L',VK_SHIFT,'1','2','3','4','V'};
    static_assert(sizeof(keys)==sizeof(s->keys));
    std::memcpy(s->keys, keys, sizeof(keys));
    s->alternate_keys[XML1_PC_ATTACK]=VK_LBUTTON;
    s->alternate_keys[XML1_PC_SMASH]=VK_RBUTTON;
    s->alternate_keys[XML1_PC_CAMERA_DRAG]=VK_MBUTTON;
}
static int fail(char *error,unsigned capacity,const char *message) {
    if(capacity) std::snprintf(error,capacity,"%s",message);
    return 0;
}
extern "C" int xml1_pc_binding_conflict(const Xml1PcSettings *s,unsigned action,unsigned key) {
    if(!key) return -1;
    for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)
        if(i!=action && (s->keys[i]==key || s->alternate_keys[i]==key)) return (int)i;
    return -1;
}
extern "C" int xml1_pc_settings_validate(const Xml1PcSettings *s,char *error,unsigned capacity) {
    if(!((s->width==640 && s->height==480) || (s->width==1280 && s->height==720) ||
         (s->width==1920 && s->height==1080))) return fail(error,capacity,"Unsupported resolution");
    if(s->fullscreen>1 || s->keyboard_enabled>1 || s->separate_controllers>1 ||
       s->invert_camera_y>1 || s->keyboard_player>3) return fail(error,capacity,"Invalid input/display option");
    if(s->fsaa!=0) return fail(error,capacity,"FSAA is not yet supported by the native DX8 completion/capture path");
    if(s->mouse_sensitivity<10 || s->mouse_sensitivity>300) return fail(error,capacity,"Mouse sensitivity must be 10 through 300");
    for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i) {
        if(s->keys[i]>255 || s->alternate_keys[i]>255) return fail(error,capacity,"Invalid key binding");
        if(s->keys[i]==VK_RETURN || s->keys[i]==VK_BACK || s->alternate_keys[i]==VK_RETURN || s->alternate_keys[i]==VK_BACK)
            return fail(error,capacity,"Enter and Backspace are reserved for menu accept/back");
        if(xml1_pc_binding_conflict(s,i,s->keys[i])>=0 || xml1_pc_binding_conflict(s,i,s->alternate_keys[i])>=0)
            return fail(error,capacity,"A key is assigned to more than one action");
    }
    if(capacity) error[0]=0;
    return 1;
}
struct Field { const char *name; uint32_t Xml1PcSettings::*member; };
static const Field fields[]={
    {"Width",&Xml1PcSettings::width},{"Height",&Xml1PcSettings::height},
    {"Fullscreen",&Xml1PcSettings::fullscreen},{"FSAA",&Xml1PcSettings::fsaa},
    {"KeyboardEnabled",&Xml1PcSettings::keyboard_enabled},{"KeyboardPlayer",&Xml1PcSettings::keyboard_player},
    {"SeparateControllers",&Xml1PcSettings::separate_controllers},
    {"MouseSensitivity",&Xml1PcSettings::mouse_sensitivity},{"InvertCameraY",&Xml1PcSettings::invert_camera_y}
};
static std::string trim(std::string s) {
    auto a=s.find_first_not_of(" \t\r\n"), b=s.find_last_not_of(" \t\r\n");
    return a==std::string::npos?"":s.substr(a,b-a+1);
}
extern "C" int xml1_pc_settings_load(const char *path,Xml1PcSettings *out,char *error,unsigned capacity) {
    try {
        Xml1PcSettings s; xml1_pc_settings_defaults(&s);
        if(!std::filesystem::exists(std::filesystem::u8path(path))) { *out=s;return 1; }
        std::ifstream input(std::filesystem::u8path(path));
        if(!input) return fail(error,capacity,"Cannot read PC settings");
        std::string line, section;
        while(std::getline(input,line)) {
            line=trim(line.substr(0,line.find_first_of(";#")));
            if(line.empty()) continue;
            if(line.front()=='[' && line.back()==']') { section=line.substr(1,line.size()-2);continue; }
            auto eq=line.find('=');
            if(eq==std::string::npos) return fail(error,capacity,"PC setting requires name=value");
            auto key=trim(line.substr(0,eq)), value=trim(line.substr(eq+1));
            uint32_t n=0; auto parsed=std::from_chars(value.data(),value.data()+value.size(),n);
            if(parsed.ec!=std::errc() || parsed.ptr!=value.data()+value.size())
                return fail(error,capacity,"PC setting requires an unsigned integer");
            bool found=false;
            if(section=="PC") for(const auto &field:fields) if(key==field.name) {s.*field.member=n;found=true;break;}
            if(section=="Bindings" || section=="AlternateBindings") for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)
                if(key==action_names[i]) {(section=="Bindings"?s.keys[i]:s.alternate_keys[i])=n;found=true;break;}
            if(!found) return fail(error,capacity,"Unknown PC setting");
        }
        if(input.bad()) return fail(error,capacity,"PC settings read failed");
        for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)if(s.keys[i]==s.alternate_keys[i])s.alternate_keys[i]=0;
        if(!xml1_pc_settings_validate(&s,error,capacity)) return 0;
        *out=s; return 1;
    } catch(const std::exception &e) {return fail(error,capacity,e.what());}
}
extern "C" int xml1_pc_settings_save(const char *path,const Xml1PcSettings *s,char *error,unsigned capacity) {
    if(!xml1_pc_settings_validate(s,error,capacity)) return 0;
    try {
        auto target=std::filesystem::u8path(path), temp=target;
        temp+=L".tmp";
        std::ofstream output(temp,std::ios::binary|std::ios::trunc);
        if(!output) return fail(error,capacity,"Cannot write PC settings");
        output<<"[PC]\n";
        for(const auto &field:fields) output<<field.name<<" = "<<s->*field.member<<"\n";
        output<<"\n[Bindings]\n";
        for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i) output<<action_names[i]<<" = "<<s->keys[i]<<"\n";
        output<<"\n[AlternateBindings]\n";
        for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i) output<<action_names[i]<<" = "<<s->alternate_keys[i]<<"\n";
        output.close();
        if(!output || !MoveFileExW(temp.c_str(),target.c_str(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH))
            return fail(error,capacity,"Could not replace PC settings; previous settings retained");
        return 1;
    } catch(const std::exception &e) {return fail(error,capacity,e.what());}
}
extern "C" void xml1_pc_control_focus(Xml1PcControlState *state,int focused) {
    std::memset(state->held,0,sizeof(state->held)); state->wheel=0; state->focused=focused!=0;
    state->mouse_dx=state->mouse_dy=0;
}
extern "C" void xml1_pc_control_key(Xml1PcControlState *state,unsigned key,int down) {
    if(key<256 && state->focused) state->held[key]=down!=0;
}
extern "C" int xml1_pc_action_down(const Xml1PcSettings *settings,const Xml1PcControlState *state,unsigned action) {
    if(!settings->keyboard_enabled || !state->focused || action>=XML1_PC_ACTION_COUNT)return 0;
    unsigned a=settings->keys[action],b=settings->alternate_keys[action];
    return (a>0 && a<256 && state->held[a]) || (b>0 && b<256 && state->held[b]);
}
