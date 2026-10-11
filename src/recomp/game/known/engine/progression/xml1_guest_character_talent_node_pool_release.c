#define RECOMP_GENERATED_CODE
#include "audio/raven_loop_sound_runtime.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/actors/raven_ai_modes.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_character_talent_node_pool_release; original guest entry 0x000CB2B0.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000CB2B0
 * Original: 0x000CB2B0 - 0x000CB322 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_talent_node_pool_release(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const int _character_expanded=xml1_character_talent_map_contains(ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB2B0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + (_character_expanded ? 0x13ECu : 0x154u);
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + (_character_expanded ? 0x13E0u : 0x148u));
    edi = MEM32(eax + (_character_expanded ? 0x13E8u : 0x150u));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)((_character_expanded ? 0xFEu : 0x10u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(eax + (_character_expanded ? 0x13E0u : 0x148u)) = ecx;
    MEM32(eax + (_character_expanded ? 0x13E8u : 0x150u)) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000CB308; /* jl: less (signed <) */

loc_000CB2F7: ;
    MEM32(eax + (_character_expanded ? 0x13E0u : 0x148u)) = 0;
    ecx = (_character_expanded ? 0xFDu : 0xFu);
    goto loc_000CB309;

loc_000CB308: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000CB309: ;
    MEM32(eax + ecx * 4 + (_character_expanded ? 0xFE4u : 0x104u)) = esi;
    ecx = MEM32(eax + (_character_expanded ? 0x140Cu : 0x158u));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + (_character_expanded ? 0x140Cu : 0x158u)) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
