#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_definition_register_node; original guest entry 0x000B5620.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B5620
 * Original: 0x000B5620 - 0x000B5892 (626 bytes, 182 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_definition_register_node(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5620: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3501B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x70;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x84);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B5659; /* jne: not equal / not zero */

loc_000B5652: ;
    eax = 0; /* xor self */
    goto loc_000B5876;

loc_000B5659: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;
    if ((ecx == 0)) goto loc_000B571A; /* je: equal / zero */

loc_000B5671: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000B5681u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5681: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0x000B5694u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B5694: ;
    ecx = esp + 0x1C;
    ebp = eax;
    MEM32(esp + 0x88) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B56AAu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B56AA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5872; /* je: equal / zero */

loc_000B56B2: ;
    ecx = ebp;
    PUSH32(esp, 0x000B56B9u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B56B9: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B56C6u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B56C6: ;
    ecx = MEM32(edi + 8);
    esi = edi + 4;
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x43) = LO8(ebx);
    PUSH32(esp, 0x000B56E0u); RECOMP_ABI_CALL(0x000B3B30u, sub_000B3B30); /* call 0x000B3B30 */

loc_000B56E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B57E2; /* jne: not equal / not zero */

loc_000B56F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B57D1; /* jne: not equal / not zero */

loc_000B56FB: ;
    ecx = MEM32(edi + (_talent_expanded ? 0x2FE4u : 0x1C58u));
    eax = (_talent_expanded ? 0xFEu : 0x96u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B571A; /* je: equal / zero */

loc_000B570A: ;
    _fa = (uint32_t)(MEM32(edi + (_talent_expanded ? 0x8888u : 0x50BCu))) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x50BC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B571A; /* je: equal / zero */

loc_000B5712: ;
    _fa = (uint32_t)(MEM32(edi + (_talent_expanded ? 0xA0A4u : 0x5F0Cu))) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x5F0C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5721; /* jne: not equal / not zero */

loc_000B571A: ;
    eax = 0; /* xor self */
    goto loc_000B5874;

loc_000B5721: ;
    ecx = edi;
    PUSH32(esp, 0x000B5728u); RECOMP_ABI_CALL(0x000B4CD0u, sub_000B4CD0); /* call 0x000B4CD0 */

loc_000B5728: ;
    if (_talent_expanded) eax=xml1_talent_registry_id_predecessor(edi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B57CD; /* jae: above or equal (unsigned >=) */

loc_000B5730: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0x000B573Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B573D: ;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000B5747u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B5747: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B5758u); RECOMP_ABI_CALL(0x000B5170u, sub_000B5170); /* call 0x000B5170 */

loc_000B5758: ;
    ecx = edi + (_talent_expanded ? 0x30E8u : 0x1CF4u);
    PUSH32(esp, 0x000B5763u); RECOMP_ABI_CALL(0x000B55D0u, xml1_guest_talent_metadata_pool_allocate); /* call 0x000B55D0 */

loc_000B5763: ;
    edx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi + (_talent_expanded ? 0x8C8Cu : 0x5320u);
    PUSH32(esp, 0x000B577Cu); RECOMP_ABI_CALL(0x000B5200u, sub_000B5200); /* call 0x000B5200 */

loc_000B577C: ;
    ecx = ebp;
    PUSH32(esp, 0x000B5783u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B5783: ;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, 0x000B578Du); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B578D: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000B579Eu); RECOMP_ABI_CALL(0x000B3720u, sub_000B3720); /* call 0x000B3720 */

loc_000B579E: ;
    ecx = ebp;
    PUSH32(esp, 0x000B57A5u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B57A5: ;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000B57AFu); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B57AF: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B57C0u); RECOMP_ABI_CALL(0x000B4710u, sub_000B4710); /* call 0x000B4710 */

loc_000B57C0: ;
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x1C) = eax;

loc_000B57CD: ;
    eax = MEM32(esp + 0x1C);

loc_000B57D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B57E2; /* jne: not equal / not zero */

loc_000B57D8: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5872; /* je: equal / zero */

loc_000B57E2: ;
    ecx = MEM32(esp + 0x20);
    edx = ecx + eax + (_talent_expanded ? 0x2FE4u : 0x1C58u);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    esi = edi + (_talent_expanded ? 0x8C8Cu : 0x5320u);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B5800u); RECOMP_ABI_CALL(0x000B4740u, sub_000B4740); /* call 0x000B4740 */

loc_000B5800: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = 0x3FFFFFFF;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x000B581Au); RECOMP_ABI_CALL(0x000C9440u, sub_000C9440); /* call 0x000C9440 */

loc_000B581A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5872; /* je: equal / zero */

loc_000B581E: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ebp = MEM32(edx + eax * 4 + (_talent_expanded ? 0x141Cu : 0xBF0u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5872; /* je: equal / zero */

loc_000B5831: ;
    esi = edi + (_talent_expanded ? 0x30E8u : 0x1CF4u);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000B583Fu); RECOMP_ABI_CALL(0x000B39E0u, xml1_guest_talent_metadata_handle_valid); /* call 0x000B39E0 */

loc_000B583F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5872; /* je: equal / zero */

loc_000B5843: ;
    ebx = MEM32(esi + (_talent_expanded ? 0x5B9Cu : 0x3624u));
    ebx = ebx & ebp;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x54);
    ebx = ebx + esi;
    MEM16(ebx + 0x4C) = MEM16(ebx + 0x4C) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x4C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebx + 0x4C)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x4C), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5872; /* jne: not equal / not zero */

loc_000B585B: ;
    ecx = MEM32(esp + 0x94);
    edx = MEM32(esp + 0x90);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x000B5872u); RECOMP_ABI_CALL(0x000B4250u, xml1_guest_talent_definition_parse); /* call 0x000B4250 */

loc_000B5872: ;
    eax = ebx;

loc_000B5874: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000B5876: ;
    ecx = MEM32(esp + 0x78);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x70);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B588Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B588C: ;
    esp = esp + 0x7C;
    esp += 12; return; /* ret 8 */

}
