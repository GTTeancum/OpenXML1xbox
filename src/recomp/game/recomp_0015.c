#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
/**
 * X-Men Legends - Recompiled code chunk 15
 * Functions: 250 (0x000B39E0 - 0x000BDFD0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>



/**
 * sub_000B3A20
 * Original: 0x000B3A20 - 0x000B3A30 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3A20(void)
{

loc_000B3A20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x40) = LO8(ecx);
    MEM32(eax + 0x64) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3A30
 * Original: 0x000B3A30 - 0x000B3A92 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3A30(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3A30: ;
    edx = ecx;
    eax = MEM32(edx + (_talent_expanded ? 0x5778u : 0x33ACu));
    eax = MEM32(edx + eax * 4 + (_talent_expanded ? 0x5378u : 0x314Cu));
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + (_talent_expanded ? 0x5780u : 0x33B4u);
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + (_talent_expanded ? 0x5778u : 0x33ACu));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x96 (32-bit) */
    MEM32(edx + (_talent_expanded ? 0x5778u : 0x33ACu)) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000B3A7C; /* jl: less (signed <) */

loc_000B3A72: ;
    MEM32(edx + (_talent_expanded ? 0x5778u : 0x33ACu)) = 0;

loc_000B3A7C: ;
    MEM32(edx + (_talent_expanded ? 0x577Cu : 0x33B0u)) = MEM32(edx + (_talent_expanded ? 0x577Cu : 0x33B0u)) - 1;
    _fa = (uint32_t)(MEM32(edx + (_talent_expanded ? 0x577Cu : 0x33B0u))) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + (_talent_expanded ? 0x57A0u : 0x33C8u));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + (_talent_expanded ? 0x57A0u : 0x33C8u)) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3AA0
 * Original: 0x000B3AA0 - 0x000B3AB7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3AA0(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);

loc_000B3AA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + (_talent_expanded ? 0x3FCu : 0x25Cu)) = ecx;
    MEM32(eax + (_talent_expanded ? 0x400u : 0x260u)) = ecx;
    MEM32(eax + (_talent_expanded ? 0x404u : 0x264u)) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3AC0
 * Original: 0x000B3AC0 - 0x000B3ACE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3AC0(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);

loc_000B3AC0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + (_talent_cache_expanded ? 0x400u : 0x10u)) = ecx;
    MEM32(eax + (_talent_cache_expanded ? 0x404u : 0x14u)) = ecx;
    MEM32(eax + (_talent_cache_expanded ? 0x408u : 0x18u)) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3AD0
 * Original: 0x000B3AD0 - 0x000B3B17 (71 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B3AF1; /* jle: less or equal (signed <=) */

loc_000B3ADD: ;
    SET_LO8(ecx, MEM8(esp + 0xC));

loc_000B3AE1: ;
    SET_LO8(edx, MEM8(esi + eax + 4));
    SET_LO8(edx, LO8(edx) & 0x1F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B02; /* je: equal / zero */

loc_000B3AEC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B3AE1; /* jl: less (signed <) */

loc_000B3AF1: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = 1;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000B3B02: ;
    eax = ZX8(MEM8(eax + esi + 4));
    ecx = MEM32(esp + 0x10);
    eax = eax >> 5;
    POP32(esp, edi);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3B20
 * Original: 0x000B3B20 - 0x000B3B2C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3B20(void)
{

loc_000B3B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B3B28u); RECOMP_ABI_CALL(0x000B3A20u, sub_000B3A20); /* call 0x000B3A20 */

loc_000B3B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3B30
 * Original: 0x000B3B30 - 0x000B3BA2 (114 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3B30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B3B8B; /* je: equal / zero */

loc_000B3B45: ;
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_000B3B50: ;
    ecx = MEM32(esp + 0x10);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    esi = eax + ecx;
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B3B66u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B3B66: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000B3B72; /* jge: greater or equal (signed >=) */

loc_000B3B6D: ;
    ebx = MEM32(esi + 0x10);
    goto loc_000B3B83;

loc_000B3B72: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B3B79u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B3B79: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000B3B98; /* jge: greater or equal (signed >=) */

loc_000B3B80: ;
    ebx = MEM32(esi + 0x14);

loc_000B3B83: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3B50; /* jne: not equal / not zero */

loc_000B3B8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3FFFFFFF;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000B3B98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3BB0
 * Original: 0x000B3BB0 - 0x000B3BDD (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3BB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3BDA; /* je: equal / zero */

loc_000B3BBB: ;
    goto loc_000B3BC0;

    /* nop */

loc_000B3BC0: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    edx = MEM32(edx + ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3BDA; /* je: equal / zero */

loc_000B3BD1: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3BC0; /* jne: not equal / not zero */

loc_000B3BDA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3BE0
 * Original: 0x000B3BE0 - 0x000B3C26 (70 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3BE0(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3BE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3C15; /* je: equal / zero */

loc_000B3BEE: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(eax));

loc_000B3BF4: ;
    edx = esi;
    edx = edx << 4;
    SET_LO8(ebx, MEM8(edx + ecx + 0x18));
    edx = edx + ecx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B3C08; /* jbe: below or equal (unsigned <=) */

loc_000B3C03: ;
    esi = MEM32(edx + 0x10);
    goto loc_000B3C0D;

loc_000B3C08: ;
    if (CMP_AE(_fa, _fb)) goto loc_000B3C1F; /* jae: above or equal (unsigned >=) */

loc_000B3C0A: ;
    esi = MEM32(edx + 0x14);

loc_000B3C0D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3BF4; /* jne: not equal / not zero */

loc_000B3C15: ;
    POP32(esp, esi);
    eax = 0x3FFFFFFF;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000B3C1F: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3C30
 * Original: 0x000B3C30 - 0x000B3CA2 (114 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3C30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3C30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B3C8B; /* je: equal / zero */

loc_000B3C45: ;
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_000B3C50: ;
    ecx = MEM32(esp + 0x10);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    esi = eax + ecx;
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B3C66u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B3C66: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000B3C72; /* jge: greater or equal (signed >=) */

loc_000B3C6D: ;
    ebx = MEM32(esi + 0x10);
    goto loc_000B3C83;

loc_000B3C72: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B3C79u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B3C79: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000B3C98; /* jge: greater or equal (signed >=) */

loc_000B3C80: ;
    ebx = MEM32(esi + 0x14);

loc_000B3C83: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3C50; /* jne: not equal / not zero */

loc_000B3C8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3FFFFFFF;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000B3C98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B3CB0
 * Original: 0x000B3CB0 - 0x000B3CDD (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3CB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3CDA; /* je: equal / zero */

loc_000B3CBB: ;
    goto loc_000B3CC0;

    /* nop */

loc_000B3CC0: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    edx = MEM32(edx + ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3CDA; /* je: equal / zero */

loc_000B3CD1: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3CC0; /* jne: not equal / not zero */

loc_000B3CDA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3CE0
 * Original: 0x000B3CE0 - 0x000B3CEC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3CE0(void)
{

loc_000B3CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B3CE8u); RECOMP_ABI_CALL(0x000B3AA0u, sub_000B3AA0); /* call 0x000B3AA0 */

loc_000B3CE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3CF0
 * Original: 0x000B3CF0 - 0x000B3D39 (73 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3CF0(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3CF0: ;
    eax = MEM32(ecx + (_talent_expanded ? 0x3FCu : 0x25Cu));
    edx = MEM32(ecx + (_talent_expanded ? 0x404u : 0x264u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    MEM32(ecx + (_talent_expanded ? 0x3FCu : 0x25Cu)) = eax;
    MEM32(ecx + (_talent_expanded ? 0x404u : 0x264u)) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B3D2C; /* jl: less (signed <) */

loc_000B3D11: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + (_talent_expanded ? 0x3FCu : 0x25Cu)) = 0;
    edx = MEM32(edx);
    eax = (_talent_expanded ? 0xFDu : 0x95u);
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

loc_000B3D2C: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3D40
 * Original: 0x000B3D40 - 0x000B3DA2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3D40(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3D40: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + (_talent_expanded ? 0x5774u : 0x33A8u)) = esi;
    MEM32(ecx + (_talent_expanded ? 0x5778u : 0x33ACu)) = esi;
    MEM32(ecx + (_talent_expanded ? 0x577Cu : 0x33B0u)) = esi;
    edx = 0; /* xor self */
    goto loc_000B3D60;

    /* nop */

loc_000B3D60: ;
    eax = MEM32(ecx + (_talent_expanded ? 0x5774u : 0x33A8u));
    edi = MEM32(ecx + (_talent_expanded ? 0x577Cu : 0x33B0u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    MEM32(ecx + (_talent_expanded ? 0x5774u : 0x33A8u)) = eax;
    MEM32(ecx + (_talent_expanded ? 0x577Cu : 0x33B0u)) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B3D8E; /* jl: less (signed <) */

loc_000B3D81: ;
    MEM32(ecx + (_talent_expanded ? 0x5774u : 0x33A8u)) = esi;
    eax = (_talent_expanded ? 0xFDu : 0x95u);
    goto loc_000B3D8F;

loc_000B3D8E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B3D8F: ;
    MEM32(ecx + eax * 4 + (_talent_expanded ? 0x5378u : 0x314Cu)) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B3D60; /* jl: less (signed <) */

loc_000B3D9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3DB0
 * Original: 0x000B3DB0 - 0x000B3E12 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3DB0(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3DB0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + (_talent_expanded ? 0x2FA8u : 0x1C28u)) = esi;
    MEM32(ecx + (_talent_expanded ? 0x2FACu : 0x1C2Cu)) = esi;
    MEM32(ecx + (_talent_expanded ? 0x2FB0u : 0x1C30u)) = esi;
    edx = 0; /* xor self */
    goto loc_000B3DD0;

    /* nop */

loc_000B3DD0: ;
    eax = MEM32(ecx + (_talent_expanded ? 0x2FA8u : 0x1C28u));
    edi = MEM32(ecx + (_talent_expanded ? 0x2FB0u : 0x1C30u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    MEM32(ecx + (_talent_expanded ? 0x2FA8u : 0x1C28u)) = eax;
    MEM32(ecx + (_talent_expanded ? 0x2FB0u : 0x1C30u)) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B3DFE; /* jl: less (signed <) */

loc_000B3DF1: ;
    MEM32(ecx + (_talent_expanded ? 0x2FA8u : 0x1C28u)) = esi;
    eax = (_talent_expanded ? 0xFDu : 0x95u);
    goto loc_000B3DFF;

loc_000B3DFE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B3DFF: ;
    MEM32(ecx + eax * 4 + (_talent_expanded ? 0x2BACu : 0x19CCu)) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B3DD0; /* jl: less (signed <) */

loc_000B3E0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}



/**
 * sub_000B3E80
 * Original: 0x000B3E80 - 0x000B3E8C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3E80(void)
{

loc_000B3E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B3E88u); RECOMP_ABI_CALL(0x000B3AC0u, sub_000B3AC0); /* call 0x000B3AC0 */

loc_000B3E88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}



/**
 * sub_000B3EF0
 * Original: 0x000B3EF0 - 0x000B3F36 (70 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3EF0(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);

loc_000B3EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x000B3F00u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_000B3F00: ;
    esi = MEM32(esi);
    ecx = esi + esi * 8;
    ecx = edi + ecx * 8 + (_talent_cache_expanded ? 0x4FF4u : 0x118u);
    PUSH32(esp, 0x000B3F11u); RECOMP_ABI_CALL(0x000B35C0u, sub_000B35C0); /* call 0x000B35C0 */

loc_000B3F11: ;
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edi + edx * 4 + (_talent_cache_expanded ? 0x97ACu : 0x1F0u);
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3F40
 * Original: 0x000B3F40 - 0x000B3F97 (87 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3F40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edx = MEM32(eax + ecx + 0x14);
    eax = eax + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3F62; /* je: equal / zero */

loc_000B3F58: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000B3BB0(); return; /* tail jmp 0x000B3BB0 */

loc_000B3F62: ;
    eax = MEM32(eax + 0xC);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3F93; /* je: equal / zero */

loc_000B3F71: ;
    PUSH32(esp, edi);

loc_000B3F72: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    edi = MEM32(edx + ecx + 0x14);
    edx = edx + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F92; /* jne: not equal / not zero */

loc_000B3F81: ;
    esi = eax;
    eax = MEM32(edx + 0xC);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F72; /* jne: not equal / not zero */

loc_000B3F92: ;
    POP32(esp, edi);

loc_000B3F93: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3FA0
 * Original: 0x000B3FA0 - 0x000B3FF2 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3FA0(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    if (_talent_expanded) xml1_talent_registry_clear_bits(g_ecx,2);

loc_000B3FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    ecx = esi + (_talent_expanded ? 0x5358u : 0x3138u);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(esi + (_talent_expanded ? 0x5774u : 0x33A8u)) = eax;
    MEM32(esi + (_talent_expanded ? 0x5778u : 0x33ACu)) = eax;
    MEM32(esi + (_talent_expanded ? 0x577Cu : 0x33B0u)) = eax;
    edx = 0; /* xor self */
    ecx = esi + (_talent_expanded ? 0x5780u : 0x33B4u);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    ecx = esi;
    MEM32(esi + (_talent_expanded ? 0x57A0u : 0x33C8u)) = eax;
    PUSH32(esp, 0x000B3FEEu); RECOMP_ABI_CALL(0x000B3D40u, sub_000B3D40); /* call 0x000B3D40 */

loc_000B3FEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4000
 * Original: 0x000B4000 - 0x000B4090 (144 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4000(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B4017u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B4017: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + (_talent_expanded ? 0x5358u : 0x3138u));
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + (_talent_expanded ? 0x5358u : 0x3138u)) = ecx;
    MEM32(eax + esi + (_talent_expanded ? 0x5780u : 0x33B4u)) = MEM32(eax + esi + (_talent_expanded ? 0x5780u : 0x33B4u)) & edx;
    eax = MEM32(esi + (_talent_expanded ? 0x5774u : 0x33A8u));
    edx = MEM32(esi + (_talent_expanded ? 0x577Cu : 0x33B0u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    MEM32(esi + (_talent_expanded ? 0x5774u : 0x33A8u)) = eax;
    MEM32(esi + (_talent_expanded ? 0x577Cu : 0x33B0u)) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B4076; /* jl: less (signed <) */

loc_000B4065: ;
    MEM32(esi + (_talent_expanded ? 0x5774u : 0x33A8u)) = 0;
    eax = (_talent_expanded ? 0xFDu : 0x95u);
    goto loc_000B4077;

loc_000B4076: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B4077: ;
    MEM32(esi + eax * 4 + (_talent_expanded ? 0x5378u : 0x314Cu)) = edi;
    eax = MEM32(esi + (_talent_expanded ? 0x57A0u : 0x33C8u));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + (_talent_expanded ? 0x57A0u : 0x33C8u)) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000B40E0
 * Original: 0x000B40E0 - 0x000B4118 (56 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B40E0(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B40E0: ;
    eax = MEM32(ecx + (_talent_cache_expanded ? 0x400u : 0x10u));
    edx = MEM32(ecx + (_talent_cache_expanded ? 0x408u : 0x18u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_cache_expanded ? 255 : 3)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ecx + (_talent_cache_expanded ? 0x400u : 0x10u)) = eax;
    MEM32(ecx + (_talent_cache_expanded ? 0x408u : 0x18u)) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B410B; /* jl: less (signed <) */

loc_000B40F3: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + (_talent_cache_expanded ? 0x400u : 0x10u)) = 0;
    edx = MEM32(edx);
    eax = (_talent_cache_expanded ? 254 : 2);
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

loc_000B410B: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + eax * 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B4120
 * Original: 0x000B4120 - 0x000B417D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4120(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4120: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + (_talent_cache_expanded ? 0x4FB8u : 0xF8u)) = esi;
    MEM32(ecx + (_talent_cache_expanded ? 0x4FBCu : 0xFCu)) = esi;
    MEM32(ecx + (_talent_cache_expanded ? 0x4FC0u : 0x100u)) = esi;
    edx = 0; /* xor self */
    goto loc_000B4140;

    /* nop */

loc_000B4140: ;
    eax = MEM32(ecx + (_talent_cache_expanded ? 0x4FB8u : 0xF8u));
    edi = MEM32(ecx + (_talent_cache_expanded ? 0x4FC0u : 0x100u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_cache_expanded ? 255 : 3)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ecx + (_talent_cache_expanded ? 0x4FB8u : 0xF8u)) = eax;
    MEM32(ecx + (_talent_cache_expanded ? 0x4FC0u : 0x100u)) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B416C; /* jl: less (signed <) */

loc_000B415F: ;
    MEM32(ecx + (_talent_cache_expanded ? 0x4FB8u : 0xF8u)) = esi;
    eax = (_talent_cache_expanded ? 254 : 2);
    goto loc_000B416D;

loc_000B416C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B416D: ;
    MEM32(ecx + eax * 4 + (_talent_cache_expanded ? 0x4BB8u : 0xE8u)) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_cache_expanded ? 255 : 3)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B4140; /* jl: less (signed <) */

loc_000B417A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4180
 * Original: 0x000B4180 - 0x000B419E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B4188u); RECOMP_ABI_CALL(0x000B41A0u, sub_000B41A0); /* call 0x000B41A0 */

loc_000B4188: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4198; /* je: equal / zero */

loc_000B418F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B4195u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000B4195: ;
    esp = esp + 4;

loc_000B4198: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B41A0
 * Original: 0x000B41A0 - 0x000B41A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B41A0(void)
{

loc_000B41A0: ;
    MEM32(ecx) = 0x3D3EE0;
    esp += 4; return; /* ret */

}





/**
 * sub_000B4710
 * Original: 0x000B4710 - 0x000B4732 (34 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4710(void)
{

loc_000B4710: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4723u); RECOMP_ABI_CALL(0x000B3B30u, sub_000B3B30); /* call 0x000B3B30 */

loc_000B4723: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = esi;
    eax = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B4740
 * Original: 0x000B4740 - 0x000B4762 (34 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4740(void)
{

loc_000B4740: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4753u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000B4753: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = esi;
    eax = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}





/**
 * sub_000B4830
 * Original: 0x000B4830 - 0x000B4864 (52 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4830: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4863; /* je: equal / zero */

loc_000B483A: ;
    MEM32(eax) = 0x3D3FBC;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0xC) = LO8(ecx);
    MEM16(eax + 0x4C) = LO16(ecx);
    MEM8(eax + 0x4F) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x51));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 0x50) = 0xFF;
    MEM8(eax + 0x51) = LO8(ecx);

loc_000B4863: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B4870
 * Original: 0x000B4870 - 0x000B49D8 (360 bytes, 112 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4870(void)
{
    /* XML1 EXPANDED TALENT SOURCES */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4870: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350180);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x54));
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B4895u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000B4895: ;
    PUSH32(esp, xml1_talent_package_path());
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0x000B48A7u); RECOMP_ABI_CALL(0x000B41B0u, xml1_guest_talent_source_intern); /* call 0x000B41B0 */

loc_000B48A7: ;
    ecx = MEM32(0x4D7374);
    MEM8(0x44F388) = LO8(eax);
    eax = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000B48C6; /* jge: greater or equal (signed >=) */

loc_000B48BC: ;
    if (5) _cf = (int)(((eax) >> (32 - (5))) & 1);
    eax = eax << 5;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(xml1_talent_source_table())) >> 32) & 1);
    eax = eax + xml1_talent_source_table();
    goto loc_000B48C8;

loc_000B48C6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_000B48C8: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000B48D4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B48D4: ;
    PUSH32(esp, xml1_talent_package_owner());
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM8(esp + 0x70) = 1;
    PUSH32(esp, 0x000B48EBu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000B48EB: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = esp + 8;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x64) = 0;
    PUSH32(esp, 0x000B4901u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B4901: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = esp + 0x18;
    if (TEST_Z(_fa, _fb)) goto loc_000B4929; /* je: equal / zero */

loc_000B4909: ;
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B4916u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000B4916: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x54);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

loc_000B4929: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B492Fu); RECOMP_ABI_CALL(0x00125FA0u, sub_00125FA0); /* call 0x00125FA0 */

loc_000B492F: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B49B3; /* je: equal / zero */

loc_000B4935: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6E0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B4946u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B4946: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x74) = 2;
    PUSH32(esp, 0x000B4959u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B4959: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM8(esp + 0x6C) = 0;
    PUSH32(esp, 0x000B4969u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B4969: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B49B2; /* je: equal / zero */

loc_000B496D: ;
    SET_LO8(ebx, 3);
    /* nop */

loc_000B4970: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000B497Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B497D: ;
    xml1_talent_package_registered(esi, eax, esp + 0x20);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6E0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B498Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B498D: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x74) = LO8(ebx);
    PUSH32(esp, 0x000B499Eu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B499E: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM8(esp + 0x6C) = 0;
    PUSH32(esp, 0x000B49AEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B49AE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4970; /* jne: not equal / not zero */

loc_000B49B2: ;
    POP32(esp, esi);

loc_000B49B3: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0x68) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B49C4u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000B49C4: ;
    ecx = MEM32(esp + 0x60);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_000B49E0
 * Original: 0x000B49E0 - 0x000B4A4B (107 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B49E0(void)
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

loc_000B49E0: ;
    xml1_talent_package_release_all();
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + (_talent_expanded ? 0x8C90u : 0x5324u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    esi = ebx + (_talent_expanded ? 0x8C8Cu : 0x5320u);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A12; /* je: equal / zero */

loc_000B49F9: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A12; /* je: equal / zero */

loc_000B4A0A: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4A12u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000B4A12: ;
    edi = eax;

loc_000B4A14: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4A20; /* jne: not equal / not zero */

loc_000B4A1C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4A3D; /* je: equal / zero */

loc_000B4A20: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B4A28u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000B4A28: ;
    edx = MEM32(ebx);
    edi = edi << 4;
    ebp = eax;
    eax = edi + esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000B4A39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B4A39: ;
    edi = ebp;
    goto loc_000B4A14;

loc_000B4A3D: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B4A44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B4A44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4A50
 * Original: 0x000B4A50 - 0x000B4B25 (213 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4A50(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    /* XML1 EXPANDED TALENT SOURCES */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4A50: ;
    esp = esp - 0x64;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x60) = eax;
    eax = ZX8(MEM8(0x44F388));
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4D7374)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4D7374) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B4A78; /* jge: greater or equal (signed >=) */

loc_000B4A6E: ;
    eax = eax << 5;
    eax = eax + xml1_talent_source_table();
    goto loc_000B4A7A;

loc_000B4A78: ;
    eax = 0; /* xor self */

loc_000B4A7A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4A87u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4A87: ;
    eax = MEM32(esp + 0x78);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x63) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B4AC4; /* je: equal / zero */

loc_000B4A97: ;
    eax = ZX8(MEM8(eax + 0x4E));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4D7374)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4D7374) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B4AAD; /* jge: greater or equal (signed >=) */

loc_000B4AA3: ;
    eax = eax << 5;
    eax = eax + xml1_talent_source_table();
    goto loc_000B4AAF;

loc_000B4AAD: ;
    eax = 0; /* xor self */

loc_000B4AAF: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4ABCu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4ABC: ;
    esp = esp + 0xC;
    MEM8(esp + 0x63) = 0;

loc_000B4AC4: ;
    PUSH32(esp, 0x40);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4AD5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4AD5: ;
    ecx = MEM32(esi + (_talent_expanded ? 0xA4A8u : 0x6170u));
    esi = esi + (_talent_expanded ? 0xA4A4u : 0x616Cu);
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x4B) = 0;
    PUSH32(esp, 0x000B4AF6u); RECOMP_ABI_CALL(0x000B3C30u, sub_000B3C30); /* call 0x000B3C30 */

loc_000B4AF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4B01; /* jne: not equal / not zero */

loc_000B4AFD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4B13; /* je: equal / zero */

loc_000B4B01: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, 0x000B4B0Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B4B0D: ;
    esp = esp + 0x64;
    esp += 8; return; /* ret 4 */

loc_000B4B13: ;
    ecx = MEM32(esp + 0x64);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x000B4B1Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B4B1F: ;
    esp = esp + 0x64;
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000B4C40
 * Original: 0x000B4C40 - 0x000B4CCD (141 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4C40(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4C40: ;
    eax = MEM32(ecx + (_talent_expanded ? 0xA4A8u : 0x6170u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + (_talent_expanded ? 0xA4A4u : 0x616Cu);
    if (CMP_EQ(_fa, _fb)) goto loc_000B4C6F; /* je: equal / zero */

loc_000B4C56: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = MEM32(ecx + edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4C6F; /* je: equal / zero */

loc_000B4C67: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000B4C6Fu); RECOMP_ABI_CALL(0x000B3CB0u, sub_000B3CB0); /* call 0x000B3CB0 */

loc_000B4C6F: ;
    esi = eax;

loc_000B4C71: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4C7D; /* jne: not equal / not zero */

loc_000B4C79: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4CC7; /* je: equal / zero */

loc_000B4C7D: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000B4C85u); RECOMP_ABI_CALL(0x00026010u, sub_00026010); /* call 0x00026010 */

loc_000B4C85: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x000B4C8Fu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_000B4C8F: ;
    edx = esi + esi * 8;
    ecx = edi + edx * 8 + (_talent_cache_expanded ? 0x4FF4u : 0x118u);
    PUSH32(esp, 0x000B4C9Eu); RECOMP_ABI_CALL(0x000B35C0u, sub_000B35C0); /* call 0x000B35C0 */

loc_000B4C9E: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    eax = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(edi + eax * 4 + (_talent_cache_expanded ? 0x97ACu : 0x1F0u));
    eax = edi + eax * 4 + (_talent_cache_expanded ? 0x97ACu : 0x1F0u);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esi = ebx;
    goto loc_000B4C71;

loc_000B4CC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4CD0
 * Original: 0x000B4CD0 - 0x000B4D29 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4CD0(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4CD0: ;
    eax = MEM32(ecx + (_talent_expanded ? 0x8C90u : 0x5324u));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + (_talent_expanded ? 0x8C8Cu : 0x5320u);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4D07; /* je: equal / zero */

loc_000B4CE7: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4D00; /* je: equal / zero */

loc_000B4CF8: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4D00u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000B4D00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4D0B; /* jne: not equal / not zero */

loc_000B4D07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4D24; /* je: equal / zero */

loc_000B4D0B: ;
    edx = eax;
    edx = edx << 4;
    SET_LO8(ecx, MEM8(edx + esi + 0x18));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B4D1A; /* ja: above (unsigned >) */

loc_000B4D18: ;
    SET_LO8(ebx, LO8(ecx));

loc_000B4D1A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B4D22u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000B4D22: ;
    goto loc_000B4D00;

loc_000B4D24: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4D30
 * Original: 0x000B4D30 - 0x000B4D8B (91 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4D30(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + (_talent_expanded ? 0x8C90u : 0x5324u));
    ecx = MEM32(esp + 0xC);
    esi = edi + (_talent_expanded ? 0x8C8Cu : 0x5320u);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4D4Du); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000B4D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4D58; /* jne: not equal / not zero */

loc_000B4D54: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4D86; /* je: equal / zero */

loc_000B4D58: ;
    esi = MEM32(esi + eax * 4 + (_talent_expanded ? 0x141Cu : 0xBF0u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4D86; /* je: equal / zero */

loc_000B4D63: ;
    edi = edi + (_talent_expanded ? 0x30E8u : 0x1CF4u);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000B4D71u); RECOMP_ABI_CALL(0x000B39E0u, xml1_guest_talent_metadata_handle_valid); /* call 0x000B39E0 */

loc_000B4D71: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4D86; /* je: equal / zero */

loc_000B4D75: ;
    eax = MEM32(edi + (_talent_expanded ? 0x5B9Cu : 0x3624u));
    eax = eax & esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    eax = eax + edi;
    MEM16(eax + 0x4C) = MEM16(eax + 0x4C) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x4C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_000B4D86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000B4DF0
 * Original: 0x000B4DF0 - 0x000B4E53 (99 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4DF0(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4DF0: ;
    eax = MEM32(ecx + (_talent_expanded ? 0x8C90u : 0x5324u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, esi);
    esi = ecx + (_talent_expanded ? 0x8C8Cu : 0x5320u);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B4E1E; /* je: equal / zero */

loc_000B4E05: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4E1E; /* je: equal / zero */

loc_000B4E16: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4E1Eu); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000B4E1E: ;
    edi = MEM32(esp + 0xC);

loc_000B4E22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4E2D; /* jne: not equal / not zero */

loc_000B4E29: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4E4C; /* je: equal / zero */

loc_000B4E2D: ;
    _fa = (uint32_t)(MEM32(esi + eax * 4 + (_talent_expanded ? 0x141Cu : 0xBF0u))) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4 + 0xBF0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4E40; /* je: equal / zero */

loc_000B4E36: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B4E3Eu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000B4E3E: ;
    goto loc_000B4E22;

loc_000B4E40: ;
    eax = eax << 4;
    SET_LO8(eax, MEM8(eax + esi + 0x18));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B4E4C: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) | 0xFF);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B4E60
 * Original: 0x000B4E60 - 0x000B4E96 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4E60(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4E60: ;
    eax = MEM32(ecx + (_talent_expanded ? 0x8C90u : 0x5324u));
    PUSH32(esp, esi);
    esi = ecx + (_talent_expanded ? 0x8C8Cu : 0x5320u);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B4E7Au); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000B4E7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4E85; /* jne: not equal / not zero */

loc_000B4E81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4E90; /* je: equal / zero */

loc_000B4E85: ;
    eax = MEM32(esi + eax * 4 + (_talent_expanded ? 0x141Cu : 0xBF0u));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B4E90: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000B4F10
 * Original: 0x000B4F10 - 0x000B4F5F (79 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4F10: ;
    esp = esp - 0x20;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B4F27u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B4F27: ;
    edx = MEM32(esi + 8);
    esi = esi + 4;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x2B) = 0;
    PUSH32(esp, 0x000B4F42u); RECOMP_ABI_CALL(0x000B3B30u, sub_000B3B30); /* call 0x000B3B30 */

loc_000B4F42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4F4D; /* jne: not equal / not zero */

loc_000B4F49: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4F56; /* je: equal / zero */

loc_000B4F4D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

loc_000B4F56: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000B4FB0
 * Original: 0x000B4FB0 - 0x000B4FD7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4FB0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    eax = eax + ecx + 0x18;
    PUSH32(esp, eax);
    eax = edx + ecx + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B4FCCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B4FCC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B4FE0
 * Original: 0x000B4FE0 - 0x000B4FE8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4FE0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; xml1_guest_talent_name_pool_release(); return; /* tail jmp 0x000B4FF0 */

}



/**
 * sub_000B5030
 * Original: 0x000B5030 - 0x000B5038 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5030: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; xml1_guest_talent_id_pool_release(); return; /* tail jmp 0x000B5040 */

}





/**
 * sub_000B5170
 * Original: 0x000B5170 - 0x000B51F8 (136 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5170(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);

loc_000B5170: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000B517Fu); RECOMP_ABI_CALL(0x000B3640u, xml1_guest_talent_name_pool_allocate); /* call 0x000B3640 */

loc_000B517F: ;
    esi = MEM32(esp + 0x10);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2C);
    edi = edx + edi + 0xC;
    ecx = 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 8) = eax;
    edi = 0x3FFFFFFF;
    esi = ebx + 4;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(edx + ebx + 0x10) = edi;
    MEM32(edx + ebx + 0x14) = edi;
    MEM32(edx + ebx + 0xC) = 0x7FFFFFFF;
    PUSH32(esp, 0x000B51B6u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000B51B6: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    ecx = MEM32(eax + ebx + 0xC);
    eax = eax + ebx + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + ebx + 0xC);
    eax = ecx + ebx + 0xC;
    edx = edx & 0x40000000;
    edx = edx | edi;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + ecx + (_talent_expanded ? 0x2FE4u : 0x1C58u)) = LO8(edx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B5200
 * Original: 0x000B5200 - 0x000B5288 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5200(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);

loc_000B5200: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000B520Eu); RECOMP_ABI_CALL(0x000B36B0u, xml1_guest_talent_id_pool_allocate); /* call 0x000B36B0 */

loc_000B520E: ;
    edx = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(edx));
    ecx = eax;
    ecx = ecx << 4;
    MEM8(ecx + edi + 0xC) = LO8(edx);
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B5243u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000B5243: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + (_talent_expanded ? 0x141Cu : 0xBF0u)) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B5290
 * Original: 0x000B5290 - 0x000B5346 (182 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5290(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);

loc_000B5290: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000B529Fu); RECOMP_ABI_CALL(0x000B3E20u, xml1_guest_talent_source_cache_pool_allocate); /* call 0x000B3E20 */

loc_000B529F: ;
    esi = MEM32(esp + 0x10);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    edi = edx + edi + 0xC;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebx + 8) = eax;
    edi = 0x3FFFFFFF;
    esi = ebx + 4;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(edx + ebx + 0x10) = edi;
    MEM32(edx + ebx + 0x14) = edi;
    MEM32(edx + ebx + 0xC) = 0x7FFFFFFF;
    PUSH32(esp, 0x000B52D6u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000B52D6: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    ecx = MEM32(eax + ebx + 0xC);
    eax = eax + ebx + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    edx = MEM32(ecx + ebx + 0xC);
    eax = ecx + ebx + 0xC;
    edx = edx & 0x40000000;
    edx = edx | edi;
    MEM32(eax) = edx;
    esi = MEM32(ebx + 8);
    edi = esi + esi * 8;
    edi = edi << 3;
    eax = edi + ebx + (_talent_cache_expanded ? 0x4FF4u : 0x118u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5318u); RECOMP_ABI_CALL(0x000B35F0u, sub_000B35F0); /* call 0x000B35F0 */

loc_000B5318: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ebx + ecx * 4 + (_talent_cache_expanded ? 0x97ACu : 0x1F0u);
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = edi + ebx + (_talent_cache_expanded ? 0x4FF4u : 0x118u);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5350
 * Original: 0x000B5350 - 0x000B5358 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5350: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; xml1_guest_talent_source_cache_pool_release(); return; /* tail jmp 0x000B5360 */

}















/**
 * sub_000B5CD0
 * Original: 0x000B5CD0 - 0x000B5DB7 (231 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5CD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350220);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B5CEEu); RECOMP_ABI_CALL(0x000B59D0u, xml1_guest_talent_selector_resolve); /* call 0x000B59D0 */

loc_000B5CEE: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 7) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_000B5DA5; /* je: equal / zero */

loc_000B5CFE: ;
    ecx = ZX8(MEM8(esp + 0x38));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B5DA5; /* jle: less or equal (signed <=) */

loc_000B5D0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B5D1Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5D1D: ;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x000B5D33u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B5D33: ;
    ecx = esp + 0xC;
    esi = eax;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B5D46u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5D46: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5DA2; /* je: equal / zero */

loc_000B5D4A: ;
    /* nop */

loc_000B5D50: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    ecx = SX8(LO8(eax));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0xB) = LO8(eax);
    eax = ZX8(MEM8(esp + 0x3C));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5DA2; /* jge: greater or equal (signed >=) */

