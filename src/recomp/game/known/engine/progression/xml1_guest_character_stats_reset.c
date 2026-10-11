#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_ai_modes.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/combat/raven_vitality_save_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>

/* xml1_guest_character_stats_reset; original guest entry 0x00048C60.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048C60
 * Original: 0x00048C60 - 0x00048CE0 (128 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_stats_reset(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);
    const int _character_expanded=xml1_character_talent_map_contains(_character_map);
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048C60: ;
    eax = MEM32(_character_map+4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, esi);
    esi = _character_map;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00048C88; /* je: equal / zero */

loc_00048C6F: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048C88; /* je: equal / zero */

loc_00048C80: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00048C88u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_00048C88: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048C96; /* jne: not equal / not zero */

loc_00048C92: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048CB6; /* je: equal / zero */

loc_00048C96: ;
    PUSH32(esp, 0x00048C9Bu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00048C9B: ;
    edx = MEM32(eax);
    ecx = edi;
    ecx = ecx << 4;
    ecx = ecx + esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00048CACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00048CAC: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00048CB4u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_00048CB4: ;
    goto loc_00048C88;

loc_00048CB6: ;
    ecx = esi + 0xC;
    eax = 0; /* xor self */
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(ecx + (_character_expanded?0x140cu:0x158u)) = eax;
    memset((void*)XBOX_PTR(ecx+(_character_expanded?0x13ecu:0x154u)),0,_character_expanded?32u:4u);
    PUSH32(esp, 0x00048CD3u); RECOMP_ABI_CALL(0x0013C900u, xml1_guest_character_talent_node_pool_construct); /* call 0x0013C900 */

loc_00048CD3: ;
    POP32(esp, edi);
    ecx = esi + (_character_expanded?0x141cu:0x168u);
    POP32(esp, esi);
    g_seh_ebp = ebp; xml1_guest_character_talent_records_clear(); return; /* tail jmp 0x000476E0 */

}
