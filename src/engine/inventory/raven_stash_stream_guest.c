#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/inventory/raven_stash_owner.h"
#include "engine/inventory/raven_stash_stream_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void stash_stream_error(const char* reason) {
    fprintf(stderr,"[STASH SAVE ERROR] %s\n",reason);_Exit(4);
}
static uint32_t stash_cursor(uint32_t stream,uint32_t* room) {
    if(stream<0x10000||stream>0x08000000u-0x2fc04)stash_stream_error("Invalid stream address");
    uint32_t cursor=MEM32(stream+0x2fc00);
    if(cursor<stream||cursor-stream>=0x2fc00)stash_stream_error("Invalid stream cursor");
    *room=0x2fc00-(cursor-stream);return cursor;
}
void xml1_stash_stream_save(uint32_t inventory,uint32_t stream) {
    // Empty live and permanent stash need no extension. Native inventory saves
    // its own valid flag, so an empty-but-valid snapshot is recoverable on load.
    if(!raven_stash_has_saved_items(inventory))return;
    uint32_t room,cursor=stash_cursor(stream,&room);
    size_t written=raven_stash_save(inventory,(void*)XBOX_PTR(cursor),room-1);
    if(!written)stash_stream_error("No room for stash extension");
    MEM32(stream+0x2fc00)=cursor+(uint32_t)written;
}
void xml1_stash_stream_load(uint32_t inventory,uint32_t stream) {
    uint32_t room,cursor=stash_cursor(stream,&room);
    // Native70350/70570 save/load inventory before progress. Consequently its
    // persistent-valid flag is already restored when this optional section is
    // read after the existing progress/campaign adjuncts. No stock bytes move.
    if(room<8||memcmp((const void*)XBOX_PTR(cursor),"XML1STSH",8)) {
        raven_stash_load_legacy(inventory,MEM8(inventory+0x1918)!=0);return;
    }
    uint32_t size=room>=16?MEM32(cursor+12):0;
    if(size<28||size>=room||MEM32(cursor+16)!=(uint32_t)(MEM8(inventory+0x1918)!=0)||
       !raven_stash_load(inventory,(const void*)XBOX_PTR(cursor),size))
        stash_stream_error("Invalid stash extension");
    MEM32(stream+0x2fc00)=cursor+size;
}
