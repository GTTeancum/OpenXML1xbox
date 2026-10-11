#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_harming_callbacks.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_powerup_definition_parse_attribute; original guest entry 0x000955C0.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000955C0
 * Original: 0x000955C0 - 0x000961F1 (3121 bytes, 1114 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_powerup_definition_parse_attribute(void)
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

loc_000955C0: ;
    raven_xml1_powerup_metadata_attribute(ecx, (const char*)XBOX_PTR(MEM32(esp + 4)), (const char*)XBOX_PTR(MEM32(esp + 8)));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3C8660);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000955D3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000955D3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000955F9; /* jne: not equal / not zero */

loc_000955DA: ;
    PUSH32(esp, 0x000955DFu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000955DF: ;
    edx = MEM32(eax);
    ecx = esi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000955EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000955EF: ;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000955F9: ;
    PUSH32(esp, 0x3D069C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095604u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095604: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095628; /* jne: not equal / not zero */

loc_0009560B: ;
    PUSH32(esp, 0x00095610u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_00095610: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009561Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009561E: ;
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095628: ;
    PUSH32(esp, 0x3C8668);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095633u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095633: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009565C; /* jne: not equal / not zero */

loc_0009563A: ;
    PUSH32(esp, 0x0009563Fu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_0009563F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0009564Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009564D: ;
    PUSH32(esp, 0x00095652u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00095652: ;
    MEM8(esi + 0x76) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0009565C: ;
    PUSH32(esp, 0x3D0694);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095667u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095667: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095690; /* jne: not equal / not zero */

loc_0009566E: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3D02F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009567Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009567D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095683u); RECOMP_ABI_CALL(0x000946F0u, sub_000946F0); /* call 0x000946F0 */

loc_00095683: ;
    esp = esp + 0xC;
    MEM8(esi + 0x1C) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095690: ;
    PUSH32(esp, 0x3CB6D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009569Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009569B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000956C1; /* jne: not equal / not zero */

loc_000956A2: ;
    PUSH32(esp, 0x000956A7u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000956A7: ;
    edx = MEM32(eax);
    ecx = esi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000956B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000956B7: ;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000956C1: ;
    PUSH32(esp, 0x3D0688);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000956CCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000956CC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000956F0; /* jne: not equal / not zero */

loc_000956D3: ;
    PUSH32(esp, 0x000956D8u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000956D8: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000956E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000956E6: ;
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000956F0: ;
    PUSH32(esp, 0x3D067C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000956FBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000956FB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095719; /* jne: not equal / not zero */

loc_00095702: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009570Cu); RECOMP_ABI_CALL(0x00049480u, xml1_guest_damage_type_from_name); /* call 0x00049480 */

loc_0009570C: ;
    esp = esp + 4;
    MEM32(esi + 0x34) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095719: ;
    PUSH32(esp, 0x3D0670);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095724u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095724: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095747; /* jne: not equal / not zero */

loc_0009572B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095735u); RECOMP_ABI_CALL(0x00049510u, sub_00049510); /* call 0x00049510 */

loc_00095735: ;
    ecx = MEM32(esi + 0x38);
    esp = esp + 4;
    ecx = ecx | eax;
    POP32(esp, edi);
    MEM32(esi + 0x38) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095747: ;
    PUSH32(esp, 0x3D0668);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095752u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095752: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009576D; /* jne: not equal / not zero */

loc_00095759: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    PUSH32(esp, 0x00095766u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00095766: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0009576D: ;
    PUSH32(esp, 0x3D065C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095778u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095778: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095793; /* jne: not equal / not zero */

loc_0009577F: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi + 0x44;
    PUSH32(esp, 0x0009578Cu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_0009578C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095793: ;
    PUSH32(esp, 0x3D0648);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009579Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009579E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000957D2; /* jne: not equal / not zero */

loc_000957A5: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000957B4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000957B4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x70));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x70) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000957D2: ;
    PUSH32(esp, 0x3D063C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000957DDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000957DD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095811; /* jne: not equal / not zero */

loc_000957E4: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000957F3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000957F3: ;
    SET_LO8(ecx, MEM8(esi + 0x70));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x70) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095811: ;
    PUSH32(esp, 0x3D062C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009581Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009581C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095851; /* jne: not equal / not zero */

loc_00095823: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095832u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095832: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x70));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x70) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095851: ;
    PUSH32(esp, 0x3D0620);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009585Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009585C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000958DE; /* jne: not equal / not zero */

loc_00095863: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CD3B8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095872u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095872: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009588B; /* jne: not equal / not zero */

loc_00095879: ;
    eax = MEM32(esi + 0x6C);
    eax = eax & 0xFFFFF1FFu;
    eax = eax | 0x100;
    MEM32(esi + 0x6C) = eax;
    goto loc_000958AF;

loc_0009588B: ;
    PUSH32(esp, 0x3D061C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095896u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095896: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000958AF; /* jne: not equal / not zero */

loc_0009589D: ;
    ecx = MEM32(esi + 0x6C);
    ecx = ecx & 0xFFFFF2FFu;
    ecx = ecx | 0x200;
    MEM32(esi + 0x6C) = ecx;

loc_000958AF: ;
    PUSH32(esp, 0x3D0618);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000958BAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000958BA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000961EA; /* jne: not equal / not zero */

loc_000958C5: ;
    edx = MEM32(esi + 0x6C);
    edx = edx & 0xFFFFF3FFu;
    edx = edx | 0x300;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000958DE: ;
    PUSH32(esp, 0x3D060C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000958E9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000958E9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009591B; /* jne: not equal / not zero */

loc_000958F0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000958FFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000958FF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x70));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x70) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0009591B: ;
    PUSH32(esp, 0x3D0600);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095926u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095926: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000959A4; /* jne: not equal / not zero */

loc_0009592D: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3D05F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009593Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009593C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095956; /* jne: not equal / not zero */

loc_00095943: ;
    edx = MEM32(esi + 0x6C);
    edx = edx & 0xFFFFFFF1u;
    edx = edx | 1;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095956: ;
    PUSH32(esp, 0x3D05F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095961u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095961: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009597B; /* jne: not equal / not zero */

loc_00095968: ;
    eax = MEM32(esi + 0x6C);
    eax = eax & 0xFFFFFFF2u;
    eax = eax | 2;
    MEM32(esi + 0x6C) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0009597B: ;
    PUSH32(esp, 0x3D05EC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095986u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095986: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000961EA; /* jne: not equal / not zero */

loc_00095991: ;
    ecx = MEM32(esi + 0x6C);
    ecx = ecx & 0xFFFFFFF3u;
    ecx = ecx | 3;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000959A4: ;
    PUSH32(esp, 0x3D05D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000959AFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000959AF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000959CD; /* jne: not equal / not zero */

loc_000959B6: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000959C0u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000959C0: ;
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000959CD: ;
    PUSH32(esp, 0x3D05CC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000959D8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000959D8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095A5E; /* jne: not equal / not zero */

loc_000959DF: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3D05F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000959EEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000959EE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095A0A; /* jne: not equal / not zero */

loc_000959F5: ;
    eax = MEM32(esi + 0x6C);
    eax = eax & 0xFFFFFF1Fu;
    eax = eax | 0x10;
    MEM32(esi + 0x6C) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095A0A: ;
    PUSH32(esp, 0x3D05F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095A15u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095A15: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095A32; /* jne: not equal / not zero */

loc_00095A1C: ;
    ecx = MEM32(esi + 0x6C);
    ecx = ecx & 0xFFFFFF2Fu;
    ecx = ecx | 0x20;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095A32: ;
    PUSH32(esp, 0x3D05EC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095A3Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095A3D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000961EA; /* jne: not equal / not zero */

loc_00095A48: ;
    edx = MEM32(esi + 0x6C);
    edx = edx & 0xFFFFFF3Fu;
    edx = edx | 0x30;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095A5E: ;
    PUSH32(esp, 0x3C96F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095A69u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095A69: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095A84; /* jne: not equal / not zero */

loc_00095A70: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x00095A7Du); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00095A7D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095A84: ;
    PUSH32(esp, 0x3D05C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095A8Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095A8F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095AC3; /* jne: not equal / not zero */

loc_00095A96: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095AA5u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095AA5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x72));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x72) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095AC3: ;
    PUSH32(esp, 0x3D05B8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095ACEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095ACE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095AF8; /* jne: not equal / not zero */

loc_00095AD5: ;
    PUSH32(esp, 0x00095ADAu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_00095ADA: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00095AE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00095AE8: ;
    PUSH32(esp, 0x00095AEDu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00095AED: ;
    MEM16(esi + 0x74) = LO16(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095AF8: ;
    PUSH32(esp, 0x3D05B0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095B03u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095B03: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095B39; /* jne: not equal / not zero */

loc_00095B0A: ;
    PUSH32(esp, 0x00095B0Fu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_00095B0F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00095B1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00095B1D: ;
    PUSH32(esp, 0x00095B22u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00095B22: ;
    SET_LO8(edx, MEM8(esi + 0x71));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x71));
    SET_LO8(edx, LO8(edx) & 0x7F);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x71) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095B39: ;
    PUSH32(esp, 0x3D05A0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095B44u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095B44: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095B68; /* jne: not equal / not zero */

loc_00095B4B: ;
    PUSH32(esp, 0x00095B50u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_00095B50: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00095B5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00095B5E: ;
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095B68: ;
    PUSH32(esp, 0x3D0594);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095B73u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095B73: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095B97; /* jne: not equal / not zero */

loc_00095B7A: ;
    PUSH32(esp, 0x00095B7Fu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_00095B7F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00095B8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00095B8D: ;
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095B97: ;
    PUSH32(esp, 0x3D0588);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095BA2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095BA2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095BD3; /* jne: not equal / not zero */

loc_00095BA9: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095BB8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095BB8: ;
    SET_LO8(ecx, MEM8(esi + 0x72));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x72) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095BD3: ;
    PUSH32(esp, 0x3D0580);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095BDEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095BDE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095C13; /* jne: not equal / not zero */

loc_00095BE5: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095BF4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095BF4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x72));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x72) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095C13: ;
    PUSH32(esp, 0x3D0574);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095C1Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095C1E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095C53; /* jne: not equal / not zero */

loc_00095C25: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095C34u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095C34: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x72));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x72) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095C53: ;
    PUSH32(esp, 0x3D0568);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095C5Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095C5E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095C91; /* jne: not equal / not zero */

loc_00095C65: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095C74u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095C74: ;
    SET_LO8(ecx, MEM8(esi + 0x71));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 7);
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(esi + 0x71) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095C91: ;
    PUSH32(esp, 0x3D055C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095C9Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095C9C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095CD0; /* jne: not equal / not zero */

loc_00095CA3: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095CB2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095CB2: ;
    SET_LO8(ecx, MEM8(esi + 0x72));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x72) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095CD0: ;
    PUSH32(esp, 0x3D0550);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095CDBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095CDB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095CFD; /* jne: not equal / not zero */

loc_00095CE2: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + 0xB0;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095CF3u); RECOMP_ABI_CALL(0x0002DEE0u, sub_0002DEE0); /* call 0x0002DEE0 */

loc_00095CF3: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095CFD: ;
    PUSH32(esp, 0x3D053C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095D08u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095D08: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095D2A; /* jne: not equal / not zero */

loc_00095D0F: ;
    edx = MEM32(esp + 0x10);
    esi = esi + 0xB4;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095D20u); RECOMP_ABI_CALL(0x0002DEE0u, sub_0002DEE0); /* call 0x0002DEE0 */

loc_00095D20: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095D2A: ;
    PUSH32(esp, 0x3D0530);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095D35u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095D35: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095D57; /* jne: not equal / not zero */

loc_00095D3C: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 0xB8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095D4Du); RECOMP_ABI_CALL(0x0002D920u, sub_0002D920); /* call 0x0002D920 */

loc_00095D4D: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095D57: ;
    PUSH32(esp, 0x3D0520);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095D62u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095D62: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095D84; /* jne: not equal / not zero */

loc_00095D69: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + 0x9C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095D7Au); RECOMP_ABI_CALL(0x0002DA60u, sub_0002DA60); /* call 0x0002DA60 */

loc_00095D7A: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095D84: ;
    PUSH32(esp, 0x3D0510);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095D8Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095D8F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095DB1; /* jne: not equal / not zero */

loc_00095D96: ;
    edx = MEM32(esp + 0x10);
    esi = esi + 0xA0;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095DA7u); RECOMP_ABI_CALL(0x0002DA60u, sub_0002DA60); /* call 0x0002DA60 */

loc_00095DA7: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095DB1: ;
    PUSH32(esp, 0x3D0504);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095DBCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095DBC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095DDE; /* jne: not equal / not zero */

loc_00095DC3: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 0xA4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095DD4u); RECOMP_ABI_CALL(0x0002DA60u, sub_0002DA60); /* call 0x0002DA60 */

loc_00095DD4: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095DDE: ;
    PUSH32(esp, 0x3D04F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095DE9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095DE9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095E0B; /* jne: not equal / not zero */

loc_00095DF0: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + 0xA8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095E01u); RECOMP_ABI_CALL(0x0002DA60u, sub_0002DA60); /* call 0x0002DA60 */

loc_00095E01: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095E0B: ;
    PUSH32(esp, 0x3D04EC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095E16u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095E16: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095E38; /* jne: not equal / not zero */

loc_00095E1D: ;
    edx = MEM32(esp + 0x10);
    esi = esi + 0xAC;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00095E2Eu); RECOMP_ABI_CALL(0x0002C880u, sub_0002C880); /* call 0x0002C880 */

loc_00095E2E: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095E38: ;
    PUSH32(esp, 0x3D04E0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095E43u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095E43: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095E65; /* jne: not equal / not zero */

loc_00095E4A: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 0xBC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095E5Bu); RECOMP_ABI_CALL(0x0002DA00u, sub_0002DA00); /* call 0x0002DA00 */

loc_00095E5B: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095E65: ;
    PUSH32(esp, 0x3D04D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095E70u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095E70: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095EA4; /* jne: not equal / not zero */

loc_00095E77: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00095E81u); RECOMP_ABI_CALL(0x00049480u, xml1_guest_damage_type_from_name); /* call 0x00049480 */

loc_00095E81: ;
    ecx = eax;
    SET_LO8(eax, MEM8(esi + 0x18));
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + 0x10);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi + 0x18) = LO8(eax);
    MEM32(esi + 0x10) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095EA4: ;
    PUSH32(esp, 0x3D04C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095EAFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095EAF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095EE3; /* jne: not equal / not zero */

loc_00095EB6: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095EC0u); RECOMP_ABI_CALL(0x00059740u, xml1_guest_attack_type_from_name); /* call 0x00059740 */

