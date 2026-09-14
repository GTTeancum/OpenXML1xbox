#pragma once
#include "pc_controls.h"
#ifdef __cplusplus
extern "C" {
#endif

/* The HWND lives in the DX8 worker. This channel carries only this game's
   window events to its owner; it never polls or injects desktop input. */
typedef struct Xml1PcInputSnapshot {
    Xml1PcControlState controls;
    uint32_t sequence;
    uint32_t last_device; /* 0 controller, 1 keyboard/mouse */
    uint32_t menu_requested;
    uint32_t menu_active;
    Xml1PcSettings settings;
} Xml1PcInputSnapshot;

int xml1_pc_channel_create(const Xml1PcSettings *settings);
int xml1_pc_channel_connect(void);
void xml1_pc_channel_close(void);
/* peek=1 does not consume short key presses (device enumeration). */
int xml1_pc_channel_read(Xml1PcInputSnapshot *snapshot, int peek);
void xml1_pc_channel_focus(int focused);
void xml1_pc_channel_key(unsigned key, int down);
void xml1_pc_channel_mouse(int x, int y, int wheel);
void xml1_pc_channel_controller_active(void);
void xml1_pc_channel_request_menu(void);
int xml1_pc_channel_set_menu(int active);
int xml1_pc_channel_set_settings(const Xml1PcSettings *settings);
/* Capture one window key/button for native rebinding without guest actions. */
int xml1_pc_channel_capture(int active);
unsigned xml1_pc_channel_capture_key(void);

#ifdef __cplusplus
}
#endif