loc_000B5D66: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000B5D76u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5D76: ;
    PUSH32(esp, esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x3C) = 1;
    PUSH32(esp, 0x000B5D8Bu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B5D8B: ;
    ecx = esp + 0x1C;
    esi = eax;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B5D9Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5D9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5D50; /* jne: not equal / not zero */

loc_000B5DA2: ;
    eax = esi;
    POP32(esp, esi);

loc_000B5DA5: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B5DC0
 * Original: 0x000B5DC0 - 0x000B5DFD (61 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B5DF6; /* je: equal / zero */

loc_000B5DCC: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5DD6u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000B5DD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5DF6; /* je: equal / zero */

loc_000B5DDA: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000B5DE2u); RECOMP_ABI_CALL(0x000A41F0u, sub_000A41F0); /* call 0x000A41F0 */

loc_000B5DE2: ;
    PUSH32(esp, 0x000B5DE7u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000B5DE7: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B5DEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B5DEF: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000B5DF6: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B5E00
 * Original: 0x000B5E00 - 0x000B5F35 (309 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5E00(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5E00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350220);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x28;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = ebp;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0x000B5E34u); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000B5E34: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5ED6; /* je: equal / zero */

loc_000B5E3E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE164);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000B5E4Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5E4E: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x44) = ebp;
    PUSH32(esp, 0x000B5E5Eu); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_000B5E5E: ;
    ebp = ebp | 0xFFFFFFFFu;
    ecx = esp + 0x18;
    esi = eax;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x000B5E70u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5E70: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5ED6; /* je: equal / zero */

loc_000B5E74: ;
    edi = MEM32(esp + 0x50);

loc_000B5E78: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5ED2; /* jne: not equal / not zero */

loc_000B5E7C: ;
    eax = MEM32(esp + 0x10);
    edx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x4C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5E9B; /* jne: not equal / not zero */

loc_000B5E8D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    SET_LO8(ebx, 1);
    if (TEST_Z(_fa, _fb)) goto loc_000B5E9B; /* je: equal / zero */

loc_000B5E93: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000B5E9Bu); RECOMP_ABI_CALL(0x00096370u, xml1_guest_powerup_definition_parse); /* call 0x00096370 */

loc_000B5E9B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE164);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000B5EABu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5EAB: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x44) = 1;
    PUSH32(esp, 0x000B5EBFu); RECOMP_ABI_CALL(0x00126080u, sub_00126080); /* call 0x00126080 */

loc_000B5EBF: ;
    ecx = esp + 0x28;
    esi = eax;
    MEM32(esp + 0x40) = ebp;
    PUSH32(esp, 0x000B5ECEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5ECE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5E78; /* jne: not equal / not zero */

loc_000B5ED2: ;
    edi = MEM32(esp + 0x14);

loc_000B5ED6: ;
    ecx = MEM32(0x4D7300);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B5F18; /* jne: not equal / not zero */

loc_000B5EE0: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x13C70);
    PUSH32(esp, 0x000B5EEEu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000B5EEE: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5EFE; /* je: equal / zero */

loc_000B5EF5: ;
    ecx = eax;
    PUSH32(esp, 0x000B5EFCu); RECOMP_ABI_CALL(0x000B58A0u, xml1_guest_talent_registry_construct); /* call 0x000B58A0 */

loc_000B5EFC: ;
    goto loc_000B5F00;

loc_000B5EFE: ;
    eax = 0; /* xor self */

loc_000B5F00: ;
    PUSH32(esp, 0xB3520);
    MEM32(0x4D7300) = eax;
    PUSH32(esp, 0x000B5F0Fu); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_000B5F0F: ;
    ecx = MEM32(0x4D7300);
    esp = esp + 4;

loc_000B5F18: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B5F1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B5F1E: ;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B5F40
 * Original: 0x000B5F40 - 0x000B604A (266 bytes, 88 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5F40(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B5F40: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350238);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B6034; /* je: equal / zero */

loc_000B5F6B: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000B5F7C; /* jl: less (signed <) */

loc_000B5F74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B5F7Au); RECOMP_ABI_CALL(0x000B5CD0u, sub_000B5CD0); /* call 0x000B5CD0 */

loc_000B5F7A: ;
    goto loc_000B5F81;

loc_000B5F7C: ;
    PUSH32(esp, 0x000B5F81u); RECOMP_ABI_CALL(0x000B59D0u, xml1_guest_talent_selector_resolve); /* call 0x000B59D0 */

loc_000B5F81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5FEC; /* je: equal / zero */

loc_000B5F85: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;
    if ((ecx == 0)) goto loc_000B5FEB; /* je: equal / zero */

loc_000B5F98: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000B5FA8u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B5FA8: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x000B5FBCu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B5FBC: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B5FCFu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B5FCF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5FEB; /* je: equal / zero */

loc_000B5FD3: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B5FDFu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B5FDF: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B5FE6u); RECOMP_ABI_CALL(0x00123220u, sub_00123220); /* call 0x00123220 */

loc_000B5FE6: ;
    esp = esp + 0xC;
    SET_LO8(ebx, 1);

loc_000B5FEB: ;
    POP32(esp, esi);

loc_000B5FEC: ;
    ecx = MEM32(0x4D7300);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B602E; /* jne: not equal / not zero */

loc_000B5FF6: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x13C70);
    PUSH32(esp, 0x000B6004u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000B6004: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6014; /* je: equal / zero */

loc_000B600B: ;
    ecx = eax;
    PUSH32(esp, 0x000B6012u); RECOMP_ABI_CALL(0x000B58A0u, xml1_guest_talent_registry_construct); /* call 0x000B58A0 */

loc_000B6012: ;
    goto loc_000B6016;

loc_000B6014: ;
    eax = 0; /* xor self */

loc_000B6016: ;
    PUSH32(esp, 0xB3520);
    MEM32(0x4D7300) = eax;
    PUSH32(esp, 0x000B6025u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_000B6025: ;
    ecx = MEM32(0x4D7300);
    esp = esp + 4;

loc_000B602E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B6034u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6034: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B6050
 * Original: 0x000B6050 - 0x000B606E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6050(void)
{

loc_000B6050: ;
    SET_LO16(eax, ZX8(MEM8(esp + 4)));
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x3CC6BC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B606Bu); RECOMP_ABI_CALL(0x000B5F40u, sub_000B5F40); /* call 0x000B5F40 */

loc_000B606B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B6070
 * Original: 0x000B6070 - 0x000B608E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6070(void)
{

loc_000B6070: ;
    SET_LO16(eax, ZX8(MEM8(esp + 4)));
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x3CEEB8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B608Bu); RECOMP_ABI_CALL(0x000B5F40u, sub_000B5F40); /* call 0x000B5F40 */

loc_000B608B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B6090
 * Original: 0x000B6090 - 0x000B60A9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6090(void)
{

loc_000B6090: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3CEEB8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B60A6u); RECOMP_ABI_CALL(0x000B5F40u, sub_000B5F40); /* call 0x000B5F40 */

loc_000B60A6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B60B0
 * Original: 0x000B60B0 - 0x000B60C9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B60B0(void)
{

loc_000B60B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3CC6BC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B60C6u); RECOMP_ABI_CALL(0x000B5F40u, sub_000B5F40); /* call 0x000B5F40 */

loc_000B60C6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B60D0
 * Original: 0x000B60D0 - 0x000B60E9 (25 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B60D0(void)
{

loc_000B60D0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3D410C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B60E6u); RECOMP_ABI_CALL(0x000B5F40u, sub_000B5F40); /* call 0x000B5F40 */

loc_000B60E6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B60F0
 * Original: 0x000B60F0 - 0x000B615A (106 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B60F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B60F0: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x44) = eax;
    MEM8(esp + 4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B6148; /* je: equal / zero */

loc_000B610A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3D411C);
    PUSH32(esp, 0x40);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B611Du); RECOMP_ABI_CALL(0x000B5F40u, sub_000B5F40); /* call 0x000B5F40 */

loc_000B611D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6143; /* je: equal / zero */

loc_000B6121: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B612Bu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B612B: ;
    esp = esp + 4;
    MEM16(esi) = LO16(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, 0x000B613Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B613D: ;
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

loc_000B6143: ;
    MEM16(esi) = 0xFFFF;

loc_000B6148: ;
    ecx = MEM32(esp + 0x44);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    PUSH32(esp, 0x000B6154u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B6154: ;
    esp = esp + 0x44;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B6160
 * Original: 0x000B6160 - 0x000B61C4 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6160: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM8(esi) = 0;
    if (CMP_B(_fa, _fb)) goto loc_000B61C1; /* jb: below (unsigned <) */

loc_000B6167: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x14 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B61C1; /* ja: above (unsigned >) */

loc_000B616B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B61C1; /* jb: below (unsigned <) */

loc_000B6170: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x1A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B61C1; /* ja: above (unsigned >) */

loc_000B6175: ;
    edx = ZX8(LO8(edx));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esp + 0x14));
    edx = edx + 0x40;
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) & 0x11);
    SET_LO8(edx, LO8(edx) + 0x46);
    edx = SX8(LO8(edx));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esp + 0x14));
    edx = edx + 0x40;
    PUSH32(esp, edx);
    ecx = ZX8(LO8(ecx));
    edx = ZX8(LO8(eax));
    eax = MEM32(esp + 0x14);
    ecx = ecx + 0x40;
    PUSH32(esp, ecx);
    edx = edx + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D4134);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B61BEu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000B61BE: ;
    esp = esp + 0x24;

loc_000B61C1: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000B61D0
 * Original: 0x000B61D0 - 0x000B61D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B61D0(void)
{

loc_000B61D0: ;
    eax = 0x4D7378;
    esp += 4; return; /* ret */

}

/**
 * sub_000B61E0
 * Original: 0x000B61E0 - 0x000B61F7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B61E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B61E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B61F4; /* jl: less (signed <) */

loc_000B61E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B61F4; /* jg: greater (signed >) */

loc_000B61EE: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000B61F4: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6200
 * Original: 0x000B6200 - 0x000B6217 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6200: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6211; /* je: equal / zero */

loc_000B6209: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6211; /* je: equal / zero */

loc_000B620E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_000B6211: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6220
 * Original: 0x000B6220 - 0x000B6239 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6233; /* je: equal / zero */

loc_000B6229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    eax = 2;
    if (CMP_NE(_fa, _fb)) goto loc_000B6238; /* jne: not equal / not zero */

loc_000B6233: ;
    eax = 0xE;

loc_000B6238: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6240
 * Original: 0x000B6240 - 0x000B628B (75 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x000B624Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B624B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6287; /* je: equal / zero */

loc_000B624F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x000B6259u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6259: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B6260u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6260: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6287; /* je: equal / zero */

loc_000B6264: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x000B626Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B626E: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B6275u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6275: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B627Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B627C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6287; /* je: equal / zero */

loc_000B6280: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B6287: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6290
 * Original: 0x000B6290 - 0x000B62C2 (50 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6290: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x000B629Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B629B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B62BE; /* je: equal / zero */

loc_000B629F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x000B62A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B62A9: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B62B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B62B0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B62BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B62BE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B62D0
 * Original: 0x000B62D0 - 0x000B64D6 (518 bytes, 191 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B62D0(void)
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

loc_000B62D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x2CC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2CC), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B62E2; /* jbe: below or equal (unsigned <=) */

loc_000B62DC: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B62E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    PUSH32(esp, 0x000B62F2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B62F2: ;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CBDA4); /* fmul dword ptr [0x3cbda4] */
    PUSH32(esp, 0x000B6305u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B6305: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    ebx = eax;
    PUSH32(esp, 0x000B6312u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B6312: ;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CBDA4); /* fmul dword ptr [0x3cbda4] */
    PUSH32(esp, 0x000B6325u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B6325: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    edi = eax;
    MEM32(esp + 0x10) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6347; /* je: equal / zero */

loc_000B633F: ;
    MEM32(esp + 0x10) = 0;

loc_000B6347: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(0x3D4124); /* fmul dword ptr [0x3d4124] */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B6368; /* jnp: not parity */

loc_000B6360: ;
    fp_push(MEMF(0x3C7084)); /* fld float */
    goto loc_000B636E;

loc_000B6368: ;
    fp_push(MEMF(0x3C8C30)); /* fld float */

loc_000B636E: ;
    fp_top() = fp_top() + MEMF(esi + 0x34); /* fadd dword ptr [esi + 0x34] */
    fp_top() = fp_top() * MEMF(0x3CD140); /* fmul dword ptr [0x3cd140] */
    PUSH32(esp, 0x000B637Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B637C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B63B4; /* jne: not equal / not zero */

loc_000B6380: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B63B4; /* jne: not equal / not zero */

loc_000B6384: ;
    eax = ZX8(MEM8(esi + 0x2C9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63AC; /* je: equal / zero */

loc_000B6390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63AC; /* je: equal / zero */

loc_000B6395: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B639F; /* jl: less (signed <) */

loc_000B639A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B63AC; /* jle: less or equal (signed <=) */

loc_000B639F: ;
    _fa = (uint32_t)(MEM8(esi + 0x2CA)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2CA), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B64A3; /* jne: not equal / not zero */

loc_000B63AC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B63B4: ;
    SET_LO8(ecx, MEM8(esi + 0x2CA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6400; /* jne: not equal / not zero */

loc_000B63BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B63CD; /* je: equal / zero */

loc_000B63C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63CD; /* je: equal / zero */

loc_000B63C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B63DA; /* jne: not equal / not zero */

loc_000B63CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B63DA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6400; /* jne: not equal / not zero */

loc_000B63DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63F3; /* je: equal / zero */

loc_000B63E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63F3; /* je: equal / zero */

loc_000B63E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B63F3; /* je: equal / zero */

loc_000B63EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6400; /* jne: not equal / not zero */

loc_000B63F3: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ebx);
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B6400: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6409; /* jne: not equal / not zero */

loc_000B6405: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6418; /* je: equal / zero */

loc_000B6409: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B642C; /* jne: not equal / not zero */

loc_000B640E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6418; /* je: equal / zero */

loc_000B6413: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B642C; /* jne: not equal / not zero */

loc_000B6418: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000B6424; /* jg: greater (signed >) */

loc_000B641C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000B64CB; /* jge: greater or equal (signed >=) */

loc_000B6424: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B642C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B643B; /* jne: not equal / not zero */

loc_000B6431: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B644A; /* je: equal / zero */

loc_000B6436: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B644A; /* je: equal / zero */

loc_000B643B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B645D; /* jne: not equal / not zero */

loc_000B6440: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B644A; /* je: equal / zero */

loc_000B6445: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B645D; /* jne: not equal / not zero */

loc_000B644A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000B6424; /* jl: less (signed <) */

loc_000B644E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000B6424; /* jl: less (signed <) */

loc_000B6452: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B645D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B646C; /* jne: not equal / not zero */

loc_000B6462: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B647B; /* je: equal / zero */

loc_000B6467: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B647B; /* je: equal / zero */

loc_000B646C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6481; /* jne: not equal / not zero */

loc_000B6471: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B647B; /* je: equal / zero */

loc_000B6476: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6481; /* jne: not equal / not zero */

loc_000B647B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000B6424; /* jg: greater (signed >) */

loc_000B647F: ;
    goto loc_000B64C3;

loc_000B6481: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B648B; /* jne: not equal / not zero */

loc_000B6486: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64BB; /* je: equal / zero */

loc_000B648B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64BB; /* je: equal / zero */

loc_000B6490: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 7 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6499; /* jne: not equal / not zero */

loc_000B6495: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B64BB; /* je: equal / zero */

loc_000B6499: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64AB; /* je: equal / zero */

loc_000B649E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B64AB; /* je: equal / zero */

loc_000B64A3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B64AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B64CB; /* je: equal / zero */

loc_000B64AF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B64CB; /* je: equal / zero */

loc_000B64B3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B64BB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000B6424; /* jl: less (signed <) */

loc_000B64C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000B6424; /* jg: greater (signed >) */

loc_000B64CB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B64E0
 * Original: 0x000B64E0 - 0x000B6502 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B64E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B64E0: ;
    fp_push(MEMF(ecx + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B64FC; /* je: equal / zero */

loc_000B64F3: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C2), 0xA (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B6501; /* jb: below (unsigned <) */

loc_000B64FC: ;
    g_seh_ebp = ebp; sub_00066940(); return; /* tail jmp 0x00066940 */

loc_000B6501: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6510
 * Original: 0x000B6510 - 0x000B6516 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6510(void)
{

loc_000B6510: ;
    eax = 0x2D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6520
 * Original: 0x000B6520 - 0x000B664C (300 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6520: ;
    esp = esp - 0x108;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x104) = eax;
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_000B6538: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6538; /* jne: not equal / not zero */

loc_000B653F: ;
    eax = eax - esi;
    MEM32(esp + 4) = eax;
    if ((eax == 0)) goto loc_000B6636; /* je: equal / zero */

loc_000B654B: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B655Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B655B: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x3CEDC4);
    PUSH32(esp, ecx);
    MEM8(esp + 0x11B) = 0;
    PUSH32(esp, 0x000B6572u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_000B6572: ;
    ecx = eax;
    esp = esp + 0x14;
    esi = ecx + 1;
    /* nop */

loc_000B6580: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6580; /* jne: not equal / not zero */

loc_000B6587: ;
    ecx = ecx - esi;
    edx = ecx + eax + 1;
    PUSH32(esp, 0x3CEDC4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B6598u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_000B6598: ;
    esi = MEM32(esp + 0x118);
    esp = esp + 8;
    ecx = eax;
    esi = esi - eax;

loc_000B65A6: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B65A6; /* jne: not equal / not zero */

loc_000B65B0: ;
    ecx = eax;
    esi = ecx + 1;

loc_000B65B5: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B65B5; /* jne: not equal / not zero */

loc_000B65BC: ;
    ecx = ecx - esi;
    SET_LO8(edx, MEM8(ecx + eax + 1));
    esi = MEM32(esp + 0x114);
    SET_LO8(edx, LO8(edx) - 0x40);
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + eax + 2));
    esi = MEM32(esp + 0x118);
    SET_LO8(edx, LO8(edx) - 0x40);
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + eax + 3));
    esi = MEM32(esp + 0x11C);
    SET_LO8(edx, LO8(edx) - 0x40);
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + eax + 5));
    esi = MEM32(esp + 0x120);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x57) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x57 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + eax + 7));
    esi = MEM32(esp + 0x124);
    SET_LO8(edx, LO8(edx) - 0x40);
    MEM8(esi) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + eax + 8));
    ecx = MEM32(esp + 0x128);
    SET_LO8(eax, LO8(eax) - 0x30);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x000B662Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B662F: ;
    esp = esp + 0x108;
    esp += 4; return; /* ret */

loc_000B6636: ;
    ecx = MEM32(esp + 0x108);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x000B6645u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B6645: ;
    esp = esp + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6650
 * Original: 0x000B6650 - 0x000B66C4 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6650: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x100) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    MEM8(esp + 0xC) = 0;
    PUSH32(esp, 0x000B6673u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_000B6673: ;
    edx = MEM32(esp + 0x114);
    ecx = MEM32(edx);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B66AF; /* je: equal / zero */

loc_000B6683: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B6688u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6688: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B6696u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6696: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B66AF; /* je: equal / zero */

loc_000B669A: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000B66A8u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B66A8: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_000B66AF: ;
    ecx = MEM32(esp + 0x100);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0x000B66BDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B66BD: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_000B66D0
 * Original: 0x000B66D0 - 0x000B68F6 (550 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B66D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B66D0: ;
    esp = esp - 0x208;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x204) = eax;
    SET_LO8(eax, MEM8(esp + 0x214));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B68D6; /* jb: below (unsigned <) */

loc_000B66F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x14 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B68D6; /* ja: above (unsigned >) */

loc_000B66F9: ;
    SET_LO8(ecx, MEM8(esp + 0x218));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B68D6; /* jb: below (unsigned <) */

loc_000B6709: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x1A (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B68D6; /* ja: above (unsigned >) */

loc_000B6712: ;
    edx = MEM32(esp + 0x21C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B68D6; /* jb: below (unsigned <) */

loc_000B6722: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xF (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B68D6; /* ja: above (unsigned >) */

loc_000B672B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x238);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x220);
    MEM16(esi) = 0;
    esi = MEM32(esp + 0x234);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x234);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ebx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(esp + 0x244));
    PUSH32(esp, edi);
    esi = esp + 0x24;
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0x000B676Cu); RECOMP_ABI_CALL(0x000B6160u, sub_000B6160); /* call 0x000B6160 */

loc_000B676C: ;
    PUSH32(esp, 0x000B6771u); RECOMP_ABI_CALL(0x0013C440u, sub_0013C440); /* call 0x0013C440 */

loc_000B6771: ;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B677Cu); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_000B677C: ;
    ebp = MEM32(eax);
    esp = esp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000B68B6; /* je: equal / zero */

loc_000B678D: ;
    ecx = esi;
    PUSH32(esp, ecx);
    edx = esp + 0x118;
    PUSH32(esp, 0x3D4168);
    PUSH32(esp, edx);
    MEM8(esp + 0x120) = 0;
    PUSH32(esp, 0x000B67AAu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000B67AA: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B67B6u); RECOMP_ABI_CALL(0x000B6650u, sub_000B6650); /* call 0x000B6650 */

loc_000B67B6: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B68B6; /* je: equal / zero */

loc_000B67C1: ;
    SET_LO8(eax, MEM8(esp + 0x240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B68B6; /* je: equal / zero */

loc_000B67D0: ;
    esi = ZX8(MEM8(esp + 0x228));
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B67DEu); RECOMP_ABI_CALL(0x000B6200u, sub_000B6200); /* call 0x000B6200 */

loc_000B67DE: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B684E; /* jne: not equal / not zero */

loc_000B67E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B67EBu); RECOMP_ABI_CALL(0x000B6220u, sub_000B6220); /* call 0x000B6220 */

loc_000B67EB: ;
    ecx = MEM32(esp + 0x234);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, ebx);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(eax, MEM8(esp + 0x234));
    PUSH32(esp, edi);
    SET_LO8(edx, 0); /* xor self */
    esi = esp + 0x28;
    PUSH32(esp, 0x000B680Fu); RECOMP_ABI_CALL(0x000B6160u, sub_000B6160); /* call 0x000B6160 */

loc_000B680F: ;
    edx = MEM32(esp + 0x244);
    SET_LO8(ecx, MEM8(esp + 0x24));
    SET_LO8(eax, MEM8(esp + 0x238));
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0x000B682Du); RECOMP_ABI_CALL(0x000B6160u, sub_000B6160); /* call 0x000B6160 */

loc_000B682D: ;
    eax = MEM32(esp + 0x254);
    SET_LO8(ecx, MEM8(esp + 0x34));
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x250));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0x000B684Bu); RECOMP_ABI_CALL(0x000B6160u, sub_000B6160); /* call 0x000B6160 */

loc_000B684B: ;
    esp = esp + 0x34;

loc_000B684E: ;
    eax = ZX8(MEM8(esp + 0x228));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B685Cu); RECOMP_ABI_CALL(0x000B61E0u, sub_000B61E0); /* call 0x000B61E0 */

loc_000B685C: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B68B6; /* je: equal / zero */

loc_000B6863: ;
    ecx = ZX8(MEM8(esp + 0x234));
    SET_LO8(edx, MEM8(esp + 0x230));
    ecx = ecx + 0x40;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) & 0x11);
    SET_LO8(edx, LO8(edx) + 0x46);
    eax = SX8(LO8(edx));
    edx = ZX8(MEM8(esp + 0x22C));
    PUSH32(esp, eax);
    ecx = ZX8(LO8(ebx));
    ecx = ecx + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x41);
    edx = edx + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x30;
    PUSH32(esp, 0x3D4134);
    PUSH32(esp, eax);
    MEM8(esp + 0x38) = 0;
    PUSH32(esp, 0x000B68B3u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000B68B3: ;
    esp = esp + 0x24;

loc_000B68B6: ;
    eax = MEM32(esp + 0x21C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0x000B68CFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B68CF: ;
    esp = esp + 0x208;
    esp += 4; return; /* ret */

loc_000B68D6: ;
    eax = MEM32(esp + 0x20C);
    ecx = MEM32(esp + 0x204);
    MEM32(eax) = 0;
    PUSH32(esp, 0x000B68EFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B68EF: ;
    esp = esp + 0x208;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6900
 * Original: 0x000B6900 - 0x000B6961 (97 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6900: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xC8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC8), 8 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_000B6928; /* je: equal / zero */

loc_000B6916: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6928; /* jne: not equal / not zero */

loc_000B691E: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000B6928u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6928: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6945; /* jne: not equal / not zero */

loc_000B692C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x44F828);
    ecx = esi;
    MEM32(0x44F82C) = edi;
    PUSH32(esp, 0x000B693Fu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000B693F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000B6945: ;
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, ebx);
    MEM32(0x44F82C) = ecx;
    PUSH32(esp, 0x44F828);
    ecx = esi;
    PUSH32(esp, 0x000B695Bu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000B695B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B6970
 * Original: 0x000B6970 - 0x000B6CB6 (838 bytes, 258 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6970: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350266);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xB8));
    esp = esp - 0xB8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x000B6996u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000B6996: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B699Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B699D: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x58;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B69BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B69BD: ;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    ecx = MEM32(edi + 0x1C);
    fp_push(MEMF(edi + 0x28)); /* fld float */
    edx = esp + 0x1C;
    MEMF(esp + 0x54) = (float)fp_top(); /* fst */
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, 0x4C0A5C);
    fp_top() = fp_top() * MEMF(0x3D4170); /* fmul dword ptr [0x3d4170] */
    ecx = esp + 0x1C;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D4170); /* fmul dword ptr [0x3d4170] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    fp_top() = fp_top() + MEMF(esp + 0x5C); /* fadd dword ptr [esp + 0x5c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B6A38u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000B6A38: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C93D0);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    PUSH32(esp, 1);
    MEM32(esp + 0xD8) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000B6A51u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6A51: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000B6A66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6A66: ;
    edx = MEM32(esp + 0x14);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0x3C898C;
    PUSH32(esp, 0x000B6A7Du); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000B6A7D: ;
    ebx = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    MEM32(esp + 0x48) = ebx;
    eax = MEM32(ebx);
    ecx = ebx;
    MEM8(esp + 0xD0) = 1;
    MEM32(esp + 0x10) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B6A98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6A98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B6C76; /* jle: less or equal (signed <=) */

loc_000B6AA0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B6AACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6AAC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6B50; /* je: equal / zero */

loc_000B6AB6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B6ABCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6ABC: ;
    edx = MEM32(0x4D737C);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x21)) >> 32) & 1);
    edx = edx + 0x21;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    ebp = 1;
    if (LO8(ecx)) _cf = (int)(((ebp) >> (32 - (LO8(ecx)))) & 1);
    ebp = ebp << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6B50; /* je: equal / zero */

loc_000B6ADA: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B6B58; /* je: equal / zero */

loc_000B6AE6: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6B58; /* jne: not equal / not zero */

loc_000B6AF9: ;
    SET_LO8(eax, MEM8(esi + 0x2CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6B58; /* je: equal / zero */

loc_000B6B03: ;
    eax = ZX8(MEM8(esi + 0x2C9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6B58; /* je: equal / zero */

loc_000B6B0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6B58; /* je: equal / zero */

loc_000B6B14: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C2), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000B6B58; /* jae: above or equal (unsigned >=) */

loc_000B6B1D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x000B6B29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6B29: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    ecx = esi + 0x260;
    PUSH32(esp, 0x000B6B3Bu); RECOMP_ABI_CALL(0x0006E100u, sub_0006E100); /* call 0x0006E100 */

loc_000B6B3B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000B6B4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6B4B: ;
    goto loc_000B6C5F;

loc_000B6B50: ;
    MEM32(esp + 0x18) = 0;

loc_000B6B58: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6B84; /* je: equal / zero */

loc_000B6B5C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B6B62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6B62: ;
    edx = MEM32(0x48B988);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x21)) >> 32) & 1);
    edx = edx + 0x21;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    ebp = 1;
    if (LO8(ecx)) _cf = (int)(((ebp) >> (32 - (LO8(ecx)))) & 1);
    ebp = ebp << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6B84; /* je: equal / zero */

loc_000B6B80: ;
    ebp = esi;
    goto loc_000B6B86;

loc_000B6B84: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */

loc_000B6B86: ;
    PUSH32(esp, 0x000B6B8Bu); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_000B6B8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6BE0; /* je: equal / zero */

loc_000B6B8F: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    if (0x1B) _cf = (int)(((ecx) >> ((0x1B) - 1)) & 1);
    ecx = ecx >> 0x1B;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6BA3; /* je: equal / zero */

loc_000B6B9C: ;
    eax = 0x1B;
    goto loc_000B6BC3;

loc_000B6BA3: ;
    edx = eax;
    if (0x1C) _cf = (int)(((edx) >> ((0x1C) - 1)) & 1);
    edx = edx >> 0x1C;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6BB4; /* je: equal / zero */

loc_000B6BAD: ;
    eax = 0x1C;
    goto loc_000B6BC3;

loc_000B6BB4: ;
    if (0x1D) _cf = (int)(((eax) >> ((0x1D) - 1)) & 1);
    eax = eax >> 0x1D;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1A)) >> 32) & 1);
    eax = eax + 0x1A;

loc_000B6BC3: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B6BD7; /* je: equal / zero */

loc_000B6BC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6C5F; /* je: equal / zero */

loc_000B6BD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_000B6BDA;

loc_000B6BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    _cf = (int)(_fa < _fb);

loc_000B6BDA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000B6C5F; /* je: equal / zero */

loc_000B6BE0: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6C5F; /* jne: not equal / not zero */

loc_000B6BE8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6C5F; /* jne: not equal / not zero */

loc_000B6BEC: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6C5F; /* jne: not equal / not zero */

loc_000B6BFF: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C2), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000B6C5F; /* jae: above or equal (unsigned >=) */

