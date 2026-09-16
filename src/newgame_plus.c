#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "newgame_plus.h"
#include "character_limits.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int xml1_newgame_plus_starting;

static int confirmation_pending;
int xml1_newgame_plus_available(void) {
 /* The ordinary all-costumes/modder unlock is bit 0, not completion. */
 return MEM32(0x48D59C) && (MEM8(0x4A0540)&1) && (MEM8(0x4A0210+0x195)&2);
}

/* Use XML1's own popup manager, exactly as the native save confirmation does
 * at 00170CC4..00170D54. Both text and commands are copied into that manager;
 * the temporary guest-stack strings can be released after these calls. */
static void confirmation(int available) {
 unsigned saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
 g_esp-=1024;
 unsigned text=g_esp, cancel=text+512, yes=cancel+64, command=yes+64;
 strcpy((char*)XBOX_PTR(text),available ?
  "Start NewGame+? Story progress will reset. Character levels, powers, equipment, currency and unlocks carry over. Existing saves are not overwritten automatically." :
  "Load a completed campaign before starting NewGame+.");
 strcpy((char*)XBOX_PTR(cancel),available?"Cancel":"Back");
 strcpy((char*)XBOX_PTR(yes),"Start NewGame+");
 strcpy((char*)XBOX_PTR(command),"newgameplus_confirm");
 unsigned cancel_command=command+64;strcpy((char*)XBOX_PTR(cancel_command),"newgameplus_cancel");
 PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00187AF0u,sub_00187AF0);
 unsigned popup=g_eax;
 g_ecx=popup;PUSH32(g_esp,0);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00185E40u,sub_00185E40);
 g_ecx=popup;PUSH32(g_esp,text);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00186BC0u,sub_00186BC0);
 g_ecx=popup;PUSH32(g_esp,0);PUSH32(g_esp,1);PUSH32(g_esp,0);PUSH32(g_esp,cancel_command);PUSH32(g_esp,cancel);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00185C30u,sub_00185C30);
 if(available) {
  g_ecx=popup;PUSH32(g_esp,0);PUSH32(g_esp,1);PUSH32(g_esp,0);PUSH32(g_esp,command);PUSH32(g_esp,yes);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00185C30u,sub_00185C30);
 }
 g_ecx=popup;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x001872E0u,sub_001872E0);
 g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
}
int xml1_newgame_plus_command(unsigned command) {
 if(!command)return 0;
 const char *name=(const char*)XBOX_PTR(command);
 if(getenv("XML1_NEWGAME_TRACE"))fprintf(stderr,"[NEWGAME COMMAND] %.200s\n",name);
 if(!strcmp(name,"runscript newgameplus_cancel")){confirmation_pending=0;return -1;}
 int request=!strcmp(name,"newgameplus"), confirm=!strcmp(name,"runscript newgameplus_confirm");
 if(!request && !confirm)return 0;
 int available=xml1_newgame_plus_available();
 if(request) {
  confirmation_pending=available;
  confirmation(available);
  return -1;
 }
 if(!confirmation_pending || !available || xml1_newgame_plus_starting) {
  fputs("[NEWGAME+] Rejected: no confirmed completed campaign\n",stderr);return -1;
 }
 confirmation_pending=0;
 xml1_newgame_plus_starting=1;
 fputs("[NEWGAME+] Carry-over requested; native story reset begins\n",stderr);
 return 1;
}
void xml1_newgame_plus_finish(void) {
 if(xml1_newgame_plus_starting)fputs("[NEWGAME+] First mission initialized; carry-over transition finished\n",stderr);
 xml1_newgame_plus_starting=0;
}
