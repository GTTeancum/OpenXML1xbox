#include "engine/combat/raven_vitality_bonus.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct raven_vitality_slot {
    uint32_t stats;
    uint8_t bonuses[2];
    uint8_t auto_equip;
    struct raven_vitality_slot *next;
};
static raven_vitality_slot *find(const raven_vitality_owner *owner,uint32_t stats) {
    if(!owner||!stats)return NULL;
    for(raven_vitality_slot *s=owner->slots;s;s=s->next)if(s->stats==stats)return s;
    return NULL;
}
int raven_vitality_create(raven_vitality_owner *owner,uint32_t stats) {
    if(!owner||!stats||find(owner,stats))return 0;
    raven_vitality_slot *s=owner->slots;
    while(s&&s->stats)s=s->next;
    if(!s) {
        s=(raven_vitality_slot*)calloc(1,sizeof(*s));
        if(!s)return 0;
        s->next=owner->slots;owner->slots=s;++owner->allocated;
    }
    memset(s->bonuses,0,2);s->auto_equip=0;s->stats=stats;++owner->active;return 1;
}
int raven_vitality_retire(raven_vitality_owner *owner,uint32_t stats) {
    raven_vitality_slot *s=find(owner,stats);if(!s)return 0;
    s->stats=0;memset(s->bonuses,0,2);s->auto_equip=0;--owner->active;return 1;
}
int raven_vitality_copy(raven_vitality_owner *owner,uint32_t destination,uint32_t source) {
    raven_vitality_slot *d=find(owner,destination),*s=find(owner,source);
    if(!d||!s)return 0;
    if(d!=s) {memcpy(d->bonuses,s->bonuses,2);d->auto_equip=s->auto_equip;}
    return 1;
}
int raven_vitality_get(const raven_vitality_owner *owner,uint32_t stats,unsigned kind,uint8_t *value) {
    raven_vitality_slot *s=find(owner,stats);
    if(!s||kind>=2||!value)return 0;
    *value=s->bonuses[kind];return 1;
}
int raven_vitality_add(raven_vitality_owner *owner,uint32_t stats,unsigned kind,uint8_t amount) {
    raven_vitality_slot *s=find(owner,stats);if(!s||kind>=2)return 0;
    s->bonuses[kind]=(uint8_t)(s->bonuses[kind]+amount);return 1;
}
int raven_auto_equip_get(const raven_vitality_owner *owner,uint32_t stats,uint8_t *enabled) {
    raven_vitality_slot *s=find(owner,stats);
    if(!s||!enabled)return 0;
    *enabled=s->auto_equip;return 1;
}
int raven_auto_equip_set(raven_vitality_owner *owner,uint32_t stats,int enabled) {
    raven_vitality_slot *s=find(owner,stats);if(!s)return 0;
    s->auto_equip=enabled!=0;return 1;
}
int raven_vitality_write(const raven_vitality_owner *owner,uint32_t stats,void *out,size_t size) {
    raven_vitality_slot *s=find(owner,stats);
    if(!s||!out||size!=2)return 0;
    memcpy(out,s->bonuses,2);return 1;
}
int raven_vitality_read(raven_vitality_owner *owner,uint32_t stats,const void *in,size_t size) {
    raven_vitality_slot *s=find(owner,stats);if(!s)return 0;
    if(!in&&!size) {memset(s->bonuses,0,2);s->auto_equip=0;return 1;}
    if(!in||size!=2)return 0;
    memcpy(s->bonuses,in,2);s->auto_equip=0;return 1;
}
void raven_vitality_destroy(raven_vitality_owner *owner) {
    if(!owner)return;
    while(owner->slots) {
        raven_vitality_slot *next=owner->slots->next;
        free(owner->slots);owner->slots=next;
    }
    owner->active=owner->allocated=0;
}
static raven_vitality_owner guest_owner;
raven_vitality_owner *xml1_vitality_owner(void) {return &guest_owner;}
static void lifecycle_failure(const char *operation,uint32_t stats) {
    fprintf(stderr,"[VITALITY OWNER ERROR] %s stats=%08X\n",operation,stats);
    abort();
}
void xml1_vitality_construct(uint32_t stats) {
    if(!raven_vitality_create(&guest_owner,stats))lifecycle_failure("construct",stats);
}
void xml1_vitality_assign(uint32_t destination,uint32_t source) {
    if(!raven_vitality_copy(&guest_owner,destination,source))lifecycle_failure("assign",destination);
}
void xml1_vitality_retire(uint32_t stats) {
    if(!raven_vitality_retire(&guest_owner,stats))lifecycle_failure("retire",stats);
}
void xml1_vitality_reset_if_owned(uint32_t stats) {
    /* Native 472F0 also accepts a bare stats prefix. Only complete stats
     * lifetimes own our adjunct; never manufacture an owner for a prefix. */
    raven_vitality_read(&guest_owner,stats,NULL,0);
}
unsigned xml1_vitality_value(uint32_t stats,unsigned kind) {
    uint8_t value=0;
    raven_vitality_get(&guest_owner,stats,kind,&value);
    return value;
}
#if defined(_MSC_VER)
#define VITALITY_TLS __declspec(thread)
#else
#define VITALITY_TLS _Thread_local
#endif
static VITALITY_TLS uint32_t vitality_stream;
static VITALITY_TLS unsigned vitality_version;
void xml1_vitality_stream_reset(void) {vitality_stream=0;vitality_version=0;}
int xml1_vitality_stream_begin(uint32_t stream,unsigned version) {
    xml1_vitality_stream_reset();
    if(!stream||version>6)return 0;
    vitality_stream=stream;vitality_version=version;return 1;
}
int xml1_vitality_stream_version(uint32_t stream) {
    return stream&&stream==vitality_stream?(int)vitality_version:-1;
}