loc_00095EC0: ;
    ecx = eax;
    SET_LO8(eax, MEM8(esi + 0x18));
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + 0x14);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi + 0x18) = LO8(eax);
    MEM32(esi + 0x14) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095EE3: ;
    PUSH32(esp, 0x3D04B4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095EEEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095EEE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095F15; /* jne: not equal / not zero */

loc_00095EF5: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00095F02u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_00095F02: ;
    SET_LO8(ecx, MEM8(esi + 0x18));
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    SET_LO8(ecx, LO8(ecx) | 0x10);
    POP32(esp, edi);
    MEM8(esi + 0x18) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095F15: ;
    PUSH32(esp, 0x3D04A8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095F20u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095F20: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095F45; /* jne: not equal / not zero */

loc_00095F27: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 0x00095F34u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00095F34: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | 8);
    MEM8(esi + 0x18) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095F45: ;
    PUSH32(esp, 0x3D0498);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095F50u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095F50: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095F77; /* jne: not equal / not zero */

loc_00095F57: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, 0x00095F64u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00095F64: ;
    SET_LO8(edx, MEM8(esi + 0x18));
    SET_LO8(edx, LO8(edx) & 0xFD);
    SET_LO8(edx, LO8(edx) | 4);
    POP32(esp, edi);
    MEM8(esi + 0x18) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095F77: ;
    PUSH32(esp, 0x3D0488);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095F82u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095F82: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095FB5; /* jne: not equal / not zero */

loc_00095F89: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00095F98u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095F98: ;
    SET_LO8(edx, MEM8(esi + 0x18));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) & 0xFC);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    POP32(esp, edi);
    MEM8(esi + 0x18) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095FB5: ;
    PUSH32(esp, 0x3CB6F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095FC0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095FC0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00095FDB; /* jne: not equal / not zero */

loc_00095FC7: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, 0x00095FD4u); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_00095FD4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00095FDB: ;
    PUSH32(esp, 0x3D0480);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095FE6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095FE6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000961D0; /* je: equal / zero */

