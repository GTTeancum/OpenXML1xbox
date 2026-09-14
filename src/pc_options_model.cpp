#include "pc_options_model.h"
#include <cstdio>

extern "C" void xml1_pc_options_open(Xml1PcOptionsModel *m,const Xml1PcSettings *s) {
    *m={};m->applied=m->draft=*s;m->active=1;m->binding_action=-1;
}
extern "C" void xml1_pc_options_cancel(Xml1PcOptionsModel *m) {
    m->draft=m->applied;m->active=0;m->binding_action=-1;m->status[0]=0;
}
extern "C" void xml1_pc_options_defaults(Xml1PcOptionsModel *m) {
    xml1_pc_settings_defaults(&m->draft);m->binding_action=-1;
    std::snprintf(m->status,sizeof(m->status),"Defaults selected. Apply to save, or Cancel to keep your settings.");
}
extern "C" int xml1_pc_options_bind(Xml1PcOptionsModel *m,unsigned action,unsigned key) {
    return xml1_pc_options_bind_slot(m,action,key,0);
}
extern "C" int xml1_pc_options_bind_slot(Xml1PcOptionsModel *m,unsigned action,unsigned key,int alternate) {
    if(action>=XML1_PC_ACTION_COUNT || key>255)return 0;
    if(key==13 || key==8) {
        std::snprintf(m->status,sizeof(m->status),"Enter and Backspace are reserved for menu accept/back.");return 0;
    }
    int conflict=xml1_pc_binding_conflict(&m->draft,action,key);
    if(conflict>=0) {
        std::snprintf(m->status,sizeof(m->status),"Already assigned to %s. Unbind it first.",xml1_pc_action_name(conflict));
        return 0;
    }
    auto &slot=alternate?m->draft.alternate_keys[action]:m->draft.keys[action];
    auto &other=alternate?m->draft.keys[action]:m->draft.alternate_keys[action];
    slot=key;if(other==key)other=0;
    m->binding_action=-1;m->status[0]=0;return 1;
}
extern "C" int xml1_pc_options_apply(Xml1PcOptionsModel *m,const char *path) {
    if(!xml1_pc_settings_save(path,&m->draft,m->status,sizeof(m->status)))return 0;
    bool restart=m->draft.width!=m->applied.width || m->draft.height!=m->applied.height ||
        m->draft.fullscreen!=m->applied.fullscreen || m->draft.fsaa!=m->applied.fsaa ||
        m->draft.keyboard_enabled!=m->applied.keyboard_enabled || m->draft.keyboard_player!=m->applied.keyboard_player ||
        m->draft.separate_controllers!=m->applied.separate_controllers;
    m->applied=m->draft;
    std::snprintf(m->status,sizeof(m->status),restart?
        "Saved. Display and player assignment changes take effect after a restart.":"Settings saved.");
    return 1;
}