loc_000B6C08: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x000B6C17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6C17: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xD);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x270F);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esp + 0x90;
    MEM32(esp + 0x44) = esp;
    PUSH32(esp, 0x000B6C4Cu); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_000B6C4C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x000B6C5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6C5F: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    MEM32(esp + 0x10) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B6C6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6C6E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000B6AA0; /* jl: less (signed <) */

loc_000B6C76: ;
    PUSH32(esp, ebx);
    MEM8(esp + 0xD4) = 0;
    PUSH32(esp, 0x000B6C84u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000B6C84: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    ecx = esp + 0x14;
    MEM32(esp + 0xD0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B6C9Bu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000B6C9B: ;
    ecx = MEM32(esp + 0xC8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC4)) >> 32) & 1);
    esp = esp + 0xC4;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6CC0
 * Original: 0x000B6CC0 - 0x000B70E2 (1058 bytes, 309 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6CC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6CC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x350280);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x2CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000B70CD; /* je: equal / zero */

loc_000B6CEC: ;
    _fa = (uint32_t)(MEM8(esi + 0x2CC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2CC), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B70CD; /* jae: above or equal (unsigned >=) */

loc_000B6CF9: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C2), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B70CD; /* jae: above or equal (unsigned >=) */

loc_000B6D06: ;
    PUSH32(esp, 0x000B6D0Bu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000B6D0B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B6D12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6D12: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x4C;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B6D32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6D32: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    ecx = MEM32(esi + 0x20);
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6DB2; /* jne: not equal / not zero */

loc_000B6D70: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6D95; /* jne: not equal / not zero */

loc_000B6D89: ;
    MEM32(esp + 0x18) = 1;
    ebp = 0; /* xor self */
    goto loc_000B6DB8;

loc_000B6D95: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B6DB2; /* jp: parity */

loc_000B6DA6: ;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ebp = 0; /* xor self */
    goto loc_000B6DB8;

loc_000B6DB2: ;
    ebp = 0; /* xor self */
    MEM32(esp + 0x18) = ebp;

loc_000B6DB8: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6DE7; /* jne: not equal / not zero */

loc_000B6DDB: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x18) = 1;
    goto loc_000B6E00;

loc_000B6DE7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B6E00; /* jnp: not parity */

loc_000B6DFC: ;
    MEM32(esp + 0x18) = ebp;

loc_000B6E00: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    ecx = MEM32(esp + 0x80);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    PUSH32(esp, 0x4D7378);
    ecx = esp + 0x1C;
    MEM32(esp + 0x74) = eax;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B6EA2u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000B6EA2: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    MEM32(esp + 0x88) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000B6EBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6EBE: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000B6ED5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6ED5: ;
    edx = MEM32(esp + 0x14);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = 0x3C898C;
    PUSH32(esp, 0x000B6EECu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000B6EEC: ;
    edi = eax;
    esp = esp + 8;
    MEM32(esp + 0x24) = edi;
    eax = MEM32(edi);
    ecx = edi;
    MEM8(esp + 0x78) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B6F00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6F00: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM8(esp + 0x13) = (CMP_G(_fas, _fbs)) ? 1 : 0; /* setg */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B6FB0; /* jle: less or equal (signed <=) */

loc_000B6F19: ;
    /* nop */

loc_000B6F20: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B6F28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B6F28: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    ecx = eax;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B6F57; /* jp: parity */

loc_000B6F39: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B6F57; /* jp: parity */

loc_000B6F48: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B6F5B; /* jnp: not parity */

loc_000B6F57: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B6F5B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6F9F; /* je: equal / zero */

loc_000B6F5F: ;
    SET_LO8(eax, MEM8(ecx + 0x2CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6F9F; /* je: equal / zero */

loc_000B6F69: ;
    eax = MEM32(esp + 0x80);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6F9F; /* je: equal / zero */

loc_000B6F77: ;
    eax = ZX8(MEM8(ecx + 0x2C9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B6F88; /* je: equal / zero */

loc_000B6F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6F91; /* jne: not equal / not zero */

loc_000B6F88: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C2), 0xA (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B6F9F; /* jb: below (unsigned <) */

loc_000B6F91: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2CC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2CC), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B6F9F; /* jae: above or equal (unsigned >=) */

loc_000B6F9A: ;
    MEM8(esp + 0x13) = 0;

loc_000B6F9F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B6F20; /* jl: less (signed <) */

loc_000B6FA8: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B6FBC; /* jne: not equal / not zero */

loc_000B6FB0: ;
    MEM8(esi + 0x2C2) = 0xA;
    goto loc_000B70AE;

loc_000B6FBC: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B70AE; /* je: equal / zero */

loc_000B6FC8: ;
    ecx = esi + 0x260;
    PUSH32(esp, 0x000B6FD3u); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_000B6FD3: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000B6FE1u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000B6FE1: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x268) = ecx;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000B6FF8u); RECOMP_ABI_CALL(0x00066B40u, sub_00066B40); /* call 0x00066B40 */

loc_000B6FF8: ;
    esp = esp + 4;
    SET_LO8(ebx, 1);
    ebp = 0; /* xor self */
    /* nop */

loc_000B7000: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B7008u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7008: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B70A1; /* je: equal / zero */

loc_000B7012: ;
    SET_LO8(eax, MEM8(esi + 0x2CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B70A1; /* je: equal / zero */

loc_000B7020: ;
    ecx = MEM32(esp + 0x80);
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B70A1; /* je: equal / zero */

loc_000B702E: ;
    eax = ZX8(MEM8(esi + 0x2C9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B703F; /* je: equal / zero */

loc_000B703A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B70A1; /* jne: not equal / not zero */

loc_000B703F: ;
    _fa = (uint32_t)(MEM8(esi + 0x2CC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2CC), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B70A1; /* jae: above or equal (unsigned >=) */

loc_000B7048: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B706E; /* je: equal / zero */

loc_000B704C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000B7060u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7060: ;
    PUSH32(esp, eax);
    ecx = esi + 0x260;
    PUSH32(esp, 0x000B706Cu); RECOMP_ABI_CALL(0x0006DED0u, sub_0006DED0); /* call 0x0006DED0 */

loc_000B706C: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000B706E: ;
    ecx = esi + 0x260;
    PUSH32(esp, 0x000B7079u); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_000B7079: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000B7087u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000B7087: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEM32(esi + 0x268) = edx;
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000B709Eu); RECOMP_ABI_CALL(0x00066B40u, sub_00066B40); /* call 0x00066B40 */

loc_000B709E: ;
    esp = esp + 4;

loc_000B70A1: ;
    eax = MEM32(esp + 0x20);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7000; /* jl: less (signed <) */

loc_000B70AE: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x7C) = 0;
    PUSH32(esp, 0x000B70B9u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000B70B9: ;
    esp = esp + 4;
    ecx = esp + 0x14;
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B70CDu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000B70CD: ;
    ecx = MEM32(esp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B70F0
 * Original: 0x000B70F0 - 0x000B70FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B70F0(void)
{

loc_000B70F0: ;
    MEM32(ecx + 0x264) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7100
 * Original: 0x000B7100 - 0x000B715D (93 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7100(void)
{

loc_000B7100: ;
    esp = esp - 0x10;
    eax = 0; /* xor self */
    MEM32(esp) = eax;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    ecx = esi + 4;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = eax;
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, 0x3CC80C);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B714Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B714A: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B7156u); RECOMP_ABI_CALL(0x00066E40u, sub_00066E40); /* call 0x00066E40 */

loc_000B7156: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7160
 * Original: 0x000B7160 - 0x000B7462 (770 bytes, 232 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7160: ;
    esp = esp - 0x310;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x320) = eax;
    eax = esp + 0x120;
    PUSH32(esp, 0x3D4174);
    PUSH32(esp, eax);
    ebp = ecx;
    MEM8(esp + 0x28) = 0;
    PUSH32(esp, 0x000B7194u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B7194: ;
    esi = MEM32(ebp + 0x2C4);
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x21B) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000B71B2; /* jne: not equal / not zero */

loc_000B71AB: ;
    eax = 0x3C806C;
    goto loc_000B71C8;

loc_000B71B2: ;
    PUSH32(esp, 0x000B71B7u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B71B7: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000B71C8: ;
    edx = eax;
    /* nop */

loc_000B71D0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B71D0; /* jne: not equal / not zero */

loc_000B71D7: ;
    edi = esp + 0x11C;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B71E1: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B71E1; /* jne: not equal / not zero */

loc_000B71E9: ;
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
    esi = MEM32(ebp + 0x268);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B720A; /* jne: not equal / not zero */

loc_000B7203: ;
    eax = 0x3C806C;
    goto loc_000B7220;

loc_000B720A: ;
    PUSH32(esp, 0x000B720Fu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B720F: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x4008;

loc_000B7220: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0x224;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7233u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B7233: ;
    ecx = esp + 0x228;
    PUSH32(esp, 0x3CB044);
    PUSH32(esp, ecx);
    MEM8(esp + 0x32F) = 0;
    PUSH32(esp, 0x000B724Du); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_000B724D: ;
    edi = eax;
    SET_LO8(eax, MEM8(ebp + 0x2CB));
    esp = esp + 0x14;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_000B7273; /* jne: not equal / not zero */

loc_000B7266: ;
    _fa = (uint32_t)(MEM8(ebp + 0x2CC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x2CC), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B73FA; /* jae: above or equal (unsigned >=) */

loc_000B7273: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B73FA; /* je: equal / zero */

loc_000B727B: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B73FA; /* je: equal / zero */

loc_000B7284: ;
    ecx = ZX8(MEM8(ebp + 0x2C9));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B729A; /* je: equal / zero */

loc_000B7290: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    ecx = 2;
    if (CMP_NE(_fa, _fb)) goto loc_000B729F; /* jne: not equal / not zero */

loc_000B729A: ;
    ecx = 0xE;

loc_000B729F: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 0x2CC));
    esi = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0x2CA));
    edx = esp + 0x124;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x2C8));
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0x000B72CBu); RECOMP_ABI_CALL(0x000B6160u, sub_000B6160); /* call 0x000B6160 */

loc_000B72CB: ;
    PUSH32(esp, 0);
    ebx = ebp + 0x2C;
    PUSH32(esp, ebx);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B72DEu); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_000B72DE: ;
    esp = esp + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000B73F6; /* je: equal / zero */

loc_000B72ED: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0x2CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B73F6; /* je: equal / zero */

loc_000B72FD: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x2CC));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 0x2CA));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x2C9));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B731Fu); RECOMP_ABI_CALL(0x000B6220u, sub_000B6220); /* call 0x000B6220 */

loc_000B731F: ;
    ecx = esp + 0x12C;
    esp = esp + 4;
    PUSH32(esp, ecx);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(eax, MEM8(ebp + 0x2C8));
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0x000B7339u); RECOMP_ABI_CALL(0x000B6160u, sub_000B6160); /* call 0x000B6160 */

loc_000B7339: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B7349u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_000B7349: ;
    MEM32(esp + 0x34) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0x2CC));
    SET_LO8(eax, LO8(eax) + 2);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x2CB));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 0x2CA));
    esp = esp + 0x24;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x2C9));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B737Au); RECOMP_ABI_CALL(0x000B6220u, sub_000B6220); /* call 0x000B6220 */

loc_000B737A: ;
    ecx = esp + 0x12C;
    esp = esp + 4;
    PUSH32(esp, ecx);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(eax, MEM8(ebp + 0x2C8));
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0x000B7394u); RECOMP_ABI_CALL(0x000B6160u, sub_000B6160); /* call 0x000B6160 */

loc_000B7394: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B73A4u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_000B73A4: ;
    ecx = MEM32(esp + 0x34);
    esp = esp + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = eax;
    MEM32(esp + 0x14) = esi;
    SET_LO8(ebx, 0xA);
    if (TEST_Z(_fa, _fb)) goto loc_000B73D9; /* je: equal / zero */

loc_000B73B7: ;
    PUSH32(esp, 0x000B73BCu); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_000B73BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B73D9; /* jne: not equal / not zero */

loc_000B73C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B73F6; /* je: equal / zero */

loc_000B73C4: ;
    ecx = esi;
    PUSH32(esp, 0x000B73CBu); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_000B73CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B73D9; /* jne: not equal / not zero */

loc_000B73CF: ;
    eax = MEM32(esp + 0x18);
    MEM8(eax + 0x2C2) = LO8(ebx);

loc_000B73D9: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B73F6; /* je: equal / zero */

loc_000B73E1: ;
    ecx = eax;
    PUSH32(esp, 0x000B73E8u); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_000B73E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B73F6; /* je: equal / zero */

loc_000B73EC: ;
    ecx = MEM32(esp + 0x14);
    MEM8(ecx + 0x2C2) = LO8(ebx);

loc_000B73F6: ;
    ecx = MEM32(esp + 0x18);

loc_000B73FA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebp + 0x268) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B7419; /* je: equal / zero */

loc_000B7408: ;
    edx = MEM32(ebp + 0x1C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x000B7419u); RECOMP_ABI_CALL(0x000B6CC0u, sub_000B6CC0); /* call 0x000B6CC0 */

loc_000B7419: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7432; /* je: equal / zero */

loc_000B7421: ;
    edx = MEM32(ebp + 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000B7432u); RECOMP_ABI_CALL(0x000B6CC0u, sub_000B6CC0); /* call 0x000B6CC0 */

loc_000B7432: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B744B; /* je: equal / zero */

loc_000B743A: ;
    edx = MEM32(ebp + 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000B744Bu); RECOMP_ABI_CALL(0x000B6CC0u, sub_000B6CC0); /* call 0x000B6CC0 */

loc_000B744B: ;
    ecx = MEM32(esp + 0x31C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B745Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B745B: ;
    esp = esp + 0x310;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7470
 * Original: 0x000B7470 - 0x000B772B (699 bytes, 209 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7470: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350280);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x000B7493u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000B7493: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B749Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B749A: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x40;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B74BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B74BB: ;
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    ecx = MEM32(ebp + 0x20);
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEM32(esp + 0x64) = ecx;
    ebx = 1;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x64); /* fsub dword ptr [esp + 0x64] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7535; /* jne: not equal / not zero */

loc_000B74F7: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7518; /* jne: not equal / not zero */

loc_000B7510: ;
    MEM32(esp + 0x10) = ebx;
    esi = 0; /* xor self */
    goto loc_000B753B;

loc_000B7518: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B7535; /* jp: parity */

loc_000B7529: ;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    esi = 0; /* xor self */
    goto loc_000B753B;

loc_000B7535: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = esi;

loc_000B753B: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(esp + 0x64); /* fadd dword ptr [esp + 0x64] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7566; /* jne: not equal / not zero */

loc_000B755E: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = ebx;
    goto loc_000B757F;

loc_000B7566: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B757F; /* jnp: not parity */

loc_000B757B: ;
    MEM32(esp + 0x10) = esi;

loc_000B757F: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D7378);
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    ecx = esp + 0x1C;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = esi;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x6C); /* fsub dword ptr [esp + 0x6c] */
    MEM32(esp + 0x6C) = edx;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B7634u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000B7634: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    MEM32(esp + 0x88) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000B7650u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7650: ;
    edx = MEM32(esp + 0x14);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = 0x3C898C;
    PUSH32(esp, 0x000B7667u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000B7667: ;
    edi = eax;
    esp = esp + 8;
    MEM32(esp + 0x24) = edi;
    eax = MEM32(edi);
    ecx = edi;
    MEM8(esp + 0x78) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B767Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B767A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000B76E4; /* jle: less or equal (signed <=) */

loc_000B7684: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B768Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B768C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B76DB; /* je: equal / zero */

loc_000B7692: ;
    SET_LO8(eax, MEM8(esi + 0x2CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B76DB; /* je: equal / zero */

loc_000B769C: ;
    eax = ZX8(MEM8(esi + 0x2C9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B76DB; /* je: equal / zero */

loc_000B76A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B76DB; /* je: equal / zero */

loc_000B76AD: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C2), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B76DB; /* jae: above or equal (unsigned >=) */

loc_000B76B6: ;
    _fa = (uint32_t)(MEM8(esi + 0x2CC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2CC), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B76DB; /* jae: above or equal (unsigned >=) */

loc_000B76BF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x000B76CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B76CB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000B76DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B76DB: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7684; /* jl: less (signed <) */

loc_000B76E4: ;
    eax = MEM32(ebp + 0x1C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000B76F7u); RECOMP_ABI_CALL(0x000B6CC0u, sub_000B6CC0); /* call 0x000B6CC0 */

loc_000B76F7: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x7C) = 0;
    PUSH32(esp, 0x000B7702u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000B7702: ;
    esp = esp + 4;
    ecx = esp + 0x14;
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B7716u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000B7716: ;
    ecx = MEM32(esp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x6C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7730
 * Original: 0x000B7730 - 0x000B7AD4 (932 bytes, 275 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7730: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35029B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x234;
    eax = MEM32(0x47A050);
    edx = MEM32(esp + 0x24C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x240) = eax;
    eax = MEM32(esp + 0x264);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x25C);
    esi = ecx;
    ecx = MEM32(esp + 0x264);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x268);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x24) = esp;
    PUSH32(esp, 0x000B7798u); RECOMP_ABI_CALL(0x00093880u, sub_00093880); /* call 0x00093880 */

loc_000B7798: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3D418C;
    MEM32(esi + 0x2C4) = eax;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x24C) = eax;
    MEM8(esp + 0x40) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000B77C2; /* jne: not equal / not zero */

loc_000B77B8: ;
    MEM32(esp + 0x10) = 0x3C806C;
    goto loc_000B77DC;

loc_000B77C2: ;
    PUSH32(esp, 0x000B77C7u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B77C7: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    eax = edx + eax + 0x4008;
    MEM32(esp + 0x10) = eax;

loc_000B77DC: ;
    eax = esi + 0x2CD;
    PUSH32(esp, eax);
    ecx = esi + 0x2CC;
    PUSH32(esp, ecx);
    ebp = esi + 0x2CB;
    PUSH32(esp, ebp);
    edi = esi + 0x2CA;
    PUSH32(esp, edi);
    ebx = esi + 0x2C9;
    edx = esi + 0x2C8;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B7814u); RECOMP_ABI_CALL(0x000B6520u, sub_000B6520); /* call 0x000B6520 */

loc_000B7814: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    esp = esp + 0x1C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7847; /* je: equal / zero */

loc_000B781F: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B7829u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000B7829: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7838u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B7838: ;
    ecx = eax;
    PUSH32(esp, 0x000B783Fu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000B783F: ;
    MEM32(esi + 0x2C4) = eax;
    goto loc_000B7851;

loc_000B7847: ;
    MEM32(esi + 0x2C4) = 0;

loc_000B7851: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B7868u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B7868: ;
    ecx = MEM32(esp + 0x268);
    eax = MEM32(ecx);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D4178);
    MEM8(esp + 0x247) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B7886u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7886: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000B78D2; /* je: equal / zero */

loc_000B788E: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x144;
    PUSH32(esp, 0x3CD2FC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B78A5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B78A5: ;
    edx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esp + 0x144;
    MEM8(esp + 0x243) = 0;
    PUSH32(esp, 0x000B78C1u); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_000B78C1: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    PUSH32(esp, 0x000B78D2u); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_000B78D2: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C2), 0xA (8-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x2CD));
    edx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2CC));
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x2C8));
    PUSH32(esp, eax);
    eax = esp + 0x158;
    PUSH32(esp, ecx);
    ecx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B791Fu); RECOMP_ABI_CALL(0x000B66D0u, sub_000B66D0); /* call 0x000B66D0 */

loc_000B791F: ;
    edi = MEM32(eax);
    SET_LO8(eax, MEM8(ebp));
    esp = esp + 0x28;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7932; /* jne: not equal / not zero */

loc_000B792B: ;
    MEM8(esi + 0x2C2) = 0xA;

loc_000B7932: ;
    eax = MEM32(esi + 4);
    eax = eax | 8;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000B7942u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000B7942: ;
    ebx = MEM32(esi + 4);
    ebx = ebx | 0x10;
    ecx = esi;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x000B7952u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000B7952: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B795Au); RECOMP_ABI_CALL(0x00074DA0u, sub_00074DA0); /* call 0x00074DA0 */

loc_000B795A: ;
    ecx = esi;
    PUSH32(esp, 0x000B7961u); RECOMP_ABI_CALL(0x00074FB0u, sub_00074FB0); /* call 0x00074FB0 */

loc_000B7961: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7A4E; /* je: equal / zero */

loc_000B7969: ;
    ecx = esi;
    PUSH32(esp, 0x000B7970u); RECOMP_ABI_CALL(0x00074860u, sub_00074860); /* call 0x00074860 */

loc_000B7970: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000B7981u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7981: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B7992u); RECOMP_ABI_CALL(0x00077200u, sub_00077200); /* call 0x00077200 */

