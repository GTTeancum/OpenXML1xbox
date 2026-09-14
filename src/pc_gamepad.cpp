#include "pc_gamepad.h"
#include <cmath>
#include <algorithm>
static_assert(sizeof(Xml1PcGamepad)==18);
extern "C" int xml1_pc_controller_slot(const Xml1PcSettings *s,unsigned port) {
    if(port>=4)return -1;
    if(!s->keyboard_enabled || !s->separate_controllers)return (int)port;
    if(port==s->keyboard_player)return -1;
    return (int)port-(port>s->keyboard_player?1:0);
}
extern "C" void xml1_pc_map_gamepad(const Xml1PcInputSnapshot *input,Xml1PcGamepad *p) {
    *p={};
    const auto &s=input->settings;const auto &state=input->controls;
    if(input->menu_active || !state.focused || !s.keyboard_enabled)return;
    auto down=[&](unsigned a){return xml1_pc_action_down(&s,&state,a);};
    int x=down(XML1_PC_RIGHT)-down(XML1_PC_LEFT),y=down(XML1_PC_FORWARD)-down(XML1_PC_BACKWARD);
    int magnitude=down(XML1_PC_WALK)?12000:32767;
    if(x && y)magnitude=(int)(magnitude/std::sqrt(2.0));
    p->lx=(int16_t)(x*magnitude);p->ly=(int16_t)(y*magnitude);
    p->rx=(int16_t)((down(XML1_PC_CAMERA_RIGHT)-down(XML1_PC_CAMERA_LEFT))*32767);
    p->ry=(int16_t)((down(XML1_PC_CAMERA_UP)-down(XML1_PC_CAMERA_DOWN))*32767);
    if(down(XML1_PC_CAMERA_DRAG)) {
        int dx=state.mouse_dx*(int)s.mouse_sensitivity*8;
        int dy=state.mouse_dy*(int)s.mouse_sensitivity*8;
        p->rx=(int16_t)std::clamp(dx,-32767,32767);
        p->ry=(int16_t)std::clamp(s.invert_camera_y?dy:-dy,-32767,32767);
    }
    const unsigned buttons[]={XML1_PC_ATTACK,XML1_PC_SMASH,XML1_PC_USE,XML1_PC_JUMP,
        XML1_PC_ENERGY,XML1_PC_HEALTH,XML1_PC_ALLIES,XML1_PC_POWERS};
    for(unsigned i=0;i<8;++i)p->analog[i]=down(buttons[i])?255:0;
    const unsigned digital[]={XML1_PC_HERO_UP,XML1_PC_HERO_DOWN,XML1_PC_HERO_LEFT,XML1_PC_HERO_RIGHT,
        XML1_PC_PAUSE,XML1_PC_STATS,XML1_PC_MAP};
    for(unsigned i=0;i<7;++i)if(down(digital[i]))p->buttons|=(uint16_t)(1<<i);
    // Legacy XML1 lists retain their native selection/accept behavior. Wheel
    // movement navigates that selection; the same directions select heroes.
    if(state.wheel>0)p->buttons|=1;
    if(state.wheel<0)p->buttons|=2;
    const unsigned power_button[]={0,1,3,2};
    for(unsigned i=0;i<4;++i)if(down(XML1_PC_POWER1+i)) {p->analog[7]=255;p->analog[power_button[i]]=255;}
    // Native menu accept/back are available without changing gameplay bindings.
    if(state.held[13])p->analog[0]=255; // Enter
    if(state.held[8])p->analog[1]=255;  // Backspace
}
extern "C" void xml1_pc_merge_gamepad(Xml1PcGamepad *pad,const Xml1PcGamepad *keyboard) {
    pad->buttons|=keyboard->buttons;
    for(unsigned i=0;i<8;++i)pad->analog[i]=std::max(pad->analog[i],keyboard->analog[i]);
    auto merge=[](int16_t &a,int16_t b){if(std::abs((int)b)>std::abs((int)a))a=b;};
    merge(pad->lx,keyboard->lx);merge(pad->ly,keyboard->ly);merge(pad->rx,keyboard->rx);merge(pad->ry,keyboard->ry);
}
