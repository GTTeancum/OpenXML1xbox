#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_selector_resolve; original guest entry 0x000B59D0.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B59D0
 * Original: 0x000B59D0 - 0x000B5CC4 (756 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_selector_resolve(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B59D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3501FC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x254));
    esp = esp - 0x254;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4D7300);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x258) = eax;
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000B5A3E; /* jne: not equal / not zero */

loc_000B5A06: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x13C70);
    PUSH32(esp, 0x000B5A14u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000B5A14: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B5A24; /* je: equal / zero */

loc_000B5A1B: ;
    ecx = eax;
    PUSH32(esp, 0x000B5A22u); RECOMP_ABI_CALL(0x000B58A0u, xml1_guest_talent_registry_construct); /* call 0x000B58A0 */

loc_000B5A22: ;
    goto loc_000B5A26;

loc_000B5A24: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_000B5A26: ;
    PUSH32(esp, 0xB3520);
    MEM32(0x4D7300) = eax;
    PUSH32(esp, 0x000B5A35u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_000B5A35: ;
    ecx = MEM32(0x4D7300);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_000B5A3E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B5A46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B5A46: ;
    ebp = eax;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = edi;
    MEM8(esp + 0x5C) = 0;
    MEM8(esp + 0xF) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B5CC0; /* je: equal / zero */

loc_000B5A64: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x200);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    ecx = esp + 0x64;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5A78u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B5A78: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(esp + 0x25F) = 0;
    goto loc_000B5A90;

loc_000B5A85: ;
    ebp = MEM32(esp + 0x1C);
    /* nop */

loc_000B5A90: ;
    eax = esp + 0x60;
    edx = eax + 1;

loc_000B5A97: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5A97; /* jne: not equal / not zero */

loc_000B5A9E: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    MEM32(esp + 0x18) = eax;
    if ((eax == 0)) goto loc_000B5C99; /* je: equal / zero */

loc_000B5AAA: ;
    eax = esp + 0x60;
    edx = eax + 1;

loc_000B5AB1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5AB1; /* jne: not equal / not zero */

loc_000B5AB8: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax = esp + eax + 0x5F;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    edx = esp + 0x60;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_000B5B08; /* jbe: below or equal (unsigned <=) */

loc_000B5ACE: ;
    edi = edi;

loc_000B5AD0: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B5AE3; /* jne: not equal / not zero */

loc_000B5AD7: ;
    ecx = eax + 1;
    MEM32(esp + 0x18) = ecx;
    MEM8(eax) = 0;
    goto loc_000B5AE8;

loc_000B5AE3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3B (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5AF9; /* je: equal / zero */

loc_000B5AE8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5B01; /* je: equal / zero */

loc_000B5AF1: ;
    ecx = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000B5AD0; /* ja: above (unsigned >) */

loc_000B5AF7: ;
    goto loc_000B5B08;

loc_000B5AF9: ;
    ebx = eax + 1;
    MEM8(eax) = 0;
    goto loc_000B5B08;

loc_000B5B01: ;
    ebx = eax;
    MEM8(esp + 0x13) = 1;

loc_000B5B08: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B5B48; /* jne: not equal / not zero */

loc_000B5B0C: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000B5B18u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5B18: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x270) = esi;
    PUSH32(esp, 0x000B5B2Bu); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_000B5B2B: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x26C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B5B43u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5B43: ;
    goto loc_000B5C89;

loc_000B5B48: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5C8D; /* je: equal / zero */

loc_000B5B50: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esp + 0x58;
    PUSH32(esp, 0x000B5B5Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5B5C: ;
    PUSH32(esp, esi);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x274) = 1;
    PUSH32(esp, 0x000B5B74u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B5B74: ;
    ecx = esp + 0x50;
    ebp = eax;
    MEM32(esp + 0x26C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B5B8Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5B8A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B5C8D; /* je: equal / zero */

loc_000B5B92: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B5C85; /* je: equal / zero */

loc_000B5B9E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B5C85; /* je: equal / zero */

loc_000B5BA7: ;
    esi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebp;
    esi = ecx;
    if ((ecx == 0)) goto loc_000B5C41; /* je: equal / zero */

loc_000B5BBD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000B5BCDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5BCD: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x270) = 2;
    PUSH32(esp, 0x000B5BE4u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B5BE4: ;
    ecx = esp + 0x30;
    edi = eax;
    MEM32(esp + 0x26C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B5BFAu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5BFA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B5C3D; /* je: equal / zero */

loc_000B5BFE: ;
    esi = MEM32(esp + 0x18);
    ecx = edi;
    PUSH32(esp, 0x000B5C09u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B5C09: ;
    /* nop */

loc_000B5C10: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B5C34; /* jne: not equal / not zero */

loc_000B5C18: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B5C30; /* je: equal / zero */

loc_000B5C1C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B5C34; /* jne: not equal / not zero */

loc_000B5C26: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5C10; /* jne: not equal / not zero */

loc_000B5C30: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_000B5C39;

loc_000B5C34: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_000B5C39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B5C85; /* je: equal / zero */

loc_000B5C3D: ;
    edi = MEM32(esp + 0x14);

loc_000B5C41: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000B5C4Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5C4D: ;
    PUSH32(esp, ebp);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x274) = 3;
    PUSH32(esp, 0x000B5C65u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B5C65: ;
    ecx = esp + 0x40;
    ebp = eax;
    MEM32(esp + 0x26C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B5C7Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5C7B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5B92; /* jne: not equal / not zero */

loc_000B5C83: ;
    goto loc_000B5C8D;

loc_000B5C85: ;
    MEM32(esp + 0x14) = ebp;

loc_000B5C89: ;
    edi = MEM32(esp + 0x14);

loc_000B5C8D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B5A85; /* je: equal / zero */

loc_000B5C99: ;
    eax = edi;
    POP32(esp, ebx);

loc_000B5C9C: ;
    ecx = MEM32(esp + 0x260);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x254);
    POP32(esp, ebp);
    PUSH32(esp, 0x000B5CB9u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B5CB9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x260)) >> 32) & 1);
    esp = esp + 0x260;
    esp += 4; return; /* ret */

loc_000B5CC0: ;
    eax = edi;
    goto loc_000B5C9C;

}
