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

/* xml1_guest_character_talent_map_construct; original guest entry 0x00048C00.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048C00
 * Original: 0x00048C00 - 0x00048C51 (81 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_talent_map_construct(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    ecx=xml1_character_talent_map_create(ecx);
    const int _character_expanded=xml1_character_talent_map_contains(ecx);

loc_00048C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3CAD68;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ecx + (_character_expanded ? 0x13E0u : 0x148u)) = edi;
    MEM32(ecx + (_character_expanded ? 0x13E4u : 0x14Cu)) = edi;
    MEM32(ecx + (_character_expanded ? 0x13E8u : 0x150u)) = edi;
    MEM32(ecx + (_character_expanded ? 0x13ECu : 0x154u)) = edi;
    MEM32(ecx + (_character_expanded ? 0x140Cu : 0x158u)) = edi;
    PUSH32(esp, 0x00048C40u); RECOMP_ABI_CALL(0x0013C900u, xml1_guest_character_talent_node_pool_construct); /* call 0x0013C900 */

loc_00048C40: ;
    MEM32(esi) = 0x3CAD80;
    MEM32(esi + (_character_expanded ? 0x1814u : 0x1A8u)) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