loc_000B7992: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x34);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x18) = ecx;
    ecx = edi;
    MEM32(esp + 0x1C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B79AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B79AE: ;
    ecx = MEM32(esi + 0x168);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B79C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B79C5: ;
    ecx = esi;
    PUSH32(esp, 0x000B79CCu); RECOMP_ABI_CALL(0x00074860u, sub_00074860); /* call 0x00074860 */

loc_000B79CC: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B79DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B79DD: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B79E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B79E4: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B79F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B79F5: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7A0E; /* jne: not equal / not zero */

loc_000B79FB: ;
    _fa = (uint32_t)(MEM8(esi + 0x2CC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2CC), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B7A0E; /* jbe: below or equal (unsigned <=) */

loc_000B7A04: ;
    SET_LO8(eax, MEM8(esi + 0x2CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7A15; /* jne: not equal / not zero */

loc_000B7A0E: ;
    ecx = esi;
    PUSH32(esp, 0x000B7A15u); RECOMP_ABI_CALL(0x00074E60u, sub_00074E60); /* call 0x00074E60 */

loc_000B7A15: ;
    ecx = esi;
    PUSH32(esp, 0x000B7A1Cu); RECOMP_ABI_CALL(0x00066BE0u, sub_00066BE0); /* call 0x00066BE0 */

loc_000B7A1C: ;
    ecx = esi;
    PUSH32(esp, 0x000B7A23u); RECOMP_ABI_CALL(0x00074860u, sub_00074860); /* call 0x00074860 */

loc_000B7A23: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B7A2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7A2A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B7A31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7A31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7A9C; /* jne: not equal / not zero */

loc_000B7A35: ;
    eax = MEM32(esi + 4);
    eax = eax | 2;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000B7A45u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000B7A45: ;
    ecx = esi;
    PUSH32(esp, 0x000B7A4Cu); RECOMP_ABI_CALL(0x00066B60u, sub_00066B60); /* call 0x00066B60 */

loc_000B7A4C: ;
    goto loc_000B7A9C;

loc_000B7A4E: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x246);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B7A74; /* jp: parity */

loc_000B7A6C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_000B7A74: ;
    MEMF(esi + 0x240) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi + 0x260;
    MEM32(esi + 0x268) = 0;
    PUSH32(esp, 0x000B7A8Fu); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_000B7A8F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000B7A9Cu); RECOMP_ABI_CALL(0x00027850u, sub_00027850); /* call 0x00027850 */

loc_000B7A9C: ;
    ecx = MEM32(esp + 0x25C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B7AABu); RECOMP_ABI_CALL(0x000B7100u, sub_000B7100); /* call 0x000B7100 */

loc_000B7AAB: ;
    ecx = MEM32(esp + 0x244);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x240);
    eax = esi;
    PUSH32(esp, 0x000B7AC7u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B7AC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x240;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B7AE0
 * Original: 0x000B7AE0 - 0x000B7AE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7AE0(void)
{

loc_000B7AE0: ;
    eax = 0x3CF5E8;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7AF0
 * Original: 0x000B7AF0 - 0x000B7B0E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B7AF8u); RECOMP_ABI_CALL(0x000B7B10u, sub_000B7B10); /* call 0x000B7B10 */

loc_000B7AF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7B08; /* je: equal / zero */

loc_000B7AFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B7B05u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000B7B05: ;
    esp = esp + 4;

loc_000B7B08: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7B10
 * Original: 0x000B7B10 - 0x000B7B56 (70 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7B10(void)
{

loc_000B7B10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3502B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    MEM32(ecx) = 0x3D418C;
    eax = 0; /* xor self */
    MEM8(ecx + 0x2CD) = LO8(eax);
    MEM32(ecx + 0x268) = eax;
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B7B47u); RECOMP_ABI_CALL(0x0002E3D0u, sub_0002E3D0); /* call 0x0002E3D0 */

loc_000B7B47: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7B60
 * Original: 0x000B7B60 - 0x000B7C5C (252 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7B60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B7B69u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_000B7B69: ;
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B7B78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7B78: ;
    PUSH32(esp, 0x000B7B7Du); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_000B7B7D: ;
    edi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B7B8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7B8D: ;
    SET_LO8(ecx, MEM8(esi + 0x2C9));
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7C09; /* je: equal / zero */

loc_000B7B9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7C09; /* je: equal / zero */

loc_000B7BA0: ;
    SET_LO8(eax, MEM8(esi + 0x2CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7BB3; /* jne: not equal / not zero */

loc_000B7BAA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7C57; /* je: equal / zero */

loc_000B7BB3: ;
    _fa = (uint32_t)(MEM8(esi + 0x2CC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2CC), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7BF4; /* je: equal / zero */

loc_000B7BBC: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000B7BCAu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000B7BCA: ;
    eax = MEM32(esp + 0x10);
    ecx = esi + 0x260;
    MEM32(esi + 0x268) = eax;
    PUSH32(esp, 0x000B7BDFu); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_000B7BDF: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000B7BECu); RECOMP_ABI_CALL(0x00066B40u, sub_00066B40); /* call 0x00066B40 */

loc_000B7BEC: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000B7BF4: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B7C00u); RECOMP_ABI_CALL(0x000B6970u, sub_000B6970); /* call 0x000B6970 */

loc_000B7C00: ;
    ecx = esi;
    PUSH32(esp, 0x000B7C07u); RECOMP_ABI_CALL(0x000B7160u, sub_000B7160); /* call 0x000B7160 */

loc_000B7C07: ;
    goto loc_000B7C31;

loc_000B7C09: ;
    SET_LO8(eax, MEM8(esi + 0x2CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7C31; /* je: equal / zero */

loc_000B7C13: ;
    _fa = (uint32_t)(MEM8(esi + 0x2CC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2CC), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B7C31; /* jae: above or equal (unsigned >=) */

loc_000B7C1C: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C2), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B7C31; /* jae: above or equal (unsigned >=) */

loc_000B7C25: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B7C31u); RECOMP_ABI_CALL(0x000B7470u, sub_000B7470); /* call 0x000B7470 */

loc_000B7C31: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(eax) = edi;
    PUSH32(esp, 0x000B7C3Fu); RECOMP_ABI_CALL(0x00027910u, sub_00027910); /* call 0x00027910 */

loc_000B7C3F: ;
    PUSH32(esp, 0x000B7C44u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_000B7C44: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B7C4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7C4B: ;
    PUSH32(esp, 0x000B7C50u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_000B7C50: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B7C57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7C57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B7C60
 * Original: 0x000B7C60 - 0x000B7C79 (25 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7C60(void)
{

loc_000B7C60: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, 0);
    MEM32(eax) = edx;
    PUSH32(esp, 0x000B7C76u); RECOMP_ABI_CALL(0x000B7B60u, sub_000B7B60); /* call 0x000B7B60 */

loc_000B7C76: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B7C80
 * Original: 0x000B7C80 - 0x000B7CDC (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7C80: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B7C8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B7C8F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B7C9Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000B7C9A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B7CD5; /* je: equal / zero */

loc_000B7CA1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000B7CC5u); RECOMP_ABI_CALL(0x000B7730u, sub_000B7730); /* call 0x000B7730 */

loc_000B7CC5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000B7CCEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000B7CCE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000B7CD5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B7CE0
 * Original: 0x000B7CE0 - 0x000B7CF7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7CE0(void)
{

loc_000B7CE0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x1E4) = ecx;
    MEM32(eax + 0x1E8) = ecx;
    MEM32(eax + 0x1EC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7D00
 * Original: 0x000B7D00 - 0x000B7D5D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7D00: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x968) = esi;
    MEM32(ecx + 0x96C) = esi;
    MEM32(ecx + 0x970) = esi;
    edx = 0; /* xor self */
    goto loc_000B7D20;

    /* nop */

loc_000B7D20: ;
    eax = MEM32(ecx + 0x968);
    edi = MEM32(ecx + 0x970);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    MEM32(ecx + 0x968) = eax;
    MEM32(ecx + 0x970) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B7D4C; /* jl: less (signed <) */

loc_000B7D3F: ;
    MEM32(ecx + 0x968) = esi;
    eax = 0x77;
    goto loc_000B7D4D;

loc_000B7D4C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B7D4D: ;
    MEM32(ecx + eax * 4 + 0x784) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x78 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7D20; /* jl: less (signed <) */

loc_000B7D5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7D60
 * Original: 0x000B7D60 - 0x000B7D6C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7D60(void)
{

loc_000B7D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B7D68u); RECOMP_ABI_CALL(0x000B7CE0u, sub_000B7CE0); /* call 0x000B7CE0 */

loc_000B7D68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7D70
 * Original: 0x000B7D70 - 0x000B7DBB (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x78;
    goto loc_000B7D80;

    /* nop */

loc_000B7D80: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B7D80; /* jne: not equal / not zero */

loc_000B7D8C: ;
    ecx = esi + 0x784;
    PUSH32(esp, 0x000B7D97u); RECOMP_ABI_CALL(0x000B7D60u, sub_000B7D60); /* call 0x000B7D60 */

loc_000B7D97: ;
    eax = 0; /* xor self */
    ecx = esi + 0x974;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    ecx = esi;
    MEM32(esi + 0x984) = eax;
    PUSH32(esp, 0x000B7DB7u); RECOMP_ABI_CALL(0x000B7D00u, sub_000B7D00); /* call 0x000B7D00 */

loc_000B7DB7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7DC0
 * Original: 0x000B7DC0 - 0x000B7DCE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7DC0(void)
{

loc_000B7DC0: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    eax = eax + ecx + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B7DD0
 * Original: 0x000B7DD0 - 0x000B7DD8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7DD0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000B7DE0(); return; /* tail jmp 0x000B7DE0 */

}

/**
 * sub_000B7DE0
 * Original: 0x000B7DE0 - 0x000B7E52 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7DE0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x974;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x968);
    edi = MEM32(eax + 0x970);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x78 (32-bit) */
    MEM32(eax + 0x968) = ecx;
    MEM32(eax + 0x970) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B7E38; /* jl: less (signed <) */

loc_000B7E27: ;
    MEM32(eax + 0x968) = 0;
    ecx = 0x77;
    goto loc_000B7E39;

loc_000B7E38: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B7E39: ;
    MEM32(eax + ecx * 4 + 0x784) = esi;
    ecx = MEM32(eax + 0x984);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x984) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000B7F00
 * Original: 0x000B7F00 - 0x000B80FD (509 bytes, 162 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7F00: ;
    esp = esp - 0x94;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x9C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B80E5; /* je: equal / zero */

loc_000B7F26: ;
    edx = MEM32(esp + 0xA0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B80E5; /* je: equal / zero */

loc_000B7F35: ;
    ecx = MEM32(esp + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B80E5; /* jle: less or equal (signed <=) */

loc_000B7F44: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ecx >> 2;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    ebx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B80AC; /* je: equal / zero */

loc_000B7F65: ;
    ecx = MEM32(esp + 0xB0);
    eax = ebx;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B80AC; /* jge: greater or equal (signed >=) */

loc_000B7F78: ;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B80DF; /* jne: not equal / not zero */

loc_000B7F83: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0; /* xor self */

loc_000B7F86: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B7F90u); RECOMP_ABI_CALL(0x00341FC7u, sub_00341FC7); /* call 0x00341FC7 */

loc_000B7F90: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7FA2; /* jne: not equal / not zero */

loc_000B7F97: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0x2B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7FAD; /* jne: not equal / not zero */

loc_000B7F9D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B7FAD; /* jge: greater or equal (signed >=) */

loc_000B7FA2: ;
    SET_LO8(edx, MEM8(ebp));
    MEM8(esp + esi + 0x1C) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B7F86;

loc_000B7FAD: ;
    MEM8(esp + esi + 0x1C) = 0;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B809B; /* je: equal / zero */

loc_000B7FBE: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x000B7FD1u); RECOMP_ABI_CALL(0x00013EB0u, sub_00013EB0); /* call 0x00013EB0 */

loc_000B7FD1: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(edi + 8);
    esi = edi + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B7FE8u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000B7FE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7FF3; /* jne: not equal / not zero */

loc_000B7FEF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B804B; /* je: equal / zero */

loc_000B7FF3: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B8004u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8004: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8037; /* jne: not equal / not zero */

loc_000B8011: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x000B801Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B801A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8020u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B8020: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D43A8);
    eax = esp + 0x48;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8032u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000B8032: ;
    esp = esp + 0x14;
    goto loc_000B8064;

loc_000B8037: ;
    PUSH32(esp, 0x000B803Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B803C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D439C);
    PUSH32(esp, 0x64);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    goto loc_000B805C;

loc_000B804B: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D4390);
    PUSH32(esp, 0x64);
    eax = esp + 0x48;
    PUSH32(esp, eax);

loc_000B805C: ;
    PUSH32(esp, 0x000B8061u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000B8061: ;
    esp = esp + 0x10;

loc_000B8064: ;
    ecx = MEM32(esp + 0xAC);
    eax = MEM32(esp + 0xB0);
    ecx = ecx - ebx;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B8082u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_000B8082: ;
    eax = esp + 0x48;
    esp = esp + 0xC;
    edx = eax + 1;
    /* nop */

loc_000B8090: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8090; /* jne: not equal / not zero */

loc_000B8097: ;
    eax = eax - edx;
    ebx = ebx + eax;

loc_000B809B: ;
    edx = MEM32(esp + 0xAC);

loc_000B80A2: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7F65; /* jne: not equal / not zero */

loc_000B80AC: ;
    eax = MEM32(esp + 0xB0);
    POP32(esp, edi);
    MEM8(edx + eax + -1) = 0;
    eax = edx;
    POP32(esp, esi);
    edx = eax + 1;
    POP32(esp, ebx);

loc_000B80C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B80C0; /* jne: not equal / not zero */

loc_000B80C7: ;
    eax = eax - edx;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, 0x000B80D6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B80D6: ;
    esp = esp + 0x94;
    esp += 16; return; /* ret 12 */

loc_000B80DF: ;
    MEM8(ebx) = LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B80A2;

loc_000B80E5: ;
    ecx = MEM32(esp + 0x94);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    PUSH32(esp, 0x000B80F4u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B80F4: ;
    esp = esp + 0x94;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8100
 * Original: 0x000B8100 - 0x000B83F5 (757 bytes, 191 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8100: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35031C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xAC));
    esp = esp - 0xAC;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, ebx);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000B8129u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000B8129: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D43BC);
    ecx = esp + 0xC;
    MEM32(esp + 0xC0) = 0;
    PUSH32(esp, 0x000B8144u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B8144: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    MEM8(esp + 0xC4) = 1;
    PUSH32(esp, 0x000B815Eu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000B815E: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = esp + 4;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0xB8) = 0;
    PUSH32(esp, 0x000B8177u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B8177: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B81A5; /* je: equal / zero */

loc_000B817B: ;
    ecx = esp + 0x6C;
    MEM32(esp + 0xB8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B818Fu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000B818F: ;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xAC);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xB8)) >> 32) & 1);
    esp = esp + 0xB8;
    esp += 4; return; /* ret */

loc_000B81A5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D43B4);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000B81B6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B81B6: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esp + 0x74;
    MEM8(esp + 0xC0) = 2;
    PUSH32(esp, 0x000B81CCu); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_000B81CC: ;
    ecx = esp + 8;
    ebp = eax;
    MEM8(esp + 0xBC) = 0;
    PUSH32(esp, 0x000B81DFu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B81DF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B820E; /* jne: not equal / not zero */

loc_000B81E3: ;
    ecx = esp + 0x70;
    MEM32(esp + 0xBC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B81F7u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000B81F7: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xAC);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xB8)) >> 32) & 1);
    esp = esp + 0xB8;
    esp += 4; return; /* ret */

loc_000B820E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2D78);
    ecx = esp + 0x50;
    PUSH32(esp, 0x000B8220u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B8220: ;
    PUSH32(esp, 0);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM8(esp + 0xCC) = 3;
    PUSH32(esp, 0x000B8236u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B8236: ;
    ecx = esp + 0x48;
    ebx = eax;
    MEM8(esp + 0xC4) = 0;
    PUSH32(esp, 0x000B8249u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B8249: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B83C8; /* je: equal / zero */

loc_000B8251: ;
    esi = MEM32(ebx + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    esi = eax;
    if ((eax == 0)) goto loc_000B8388; /* je: equal / zero */

loc_000B8267: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000B8277u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B8277: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0xC8) = 4;
    PUSH32(esp, 0x000B828Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B828B: ;
    ecx = esp + 0x28;
    edi = eax;
    MEM8(esp + 0xC4) = 0;
    PUSH32(esp, 0x000B829Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B829E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B8388; /* je: equal / zero */

loc_000B82A6: ;
    ecx = edi;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x000B82BDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B82BD: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000B82C7u); RECOMP_ABI_CALL(0x00013EB0u, sub_00013EB0); /* call 0x00013EB0 */

loc_000B82C7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D0618);
    ecx = esp + 0x70;
    PUSH32(esp, 0x000B82D7u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B82D7: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0xC8) = 5;
    PUSH32(esp, 0x000B82EBu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B82EB: ;
    ecx = esp + 0x68;
    edi = eax;
    MEM8(esp + 0xC4) = 0;
    PUSH32(esp, 0x000B82FEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B82FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B831A; /* je: equal / zero */

loc_000B8302: ;
    ecx = edi;
    PUSH32(esp, 0x000B8309u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B8309: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B830Fu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B830F: ;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_000B831A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D061C);
    ecx = esp + 0x40;
    PUSH32(esp, 0x000B832Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B832A: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0xC8) = 6;
    PUSH32(esp, 0x000B833Eu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B833E: ;
    ecx = esp + 0x38;
    esi = eax;
    MEM8(esp + 0xC4) = 0;
    PUSH32(esp, 0x000B8351u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B8351: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B8369; /* je: equal / zero */

loc_000B8355: ;
    ecx = esi;
    PUSH32(esp, 0x000B835Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B835C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8362u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B8362: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_000B8369: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(eax + 0x994)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x994), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B83C8; /* je: equal / zero */

loc_000B8376: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = eax + 4;
    PUSH32(esp, 0x000B8388u); RECOMP_ABI_CALL(0x000B8400u, sub_000B8400); /* call 0x000B8400 */

loc_000B8388: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2D78);
    ecx = esp + 0x60;
    PUSH32(esp, 0x000B8398u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B8398: ;
    PUSH32(esp, ebx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM8(esp + 0xCC) = 7;
    PUSH32(esp, 0x000B83ADu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B83AD: ;
    ecx = esp + 0x58;
    ebx = eax;
    MEM8(esp + 0xC4) = 0;
    PUSH32(esp, 0x000B83C0u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B83C0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8251; /* jne: not equal / not zero */

loc_000B83C8: ;
    ecx = esp + 0x78;
    MEM32(esp + 0xC4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B83DCu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000B83DC: ;
    ecx = MEM32(esp + 0xBC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xB8)) >> 32) & 1);
    esp = esp + 0xB8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8400
 * Original: 0x000B8400 - 0x000B8432 (50 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8400(void)
{

loc_000B8400: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000B840Du); RECOMP_ABI_CALL(0x000B8480u, sub_000B8480); /* call 0x000B8480 */

loc_000B840D: ;
    ecx = esi;
    PUSH32(esp, 0x000B8414u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_000B8414: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    eax = esi + edx * 8 + 0x994;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B842Bu); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_000B842B: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B8440
 * Original: 0x000B8440 - 0x000B8480 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8440(void)
{

loc_000B8440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B844Du); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000B844D: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8480
 * Original: 0x000B8480 - 0x000B84CA (74 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0xC;
    ecx = ebx;
    PUSH32(esp, 0x000B8490u); RECOMP_ABI_CALL(0x000B84D0u, sub_000B84D0); /* call 0x000B84D0 */

loc_000B8490: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    esi = ebp;
    PUSH32(esp, 4);
    esi = esi << 4;
    PUSH32(esp, eax);
    ecx = esi + ebx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B84A8u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_000B84A8: ;
    MEM32(edi + 8) = ebp;
    esp = esp + 0xC;
    eax = 0x3FFFFFFF;
    MEM32(esi + edi + 0x10) = eax;
    MEM32(esi + edi + 0x14) = eax;
    MEM32(esi + edi + 0xC) = 0x7FFFFFFF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B84D0
 * Original: 0x000B84D0 - 0x000B851A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B84D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B84D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x96C);
    eax = esi + 0x784;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x974);
    edx = esi + edx * 4 + 0x974;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x000B850Eu); RECOMP_ABI_CALL(0x000B8520u, sub_000B8520); /* call 0x000B8520 */

loc_000B850E: ;
    MEM32(esi + 0x984) = MEM32(esi + 0x984) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x984)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8520
 * Original: 0x000B8520 - 0x000B854A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8520: ;
    eax = MEM32(ecx + 0x1E8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1E8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    eax = MEM32(ecx + 0x1EC);
    if (CMP_L(_fas, _fbs)) goto loc_000B8542; /* jl: less (signed <) */

loc_000B8538: ;
    MEM32(ecx + 0x1E8) = 0;

loc_000B8542: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1EC) = eax;
    esp += 4; return; /* ret */

}



/**
 * sub_000B85D0
 * Original: 0x000B85D0 - 0x000B85E2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B85D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B85D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B85DAu); RECOMP_ABI_CALL(0x00078D40u, sub_00078D40); /* call 0x00078D40 */

loc_000B85DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B85F0
 * Original: 0x000B85F0 - 0x000B863F (79 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B85F0(void)
{

loc_000B85F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350338);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3D43FC;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000B8620u); RECOMP_ABI_CALL(0x00074DF0u, sub_00074DF0); /* call 0x00074DF0 */

loc_000B8620: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B862Fu); RECOMP_ABI_CALL(0x00075970u, sub_00075970); /* call 0x00075970 */

loc_000B862F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8640
 * Original: 0x000B8640 - 0x000B8646 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8640(void)
{

loc_000B8640: ;
    eax = 0x4D8124;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8650
 * Original: 0x000B8650 - 0x000B8656 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8650(void)
{

loc_000B8650: ;
    eax = 0x3D4590;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8660
 * Original: 0x000B8660 - 0x000B8667 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8660(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B8660: ;
    fp_push(MEMF(ecx + 0x244)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8670
 * Original: 0x000B8670 - 0x000B868E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8670: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B8678u); RECOMP_ABI_CALL(0x000B85F0u, sub_000B85F0); /* call 0x000B85F0 */

loc_000B8678: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8688; /* je: equal / zero */

loc_000B867F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B8685u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000B8685: ;
    esp = esp + 4;

loc_000B8688: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8690
 * Original: 0x000B8690 - 0x000B8696 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8690(void)
{

loc_000B8690: ;
    eax = 0x278;
    esp += 4; return; /* ret */

}

/**
 * sub_000B86A0
 * Original: 0x000B86A0 - 0x000B8890 (496 bytes, 147 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B86A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B86A0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B86ACu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000B86AC: ;
    fp_pop(); /* fstp st(0) */
    edi = MEM32(esp + 0x24);
    PUSH32(esp, 0x000B86B7u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000B86B7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x414)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x414] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8888; /* jne: not equal / not zero */

loc_000B86C8: ;
    fp_push(MEMF(edi + 0x108)); /* fld float */
    PUSH32(esp, ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D37D0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d37d0] */
    PUSH32(esp, ebp);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8783; /* jp: parity */

loc_000B86E1: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(edi + 0x28);
    ebx = edi + 0x20;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x14) = ecx;
    ecx = esi;
    MEM32(esp + 0x18) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000B8700u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8700: ;
    fp_push(MEMF(eax + 0x14)); /* fld float */
    ecx = MEM32(esi + 0x260);
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = eax + 0xC;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000B8729u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8729: ;
    PUSH32(esp, 0x000B872Eu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000B872E: ;
    esi = eax;
    PUSH32(esp, 0x000B8735u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000B8735: ;
    edx = MEM32(esi);
    PUSH32(esp, 0x43160000);
    PUSH32(esp, 0x44A28000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebp = eax;
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D45B0);
    ecx = esi;
    MEM32(esp + 0x48) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B875Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B875E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x000B8768u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8768: ;
    PUSH32(esp, 0x000B876Du); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000B876D: ;
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEMF(edi + 0x414) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

loc_000B8783: ;
    eax = MEM32(edi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000B8886; /* je: equal / zero */

loc_000B8795: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000B879Eu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000B879E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8886; /* je: equal / zero */

loc_000B87A6: ;
    ecx = MEM32(edi + 0x104);
    eax = MEM32(edi + 0x100);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x000B87CBu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000B87CB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8324)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8324] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8875; /* jne: not equal / not zero */

loc_000B87DC: ;
    PUSH32(esp, 0x000B87E1u); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000B87E1: ;
    ebx = eax;
    PUSH32(esp, 0x000B87E8u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B87E8: ;
    edx = MEM32(ebx);
    ebp = eax;
    eax = MEM32(esi + 0x264);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B87F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B87F8: ;
    fp_top() = fp_top() + MEMF(esi + 0x254); /* fadd dword ptr [esi + 0x254] */
    edx = MEM32(ebp);
    ecx = ebp;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000B880Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B880D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8875; /* jne: not equal / not zero */

loc_000B8818: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x24);
    edx = MEM32(edi + 0x28);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x20) = ecx;
    ecx = esi;
    MEM32(esp + 0x24) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000B8834u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8834: ;
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    edx = MEM32(esi);
    eax = eax + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x264);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000B8860u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8860: ;
    PUSH32(esp, 0x000B8865u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B8865: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000B886Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B886F: ;
    MEMF(esi + 0x254) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B8875: ;
    PUSH32(esp, 0x000B887Au); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000B887A: ;
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    MEMF(edi + 0x414) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B8886: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B8888: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8890
 * Original: 0x000B8890 - 0x000B88BB (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8890(void)
{

loc_000B8890: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B88C0
 * Original: 0x000B88C0 - 0x000B891F (95 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B88C0(void)
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

loc_000B88C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B891B; /* je: equal / zero */

loc_000B88CD: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000B88D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B88D3: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000B88DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B88DC: ;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    eax = eax + 0xC;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    POP32(esp, edi);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B891B; /* jne: not equal / not zero */

loc_000B8914: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B891B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B8920
 * Original: 0x000B8920 - 0x000B8AFC (476 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B8920: ;
    esp = esp - 0x124;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x240);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x128) = eax;
    MEM8(esp + 0x28) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000B894C; /* jne: not equal / not zero */

loc_000B8945: ;
    eax = 0x3C806C;
    goto loc_000B8962;

loc_000B894C: ;
    PUSH32(esp, 0x000B8951u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B8951: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000B8962: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000B896Fu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_000B896F: ;
    edi = MEM32(esi + 0x240);
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8996; /* je: equal / zero */

loc_000B897C: ;
    PUSH32(esp, 0x000B8981u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B8981: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x4008;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B89DF; /* je: equal / zero */

loc_000B8996: ;
    edi = MEM32(esi + 0x240);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B89DF; /* je: equal / zero */

loc_000B89A0: ;
    PUSH32(esp, 0x000B89A5u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B89A5: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    SET_LO8(ecx, MEM8(edx + eax + 0x4008));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = edx + eax + 0x4008;
    if (TEST_Z(_fa, _fb)) goto loc_000B89DF; /* je: equal / zero */

loc_000B89C1: ;
    PUSH32(esp, 0x000B89C6u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_000B89C6: ;
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B89D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B89D7: ;
    edx = MEM32(eax);
    MEM32(esi + 0x248) = edx;

loc_000B89DF: ;
    PUSH32(esp, 0x000B89E4u); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_000B89E4: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B89EFu); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_000B89EF: ;
    eax = MEM32(esi + 0x248);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8AD0; /* je: equal / zero */

loc_000B8A00: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8AE5; /* je: equal / zero */

loc_000B8A0C: ;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    MEM32(esi + 0x250) = esi;
    MEM32(esp + 0x10) = 0x47C35000;
    MEM32(esp + 0x14) = 0x47C35000;
    MEM32(esp + 0x18) = 0x47C35000;
    MEM32(esp + 0x1C) = 0xC7C35000u;
    MEM32(esp + 0x20) = 0xC7C35000u;
    MEM32(esp + 0x24) = 0xC7C35000u;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B8A51u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8A51: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B8A5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8A5A: ;
    ecx = MEM32(esi + 0x248);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B8A68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8A68: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B8A71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8A71: ;
    ecx = MEM32(esi + 0x258);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B8A7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8A7F: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B8A88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8A88: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B8A8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8A8F: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000B8A98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8A98: ;
    edx = MEM32(eax);
    ecx = esi + 0x24C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B8AA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8AA6: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000B8AB2u); RECOMP_ABI_CALL(0x00074DA0u, sub_00074DA0); /* call 0x00074DA0 */

loc_000B8AB2: ;
    ecx = esi;
    PUSH32(esp, 0x000B8AB9u); RECOMP_ABI_CALL(0x00074E60u, sub_00074E60); /* call 0x00074E60 */

loc_000B8AB9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, 0x000B8AC9u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B8AC9: ;
    esp = esp + 0x124;
    esp += 4; return; /* ret */

loc_000B8AD0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8AE5; /* je: equal / zero */

loc_000B8AD8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B8AE2u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_000B8AE2: ;
    esp = esp + 4;

loc_000B8AE5: ;
    ecx = MEM32(esp + 0x128);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x000B8AF5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B8AF5: ;
    esp = esp + 0x124;
    esp += 4; return; /* ret */

}

/**
 * sub_000B8B00
 * Original: 0x000B8B00 - 0x000B8B18 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8B00(void)
{

loc_000B8B00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000B8B0Du); RECOMP_ABI_CALL(0x00078640u, sub_00078640); /* call 0x00078640 */

loc_000B8B0D: ;
    ecx = esi;
    PUSH32(esp, 0x000B8B14u); RECOMP_ABI_CALL(0x000B8920u, sub_000B8920); /* call 0x000B8920 */

loc_000B8B14: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B8B20
 * Original: 0x000B8B20 - 0x000B90BC (1436 bytes, 369 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B8B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x000B8B3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8B3C: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 0x194);
    edx = MEM32(eax + 0x25C);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8B5Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B8B5C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000B8B66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8B66: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx + 4);
    fp_push(MEMF(eax + 0x270)); /* fld float */
    ecx = MEM32(eax + 0x274);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    MEM32(esp + 0x2C) = ecx;
    fp_push(MEMF(eax + 0x270)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B8BC2; /* jnp: not parity */

loc_000B8B92: ;
    fp_top() = fp_top() / MEMF(esp + 0x14); /* fdiv dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8BA3u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B8BA3: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = MEMF(esp + 0x18) - fp_top(); /* fsubr dword ptr [esp + 0x18] */
    fp_push(MEMD(0x3D45C8)); /* fld double */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8BBAu); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_000B8BBA: ;
    fp_top() = fp_top() + MEMF(0x4D8110); /* fadd dword ptr [0x4d8110] */
    goto loc_000B8BDC;

loc_000B8BC2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * MEMF(0x3C9760); /* fmul dword ptr [0x3c9760] */
    fp_top() = fp_top() + MEMF(0x4D8110); /* fadd dword ptr [0x4d8110] */
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */

loc_000B8BDC: ;
    edx = MEM32(ebx + 4);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(edx + 0x274)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B8C2C; /* jnp: not parity */

loc_000B8BF8: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x14); /* fdiv dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8C0Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B8C0D: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = MEMF(esp + 0xC) - fp_top(); /* fsubr dword ptr [esp + 0xc] */
    fp_push(MEMD(0x3D45C8)); /* fld double */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8C24u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_000B8C24: ;
    fp_top() = fp_top() + MEMF(0x4D8110); /* fadd dword ptr [0x4d8110] */
    goto loc_000B8C4A;

loc_000B8C2C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA9D8); /* fmul dword ptr [0x3ca9d8] */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = fp_top() * MEMF(0x3CBDA0); /* fmul dword ptr [0x3cbda0] */
    fp_top() = fp_top() + MEMF(0x4D8110); /* fadd dword ptr [0x4d8110] */
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */

loc_000B8C4A: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 0x13) = 0;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8C62u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B8C62: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x1C); /* fdiv dword ptr [esp + 0x1c] */
    ecx = MEM32(ebx + 4);
    edi = ZX8(LO8(eax));
    eax = MEM32(ecx);
    edi = edi << 0x18;
    edi = edi | 0xFFFFFF;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000B8C84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8C84: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    eax = MEM32(ebx + 4);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    eax = eax + 0x20;
    MEM32(esp + 0xCC) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xD8) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x70) = ecx;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xCC); /* fadd dword ptr [esp + 0xcc] */
    MEM32(esp + 0x74) = edx;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    esp = esp - 8;
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 3) & 7]; /* fadd st(3) */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x7C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x50); /* fmul dword ptr [esp + 0x50] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8CFDu); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_000B8CFD: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xE0)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xD4); /* fsub dword ptr [esp + 0xd4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8D23u); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_000B8D23: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_top() = fp_top() / MEMF(esp + 0x44); /* fdiv dword ptr [esp + 0x44] */
    esi = MEM32(ebp + 8);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    esp = esp + 8;
    MEM32(esp + 0x40) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x20); /* fdiv dword ptr [esp + 0x20] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x18); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B8D70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8D70: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    MEM32(esp + 0x18) = 0;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B90AC; /* jp: parity */

loc_000B8D8D: ;
    /* nop */

loc_000B8D90: ;
    ecx = MEM32(esp + 0x30);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edx = MEM32(esp + 0x34);
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x7C) = edx;
    edx = eax;
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    MEM32(esp + 0x78) = ecx;
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x8C) = edx;
    edx = eax;
    MEM32(esp + 0x50) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B8E01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8E01: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000B8E16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8E16: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    eax = MEM32(esp + 0x78);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(esp + 0x80);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esp + 0x84);
    MEM32(esp + 0x9C) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x94) = ecx;
    ecx = MEM32(esp + 0x88);
    MEM32(esp + 0x98) = edx;
    edx = MEM32(esp + 0x8C);
    MEM32(esp + 0x68) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 0xA0) = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0xA4) = edx;
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x14) = 0;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8F1A; /* jp: parity */

loc_000B8EA1: ;
    fp_push(MEMF(esp + 0x90)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x98;
    fp_push(MEMF(esp + 0xA4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    ecx = esi;
    MEMF(esp + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x38); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x38); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B8EF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8EF2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B8F07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8F07: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B8EA1; /* jnp: not parity */

loc_000B8F1A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8F1Fu); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_000B8F1F: ;
    ecx = MEM32(ebx + 4);
    ecx = MEM32(ecx + 0x268);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B8F30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8F30: ;
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B8F51; /* jp: parity */

loc_000B8F47: ;
    MEM32(esp + 0xC) = 0;
    goto loc_000B8F6A;

loc_000B8F51: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8F6A; /* jne: not equal / not zero */

loc_000B8F62: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_000B8F6A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8F6Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B8F6F: ;
    edx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xA8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8F82u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000B8F82: ;
    MEMF(esp + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x108); PUSH32(esp, 0x000B8F95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B8F95: ;
    ecx = MEM32(esp + 0xA8);
    fp_top() = fp_top() * MEMF(ecx + 0x26C); /* fmul dword ptr [ecx + 0x26c] */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    fp_top() = fp_top() * MEMF(0x3C93C0); /* fmul dword ptr [0x3c93c0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xAC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B9056; /* jne: not equal / not zero */

loc_000B8FC2: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B8FFD; /* jne: not equal / not zero */

loc_000B8FCA: ;
    ecx = ecx + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8FD8u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000B8FD8: ;
    edx = MEM32(eax);
    MEM32(esp + 0xB8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xBC) = ecx;
    edx = MEM32(eax + 8);
    esp = esp + 8;
    MEM32(esp + 0xB8) = edx;
    MEM8(esp + 0x13) = 1;

loc_000B8FFD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9002u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000B9002: ;
    fp_top() = fp_top() * MEMF(esp + 0x48); /* fmul dword ptr [esp + 0x48] */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0xBC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B9016u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000B9016: ;
    eax = MEM32(esp + 0x38);
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0xC4) = eax;
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    eax = esp + 0xC4;
    MEMF(esp + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x268);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000B9056u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9056: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0xA4;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    ecx = esi;
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B9083u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9083: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B9095u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9095: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B8D90; /* jnp: not parity */

loc_000B90AC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B90B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B90B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B90C0
 * Original: 0x000B90C0 - 0x000B938E (718 bytes, 251 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B90C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B90C0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    ebx = esi + 4;
    MEM32(esp + 0x18) = eax;
    ecx = ebx;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(edi);
    PUSH32(esp, 0x3CAD3C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B9112u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9112: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B911Eu); RECOMP_ABI_CALL(0x00066E40u, sub_00066E40); /* call 0x00066E40 */

loc_000B911E: ;
    MEM32(ebx) = MEM32(ebx) | 0x40000;
    ecx = esi;
    PUSH32(esp, 0x000B912Bu); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000B912B: ;
    edx = MEM32(edi);
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D4634);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B913Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B913A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9153; /* je: equal / zero */

loc_000B913E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9153; /* je: equal / zero */

loc_000B9142: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9148u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B9148: ;
    MEMF(esi + 0x26C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000B9159;

loc_000B9153: ;
    MEM32(esi + 0x26C) = ebx;

loc_000B9159: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8508);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B9166u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9166: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B917C; /* je: equal / zero */

loc_000B916A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B917C; /* je: equal / zero */

loc_000B916E: ;
    PUSH32(esp, eax);
    ecx = esi + 0x240;
    PUSH32(esp, 0x000B917Au); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000B917A: ;
    goto loc_000B9182;

loc_000B917C: ;
    MEM32(esi + 0x240) = ebx;

loc_000B9182: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8464);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B918Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B918F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91A2; /* je: equal / zero */

loc_000B9193: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91A2; /* je: equal / zero */

loc_000B9197: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B919Du); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B919D: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000B91A7;

loc_000B91A2: ;
    PUSH32(esp, 0x3E19999A);

loc_000B91A7: ;
    ecx = esi;
    PUSH32(esp, 0x000B91AEu); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_000B91AE: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D4628);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B91BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B91BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91D9; /* je: equal / zero */

loc_000B91BF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B91D9; /* je: equal / zero */

loc_000B91C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B91C9u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B91C9: ;
    esp = esp + 4;
    PUSH32(esp, 0x000B91D1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B91D1: ;
    MEM32(esi + 0x258) = eax;
    goto loc_000B91DF;

loc_000B91D9: ;
    MEM32(esi + 0x258) = ebx;

loc_000B91DF: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D4618);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B91ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B91EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9205; /* je: equal / zero */

loc_000B91F0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9205; /* je: equal / zero */

loc_000B91F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B91FAu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B91FA: ;
    MEMF(esi + 0x244) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000B920F;

loc_000B9205: ;
    MEM32(esi + 0x244) = 0x3F800000;

loc_000B920F: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D4610);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B921Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B921C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9235; /* je: equal / zero */

loc_000B9220: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9235; /* je: equal / zero */

loc_000B9224: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B922Au); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B922A: ;
    MEMF(esi + 0x270) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000B923B;

loc_000B9235: ;
    MEM32(esi + 0x270) = ebx;

loc_000B923B: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D4608);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B9248u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9248: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9261; /* je: equal / zero */

loc_000B924C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9261; /* je: equal / zero */

loc_000B9250: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9256u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B9256: ;
    MEMF(esi + 0x274) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000B9267;

loc_000B9261: ;
    MEM32(esi + 0x274) = ebx;

loc_000B9267: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D45FC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000B9274u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9274: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B928D; /* je: equal / zero */

loc_000B9278: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B928D; /* je: equal / zero */

