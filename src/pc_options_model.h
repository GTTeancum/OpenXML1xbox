#pragma once
#include "pc_controls.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct Xml1PcOptionsModel {
    Xml1PcSettings applied, draft, running;
    uint32_t active, page, row, selected_player;
    int32_t binding_action;
    uint32_t binding_alternate;
    uint32_t controller_bindings;
    char status[160];
} Xml1PcOptionsModel;
void xml1_pc_options_open(Xml1PcOptionsModel *model, const Xml1PcSettings *settings);
int xml1_pc_options_select_player(Xml1PcOptionsModel *model, unsigned player);
void xml1_pc_options_cancel(Xml1PcOptionsModel *model);
int xml1_pc_options_preset(Xml1PcOptionsModel *model, unsigned preset);
void xml1_pc_options_defaults(Xml1PcOptionsModel *model);
int xml1_pc_options_bind(Xml1PcOptionsModel *model, unsigned action, unsigned key);
int xml1_pc_options_bind_slot(Xml1PcOptionsModel *model, unsigned action, unsigned key, int alternate);
int xml1_pc_options_bind_controller(Xml1PcOptionsModel *model, unsigned action, unsigned source, int alternate);
int xml1_pc_options_apply(Xml1PcOptionsModel *model, const char *path);
#ifdef __cplusplus
}
#endif