loc_00095FF1: ;
    PUSH32(esp, 0x3CB6E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00095FFCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00095FFC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000961D0; /* je: equal / zero */

loc_00096007: ;
    PUSH32(esp, 0x3D0470);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096012u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00096012: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009602D; /* jne: not equal / not zero */

loc_00096019: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 0x60;
    PUSH32(esp, 0x00096026u); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_00096026: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0009602D: ;
    PUSH32(esp, 0x3D0460);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096038u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00096038: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009605F; /* jne: not equal / not zero */

loc_0009603F: ;
    edx = esp + 0xC;
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096052u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_00096052: ;
    esp = esp + 8;
    MEM32(esi + 0x64) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0009605F: ;
    PUSH32(esp, 0x3D0450);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009606Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009606A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00096085; /* jne: not equal / not zero */

loc_00096071: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 0x78;
    PUSH32(esp, 0x0009607Eu); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_0009607E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00096085: ;
    PUSH32(esp, 0x3D0440);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096090u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00096090: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000960B7; /* jne: not equal / not zero */

loc_00096097: ;
    edx = esp + 0xC;
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000960AAu); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000960AA: ;
    esp = esp + 8;
    MEM32(esi + 0x7C) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000960B7: ;
    PUSH32(esp, 0x3D0430);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000960C2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000960C2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000960E0; /* jne: not equal / not zero */

