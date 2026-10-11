#define RECOMP_GENERATED_CODE
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_progress_guest.h"
#include "ui/pc_menu.h"
#include "engine/saves/save_name.h"
#include "app/build_settings.h"
#include "engine/core/motionpath_name.h"
#include "recomp_funcs.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/* xml1_guest_command_manager_execute; original guest entry 0x0011C680.
 * Evidence: docs/MAIN-MENU-QUIT.md
 * Evidence: scripts/guard-pc-menu.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0011C680
 * Original: 0x0011C680 - 0x0011C71D (157 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_command_manager_execute(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C680: ;
    { int ng=xml1_newgame_plus_command(MEM32(esp+4));
      if(ng<0){SET_LO8(eax,1);esp+=8;return;}
      if(ng>0)MEM32(esp+4)=0x3E0734; /* Retail "newgame" queues the destructive reset safely. */ }

    /* Command-manager vtable 003DA650 + 14: execute const char*. */
    if (MEM32(esp+4)) xml1_pc_menu_command((const char *)((uintptr_t)g_xbox_mem_offset+MEM32(esp+4)));
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0011C70D; /* je: equal / zero */

loc_0011C691: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C70D; /* je: equal / zero */

loc_0011C696: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0011C6A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C6A2: ;
    esi = eax;
    /* Native parser has consumed one token; keep its existing command chain. */
    if (esi && xml1_pc_native_token((const char *)((uintptr_t)g_xbox_mem_offset+esi))) goto loc_0011C705;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C705; /* je: equal / zero */

loc_0011C6AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C705; /* je: equal / zero */

loc_0011C6AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C6D0; /* je: equal / zero */

loc_0011C6B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C6B8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0011C6B8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011C6C3u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0011C6C3: ;
    ecx = eax;
    PUSH32(esp, 0x0011C6CAu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0011C6CA: ;
    MEM32(esp + 8) = eax;
    goto loc_0011C6D8;

loc_0011C6D0: ;
    MEM32(esp + 8) = 0;

loc_0011C6D8: ;
    edx = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011C6EBu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0011C6EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C6F6; /* jne: not equal / not zero */

loc_0011C6F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C715; /* je: equal / zero */

loc_0011C6F6: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + eax * 4 + 0x2A8); PUSH32(esp, 0x0011C702u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011C702: ;
    esp = esp + 4;

loc_0011C705: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011C691; /* jne: not equal / not zero */

loc_0011C70D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0011C715: ;
    if (xml1_missing_gameplay_command(edi + 0x46C)) goto loc_0011C705;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
