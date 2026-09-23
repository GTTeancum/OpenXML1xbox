#include "raven_filter_event.h"
__declspec(dllexport) unsigned filter_tag(const raven_filter_event *event,const raven_filter_target *target) {
    return raven_filter_event_tag(event,target);
}

__declspec(dllexport) int filter_parse(raven_filter_event *event,const char *key,const char *value) {
    return raven_filter_event_parse(event,key,value);
}

__declspec(dllexport) void filter_copy(raven_filter_event *destination,const raven_filter_event *source) {
    raven_filter_event_copy(destination,source);
}

__declspec(dllexport) unsigned filter_xml1_team(unsigned native_team) {
    return raven_filter_event_xml1_team(native_team);
}

__declspec(dllexport) int character_filter_parse(uint8_t *flags,const char *key,const char *value) {
    return raven_character_filter_parse(flags,key,value);
}

__declspec(dllexport) int filter_default_target(raven_guest_read read,void *context,uint32_t actor,raven_filter_target *target) {
    return raven_filter_xml1_default_target(read,context,actor,target);
}
