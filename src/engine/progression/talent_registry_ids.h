#pragma once
#include "engine/progression/talent_registry_layout.h"

/* B5620 increments B4CD0's result before inserting an ID. Preserve its
 * monotonically increasing IDs until 254, then reuse a released ID instead
 * of allocating FF (the invalid sentinel). Inspect only occupied native
 * tree nodes; freed node keys are stale. No registry reference is acquired. */
static inline unsigned xml1_talent_id_predecessor(unsigned manager)
{
    unsigned char used[256]={0};
    unsigned highest=0;
    const unsigned pool=manager+XML1_TALENT_ID_MAP+12;
    for(unsigned i=0;i<XML1_TALENT_REGISTRY_CAPACITY;++i) {
        if(!(MEM32(pool+XML1_TALENT_ID_BITMAP+(i/32)*4)&(1u<<(i%32))))continue;
        unsigned id=MEM8(pool+i*16+12);
        used[id]=1;
        if(id>highest)highest=id;
    }
    if(highest<254)return highest;
    for(unsigned id=1;id<255;++id)if(!used[id])return id-1;
    return 255; /* B5728's existing failure path, before any mutation. */
}
