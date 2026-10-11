#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_source_document_load; original guest entry 0x000B53A0.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B53A0
 * Original: 0x000B53A0 - 0x000B55C7 (551 bytes, 159 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_source_document_load(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    /* XML1 EXPANDED TALENT SOURCES */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B53A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3501A6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x7C;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x78) = eax;
    eax = ZX8(MEM8(0x44F388));
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4D7374)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4D7374) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000B53DE; /* jge: greater or equal (signed >=) */

loc_000B53D4: ;
    eax = eax << 5;
    eax = eax + xml1_talent_source_table();
    goto loc_000B53E0;

loc_000B53DE: ;
    eax = 0; /* xor self */

loc_000B53E0: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B53EDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B53ED: ;
    eax = MEM32(esp + 0xA0);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x7F) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B542D; /* je: equal / zero */

loc_000B5400: ;
    eax = ZX8(MEM8(eax + 0x4E));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4D7374)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4D7374) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5416; /* jge: greater or equal (signed >=) */

loc_000B540C: ;
    eax = eax << 5;
    eax = eax + xml1_talent_source_table();
    goto loc_000B5418;

loc_000B5416: ;
    eax = 0; /* xor self */

loc_000B5418: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5425u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B5425: ;
    esp = esp + 0xC;
    MEM8(esp + 0x7F) = 0;

loc_000B542D: ;
    PUSH32(esp, 0x40);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B543Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B543E: ;
    ecx = MEM32(esi + (_talent_expanded ? 0xA4A8u : 0x6170u));
    esi = esi + (_talent_expanded ? 0xA4A4u : 0x616Cu);
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x67) = 0;
    PUSH32(esp, 0x000B545Fu); RECOMP_ABI_CALL(0x000B3C30u, sub_000B3C30); /* call 0x000B3C30 */

loc_000B545F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5588; /* jne: not equal / not zero */

loc_000B546D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B557C; /* jne: not equal / not zero */

loc_000B5475: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B5486u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B5486: ;
    esp = esp + 0xC;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x63) = 0;
    PUSH32(esp, 0x000B549Au); RECOMP_ABI_CALL(0x000B5290u, sub_000B5290); /* call 0x000B5290 */

loc_000B549A: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B54ABu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B54AB: ;
    edx = MEM32(esi + 4);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x67) = 0;
    PUSH32(esp, 0x000B54C3u); RECOMP_ABI_CALL(0x000B3C30u, sub_000B3C30); /* call 0x000B3C30 */

loc_000B54C3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000B54DD; /* jne: not equal / not zero */

loc_000B54D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B557C; /* je: equal / zero */

loc_000B54DD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x9C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000B551D; /* jl: less (signed <) */

loc_000B54E9: ;
    ecx = esp + 0x64;
    PUSH32(esp, 0x3D4070);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B54F8u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000B54F8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B551D; /* jne: not equal / not zero */

loc_000B54FF: ;
    PUSH32(esp, 2);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B550Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B550F: ;
    MEM32(esp + 0x90) = 0;
    PUSH32(esp, ebx);
    goto loc_000B553A;

loc_000B551D: ;
    PUSH32(esp, 2);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B552Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B552D: ;
    MEM32(esp + 0x90) = 1;
    PUSH32(esp, 4);

loc_000B553A: ;
    eax = esp + 0x10;
    PUSH32(esp, 1);
    ecx = edi + edi * 8;
    ecx = esi + ecx * 8 + (_talent_cache_expanded ? 0x4FF4u : 0x118u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5550u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000B5550: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x90) = 0xFFFFFFFFu;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000B5566u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5566: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000B557C; /* jne: not equal / not zero */

loc_000B556B: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B5577u); RECOMP_ABI_CALL(0x000B3EF0u, sub_000B3EF0); /* call 0x000B3EF0 */

loc_000B5577: ;
    edi = 0x3FFFFFFF;

loc_000B557C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5588; /* jne: not equal / not zero */

loc_000B5584: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B55A3; /* je: equal / zero */

loc_000B5588: ;
    eax = edi + edi * 8;
    ecx = MEM32(esi + eax * 8 + (_talent_cache_expanded ? 0x5038u : 0x15Cu));
    eax = esi + eax * 8;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + (_talent_cache_expanded ? 0x5038u : 0x15Cu)) = ecx;
    eax = eax + (_talent_cache_expanded ? 0x4FF4u : 0x118u);
    goto loc_000B55A5;

loc_000B55A3: ;
    eax = 0; /* xor self */

loc_000B55A5: ;
    ecx = MEM32(esp + 0x84);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x7C);
    POP32(esp, esi);
    PUSH32(esp, 0x000B55BEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B55BE: ;
    esp = esp + 0x88;
    esp += 12; return; /* ret 8 */

}
