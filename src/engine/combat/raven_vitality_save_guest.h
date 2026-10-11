#ifndef RAVEN_VITALITY_SAVE_GUEST_H
#define RAVEN_VITALITY_SAVE_GUEST_H
#include "engine/combat/raven_vitality_bonus.h"
#include <stdio.h>
#include <stdlib.h>
/* At the two traced boundaries the native 44-byte stats prefix has already
 * moved. V5 inserts exactly two bonus bytes before the native talent count.
 * V6 adds the auto-equip boolean after those bonuses. V5 resets that boolean;
 * older saves consume no additional bytes and clear both bonuses and flag.
 * Snapshot stats use this same path, rather than a roster-ID side table. */
static inline void xml1_vitality_saved_record(uint32_t stats,uint32_t stream,int reading) {
    int version=xml1_vitality_stream_version(stream),ok=1;
    if(version<0)return;
    if(version<5) {
        if(reading)ok=raven_vitality_read(xml1_vitality_owner(),stats,NULL,0);
    } else {
        uint32_t cursor=MEM32(stream+0x2fc00u);
        unsigned size=version>=6?3u:2u;
        /* Match native 6E7E0/6E830's strict end bound, without overflow. */
        if(cursor<stream||cursor-stream>=0x2fc00u-size)ok=0;
        else {
            uint8_t *bytes=(uint8_t *)((uintptr_t)g_xbox_mem_offset+cursor);
            uint8_t enabled=0;
            /* Reject malformed flags before changing bonuses or output. The
             * same owner check covers both fields, so this is one record. */
            ok=raven_auto_equip_get(xml1_vitality_owner(),stats,&enabled);
            if(ok && reading && size==3 && bytes[2]>1)ok=0;
            if(ok) {
                ok=reading?raven_vitality_read(xml1_vitality_owner(),stats,bytes,2):
                           raven_vitality_write(xml1_vitality_owner(),stats,bytes,2);
                if(ok && size==3) {
                    if(reading)ok=raven_auto_equip_set(xml1_vitality_owner(),stats,bytes[2]);
                    else bytes[2]=enabled;
                }
            }
            if(ok)MEM32(stream+0x2fc00u)=cursor+size;
        }
    }
    if(!ok) {
        fprintf(stderr,"[CHARACTER SAVE] invalid vitality record stats=%08X stream=%08X\n",stats,stream);
        abort();
    }
}
#endif
