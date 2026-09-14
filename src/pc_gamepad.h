#pragma once
#include "pc_input_channel.h"
#ifdef __cplusplus
extern "C" {
#endif
/* Matches Xbox's 18-byte pad payload without including Windows/XInput types. */
typedef struct Xml1PcGamepad {
    uint16_t buttons;
    uint8_t analog[8];
    int16_t lx,ly,rx,ry;
} Xml1PcGamepad;
void xml1_pc_map_gamepad(const Xml1PcInputSnapshot *input, Xml1PcGamepad *pad);
void xml1_pc_merge_gamepad(Xml1PcGamepad *pad, const Xml1PcGamepad *keyboard);
/* Returns physical XInput slot or -1 for the dedicated keyboard player. */
int xml1_pc_controller_slot(const Xml1PcSettings *settings, unsigned game_port);
#ifdef __cplusplus
}
#endif
