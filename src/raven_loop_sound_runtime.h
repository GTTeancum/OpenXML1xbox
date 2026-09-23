#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
int raven_loop_sound_parse(uint32_t event,const char *key,const char *value);
void raven_loop_sound_copy(uint32_t destination,uint32_t source);
void raven_loop_sound_retire(uint32_t event);
int raven_loop_sound_event(uint32_t event,uint32_t actor,uint32_t sound,float now);
void raven_loop_sound_update(float now);
void raven_loop_sound_clear(void);
int raven_loop_sound_active(uint32_t event);
int raven_loop_sound_pending(void);
int raven_loop_guest_actor(uint32_t actor);
uint32_t raven_loop_guest_play(uint32_t actor,uint32_t sound);
void raven_loop_guest_position(uint32_t voice,uint32_t actor);
void raven_loop_guest_stop(uint32_t voice);
int raven_loop_guest_event(uint32_t event,uint32_t actor,uint32_t sound);
void raven_loop_guest_update(void);
void raven_loop_guest_factory_trace(uint32_t pool,uint32_t type_name);
#ifdef __cplusplus
}
#endif