loc_000B927C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9282u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B9282: ;
    MEMF(esi + 0x25C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000B9297;

loc_000B928D: ;
    MEM32(esi + 0x25C) = 0x42F00000;

loc_000B9297: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D45EC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B92A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B92A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B92E0; /* je: equal / zero */

loc_000B92AC: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B92E0; /* je: equal / zero */

loc_000B92B0: ;
    PUSH32(esp, 0x000B92B5u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B92B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B92BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B92BC: ;
    ebp = eax;
    eax = MEM32(esi);
    ebx = MEM32(ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000B92CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B92CB: ;
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x000B92D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B92D6: ;
    MEM32(esi + 0x260) = eax;
    ebx = 0; /* xor self */
    goto loc_000B92E6;

loc_000B92E0: ;
    MEM32(esi + 0x260) = ebx;

loc_000B92E6: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D45E0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B92F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B92F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B932F; /* je: equal / zero */

loc_000B92FB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B932F; /* je: equal / zero */

loc_000B92FF: ;
    PUSH32(esp, 0x000B9304u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B9304: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B930Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B930B: ;
    ebp = eax;
    eax = MEM32(esi);
    ebx = MEM32(ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000B931Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B931A: ;
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x000B9325u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9325: ;
    MEM32(esi + 0x264) = eax;
    ebx = 0; /* xor self */
    goto loc_000B9335;

loc_000B932F: ;
    MEM32(esi + 0x264) = ebx;

loc_000B9335: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D45D0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B9342u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9342: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B937E; /* je: equal / zero */

loc_000B9348: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B937E; /* je: equal / zero */

loc_000B934D: ;
    PUSH32(esp, 0x000B9352u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B9352: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B9359u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9359: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000B9367u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9367: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x000B936Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B936E: ;
    POP32(esp, edi);
    MEM32(esi + 0x268) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_000B937E: ;
    POP32(esp, edi);
    MEM32(esi + 0x268) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9390
 * Original: 0x000B9390 - 0x000B93EC (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9390: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B939Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B939F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B93AAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000B93AA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B93E5; /* je: equal / zero */

loc_000B93B1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000B93D5u); RECOMP_ABI_CALL(0x000B93F0u, sub_000B93F0); /* call 0x000B93F0 */

loc_000B93D5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000B93DEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000B93DE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000B93E5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B93F0
 * Original: 0x000B93F0 - 0x000B9488 (152 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B93F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B93F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350338);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x000B9436u); RECOMP_ABI_CALL(0x00079B60u, sub_00079B60); /* call 0x00079B60 */

loc_000B9436: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3D43FC;
    MEM32(esi + 0x240) = eax;
    MEM32(esi + 0x248) = eax;
    MEM32(esi + 0x24C) = 0x3D4640;
    SET_LO8(edx, MEM8(esi + 0xC8));
    SET_LO8(edx, LO8(edx) | 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM8(esi + 0xC8) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000B9473; /* je: equal / zero */

loc_000B946B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000B9473u); RECOMP_ABI_CALL(0x000B90C0u, sub_000B90C0); /* call 0x000B90C0 */

loc_000B9473: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B9490
 * Original: 0x000B9490 - 0x000B949B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9490: ;
    MEM32(ecx) = 0x3D464C;
    g_seh_ebp = ebp; sub_00026B60(); return; /* tail jmp 0x00026B60 */

}

/**
 * sub_000B94A0
 * Original: 0x000B94A0 - 0x000B94B3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B94A0: ;
    SET_LO8(eax, MEM8(ecx + 0xF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B94B2; /* je: equal / zero */

loc_000B94AA: ;
    SET_LO8(eax, LO8(eax) & 0xFB);
    MEM8(ecx + 0xF0) = LO8(eax);

loc_000B94B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B94C0
 * Original: 0x000B94C0 - 0x000B94C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94C0(void)
{

loc_000B94C0: ;
    eax = 0x4D8158;
    esp += 4; return; /* ret */

}

/**
 * sub_000B94D0
 * Original: 0x000B94D0 - 0x000B94D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94D0(void)
{

loc_000B94D0: ;
    eax = 0x3D4744;
    esp += 4; return; /* ret */

}

/**
 * sub_000B94E0
 * Original: 0x000B94E0 - 0x000B94E7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B94E0: ;
    fp_push(MEMF(ecx + 0xD0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B94F0
 * Original: 0x000B94F0 - 0x000B94F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B94F0(void)
{

loc_000B94F0: ;
    SET_LO8(eax, MEM8(ecx + 0xF0));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9500
 * Original: 0x000B9500 - 0x000B951E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B9508u); RECOMP_ABI_CALL(0x000B9490u, sub_000B9490); /* call 0x000B9490 */

loc_000B9508: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9518; /* je: equal / zero */

loc_000B950F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B9515u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000B9515: ;
    esp = esp + 4;

loc_000B9518: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9520
 * Original: 0x000B9520 - 0x000B9559 (57 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9520: ;
    _fa = (uint32_t)(MEM8(ecx + 0xF0)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xF0), 0x10 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000B9553; /* je: equal / zero */

loc_000B952A: ;
    eax = MEM32(ecx + 0xEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ecx + 0xEC;
    if (TEST_Z(_fa, _fb)) goto loc_000B9553; /* je: equal / zero */

loc_000B953A: ;
    ecx = esi;
    PUSH32(esp, 0x000B9541u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000B9541: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9553; /* je: equal / zero */

loc_000B9545: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B9553; /* je: equal / zero */

loc_000B954D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B9553: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9560
 * Original: 0x000B9560 - 0x000B9566 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9560(void)
{

loc_000B9560: ;
    eax = 0xF4;
    esp += 4; return; /* ret */

}

/**
 * sub_000B9570
 * Original: 0x000B9570 - 0x000B979E (558 bytes, 174 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D03AC);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B958Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B958D: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D47E0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B959Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B959C: ;
    SET_LO8(ecx, MEM8(ebx + 0xF0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    eax = ebx + 0xD4;
    MEM8(ebx + 0xF0) = LO8(ecx);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D47D0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B95C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B95C7: ;
    edx = MEM32(ebp);
    esi = ebx + 0xD8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3D47C4);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B95DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B95DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B95EF; /* je: equal / zero */

loc_000B95DF: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */

loc_000B95EF: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D47B8);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000B95FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B95FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(ebx + 0xF0));
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM8(ebx + 0xF0) = LO8(edx);
    edx = MEM32(ebp);
    PUSH32(esp, 0x3D47AC);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B9629u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9629: ;
    SET_LO8(ecx, MEM8(ebx + 0xF0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebx + 0xF0) = LO8(ecx);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D47A0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B9652u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9652: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B96D0; /* je: equal / zero */

loc_000B9658: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B967D; /* je: equal / zero */

loc_000B965D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B9663u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000B9663: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B966Eu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B966E: ;
    ecx = eax;
    PUSH32(esp, 0x000B9675u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000B9675: ;
    MEM32(ebx + 0xDC) = eax;
    goto loc_000B9687;

loc_000B967D: ;
    MEM32(ebx + 0xDC) = 0;

loc_000B9687: ;
    esi = MEM32(ebx + 0xDC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B9698; /* jne: not equal / not zero */

loc_000B9691: ;
    esi = 0x3C806C;
    goto loc_000B96AE;

loc_000B9698: ;
    PUSH32(esp, 0x000B969Du); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B969D: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x4008;

loc_000B96AE: ;
    PUSH32(esp, edi);
    edi = 0x3C8C48;
    ecx = 5;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags != 0)) goto loc_000B96D0; /* je: equal / zero */

loc_000B96C0: ;
    PUSH32(esp, 0x3C806C);
    ecx = ebx + 0xDC;
    PUSH32(esp, 0x000B96D0u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000B96D0: ;
    eax = MEM32(ebp);
    ecx = ebx + 0xE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CCB3C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000B96E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B96E4: ;
    edx = MEM32(ebp);
    eax = ebx + 0xE4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D4790);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B96F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B96F8: ;
    edx = MEM32(ebp);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D4780);
    ecx = ebp;
    MEM32(esp + 0x18) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B9712u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9712: ;
    ecx = MEM32(esp + 0x10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0xE8) = ecx;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D4778);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B972Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B972C: ;
    SET_LO8(ecx, MEM8(ebx + 0xF0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebx + 0xF0) = LO8(ecx);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D4770);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B9755u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9755: ;
    SET_LO8(ecx, MEM8(ebx + 0xF0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebx + 0xF0) = LO8(ecx);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D4764);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000B977Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B977E: ;
    SET_LO8(ecx, MEM8(ebx + 0xF0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 6);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x40);
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, ebp);
    MEM8(ebx + 0xF0) = LO8(ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B97A0
 * Original: 0x000B97A0 - 0x000B98B0 (272 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B97A0(void)
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

loc_000B97A0: ;
    esp = esp - 0x18;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0xF0)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xF0), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B989E; /* je: equal / zero */

loc_000B97B3: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B984F; /* je: equal / zero */

loc_000B97BF: ;
    fp_push(MEMF(edi + 0xD8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D4644)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d4644] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B984F; /* jp: parity */

loc_000B97D2: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    eax = MEM32(edi + 0xD8);
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    ecx = MEM32(ecx + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0xC) = ecx;
    fp_top() = fp_top() - MEMF(edi + 0x20); /* fsub dword ptr [edi + 0x20] */
    ecx = esp + 4;
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x28); /* fsub dword ptr [edi + 0x28] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000B980Du); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000B980D: ;
    edx = edi + 0x2C;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B981Du); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000B981D: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    esp = esp + 8;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B989E; /* je: equal / zero */

loc_000B984F: ;
    eax = MEM32(edi + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B98A7; /* je: equal / zero */

loc_000B9859: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B9860u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_000B9860: ;
    esi = MEM32(edi + 0xDC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000B9873; /* jne: not equal / not zero */

loc_000B986C: ;
    eax = 0x3C806C;
    goto loc_000B9889;

loc_000B9873: ;
    PUSH32(esp, 0x000B9878u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B9878: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000B9889: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B9891u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9891: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000B98A7; /* jne: not equal / not zero */

loc_000B9897: ;
    MEM8(edi + 0xF0) = MEM8(edi + 0xF0) & 0xFB;

loc_000B989E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_000B98A7: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B98B0
 * Original: 0x000B98B0 - 0x000B9971 (193 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B98B0(void)
{

loc_000B98B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350358);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x000B98F6u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_000B98F6: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3D464C;
    MEM32(esi + 0xD0) = 0x3F000000;
    MEM32(esi + 0xD4) = 0x42F00000;
    MEM32(esi + 0xD8) = 0x40490FDB;
    MEM32(esi + 0xDC) = eax;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xE4) = 0x3E4CCCCD;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xEC) = eax;
    SET_LO8(edx, MEM8(esi + 0xF0));
    SET_LO8(edx, LO8(edx) & 0x8C);
    SET_LO8(edx, LO8(edx) | 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    MEM8(esi + 0xF0) = LO8(edx);
    PUSH32(esp, 0x000B995Cu); RECOMP_ABI_CALL(0x000B9570u, sub_000B9570); /* call 0x000B9570 */

loc_000B995C: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000B9980
 * Original: 0x000B9980 - 0x000B99DC (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9980: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B998Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B998F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B999Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000B999A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B99D5; /* je: equal / zero */

loc_000B99A1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000B99C5u); RECOMP_ABI_CALL(0x000B98B0u, sub_000B98B0); /* call 0x000B98B0 */

loc_000B99C5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000B99CEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000B99CE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000B99D5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B99E0
 * Original: 0x000B99E0 - 0x000B9A14 (52 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B99E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B99E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000B99EE; /* je: equal / zero */

loc_000B99E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B9A10; /* jne: not equal / not zero */

loc_000B99EE: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9A10; /* je: equal / zero */

loc_000B99F5: ;
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000B9A10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9A10: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000B9A20
 * Original: 0x000B9A20 - 0x000B9A7B (91 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9A20: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B9A31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9A31: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9A72; /* je: equal / zero */

loc_000B9A37: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x50);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B9A57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9A57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9A72; /* je: equal / zero */

loc_000B9A5B: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000B9A72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9A72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B9A80
 * Original: 0x000B9A80 - 0x000B9AF0 (112 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9A80(void)
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

loc_000B9A80: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B9A91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9A91: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9AE1; /* je: equal / zero */

loc_000B9A97: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x4C);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B9ABDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9ABD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B9AE1; /* je: equal / zero */

loc_000B9AC1: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000B9AD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9AD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 20; return; /* ret 16 */

loc_000B9AE1: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9AF0
 * Original: 0x000B9AF0 - 0x000B9BA5 (181 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9AF0(void)
{

loc_000B9AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B9AF9u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B9AF9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B9B00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B00: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi + 0xA0;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B9B13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B13: ;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x000B9B1Bu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B9B1B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B9B22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B22: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi + 0xE0;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B9B31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B31: ;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x000B9B39u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B9B39: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B9B40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B40: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi + 0x160;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B9B4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B4F: ;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000B9B57u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000B9B57: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B9B66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B66: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x000B9B6Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B9B6E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B9B75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B75: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi + 0x120;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B9B84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B84: ;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000B9B8Cu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000B9B8C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0x60;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B9B9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9B9B: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9BB0
 * Original: 0x000B9BB0 - 0x000B9C56 (166 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9BB0(void)
{

loc_000B9BB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x3D4834;
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x60) = LO8(ecx);
    MEM8(eax + 0xA0) = LO8(ecx);
    MEM8(eax + 0xE0) = LO8(ecx);
    MEM8(eax + 0x120) = LO8(ecx);
    MEM8(eax + 0x160) = LO8(ecx);
    MEM32(eax + 0x1A4) = ecx;
    MEM32(eax + 0x1A8) = ecx;
    MEM8(eax + 0x1A0) = 1;
    MEM32(eax + 0x1AC) = ecx;
    MEM32(eax + 0x1B0) = ecx;
    MEM32(eax + 0x1B4) = ecx;
    MEM32(eax + 0x1B8) = ecx;
    MEM32(eax + 0x1BC) = ecx;
    MEM16(eax + 0x1C4) = LO16(ecx);
    MEM16(eax + 0x1C6) = LO16(ecx);
    MEM16(eax + 0x1C8) = LO16(ecx);
    MEM32(eax + 0x1CC) = ecx;
    MEM32(eax + 0x1D0) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x1D4));
    SET_LO8(ecx, LO8(ecx) & 0xFB);
    MEM32(eax + 0x1C0) = 0x3F800000;
    MEM8(eax + 0x1D4) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9C60
 * Original: 0x000B9C60 - 0x000B9C67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C60(void)
{

loc_000B9C60: ;
    SET_LO8(eax, MEM8(ecx + 0x1A0));
    esp += 4; return; /* ret */

}

/**
 * sub_000B9C70
 * Original: 0x000B9C70 - 0x000B9C77 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B9C70: ;
    fp_push(MEMF(ecx + 0x1A4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9C80
 * Original: 0x000B9C80 - 0x000B9C87 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B9C80: ;
    fp_push(MEMF(ecx + 0x1A8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9C90
 * Original: 0x000B9C90 - 0x000B9C97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9C90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B9C90: ;
    fp_push(MEMF(ecx + 0x1B4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9CA0
 * Original: 0x000B9CA0 - 0x000B9CA7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9CA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B9CA0: ;
    fp_push(MEMF(ecx + 0x1B8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9CB0
 * Original: 0x000B9CB0 - 0x000B9CB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9CB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B9CB0: ;
    fp_push(MEMF(ecx + 0x1BC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9CC0
 * Original: 0x000B9CC0 - 0x000B9CC7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B9CC0: ;
    fp_push(MEMF(ecx + 0x1C0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9CD0
 * Original: 0x000B9CD0 - 0x000B9CE0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9CD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B9CD0: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x1C4);
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9CE0
 * Original: 0x000B9CE0 - 0x000B9CF0 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9CE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B9CE0: ;
    fp_push(MEMF(ecx + 0x1B0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B9CF0
 * Original: 0x000B9CF0 - 0x000B9CF8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9CF0(void)
{

loc_000B9CF0: ;
    SET_LO16(eax, MEM16(ecx + 0x1C6));
    esp += 4; return; /* ret */

}

/**
 * sub_000B9D00
 * Original: 0x000B9D00 - 0x000B9D07 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D00(void)
{

loc_000B9D00: ;
    eax = MEM32(ecx + 0x1CC);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9D10
 * Original: 0x000B9D10 - 0x000B9D17 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D10(void)
{

loc_000B9D10: ;
    eax = MEM32(ecx + 0x1D0);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9D20
 * Original: 0x000B9D20 - 0x000B9D29 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D20(void)
{

loc_000B9D20: ;
    SET_LO8(eax, MEM8(ecx + 0x1D4));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9D30
 * Original: 0x000B9D30 - 0x000B9D3B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D30(void)
{

loc_000B9D30: ;
    SET_LO8(eax, MEM8(ecx + 0x1D4));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9D40
 * Original: 0x000B9D40 - 0x000B9D4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D40(void)
{

loc_000B9D40: ;
    SET_LO8(eax, MEM8(ecx + 0x1D4));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B9D50
 * Original: 0x000B9D50 - 0x000B9E07 (183 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B9D50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350378);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x54));
    esp = esp - 0x54;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x54) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000B9DEA; /* je: equal / zero */

loc_000B9D7A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D482C);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1C)) >> 32) & 1);
    ecx = ecx + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D481C);
    eax = esp + 0x24;
    PUSH32(esp, 0x3D4888);
    PUSH32(esp, eax);
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x000B9D9Du); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000B9D9D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    PUSH32(esp, 2);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000B9DB0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B9DB0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x70) = 0;
    PUSH32(esp, 0x000B9DC8u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000B9DC8: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = esp + 8;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B9DE1u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B9DE1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000B9DEA; /* jne: not equal / not zero */

loc_000B9DE6: ;
    SET_LO8(eax, 1);
    goto loc_000B9DEC;

loc_000B9DEA: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */

loc_000B9DEC: ;
    ecx = MEM32(esp + 0x58);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x54);
    POP32(esp, esi);
    PUSH32(esp, 0x000B9E01u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B9E01: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
    esp = esp + 0x60;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9E10
 * Original: 0x000B9E10 - 0x000B9E3B (43 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B9E10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_000B9E34; /* jl: less (signed <) */

loc_000B9E1C: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B9E21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9E21: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B9E34; /* jge: greater or equal (signed >=) */

loc_000B9E25: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1D8);
    eax = esi + edi + 0x74;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B9E34: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B9E40
 * Original: 0x000B9E40 - 0x000BA2A1 (1121 bytes, 332 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B9E40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B9E40: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xE4));
    esp = esp - 0xE4;
    eax = MEM32(0x47A050);
    edx = MEM32(esp + 0xEC);
    MEM32(esp + 0xE0) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B9E62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9E62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000B9E80; /* jne: not equal / not zero */

loc_000B9E69: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    ecx = MEM32(esp + 0xE0);
    PUSH32(esp, 0x000B9E77u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B9E77: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xE4)) >> 32) & 1);
    esp = esp + 0xE4;
    esp += 32; return; /* ret 28 */

loc_000B9E80: ;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    eax = MEM32(esp + 0xF0);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x5BC9D4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(eax + 8) = edx;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xFC);
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x5BC9D4);
    MEM32(ebp + 4) = eax;
    ecx = MEM32(0x5BC9D8);
    eax = MEM32(esp + 0x100);
    MEM32(ebp + 8) = ecx;
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x5BC9D4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x5BC9D8);
    edx = esp + 0x30;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, edx);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x000B9EF6u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000B9EF6: ;
    edi = MEM32(esp + 0x100);
    eax = MEM32(edi + 0x34);
    ecx = MEM32(edi + 0x30);
    edx = MEM32(edi + 0x2C);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000B9F15u); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_000B9F15: ;
    eax = edi + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000B9F22u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000B9F22: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B9F28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9F28: ;
    edx = MEM32(0x485878);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x21)) >> 32) & 1);
    edx = edx + 0x21;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = MEM32(eax + edx * 4 + 0x14);
    eax = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    esi = esi & edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B9F52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9F52: ;
    edx = MEM32(0x499568);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x21)) >> 32) & 1);
    edx = edx + 0x21;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    ebx = 1;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _cf = 0; /* logical op clears CF */
    ebx = ebx & MEM32(eax + edx * 4 + 0x14);
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B9FF0; /* je: equal / zero */

loc_000B9F78: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x000B9F82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9F82: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B9FF0; /* je: equal / zero */

loc_000B9F87: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x000B9F91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9F91: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B9F98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9F98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B9FF0; /* je: equal / zero */

loc_000B9F9C: ;
    eax = MEM32(esp + 0x10C);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esi + eax * 8 + 0x590);
    eax = MEM32(ecx + 0x5C);
    ecx = MEM32(esp + 0x110);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B9FBF; /* je: equal / zero */

loc_000B9FBD: ;
    eax = ecx;

loc_000B9FBF: ;
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x000B9FCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B9FCF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B9FD5u); RECOMP_ABI_CALL(0x0012CAD0u, sub_0012CAD0); /* call 0x0012CAD0 */

loc_000B9FD5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000BA017; /* jne: not equal / not zero */

loc_000B9FDC: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B9FEBu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000B9FEB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    goto loc_000BA017;

loc_000B9FF0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000BA08C; /* je: equal / zero */

loc_000B9FF8: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x000BA002u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA002: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000BA08C; /* je: equal / zero */

loc_000BA00B: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x000BA015u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA015: ;
    edi = MEM32(eax);

loc_000BA017: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000BA08C; /* je: equal / zero */

loc_000BA01B: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x000BA024u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000BA024: ;
    ecx = MEM32(esp + 0xFC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = esp + 0xB4;
    PUSH32(esp, 0x3D4894);
    PUSH32(esp, edx);
    MEM8(esp + 0xBC) = 0;
    PUSH32(esp, 0x000BA047u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000BA047: ;
    eax = MEM32(edi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000BA051u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA051: ;
    edx = MEM32(eax);
    ecx = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000BA065u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA065: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000BA08C; /* je: equal / zero */

loc_000BA069: ;
    edx = esp + 0x30;
    eax = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, 0x000BA07Au); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_000BA07A: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000BA089u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000BA089: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_000BA08C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = MEM32(esp + 0x108);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000BA1D2; /* je: equal / zero */

loc_000BA0AF: ;
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000BA1D2; /* je: equal / zero */

loc_000BA0BC: ;
    ebx = MEM32(esp + 0x100);
    PUSH32(esp, ebx);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000BA0CDu); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_000BA0CD: ;
    eax = MEM32(esi + 0x318);
    ecx = MEM32(esi + 0x31C);
    edx = MEM32(esi + 0x320);
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x28) = ecx;
    ecx = esi;
    MEM32(esp + 0x2C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000BA0F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA0F6: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000BA10D; /* jp: parity */

loc_000BA107: ;
    fp_top() = fp_top() - MEMF(0x3CB244); /* fsub dword ptr [0x3cb244] */

loc_000BA10D: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = esp + 0x18;
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(ebx + 8); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA132u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000BA132: ;
    edx = MEM32(esi);
    fp_pop(); /* fstp st(0) */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000BA13Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA13B: ;
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    esi = MEM32(esp + 0x10);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BA156u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000BA156: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BA161u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000BA161: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000BA16Cu); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000BA16C: ;
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    ecx = ebp;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA193u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000BA193: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + 8); /* fmul dword ptr [ebp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8390)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8390] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000BA286; /* jp: parity */

loc_000BA1BF: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000BA1CDu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_000BA1CD: ;
    goto loc_000BA286;

loc_000BA1D2: ;
    ecx = esp + 0xB0;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000BA1E4u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000BA1E4: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000BA1F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA1F2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000BA1FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA1FD: ;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA208u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000BA208: ;
    edx = MEM32(esi);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000BA216u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA216: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000BA221u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA221: ;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA22Cu); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000BA22C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x000BA240u); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_000BA240: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    ecx = edx;
    PUSH32(esp, 0x000BA254u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_000BA254: ;
    eax = MEM32(esp + 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x000BA268u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_000BA268: ;
    ecx = MEM32(esp + 0xB0);
    edx = MEM32(esp + 0xB4);
    eax = MEM32(esp + 0xB8);
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = eax;

loc_000BA286: ;
    ecx = MEM32(esp + 0xF0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x000BA298u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000BA298: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xE4)) >> 32) & 1);
    esp = esp + 0xE4;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BA2B0
 * Original: 0x000BA2B0 - 0x000BA2F0 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BA2B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x2EFC);
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x2EAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x2EAC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BA2EA; /* jne: not equal / not zero */

loc_000BA2C8: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0x2EA4);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_000BA2EA: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BA2F0
 * Original: 0x000BA2F0 - 0x000BA34F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA2F0: ;
    edx = ecx;
    eax = MEM32(edx + 0x19C);
    eax = MEM32(edx + eax * 4 + 0x144);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1A4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x19C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    MEM32(edx + 0x19C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000BA339; /* jl: less (signed <) */

loc_000BA32F: ;
    MEM32(edx + 0x19C) = 0;

loc_000BA339: ;
    MEM32(edx + 0x1A0) = MEM32(edx + 0x1A0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1A8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1A8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BA350
 * Original: 0x000BA350 - 0x000BA419 (201 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BA350: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350398);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6D), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA407; /* je: equal / zero */

loc_000BA375: ;
    SET_LO8(eax, MEM8(esi + 0x6C));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_000BA3A2; /* jbe: below or equal (unsigned <=) */

loc_000BA37F: ;
    /* nop */

loc_000BA380: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BA387u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA387: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA399; /* je: equal / zero */

loc_000BA38B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BA392u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA392: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000BA399u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA399: ;
    eax = ZX8(MEM8(esi + 0x6C));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BA380; /* jl: less (signed <) */

loc_000BA3A2: ;
    eax = esi + 0x1C;
    edx = eax + 1;
    POP32(esp, edi);
    /* nop */

loc_000BA3B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BA3B0; /* jne: not equal / not zero */

loc_000BA3B7: ;
    eax = eax - edx;
    MEM32(esp + 4) = eax;
    if ((eax == 0)) goto loc_000BA403; /* je: equal / zero */

loc_000BA3BF: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000BA3C8u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000BA3C8: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x58) = 0;
    PUSH32(esp, 0x000BA3DCu); RECOMP_ABI_CALL(0x000B9D50u, sub_000B9D50); /* call 0x000B9D50 */

loc_000BA3DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA3F2; /* je: equal / zero */

loc_000BA3E0: ;
    PUSH32(esp, 0x000BA3E5u); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_000BA3E5: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000BA3F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA3F2: ;
    ecx = esp + 8;
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BA403u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000BA403: ;
    MEM8(esi + 0x6D) = MEM8(esi + 0x6D) & 0xFE;

loc_000BA407: ;
    ecx = MEM32(esp + 0x4C);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_000BA420
 * Original: 0x000BA420 - 0x000BA848 (1064 bytes, 330 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA420: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3503B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x40;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x60);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    MEM32(esp + 0x14) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000BA464; /* je: equal / zero */

loc_000BA453: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000BA464u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA464: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA492; /* je: equal / zero */

loc_000BA468: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BA46Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA46E: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x60) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BA49A; /* jne: not equal / not zero */

loc_000BA492: ;
    MEM32(esp + 0x60) = 0;

loc_000BA49A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA4C6; /* je: equal / zero */

loc_000BA49E: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BA4A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA4A4: ;
    edx = MEM32(0x4C9A54);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA4C6; /* je: equal / zero */

loc_000BA4C2: ;
    esi = edi;
    goto loc_000BA4C8;

loc_000BA4C6: ;
    esi = 0; /* xor self */

loc_000BA4C8: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA4D8; /* je: equal / zero */

loc_000BA4D0: ;
    fp_push(MEMF(eax + 0x4A4)); /* fld float */
    goto loc_000BA4E2;

loc_000BA4D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA557; /* je: equal / zero */

loc_000BA4DC: ;
    fp_push(MEMF(esi + 0x364)); /* fld float */

loc_000BA4E2: ;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BA557; /* jne: not equal / not zero */

loc_000BA4F3: ;
    PUSH32(esp, 0x000BA4F8u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000BA4F8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000BA502u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA502: ;
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x14);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x1BC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x1bc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BA831; /* jnp: not parity */

loc_000BA51B: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA53E; /* je: equal / zero */

loc_000BA523: ;
    PUSH32(esp, 0x000BA528u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000BA528: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000BA532u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA532: ;
    eax = MEM32(esp + 0x60);
    MEMF(eax + 0x4A4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000BA557;

loc_000BA53E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA557; /* je: equal / zero */

loc_000BA542: ;
    PUSH32(esp, 0x000BA547u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000BA547: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000BA551u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA551: ;
    MEMF(esi + 0x364) = (float)fp_top(); fp_pop(); /* fstp */

loc_000BA557: ;
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x70;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, 0x000BA571u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000BA571: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x58) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000BA5A0; /* jne: not equal / not zero */

loc_000BA582: ;
    PUSH32(esp, 0x000BA587u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000BA587: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000BA58Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA58E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BA5A0; /* jne: not equal / not zero */

loc_000BA592: ;
    eax = esp + 0x68;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA59Du); RECOMP_ABI_CALL(0x00059960u, sub_00059960); /* call 0x00059960 */

loc_000BA59D: ;
    esp = esp + 8;

loc_000BA5A0: ;
    ecx = MEM32(esp + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000BA5ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA5AD: ;
    ecx = MEM32(esp + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000BA5BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA5BA: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(ebx + 4)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1C4);
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    ecx = MEM32(esp + 0x68);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x24) = 0;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = 0;
    fp_push(MEMF(ebx)); /* fld float */
    MEM32(esp + 0x2C) = 0;
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    edx = esp + 0x24;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ebx + 8); /* fmul dword ptr [ebx + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ebx + 4); /* fmul dword ptr [ebx + 4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ebx); /* fmul dword ptr [ebx] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x000BA677u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA677: ;
    ecx = MEM32(esp + 0x68);
    eax = MEM32(ecx);
    edx = esp + 0x6C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000BA685u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA685: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000BA68Eu); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000BA68E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA820; /* je: equal / zero */

loc_000BA696: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000BA69Fu); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000BA69F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA70D; /* je: equal / zero */

loc_000BA6A3: ;
    PUSH32(esp, 0x000BA6A8u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000BA6A8: ;
    ecx = esp + 0x6C;
    ebp = eax;
    PUSH32(esp, 0x000BA6B3u); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000BA6B3: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 0x28); /* fsub dword ptr [eax + 0x28] */
    esp = esp - 8;
    fp_push(MEMF(edi + 0x24)); /* fld float */
    ecx = esp + 0x74;
    fp_top() = fp_top() - MEMF(eax + 0x24); /* fsub dword ptr [eax + 0x24] */
    MEM32(esp + 0x24) = esp;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    esi = esp;
    fp_top() = fp_top() - MEMF(eax + 0x20); /* fsub dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] * fp_top(); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] + fp_top(); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] + fp_top(); fp_pop(); /* faddp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000BA6F1u); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000BA6F1: ;
    eax = MEM32(eax + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(ebp);
    ecx = ebp;
    MEM32(esp + 0x28) = esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x000BA70Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA70D: ;
    ecx = esp + 0x6C;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000BA71Bu); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000BA71B: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA7B6; /* je: equal / zero */

loc_000BA725: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BA72Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA72C: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA7B6; /* je: equal / zero */

loc_000BA74A: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000BA753u); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000BA753: ;
    ecx = MEM32(eax);
    esi = MEM32(esp + 0x64);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x6C;
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, 0x000BA771u); RECOMP_ABI_CALL(0x000A0800u, sub_000A0800); /* call 0x000A0800 */

loc_000BA771: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x3C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(ebx);
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esi + 0x30) = edx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esi + 0x34) = eax;
    edx = MEM32(ebp);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x000BA7A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA7A5: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x000BA7B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA7B0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esp + 0x10) = LO8(ecx);

loc_000BA7B6: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ebx, 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA7F6; /* jne: not equal / not zero */

loc_000BA7C0: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000BA7C9u); RECOMP_ABI_CALL(0x000A09D0u, sub_000A09D0); /* call 0x000A09D0 */

loc_000BA7C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA7E3; /* je: equal / zero */

loc_000BA7CD: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000BA7D6u); RECOMP_ABI_CALL(0x000A09D0u, sub_000A09D0); /* call 0x000A09D0 */

loc_000BA7D6: ;
    edx = ZX8(MEM8(eax));
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000BA7E3u); RECOMP_ABI_CALL(0x00083730u, sub_00083730); /* call 0x00083730 */

loc_000BA7E3: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BA7F6; /* jne: not equal / not zero */

loc_000BA7E9: ;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000BA7F2u); RECOMP_ABI_CALL(0x000A07B0u, sub_000A07B0); /* call 0x000A07B0 */

loc_000BA7F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA820; /* je: equal / zero */

loc_000BA7F6: ;
    esi = MEM32(edi);
    PUSH32(esp, 0);
    ecx = esp + 0x70;
    PUSH32(esp, 0x000BA803u); RECOMP_ABI_CALL(0x000A0800u, sub_000A0800); /* call 0x000A0800 */

loc_000BA803: ;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, 0x000BA80Du); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000BA80D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x000BA820u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA820: ;
    ecx = esp + 0x68;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BA831u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000BA831: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BA850
 * Original: 0x000BA850 - 0x000BABD2 (898 bytes, 276 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA850(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BA850: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3503B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    ebx = ecx;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x58);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x68);
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_000BA896; /* je: equal / zero */

loc_000BA885: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000BA896u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA896: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA8C8; /* je: equal / zero */

loc_000BA89A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BA8A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA8A0: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x5C) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_000BA8D0; /* jne: not equal / not zero */

loc_000BA8C8: ;
    MEM32(esp + 0x5C) = 0;

loc_000BA8D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA904; /* je: equal / zero */

loc_000BA8D4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BA8DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA8DA: ;
    edx = MEM32(0x4C9A54);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_000BA904; /* je: equal / zero */

loc_000BA8FC: ;
    eax = esi;
    MEM32(esp + 0x14) = eax;
    goto loc_000BA910;

loc_000BA904: ;
    MEM32(esp + 0x14) = 0;
    eax = MEM32(esp + 0x14);

loc_000BA910: ;
    ecx = MEM32(esp + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA920; /* je: equal / zero */

loc_000BA918: ;
    fp_push(MEMF(ecx + 0x4A4)); /* fld float */
    goto loc_000BA92A;

loc_000BA920: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA9A3; /* je: equal / zero */

loc_000BA924: ;
    fp_push(MEMF(eax + 0x364)); /* fld float */

loc_000BA92A: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BA9A3; /* jne: not equal / not zero */

loc_000BA93B: ;
    PUSH32(esp, 0x000BA940u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000BA940: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000BA94Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA94A: ;
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x1BC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0x1bc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000BABBB; /* jnp: not parity */

loc_000BA95F: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA982; /* je: equal / zero */

loc_000BA967: ;
    PUSH32(esp, 0x000BA96Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000BA96C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000BA976u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA976: ;
    eax = MEM32(esp + 0x5C);
    MEMF(eax + 0x4A4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000BA9A3;

loc_000BA982: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BA9A3; /* je: equal / zero */

loc_000BA98A: ;
    PUSH32(esp, 0x000BA98Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000BA98F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000BA999u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA999: ;
    eax = MEM32(esp + 0x14);
    MEMF(eax + 0x364) = (float)fp_top(); fp_pop(); /* fstp */

loc_000BA9A3: ;
    ecx = MEM32(esi + 0x1C);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    MEM32(esp + 0x60) = ecx;
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000BA9BDu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000BA9BD: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x54) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000BA9EC; /* jne: not equal / not zero */

loc_000BA9CE: ;
    PUSH32(esp, 0x000BA9D3u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000BA9D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000BA9DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA9DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BA9EC; /* jne: not equal / not zero */

loc_000BA9DE: ;
    eax = esp + 0x64;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BA9E9u); RECOMP_ABI_CALL(0x00059960u, sub_00059960); /* call 0x00059960 */

loc_000BA9E9: ;
    esp = esp + 8;

loc_000BA9EC: ;
    ecx = MEM32(esp + 0x64);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000BA9F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BA9F9: ;
    ecx = MEM32(esp + 0x64);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000BAA06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAA06: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x1C4);
    fp_push(MEMF(edi + 4)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x1C8);
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x18) = ecx;
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    ecx = MEM32(esp + 0x68);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x18) = edx;
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    edx = esp + 0x20;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    edx = esp + 0x30;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x000BAACAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAACA: ;
    ecx = MEM32(esp + 0x64);
    eax = MEM32(ecx);
    edx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000BAAD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAAD8: ;
    ecx = esp + 0x68;
    PUSH32(esp, 0x000BAAE1u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000BAAE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BABAA; /* je: equal / zero */

loc_000BAAE9: ;
    ecx = esp + 0x68;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x000BAAF7u); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000BAAF7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAB46; /* je: equal / zero */

loc_000BAAFD: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BAB03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAB03: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAB46; /* je: equal / zero */

loc_000BAB21: ;
    eax = MEM32(esp + 0x60);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x000BAB36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAB36: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18C); PUSH32(esp, 0x000BAB40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAB40: ;
    SET_LO8(eax, MEM8(eax));
    MEM8(esp + 0x18) = LO8(eax);

loc_000BAB46: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAB84; /* jne: not equal / not zero */

loc_000BAB4D: ;
    ecx = esp + 0x68;
    PUSH32(esp, 0x000BAB56u); RECOMP_ABI_CALL(0x000A09D0u, sub_000A09D0); /* call 0x000A09D0 */

loc_000BAB56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAB70; /* je: equal / zero */

loc_000BAB5A: ;
    ecx = esp + 0x68;
    PUSH32(esp, 0x000BAB63u); RECOMP_ABI_CALL(0x000A09D0u, sub_000A09D0); /* call 0x000A09D0 */

loc_000BAB63: ;
    ecx = ZX8(MEM8(eax));
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000BAB70u); RECOMP_ABI_CALL(0x00083730u, sub_00083730); /* call 0x00083730 */

