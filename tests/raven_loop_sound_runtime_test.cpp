#include "raven_loop_sound_runtime.h"
#include <cstdio>
#include <stdexcept>
static unsigned plays,stops,positions;
static uint32_t last_actor,last_sound,last_voice;
static void check(bool ok,const char* text){if(!ok)throw std::runtime_error(text);}
extern "C" int raven_loop_guest_actor(uint32_t a){return a==0xA01||a==0xB01;}
extern "C" uint32_t raven_loop_guest_play(uint32_t a,uint32_t s){++plays;last_actor=a;last_sound=s;return ++last_voice;}
extern "C" void raven_loop_guest_position(uint32_t,uint32_t){++positions;}
extern "C" void raven_loop_guest_stop(uint32_t){++stops;}
int main(){try {
 check(!raven_loop_sound_parse(1,"sound","char/sun_m/p2_charge"),"Ordinary attribute intercepted");
 check(!raven_loop_sound_event(1,0xA01,8,0),"Ordinary event intercepted");
 check(raven_loop_sound_parse(1,"LOOP_TYPE","start"),"Loop mode not parsed");
 check(raven_loop_sound_event(1,0xA01,8,0),"Loop event not intercepted");
 check(plays==1&&last_actor==0xA01&&last_sound==8,"Wrong native playback arguments");
 raven_loop_sound_update(.99f);check(stops==0,"Wrong default duration");
 raven_loop_sound_update(1);check(stops==1,"Default one second not expired");
 raven_loop_sound_parse(1,"loop_timeout","1.5");
 raven_loop_sound_copy(2,1);
 raven_loop_sound_parse(1,"loop_timeout",".5");
 raven_loop_sound_event(2,0xA01,8,2);
 raven_loop_sound_event(2,0xA01,8,2.3f);
 check(plays==2,"Repeated trigger duplicated voice");
 raven_loop_sound_update(3.7f);check(stops==1,"Clone shares mutable timeout");
 raven_loop_sound_update(3.8f);check(stops==2,"Clone refresh deadline incorrect");
 raven_loop_sound_retire(2);
 check(!raven_loop_sound_event(2,0xA01,8,4),"Retired event retained loop mode");
 raven_loop_sound_copy(1,0xDEAD);
 check(!raven_loop_sound_event(1,0xA01,8,4),"Copy from ordinary event retained loop mode");
 raven_loop_sound_parse(3,"loop_type","start");
 check(raven_loop_sound_event(3,0xA01,UINT32_MAX,4)&&plays==2,"Invalid native sound ID reached backend");
 raven_loop_sound_event(3,0xA01,8,4);
 raven_loop_sound_event(3,0xB01,8,4);
 raven_loop_sound_parse(4,"loop_type","stop");
 raven_loop_sound_event(4,0xA01,8,4.1f);
 check(stops==3,"Explicit stop failed");
 raven_loop_sound_clear();check(stops==4,"Clear failed to remove second actor");
 std::puts("PASS loop event attributes, defaults, clone isolation, retirement, native arguments and stop");return 0;
}catch(const std::exception& e){std::fprintf(stderr,"FAIL %s\n",e.what());return 1;}}
