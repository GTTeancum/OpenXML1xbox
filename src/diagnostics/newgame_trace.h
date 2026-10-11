#ifndef XML1_NEWGAME_TRACE_H
#define XML1_NEWGAME_TRACE_H
#include "game/xml1/character_limits.h"
#include "engine/progression/character_talent_map_guest.h"
#include <stdio.h>
#include <stdlib.h>
/* Read-only snapshots at traced new-game/reset boundaries. Never save files. */
static void xml1_newgame_trace(const char *phase) {
 const char *dir=getenv("XML1_NEWGAME_TRACE"); if(!dir)return;
 static unsigned serial; unsigned manager=MEM32(0x48D59C);
 char path[1024]; snprintf(path,sizeof(path),"%s/%03u-%s.bin",dir,++serial,phase);
 FILE *f=fopen(path,"wb");if(!f)return;
 if(manager)fwrite((void*)((uintptr_t)g_xbox_mem_offset+manager),1,XML1_MANAGER_BYTES,f);
 fwrite((void*)((uintptr_t)g_xbox_mem_offset+0x499820),1,0x1A68,f);
 fwrite((void*)((uintptr_t)g_xbox_mem_offset+0x4A0210),1,0x330,f);
 fclose(f);
 /* Expanded talent maps are separately owned guest allocations. A raw manager
  * snapshot alone only sees their old embedded locations, so record each live
  * map as well. This diagnostic remains read-only and explicitly opt-in. */
 snprintf(path,sizeof(path),"%s/%03u-%s.talents",dir,serial,phase);
 f=fopen(path,"wb");
 if(f && manager) {
  for(unsigned slot=0;slot<XML1_CHARACTER_POOL_CAPACITY;++slot) {
   unsigned pool=manager+4;
   if(!(MEM32(pool+XML1_POOL_CONSTRUCTED+(slot/32)*4)&(1u<<(slot%32))))continue;
   unsigned character=pool+slot*XML1_CHARACTER_BYTES;
   unsigned map=xml1_character_talent_map_resolve(character+4+0x30);
   unsigned bytes=map==character+4+0x30?0x1ac:XML1_CHARACTER_TALENT_MAP_BYTES;
   fwrite(&slot,4,1,f);fwrite(&bytes,4,1,f);
   fwrite((void*)XBOX_PTR(map),1,bytes,f);
  }
 }
 if(f)fclose(f);
 fprintf(stderr,"[NEWGAME TRACE] %s manager=%08X\n",phase,manager);
}
#endif