loc_000960C9: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 0x84;
    PUSH32(esp, 0x000960D9u); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_000960D9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000960E0: ;
    PUSH32(esp, 0x3D0420);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000960EBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000960EB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00096115; /* jne: not equal / not zero */

loc_000960F2: ;
    edx = esp + 0xC;
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096105u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_00096105: ;
    esp = esp + 8;
    MEM32(esi + 0x88) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00096115: ;
    PUSH32(esp, 0x3D0410);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096120u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00096120: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009613E; /* jne: not equal / not zero */

loc_00096127: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi + 0x90;
    PUSH32(esp, 0x00096137u); RECOMP_ABI_CALL(0x00095280u, sub_00095280); /* call 0x00095280 */

loc_00096137: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0009613E: ;
    PUSH32(esp, 0x3D0400);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096149u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00096149: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00096173; /* jne: not equal / not zero */

loc_00096150: ;
    edx = esp + 0xC;
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00096163u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_00096163: ;
    esp = esp + 8;
    MEM32(esi + 0x94) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00096173: ;
    PUSH32(esp, 0x3C8690);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0009617Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009617E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000961EA; /* je: equal / zero */

loc_00096185: ;
    PUSH32(esp, 0x3D03F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00096190u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00096190: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000961EA; /* je: equal / zero */

loc_00096197: ;
    PUSH32(esp, 0x3D03F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000961A2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000961A2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000961EA; /* je: equal / zero */

loc_000961A9: ;
    PUSH32(esp, 0x3D03E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000961B4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000961B4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000961EA; /* je: equal / zero */

loc_000961BB: ;
    PUSH32(esp, 0x3CC9F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000961C6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000961C6: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000961D0: ;
    edx = MEM32(esp + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000961E4u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000961E4: ;
    MEM32(esi + 0x58) = eax;
    esp = esp + 8;

loc_000961EA: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
