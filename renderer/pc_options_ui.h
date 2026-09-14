#pragma once
#include "pc_options_model.h"
#include "pc_input_channel.h"
#include <algorithm>
#include <string>
#include <xinput.h>

// Native DX8 presentation. GDI builds the panel's text/shape texture locally;
// the game backbuffer, state and screenshots remain owned by Direct3D8.
namespace pc_ui {
static Xml1PcOptionsModel model{};
static IDirect3DTexture8 *texture=nullptr;
static bool dirty=true;
static unsigned seen_request=0;
static unsigned width=1280,height=720;
static unsigned client_width=1280,client_height=720;
static const int panel_width=1280,panel_height=720;
static const char *settings_path="pc-settings.ini";
static bool physical_input=false;
static bool controller_armed=false;
static bool controller_prompts=false;
static const char *action_labels[]={
    "Move forward","Move backward","Move left","Move right","Attack / Power 1",
    "Smash / Power 2","Jump / Xtreme","Use / Boost","Use powers","Health pack",
    "Energy pack","Call allies","Select hero: up","Select hero: down","Select hero: left",
    "Select hero: right","Map","Pause","Team stats","Camera up","Camera down",
    "Camera left","Camera right","Walk","Quick power 1","Quick power 2","Quick power 3","Quick power 4","Hold + mouse: rotate camera"
};
static std::string key_name(unsigned key) {
    if(!key)return "Unbound";
    if(key==VK_LBUTTON)return "Left mouse";
    if(key==VK_RBUTTON)return "Right mouse";
    if(key==VK_MBUTTON)return "Middle mouse";
    if(key==VK_SHIFT)return "Shift";
    if(key>=VK_NUMPAD0 && key<=VK_NUMPAD9)return "Num "+std::to_string(key-VK_NUMPAD0);
    char name[80]={};
    UINT scan=MapVirtualKeyA(key,MAPVK_VK_TO_VSC);
    if(key==VK_LEFT || key==VK_RIGHT || key==VK_UP || key==VK_DOWN || key==VK_DELETE)scan|=0x100;
    if(GetKeyNameTextA((LONG)(scan<<16),name,sizeof(name)))return name;
    return "Key "+std::to_string(key);
}
static unsigned row_count() {return model.page==0?8:model.page==1?14:XML1_PC_ACTION_COUNT-14;}
static void open(const Xml1PcSettings &settings) {
    Xml1PcSettings saved=settings;char error[160]={};
    if(GetFileAttributesA(settings_path)!=INVALID_FILE_ATTRIBUTES &&
       !xml1_pc_settings_load(settings_path,&saved,error,sizeof(error)))saved=settings;
    xml1_pc_options_open(&model,&saved);xml1_pc_channel_set_menu(1);dirty=true;
    if(error[0])std::snprintf(model.status,sizeof(model.status),"%s",error);
    controller_armed=false;
}
static void close() {
    xml1_pc_options_cancel(&model);xml1_pc_channel_set_menu(0);dirty=true;
}
static void apply() {
    Xml1PcInputSnapshot input;
    bool connected=xml1_pc_channel_read(&input,1)!=0;
    if(xml1_pc_options_apply(&model,settings_path) && connected) {
        auto live=model.applied;
        // Do not disconnect/reassign a joined player while the user is in a menu.
        live.width=input.settings.width;live.height=input.settings.height;
        live.fullscreen=input.settings.fullscreen;live.fsaa=input.settings.fsaa;
        live.keyboard_enabled=input.settings.keyboard_enabled;live.keyboard_player=input.settings.keyboard_player;
        live.separate_controllers=input.settings.separate_controllers;
        xml1_pc_channel_set_settings(&live);
    }
    dirty=true;
}
static void cycle(int direction) {
    auto &s=model.draft;
    if(model.page) {model.binding_action=(model.page-1)*14+model.row;model.status[0]=0;dirty=true;return;}
    switch(model.row) {
    case 0: {
        const unsigned widths[]={640,1280,1920},heights[]={480,720,1080};
        int index=s.width==640?0:s.width==1280?1:2;index=(index+direction+3)%3;
        s.width=widths[index];s.height=heights[index];break;
    }
    case 1:s.fullscreen=!s.fullscreen;break;
    case 2:std::snprintf(model.status,sizeof(model.status),"Anti-aliasing is not available in this build.");break;
    case 3:s.keyboard_enabled=!s.keyboard_enabled;break;
    case 4:s.keyboard_player=(s.keyboard_player+direction+4)%4;break;
    case 5:s.separate_controllers=!s.separate_controllers;break;
    case 6:s.mouse_sensitivity=std::clamp((int)s.mouse_sensitivity+direction*10,10,300);break;
    case 7:s.invert_camera_y=!s.invert_camera_y;break;
    }
    dirty=true;
}
static void key(unsigned key) {
    if(!model.active)return;
    if(model.binding_action>=0) {
        if(key==VK_ESCAPE)model.binding_action=-1;
        else xml1_pc_options_bind_slot(&model,(unsigned)model.binding_action,key==VK_DELETE?0:key,model.binding_alternate);
        dirty=true;return;
    }
    if(key==VK_ESCAPE) {close();return;}
    if(key==VK_TAB) {model.page=(model.page+1)%3;model.row=0;dirty=true;return;}
    if(key==VK_F5) {apply();return;}
    if(key==VK_F9) {xml1_pc_options_defaults(&model);dirty=true;return;}
    if(key==VK_UP)model.row=(model.row+row_count()-1)%row_count();
    else if(key==VK_DOWN)model.row=(model.row+1)%row_count();
    else if(model.page && (key==VK_LEFT || key==VK_RIGHT))model.binding_alternate=!model.binding_alternate;
    else if(key==VK_LEFT)cycle(-1);
    else if(key==VK_RIGHT || key==VK_RETURN)cycle(1);
    dirty=true;
}
static void mouse(int x,int y,int click,int wheel) {
    if(!model.active)return;
    x=(int)((int64_t)x*panel_width/client_width);y=(int)((int64_t)y*panel_height/client_height);
    if(model.binding_action>=0) {if(click)key((unsigned)click);return;}
    if(wheel) {key(wheel>0?VK_UP:VK_DOWN);return;}
    if(click!=VK_LBUTTON)return;
    if(y>=132 && y<181 && x>=84 && x<1196) {
        model.page=std::min(2,(x-84)/371);model.row=0;dirty=true;return;
    }
    int pitch=model.page?25:46;
    if(y>=196 && y<196+(int)row_count()*pitch && x>=94 && x<=1186) {
        model.row=(y-196)/pitch;if(model.page)model.binding_alternate=x>=944;
        cycle(x<820?-1:1);return;
    }
    if(y>=610 && y<660) {
        if(x>=84 && x<350)apply();
        else if(x>=374 && x<640)close();
        else if(x>=930 && x<1196) {xml1_pc_options_defaults(&model);dirty=true;}
    }
}
static void input_key(unsigned value,bool down) {
    if(controller_prompts && down) {controller_prompts=false;dirty=true;}
    if(model.active) {if(down)key(value);}else xml1_pc_channel_key(value,down);
}
static void input_mouse(int x,int y,unsigned button,bool down,int wheel) {
    if(controller_prompts && (down || wheel)) {controller_prompts=false;dirty=true;}
    if(model.active)mouse(x,y,down?button:0,wheel);
    else {xml1_pc_channel_mouse(x,y,wheel);if(button)xml1_pc_channel_key(button,down);}
}
static void controller_actions(WORD pressed) {
    if(pressed && !controller_prompts) {controller_prompts=true;dirty=true;}
    if(pressed&XINPUT_GAMEPAD_DPAD_UP)key(VK_UP);
    if(pressed&XINPUT_GAMEPAD_DPAD_DOWN)key(VK_DOWN);
    if(pressed&XINPUT_GAMEPAD_DPAD_LEFT)key(VK_LEFT);
    if(pressed&XINPUT_GAMEPAD_DPAD_RIGHT)key(VK_RIGHT);
    if(pressed&XINPUT_GAMEPAD_A)key(VK_RETURN);
    if(pressed&XINPUT_GAMEPAD_B)key(VK_ESCAPE);
    if(pressed&XINPUT_GAMEPAD_X)key(VK_F5);
    if(pressed&XINPUT_GAMEPAD_Y)key(VK_F9);
    if(pressed&(XINPUT_GAMEPAD_LEFT_SHOULDER|XINPUT_GAMEPAD_RIGHT_SHOULDER))key(VK_TAB);
}
static void test_input() {
    // Explicit process-local fixture. Never sends a message to a HWND or the OS.
    const char *path=std::getenv("XML1_PC_TEST_INPUT");if(!path || !*path)return;
    FILE *file=std::fopen(path,"rb");if(!file)return;
    char line[128]={},command[24]={},extra;unsigned id=0;int a=0,b=0,c=0;
    bool complete=std::fgets(line,sizeof(line),file) && std::strchr(line,'\n');std::fclose(file);
    if(!complete)return;
    int fields=std::sscanf(line,"%u %23s %d %d %d %c",&id,command,&a,&b,&c,&extra);
    static unsigned previous=0;if(id<=previous)return;
    if(fields==3 && !std::strcmp(command,"focus"))xml1_pc_channel_focus(a);
    else if(fields==3 && !std::strcmp(command,"pad") && a>=0 && a<=65535)controller_actions((WORD)a);
    else if(fields==3 && (!std::strcmp(command,"down") || !std::strcmp(command,"up")) && a>=0 && a<256)
        input_key((unsigned)a,!std::strcmp(command,"down"));
    else if(fields==5 && !std::strcmp(command,"click") && (c==1 || c==2 || c==4)) {
        input_mouse(a,b,c,true,0);input_mouse(a,b,c,false,0);
    } else if(fields==5 && !std::strcmp(command,"mouse"))input_mouse(a,b,0,false,c);
    else throw std::runtime_error("Malformed process-local PC input fixture");
    previous=id;std::printf("[PC INPUT TEST] %s",line);
}
static void controller() {
    if(!physical_input || !model.active)return;
    Xml1PcInputSnapshot input;
    if(!xml1_pc_channel_read(&input,1) || !input.controls.focused) {controller_armed=false;return;}
    static WORD previous[4]={};static ULONGLONG repeat[4]={};
    bool all_released=true;
    for(unsigned port=0;port<4;++port) {
        XINPUT_STATE state={};WORD held=XInputGetState(port,&state)==ERROR_SUCCESS?state.Gamepad.wButtons:0;
        if(held)all_released=false;
        if(!controller_armed) {previous[port]=held;continue;}
        WORD pressed=held&~previous[port];ULONGLONG now=GetTickCount64();
        if(held!=previous[port])repeat[port]=now+350;
        else if(held && now>=repeat[port]) {pressed|=held&15;repeat[port]=now+120;}
        previous[port]=held;
        controller_actions(pressed);
    }
    if(all_released)controller_armed=true;
}
static void fill(HDC dc,RECT r,COLORREF color) {HBRUSH b=CreateSolidBrush(color);FillRect(dc,&r,b);DeleteObject(b);}
static void text(HDC dc,const std::string &s,RECT r,int size,COLORREF color,bool bold=false,UINT align=DT_LEFT) {
    HFONT font=CreateFontA(-size,0,0,0,bold?FW_BOLD:FW_NORMAL,FALSE,FALSE,FALSE,ANSI_CHARSET,
        OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,ANTIALIASED_QUALITY,DEFAULT_PITCH,"Segoe UI");
    auto old=SelectObject(dc,font);SetTextColor(dc,color);SetBkMode(dc,TRANSPARENT);
    DrawTextA(dc,s.c_str(),(int)s.size(),&r,align|DT_VCENTER|DT_SINGLELINE|DT_END_ELLIPSIS|DT_NOPREFIX);
    SelectObject(dc,old);DeleteObject(font);
}
static void rebuild(IDirect3DDevice8 *device) {
    BITMAPINFO info{};info.bmiHeader.biSize=sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth=panel_width;info.bmiHeader.biHeight=-panel_height;
    info.bmiHeader.biPlanes=1;info.bmiHeader.biBitCount=32;info.bmiHeader.biCompression=BI_RGB;
    HDC dc=CreateCompatibleDC(nullptr);void *pixels=nullptr;
    HBITMAP bitmap=CreateDIBSection(dc,&info,DIB_RGB_COLORS,&pixels,nullptr,0);
    if(!dc || !bitmap)throw std::runtime_error("Cannot create PC options surface");
    auto old=SelectObject(dc,bitmap);
    fill(dc,{0,0,1280,720},RGB(4,12,22));
    fill(dc,{54,31,1226,688},RGB(132,157,175));
    fill(dc,{57,34,1223,685},RGB(9,30,47));
    HPEN pen=CreatePen(PS_SOLID,1,RGB(17,49,68));auto old_pen=SelectObject(dc,pen);
    auto old_brush=SelectObject(dc,GetStockObject(NULL_BRUSH));
    int saved_dc=SaveDC(dc);IntersectClipRect(dc,58,35,1222,684);
    for(int y=40;y<685;y+=38)for(int x=64+((y/38)%2)*22;x<1220;x+=44) {
        POINT hex[]={{x,y},{x+11,y-19},{x+33,y-19},{x+44,y},{x+33,y+19},{x+11,y+19}};
        Polygon(dc,hex,6);
    }
    RestoreDC(dc,saved_dc);
    SelectObject(dc,old_pen);SelectObject(dc,old_brush);DeleteObject(pen);
    text(dc,"X-MEN LEGENDS 1  /  XBOXRECOMP",{84,47,1196,75},19,RGB(117,185,215),true);
    text(dc,"PC OPTIONS",{84,76,1196,124},37,RGB(226,236,242),true);
    const char *tabs[]={"DISPLAY & INPUT","KEY BINDINGS","CAMERA & POWERS"};
    for(int i=0;i<3;++i) {
        int x=84+i*371;
        fill(dc,{x,132,x+367,181},model.page==i?RGB(30,105,145):RGB(15,47,67));
        text(dc,tabs[i],{x+10,134,x+357,179},22,RGB(231,239,244),true,DT_CENTER);
    }
    int pitch=model.page?25:46;
    if(model.page) {
        text(dc,"PRIMARY",{710,181,935,196},13,RGB(142,179,199),true,DT_CENTER);
        text(dc,"ALTERNATE",{950,181,1178,196},13,RGB(142,179,199),true,DT_CENTER);
    }
    for(unsigned row=0;row<row_count();++row) {
        int y=196+row*pitch;
        if(row==model.row) {
            fill(dc,{94,y,1186,y+pitch-2},RGB(120,167,190));
            fill(dc,{96,y+2,1184,y+pitch-4},RGB(26,78,106));
        }
        std::string label,value,alternate;
        auto &s=model.draft;
        if(model.page) {
            unsigned action=(model.page-1)*14+row;
            label=action_labels[action];value=model.binding_action==(int)action && !model.binding_alternate?"Press a key...":key_name(s.keys[action]);
            alternate=model.binding_action==(int)action && model.binding_alternate?"Press a key...":key_name(s.alternate_keys[action]);
        } else {
            const char *labels[]={"Resolution  (restart)","Window mode  (restart)","Anti-aliasing  (restart)",
                "Keyboard & mouse  (restart)","Keyboard player  (restart)","Controllers  (restart)","Mouse sensitivity","Invert mouse camera Y"};
            label=labels[row];
            switch(row) {
            case 0:value=std::to_string(s.width)+" x "+std::to_string(s.height);break;
            case 1:value=s.fullscreen?"Borderless fullscreen":"Windowed";break;
            case 2:value="Off (not available yet)";break;
            case 3:value=s.keyboard_enabled?"Enabled":"Disabled";break;
            case 4:value="Player "+std::to_string(s.keyboard_player+1);break;
            case 5:value=s.separate_controllers?"Separate from keyboard":"Share assigned player";break;
            case 6:value=std::to_string(s.mouse_sensitivity)+"%";break;
            case 7:value=s.invert_camera_y?"Yes":"No";break;
            }
        }
        text(dc,label,{110,y,model.page?690:740,y+pitch-2},model.page?20:24,RGB(230,237,242),row==model.row);
        if(model.page) {
            if(row==model.row)fill(dc,{model.binding_alternate?945:705,y+2,model.binding_alternate?1182:940,y+pitch-4},RGB(37,103,136));
            text(dc,value,{710,y,935,y+pitch-2},20,RGB(143,217,245),true,DT_CENTER);
            text(dc,alternate,{950,y,1178,y+pitch-2},20,RGB(143,217,245),true,DT_CENTER);
        } else text(dc,value,{754,y,1170,y+pitch-2},23,RGB(143,217,245),true,DT_CENTER);
    }
    text(dc,model.binding_action>=0?"Press a key or mouse button. Delete unbinds; Esc cancels.":model.status,
        {96,574,1184,605},19,RGB(173,220,238));
    for(auto button: {std::pair<int,const char*>{84,controller_prompts?"APPLY   [X]":"APPLY   [F5]"},
        {374,controller_prompts?"BACK / CANCEL   [B]":"BACK / CANCEL   [Esc]"},
        {930,controller_prompts?"DEFAULTS   [Y]":"DEFAULTS   [F9]"}}) {
        fill(dc,{button.first,610,button.first+266,660},RGB(115,148,168));
        fill(dc,{button.first+2,612,button.first+264,658},RGB(21,61,84));
        text(dc,button.second,{button.first+6,613,button.first+260,656},20,RGB(237,242,246),true,DT_CENTER);
    }
    text(dc,controller_prompts?"LB / RB: page    D-pad: navigate / change    A: select":
        "Tab: page    Arrow keys: navigate / change    Enter: select",{84,663,1196,684},16,RGB(142,179,199),false,DT_CENTER);
    GdiFlush();
    if(!texture)checked(device->CreateTexture(panel_width,panel_height,1,0,D3DFMT_A8R8G8B8,D3DPOOL_MANAGED,&texture));
    D3DLOCKED_RECT locked{};checked(texture->LockRect(0,&locked,nullptr,0));
    for(int y=0;y<panel_height;++y) {
        auto *dest=(uint32_t*)((char*)locked.pBits+y*locked.Pitch);
        auto *source=(uint32_t*)pixels+y*panel_width;
        for(int x=0;x<panel_width;++x)dest[x]=source[x]|0xFF000000;
    }
    checked(texture->UnlockRect(0));
    SelectObject(dc,old);DeleteObject(bitmap);DeleteDC(dc);dirty=false;
}
static void update() {
    Xml1PcInputSnapshot s;
    if(xml1_pc_channel_read(&s,1) && s.menu_requested!=seen_request) {
        seen_request=s.menu_requested;open(s.settings);
    }
    test_input();controller();
}
static void draw(IDirect3DDevice8 *device) {
    if(!model.active)return;
    if(dirty)rebuild(device);
    DWORD state=0;checked(device->CreateStateBlock(D3DSBT_ALL,&state));
    D3DVIEWPORT8 viewport={0,0,width,height,0,1};checked(device->SetViewport(&viewport));
    checked(device->SetVertexShader(D3DFVF_XYZRHW|D3DFVF_TEX1));checked(device->SetPixelShader(0));
    checked(device->SetRenderState(D3DRS_ZENABLE,FALSE));checked(device->SetRenderState(D3DRS_ZWRITEENABLE,FALSE));
    checked(device->SetRenderState(D3DRS_STENCILENABLE,FALSE));checked(device->SetRenderState(D3DRS_ALPHABLENDENABLE,FALSE));
    checked(device->SetRenderState(D3DRS_ALPHATESTENABLE,FALSE));checked(device->SetRenderState(D3DRS_FOGENABLE,FALSE));
    checked(device->SetRenderState(D3DRS_CULLMODE,D3DCULL_NONE));checked(device->SetRenderState(D3DRS_FILLMODE,D3DFILL_SOLID));
    checked(device->SetRenderState(D3DRS_COLORWRITEENABLE,15));
    checked(device->SetTexture(0,texture));
    checked(device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1));
    checked(device->SetTextureStageState(0,D3DTSS_COLORARG1,D3DTA_TEXTURE));
    checked(device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1));
    checked(device->SetTextureStageState(0,D3DTSS_ALPHAARG1,D3DTA_TEXTURE));
    checked(device->SetTextureStageState(0,D3DTSS_TEXCOORDINDEX,0));
    checked(device->SetTextureStageState(0,D3DTSS_TEXTURETRANSFORMFLAGS,D3DTTFF_DISABLE));
    checked(device->SetTextureStageState(0,D3DTSS_MINFILTER,D3DTEXF_LINEAR));
    checked(device->SetTextureStageState(0,D3DTSS_MAGFILTER,D3DTEXF_LINEAR));
    checked(device->SetTextureStageState(1,D3DTSS_COLOROP,D3DTOP_DISABLE));
    struct Vertex {float x,y,z,w,u,v;};
    Vertex vertices[]={{-.5f,-.5f,0,1,0,0},{width-.5f,-.5f,0,1,1,0},
        {-.5f,height-.5f,0,1,0,1},{width-.5f,height-.5f,0,1,1,1}};
    checked(device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP,2,vertices,sizeof(Vertex)));
    checked(device->ApplyStateBlock(state));checked(device->DeleteStateBlock(state));
}
static void release() {if(texture)texture->Release();texture=nullptr;}
}
