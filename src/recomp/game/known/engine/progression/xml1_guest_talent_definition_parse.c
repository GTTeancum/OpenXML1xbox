#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_definition_parse; original guest entry 0x000B4250.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B4250
 * Original: 0x000B4250 - 0x000B4708 (1208 bytes, 351 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_definition_parse(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4250: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350148);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x24C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x260);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0x250) = eax;
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000B428D; /* jne: not equal / not zero */

loc_000B4286: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_000B46E3;

loc_000B428D: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & ebp;
    if ((ebx == 0)) goto loc_000B46E0; /* je: equal / zero */

loc_000B42A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D4004);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B42B3u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B42B3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x268) = 0;
    PUSH32(esp, 0x000B42CAu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B42CA: ;
    ecx = esp + 0x10;
    edi = eax;
    MEM32(esp + 0x264) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B42E0u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B42E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B430B; /* je: equal / zero */

loc_000B42E4: ;
    PUSH32(esp, 0x3CB744);
    ecx = edi;
    PUSH32(esp, 0x000B42F0u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B42F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B42F6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B42F6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x51));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x51) = LO8(eax);

loc_000B430B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CD460);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B431Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B431B: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x268) = 1;
    PUSH32(esp, 0x000B4332u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B4332: ;
    ecx = esp + 0x10;
    edi = eax;
    MEM32(esp + 0x264) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B4348u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B4348: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B435F; /* je: equal / zero */

loc_000B434C: ;
    ecx = edi;
    PUSH32(esp, 0x000B4353u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B4353: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4359u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B4359: ;
    esp = esp + 4;
    MEM8(esi + 0x50) = LO8(eax);

loc_000B435F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3FFC);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B436Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B436F: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x268) = 2;
    PUSH32(esp, 0x000B4386u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B4386: ;
    ecx = esp + 0x10;
    edi = eax;
    MEM32(esp + 0x264) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B439Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B439C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B43C9; /* je: equal / zero */

loc_000B43A0: ;
    PUSH32(esp, 0x3CB744);
    ecx = edi;
    PUSH32(esp, 0x000B43ACu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B43AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B43B2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B43B2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esi + 0x51));
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(esi + 0x51) = LO8(eax);

loc_000B43C9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x18;
    MEM8(esi + 0x4F) = 0;
    PUSH32(esp, 0x000B43DDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B43DD: ;
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x26C) = 3;
    PUSH32(esp, 0x000B43F6u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B43F6: ;
    ecx = esp + 0x10;
    edi = eax;
    MEM32(esp + 0x264) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B440Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B440C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B44E6; /* je: equal / zero */

loc_000B4414: ;
    ebp = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    ebp = eax;
    if ((eax == 0)) goto loc_000B4499; /* je: equal / zero */

loc_000B4426: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE14C);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000B4436u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B4436: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x268) = 4;
    PUSH32(esp, 0x000B444Du); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B444D: ;
    ecx = esp + 0x38;
    ebp = eax;
    MEM32(esp + 0x264) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B4463u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B4463: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4496; /* je: equal / zero */

loc_000B4467: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4496; /* je: equal / zero */

loc_000B446D: ;
    ecx = ebp;
    PUSH32(esp, 0x000B4474u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B4474: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B447Au); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B447A: ;
    SET_LO8(ecx, MEM8(esi + 0x4F));
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    eax = MEM32(esi + 8);
    MEM8(eax + esi + 4) = LO8(ecx);
    eax = MEM32(esi + 8);
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;

