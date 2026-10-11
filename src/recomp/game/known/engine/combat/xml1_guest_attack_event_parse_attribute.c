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

/* xml1_guest_attack_event_parse_attribute; original guest entry 0x000CF6B0.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000CF6B0
 * Original: 0x000CF6B0 - 0x000CFAE1 (1073 bytes, 410 insns)
 * Category: game_physics
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_attack_event_parse_attribute(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000CF6B0: ;
    if (raven_secondary_victim_attribute(ecx, (const char*)XBOX_PTR(MEM32(esp + 4)), (const char*)XBOX_PTR(MEM32(esp + 8)))) { SET_LO8(eax, 1); esp += 12; return; }
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000CF6C4u); RECOMP_ABI_CALL(0x000CDC10u, sub_000CDC10); /* call 0x000CDC10 */

loc_000CF6C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFAD9; /* je: equal / zero */

loc_000CF6CC: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000CFAD9; /* je: equal / zero */

loc_000CF6D7: ;
    PUSH32(esp, 0x3D5C7C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF6E2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF6E2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF71E; /* jne: not equal / not zero */

loc_000CF6E9: ;
    /* Damage name matched and the native attack descriptor exists. */
    if(xml1_raven_attack_parse(esi, edi)) {
        POP32(esp, edi); POP32(esp, esi); SET_LO8(eax, 1); POP32(esp, ebx);
        esp += 12; return; /* original thiscall ret 8 */
    }
    PUSH32(esp, 0x000CF6EEu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF6EE: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF6FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF6FB: ;
    PUSH32(esp, 0x000CF700u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF700: ;
    edx = MEM32(esi + 0x14);
    MEM16(edx) = LO16(eax);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0x000CF70Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF70F: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 2) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF71E: ;
    PUSH32(esp, 0x3D5C70);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF729u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF729: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF752; /* jne: not equal / not zero */

loc_000CF730: ;
    PUSH32(esp, 0x000CF735u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF735: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF73Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF73F: ;
    PUSH32(esp, 0x000CF744u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF744: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF752: ;
    PUSH32(esp, 0x3D5C64);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF75Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF75D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF787; /* jne: not equal / not zero */

loc_000CF764: ;
    PUSH32(esp, 0x000CF769u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF769: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF773u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF773: ;
    PUSH32(esp, 0x000CF778u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF778: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 2) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF787: ;
    PUSH32(esp, 0x3D5C58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF792u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF792: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF7BB; /* jne: not equal / not zero */

loc_000CF799: ;
    PUSH32(esp, 0x000CF79Eu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF79E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF7A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF7A8: ;
    PUSH32(esp, 0x000CF7ADu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF7AD: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x26) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF7BB: ;
    PUSH32(esp, 0x3D5C4C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF7C6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF7C6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF7E4; /* jne: not equal / not zero */

loc_000CF7CD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CF7D3u); RECOMP_ABI_CALL(0x00059740u, xml1_guest_attack_type_from_name); /* call 0x00059740 */

loc_000CF7D3: ;
    edx = MEM32(esi + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF7E4: ;
    PUSH32(esp, 0x3D5C40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF7EFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF7EF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF80D; /* jne: not equal / not zero */

loc_000CF7F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CF7FCu); RECOMP_ABI_CALL(0x00049480u, xml1_guest_damage_type_from_name); /* call 0x00049480 */

loc_000CF7FC: ;
    ecx = MEM32(esi + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF80D: ;
    PUSH32(esp, 0x3D5C34);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF818u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF818: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF842; /* jne: not equal / not zero */

loc_000CF81F: ;
    PUSH32(esp, 0x000CF824u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF824: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF82Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF82E: ;
    PUSH32(esp, 0x000CF833u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF833: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 4) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF842: ;
    PUSH32(esp, 0x3D5C28);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF84Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF84D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF877; /* jne: not equal / not zero */

loc_000CF854: ;
    /* Bind symbolic range; literals retain the original parser. */
    if(xml1_raven_attack_maxrange_parse(esi, edi)) {
        POP32(esp, edi); POP32(esp, esi); SET_LO8(eax, 1); POP32(esp, ebx);
        esp += 12; return;
    }
    PUSH32(esp, 0x000CF859u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF859: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF863u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF863: ;
    PUSH32(esp, 0x000CF868u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF868: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 6) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF877: ;
    PUSH32(esp, 0x3D5C20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF882u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF882: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF8AE; /* jne: not equal / not zero */

loc_000CF889: ;
    PUSH32(esp, 0x000CF88Eu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF88E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF898u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF898: ;
    eax = MEM32(esi + 0x14);
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF8AE: ;
    PUSH32(esp, 0x3D5C1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF8B9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF8B9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF8E5; /* jne: not equal / not zero */

loc_000CF8C0: ;
    PUSH32(esp, 0x000CF8C5u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF8C5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF8CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF8CF: ;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    eax = MEM32(esi + 0x14);
    POP32(esp, edi);
    fp_top() = cos(fp_top()); /* fcos */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_000CF8E5: ;
    PUSH32(esp, 0x3D5C14);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF8F0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF8F0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF91A; /* jne: not equal / not zero */

loc_000CF8F7: ;
    PUSH32(esp, 0x000CF8FCu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF8FC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF906u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF906: ;
    PUSH32(esp, 0x000CF90Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF90B: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x34) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF91A: ;
    PUSH32(esp, 0x3D5C04);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF925u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF925: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF94F; /* jne: not equal / not zero */

loc_000CF92C: ;
    PUSH32(esp, 0x000CF931u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000CF931: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000CF93Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000CF93B: ;
    PUSH32(esp, 0x000CF940u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000CF940: ;
    ecx = MEM32(esi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x36) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF94F: ;
    PUSH32(esp, 0x3D5BFC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF95Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF95A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF978; /* jne: not equal / not zero */

loc_000CF961: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CF967u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000CF967: ;
    edx = MEM32(esi + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(edx + 0x28) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF978: ;
    PUSH32(esp, 0x3D5BF0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF983u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF983: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF99E; /* jne: not equal / not zero */

loc_000CF98A: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    ecx = ecx + 0x18;
    PUSH32(esp, 0x000CF996u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000CF996: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF99E: ;
    PUSH32(esp, 0x3D5BE0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF9A9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF9A9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF9C4; /* jne: not equal / not zero */

loc_000CF9B0: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    ecx = ecx + 0x20;
    PUSH32(esp, 0x000CF9BCu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000CF9BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF9C4: ;
    PUSH32(esp, 0x3D5BD8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF9CFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF9CF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CF9EE; /* jne: not equal / not zero */

loc_000CF9D6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CF9DCu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000CF9DC: ;
    ecx = MEM32(esi + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ecx + 0x24) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CF9EE: ;
    PUSH32(esp, 0x3D5BC4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CF9F9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CF9F9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CFA2E; /* jne: not equal / not zero */

loc_000CFA00: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CFA0Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CFA0B: ;
    esi = MEM32(esi + 0x14);
    SET_LO8(ebx, MEM8(esi + 0x38));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x38));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x38) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CFA2E: ;
    PUSH32(esp, 0x3D5BB8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CFA39u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CFA39: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CFA6E; /* jne: not equal / not zero */

loc_000CFA40: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CFA4Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CFA4B: ;
    esi = MEM32(esi + 0x14);
    SET_LO8(ebx, MEM8(esi + 0x38));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x38) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CFA6E: ;
    PUSH32(esp, 0x3D5BA8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CFA79u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CFA79: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CFA97; /* jne: not equal / not zero */

loc_000CFA80: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CFA86u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000CFA86: ;
    ecx = MEM32(esi + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 0x27) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CFA97: ;
    PUSH32(esp, 0x3D5BA0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000CFAA2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CFAA2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000CFAD1; /* jne: not equal / not zero */

loc_000CFAA9: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000CFAB4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000CFAB4: ;
    esi = MEM32(esi + 0x14);
    SET_LO8(ebx, MEM8(esi + 0x38));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x38) = LO8(eax);

loc_000CFAD1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000CFAD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
