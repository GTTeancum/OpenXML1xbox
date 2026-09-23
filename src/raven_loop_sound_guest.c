#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_loop_sound_runtime.h"
#include "raven_powerup_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static void balanced(uint32_t sp) {if(g_esp!=sp){fputs("[LOOP SOUND ERROR] native stack mismatch\n",stderr);_Exit(4);}}
static uint32_t resolve(uint32_t handle) {
 uint32_t actor=0;return raven_xml1_guest_entity_actor(NULL,handle,&actor)==RAVEN_FOUND?actor:0;
}
void raven_loop_guest_factory_trace(uint32_t pool,uint32_t type_name) {
 if(!getenv("XML1_TRACE_HARMING")||!pool||!type_name)return;
 const uint32_t used=MEM32(pool+0xC3D8u);
 if(used<770)return;
 const char *name=(const char*)XBOX_PTR(type_name);
 fprintf(stderr,"[RAVEN EVENT POOL] used=%u/780 type=%s pool=%08X\n",used,name,pool);
}
int raven_loop_guest_actor(uint32_t h){return resolve(h)!=0;}
uint16_t raven_loop_guest_event_time_tag(uint32_t event){return event?MEM16(event+0xC):0;}
uint32_t raven_loop_guest_parse_return(void){return MEM32(g_esp);}
uint32_t raven_loop_guest_play(uint32_t handle,uint32_t sound) {
 const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
 uint32_t actor=resolve(handle),result=0;
 if(actor) {
  PUSH32(g_esp,0);RECOMP_ABI_CALL(0x151EF0u,sub_00151EF0);g_ecx=g_eax;
  // Native 151880: sound ID, initial position, volume, near/far range.
  PUSH32(g_esp,0x43160000);PUSH32(g_esp,0x44A28000);PUSH32(g_esp,0x3F800000);
  PUSH32(g_esp,actor+0x20);PUSH32(g_esp,sound);PUSH32(g_esp,0);
  RECOMP_ABI_CALL(0x151880u,sub_00151880);balanced(sp);
  // Native -1 is failure; zero is a valid handle. Normalize for LoopSounds.
  result=g_eax+1u;
 }
 g_eax=ax;g_ecx=cx;g_edx=dx;return result;
}
void raven_loop_guest_stop(uint32_t voice) {
 const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
 PUSH32(g_esp,0);RECOMP_ABI_CALL(0x151EF0u,sub_00151EF0);g_ecx=g_eax;
 PUSH32(g_esp,voice-1u);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x150360u,sub_00150360);balanced(sp);
 g_eax=ax;g_ecx=cx;g_edx=dx;
}
void raven_loop_guest_position(uint32_t voice,uint32_t handle) {
 const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
 uint32_t actor=resolve(handle);
 if(actor) {
  PUSH32(g_esp,0);RECOMP_ABI_CALL(0x151EF0u,sub_00151EF0);g_ecx=g_eax;
  // XML1's existing interface +70 is a ret8 no-op; preserve it unchanged.
  uint32_t fn=MEM32(MEM32(g_ecx)+0x70);
  PUSH32(g_esp,actor+0x20);PUSH32(g_esp,voice-1u);PUSH32(g_esp,0);
  RECOMP_ICALL_SAFE(fn,sp);balanced(sp);
 }
 g_eax=ax;g_ecx=cx;g_edx=dx;
}
static float simulation_time(void) {
 const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
 const unsigned fp=g_fp_top;
 PUSH32(g_esp,0);RECOMP_ABI_CALL(0x66AB0u,sub_00066AB0);balanced(sp);
 float now=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1u)&7u;
 if(g_fp_top!=fp)_Exit(4);
 g_eax=ax;g_ecx=cx;g_edx=dx;return now;
}
int raven_loop_guest_event(uint32_t event,uint32_t actor,uint32_t sound) {
 if(!actor||!raven_loop_sound_active(event))return 0;
 return raven_loop_sound_event(event,MEM32(actor+0x1C),sound,simulation_time());
}
void raven_loop_guest_update(void){if(raven_loop_sound_pending())raven_loop_sound_update(simulation_time());}
