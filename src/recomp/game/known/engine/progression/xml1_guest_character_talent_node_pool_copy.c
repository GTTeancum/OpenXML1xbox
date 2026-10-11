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

/* xml1_guest_character_talent_node_pool_copy; original guest entry 0x00048090.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048090
 * Original: 0x00048090 - 0x000480ED (93 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_talent_node_pool_copy(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const int _character_expanded=xml1_character_talent_map_contains(ecx);
    if (_character_expanded != xml1_character_talent_map_contains(MEM32(esp+4))) { fputs("Mixed character-map pool copy\n",stderr); abort(); }
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048090: ;
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebp + (_character_expanded ? 0xFE4u : 0x104u);
    ebx = eax + (_character_expanded ? 0xFE4u : 0x104u);
    esi = ebp;
    ecx = (_character_expanded ? 0x3F9u : 0x41u);
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = edx;
    edi = ebx;
    ecx = (_character_expanded ? 0xFFu : 0x11u);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(edx + (_character_expanded ? 0x3FCu : 0x44u));
    MEM32(ebx + (_character_expanded ? 0x3FCu : 0x44u)) = ecx;
    ecx = MEM32(edx + (_character_expanded ? 0x400u : 0x48u));
    MEM32(ebx + (_character_expanded ? 0x400u : 0x48u)) = ecx;
    edx = MEM32(edx + (_character_expanded ? 0x404u : 0x4Cu));
    MEM32(ebx + (_character_expanded ? 0x404u : 0x4Cu)) = edx;
    /* Bitmap copied after register restoration below. */
    POP32(esp, edi);
    POP32(esp, esi);
    if (_character_expanded) memcpy((void*)XBOX_PTR(eax + 0x13EC), (const void*)XBOX_PTR(ebp + 0x13EC), 32);
    else MEM32(eax + (_character_expanded ? 0x13ECu : 0x154u)) = MEM32(ebp + (_character_expanded ? 0x13ECu : 0x154u));
    edx = MEM32(ebp + (_character_expanded ? 0x140Cu : 0x158u));
    POP32(esp, ebp);
    MEM32(eax + (_character_expanded ? 0x140Cu : 0x158u)) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
