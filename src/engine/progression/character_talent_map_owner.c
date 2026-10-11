#include "engine/progression/character_talent_map_owner.h"
#include <stdlib.h>

struct xml1_character_map_slot {
    uint32_t original, storage;
    struct xml1_character_map_slot *next;
};
static xml1_character_map_owner *current_owner;
int xml1_character_map_bind(xml1_character_map_owner *owner) {
    if(current_owner&&current_owner!=owner&&current_owner->active)return 0;
    current_owner=owner;return 1;
}
uint32_t xml1_character_map_current_resolve(uint32_t original) {
    uint32_t storage=xml1_character_map_find(current_owner,original);
    return storage?storage:original;
}
int xml1_character_map_current_contains(uint32_t address) {
    return xml1_character_map_contains(current_owner,address);
}
uint32_t xml1_character_map_find(const xml1_character_map_owner *owner,uint32_t original) {
    if(!owner||!original)return 0;
    for(const xml1_character_map_slot *p=owner->slots;p;p=p->next)
        if(p->original==original)return p->storage;
    return 0;
}
uint32_t xml1_character_map_create(xml1_character_map_owner *owner,uint32_t original) {
    if(!owner||!owner->allocate||!original||
       xml1_character_map_find(owner,original))return 0;
    xml1_character_map_slot *slot=owner->slots;
    while(slot&&slot->original)slot=slot->next;
    if(!slot) {
        slot=(xml1_character_map_slot*)calloc(1,sizeof(*slot));
        if(!slot)return 0;
        uint32_t storage=owner->allocate(owner->context,XML1_CHARACTER_TALENT_MAP_BYTES);
        if(!storage||storage>UINT32_MAX-XML1_CHARACTER_TALENT_MAP_BYTES) {
            free(slot);return 0;
        }
        slot->storage=storage;slot->next=owner->slots;
        owner->slots=slot;++owner->allocated;
    }
    slot->original=original;++owner->active;
    return slot->storage;
}
int xml1_character_map_retire(xml1_character_map_owner *owner,uint32_t original) {
    if(!owner||!original)return 0;
    for(xml1_character_map_slot *p=owner->slots;p;p=p->next)if(p->original==original) {
        p->original=0;--owner->active;return 1;
    }
    return 0;
}
int xml1_character_map_contains(const xml1_character_map_owner *owner,uint32_t address) {
    if(!owner)return 0;
    for(const xml1_character_map_slot *p=owner->slots;p;p=p->next)
        if(p->original&&address>=p->storage&&
           address-p->storage<XML1_CHARACTER_TALENT_MAP_BYTES)return 1;
    return 0;
}
void xml1_character_map_owner_destroy(xml1_character_map_owner *owner) {
    if(!owner)return;
    if(current_owner==owner)current_owner=NULL;
    while(owner->slots) {
        xml1_character_map_slot *next=owner->slots->next;
        free(owner->slots);owner->slots=next;
    }
    owner->active=owner->allocated=0;
}