loc_000BAB70: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BAB84; /* jne: not equal / not zero */

loc_000BAB77: ;
    ecx = esp + 0x68;
    PUSH32(esp, 0x000BAB80u); RECOMP_ABI_CALL(0x000A07B0u, sub_000A07B0); /* call 0x000A07B0 */

loc_000BAB80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BABAA; /* je: equal / zero */

loc_000BAB84: ;
    edi = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000BAB91u); RECOMP_ABI_CALL(0x000A0800u, sub_000A0800); /* call 0x000A0800 */

loc_000BAB91: ;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, 0x000BAB9Bu); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000BAB9B: ;
    edx = MEM32(ebx + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x80); PUSH32(esp, 0x000BABAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BABAA: ;
    ecx = esp + 0x64;
    MEM32(esp + 0x54) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BABBBu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000BABBB: ;
    ecx = MEM32(esp + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x48;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BABE0
 * Original: 0x000BABE0 - 0x000BB05F (1151 bytes, 330 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BABE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BABE0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x3503D8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x70);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000BACC6; /* je: equal / zero */

loc_000BAC0C: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BAC13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAC13: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BACC6; /* je: equal / zero */

loc_000BAC35: ;
    ecx = MEM32(ebp + 0x4A4);
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x000BAC48u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000BAC48: ;
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x1BC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0x1bc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000BACCC; /* jp: parity */

loc_000BAC59: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB048; /* je: equal / zero */

loc_000BAC62: ;
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x000BAC6Eu); RECOMP_ABI_CALL(0x000382F0u, sub_000382F0); /* call 0x000382F0 */

loc_000BAC6E: ;
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    eax = MEM32(esp + 0x84);
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    ecx = MEM32(esp + 0x80);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    edx = MEM32(ebp);
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x68);
    MEM32(esp + 0x44) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = esp + 0x3C;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x14);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000BACC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BACC1: ;
    goto loc_000BB048;

loc_000BACC6: ;
    MEM32(esp + 0x18) = esi;
    goto loc_000BACD7;

loc_000BACCC: ;
    PUSH32(esp, 0x000BACD1u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000BACD1: ;
    MEMF(ebp + 0x4A4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000BACD7: ;
    ecx = MEM32(ebp + 0x1C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000BACF1u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000BACF1: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x70) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_000BAD1C; /* jne: not equal / not zero */

loc_000BACFE: ;
    PUSH32(esp, 0x000BAD03u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000BAD03: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000BAD0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAD0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BAD1C; /* jne: not equal / not zero */

loc_000BAD0E: ;
    eax = esp + 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAD19u); RECOMP_ABI_CALL(0x00059960u, sub_00059960); /* call 0x00059960 */

loc_000BAD19: ;
    esp = esp + 8;

loc_000BAD1C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000BAD29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAD29: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000BAD36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAD36: ;
    edi = MEM32(esp + 0x84);
    fp_push(MEMF(edi + 8)); /* fld float */
    esi = MEM32(esp + 0x80);
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x1C4);
    fp_push(MEMF(edi + 4)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x1C8);
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    MEM32(esp + 0x88) = ecx;
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x88)); /* fild */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x88)); /* fld float */
    MEM32(esp + 0x88) = edx;
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    edx = esp + 0x48;
    fp_push(MEMF(esp + 0x84)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    edx = esp + 0x34;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x94)); /* fild */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x000BAE24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAE24: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    edx = esp + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000BAE32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAE32: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAF61; /* je: equal / zero */

loc_000BAE3D: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x000BAE46u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000BAE46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAE5D; /* je: equal / zero */

loc_000BAE4A: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x000BAE53u); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000BAE53: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    goto loc_000BAE69;

loc_000BAE5D: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_push(MEMF(esp + 0x34)); /* fld float */

loc_000BAE69: ;
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x84);
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEM32(esp + 0x28) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x84); /* fmul dword ptr [esp + 0x84] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x84) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000BAED7; /* jp: parity */

loc_000BAEC3: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;

loc_000BAED7: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x000BAEE0u); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000BAEE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAF33; /* je: equal / zero */

loc_000BAEE4: ;
    PUSH32(esp, 0x000BAEE9u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000BAEE9: ;
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x88) = esp;
    ecx = esp + 0x80;
    edi = eax;
    MEM32(esp + 0x88) = esp;
    PUSH32(esp, 0x000BAF0Eu); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000BAF0E: ;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0x88);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x8C) = esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x000BAF33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAF33: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x000BAF4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAF4C: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAF61; /* je: equal / zero */

loc_000BAF54: ;
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BAF61u); RECOMP_ABI_CALL(0x000382E0u, sub_000382E0); /* call 0x000382E0 */

loc_000BAF61: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x000BAF6Au); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000BAF6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB037; /* je: equal / zero */

loc_000BAF72: ;
    ecx = esp + 0x78;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000BAF80u); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000BAF80: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAFCF; /* je: equal / zero */

loc_000BAF86: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BAF8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAF8C: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAFCF; /* je: equal / zero */

loc_000BAFAA: ;
    ecx = MEM32(esp + 0x7C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x000BAFBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAFBF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18C); PUSH32(esp, 0x000BAFC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BAFC9: ;
    SET_LO8(eax, MEM8(eax));
    MEM8(esp + 0x14) = LO8(eax);

loc_000BAFCF: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB00D; /* jne: not equal / not zero */

loc_000BAFD6: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x000BAFDFu); RECOMP_ABI_CALL(0x000A09D0u, sub_000A09D0); /* call 0x000A09D0 */

loc_000BAFDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BAFF9; /* je: equal / zero */

loc_000BAFE3: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x000BAFECu); RECOMP_ABI_CALL(0x000A09D0u, sub_000A09D0); /* call 0x000A09D0 */

loc_000BAFEC: ;
    ecx = ZX8(MEM8(eax));
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000BAFF9u); RECOMP_ABI_CALL(0x00083730u, sub_00083730); /* call 0x00083730 */

loc_000BAFF9: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB00D; /* jne: not equal / not zero */

loc_000BB000: ;
    ecx = esp + 0x78;
    PUSH32(esp, 0x000BB009u); RECOMP_ABI_CALL(0x000A07B0u, sub_000A07B0); /* call 0x000A07B0 */

loc_000BB009: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB037; /* je: equal / zero */

loc_000BB00D: ;
    esi = MEM32(ebp);
    PUSH32(esp, 0);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x000BB01Bu); RECOMP_ABI_CALL(0x000A0800u, sub_000A0800); /* call 0x000A0800 */

loc_000BB01B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x000BB028u); RECOMP_ABI_CALL(0x000A0810u, sub_000A0810); /* call 0x000A0810 */

loc_000BB028: ;
    edx = MEM32(ebx + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(esi + 0x80); PUSH32(esp, 0x000BB037u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB037: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x70) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BB048u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000BB048: ;
    ecx = MEM32(esp + 0x68);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BB060
 * Original: 0x000BB060 - 0x000BB06C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB060(void)
{

loc_000BB060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BB068u); RECOMP_ABI_CALL(0x000B9BB0u, sub_000B9BB0); /* call 0x000B9BB0 */

loc_000BB068: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB070
 * Original: 0x000BB070 - 0x000BB0CF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB070: ;
    edx = ecx;
    eax = MEM32(edx + 0x2E9C);
    eax = MEM32(edx + eax * 4 + 0x2E44);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x2EA4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x2E9C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    MEM32(edx + 0x2E9C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000BB0B9; /* jl: less (signed <) */

loc_000BB0AF: ;
    MEM32(edx + 0x2E9C) = 0;

loc_000BB0B9: ;
    MEM32(edx + 0x2EA0) = MEM32(edx + 0x2EA0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x2EA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2EA8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2EA8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB0D0
 * Original: 0x000BB0D0 - 0x000BB12D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB0D0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x198) = esi;
    MEM32(ecx + 0x19C) = esi;
    MEM32(ecx + 0x1A0) = esi;
    edx = 0; /* xor self */
    goto loc_000BB0F0;

    /* nop */

loc_000BB0F0: ;
    eax = MEM32(ecx + 0x198);
    edi = MEM32(ecx + 0x1A0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(ecx + 0x198) = eax;
    MEM32(ecx + 0x1A0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000BB11C; /* jl: less (signed <) */

loc_000BB10F: ;
    MEM32(ecx + 0x198) = esi;
    eax = 0x13;
    goto loc_000BB11D;

loc_000BB11C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BB11D: ;
    MEM32(ecx + eax * 4 + 0x144) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB0F0; /* jl: less (signed <) */

loc_000BB12A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB130
 * Original: 0x000BB130 - 0x000BB186 (86 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB130: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000BB180; /* jle: less or equal (signed <=) */

loc_000BB139: ;
    eax = MEM32(ecx + 0x2F00);
    edx = ecx + 4;
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x2EAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x2EAC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BB180; /* jne: not equal / not zero */

loc_000BB14D: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x2EA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x2EA4), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000BB180; /* je: equal / zero */

loc_000BB16C: ;
    eax = MEM32(edx + 0x2EFC);
    eax = eax & esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x250);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BB180: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB190
 * Original: 0x000BB190 - 0x000BB1ED (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB190: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2E98) = esi;
    MEM32(ecx + 0x2E9C) = esi;
    MEM32(ecx + 0x2EA0) = esi;
    edx = 0; /* xor self */
    goto loc_000BB1B0;

    /* nop */

loc_000BB1B0: ;
    eax = MEM32(ecx + 0x2E98);
    edi = MEM32(ecx + 0x2EA0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(ecx + 0x2E98) = eax;
    MEM32(ecx + 0x2EA0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000BB1DC; /* jl: less (signed <) */

loc_000BB1CF: ;
    MEM32(ecx + 0x2E98) = esi;
    eax = 0x13;
    goto loc_000BB1DD;

loc_000BB1DC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BB1DD: ;
    MEM32(ecx + eax * 4 + 0x2E44) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB1B0; /* jl: less (signed <) */

loc_000BB1EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB1F0
 * Original: 0x000BB1F0 - 0x000BB236 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB1F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x14;
    goto loc_000BB200;

    /* nop */

loc_000BB200: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BB200; /* jne: not equal / not zero */

loc_000BB20C: ;
    ecx = esi + 0x144;
    PUSH32(esp, 0x000BB217u); RECOMP_ABI_CALL(0x000B13A0u, sub_000B13A0); /* call 0x000B13A0 */

loc_000BB217: ;
    MEM32(esi + 0x1A4) = 0;
    ecx = esi;
    MEM32(esi + 0x1A8) = 0;
    PUSH32(esp, 0x000BB232u); RECOMP_ABI_CALL(0x000BB0D0u, sub_000BB0D0); /* call 0x000BB0D0 */

loc_000BB232: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB240
 * Original: 0x000BB240 - 0x000BB29E (94 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB240(void)
{

loc_000BB240: ;
    eax = ecx;
    ecx = MEM32(0x5BC9D0);
    MEM32(eax) = ecx;
    edx = MEM32(0x5BC9D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x5BC9D8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x5BC9D0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x5BC9D4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(eax + 0x14) = edx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x24) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 0x20) = 1;
    MEM32(eax + 0x28) = 0x41200000;
    MEM32(eax + 0x2C) = 0xBF800000u;
    MEM8(eax + 0x30) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB2A0
 * Original: 0x000BB2A0 - 0x000BB338 (152 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB2A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D48AC;
    ebx = 0; /* xor self */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x3D489C);
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x000BB2C2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BB2C2: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D489C);
    PUSH32(esp, 0x000BB2D1u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB2D1: ;
    ecx = eax;
    PUSH32(esp, 0x000BB2D8u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000BB2D8: ;
    PUSH32(esp, 0x3C972C);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x000BB2E5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BB2E5: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C972C);
    PUSH32(esp, 0x000BB2F4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB2F4: ;
    ecx = eax;
    PUSH32(esp, 0x000BB2FBu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000BB2FB: ;
    MEM32(esi + 0x18) = eax;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x3C) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 0x6D));
    SET_LO8(eax, LO8(eax) & 0xFC);
    ecx = esi + 0x74;
    MEM32(esi + 0x5C) = 6;
    MEM32(esi + 0x60) = 0xFFFFFFFFu;
    MEM32(esi + 0x64) = 1;
    MEM8(esi + 0x6C) = LO8(ebx);
    MEM8(esi + 0x6D) = LO8(eax);
    MEM32(esi + 0x70) = 0xC;
    PUSH32(esp, 0x000BB333u); RECOMP_ABI_CALL(0x000BB060u, sub_000BB060); /* call 0x000BB060 */

loc_000BB333: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB340
 * Original: 0x000BB340 - 0x000BB345 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB340(void)
{

loc_000BB340: ;
    eax = ZX8(MEM8(ecx + 0x6C));
    esp += 4; return; /* ret */

}

/**
 * sub_000BB350
 * Original: 0x000BB350 - 0x000BB354 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB350(void)
{

loc_000BB350: ;
    eax = ecx + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_000BB360
 * Original: 0x000BB360 - 0x000BB364 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB360(void)
{

loc_000BB360: ;
    eax = MEM32(ecx + 0x5C);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB370
 * Original: 0x000BB370 - 0x000BB374 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB370(void)
{

loc_000BB370: ;
    eax = MEM32(ecx + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB380
 * Original: 0x000BB380 - 0x000BB388 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB380(void)
{

loc_000BB380: ;
    SET_LO8(eax, MEM8(ecx + 0x6D));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB390
 * Original: 0x000BB390 - 0x000BB3B7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB390: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB39F; /* jne: not equal / not zero */

loc_000BB398: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BB39F: ;
    PUSH32(esp, 0x000BB3A4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB3A4: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB3C0
 * Original: 0x000BB3C0 - 0x000BB3E7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB3C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB3CF; /* jne: not equal / not zero */

loc_000BB3C8: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BB3CF: ;
    PUSH32(esp, 0x000BB3D4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB3D4: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB3F0
 * Original: 0x000BB3F0 - 0x000BB417 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB3F0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB3FF; /* jne: not equal / not zero */

loc_000BB3F8: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BB3FF: ;
    PUSH32(esp, 0x000BB404u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB404: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB420
 * Original: 0x000BB420 - 0x000BB447 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB420: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB42F; /* jne: not equal / not zero */

loc_000BB428: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BB42F: ;
    PUSH32(esp, 0x000BB434u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB434: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB450
 * Original: 0x000BB450 - 0x000BB477 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB450: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB45F; /* jne: not equal / not zero */

loc_000BB458: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BB45F: ;
    PUSH32(esp, 0x000BB464u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB464: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB480
 * Original: 0x000BB480 - 0x000BB4A7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BB480: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB48F; /* jne: not equal / not zero */

loc_000BB488: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000BB48F: ;
    PUSH32(esp, 0x000BB494u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB494: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BB4B0
 * Original: 0x000BB4B0 - 0x000BB6ED (573 bytes, 181 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB4B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BB4B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3503FB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x8C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x90) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6D), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000BB6C5; /* jne: not equal / not zero */

loc_000BB4E6: ;
    eax = MEM32(esp + 0xA8);
    MEM32(esi + 0x70) = eax;
    eax = esi + 0x1C;
    edx = eax + 1;

loc_000BB4F6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB4F6; /* jne: not equal / not zero */

loc_000BB4FD: ;
    eax = eax - edx;
    MEM32(esp + 0xC) = eax;
    if ((eax == 0)) goto loc_000BB56C; /* je: equal / zero */

loc_000BB505: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000BB50Eu); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000BB50E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xA4) = 0;
    PUSH32(esp, 0x000BB525u); RECOMP_ABI_CALL(0x000B9D50u, sub_000B9D50); /* call 0x000B9D50 */

loc_000BB525: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB558; /* je: equal / zero */

loc_000BB529: ;
    PUSH32(esp, 0x000BB52Eu); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_000BB52E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    ebp = MEM32(edi);
    ecx = esp;
    MEM32(esp + 0x18) = esp;
    PUSH32(esp, 0x3D4928);
    PUSH32(esp, 0x000BB547u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_000BB547: ;
    edx = MEM32(esi + 0x70);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x000BB558u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB558: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xA0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BB56Cu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000BB56C: ;
    SET_LO8(eax, MEM8(esi + 0x6C));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_000BB59B; /* jbe: below or equal (unsigned <=) */

loc_000BB575: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000BB57Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB57C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB592; /* je: equal / zero */

loc_000BB580: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000BB587u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB587: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000BB592u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB592: ;
    edx = ZX8(MEM8(esi + 0x6C));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BB575; /* jl: less (signed <) */

loc_000BB59B: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB5A9; /* jne: not equal / not zero */

loc_000BB5A2: ;
    eax = 0x3C806C;
    goto loc_000BB5BF;

loc_000BB5A9: ;
    PUSH32(esp, 0x000BB5AEu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB5AE: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_000BB5BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB5C5u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BB5C5: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000BB62E; /* jle: less or equal (signed <=) */

loc_000BB5CC: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000BB5DF; /* jne: not equal / not zero */

loc_000BB5D8: ;
    eax = 0x3C806C;
    goto loc_000BB5F5;

loc_000BB5DF: ;
    PUSH32(esp, 0x000BB5E4u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB5E4: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    eax = edx + eax + 0x8008;

loc_000BB5F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D4914);
    eax = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB607u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000BB607: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x000BB60Fu); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000BB60F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000BB621u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB621: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB62E; /* je: equal / zero */

loc_000BB625: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000BB62Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB62E: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BB63C; /* jne: not equal / not zero */

loc_000BB635: ;
    eax = 0x3C806C;
    goto loc_000BB652;

loc_000BB63C: ;
    PUSH32(esp, 0x000BB641u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB641: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_000BB652: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB658u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BB658: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000BB6C1; /* jle: less or equal (signed <=) */

loc_000BB65F: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x54) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000BB672; /* jne: not equal / not zero */

loc_000BB66B: ;
    eax = 0x3C806C;
    goto loc_000BB688;

loc_000BB672: ;
    PUSH32(esp, 0x000BB677u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB677: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    eax = edx + eax + 0x8008;

loc_000BB688: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D4900);
    eax = esp + 0x5C;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BB69Au); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000BB69A: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x000BB6A2u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000BB6A2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000BB6B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB6B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB6C1; /* je: equal / zero */

loc_000BB6B8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000BB6C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB6C1: ;
    MEM8(esi + 0x6D) = MEM8(esi + 0x6D) | 1;

loc_000BB6C5: ;
    ecx = MEM32(esp + 0x98);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x94);
    SET_LO8(eax, 1);
    PUSH32(esp, 0x000BB6E1u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000BB6E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x98;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BB6F0
 * Original: 0x000BB6F0 - 0x000BB84F (351 bytes, 113 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB6F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BB6F0: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x5C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x6C);
    if (TEST_Z(_fa, _fb)) goto loc_000BB71E; /* je: equal / zero */

loc_000BB70C: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000BB71Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB71E: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x000BB727u); RECOMP_ABI_CALL(0x000BB240u, sub_000BB240); /* call 0x000BB240 */

loc_000BB727: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    eax = MEM32(esi + 0x1A4);
    fp_push(MEMF(edi + 4)); /* fld float */
    SET_LO8(ecx, MEM8(esi + 0x1A0));
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    edx = MEM32(esi + 0x1A8);
    fp_push(MEMF(edi + 8)); /* fld float */
    esi = MEM32(esi + 0x1AC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    MEM32(esp + 0x4C) = eax;
    MEM8(esp + 0x48) = LO8(ecx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x50) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ebx + 4); /* fadd dword ptr [ebx + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 8); /* fadd dword ptr [ebx + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_000BB7C4; /* je: equal / zero */

loc_000BB787: ;
    PUSH32(esp, 0x000BB78Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BB78C: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x8008;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB7C4; /* je: equal / zero */

loc_000BB7A1: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BB7C4; /* je: equal / zero */

loc_000BB7A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB7ACu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BB7AC: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BB7B7u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000BB7B7: ;
    ecx = eax;
    PUSH32(esp, 0x000BB7BEu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000BB7BE: ;
    MEM32(esp + 0x44) = eax;
    goto loc_000BB7CC;

loc_000BB7C4: ;
    MEM32(esp + 0x44) = 0;

loc_000BB7CC: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edi + 4);
    MEM32(esp + 0x38) = eax;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(edi);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x3C) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000BB811; /* jne: not equal / not zero */

loc_000BB801: ;
    PUSH32(esp, 0x000BB806u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000BB806: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000BB80Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB80D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BB813; /* je: equal / zero */

loc_000BB811: ;
    SET_LO8(eax, 1);

loc_000BB813: ;
    SET_LO8(ecx, MEM8(esp + 0x58));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esp + 0x58) = LO8(ecx);
    PUSH32(esp, 0x000BB826u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000BB826: ;
    ecx = MEM32(esp + 0x64);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000BB843u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BB843: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BB850
 * Original: 0x000BB850 - 0x000BC6A8 (3672 bytes, 825 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BB850(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BB850: ;
    esp = esp - 0x370;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x37C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x374) = eax;
    ebp = ecx;
    MEM8(esp + 0xB) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_000BB88F; /* jne: not equal / not zero */

loc_000BB876: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x36C);
    PUSH32(esp, 0x000BB886u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000BB886: ;
    esp = esp + 0x370;
    esp += 12; return; /* ret 8 */

loc_000BB88F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x384);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ebx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000BB8B8; /* jle: less or equal (signed <=) */

loc_000BB89E: ;
    edi = edi;

loc_000BB8A0: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000BB8AAu); RECOMP_ABI_CALL(0x000BB850u, sub_000BB850); /* call 0x000BB850 */

loc_000BB8AA: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x13) = LO8(ecx);
    if (CMP_G(_fas & _fbs, 0)) goto loc_000BB8A0; /* jg: greater (signed >) */

loc_000BB8B8: ;
    ecx = MEM32(0x3D4A00);
    SET_LO16(edx, MEM16(0x3D4A04));
    eax = MEM32(0x3D49FC);
    MEM32(esp + 0x1C) = ecx;
    ecx = 0; /* xor self */
    MEM32(esp + 0x23) = ecx;
    MEM32(esp + 0x27) = ecx;
    MEM32(esp + 0x2B) = ecx;
    MEM32(esp + 0x2F) = ecx;
    MEM16(esp + 0x20) = LO16(edx);
    edx = MEM32(0x3D49F4);
    MEM32(esp + 0x33) = ecx;
    MEM8(esp + 0x37) = LO8(ecx);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(0x3D49E8);
    MEM32(esp + 0x3E) = ecx;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(0x3D4A06));
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x42) = ecx;
    edx = 0; /* xor self */
    MEM8(esp + 0x22) = LO8(eax);
    SET_LO16(eax, MEM16(0x3D49F8));
    MEM32(esp + 0x46) = ecx;
    MEM32(esp + 0x61) = edx;
    MEM32(esp + 0x4A) = ecx;
    MEM16(esp + 0x3C) = LO16(eax);
    eax = MEM32(0x3D49EC);
    MEM32(esp + 0x65) = edx;
    MEM32(esp + 0x4E) = ecx;
    MEM32(esp + 0x69) = edx;
    MEM32(esp + 0x52) = ecx;
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(0x3D49DC);
    MEM32(esp + 0x6D) = edx;
    MEM16(esp + 0x56) = LO16(ecx);
    SET_LO8(ecx, MEM8(0x3D49F0));
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x71) = edx;
    eax = 0; /* xor self */
    MEM8(esp + 0x60) = LO8(ecx);
    ecx = MEM32(0x3D49E0);
    MEM16(esp + 0x75) = LO16(edx);
    MEM32(esp + 0x81) = eax;
    MEM8(esp + 0x77) = LO8(edx);
    SET_LO8(edx, MEM8(0x3D49E4));
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(0x3D49D0);
    MEM32(esp + 0x85) = eax;
    MEM8(esp + 0x80) = LO8(edx);
    edx = MEM32(0x3D49D4);
    MEM32(esp + 0x89) = eax;
    MEM32(esp + 0x98) = ecx;
    ecx = 0; /* xor self */
    MEM32(esp + 0x8D) = eax;
    MEM32(esp + 0x9C) = edx;
    edx = MEM32(0x3D49C4);
    MEM32(esp + 0xA2) = ecx;
    MEM32(esp + 0x91) = eax;
    MEM32(esp + 0xB8) = edx;
    MEM16(esp + 0x95) = LO16(eax);
    MEM32(esp + 0xA6) = ecx;
    edx = 0; /* xor self */
    MEM8(esp + 0x97) = LO8(eax);
    SET_LO16(eax, MEM16(0x3D49D8));
    MEM32(esp + 0xAA) = ecx;
    MEM32(esp + 0xC4) = edx;
    MEM32(esp + 0xAE) = ecx;
    MEM16(esp + 0xA0) = LO16(eax);
    eax = MEM32(0x3D49C8);
    MEM32(esp + 0xC8) = edx;
    MEM32(esp + 0xB2) = ecx;
    MEM32(esp + 0xCC) = edx;
    MEM16(esp + 0xB6) = LO16(ecx);
    ecx = MEM32(0x3D49CC);
    MEM32(esp + 0xBC) = eax;
    eax = MEM32(0x3D49BC);
    MEM32(esp + 0xD0) = edx;
    MEM32(esp + 0xC0) = ecx;
    MEM32(esp + 0xD4) = edx;
    MEM32(esp + 0xD8) = eax;
    eax = MEM32(0x3D49AC);
    MEM32(esp + 0xF8) = eax;
    SET_LO16(eax, MEM16(0x3D49B8));
    ecx = MEM32(0x3D49C0);
    MEM16(esp + 0x104) = LO16(eax);
    eax = MEM32(0x3CAD34);
    MEM32(esp + 0x118) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x11F) = eax;
    MEM32(esp + 0x123) = eax;
    MEM32(esp + 0x127) = eax;
    MEM32(esp + 0xE0) = edx;
    MEM32(esp + 0x12B) = eax;
    MEM32(esp + 0xE4) = edx;
    MEM32(esp + 0xDC) = ecx;
    ecx = MEM32(0x3D49B0);
    MEM32(esp + 0x12F) = eax;
    MEM32(esp + 0xE8) = edx;
    MEM32(esp + 0x133) = eax;
    MEM32(esp + 0xFC) = ecx;
    SET_LO8(ecx, MEM8(0x3D49BA));
    MEM32(esp + 0xEC) = edx;
    MEM8(esp + 0x137) = LO8(eax);
    SET_LO16(eax, MEM16(0x3D49A8));
    MEM32(esp + 0xF0) = edx;
    MEM8(esp + 0x106) = LO8(ecx);
    SET_LO16(ecx, MEM16(0x3CAD38));
    MEM16(esp + 0x140) = LO16(eax);
    eax = MEM32(0x3CAD10);
    MEM32(esp + 0xF4) = edx;
    edx = MEM32(0x3D49B4);
    MEM16(esp + 0x11C) = LO16(ecx);
    ecx = MEM32(0x3D49A0);
    MEM32(esp + 0x15C) = eax;
    MEM32(esp + 0x100) = edx;
    edx = 0; /* xor self */
    MEM32(esp + 0x138) = ecx;
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esp + 0x163) = eax;
    MEM32(esp + 0x107) = edx;
    MEM32(esp + 0x167) = eax;
    MEM32(esp + 0x10B) = edx;
    MEM32(esp + 0x16B) = eax;
    MEM32(esp + 0x10F) = edx;
    MEM32(esp + 0x16F) = eax;
    MEM32(esp + 0x142) = ecx;
    MEM32(esp + 0x113) = edx;
    MEM32(esp + 0x173) = eax;
    MEM32(esp + 0x146) = ecx;
    MEM8(esp + 0x117) = LO8(edx);
    SET_LO8(edx, MEM8(0x3CAD3A));
    MEM8(esp + 0x177) = LO8(eax);
    MEM32(esp + 0x14A) = ecx;
    MEM32(esp + 0x17D) = eax;
    MEM8(esp + 0x11E) = LO8(edx);
    edx = MEM32(0x3D49A4);
    MEM32(esp + 0x14E) = ecx;
    MEM32(esp + 0x181) = eax;
    MEM32(esp + 0x152) = ecx;
    MEM32(esp + 0x13C) = edx;
    edx = MEM32(0x3CAD0C);
    MEM32(esp + 0x185) = eax;
    MEM16(esp + 0x156) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x3CAD14));
    MEM32(esp + 0x189) = eax;
    MEM32(esp + 0x158) = edx;
    SET_LO8(edx, MEM8(0x3CAD16));
    MEM16(esp + 0x160) = LO16(ecx);
    ecx = MEM32(0x3CC9F4);
    MEM32(esp + 0x18D) = eax;
    MEM8(esp + 0x162) = LO8(edx);
    SET_LO8(edx, MEM8(0x3CC9F8));
    MEM32(esp + 0x191) = eax;
    MEM32(esp + 0x178) = ecx;
    ecx = MEM32(0x3D01C4);
    MEM16(esp + 0x195) = LO16(eax);
    MEM8(esp + 0x17C) = LO8(edx);
    edx = MEM32(0x3D01C8);
    MEM8(esp + 0x197) = LO8(eax);
    MEM32(esp + 0x198) = ecx;
    MEM32(esp + 0x19C) = edx;
    edx = MEM32(0x3D4994);
    MEM32(esp + 0x1B8) = edx;
    edx = 0; /* xor self */
    SET_LO8(eax, MEM8(0x3D01CC));
    MEM32(esp + 0x1C1) = edx;
    MEM32(esp + 0x1C5) = edx;
    MEM32(esp + 0x1C9) = edx;
    ecx = 0; /* xor self */
    MEM32(esp + 0x1CD) = edx;
    MEM32(esp + 0x1A1) = ecx;
    MEM32(esp + 0x1D1) = edx;
    MEM32(esp + 0x1A5) = ecx;
    MEM16(esp + 0x1D5) = LO16(edx);
    MEM32(esp + 0x1A9) = ecx;
    MEM8(esp + 0x1D7) = LO8(edx);
    edx = MEM32(0x3D4990);
    MEM32(esp + 0x1AD) = ecx;
    MEM32(esp + 0x1E0) = edx;
    edx = MEM32(0x3CD600);
    MEM32(esp + 0x1B1) = ecx;
    MEM8(esp + 0x1A0) = LO8(eax);
    eax = MEM32(0x3D4998);
    MEM16(esp + 0x1B5) = LO16(ecx);
    MEM32(esp + 0x1FC) = edx;
    edx = 0; /* xor self */
    MEM8(esp + 0x1B7) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x3D499C));
    MEM32(esp + 0x1BC) = eax;
    eax = MEM32(0x3D4988);
    MEM32(esp + 0x206) = edx;
    MEM8(esp + 0x1C0) = LO8(ecx);
    ecx = MEM32(0x3D498C);
    MEM32(esp + 0x1D8) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x20A) = edx;
    MEM32(esp + 0x1DC) = ecx;
    ecx = MEM32(0x3CD5FC);
    MEM32(esp + 0x20E) = edx;
    MEM32(esp + 0x1E4) = eax;
    MEM32(esp + 0x212) = edx;
    MEM32(esp + 0x1F8) = ecx;
    SET_LO16(ecx, MEM16(0x3CD608));
    MEM32(esp + 0x1E8) = eax;
    MEM16(esp + 0x216) = LO16(edx);
    MEM32(esp + 0x1EC) = eax;
    MEM16(esp + 0x204) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x3C866C));
    MEM32(esp + 0x21E) = edx;
    MEM32(esp + 0x1F0) = eax;
    MEM32(esp + 0x222) = edx;
    MEM16(esp + 0x21C) = LO16(ecx);
    ecx = MEM32(0x3D497C);
    MEM32(esp + 0x1F4) = eax;
    eax = MEM32(0x3CD604);
    MEM32(esp + 0x226) = edx;
    MEM32(esp + 0x23C) = ecx;
    MEM32(esp + 0x200) = eax;
    eax = MEM32(0x3C8668);
    MEM32(esp + 0x22A) = edx;
    ecx = 0; /* xor self */
    MEM32(esp + 0x22E) = edx;
    MEM32(esp + 0x218) = eax;
    eax = MEM32(0x3D4978);
    MEM32(esp + 0x248) = ecx;
    MEM32(esp + 0x232) = edx;
    MEM32(esp + 0x24C) = ecx;
    MEM16(esp + 0x236) = LO16(edx);
    edx = MEM32(0x3D4980);
    MEM32(esp + 0x238) = eax;
    eax = MEM32(0x3D4984);
    MEM32(esp + 0x250) = ecx;
    MEM32(esp + 0x240) = edx;
    edx = MEM32(0x3D4970);
    MEM32(esp + 0x244) = eax;
    SET_LO16(eax, MEM16(0x3D4974));
    MEM32(esp + 0x254) = ecx;
    SET_LO8(ecx, MEM8(0x3D4976));
    MEM32(esp + 0x258) = edx;
    MEM16(esp + 0x25C) = LO16(eax);
    MEM8(esp + 0x25E) = LO8(ecx);
    edx = 0; /* xor self */
    eax = MEM32(0x3C85D8);
    MEM32(esp + 0x25F) = edx;
    MEM32(esp + 0x263) = edx;
    MEM32(esp + 0x267) = edx;
    MEM32(esp + 0x26B) = edx;
    SET_LO16(ecx, MEM16(0x3C85DC));
    MEM32(esp + 0x26F) = edx;
    MEM32(esp + 0x273) = edx;
    MEM8(esp + 0x277) = LO8(edx);
    SET_LO8(edx, MEM8(0x3C85DE));
    MEM32(esp + 0x278) = eax;
    eax = 0; /* xor self */
    MEM8(esp + 0x27E) = LO8(edx);
    edx = MEM32(0x3D4968);
    MEM32(esp + 0x27F) = eax;
    MEM32(esp + 0x29C) = edx;
    MEM32(esp + 0x283) = eax;
    edx = 0; /* xor self */
    MEM32(esp + 0x287) = eax;
    MEM32(esp + 0x2A3) = edx;
    MEM32(esp + 0x28B) = eax;
    MEM32(esp + 0x2A7) = edx;
    MEM32(esp + 0x28F) = eax;
    MEM16(esp + 0x27C) = LO16(ecx);
    ecx = MEM32(0x3D4964);
    MEM32(esp + 0x2AB) = edx;
    MEM32(esp + 0x293) = eax;
    MEM32(esp + 0x2AF) = edx;
    MEM8(esp + 0x297) = LO8(eax);
    SET_LO16(eax, MEM16(0x3D496C));
    MEM32(esp + 0x298) = ecx;
    SET_LO8(ecx, MEM8(0x3D496E));
    MEM32(esp + 0x2B3) = edx;
    MEM16(esp + 0x2A0) = LO16(eax);
    eax = MEM32(0x3D4958);
    MEM8(esp + 0x2A2) = LO8(ecx);
    ecx = MEM32(0x3D495C);
    MEM8(esp + 0x2B7) = LO8(edx);
    SET_LO16(edx, MEM16(0x3D4960));
    MEM32(esp + 0x2B8) = eax;
    MEM32(esp + 0x2BC) = ecx;
    ecx = MEM32(0x3D494C);
    MEM16(esp + 0x2C0) = LO16(edx);
    edx = MEM32(0x3D4950);
    eax = 0; /* xor self */
    MEM32(esp + 0x2D8) = ecx;
    MEM32(esp + 0x2DC) = edx;
    edx = MEM32(0x3D4940);
    MEM32(esp + 0x2C2) = eax;
    ecx = 0; /* xor self */
    MEM32(esp + 0x2C6) = eax;
    MEM32(esp + 0x2F8) = edx;
    MEM32(esp + 0x2E2) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x2CA) = eax;
    MEM32(esp + 0x2E6) = ecx;
    MEM32(esp + 0x302) = edx;
    MEM32(esp + 0x2CE) = eax;
    MEM32(esp + 0x2EA) = ecx;
    MEM32(esp + 0x2D2) = eax;
    MEM32(esp + 0x306) = edx;
    MEM32(esp + 0x2EE) = ecx;
    MEM16(esp + 0x2D6) = LO16(eax);
    SET_LO16(eax, MEM16(0x3D4954));
    MEM32(esp + 0x30A) = edx;
    MEM32(esp + 0x2F2) = ecx;
    MEM32(esp + 0x30E) = edx;
    MEM16(esp + 0x2E0) = LO16(eax);
    eax = MEM32(0x3D4944);
    MEM16(esp + 0x2F6) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x3D4948));
    MEM32(esp + 0x312) = edx;
    MEM32(esp + 0x2FC) = eax;
    MEM16(esp + 0x300) = LO16(ecx);
    MEM16(esp + 0x316) = LO16(edx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000BC0ED; /* jle: less or equal (signed <=) */

loc_000BC07A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    eax = esp + 0x31C;
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC08Eu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000BC08E: ;
    esp = esp + 0xC;
    ebx = esp + 0x18;
    MEM32(esp + 0x14) = 0x18;
    /* nop */

loc_000BC0A0: ;
    eax = esp + 0x318;
    edx = eax;
    /* nop */

loc_000BC0B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC0B0; /* jne: not equal / not zero */

loc_000BC0B7: ;
    edi = ebx;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_000BC0C0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC0C0; /* jne: not equal / not zero */

loc_000BC0C8: ;
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
    eax = MEM32(esp + 0x14);
    ecx = ecx & 3;
    ebx = ebx + 0x20;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_000BC0A0; /* jne: not equal / not zero */

loc_000BC0E6: ;
    edi = MEM32(esp + 0x384);

loc_000BC0ED: ;
    esi = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    if ((eax == 0)) goto loc_000BC68B; /* je: equal / zero */

loc_000BC101: ;
    esi = MEM32(eax + 0x54);
    eax = eax + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC68B; /* je: equal / zero */

loc_000BC10F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BC68B; /* je: equal / zero */

loc_000BC117: ;
    ecx = esp + 0x18;
    edi = esi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BC126u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC126: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC12Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC12C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC14F; /* jne: not equal / not zero */

loc_000BC133: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC13Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC13B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC141u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000BC141: ;
    MEMF(ebp + 0x1B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000BC67A;

loc_000BC14F: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000BC15Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC15B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC161u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC161: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC185; /* jne: not equal / not zero */

loc_000BC168: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC170u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC170: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC176u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000BC176: ;
    esp = esp + 4;
    MEM16(ebp + 0x1C4) = LO16(eax);
    goto loc_000BC67A;

loc_000BC185: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BC191u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC191: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC197u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC197: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC1C1; /* jne: not equal / not zero */

loc_000BC19E: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC1A6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC1A6: ;
    edi = ebp + 0xA0;

loc_000BC1AC: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000BC1B5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000BC1B5: ;
    esp = esp + 0xC;
    MEM8(edi + 0x3F) = 0;
    goto loc_000BC67A;

loc_000BC1C1: ;
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BC1CDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC1CD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC1D3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC1D3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC1EA; /* jne: not equal / not zero */

loc_000BC1DA: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC1E2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC1E2: ;
    edi = ebp + 0x120;
    goto loc_000BC1AC;

loc_000BC1EA: ;
    edx = esp + 0x98;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000BC1F9u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC1F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC1FFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC1FF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC213; /* jne: not equal / not zero */

loc_000BC206: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC20Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC20E: ;
    edi = ebp + 0x20;
    goto loc_000BC1AC;

loc_000BC213: ;
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BC222u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC222: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC228u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC228: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC23F; /* jne: not equal / not zero */

loc_000BC22F: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC237u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC237: ;
    edi = ebp + 0x60;
    goto loc_000BC1AC;

loc_000BC23F: ;
    ecx = esp + 0xD8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BC24Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC24E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC254u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC254: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC28A; /* jne: not equal / not zero */

loc_000BC25B: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC263u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC263: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x000BC26Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC26E: ;
    SET_LO8(ebx, MEM8(ebp + 0x1D4));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    goto loc_000BC674;

loc_000BC28A: ;
    eax = esp + 0xF8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BC299u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC299: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC29Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC29F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC2D3; /* jne: not equal / not zero */

loc_000BC2A6: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC2AEu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC2AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x000BC2B9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC2B9: ;
    SET_LO8(ebx, MEM8(ebp + 0x1D4));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 2);
    goto loc_000BC66C;

loc_000BC2D3: ;
    edx = esp + 0x118;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000BC2E2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC2E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC2E8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC2E8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC319; /* jne: not equal / not zero */

loc_000BC2EF: ;
    PUSH32(esp, 0x000BC2F4u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_000BC2F4: ;
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC302u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC302: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x000BC308u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BC308: ;
    PUSH32(esp, 0x000BC30Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000BC30D: ;
    MEM16(ebp + 0x1C6) = LO16(eax);
    goto loc_000BC67A;

loc_000BC319: ;
    eax = esp + 0x138;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BC328u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC328: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC32Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC32E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC351; /* jne: not equal / not zero */

loc_000BC335: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC33Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC33D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC343u); RECOMP_ABI_CALL(0x00049510u, sub_00049510); /* call 0x00049510 */

loc_000BC343: ;
    esp = esp + 4;
    MEM32(ebp + 0x1CC) = eax;
    goto loc_000BC67A;

loc_000BC351: ;
    ecx = esp + 0x158;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BC360u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC360: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC366u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC366: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC389; /* jne: not equal / not zero */

loc_000BC36D: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC375u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC375: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC37Bu); RECOMP_ABI_CALL(0x00049480u, xml1_guest_damage_type_from_name); /* call 0x00049480 */

loc_000BC37B: ;
    esp = esp + 4;
    MEM32(ebp + 0x1D0) = eax;
    goto loc_000BC67A;

loc_000BC389: ;
    edx = esp + 0x178;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000BC398u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC398: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC39Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC39E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC3C4; /* jne: not equal / not zero */

loc_000BC3A5: ;
    eax = ebp + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC3B1u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC3B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x44FC44);
    PUSH32(esp, 0x000BC3BCu); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_000BC3BC: ;
    esp = esp + 0xC;
    goto loc_000BC67A;

