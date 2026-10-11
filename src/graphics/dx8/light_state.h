#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/* Guest light IDs name retained definitions, not hardware light slots. */
typedef struct { uint32_t id, enabled, value[26]; } xml1_light;
typedef struct { xml1_light *entries; size_t count, capacity; } xml1_light_state;
static xml1_light *xml1_light_find(xml1_light_state *state, uint32_t id) {
    for(size_t i=0;i<state->count;++i) if(state->entries[i].id==id) return &state->entries[i];
    if(state->count==state->capacity) {
        size_t capacity=state->capacity+32;
        if(capacity<state->capacity || capacity>SIZE_MAX/sizeof(xml1_light)) return NULL;
        void *p=realloc(state->entries,capacity*sizeof(xml1_light));
        if(!p) return NULL;
        state->entries=p; state->capacity=capacity;
    }
    xml1_light *light=&state->entries[state->count++];
    memset(light,0,sizeof(*light)); light->id=id;
    /* Original LightEnable creates this default directional light when absent. */
    light->value[0]=3;
    light->value[1]=light->value[2]=light->value[3]=light->value[18]=0x3F800000;
    return light;
}
static int xml1_light_snapshot(const xml1_light_state *state, uint32_t values[32][26], uint32_t *mask) {
    unsigned count=0; *mask=0;
    for(size_t i=0;i<state->count;++i) if(state->entries[i].enabled) {
        if(count==32) return 0;
        memcpy(values[count],state->entries[i].value,104);
        *mask|=1u<<count++;
    }
    return 1;
}
