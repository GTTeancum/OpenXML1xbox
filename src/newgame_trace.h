#ifndef XML1_NEWGAME_TRACE_H
#define XML1_NEWGAME_TRACE_H
#include "character_limits.h"
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
 fclose(f);fprintf(stderr,"[NEWGAME TRACE] %s manager=%08X\n",phase,manager);
}
#endif