loc_000BC3C4: ;
    ecx = esp + 0x198;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BC3D3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC3D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC3D9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC3D9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC402; /* jne: not equal / not zero */

loc_000BC3E0: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC3E8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC3E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC3EEu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000BC3EE: ;
    fp_top() = fp_top() * MEMD(0x3D4938); /* fmul qword ptr [0x3d4938] */
    MEMF(ebp + 0x1B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000BC67A;

loc_000BC402: ;
    edx = esp + 0x1B8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000BC411u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC411: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC417u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC417: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC437; /* jne: not equal / not zero */

loc_000BC41E: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC426u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC426: ;
    PUSH32(esp, eax);
    ecx = ebp + 0x160;
    PUSH32(esp, 0x000BC432u); RECOMP_ABI_CALL(0x00025BF0u, sub_00025BF0); /* call 0x00025BF0 */

loc_000BC432: ;
    goto loc_000BC67A;

loc_000BC437: ;
    eax = esp + 0x1D8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BC446u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC446: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC44Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC44C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC46C; /* jne: not equal / not zero */

loc_000BC453: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC45Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC45B: ;
    PUSH32(esp, eax);
    ecx = ebp + 0xE0;
    PUSH32(esp, 0x000BC467u); RECOMP_ABI_CALL(0x00025BF0u, sub_00025BF0); /* call 0x00025BF0 */

loc_000BC467: ;
    goto loc_000BC67A;

loc_000BC46C: ;
    ecx = esp + 0x1F8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BC47Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC47B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC481u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC481: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC4A1; /* jne: not equal / not zero */

loc_000BC488: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC490u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC490: ;
    PUSH32(esp, eax);
    ecx = ebp + 0x1AC;
    PUSH32(esp, 0x000BC49Cu); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000BC49C: ;
    goto loc_000BC67A;

loc_000BC4A1: ;
    edx = esp + 0x218;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000BC4B0u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC4B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC4B6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC4B6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC4D9; /* jne: not equal / not zero */

loc_000BC4BD: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC4C5u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC4C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC4CBu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000BC4CB: ;
    esp = esp + 4;
    MEM8(ebp + 0x1A0) = LO8(eax);
    goto loc_000BC67A;

loc_000BC4D9: ;
    eax = esp + 0x238;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BC4E8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC4E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC4EEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC4EE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC511; /* jne: not equal / not zero */

loc_000BC4F5: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC4FDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC4FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC503u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000BC503: ;
    MEMF(ebp + 0x1A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000BC67A;

loc_000BC511: ;
    ecx = esp + 0x258;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BC520u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC520: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC526u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC526: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC549; /* jne: not equal / not zero */

loc_000BC52D: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC535u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC535: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC53Bu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000BC53B: ;
    MEMF(ebp + 0x1A8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000BC67A;

loc_000BC549: ;
    edx = esp + 0x278;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000BC558u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC558: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC55Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC55E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC582; /* jne: not equal / not zero */

loc_000BC565: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC56Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC56D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC573u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000BC573: ;
    esp = esp + 4;
    MEM16(ebp + 0x1C8) = LO16(eax);
    goto loc_000BC67A;

loc_000BC582: ;
    eax = esp + 0x298;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BC591u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC591: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC597u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC597: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC5BA; /* jne: not equal / not zero */

loc_000BC59E: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC5A6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC5A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC5ACu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000BC5AC: ;
    MEMF(ebp + 0x1B8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000BC67A;

loc_000BC5BA: ;
    ecx = esp + 0x2B8;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000BC5C9u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC5C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC5CFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC5CF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC5F2; /* jne: not equal / not zero */

loc_000BC5D6: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC5DEu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC5DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC5E4u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000BC5E4: ;
    MEMF(ebp + 0x1BC) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000BC67A;

loc_000BC5F2: ;
    edx = esp + 0x2D8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000BC601u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC601: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC607u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC607: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC627; /* jne: not equal / not zero */

loc_000BC60E: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC616u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC616: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC61Cu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000BC61C: ;
    MEMF(ebp + 0x1C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    goto loc_000BC67A;

loc_000BC627: ;
    eax = esp + 0x2F8;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000BC636u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC636: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC63Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC63C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC67A; /* jne: not equal / not zero */

loc_000BC643: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x000BC64Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC64B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x000BC656u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC656: ;
    SET_LO8(ebx, MEM8(ebp + 0x1D4));
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 4);

loc_000BC66C: ;
    SET_LO8(eax, MEM8(ebp + 0x1D4));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));

loc_000BC674: ;
    MEM8(ebp + 0x1D4) = LO8(eax);

loc_000BC67A: ;
    ecx = esi;
    PUSH32(esp, 0x000BC681u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_000BC681: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC117; /* jne: not equal / not zero */

loc_000BC68B: ;
    ecx = MEM32(esp + 0x37C);
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    PUSH32(esp, 0x000BC69Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000BC69F: ;
    esp = esp + 0x370;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BC6B0
 * Original: 0x000BC6B0 - 0x000BC6F1 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BC6B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350421);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000BC6E2; /* je: equal / zero */

loc_000BC6DD: ;
    PUSH32(esp, 0x000BC6E2u); RECOMP_ABI_CALL(0x000BB2A0u, sub_000BB2A0); /* call 0x000BB2A0 */

loc_000BC6E2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000BC700
 * Original: 0x000BC700 - 0x000BCA8E (910 bytes, 295 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BC700(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BC700: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx = 0; /* xor self */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    ebp = MEM32(eax + 0x54);
    eax = eax + 0x2C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCA53; /* je: equal / zero */

loc_000BC729: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCA53; /* je: equal / zero */

loc_000BC731: ;
    esi = ebp + 4;
    PUSH32(esp, 0x3CE204);
    ecx = esi;
    PUSH32(esp, 0x000BC740u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC740: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC746u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC746: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC787; /* jne: not equal / not zero */

loc_000BC74D: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC755u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC755: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC77F; /* je: equal / zero */

loc_000BC75B: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC77F; /* je: equal / zero */

loc_000BC75F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC765u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BC765: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC770u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BC770: ;
    ecx = eax;
    PUSH32(esp, 0x000BC777u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000BC777: ;
    MEM32(edi + 0xC) = eax;
    goto loc_000BCA3E;

loc_000BC77F: ;
    MEM32(edi + 0xC) = ebx;
    goto loc_000BCA3E;

loc_000BC787: ;
    PUSH32(esp, 0x3C8690);
    ecx = esi;
    PUSH32(esp, 0x000BC793u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC793: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC799u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC799: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC7DA; /* jne: not equal / not zero */

loc_000BC7A0: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC7A8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC7A8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC7D2; /* je: equal / zero */

loc_000BC7AE: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC7D2; /* je: equal / zero */

loc_000BC7B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC7B8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BC7B8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC7C3u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BC7C3: ;
    ecx = eax;
    PUSH32(esp, 0x000BC7CAu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000BC7CA: ;
    MEM32(edi + 0x10) = eax;
    goto loc_000BCA3E;

loc_000BC7D2: ;
    MEM32(edi + 0x10) = ebx;
    goto loc_000BCA3E;

loc_000BC7DA: ;
    PUSH32(esp, 0x3CB770);
    ecx = esi;
    PUSH32(esp, 0x000BC7E6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC7E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC7ECu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC7EC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC82D; /* jne: not equal / not zero */

loc_000BC7F3: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC7FBu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC7FB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC825; /* je: equal / zero */

loc_000BC801: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BC825; /* je: equal / zero */

loc_000BC805: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC80Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BC80B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC816u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BC816: ;
    ecx = eax;
    PUSH32(esp, 0x000BC81Du); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000BC81D: ;
    MEM32(edi + 4) = eax;
    goto loc_000BCA3E;

loc_000BC825: ;
    MEM32(edi + 4) = ebx;
    goto loc_000BCA3E;

loc_000BC82D: ;
    PUSH32(esp, 0x3D4A54);
    ecx = esi;
    PUSH32(esp, 0x000BC839u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC839: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC83Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC83F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC868; /* jne: not equal / not zero */

loc_000BC846: ;
    eax = esp + 0x13;
    PUSH32(esp, eax);
    ecx = ebp + 0x14;
    MEM8(esp + 0x17) = LO8(ebx);
    PUSH32(esp, 0x000BC857u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC857: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC85Du); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000BC85D: ;
    esp = esp + 8;
    MEM32(edi + 0x5C) = eax;
    goto loc_000BCA3E;

loc_000BC868: ;
    PUSH32(esp, 0x3D4A44);
    ecx = esi;
    PUSH32(esp, 0x000BC874u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC874: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC87Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC87A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC897; /* jne: not equal / not zero */

loc_000BC881: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC889u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC889: ;
    PUSH32(esp, eax);
    ecx = edi + 8;
    PUSH32(esp, 0x000BC892u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000BC892: ;
    goto loc_000BCA3E;

loc_000BC897: ;
    PUSH32(esp, 0x3D4A34);
    ecx = esi;
    PUSH32(esp, 0x000BC8A3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC8A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC8A9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC8A9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC8D2; /* jne: not equal / not zero */

loc_000BC8B0: ;
    ecx = esp + 0x13;
    PUSH32(esp, ecx);
    ecx = ebp + 0x14;
    MEM8(esp + 0x17) = LO8(ebx);
    PUSH32(esp, 0x000BC8C1u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC8C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC8C7u); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_000BC8C7: ;
    esp = esp + 8;
    MEM32(edi + 0x60) = eax;
    goto loc_000BCA3E;

loc_000BC8D2: ;
    PUSH32(esp, 0x3D4A2C);
    ecx = esi;
    PUSH32(esp, 0x000BC8DEu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC8DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC8E4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC8E4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC90A; /* jne: not equal / not zero */

loc_000BC8EB: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC8F3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC8F3: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    esi = edi + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BC8FFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000BC8FF: ;
    esp = esp + 0xC;
    MEM8(esi + 0x1F) = LO8(ebx);
    goto loc_000BCA3E;

loc_000BC90A: ;
    PUSH32(esp, 0x3CCB8C);
    ecx = esi;
    PUSH32(esp, 0x000BC916u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC916: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC91Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC91C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC939; /* jne: not equal / not zero */

loc_000BC923: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC92Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC92B: ;
    PUSH32(esp, eax);
    ecx = edi + 0x3C;
    PUSH32(esp, 0x000BC934u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000BC934: ;
    goto loc_000BCA3E;

loc_000BC939: ;
    PUSH32(esp, 0x3D4004);
    ecx = esi;
    PUSH32(esp, 0x000BC945u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC945: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC94Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC94B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC968; /* jne: not equal / not zero */

loc_000BC952: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC95Au); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC95A: ;
    PUSH32(esp, eax);
    ecx = edi + 0x18;
    PUSH32(esp, 0x000BC963u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000BC963: ;
    goto loc_000BCA3E;

loc_000BC968: ;
    PUSH32(esp, 0x3D3D80);
    ecx = esi;
    PUSH32(esp, 0x000BC974u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC974: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC97Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC97A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC997; /* jne: not equal / not zero */

loc_000BC981: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC989u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC989: ;
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, 0x000BC992u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000BC992: ;
    goto loc_000BCA3E;

loc_000BC997: ;
    PUSH32(esp, 0x3D4A20);
    ecx = esi;
    PUSH32(esp, 0x000BC9A3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC9A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC9A9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC9A9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BC9D8; /* jne: not equal / not zero */

loc_000BC9B0: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC9BDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC9BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x44FC6C);
    PUSH32(esp, 0x000BC9C8u); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_000BC9C8: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCA3E; /* je: equal / zero */

loc_000BC9CF: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0x64) = eax;
    goto loc_000BCA3E;

loc_000BC9D8: ;
    PUSH32(esp, 0x3D4A14);
    ecx = esi;
    PUSH32(esp, 0x000BC9E4u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC9E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BC9EAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BC9EA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCA11; /* jne: not equal / not zero */

loc_000BC9F1: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BC9F9u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BC9F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, 0x000BCA04u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BCA04: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCA3E; /* jne: not equal / not zero */

loc_000BCA0B: ;
    MEM8(edi + 0x6D) = MEM8(edi + 0x6D) | 2;
    goto loc_000BCA3E;

loc_000BCA11: ;
    PUSH32(esp, 0x3D4A08);
    ecx = esi;
    PUSH32(esp, 0x000BCA1Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BCA1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCA23u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000BCA23: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCA3E; /* jne: not equal / not zero */

loc_000BCA2A: ;
    ecx = ebp + 0x14;
    PUSH32(esp, 0x000BCA32u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BCA32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCA38u); RECOMP_ABI_CALL(0x00059740u, xml1_guest_attack_type_from_name); /* call 0x00059740 */

loc_000BCA38: ;
    esp = esp + 4;
    MEM32(edi + 0x68) = eax;

loc_000BCA3E: ;
    ecx = ebp;
    PUSH32(esp, 0x000BCA45u); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_000BCA45: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BC731; /* jne: not equal / not zero */

loc_000BCA4F: ;
    esi = MEM32(esp + 0x1C);

loc_000BCA53: ;
    MEM8(edi + 0x6C) = LO8(ebx);
    goto loc_000BCA60;

    /* nop */
    /* nop */

loc_000BCA60: ;
    eax = ZX8(MEM8(edi + 0x6C));
    PUSH32(esp, eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1D8);
    PUSH32(esp, esi);
    ecx = eax + edi + 0x74;
    PUSH32(esp, 0x000BCA75u); RECOMP_ABI_CALL(0x000BB850u, sub_000BB850); /* call 0x000BB850 */

loc_000BCA75: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCA7C; /* je: equal / zero */

loc_000BCA79: ;
    MEM8(edi + 0x6C) = MEM8(edi + 0x6C) + 1;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_000BCA7C: ;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x6C), 1 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000BCA60; /* jb: below (unsigned <) */

loc_000BCA82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCA90
 * Original: 0x000BCA90 - 0x000BCB05 (117 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCA90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    eax = MEM32(ebp + 0x2F0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    esi = ebp + 0x2F08;
    PUSH32(esp, edi);
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000BCAC4; /* je: equal / zero */

loc_000BCAAB: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCAC4; /* je: equal / zero */

loc_000BCABC: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BCAC4u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000BCAC4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCAD2; /* jne: not equal / not zero */

loc_000BCACE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCAFE; /* je: equal / zero */

loc_000BCAD2: ;
    eax = MEM32(ebp + 0x2F00);
    edx = MEM32(esi + edi * 4 + 0x1B8);
    edx = edx & eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x250);
    eax = MEM32(edx + ebp + 4);
    ecx = edx + ebp + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000BCAF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BCAF2: ;
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    PUSH32(esp, 0x000BCAFCu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000BCAFC: ;
    goto loc_000BCAC4;

loc_000BCAFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCB10
 * Original: 0x000BCB10 - 0x000BCB92 (130 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCB10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000BCB3F; /* je: equal / zero */

loc_000BCB1C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCB3F; /* je: equal / zero */

loc_000BCB21: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCB27u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000BCB27: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BCB32u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000BCB32: ;
    ecx = eax;
    PUSH32(esp, 0x000BCB39u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000BCB39: ;
    MEM32(esp + 0xC) = eax;
    goto loc_000BCB47;

loc_000BCB3F: ;
    MEM32(esp + 0xC) = 0;

loc_000BCB47: ;
    eax = MEM32(edi + 0x2F0C);
    esi = edi + 0x2F08;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000BCB60u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000BCB60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BCB6B; /* jne: not equal / not zero */

loc_000BCB67: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCB8A; /* je: equal / zero */

loc_000BCB6B: ;
    esi = MEM32(esi + eax * 4 + 0x1B8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000BCB8A; /* jle: less or equal (signed <=) */

loc_000BCB76: ;
    PUSH32(esp, esi);
    ecx = edi + 4;
    PUSH32(esp, 0x000BCB7Fu); RECOMP_ABI_CALL(0x000BA2B0u, sub_000BA2B0); /* call 0x000BA2B0 */

loc_000BCB7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCB8A; /* je: equal / zero */

loc_000BCB83: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BCB8A: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCBA0
 * Original: 0x000BCBA0 - 0x000BCD47 (423 bytes, 134 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCBA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCBA0: ;
    esp = esp - 0x74;
    eax = MEM32(esp + 0x84);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x80);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x84);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000BCBED; /* je: equal / zero */

loc_000BCBD8: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000BCBEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BCBED: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BCC18; /* je: equal / zero */

loc_000BCBF8: ;
    PUSH32(esp, 0x000BCBFDu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000BCBFD: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43160000);
    PUSH32(esp, 0x44A28000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000BCC18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BCC18: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x48;
    MEM32(eax) = 0;
    PUSH32(esp, 0x000BCC47u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_000BCC47: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1C6);
    edx = MEM32(edi + 0x1C);
    eax = MEM32(esi + 0x1D0);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x28) = 5;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0x2C) = eax;
    fp_push(MEMF(0x3D4A60)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, 0x000BCC7Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000BCC7C: ;
    fp_top() = fp_top() * MEMF(0x3CA9D8); /* fmul dword ptr [0x3ca9d8] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCC88u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000BCC88: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BCC8Eu); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_000BCC8E: ;
    edx = MEM32(esi + 0x1CC);
    MEM16(esp + 0x2C) = LO16(eax);
    eax = MEM32(esi + 4);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x34) = edx;
    if (CMP_A(_fa, _fb)) goto loc_000BCD38; /* ja: above (unsigned >) */

loc_000BCCAC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xBCD48); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000BCCB3u) goto loc_000BCCB3;
    if (_jt == 0x000BCCD8u) goto loc_000BCCD8;
    if (_jt == 0x000BCCFDu) goto loc_000BCCFD;
    if (_jt == 0x000BCD22u) goto loc_000BCD22;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000BCCB3: ;
    eax = MEM32(esp + 0x8C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BCCC9u); RECOMP_ABI_CALL(0x000BA420u, sub_000BA420); /* call 0x000BA420 */

loc_000BCCC9: ;
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 20; return; /* ret 16 */

loc_000BCCD8: ;
    edx = MEM32(esp + 0x8C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BCCEEu); RECOMP_ABI_CALL(0x000BA850u, sub_000BA850); /* call 0x000BA850 */

loc_000BCCEE: ;
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 20; return; /* ret 16 */

loc_000BCCFD: ;
    ecx = MEM32(esp + 0x8C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BCD13u); RECOMP_ABI_CALL(0x000BB6F0u, sub_000BB6F0); /* call 0x000BB6F0 */

loc_000BCD13: ;
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 20; return; /* ret 16 */

loc_000BCD22: ;
    eax = MEM32(esp + 0x8C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BCD38u); RECOMP_ABI_CALL(0x000BABE0u, sub_000BABE0); /* call 0x000BABE0 */

loc_000BCD38: ;
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000BCD60
 * Original: 0x000BCD60 - 0x000BCE34 (212 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCD60: ;
    eax = MEM32(ecx + 0x2E40);
    PUSH32(esp, esi);
    esi = ecx + 0x2E40;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCD8E; /* jne: not equal / not zero */

loc_000BCD73: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BCE2C; /* jge: greater or equal (signed >=) */

loc_000BCD82: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCD73; /* je: equal / zero */

loc_000BCD8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCD9B; /* jne: not equal / not zero */

loc_000BCD95: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000BCD9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCDA5; /* jne: not equal / not zero */

loc_000BCD9F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000BCDA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCDAF; /* jne: not equal / not zero */

loc_000BCDA9: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000BCDAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCDBA; /* jne: not equal / not zero */

loc_000BCDB3: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCDB3; /* je: equal / zero */

loc_000BCDBA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BCE2C; /* jge: greater or equal (signed >=) */

loc_000BCDBF: ;
    /* nop */

loc_000BCDC0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BCE2C; /* jge: greater or equal (signed >=) */

loc_000BCDC6: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCDF7; /* jne: not equal / not zero */

loc_000BCDD9: ;
    /* nop */

loc_000BCDE0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000BCE2C; /* jge: greater or equal (signed >=) */

loc_000BCDEB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCDE0; /* je: equal / zero */

loc_000BCDF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCE04; /* jne: not equal / not zero */

loc_000BCDFE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000BCE04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCE0E; /* jne: not equal / not zero */

loc_000BCE08: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000BCE0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCE18; /* jne: not equal / not zero */

loc_000BCE12: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000BCE18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BCE27; /* jne: not equal / not zero */

loc_000BCE1C: ;
    /* nop */

loc_000BCE20: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BCE20; /* je: equal / zero */

loc_000BCE27: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BCDC0; /* jl: less (signed <) */

loc_000BCE2C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BCE40
 * Original: 0x000BCE40 - 0x000BCE48 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCE40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BCE40: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000BCE50(); return; /* tail jmp 0x000BCE50 */

}

/**
 * sub_000BCE50
 * Original: 0x000BCE50 - 0x000BCEC2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCE50: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x1A4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x198);
    edi = MEM32(eax + 0x1A0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    MEM32(eax + 0x198) = ecx;
    MEM32(eax + 0x1A0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000BCEA8; /* jl: less (signed <) */

loc_000BCE97: ;
    MEM32(eax + 0x198) = 0;
    ecx = 0x13;
    goto loc_000BCEA9;

loc_000BCEA8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BCEA9: ;
    MEM32(eax + ecx * 4 + 0x144) = esi;
    ecx = MEM32(eax + 0x1A8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x1A8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BCED0
 * Original: 0x000BCED0 - 0x000BCF58 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCED0(void)
{

loc_000BCED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x000BCEDEu); RECOMP_ABI_CALL(0x000BA2F0u, sub_000BA2F0); /* call 0x000BA2F0 */

loc_000BCEDE: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000BCF13u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_000BCF13: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x1B8) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BCF60
 * Original: 0x000BCF60 - 0x000BD072 (274 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BCF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BCF60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    MEM32(esi + 0x2EA8) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0x2EA4) = eax;
    PUSH32(esp, 0x000BCF78u); RECOMP_ABI_CALL(0x000BCD60u, sub_000BCD60); /* call 0x000BCD60 */

loc_000BCF78: ;
    ecx = esi;
    PUSH32(esp, 0x000BCF7Fu); RECOMP_ABI_CALL(0x000BB190u, sub_000BB190); /* call 0x000BB190 */

loc_000BCF7F: ;
    edx = 2;
    eax = esi + 0x2EB0;
    /* nop */

loc_000BCF90: ;
    ecx = MEM32(esi + 0x2F00);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + -4) = MEM32(eax + -4) + edi;
    if (((int32_t)MEM32(eax + -4) >= 0)) goto loc_000BCFBA; /* jns: not sign (positive) */

loc_000BCFA2: ;
    edi = edx + -2;
    MEM32(eax + -4) = edi;
    ecx = MEM32(esi + 0x2F00);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + -4) = ebx;

loc_000BCFBA: ;
    ecx = MEM32(esi + 0x2F00);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax) = MEM32(eax) + edi;
    if (((int32_t)MEM32(eax) >= 0)) goto loc_000BCFE1; /* jns: not sign (positive) */

loc_000BCFCB: ;
    edi = edx + -1;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x2F00);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax) = ebx;

loc_000BCFE1: ;
    ecx = MEM32(esi + 0x2F00);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 4) = MEM32(eax + 4) + edi;
    if (((int32_t)MEM32(eax + 4) >= 0)) goto loc_000BD008; /* jns: not sign (positive) */

loc_000BCFF3: ;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x2F00);
    edi = 1;
    edi = edi << LO8(ecx);
    edi = edi | edx;
    MEM32(eax + 4) = edi;

loc_000BD008: ;
    ecx = MEM32(esi + 0x2F00);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    if (((int32_t)MEM32(eax + 8) >= 0)) goto loc_000BD032; /* jns: not sign (positive) */

loc_000BD01A: ;
    edi = edx + 1;
    MEM32(eax + 8) = edi;
    ecx = MEM32(esi + 0x2F00);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 8) = ebx;

loc_000BD032: ;
    ecx = MEM32(esi + 0x2F00);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + edi;
    if (((int32_t)MEM32(eax + 0xC) >= 0)) goto loc_000BD05C; /* jns: not sign (positive) */

loc_000BD044: ;
    edi = edx + 2;
    MEM32(eax + 0xC) = edi;
    ecx = MEM32(esi + 0x2F00);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 0xC) = ebx;

loc_000BD05C: ;
    edx = edx + 5;
    ecx = edx + -2;
    eax = eax + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BCF90; /* jl: less (signed <) */

loc_000BD06E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD080
 * Original: 0x000BD080 - 0x000BD0C4 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD080(void)
{

loc_000BD080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BD089u); RECOMP_ABI_CALL(0x000BB070u, sub_000BB070); /* call 0x000BB070 */

loc_000BD089: ;
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x250);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BD099u); RECOMP_ABI_CALL(0x000BC6B0u, sub_000BC6B0); /* call 0x000BC6B0 */

loc_000BD099: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x2E40;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + edi * 4 + 0x2EAC);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD0D0
 * Original: 0x000BD0D0 - 0x000BD162 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD0D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x2E40) = edi;
    MEM32(esi + 0x2E98) = edi;
    MEM32(esi + 0x2E9C) = edi;
    MEM32(esi + 0x2EA0) = edi;
    MEM32(esi + 0x2EA4) = edi;
    MEM32(esi + 0x2EA8) = edi;
    PUSH32(esp, 0x000BD0FFu); RECOMP_ABI_CALL(0x000BB190u, sub_000BB190); /* call 0x000BB190 */

loc_000BD0FF: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x2EFC) = edi;
    MEM32(esi + 0x2F00) = edi;
    ecx = 0x13;
    edx = 0; /* xor self */

loc_000BD114: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD114; /* jne: not equal / not zero */

loc_000BD120: ;
    MEM32(esi + 0x2EFC) = eax;
    MEM32(esi + 0x2F00) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x2EAC;
    goto loc_000BD140;

    /* nop */
    /* nop */

loc_000BD140: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x2F00);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD140; /* jl: less (signed <) */

loc_000BD15D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD170
 * Original: 0x000BD170 - 0x000BD47E (782 bytes, 198 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD170(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD170: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350466);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x98;
    PUSH32(esp, ebp);
    ebp = ecx;
    _fa = (uint32_t)(MEM8(ebp + 0x3114)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x3114), 1 (8-bit) */
    MEM32(esp + 0xC) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000BD1B3; /* je: equal / zero */

loc_000BD19B: ;
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x98);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

loc_000BD1B3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D4AA4);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000BD1C3u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000BD1C3: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    MEM32(esp + 0xA8) = 0;
    PUSH32(esp, 0x000BD1DCu); RECOMP_ABI_CALL(0x001273D0u, sub_001273D0); /* call 0x001273D0 */

loc_000BD1DC: ;
    ecx = esp + 0x58;
    MEM8(esp + 0xA4) = 1;
    PUSH32(esp, 0x000BD1EDu); RECOMP_ABI_CALL(0x00127EA0u, sub_00127EA0); /* call 0x00127EA0 */

loc_000BD1ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BD22D; /* jne: not equal / not zero */

loc_000BD1F1: ;
    ecx = esp + 0x58;
    MEM8(esp + 0xA4) = LO8(eax);
    PUSH32(esp, 0x000BD201u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000BD201: ;
    ecx = esp + 0x28;
    MEM32(esp + 0xA4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BD215u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000BD215: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x98);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

loc_000BD22D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D4A94);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000BD23Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000BD23E: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    MEM8(esp + 0xAC) = 2;
    PUSH32(esp, 0x000BD254u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_000BD254: ;
    esi = eax;
    ecx = esp + 0x1C;
    MEM32(esp + 0xC) = esi;
    MEM8(esp + 0xA8) = 1;
    PUSH32(esp, 0x000BD26Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000BD26B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BD2AD; /* jne: not equal / not zero */

loc_000BD26F: ;
    ecx = esp + 0x5C;
    MEM8(esp + 0xA8) = 0;
    PUSH32(esp, 0x000BD280u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000BD280: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0xA8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BD294u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000BD294: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x98);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

loc_000BD2AD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C96EC);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000BD2BDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000BD2BD: ;
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0xB0) = 3;
    PUSH32(esp, 0x000BD2D3u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000BD2D3: ;
    ecx = esp + 0x1C;
    esi = eax;
    MEM8(esp + 0xA8) = 1;
    PUSH32(esp, 0x000BD2E6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000BD2E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BD432; /* je: equal / zero */

loc_000BD2EE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_000BD2F0: ;
    ebx = MEM32(esi + 8);
    eax = 0; /* xor self */
    edi = 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_000BD3EE; /* je: equal / zero */

loc_000BD30C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x000BD31Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000BD31C: ;
    ebx = MEM32(esi + 8);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0xB4) = 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    PUSH32(esp, 0x000BD33Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000BD33B: ;
    ecx = esp + 0x54;
    edi = eax;
    MEM8(esp + 0xB0) = 1;
    PUSH32(esp, 0x000BD34Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000BD34E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BD3EE; /* je: equal / zero */

loc_000BD356: ;
    ecx = edi;
    PUSH32(esp, 0x000BD35Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BD35D: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000BD367u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000BD367: ;
    edx = MEM32(ebp + 0x2F0C);
    ebx = ebp + 0x2F08;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000BD380u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000BD380: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD3EE; /* jne: not equal / not zero */

loc_000BD387: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD3EE; /* jne: not equal / not zero */

loc_000BD38B: ;
    ecx = MEM32(ebp + 0x30BC);
    eax = 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD3EE; /* je: equal / zero */

loc_000BD39A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2EAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2EAC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BD3EE; /* je: equal / zero */

loc_000BD3A2: ;
    ebp = ebp + 4;
    ecx = ebp;
    PUSH32(esp, 0x000BD3ACu); RECOMP_ABI_CALL(0x000BD080u, sub_000BD080); /* call 0x000BD080 */

loc_000BD3AC: ;
    ecx = edi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000BD3B7u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000BD3B7: ;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000BD3C1u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000BD3C1: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x000BD3D2u); RECOMP_ABI_CALL(0x000BCED0u, sub_000BCED0); /* call 0x000BCED0 */

loc_000BD3D2: ;
    ecx = MEM32(ebp + 0x2EFC);
    ecx = ecx & MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x250);
    PUSH32(esp, esi);
    ecx = ecx + ebp;
    PUSH32(esp, 0x000BD3EAu); RECOMP_ABI_CALL(0x000BC700u, sub_000BC700); /* call 0x000BC700 */

loc_000BD3EA: ;
    ebp = MEM32(esp + 0x18);

loc_000BD3EE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C96EC);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x000BD3FEu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000BD3FE: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEM8(esp + 0xB8) = 5;
    PUSH32(esp, 0x000BD415u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000BD415: ;
    ecx = esp + 0x44;
    esi = eax;
    MEM8(esp + 0xB0) = 1;
    PUSH32(esp, 0x000BD428u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000BD428: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BD2F0; /* jne: not equal / not zero */

loc_000BD430: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000BD432: ;
    SET_LO8(eax, MEM8(ebp + 0x3114));
    SET_LO8(eax, LO8(eax) | 1);
    ecx = esp + 0x5C;
    MEM8(ebp + 0x3114) = LO8(eax);
    MEM8(esp + 0xA8) = 0;
    PUSH32(esp, 0x000BD451u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000BD451: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0xA8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000BD465u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000BD465: ;
    ecx = MEM32(esp + 0xA0);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD480
 * Original: 0x000BD480 - 0x000BD4B2 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD480(void)
{

loc_000BD480: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2F14;
    eax = 0; /* xor self */
    MEM32(esi + 0x2F0C) = 0x3FFFFFFF;
    MEM32(ecx + 0x1A8) = eax;
    MEM32(ecx + 0x1A4) = eax;
    PUSH32(esp, 0x000BD4A6u); RECOMP_ABI_CALL(0x000BB0D0u, sub_000BB0D0); /* call 0x000BB0D0 */

loc_000BD4A6: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000BD4AEu); RECOMP_ABI_CALL(0x000BCF60u, sub_000BCF60); /* call 0x000BCF60 */

loc_000BD4AE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD4C0
 * Original: 0x000BD4C0 - 0x000BD4C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD4C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD4C0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_000BCD60(); return; /* tail jmp 0x000BCD60 */

}

/**
 * sub_000BD4D0
 * Original: 0x000BD4D0 - 0x000BD51F (79 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD4D0(void)
{

loc_000BD4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0x3D4AC4;
    PUSH32(esp, 0x000BD4E1u); RECOMP_ABI_CALL(0x000BD0D0u, sub_000BD0D0); /* call 0x000BD0D0 */

loc_000BD4E1: ;
    ecx = esi + 0x2F14;
    MEM32(esi + 0x2F0C) = 0x3FFFFFFF;
    MEM32(esi + 0x2F10) = 0xFFFFFFFFu;
    MEM32(esi + 0x2F08) = 0x3D4A68;
    PUSH32(esp, 0x000BD50Au); RECOMP_ABI_CALL(0x000BB1F0u, sub_000BB1F0); /* call 0x000BB1F0 */

loc_000BD50A: ;
    MEM32(esi + 0x2F08) = 0x3D4A80;
    MEM8(esi + 0x3114) = MEM8(esi + 0x3114) & 0xFE;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD520
 * Original: 0x000BD520 - 0x000BD55A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD520: ;
    SET_LO8(ecx, MEM8(0x4DB2A8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000BD554; /* jne: not equal / not zero */

loc_000BD52F: ;
    edx = MEM32(0x4DB2A8);
    edx = edx | eax;
    ecx = 0x4D8190;
    MEM32(0x4DB2A8) = edx;
    PUSH32(esp, 0x000BD547u); RECOMP_ABI_CALL(0x000BD4D0u, sub_000BD4D0); /* call 0x000BD4D0 */

loc_000BD547: ;
    PUSH32(esp, 0x35A0D0);
    PUSH32(esp, 0x000BD551u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000BD551: ;
    esp = esp + 4;

loc_000BD554: ;
    eax = 0x4D8190;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD560
 * Original: 0x000BD560 - 0x000BD59E (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD560(void)
{
    int _flags = 0; /* fallback flag var */

loc_000BD560: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x205C);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x1858) = MEM32(eax + edx * 4 + 0x1858) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x1858) >= 0)) goto loc_000BD59A; /* jns: not sign (positive) */

loc_000BD57D: ;
    MEM32(eax + edx * 4 + 0x1858) = edx;
    ecx = MEM32(eax + 0x205C);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x1858) = esi;

loc_000BD59A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD5A0
 * Original: 0x000BD5A0 - 0x000BD5A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5A0(void)
{

loc_000BD5A0: ;
    MEM32(ecx) = 0x3D4AE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD5B0
 * Original: 0x000BD5B0 - 0x000BD5CF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD5B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D4AE4;
    if (TEST_Z(_fa, _fb)) goto loc_000BD5C9; /* je: equal / zero */

loc_000BD5C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000BD5C6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000BD5C6: ;
    esp = esp + 4;

loc_000BD5C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD5D0
 * Original: 0x000BD5D0 - 0x000BD5E7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5D0(void)
{

loc_000BD5D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x804) = ecx;
    MEM32(eax + 0x808) = ecx;
    MEM32(eax + 0x80C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000BD5F0
 * Original: 0x000BD5F0 - 0x000BD602 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD5F0(void)
{

loc_000BD5F0: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x200;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD610
 * Original: 0x000BD610 - 0x000BD61C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD610(void)
{

loc_000BD610: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BD618u); RECOMP_ABI_CALL(0x000BD5D0u, sub_000BD5D0); /* call 0x000BD5D0 */

loc_000BD618: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD620
 * Original: 0x000BD620 - 0x000BD682 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD620: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1408) = esi;
    MEM32(ecx + 0x140C) = esi;
    MEM32(ecx + 0x1410) = esi;
    edx = 0; /* xor self */
    goto loc_000BD640;

    /* nop */

loc_000BD640: ;
    eax = MEM32(ecx + 0x1408);
    edi = MEM32(ecx + 0x1410);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(ecx + 0x1408) = eax;
    MEM32(ecx + 0x1410) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000BD66E; /* jl: less (signed <) */

loc_000BD661: ;
    MEM32(ecx + 0x1408) = esi;
    eax = 0xFF;
    goto loc_000BD66F;

loc_000BD66E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BD66F: ;
    MEM32(ecx + eax * 4 + 0x1004) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD640; /* jl: less (signed <) */

loc_000BD67F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD690
 * Original: 0x000BD690 - 0x000BD6E7 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD690: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0x100;
    goto loc_000BD6A0;

    /* nop */

loc_000BD6A0: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD6A0; /* jne: not equal / not zero */

loc_000BD6AC: ;
    ecx = esi + 0x1004;
    PUSH32(esp, 0x000BD6B7u); RECOMP_ABI_CALL(0x000A3490u, sub_000A3490); /* call 0x000A3490 */

loc_000BD6B7: ;
    eax = 0; /* xor self */
    ecx = esi + 0x1414;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    ecx = esi;
    MEM32(esi + 0x1434) = eax;
    PUSH32(esp, 0x000BD6E3u); RECOMP_ABI_CALL(0x000BD620u, sub_000BD620); /* call 0x000BD620 */

loc_000BD6E3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD6F0
 * Original: 0x000BD6F0 - 0x000BD752 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD6F0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1808) = esi;
    MEM32(ecx + 0x180C) = esi;
    MEM32(ecx + 0x1810) = esi;
    edx = 0; /* xor self */
    goto loc_000BD710;

    /* nop */

loc_000BD710: ;
    eax = MEM32(ecx + 0x1808);
    edi = MEM32(ecx + 0x1810);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    MEM32(ecx + 0x1808) = eax;
    MEM32(ecx + 0x1810) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000BD73E; /* jl: less (signed <) */

loc_000BD731: ;
    MEM32(ecx + 0x1808) = esi;
    eax = 0x1FF;
    goto loc_000BD73F;

loc_000BD73E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BD73F: ;
    MEM32(ecx + eax * 4 + 0x1004) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD710; /* jl: less (signed <) */

loc_000BD74F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD760
 * Original: 0x000BD760 - 0x000BD7C2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD760: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1008) = esi;
    MEM32(ecx + 0x100C) = esi;
    MEM32(ecx + 0x1010) = esi;
    edx = 0; /* xor self */
    goto loc_000BD780;

    /* nop */

loc_000BD780: ;
    eax = MEM32(ecx + 0x1008);
    edi = MEM32(ecx + 0x1010);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    MEM32(ecx + 0x1008) = eax;
    MEM32(ecx + 0x1010) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000BD7AE; /* jl: less (signed <) */

loc_000BD7A1: ;
    MEM32(ecx + 0x1008) = esi;
    eax = 0x1FF;
    goto loc_000BD7AF;

loc_000BD7AE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BD7AF: ;
    MEM32(ecx + eax * 4 + 0x804) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD780; /* jl: less (signed <) */

loc_000BD7BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD7D0
 * Original: 0x000BD7D0 - 0x000BD800 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD7D0(void)
{

loc_000BD7D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x804;
    PUSH32(esp, 0x000BD7DFu); RECOMP_ABI_CALL(0x000BD610u, sub_000BD610); /* call 0x000BD610 */

loc_000BD7DF: ;
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = esi + 0x1014;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x1054) = eax;
    PUSH32(esp, 0x000BD7FBu); RECOMP_ABI_CALL(0x000BD760u, sub_000BD760); /* call 0x000BD760 */

loc_000BD7FB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD800
 * Original: 0x000BD800 - 0x000BD848 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi;
    ecx = 0x200;
    goto loc_000BD810;

    /* nop */

loc_000BD810: ;
    MEM32(eax) = 0;
    eax = eax + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000BD810; /* jne: not equal / not zero */

loc_000BD81C: ;
    ecx = esi + 0x1004;
    PUSH32(esp, 0x000BD827u); RECOMP_ABI_CALL(0x000BD610u, sub_000BD610); /* call 0x000BD610 */

loc_000BD827: ;
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = esi + 0x1814;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x1854) = eax;
    PUSH32(esp, 0x000BD843u); RECOMP_ABI_CALL(0x000BD6F0u, sub_000BD6F0); /* call 0x000BD6F0 */

loc_000BD843: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD850
 * Original: 0x000BD850 - 0x000BD8B4 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BD859u); RECOMP_ABI_CALL(0x000BD800u, sub_000BD800); /* call 0x000BD800 */

loc_000BD859: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x2058) = eax;
    MEM32(esi + 0x205C) = eax;
    edx = 0x1FF;
    edi = 0; /* xor self */

loc_000BD870: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD870; /* jne: not equal / not zero */

loc_000BD87C: ;
    MEM32(esi + 0x2058) = ecx;
    MEM32(esi + 0x205C) = edi;
    edx = esi + 0x1858;
    edi = edi;

loc_000BD890: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x205C);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD890; /* jl: less (signed <) */

loc_000BD8AF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD8C0
 * Original: 0x000BD8C0 - 0x000BD924 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD8C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000BD8C9u); RECOMP_ABI_CALL(0x000BD7D0u, sub_000BD7D0); /* call 0x000BD7D0 */

loc_000BD8C9: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x1858) = eax;
    MEM32(esi + 0x185C) = eax;
    edx = 0x1FF;
    edi = 0; /* xor self */

loc_000BD8E0: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BD8E0; /* jne: not equal / not zero */

loc_000BD8EC: ;
    MEM32(esi + 0x1858) = ecx;
    MEM32(esi + 0x185C) = edi;
    edx = esi + 0x1058;
    edi = edi;

loc_000BD900: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x185C);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BD900; /* jl: less (signed <) */

