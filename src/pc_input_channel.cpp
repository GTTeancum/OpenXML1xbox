#include "pc_input_channel.h"
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

namespace {
constexpr uint32_t version=4;
struct Shared {
    uint32_t version, bytes;
    Xml1PcInputSnapshot snapshot;
    uint8_t pressed[256];
    uint32_t mouse_valid;
    uint32_t capture_active, capture_key;
};
static_assert(sizeof(Xml1PcSettings)==268);
static_assert(sizeof(Xml1PcControlState)==280);
static_assert(sizeof(Shared)==840);
HANDLE mapping=nullptr, mutex=nullptr;
Shared *shared=nullptr;
struct Lock {
    bool locked=false;
    Lock() {
        if(mutex) {
            DWORD result=WaitForSingleObject(mutex,100);
            locked=result==WAIT_OBJECT_0 || result==WAIT_ABANDONED;
            // No partially updated state survives a crashed producer.
            if(result==WAIT_ABANDONED && shared) {
                xml1_pc_control_focus(&shared->snapshot.controls,0);
                std::memset(shared->pressed,0,sizeof(shared->pressed));
                shared->mouse_valid=0;
                shared->capture_key=0;
            }
        }
    }
    ~Lock() {if(locked)ReleaseMutex(mutex);}
};
void clear_keys() {
    std::memset(shared->snapshot.controls.held,0,256);
    std::memset(shared->pressed,0,256);
    shared->snapshot.controls.wheel=0;
    shared->snapshot.controls.mouse_dx=shared->snapshot.controls.mouse_dy=0;
    shared->mouse_valid=0;
}
}
extern "C" void xml1_pc_channel_close() {
    if(shared)UnmapViewOfFile(shared);
    if(mapping)CloseHandle(mapping);
    if(mutex)CloseHandle(mutex);
    shared=nullptr;mapping=nullptr;mutex=nullptr;
}
extern "C" int xml1_pc_channel_create(const Xml1PcSettings *settings) {
    if(shared || !xml1_pc_settings_validate(settings,nullptr,0))return 0;
    char name[128],lock_name[144];
    std::snprintf(name,sizeof(name),"Local\\OpenXML1-PC-%lu-%llu",GetCurrentProcessId(),GetTickCount64());
    std::snprintf(lock_name,sizeof(lock_name),"%s-lock",name);
    mutex=CreateMutexA(nullptr,FALSE,lock_name);
    if(!mutex || GetLastError()==ERROR_ALREADY_EXISTS) {xml1_pc_channel_close();return 0;}
    mapping=CreateFileMappingA(INVALID_HANDLE_VALUE,nullptr,PAGE_READWRITE,0,sizeof(Shared),name);
    if(!mapping || GetLastError()==ERROR_ALREADY_EXISTS) {xml1_pc_channel_close();return 0;}
    shared=(Shared*)MapViewOfFile(mapping,FILE_MAP_ALL_ACCESS,0,0,sizeof(Shared));
    if(!shared) {xml1_pc_channel_close();return 0;}
    {
        Lock lock;
        if(!lock.locked) {xml1_pc_channel_close();return 0;}
        *shared={};shared->version=version;shared->bytes=sizeof(Shared);
        shared->snapshot.settings=*settings;
    }
    if(_putenv_s("XML1_PC_INPUT_CHANNEL",name)) {xml1_pc_channel_close();return 0;}
    return 1;
}
extern "C" int xml1_pc_channel_connect() {
    if(shared)return 1;
    const char *name=std::getenv("XML1_PC_INPUT_CHANNEL");
    if(!name || !*name || std::strlen(name)>127)return 0;
    char lock_name[144];std::snprintf(lock_name,sizeof(lock_name),"%s-lock",name);
    mutex=OpenMutexA(SYNCHRONIZE|MUTEX_MODIFY_STATE,FALSE,lock_name);
    mapping=OpenFileMappingA(FILE_MAP_ALL_ACCESS,FALSE,name);
    if(mapping)shared=(Shared*)MapViewOfFile(mapping,FILE_MAP_ALL_ACCESS,0,0,sizeof(Shared));
    bool valid=false;
    if(mutex && shared) {
        Lock lock;valid=lock.locked && shared->version==version && shared->bytes==sizeof(Shared);
    }
    if(!valid)xml1_pc_channel_close();
    return valid;
}
extern "C" int xml1_pc_channel_read(Xml1PcInputSnapshot *out,int peek) {
    Lock lock;if(!lock.locked || !shared)return 0;
    *out=shared->snapshot;
    if(!peek) {
        for(unsigned key=0;key<256;++key) {
            out->controls.held[key]|=shared->pressed[key];
            shared->pressed[key]=0;
        }
        shared->snapshot.controls.wheel=0;
        shared->snapshot.controls.mouse_dx=shared->snapshot.controls.mouse_dy=0;
    }
    return 1;
}
extern "C" void xml1_pc_channel_focus(int focused) {
    Lock lock;if(!lock.locked || !shared)return;
    clear_keys();xml1_pc_control_focus(&shared->snapshot.controls,focused);
    shared->capture_key=0;
    ++shared->snapshot.sequence;
}
extern "C" void xml1_pc_channel_key(unsigned key,int down) {
    Lock lock;if(!lock.locked || !shared || key>=256 || !shared->snapshot.controls.focused)return;
    if(shared->capture_active && down && !shared->snapshot.controls.held[key] && !shared->capture_key)
        shared->capture_key=key;
    if(down && !shared->snapshot.controls.held[key])shared->pressed[key]=1;
    if(down && !shared->snapshot.controls.held[key] && (key==shared->snapshot.settings.keys[XML1_PC_CAMERA_DRAG] ||
       key==shared->snapshot.settings.alternate_keys[XML1_PC_CAMERA_DRAG]))
        shared->snapshot.controls.mouse_dx=shared->snapshot.controls.mouse_dy=0;
    xml1_pc_control_key(&shared->snapshot.controls,key,down);
    shared->snapshot.last_device=1;++shared->snapshot.sequence;
}
extern "C" void xml1_pc_channel_mouse(int x,int y,int wheel) {
    Lock lock;if(!lock.locked || !shared || !shared->snapshot.controls.focused)return;
    auto &s=shared->snapshot;
    if(shared->mouse_valid) {
        int64_t dx=(int64_t)s.controls.mouse_dx+x-s.controls.mouse_x;
        int64_t dy=(int64_t)s.controls.mouse_dy+y-s.controls.mouse_y;
        s.controls.mouse_dx=(int32_t)(dx>4000?4000:dx<-4000?-4000:dx);
        s.controls.mouse_dy=(int32_t)(dy>4000?4000:dy<-4000?-4000:dy);
    }
    shared->mouse_valid=1;
    s.controls.mouse_x=x;s.controls.mouse_y=y;
    // Bound accumulated wheel input even if the consumer stops polling.
    int64_t value=(int64_t)s.controls.wheel+wheel;
    s.controls.wheel=(int32_t)(value>12000?12000:value<-12000?-12000:value);
    s.last_device=1;++s.sequence;
}
extern "C" void xml1_pc_channel_controller_active() {
    Lock lock;if(lock.locked && shared)shared->snapshot.last_device=0;
}
extern "C" void xml1_pc_channel_request_menu() {
    Lock lock;if(!lock.locked || !shared)return;
    ++shared->snapshot.menu_requested;clear_keys();
}
extern "C" int xml1_pc_channel_set_menu(int active) {
    Lock lock;if(!lock.locked || !shared)return 0;
    shared->snapshot.menu_active=active!=0;clear_keys();return 1;
}
extern "C" int xml1_pc_channel_set_settings(const Xml1PcSettings *settings) {
    if(!xml1_pc_settings_validate(settings,nullptr,0))return 0;
    Lock lock;if(!lock.locked || !shared)return 0;
    shared->snapshot.settings=*settings;clear_keys();++shared->snapshot.sequence;return 1;
}
extern "C" int xml1_pc_channel_capture(int active) {
    Lock lock;if(!lock.locked || !shared)return 0;
    shared->capture_active=active!=0;shared->capture_key=0;
    shared->snapshot.menu_active=active!=0;
    if(active)std::memset(shared->pressed,0,sizeof(shared->pressed));
    else clear_keys();
    return 1;
}
extern "C" unsigned xml1_pc_channel_capture_key() {
    Lock lock;if(!lock.locked || !shared || !shared->capture_active)return 0;
    unsigned key=shared->capture_key;shared->capture_key=0;return key;
}