loc_000B4496: ;
    MEM8(esi + 0x4F) = MEM8(esi + 0x4F) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x4F)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_000B4499: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000B44A9u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B44A9: ;
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x26C) = 5;
    PUSH32(esp, 0x000B44C1u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B44C1: ;
    ecx = esp + 0x24;
    edi = eax;
    MEM32(esp + 0x264) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B44D7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B44D7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4414; /* jne: not equal / not zero */

loc_000B44DF: ;
    ebp = MEM32(esp + 0x26C);

loc_000B44E6: ;
    eax = MEM32(esp + 0x270);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4505; /* je: equal / zero */

loc_000B44F1: ;
    ecx = eax + 0x14;
    PUSH32(esp, 0x000B44F9u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B44F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B44FFu); RECOMP_ABI_CALL(0x000B41B0u, xml1_guest_talent_source_intern); /* call 0x000B41B0 */

loc_000B44FF: ;
    esp = esp + 4;
    MEM8(esi + 0x4E) = LO8(eax);

loc_000B4505: ;
    PUSH32(esp, 0x200);
    eax = esp + 0x5C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4519u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4519: ;
    PUSH32(esp, 0x40);
    edi = esi + 0xC;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM8(esp + 0x26F) = 0;
    MEM32(esp + 0x38) = edi;
    PUSH32(esp, 0x000B4535u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4535: ;
    SET_LO8(eax, MEM8(0x44F388));
    MEM8(edi + 0x3F) = 0;
    SET_LO8(ecx, MEM8(esi + 0x4E));
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B45B0; /* jne: not equal / not zero */

loc_000B4548: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000B4558u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B4558: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x268) = 6;
    PUSH32(esp, 0x000B456Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B456F: ;
    ecx = esp + 0x24;
    esi = eax;
    MEM32(esp + 0x264) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B4585u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B4585: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B45A4; /* je: equal / zero */

loc_000B4589: ;
    ecx = esi;
    PUSH32(esp, 0x000B4590u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B4590: ;
    PUSH32(esp, eax);
    eax = MEM32(0x44F38C);
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B45A1u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000B45A1: ;
    esp = esp + 0xC;

loc_000B45A4: ;
    PUSH32(esp, 0x40);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    goto loc_000B46CE;

loc_000B45B0: ;
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebp;
    esi = eax;
    if ((eax == 0)) goto loc_000B46BC; /* je: equal / zero */

loc_000B45C6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x50;
    PUSH32(esp, 0x000B45D6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B45D6: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x268) = 7;
    PUSH32(esp, 0x000B45EDu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B45ED: ;
    ecx = esp + 0x48;
    ebx = eax;
    MEM32(esp + 0x264) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B4603u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B4603: ;
    eax = esp + 0x58;
    edx = eax + 1;
    /* nop */

loc_000B4610: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4610; /* jne: not equal / not zero */

loc_000B4617: ;
    eax = eax - edx;
    MEM32(esp + 0x34) = eax;
    if ((eax == 0)) goto loc_000B4636; /* je: equal / zero */

loc_000B461F: ;
    edi = esp + 0x58;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B4624: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4624; /* jne: not equal / not zero */

loc_000B462C: ;
    SET_LO16(edx, MEM16(0x3D3FF8));
    MEM16(edi) = LO16(edx);

loc_000B4636: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000B463Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B463E: ;
    edx = eax;

loc_000B4640: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4640; /* jne: not equal / not zero */

loc_000B4647: ;
    edi = esp + 0x58;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000B4650: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4650; /* jne: not equal / not zero */

loc_000B4658: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    if (TEST_Z(_fa, _fb)) goto loc_000B46B8; /* je: equal / zero */

loc_000B466C: ;
    edi = esp + 0x58;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B4671: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4671; /* jne: not equal / not zero */

loc_000B4679: ;
    SET_LO16(eax, MEM16(0x3D3FF4));
    ecx = ebx;
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0x000B4689u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B4689: ;
    edx = eax;
    goto loc_000B4690;

    /* nop */

loc_000B4690: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4690; /* jne: not equal / not zero */

loc_000B4697: ;
    edi = esp + 0x58;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000B46A0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B46A0; /* jne: not equal / not zero */

loc_000B46A8: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */

loc_000B46B8: ;
    edi = MEM32(esp + 0x20);

loc_000B46BC: ;
    ebp = MEM32(ebp + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B45B0; /* jne: not equal / not zero */

loc_000B46C7: ;
    PUSH32(esp, 0x40);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);

loc_000B46CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B46D4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B46D4: ;
    esp = esp + 0xC;
    MEM8(edi + 0x3F) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    goto loc_000B46E2;

loc_000B46E0: ;
    SET_LO8(eax, 0); /* xor self */

loc_000B46E2: ;
    POP32(esp, ebx);

loc_000B46E3: ;
    ecx = MEM32(esp + 0x254);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x24C);
    POP32(esp, ebp);
    PUSH32(esp, 0x000B46FFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B46FF: ;
    esp = esp + 0x258;
    esp += 12; return; /* ret 8 */

}
