#include "pc_options_model.h"
#include <cstdio>
#include <cstring>

extern "C" void xml1_pc_options_open(Xml1PcOptionsModel *m,const Xml1PcSettings *s) {
    *m={};m->applied=m->draft=m->running=*s;m->active=1;m->binding_action=-1;m->selected_player=s->keyboard_player;
}
extern "C" int xml1_pc_options_select_player(Xml1PcOptionsModel *m,unsigned player) {
    if(!m->active || player>=4)return 0;
    m->selected_player=player;m->binding_action=-1;m->status[0]=0;return 1;
}
extern "C" void xml1_pc_options_cancel(Xml1PcOptionsModel *m) {
    m->draft=m->applied;m->active=0;m->binding_action=-1;m->status[0]=0;
}
extern "C" int xml1_pc_options_preset(Xml1PcOptionsModel *m,unsigned preset) {
    if(!m->active || !xml1_pc_settings_preset(&m->draft,m->selected_player,preset))return 0;
    // A profile preset covers both input devices, regardless of the table view.
    // XML2 supplies three keyboard layouts; retain XML1's native controller map.
    Xml1PcSettings defaults;xml1_pc_settings_defaults(&defaults);
    std::memcpy(m->draft.pad_bindings[m->selected_player],defaults.pad_bindings[0],sizeof(defaults.pad_bindings[0]));
    std::memcpy(m->draft.alternate_pad_bindings[m->selected_player],defaults.alternate_pad_bindings[0],sizeof(defaults.alternate_pad_bindings[0]));
    m->binding_action=-1;
    std::snprintf(m->status,sizeof(m->status),"Player %u: Defaults %u. Apply to save.",m->selected_player+1,preset);
    return 1;
}
extern "C" void xml1_pc_options_defaults(Xml1PcOptionsModel *m) {
    xml1_pc_settings_defaults(&m->draft);m->binding_action=-1;
    std::snprintf(m->status,sizeof(m->status),"Defaults selected. Apply to save, or Cancel to keep your settings.");
}
extern "C" int xml1_pc_options_bind(Xml1PcOptionsModel *m,unsigned action,unsigned key) {
    return xml1_pc_options_bind_slot(m,action,key,0);
}
extern "C" int xml1_pc_options_bind_slot(Xml1PcOptionsModel *m,unsigned action,unsigned key,int alternate) {
    if(!m->active || m->selected_player>=4 || action>=XML1_PC_ACTION_COUNT || key>255)return 0;
    if(key==13 || key==8) {
        std::snprintf(m->status,sizeof(m->status),"Enter and Backspace are reserved for menu accept/back.");return 0;
    }
    int conflict=xml1_pc_player_binding_conflict(&m->draft,m->selected_player,action,key);
    if(conflict>=0) {
        std::snprintf(m->status,sizeof(m->status),"Already assigned to %s. Unbind it first.",xml1_pc_action_name(conflict));
        return 0;
    }
    auto &slot=alternate?m->draft.alternate_keys[m->selected_player][action]:m->draft.keys[m->selected_player][action];
    auto &other=alternate?m->draft.keys[m->selected_player][action]:m->draft.alternate_keys[m->selected_player][action];
    slot=key;if(other==key)other=0;
    m->binding_action=-1;m->status[0]=0;return 1;
}
extern "C" int xml1_pc_options_apply(Xml1PcOptionsModel *m,const char *path) {
    if(!xml1_pc_settings_save(path,&m->draft,m->status,sizeof(m->status)))return 0;
    // Saving does not apply these fields to the running game. Keep the restart
    // notice until the saved configuration matches what this process is using.
    bool restart=m->draft.width!=m->running.width || m->draft.height!=m->running.height ||
        m->draft.fullscreen!=m->running.fullscreen || m->draft.fsaa!=m->running.fsaa ||
        m->draft.keyboard_enabled!=m->running.keyboard_enabled || m->draft.keyboard_player!=m->running.keyboard_player ||
        m->draft.separate_controllers!=m->running.separate_controllers;
    m->applied=m->draft;
    std::snprintf(m->status,sizeof(m->status),restart?
        "Saved. Display/device changes need a restart.":"Settings saved.");
    return 1;
}
extern "C" int xml1_pc_options_bind_controller(Xml1PcOptionsModel *m,unsigned action,unsigned source,int alternate) {
    if(!m->active || m->selected_player>=4 || action>=XML1_PC_ACTION_COUNT ||
       source>=XML1_PAD_SOURCE_COUNT || (action==XML1_PC_CAMERA_DRAG && source))return 0;
    int conflict=xml1_pc_pad_binding_conflict(&m->draft,m->selected_player,action,source);
    if(conflict>=0) {
        std::snprintf(m->status,sizeof(m->status),"Already assigned to %s. Unbind it first.",xml1_pc_action_name(conflict));return 0;
    }
    auto &slot=alternate?m->draft.alternate_pad_bindings[m->selected_player][action]:m->draft.pad_bindings[m->selected_player][action];
    auto &other=alternate?m->draft.pad_bindings[m->selected_player][action]:m->draft.alternate_pad_bindings[m->selected_player][action];
    slot=source;if(other==source)other=0;
    m->binding_action=-1;m->status[0]=0;return 1;
}
