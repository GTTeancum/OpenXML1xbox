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

/* xml1_guest_script_string_result; original guest entry 0x000CCCF0.
 * Evidence: src/engine/scripting/raven_script_extensions.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000CCCF0
 * Original: 0x000CCCF0 - 0x000CCD8B (155 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_script_string_result(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CCCF0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3506A1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    edx = MEM32(ecx + 0x5D4C);
    esp = esp - 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x300 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CCD7A; /* je: equal / zero */

loc_000CCD18: ;
    PUSH32(esp, esi);
    esi = ecx + 0x2C7C;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000CCD27u); RECOMP_ABI_CALL(0x000C9CD0u, sub_000C9CD0); /* call 0x000C9CD0 */

loc_000CCD27: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x2400;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | edi;
    edx = eax + eax * 2;
    ecx = esi + edx * 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    MEM32(esp + 0x14) = 0;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000CCD78; /* je: equal / zero */

loc_000CCD5D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000CCD67u); RECOMP_ABI_CALL(0x000CC250u, sub_000CC250); /* call 0x000CC250 */

loc_000CCD67: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_000CCD78: ;
    eax = 0; /* xor self */

loc_000CCD7A: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}
