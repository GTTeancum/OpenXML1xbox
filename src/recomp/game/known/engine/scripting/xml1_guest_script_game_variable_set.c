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

/* xml1_guest_script_game_variable_set; original guest entry 0x000CB850.
 * Evidence: src/engine/scripting/raven_script_extensions.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000CB850
 * Original: 0x000CB850 - 0x000CB90A (186 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_script_game_variable_set(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000CB850: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000CB905; /* je: equal / zero */

loc_000CB860: ;
    eax = ebx;
    edx = eax + 1;

loc_000CB865: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CB865; /* jne: not equal / not zero */

loc_000CB86C: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000CB905; /* jae: above or equal (unsigned >=) */

loc_000CB877: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000CB880u); RECOMP_ABI_CALL(0x000CACD0u, xml1_guest_script_game_variable_lookup); /* call 0x000CACD0 */

loc_000CB880: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CB8E6; /* jne: not equal / not zero */

loc_000CB886: ;
    ecx = MEM32(esi + 0x1EBA4);
    eax = 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB904; /* je: equal / zero */

loc_000CB895: ;
    _fa = (uint32_t)(MEM32(esi + 0x5FC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5FC4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000CB904; /* je: equal / zero */

loc_000CB89D: ;
    ecx = esi + 0x5EEC;
    PUSH32(esp, 0x000CB8A8u); RECOMP_ABI_CALL(0x000CA340u, sub_000CA340); /* call 0x000CA340 */

loc_000CB8A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CB8BB; /* je: equal / zero */

loc_000CB8AC: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = 0x3D57F0;
    MEM32(eax + 4) = ecx;
    goto loc_000CB8BD;

loc_000CB8BB: ;
    eax = 0; /* xor self */

loc_000CB8BD: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000CB8CBu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000CB8CB: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x1EA40;
    PUSH32(esp, 0x000CB8E0u); RECOMP_ABI_CALL(0x000CAF90u, sub_000CAF90); /* call 0x000CAF90 */

loc_000CB8E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CB8E6: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000CB8F2u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000CB8F2: ;
    edx = MEM32(edi);
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000CB8FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CB8FC: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000CB904u); RECOMP_ABI_CALL(0x000CAA30u, sub_000CAA30); /* call 0x000CAA30 */

loc_000CB904: ;
    POP32(esp, edi);

loc_000CB905: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
