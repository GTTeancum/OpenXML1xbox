#pragma once
#include "pc_controls.h"
#ifdef __cplusplus
extern "C" {
#endif
typedef struct Xml1PcOptionsModel {
    Xml1PcSettings applied, draft;
    uint32_t active, page, row;
    int32_t binding_action;
    uint32_t binding_alternate;
    char status[160];
} Xml1PcOptionsModel;
void xml1_pc_options_open(Xml1PcOptionsModel *model, const Xml1PcSettings *settings);
void xml1_pc_options_cancel(Xml1PcOptionsModel *model);
void xml1_pc_options_defaults(Xml1PcOptionsModel *model);
int xml1_pc_options_bind(Xml1PcOptionsModel *model, unsigned action, unsigned key);
int xml1_pc_options_bind_slot(Xml1PcOptionsModel *model, unsigned action, unsigned key, int alternate);
int xml1_pc_options_apply(Xml1PcOptionsModel *model, const char *path);
#ifdef __cplusplus
}
#endif
