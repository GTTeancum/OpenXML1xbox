#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "audio/raven_effect_sound_guest.h"
#include "audio/raven_loop_sound_runtime.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/combat/raven_filter_guest.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_combat_event_resolve; original guest entry 0x000E4DA0.
 * Evidence: tests/engine/combat/raven_filter_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000E4DA0
 * Original: 0x000E4DA0 - 0x000E4DEF (79 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_combat_event_resolve(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4DA0: ;
    edx = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E4DAF; /* jne: not equal / not zero */

loc_000E4DAA: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_000E4DAF: ;
    eax = MEM32(edx + 0xD00C);
    eax = eax & ecx;
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0xC3DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0xC3DC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4DE0; /* jne: not equal / not zero */

loc_000E4DC1: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0xC374)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0xC374), esi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E4DE6; /* jne: not equal / not zero */

loc_000E4DE0: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E4DE6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
