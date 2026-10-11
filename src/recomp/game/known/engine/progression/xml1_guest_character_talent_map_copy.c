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

/* xml1_guest_character_talent_map_copy; original guest entry 0x00049040.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00049040
 * Original: 0x00049040 - 0x000490E7 (167 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_talent_map_copy(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    MEM32(esp+4)=xml1_character_talent_map_resolve(MEM32(esp+4));
    if (xml1_character_talent_map_contains(MEM32(esp+4))) ecx=xml1_character_talent_map_create(ecx);
    const int _character_expanded=xml1_character_talent_map_contains(ecx);
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00049040: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx) = 0x3C708C;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 8) = edx;
    MEM32(ebx) = 0x3CAD68;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = ebx + 0xC;
    PUSH32(esp, edi);
    eax = eax + 0xC;
    ebp = eax + (_character_expanded ? 0xFE4u : 0x104u);
    edi = edx;
    esi = eax;
    ecx = (_character_expanded ? 0x3F9u : 0x41u);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = edx + (_character_expanded ? 0xFE4u : 0x104u);
    ecx = (_character_expanded ? 0xFFu : 0x11u);
    esi = ebp;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + (_character_expanded ? 0x3FCu : 0x44u));
    MEM32(edx + (_character_expanded ? 0x13E0u : 0x148u)) = ecx;
    ecx = MEM32(ebp + (_character_expanded ? 0x400u : 0x48u));
    MEM32(edx + (_character_expanded ? 0x13E4u : 0x14Cu)) = ecx;
    ecx = MEM32(ebp + (_character_expanded ? 0x404u : 0x4Cu));
    MEM32(edx + (_character_expanded ? 0x13E8u : 0x150u)) = ecx;
    ecx = MEM32(eax + (_character_expanded ? 0x13ECu : 0x154u));
    if (_character_expanded) memcpy((void*)XBOX_PTR(edx+0x13EC),(const void*)XBOX_PTR(eax+0x13EC),32);
    else MEM32(edx+(_character_expanded ? 0x13ECu : 0x154u))=ecx;
    eax = MEM32(eax + (_character_expanded ? 0x140Cu : 0x158u));
    MEM32(edx + (_character_expanded ? 0x140Cu : 0x158u)) = eax;
    edx = MEM32(esp + 0x14);
    edx = edx + (_character_expanded ? 0x141Cu : 0x168u);
    ecx = ebx + (_character_expanded ? 0x141Cu : 0x168u);
    MEM32(ebx) = 0x3CAD80;
    PUSH32(esp, edx);
    MEM32(ecx + (_character_expanded ? 0x3F8u : 0x40u)) = 0;
    PUSH32(esp, 0x000490DEu); RECOMP_ABI_CALL(0x000478B0u, xml1_guest_character_talent_records_copy); /* call 0x000478B0 */

loc_000490DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
