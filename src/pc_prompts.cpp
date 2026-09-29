#include "pc_prompts.h"
#include <windows.h>
#include <string>
#include <cstring>
static std::string key_label(unsigned key) {
    if(!key)return "Unbound";
    if(key==VK_LBUTTON)return "LMB";
    if(key==VK_RBUTTON)return "RMB";
    if(key==VK_MBUTTON)return "MMB";
    if(key>=VK_NUMPAD0 && key<=VK_NUMPAD9)return "Num"+std::to_string(key-VK_NUMPAD0);
    if(key==VK_ESCAPE)return "Esc";
    if(key==VK_RETURN)return "Enter";
    if(key==VK_BACK)return "Bksp";
    char text[80]={};unsigned scan=MapVirtualKeyA(key,MAPVK_VK_TO_VSC);
    if(key==VK_LEFT || key==VK_RIGHT || key==VK_UP || key==VK_DOWN || key==VK_DELETE)scan|=0x100;
    if(GetKeyNameTextA((LONG)(scan<<16),text,sizeof(text)))return text;
    return "Key "+std::to_string(key);
}
static const struct {const char *token;unsigned action;} bindings[]={
            {"ATTACK",XML1_PC_ATTACK},{"SMASH",XML1_PC_SMASH},{"GUARD",XML1_PC_USE},
            {"MOVE",XML1_PC_JUMP},{"POWER",XML1_PC_POWERS},{"ALLY",XML1_PC_ALLIES},
            {"DPAD_UP",XML1_PC_HERO_UP},{"DPAD_DN",XML1_PC_HERO_DOWN},
            {"MAP_TOGGLE",XML1_PC_MAP},{"PAUSE",XML1_PC_PAUSE},{"MENU",XML1_PC_STATS},
            {"MENU_OTHER",XML1_PC_JUMP},{"MENU_OK",XML1_PC_PAUSE},{"MENU_SUBTRACT",XML1_PC_USE},{"MENU_DROP",XML1_PC_ALLIES},
            // Retail action IDs 22/23 (0011A1BB/0011A1FB) are the right/left
            // triggers (00119698/001196D8), shared with Powers/CallAllies.
            {"MENU_NEXT",XML1_PC_POWERS},{"MENU_PREV",XML1_PC_ALLIES}};

extern "C" int xml1_pc_prompt_supported(const char *token) {
    if(!token)return 0;
    if(!std::strcmp(token,"MENU_ACCEPT") || !std::strcmp(token,"MENU_BACK"))return 1;
    for(const auto &binding:bindings)if(!std::strcmp(token,binding.token))return 1;
    return 0;
}
extern "C" int xml1_pc_prompt_text(const Xml1PcInputSnapshot *input,const char *token,char *out,unsigned capacity) {
    if(!input || !token || !out || !capacity || !input->last_device || !input->settings.keyboard_enabled)return 0;
    const auto &s=input->settings;if(s.keyboard_player>=4)return 0;
    std::string label;
    if(!std::strcmp(token,"MENU_ACCEPT"))label="Enter";
    else if(!std::strcmp(token,"MENU_BACK"))label="Bksp";
    else {
        bool found=false;
        for(const auto &binding:bindings)if(!std::strcmp(token,binding.token)) {
            unsigned first=s.keys[s.keyboard_player][binding.action],second=s.alternate_keys[s.keyboard_player][binding.action];
            label=key_label(first?first:second);
            if(first && second && first!=second)label+=" / "+key_label(second);
            found=true;break;
        }
        if(!found)return 0;
    }
    label="["+label+"]";
    if(label.size()>=capacity)return 0;
    std::memcpy(out,label.c_str(),label.size()+1);return 1;
}
