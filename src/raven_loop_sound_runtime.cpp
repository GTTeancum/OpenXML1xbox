#include "raven_loop_sound_runtime.h"
#include "raven_loop_sound.h"
#include <map>
#include <set>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <stdexcept>
namespace {
struct Definition { int mode=0; float timeout=1; }; // XML2 108D80 default.
std::map<uint32_t,Definition> definitions;
std::set<uint32_t> traced_bishop_charge;
extern "C" uint16_t raven_loop_guest_event_time_tag(uint32_t event);
extern "C" uint32_t raven_loop_guest_parse_return(void);
struct Backend : raven::LoopSoundBackend {
 bool actor_valid(uint32_t h) override {return raven_loop_guest_actor(h)!=0;}
 uint32_t play(uint32_t h,uint32_t s) override {return raven_loop_guest_play(h,s);}
 void position(uint32_t v,uint32_t h) override {raven_loop_guest_position(v,h);}
 void stop(uint32_t v) override {raven_loop_guest_stop(v);}
} backend;
raven::LoopSounds voices(backend);
[[noreturn]] void fail(const char *s) {std::fprintf(stderr,"[LOOP SOUND ERROR] %s\n",s);std::fflush(stderr);std::_Exit(4);}
}
extern "C" int raven_loop_sound_parse(uint32_t event,const char *key,const char *value) {
 try {
  if(std::getenv("XML1_TRACE_HARMING")&&
     ((!_stricmp(key,"tag")&&!strcmp(value,"101"))||
      (!_stricmp(key,"sound")&&strstr(value,"bishop_m/p5_charge"))))
   std::fprintf(stderr,"[SOUND EVENT PARSE] event=%08X key=%s value=%s time_tag=%04X return=%08X\n",event,key,value,raven_loop_guest_event_time_tag(event),raven_loop_guest_parse_return());
  if(std::getenv("XML1_TRACE_HARMING")&&!_stricmp(key,"sound")&&strstr(value,"bishop_m/p5_charge"))traced_bishop_charge.insert(event);
  if(std::getenv("XML1_TRACE_HARMING")&&traced_bishop_charge.count(event))
   std::fprintf(stderr,"[SOUND EVENT ATTR] event=%08X key=%s value=%s time_tag=%04X\n",event,key,value,raven_loop_guest_event_time_tag(event));
  if(!_stricmp(key,"loop_type")) {
   auto &d=definitions[event];
   if(!_stricmp(value,"start"))d.mode=1;
   else if(!_stricmp(value,"stop"))d.mode=2;
   return 1;
  }
  if(!_stricmp(key,"loop_timeout")) {
   char *end=nullptr;float v=std::strtof(value,&end);
   if(end==value||!end||*end||!std::isfinite(v))fail("Unresolved loop_timeout operand");
   definitions[event].timeout=v;return 1;
  }
  return 0;
 }catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_loop_sound_copy(uint32_t dst,uint32_t src) {
 if(std::getenv("XML1_TRACE_HARMING")&&traced_bishop_charge.count(src)) {
  std::fprintf(stderr,"[SOUND EVENT COPY] src=%08X time_tag=%04X dst=%08X before=%04X\n",src,raven_loop_guest_event_time_tag(src),dst,raven_loop_guest_event_time_tag(dst));
  traced_bishop_charge.insert(dst);
 }
 try {auto it=definitions.find(src);if(it==definitions.end())definitions.erase(dst);else definitions[dst]=it->second;}
 catch(const std::exception& e){fail(e.what());}
}
extern "C" void raven_loop_sound_retire(uint32_t e){definitions.erase(e);}
extern "C" int raven_loop_sound_active(uint32_t e){auto i=definitions.find(e);return i!=definitions.end()&&i->second.mode!=0;}
extern "C" int raven_loop_sound_pending(void){return voices.size()!=0;}
extern "C" int raven_loop_sound_event(uint32_t e,uint32_t actor,uint32_t sound,float now) {
 try {
  auto it=definitions.find(e);if(it==definitions.end()||!it->second.mode)return 0;
  if(sound!=UINT32_MAX) {
   if(it->second.mode==1)voices.start(actor,sound,it->second.timeout,now);
   else voices.stop(actor,sound);
  }
  return 1;
 }catch(const std::exception& x){fail(x.what());}
}
extern "C" void raven_loop_sound_update(float now) {try {if(voices.size())voices.update(now);}catch(const std::exception& e){fail(e.what());}}
extern "C" void raven_loop_sound_clear(void) {try {voices.clear();}catch(const std::exception& e){fail(e.what());}}
