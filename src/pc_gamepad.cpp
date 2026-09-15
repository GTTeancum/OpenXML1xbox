#include "pc_gamepad.h"
#include <cmath>
#include <algorithm>
static_assert(sizeof(Xml1PcGamepad)==18);
extern "C" const char *xml1_pc_controller_source_name(unsigned source) {
    static const char *names[]={"Unbound","A","B","X","Y","Black","White",
        "Left trigger","Right trigger","D-pad up","D-pad down","D-pad left","D-pad right",
        "Start","Back","Left stick click","Right stick click","Left stick left","Left stick right",
        "Left stick down","Left stick up","Right stick left","Right stick right","Right stick down","Right stick up"};
    static_assert(sizeof(names)/sizeof(*names)==XML1_PAD_SOURCE_COUNT);
    return source<XML1_PAD_SOURCE_COUNT?names[source]:"Invalid";
}
extern "C" uint32_t xml1_pc_controller_sources(const Xml1PcGamepad *p,int release_threshold) {
    if(!p)return 0;
    uint32_t mask=0;
    for(unsigned i=0;i<8;++i)if(p->analog[i]>(release_threshold?30:127))mask|=1u<<(XML1_PAD_A+i);
    for(unsigned i=0;i<8;++i)if(p->buttons&(1u<<i))mask|=1u<<(XML1_PAD_UP+i);
    const int axes[]={p->lx,p->ly,p->rx,p->ry};
    for(unsigned i=0;i<4;++i) {
        int threshold=release_threshold?(i<2?7849:8689):16384;
        if(axes[i]<-threshold)mask|=1u<<(XML1_PAD_LX_NEG+2*i);
        if(axes[i]>threshold)mask|=1u<<(XML1_PAD_LX_POS+2*i);
    }
    return mask;
}
extern "C" void xml1_pc_remap_controller(const Xml1PcSettings *s,unsigned player,int native_menu,Xml1PcGamepad *p) {
    if(!s || !p || player>=4 || native_menu)return;
    const Xml1PcGamepad raw=*p;
    auto source=[&](unsigned code) -> int {
        if(code>=XML1_PAD_A && code<=XML1_PAD_RT)
            return (int)raw.analog[code-XML1_PAD_A]*32768/255;
        if(code>=XML1_PAD_UP && code<=XML1_PAD_RTHUMB)
            return (raw.buttons&(1u<<(code-XML1_PAD_UP)))?32768:0;
        if(code>=XML1_PAD_LX_NEG && code<=XML1_PAD_RY_POS) {
            const int axes[]={raw.lx,raw.ly,raw.rx,raw.ry};
            unsigned direction=code-XML1_PAD_LX_NEG;
            return std::max(0,(direction&1)?axes[direction/2]:-axes[direction/2]);
        }
        return 0;
    };
    auto strength=[&](unsigned action) {
        return std::max(source(s->pad_bindings[player][action]),source(s->alternate_pad_bindings[player][action]));
    };
    auto axis=[&](unsigned positive,unsigned negative) -> int16_t {
        return (int16_t)std::clamp(strength(positive)-strength(negative),-32768,32767);
    };
    auto pressure=[](int value) -> uint8_t {return (uint8_t)((value*255+16384)/32768);};
    *p={};
    // Right-thumb click has no exposed XML1 action. Retain it unless explicitly
    // assigned; retain reserved bits as well so defaults preserve native input.
    bool mapped_rthumb=false;
    for(unsigned i=0;i<XML1_PC_ACTION_COUNT;++i)
        mapped_rthumb|=s->pad_bindings[player][i]==XML1_PAD_RTHUMB || s->alternate_pad_bindings[player][i]==XML1_PAD_RTHUMB;
    p->buttons=raw.buttons&(mapped_rthumb?0xff00:0xff80);
    p->lx=axis(XML1_PC_RIGHT,XML1_PC_LEFT);p->ly=axis(XML1_PC_FORWARD,XML1_PC_BACKWARD);
    p->rx=axis(XML1_PC_CAMERA_RIGHT,XML1_PC_CAMERA_LEFT);p->ry=axis(XML1_PC_CAMERA_UP,XML1_PC_CAMERA_DOWN);
    if(strength(XML1_PC_WALK)>16384) {
        p->lx=(int16_t)((int)p->lx*12000/32768);p->ly=(int16_t)((int)p->ly*12000/32768);
    }
    const unsigned analog[]={XML1_PC_ATTACK,XML1_PC_SMASH,XML1_PC_USE,XML1_PC_JUMP,
        XML1_PC_ENERGY,XML1_PC_HEALTH,XML1_PC_ALLIES,XML1_PC_POWERS};
    for(unsigned i=0;i<8;++i)p->analog[i]=pressure(strength(analog[i]));
    const unsigned digital[]={XML1_PC_HERO_UP,XML1_PC_HERO_DOWN,XML1_PC_HERO_LEFT,XML1_PC_HERO_RIGHT,
        XML1_PC_PAUSE,XML1_PC_STATS,XML1_PC_MAP};
    for(unsigned i=0;i<7;++i)if(strength(digital[i])>16384)p->buttons|=(uint16_t)(1u<<i);
    const unsigned power_button[]={0,1,3,2};
    for(unsigned i=0;i<4;++i)if(strength(XML1_PC_POWER1+i)>16384) {
        p->analog[7]=255;p->analog[power_button[i]]=255;
    }
}
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
        // The action mapper at guest 00117F69..0011817E activates stick
        // actions only outside [-0.5, 0.5], after device normalization.
        // Mouse motion has no physical stick center to protect: map each
        // nonzero delta into the active half of the range, keeping rest zero.
        auto mouse_axis=[&](int64_t delta) -> int16_t {
            if(!delta)return 0;
            const int64_t scaled=std::min<int64_t>(std::abs(delta)*s.mouse_sensitivity*8,32767);
            constexpr int threshold=16385;
            const int magnitude=threshold+(int)(scaled*(32767-threshold)/32767);
            return (int16_t)(delta<0?-magnitude:magnitude);
        };
        p->rx=mouse_axis(state.mouse_dx);
        // XML1 uses vertical stick for zoom. Gameplay checks show partial
        // pulses can be ignored while full pulses (also used by I/K) zoom.
        // Treat vertical drag as the native zoom direction, not camera pitch.
        const int64_t zoom=s.invert_camera_y?(int64_t)state.mouse_dy:-(int64_t)state.mouse_dy;
        p->ry=zoom<0?-32767:zoom>0?32767:0;
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
    // Start accepts the selected item in XML1 menus. Esc must instead send
    // native Back there, while retaining its Pause binding during gameplay.
    if((input->native_menu&2u) && state.held[27]) {
        p->buttons&=~(1u<<4);
        p->analog[1]=255;
    }
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