loc_000BD91F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD930
 * Original: 0x000BD930 - 0x000BD938 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BD930: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000BD940(); return; /* tail jmp 0x000BD940 */

}

/**
 * sub_000BD940
 * Original: 0x000BD940 - 0x000BD9B5 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD940: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x1414;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1408);
    edi = MEM32(eax + 0x1410);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    MEM32(eax + 0x1408) = ecx;
    MEM32(eax + 0x1410) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000BD99B; /* jl: less (signed <) */

loc_000BD98A: ;
    MEM32(eax + 0x1408) = 0;
    ecx = 0xFF;
    goto loc_000BD99C;

loc_000BD99B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000BD99C: ;
    MEM32(eax + ecx * 4 + 0x1004) = esi;
    ecx = MEM32(eax + 0x1434);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x1434) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BD9C0
 * Original: 0x000BD9C0 - 0x000BD9CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD9C0(void)
{

loc_000BD9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000BD9C8u); RECOMP_ABI_CALL(0x000BD850u, sub_000BD850); /* call 0x000BD850 */

loc_000BD9C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BD9D0
 * Original: 0x000BD9D0 - 0x000BDABB (235 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BD9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BD9D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(esi + 0x1854) = 0;
    ecx = 0x10;
    edi = esi + 0x1814;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 0x000BD9F5u); RECOMP_ABI_CALL(0x000BD6F0u, sub_000BD6F0); /* call 0x000BD6F0 */

loc_000BD9F5: ;
    edx = 2;
    eax = esi + 0x185C;

loc_000BDA00: ;
    ecx = MEM32(esi + 0x205C);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + -4) = MEM32(eax + -4) + edi;
    if (((int32_t)MEM32(eax + -4) >= 0)) goto loc_000BDA2A; /* jns: not sign (positive) */

loc_000BDA12: ;
    edi = edx + -2;
    MEM32(eax + -4) = edi;
    ecx = MEM32(esi + 0x205C);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + -4) = ebx;

loc_000BDA2A: ;
    ecx = MEM32(esi + 0x205C);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax) = MEM32(eax) + edi;
    if (((int32_t)MEM32(eax) >= 0)) goto loc_000BDA51; /* jns: not sign (positive) */

loc_000BDA3B: ;
    edi = edx + -1;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x205C);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax) = ebx;

loc_000BDA51: ;
    ecx = MEM32(esi + 0x205C);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 4) = MEM32(eax + 4) + edi;
    if (((int32_t)MEM32(eax + 4) >= 0)) goto loc_000BDA78; /* jns: not sign (positive) */

loc_000BDA63: ;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x205C);
    edi = 1;
    edi = edi << LO8(ecx);
    edi = edi | edx;
    MEM32(eax + 4) = edi;

loc_000BDA78: ;
    ecx = MEM32(esi + 0x205C);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    if (((int32_t)MEM32(eax + 8) >= 0)) goto loc_000BDAA2; /* jns: not sign (positive) */

loc_000BDA8A: ;
    edi = edx + 1;
    MEM32(eax + 8) = edi;
    ecx = MEM32(esi + 0x205C);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 8) = ebx;

loc_000BDAA2: ;
    edx = edx + 4;
    ecx = edx + -2;
    eax = eax + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BDA00; /* jl: less (signed <) */

loc_000BDAB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDAC0
 * Original: 0x000BDAC0 - 0x000BDAFA (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDAC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    ecx = esi + 0x804;
    MEM32(esi + 0x306C) = ebx;
    MEM32(esi + 0x3068) = ebx;
    MEM8(esi + 0x3070) = LO8(ebx);
    PUSH32(esp, 0x000BDAE3u); RECOMP_ABI_CALL(0x000BD9D0u, sub_000BD9D0); /* call 0x000BD9D0 */

loc_000BDAE3: ;
    eax = 0; /* xor self */

loc_000BDAE5: ;
    MEM32(esi + eax * 4) = ebx;
    MEM32(esi + eax * 4 + 0x2864) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000BDAE5; /* jl: less (signed <) */

loc_000BDAF7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDB00
 * Original: 0x000BDB00 - 0x000BDB2E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDB00(void)
{

loc_000BDB00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x804;
    PUSH32(esp, 0x000BDB0Eu); RECOMP_ABI_CALL(0x000BD9C0u, sub_000BD9C0); /* call 0x000BD9C0 */

loc_000BDB0E: ;
    ecx = esi + 0x2864;
    PUSH32(esp, 0x000BDB19u); RECOMP_ABI_CALL(0x000BD5F0u, sub_000BD5F0); /* call 0x000BD5F0 */

loc_000BDB19: ;
    ecx = esi;
    MEM32(esi + 0x3068) = 0;
    PUSH32(esp, 0x000BDB2Au); RECOMP_ABI_CALL(0x000BDAC0u, sub_000BDAC0); /* call 0x000BDAC0 */

loc_000BDB2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000BDB30
 * Original: 0x000BDB30 - 0x000BDBF2 (194 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDB30(void)
{

loc_000BDB30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350478);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    edi = 0; /* xor self */
    ecx = esi + 4;
    MEM32(esp + 0x14) = edi;
    MEM32(esi) = 0x3D4B7C;
    PUSH32(esp, 0x000BDB62u); RECOMP_ABI_CALL(0x000BD8C0u, sub_000BD8C0); /* call 0x000BD8C0 */

loc_000BDB62: ;
    ecx = esi + 0x1870;
    MEM32(esi + 0x1868) = 0x3FFFFFFF;
    MEM32(esi + 0x186C) = 0xFFFFFFFFu;
    MEM32(esi + 0x1864) = 0x3D4B4C;
    PUSH32(esp, 0x000BDB8Bu); RECOMP_ABI_CALL(0x000BD690u, sub_000BD690); /* call 0x000BD690 */

loc_000BDB8B: ;
    ecx = esi + 0x30AC;
    MEM32(esi + 0x1864) = 0x3D4B64;
    PUSH32(esp, 0x000BDBA0u); RECOMP_ABI_CALL(0x000BD850u, sub_000BD850); /* call 0x000BD850 */

loc_000BDBA0: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xBDB00);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3074);
    eax = esi + 0x5110;
    PUSH32(esp, eax);
    MEM32(esi + 0x510C) = edi;
    PUSH32(esp, 0x000BDBC3u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000BDBC3: ;
    eax = 0; /* xor self */
    edi = esi + 0x8184;
    ecx = 0x800;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi + 0xA188;
    ecx = 0x700;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000BDC00
 * Original: 0x000BDC00 - 0x000BDC0D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDC00(void)
{

loc_000BDC00: ;
    eax = MEM32(ecx + 0x185C);
    eax = eax & MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDC10
 * Original: 0x000BDC10 - 0x000BDC1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDC10(void)
{

loc_000BDC10: ;
    ecx = MEM32(ecx + 0x510C);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDC20
 * Original: 0x000BDC20 - 0x000BDC2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDC20(void)
{

loc_000BDC20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    MEM32(ecx + 0x510C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDC30
 * Original: 0x000BDC30 - 0x000BDC41 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDC30(void)
{

loc_000BDC30: ;
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000BDC3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BDC3E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDC50
 * Original: 0x000BDC50 - 0x000BDC88 (56 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDC50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000BDC61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BDC61: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BDC82; /* je: equal / zero */

loc_000BDC67: ;
    PUSH32(esp, 0x000BDC6Cu); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_000BDC6C: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000BDC75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BDC75: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000BDC82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BDC82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDC90
 * Original: 0x000BDC90 - 0x000BDCCE (62 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDC90: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    PUSH32(esp, esi);
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 0x1018)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + ecx * 4 + 0x1018), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BDCC8; /* je: equal / zero */

loc_000BDCB1: ;
    edx = MEM32(eax + edx * 4 + 0x105C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000BDCC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000BDCC4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000BDCC8: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDCD0
 * Original: 0x000BDCD0 - 0x000BDD0F (63 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDCD0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, esi);
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 0x1018)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + ecx * 4 + 0x1018), esi (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000BDD02; /* je: equal / zero */

loc_000BDCF2: ;
    edx = MEM32(eax + edx * 4 + 0x105C);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

loc_000BDD02: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BDD10
 * Original: 0x000BDD10 - 0x000BDD21 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDD10(void)
{

loc_000BDD10: ;
    eax = MEM32(esp + 4);
    eax = eax << 6;
    eax = eax + ecx + 0xA188;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDD30
 * Original: 0x000BDD30 - 0x000BDD41 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDD30(void)
{

loc_000BDD30: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    eax = eax + ecx + 0x8184;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDD50
 * Original: 0x000BDD50 - 0x000BDF1F (463 bytes, 163 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDD50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BDD50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    ecx = ebx + 0xA1C8;
    PUSH32(esp, edi);
    eax = eax & 0x1FF;
    edi = 2;
    MEM32(esp + 0x14) = ecx;
    edi = edi;

loc_000BDD70: ;
    ecx = edi + -2;
    edx = ecx;
    ecx = ecx & 0x1F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(ecx + edx * 4);
    edx = edx + eax * 4;
    ecx = MEM32(ebx + edx * 4 + 0x8184);
    ebp = ebp & esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDDCC; /* je: equal / zero */

loc_000BDDA3: ;
    edx = MEM32(esp + 0x14);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = edx + ecx * 4 + -64;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ecx = MEM32(edx);
    if (TEST_Z(_fa, _fb)) goto loc_000BDDC6; /* je: equal / zero */

loc_000BDDC2: ;
    ecx = ecx | esi;
    goto loc_000BDDCA;

loc_000BDDC6: ;
    esi = ~esi;
    ecx = ecx & esi;

loc_000BDDCA: ;
    MEM32(edx) = ecx;

loc_000BDDCC: ;
    ecx = edi + -1;
    edx = ecx;
    ecx = ecx & 0x1F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(ecx + edx * 4);
    edx = edx + eax * 4;
    ecx = MEM32(ebx + edx * 4 + 0x8184);
    ebp = ebp & esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE27; /* je: equal / zero */

loc_000BDDFF: ;
    edx = MEM32(esp + 0x14);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = edx + ecx * 4;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ecx = MEM32(edx);
    if (TEST_Z(_fa, _fb)) goto loc_000BDE21; /* je: equal / zero */

loc_000BDE1D: ;
    ecx = ecx | esi;
    goto loc_000BDE25;

loc_000BDE21: ;
    esi = ~esi;
    ecx = ecx & esi;

loc_000BDE25: ;
    MEM32(edx) = ecx;

loc_000BDE27: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebp = MEM32(ecx + edx * 4);
    edx = edx + eax * 4;
    ecx = MEM32(ebx + edx * 4 + 0x8184);
    ebp = ebp & esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDE82; /* je: equal / zero */

loc_000BDE59: ;
    edx = MEM32(esp + 0x14);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = edx + ecx * 4 + 0x40;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ecx = MEM32(edx);
    if (TEST_Z(_fa, _fb)) goto loc_000BDE7C; /* je: equal / zero */

loc_000BDE78: ;
    ecx = ecx | esi;
    goto loc_000BDE80;

loc_000BDE7C: ;
    esi = ~esi;
    ecx = ecx & esi;

loc_000BDE80: ;
    MEM32(edx) = ecx;

loc_000BDE82: ;
    ecx = edi + 1;
    edx = ecx;
    ecx = ecx & 0x1F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(ecx + edx * 4);
    edx = edx + eax * 4;
    ecx = MEM32(ebx + edx * 4 + 0x8184);
    ebp = ebp & esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000BDEE1; /* je: equal / zero */

loc_000BDEB5: ;
    edx = MEM32(esp + 0x14);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = edx + ecx * 4 + 0x80;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ecx = MEM32(edx);
    if (TEST_Z(_fa, _fb)) goto loc_000BDEDB; /* je: equal / zero */

loc_000BDED7: ;
    ecx = ecx | esi;
    goto loc_000BDEDF;

loc_000BDEDB: ;
    esi = ~esi;
    ecx = ecx & esi;

loc_000BDEDF: ;
    MEM32(edx) = ecx;

loc_000BDEE1: ;
    esi = MEM32(esp + 0x14);
    edi = edi + 4;
    esi = esi + 0x100;
    ecx = edi + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x70 (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000BDD70; /* jl: less (signed <) */

loc_000BDEFE: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0x10);
    eax = eax << 4;
    PUSH32(esp, edx);
    eax = eax + ebx + 0x8184;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000BDF15u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_000BDF15: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000BDF20
 * Original: 0x000BDF20 - 0x000BDF74 (84 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDF20: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3074);
    PUSH32(esp, esi);
    esi = eax + ecx + 0x5110;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000BDF66; /* je: equal / zero */

loc_000BDF3E: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000BDF47u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000BDF47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000BDF66; /* je: equal / zero */

loc_000BDF4B: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    ecx = ecx & 0x1FF;
    edx = MEM32(esi + ecx * 4 + 0x2864);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000BDF66: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000BDF80
 * Original: 0x000BDF80 - 0x000BDF88 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDF80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000BDF80: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_000BDF90(); return; /* tail jmp 0x000BDF90 */

}

/**
 * sub_000BDF90
 * Original: 0x000BDF90 - 0x000BDFD0 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000BDF90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x1858);
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x1058)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x1058), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000BDFCA; /* jne: not equal / not zero */

loc_000BDFA8: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0x1014);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_000BDFCA: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000BDFD0
 * Original: 0x000BDFD0 - 0x000BE01F (79 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BDFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000BDFD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000BE01A; /* je: equal / zero */

loc_000BDFDE: ;
    edx = MEM32(esi + 0x185C);
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x105C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x105C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000BE01A; /* jne: not equal / not zero */

loc_000BDFEF: ;
    PUSH32(esp, ebx);
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x1018)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + edx * 4 + 0x1018), ebx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000BE01A; /* je: equal / zero */

loc_000BE00E: ;
    eax = MEM32(esi + 0x185C);
    eax = eax & edi;
    eax = MEM32(esi + eax * 4 + 4);

loc_000BE01A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
