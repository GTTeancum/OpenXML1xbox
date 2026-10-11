/**
 * X-Men Legends - Recompiled code chunk 35
 * Functions: 250 (0x00192530 - 0x0019CAE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/resources/parser_text_arena_guest.h"
#include <math.h>

/**
 * sub_00192530
 * Original: 0x00192530 - 0x00192556 (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192530: ;
    edx = MEM32(ecx + 0x11C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00192555; /* jbe: below or equal (unsigned <=) */

loc_0019253C: ;
    edx = ecx + 0x14;
    PUSH32(esp, esi);

loc_00192540: ;
    esi = MEM32(edx);
    MEM8(esi + 3) = 1;
    esi = MEM32(ecx + 0x11C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00192540; /* jb: below (unsigned <) */

loc_00192554: ;
    POP32(esp, esi);

loc_00192555: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00192560
 * Original: 0x00192560 - 0x001925B0 (80 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192560: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    esi = ecx + 0x54;

loc_00192568: ;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x40), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019258A; /* jne: not equal / not zero */

loc_0019256E: ;
    edi = MEM32(ecx + 0x11C);
    eax = 0; /* xor self */
    edx = esi;

loc_00192578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019259B; /* jae: above or equal (unsigned >=) */

loc_0019257C: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x8000000Au (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019258A; /* je: equal / zero */

loc_00192584: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x20;
    goto loc_00192578;

loc_0019258A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00192568; /* jb: below (unsigned <) */

loc_00192593: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0019259B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001925A5; /* je: equal / zero */

loc_001925A3: ;
    MEM32(eax) = ebx;

loc_001925A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001925B0
 * Original: 0x001925B0 - 0x0019260E (94 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001925B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001925B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001925F4; /* jbe: below or equal (unsigned <=) */

loc_001925BF: ;
    edx = MEM32(ecx + 0x24);

loc_001925C2: ;
    eax = edx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    ebp = MEM32(ecx + eax * 4 + 0x34);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001925F4; /* jne: not equal / not zero */

loc_001925CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001925E0; /* jne: not equal / not zero */

loc_001925D4: ;
    ebp = 0x9000;
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(MEM32(ecx + 0x28)));
    ebp = ebp - MEM32(ecx + 0x28);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebp)) >> 32) & 1);
    esi = esi + ebp;
    goto loc_001925E6;

loc_001925E0: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x9000)) >> 32) & 1);
    esi = esi + 0x9000;

loc_001925E6: ;
    ebp = MEM32(ecx + eax * 4 + 0x2C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00192604; /* jne: not equal / not zero */

loc_001925EE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001925C2; /* jb: below (unsigned <) */

loc_001925F4: ;
    edx = MEM32(ecx + 0x114);
    POP32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00192604: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00192610
 * Original: 0x00192610 - 0x0019261B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192610(void)
{

loc_00192610: ;
    MEM32(ecx + 0x130) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00192620
 * Original: 0x00192620 - 0x00192749 (297 bytes, 98 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192620: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esi + 0x11C);
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(esi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = eax + eax * 8;
    edx = edx << 0xC;
    edx = edx + ebx;
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x11C);
    eax = eax + eax * 8;
    eax = eax << 0xC;
    MEM32(edi + 4) = eax;
    ebx = MEM32(edi + 4);
    edx = esi + ecx * 4 + 0x34;
    eax = esi + ecx * 4 + 0x3C;
    MEM32(edi + 0xC) = edx;
    MEM32(edi + 8) = eax;
    edx = MEM32(esi + 0x100);
    eax = MEM32(esi + 0x104);
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001926C7; /* jb: below (unsigned <) */

loc_0019268A: ;
    eax = eax - edx;
    MEM32(edi + 4) = eax;
    edx = MEM32(esi + 0x11C);
    ebx = MEM32(esi + 0x100);
    eax = 1;
    eax = eax - edx;
    edx = eax + eax * 8;
    eax = MEM32(esi + 0x104);
    edx = edx << 0xC;
    edx = edx - ebx;
    edx = edx + eax;
    MEM32(esi + ecx * 4 + 0x2C) = edx;
    eax = MEM32(edi + 4);
    eax = eax + 0x7FF;
    eax = eax >> 0xB;
    eax = eax << 0xB;
    MEM32(edi + 4) = eax;

loc_001926C7: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x001926D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001926D4: ;
    edx = MEM32(edi + 4);
    edi = MEM32(esi + 0x100);
    ecx = MEM32(esi + 0x104);
    edi = edi + edx;
    edx = MEM32(esi + 0x20);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x100) = edi;
    MEM32(esi + 0x20) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00192741; /* jb: below (unsigned <) */

loc_001926F8: ;
    edx = MEM32(esi + 0xF8);
    ecx = MEM32(esi + 0xF4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0xF8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_00192731; /* jae: above or equal (unsigned >=) */

loc_00192711: ;
    edx = MEM32(esi + 0xFC);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00192723u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192723: ;
    POP32(esp, edi);
    MEM32(esi + 0x100) = ebx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00192731: ;
    MEM32(esi + 0x168) = 1;
    MEM32(esi + 0x164) = ebx;

loc_00192741: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00192750
 * Original: 0x00192750 - 0x0019287F (303 bytes, 100 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192750(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192750: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x11C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00192795; /* jbe: below or equal (unsigned <=) */

loc_00192763: ;
    ebx = esi + 0xC;
    ebp = 0x40000;
    goto loc_00192770;

    /* nop */

loc_00192770: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0019277Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019277D: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x10), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192816; /* jne: not equal / not zero */

loc_00192787: ;
    eax = MEM32(esi + 0x11C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00192770; /* jb: below (unsigned <) */

loc_00192795: ;
    eax = MEM32(esi + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = 0;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0019286A; /* jbe: below or equal (unsigned <=) */

loc_001927AF: ;
    edi = MEM32(esp + 0x1C);
    eax = esi + ebx * 4 + 0x54;
    ebp = esi + 0xC;
    MEM32(esp + 0x18) = eax;
    edi = edi;

loc_001927C0: ;
    ecx = 0; /* xor self */
    edx = edi;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(esi + 0x114);
    edx = MEM32(ebp + 0x38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = ecx + edx;
    MEM32(edi) = ecx;
    MEM32(edi + 0xC) = eax;
    edx = MEM32(esi + ebx * 4 + 0xB4);
    MEM32(edi + 4) = edx;
    MEM32(esi + ebx * 4 + 0x94) = 2;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019282B; /* je: equal / zero */

loc_00192804: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x00192810u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192810: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00192877; /* jl: less (signed <) */

loc_00192814: ;
    goto loc_00192831;

loc_00192816: ;
    POP32(esp, edi);
    MEM32(esi + 0x164) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0019282B: ;
    MEM32(eax) = 0;

loc_00192831: ;
    eax = MEM32(esi + ebx * 4 + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192845; /* je: equal / zero */

loc_0019283C: ;
    eax = MEM32(ebp);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00192845u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192845: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x11C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x20;
    ebp = ebp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001927C0; /* jb: below (unsigned <) */

loc_0019286A: ;
    MEM32(esi + ebx * 4 + 0xD4) = 0;
    eax = 0; /* xor self */

loc_00192877: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00192880
 * Original: 0x00192880 - 0x001928A2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192880: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 0xF8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xF8), eax (32-bit) */
    MEM32(ecx + 0xF4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0019289F; /* jb: below (unsigned <) */

loc_00192892: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

loc_0019289F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001928B0
 * Original: 0x001928B0 - 0x00192914 (100 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001928B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001928B0: ;
    eax = MEM32(ecx + 0x11C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00192910; /* jbe: below or equal (unsigned <=) */

loc_001928BD: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx + 0x124;
    eax = ecx + 0x138;

loc_001928D4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esi) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_001928FC; /* je: equal / zero */

loc_001928DA: ;
    ebp = MEM32(edx);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx + 0xC);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(edx + 0x10);
    MEM32(eax + 0xC) = ebp;
    ebp = MEM32(edx + 0x14);
    MEM32(eax + 0x10) = ebp;

loc_001928FC: ;
    ebp = MEM32(ecx + 0x11C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    eax = eax + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001928D4; /* jb: below (unsigned <) */

loc_0019290D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00192910: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00192920
 * Original: 0x00192920 - 0x001929C0 (160 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192920: ;
    eax = MEM32(ecx + 0x11C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001929B6; /* jbe: below or equal (unsigned <=) */

loc_00192931: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi = edi - ebp;
    eax = ebp;
    esi = ecx + 0x124;
    edx = ecx + 0x138;
    MEM32(esp + 0x18) = edi;
    goto loc_00192956;

loc_00192952: ;
    edi = MEM32(esp + 0x18);

loc_00192956: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    edi = MEM32(edi + eax);
    MEM32(esi) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00192991; /* je: equal / zero */

loc_0019295F: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192991; /* je: equal / zero */

loc_00192965: ;
    edi = MEM32(edi);
    MEM32(edx + -4) = edi;
    edi = MEM32(eax);
    edi = MEM32(edi + 4);
    MEM32(edx) = edi;
    edi = MEM32(eax);
    edi = MEM32(edi + 8);
    MEM32(edx + 4) = edi;
    edi = MEM32(eax);
    edi = MEM32(edi + 0xC);
    MEM32(edx + 8) = edi;
    edi = MEM32(eax);
    edi = MEM32(edi + 0x10);
    MEM32(edx + 0xC) = edi;
    edi = MEM32(eax);
    edi = MEM32(edi + 0x14);
    MEM32(edx + 0x10) = edi;

loc_00192991: ;
    edi = MEM32(ecx + 0x11C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    eax = eax + 4;
    edx = edx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00192952; /* jb: below (unsigned <) */

loc_001929A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x12C) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001929B6: ;
    MEM32(ecx + 0x12C) = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001929C0
 * Original: 0x001929C0 - 0x001929D0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001929C0(void)
{

loc_001929C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x120) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001929D0
 * Original: 0x001929D0 - 0x001929D7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001929D0(void)
{

loc_001929D0: ;
    eax = MEM32(ecx + 0x164);
    esp += 4; return; /* ret */

}

/**
 * sub_001929E0
 * Original: 0x001929E0 - 0x001929E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001929E0(void)
{

loc_001929E0: ;
    MEM32(ecx) = 0x3E09E4;
    esp += 4; return; /* ret */

}

/**
 * sub_001929F0
 * Original: 0x001929F0 - 0x00192A0F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001929F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001929F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3E09E4;
    if (TEST_Z(_fa, _fb)) goto loc_00192A09; /* je: equal / zero */

loc_00192A00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00192A06u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00192A06: ;
    esp = esp + 4;

loc_00192A09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00192A10
 * Original: 0x00192A10 - 0x00192B0A (250 bytes, 94 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192A10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192A10: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    /* nop */

loc_00192A20: ;
    esi = MEM32(esp + 0x1C);
    edi = 0; /* xor self */
    esi = esi + 0x14;
    ebp = 8;
    edi = edi;

loc_00192A30: ;
    _fa = (uint32_t)(MEM8(esi + -6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -6), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192A4B; /* je: equal / zero */

loc_00192A35: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192A40; /* je: equal / zero */

loc_00192A3B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00192A40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192A40: ;
    MEM8(esi + -7) = 1;
    MEM8(esi + -8) = 1;
    MEM8(esi + -6) = LO8(ebx);

loc_00192A4B: ;
    _fa = (uint32_t)(MEM8(esi + -7)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -7), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192A93; /* je: equal / zero */

loc_00192A50: ;
    SET_LO8(eax, MEM8(esi + -8));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192A6A; /* je: equal / zero */

loc_00192A58: ;
    _fa = (uint32_t)(MEM8(esi + -5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -5), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192A98; /* jne: not equal / not zero */

loc_00192A5D: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192A93; /* je: equal / zero */

loc_00192A63: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00192A68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192A68: ;
    goto loc_00192A93;

loc_00192A6A: ;
    eax = MEM32(esi + -4);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00192A78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192A78: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x10), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192A93; /* jne: not equal / not zero */

loc_00192A82: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192A8E; /* je: equal / zero */

loc_00192A88: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00192A8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192A8E: ;
    MEM32(esi) = ebx;
    MEM8(esi + -7) = LO8(ebx);

loc_00192A93: ;
    _fa = (uint32_t)(MEM8(esi + -5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -5), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192AC9; /* je: equal / zero */

loc_00192A98: ;
    eax = MEM32(esi + -4);
    ecx = MEM32(eax);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00192AA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192AA6: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x14), 0x10000 (32-bit) */
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00192ABA; /* je: equal / zero */

loc_00192AB4: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, eax);
    goto loc_00192ABE;

loc_00192ABA: ;
    ecx = MEM32(esi + -4);
    PUSH32(esp, ecx);

loc_00192ABE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x00192AC3u); RECOMP_ICALL_SAFE(0x00370835u, _icall_esp); /* manual call 0x00370835 */
    }

loc_00192AC3: ;
    MEM8(esi + -8) = LO8(ebx);
    MEM8(esi + -5) = LO8(ebx);

loc_00192AC9: ;
    esi = esi + 0xC;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00192A30; /* jne: not equal / not zero */

loc_00192AD3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    PUSH32(esp, 0x10);
    if (CMP_LE(_fas, _fbs)) goto loc_00192AE3; /* jle: less or equal (signed <=) */

loc_00192AD9: ;
    PUSH32(esp, 0x00192ADEu); RECOMP_ABI_CALL(0x0019F583u, sub_0019F583); /* call 0x0019F583 */

loc_00192ADE: ;
    goto loc_00192A20;

loc_00192AE3: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00192AF0u); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00192AF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192A20; /* je: equal / zero */

loc_00192AFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00192B10
 * Original: 0x00192B10 - 0x00192BBD (173 bytes, 63 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192B10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192B10: ;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0xD;
    ebp = 8;
    ebx = 0; /* xor self */

loc_00192B23: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0xAC44);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 2);
    MEM8(esi + -1) = LO8(ebx);
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 1) = LO8(ebx);
    MEM8(esi + 2) = LO8(ebx);
    MEM32(esi + 7) = ebx;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x00192B5Eu); RECOMP_ABI_CALL(0x0036F65Bu, sub_0036F65B); /* call 0x0036F65B */

loc_00192B5E: ;
    eax = esi + 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    edx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = 8;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x00192B7Cu); RECOMP_ICALL_SAFE(0x00371B3Fu, _icall_esp); /* manual call 0x00371B3F */
    }

loc_00192B7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00192B8D; /* jge: greater or equal (signed >=) */

loc_00192B80: ;
    PUSH32(esp, 0x3E0A10);
    PUSH32(esp, 0x00192B8Au); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00192B8A: ;
    esp = esp + 4;

loc_00192B8D: ;
    esi = esi + 0xC;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00192B23; /* jne: not equal / not zero */

loc_00192B93: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00192B9Du); RECOMP_ABI_CALL(0x0019F2A9u, sub_0019F2A9); /* call 0x0019F2A9 */

loc_00192B9D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x192A10);
    PUSH32(esp, 0x3000);
    PUSH32(esp, ebx);
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x00192BB3u); RECOMP_ABI_CALL(0x0019F22Eu, sub_0019F22E); /* call 0x0019F22E */

loc_00192BB3: ;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00192BC0
 * Original: 0x00192BC0 - 0x00192C9D (221 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192BC0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    MEM32(esi) = 0x3E0A38;
    MEM32(esi + 8) = ebx;
    eax = MEM32(eax + 4);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0xA4) = edx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0xA8) = 0x8000000Au;
    MEM32(esi + 0x9C) = ecx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x5C) = 1;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x84) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    edx = eax + 1;
    /* nop */

loc_00192C60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192C60; /* jne: not equal / not zero */

loc_00192C67: ;
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = MEM32(0x589FF8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00192C77u); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_00192C77: ;
    ecx = edi;
    MEM32(esi + 0x94) = eax;
    edi = eax;

loc_00192C81: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192C81; /* jne: not equal / not zero */

loc_00192C8B: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    MEM32(esi + 0x98) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00192CA0
 * Original: 0x00192CA0 - 0x00192D21 (129 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192CA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354C08);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3E0A38;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x00192CD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192CD4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192CE1; /* je: equal / zero */

loc_00192CDB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00192CE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192CE1: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00192CF6; /* je: equal / zero */

loc_00192CE8: ;
    PUSH32(esp, eax);
    eax = MEM32(0x589FF8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00192CF6u); RECOMP_ABI_CALL(0x0019ED5Eu, sub_0019ED5E); /* call 0x0019ED5E */

loc_00192CF6: ;
    ecx = MEM32(esi + 0x94);
    edx = MEM32(0x589FF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00192D0Bu); RECOMP_ABI_CALL(0x0019ED5Eu, sub_0019ED5E); /* call 0x0019ED5E */

loc_00192D0B: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3E09E4;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00192D30
 * Original: 0x00192D30 - 0x00192DD2 (162 bytes, 52 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00192D30: ;
    eax = MEM32(0x589FF8);
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00192D49u); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_00192D49: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00192D5A; /* je: equal / zero */

loc_00192D56: ;
    eax = 0; /* xor self */
    goto loc_00192D60;

loc_00192D5A: ;
    eax = MEM32(esi + 0x94);

loc_00192D60: ;
    edx = esi + 8;
    PUSH32(esp, edx);
    edi = esi + 0xAC;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 8);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00192D7Du); RECOMP_ABI_CALL(0x0037BCA1u, sub_0037BCA1); /* call 0x0037BCA1 */

loc_00192D7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00192D91; /* jge: greater or equal (signed >=) */

loc_00192D81: ;
    POP32(esp, edi);
    MEM32(esi + 0xA8) = 0x80004005u;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00192D91: ;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00192D9Bu); RECOMP_ICALL_SAFE(0x003713A4u, _icall_esp); /* manual call 0x003713A4 */
    }

loc_00192D9B: ;
    edx = MEM32(esi + 0xC);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 6;
    MEM32(esp + 0x14) = 0x460958;
    PUSH32(esp, 0x00192DB9u); RECOMP_ICALL_SAFE(0x00370D44u, _icall_esp); /* manual call 0x00370D44 */
    }

loc_00192DB9: ;
    POP32(esp, edi);
    MEM32(esi + 0xA8) = 0;
    MEM32(esi + 0x68) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00192DE0
 * Original: 0x00192DE0 - 0x00192FCB (491 bytes, 157 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192DE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192DE0: ;
    esp = esp - 0x64;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xA8);
    eax = 0x80004005u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192FC6; /* je: equal / zero */

loc_00192DF9: ;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192E22; /* je: equal / zero */

loc_00192E03: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x68) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00192E13; /* je: equal / zero */

loc_00192E0D: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x00192E13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192E13: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00192E1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192E1C: ;
    MEM32(esi + 0x90) = ebx;

loc_00192E22: ;
    edx = MEM32(esi + 0x64);
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00192E36u); RECOMP_ICALL_SAFE(0x00370830u, _icall_esp); /* manual call 0x00370830 */
    }

loc_00192E36: ;
    edx = MEM32(esi + 0x6C);
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00192E43u); RECOMP_ICALL_SAFE(0x00370821u, _icall_esp); /* manual call 0x00370821 */
    }

loc_00192E43: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = 6;
    ecx = esi + 0x70;
    eax = 0; /* xor self */
    goto loc_00192E60;

    /* nop */

loc_00192E60: ;
    edx = MEM32(eax + 0x460958);
    MEM32(esp + eax + 0x2C) = edx;
    edx = MEM32(ecx);
    MEM32(esp + eax + 0x30) = edx;
    eax = eax + 8;
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192E60; /* jl: less (signed <) */

loc_00192E7B: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00192E8Au); RECOMP_ICALL_SAFE(0x0037082Bu, _icall_esp); /* manual call 0x0037082B */
    }

loc_00192E8A: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00192E93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192E93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x00192E98u); RECOMP_ICALL_SAFE(0x0037084Du, _icall_esp); /* manual call 0x0037084D */
    }

loc_00192E98: ;
    ebp = esi + 0x1C;
    PUSH32(esp, edi);
    /* nop */

loc_00192EA0: ;
    edi = 0; /* xor self */
    eax = ebp;

loc_00192EA4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x8000000Au (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192EE2; /* jne: not equal / not zero */

loc_00192EAC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00192EA4; /* jb: below (unsigned <) */

loc_00192EB5: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192F80; /* je: equal / zero */

loc_00192EC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192F6D; /* jne: not equal / not zero */

loc_00192ECC: ;
    ecx = MEM32(esi + 0x64);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x90) = edx;
    goto loc_00192F80;

loc_00192EE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x88), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192EB5; /* jne: not equal / not zero */

loc_00192EEA: ;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192EB5; /* jne: not equal / not zero */

loc_00192EF2: ;
    _fa = (uint32_t)(MEM32(esi + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192F02; /* jne: not equal / not zero */

loc_00192EFA: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192EB5; /* je: equal / zero */

loc_00192F02: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00192F0Fu); RECOMP_ABI_CALL(0x00192420u, sub_00192420); /* call 0x00192420 */

loc_00192F0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00192FC3; /* jl: less (signed <) */

loc_00192F17: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192F51; /* je: equal / zero */

loc_00192F1D: ;
    eax = MEM32(esi + 0xC);
    ecx = esi + edi * 4 + 0x1C;
    MEM32(esp + 0x28) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = ebx;
    edx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00192F38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192F38: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192F51; /* jne: not equal / not zero */

loc_00192F40: ;
    ecx = MEM32(esi + 0x64);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x90) = edx;

loc_00192F51: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0x2000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192EA0; /* je: equal / zero */

loc_00192F5F: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x00192F68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192F68: ;
    goto loc_00192EA0;

loc_00192F6D: ;
    edx = MEM32(esi + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax + 2;
    MEM32(esi + 0x90) = eax;

loc_00192F80: ;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x90), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192FC1; /* jne: not equal / not zero */

loc_00192F89: ;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00192FC1; /* je: equal / zero */

loc_00192F91: ;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x88), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00192FC1; /* jne: not equal / not zero */

loc_00192F99: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00192FA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00192FA7: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x10), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00192FC1; /* jne: not equal / not zero */

loc_00192FB1: ;
    MEM32(esi + 0x88) = 1;
    MEM32(esi + 0x8C) = ebx;

loc_00192FC1: ;
    eax = 0; /* xor self */

loc_00192FC3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00192FC6: ;
    POP32(esp, esi);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00192FD0
 * Original: 0x00192FD0 - 0x00193163 (403 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192FD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    esi = ecx;
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x3E0A68;
    if (CMP_BE(_fa, _fb)) goto loc_00193031; /* jbe: below or equal (unsigned <=) */

loc_00192FE8: ;
    edx = esi + 0x134;
    eax = esi + 0xC;

loc_00192FF1: ;
    edi = MEM32(esp + 0x20);
    ebp = MEM32(edi + ecx * 4);
    MEM32(eax + 8) = ebp;
    edi = MEM32(edi + ecx * 4);
    edi = MEM32(edi + 4);
    MEM32(eax) = edi;
    edi = 0; /* xor self */
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x118) = ebx;
    ebp = edx;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = edi;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + 0xC) = edi;
    MEM32(ebp + 0x10) = edi;
    MEM32(ebp + 0x14) = edi;
    edi = MEM32(esp + 0x38);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    edx = edx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00192FF1; /* jb: below (unsigned <) */

loc_00193031: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    SET_LO8(edx, MEM8(esp + 0x28));
    MEM32(esi + 0xFC) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x104) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM8(esi + 0x118) = LO8(edx);
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x10C) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x110) = edx;
    MEM32(esi + 0x11C) = edi;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 0x12C) = 0x258;
    MEM32(esi + 0x178) = 0x8000000Au;
    MEM32(esi + 0xF8) = ebx;
    MEM32(esi + 0xF4) = 1;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x130) = ebx;
    MEM32(esi + 0x164) = ebx;
    MEM32(esi + 0x168) = ebx;
    MEM32(esi + 0x174) = eax;
    MEM32(esi + 0x16C) = ebx;
    MEM32(esi + 0x194) = ecx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x38) = eax;
    edx = esi + 0xB4;
    edi = 8;
    ebp = 2;

loc_001930F3: ;
    ecx = MEM32(esi + 0x11C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00193110; /* jbe: below or equal (unsigned <=) */

loc_001930FF: ;
    ecx = edx + -96;

loc_00193102: ;
    MEM32(ecx) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x11C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x11C) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00193102; /* jb: below (unsigned <) */

loc_00193110: ;
    MEM32(edx) = ebx;
    MEM32(edx + -32) = ebp;
    MEM32(edx + 0x20) = ebx;
    edx = edx + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001930F3; /* jne: not equal / not zero */

loc_0019311E: ;
    edi = MEM32(esp + 0x14);
    eax = edi;
    edx = eax + 1;

loc_00193127: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193127; /* jne: not equal / not zero */

loc_0019312E: ;
    eax = eax - edx;
    edx = MEM32(0x589FF8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0019313Fu); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_0019313F: ;
    ecx = edi;
    MEM32(esi + 0x170) = eax;
    edi = eax;
    /* nop */

loc_00193150: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193150; /* jne: not equal / not zero */

loc_0019315A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00193170
 * Original: 0x00193170 - 0x00193177 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193170(void)
{

loc_00193170: ;
    eax = MEM32(ecx + 0x16C);
    esp += 4; return; /* ret */

}

/**
 * sub_00193180
 * Original: 0x00193180 - 0x0019329C (284 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193180: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354C08);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    MEM32(ebx) = 0x3E0A68;
    eax = MEM32(ebx + 0x11C);
    ebp = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_001931D6; /* jbe: below or equal (unsigned <=) */

loc_001931B8: ;
    edi = ebx + 0xC;
    goto loc_001931C0;

    /* nop */

loc_001931C0: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x001931C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001931C8: ;
    eax = MEM32(ebx + 0x11C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001931C0; /* jb: below (unsigned <) */

loc_001931D6: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001931E3; /* je: equal / zero */

loc_001931DD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001931E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001931E3: ;
    _fa = (uint32_t)(MEM32(ebx + 0x11C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x11C), ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_0019324D; /* jbe: below or equal (unsigned <=) */

loc_001931EF: ;
    ebp = ebx + 0x44;

loc_001931F2: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193237; /* je: equal / zero */

loc_001931F9: ;
    esi = MEM32(ebx + 0x194);
    eax = eax - MEM32(esi + 0x6C);
    ecx = eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xD) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ecx = MEM32(esi + eax * 4 + 0xA8);
    ecx = ecx + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + eax * 4 + 0xA8) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_00193237; /* jge: greater or equal (signed >=) */

loc_0019322D: ;
    edi = esi + eax * 4 + 0x70;
    ecx = ecx - eax;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00193237: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x11C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001931F2; /* jb: below (unsigned <) */

loc_0019324D: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019325D; /* je: equal / zero */

loc_00193254: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019325Au); RECOMP_ABI_CALL(0x00123CD0u, sub_00123CD0); /* call 0x00123CD0 */

loc_0019325A: ;
    esp = esp + 4;

loc_0019325D: ;
    eax = MEM32(ebx + 0x174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019326E; /* je: equal / zero */

loc_00193268: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019326Eu); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0019326E: ;
    eax = MEM32(ebx + 0x170);
    ecx = MEM32(0x589FF8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00193283u); RECOMP_ABI_CALL(0x0019ED5Eu, sub_0019ED5E); /* call 0x0019ED5E */

loc_00193283: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = 0x3E09E4;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001932A0
 * Original: 0x001932A0 - 0x0019336C (204 bytes, 69 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001932A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001932A0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x11C);
    eax = eax + eax * 8;
    eax = eax << 0xD;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001932BAu); RECOMP_ABI_CALL(0x00123CB0u, sub_00123CB0); /* call 0x00123CB0 */

loc_001932BA: ;
    ecx = MEM32(esi + 0x170);
    esp = esp + 4;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ecx);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x001932DEu); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_001932DE: ;
    edi = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esi + 0x174) = eax;
    PUSH32(esp, 0x001932F0u); RECOMP_ABI_CALL(0x00370876u, sub_00370876); /* call 0x00370876 */

loc_001932F0: ;
    eax = MEM32(esi + 0xFC);
    edi = MEM32(edi);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00193301u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193301: ;
    _fa = (uint32_t)(MEM32(esi + 0x11C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x11C), ebx (32-bit) */
    MEM32(esi + 0x100) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00193357; /* jbe: below or equal (unsigned <=) */

loc_0019330F: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x17C;
    edi = esi + 0xC;
    /* nop */

loc_00193320: ;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00193329u); RECOMP_ICALL_SAFE(0x003713A4u, _icall_esp); /* manual call 0x003713A4 */
    }

loc_00193329: ;
    eax = MEM32(edi);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 6;
    MEM32(esp + 0x1C) = 0x460958;
    PUSH32(esp, 0x00193346u); RECOMP_ICALL_SAFE(0x00370D44u, _icall_esp); /* manual call 0x00370D44 */
    }

loc_00193346: ;
    eax = MEM32(esi + 0x11C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00193320; /* jb: below (unsigned <) */

loc_00193354: ;
    ebx = 0; /* xor self */
    POP32(esp, ebp);

loc_00193357: ;
    POP32(esp, edi);
    MEM32(esi + 0x178) = ebx;
    MEM32(esi + 0x130) = ebx;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00193370
 * Original: 0x00193370 - 0x001937E9 (1145 bytes, 359 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00193370(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193370: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x130);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193431; /* je: equal / zero */

loc_0019338F: ;
    eax = MEM32(ebx + 8);
    MEM32(ebx + 0x130) = edi;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0019339Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019339E: ;
    eax = MEM32(ebx + 0x11C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001933C8; /* jbe: below or equal (unsigned <=) */

loc_001933AA: ;
    edi = ebx + 0xC;
    /* nop */

loc_001933B0: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001933B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001933B8: ;
    eax = MEM32(ebx + 0x11C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001933B0; /* jb: below (unsigned <) */

loc_001933C6: ;
    edi = 0; /* xor self */

loc_001933C8: ;
    edx = ebx + 0xB4;
    esi = 8;

loc_001933D3: ;
    ecx = MEM32(ebx + 0x11C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001933F2; /* jbe: below or equal (unsigned <=) */

loc_001933DF: ;
    ecx = edx + -96;

loc_001933E2: ;
    MEM32(ecx) = edi;
    ebp = MEM32(ebx + 0x11C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001933E2; /* jb: below (unsigned <) */

loc_001933F2: ;
    MEM32(edx) = edi;
    MEM32(edx + -32) = 2;
    MEM32(edx + 0x20) = edi;
    edx = edx + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001933D3; /* jne: not equal / not zero */

loc_00193404: ;
    edx = MEM32(ebx + 0xFC);
    eax = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(ebx + 0x20) = edi;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00193419u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193419: ;
    MEM32(ebx + 0x100) = edi;
    MEM32(ebx + 0x164) = edi;
    MEM32(ebx + 0x168) = edi;
    MEM32(ebx + 0x16C) = edi;

loc_00193431: ;
    eax = MEM32(ebx + 0x11C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001934DC; /* jbe: below or equal (unsigned <=) */

loc_00193441: ;
    esi = ebx + 0xC;
    edi = ebx + 0x134;
    /* nop */

loc_00193450: ;
    edx = MEM32(ebx + 0x120);
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193466u); RECOMP_ICALL_SAFE(0x00370830u, _icall_esp); /* manual call 0x00370830 */
    }

loc_00193466: ;
    edx = MEM32(esi + 0x118);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193475u); RECOMP_ICALL_SAFE(0x00370821u, _icall_esp); /* manual call 0x00370821 */
    }

loc_00193475: ;
    ecx = MEM32(ebx + 0x12C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193484u); RECOMP_ICALL_SAFE(0x00370826u, _icall_esp); /* manual call 0x00370826 */
    }

loc_00193484: ;
    eax = esp + 0x40;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = 6;
    eax = 0; /* xor self */
    goto loc_001934A0;

    /* nop */
    /* nop */

loc_001934A0: ;
    ecx = MEM32(eax + 0x460958);
    edx = MEM32(edi);
    MEM32(esp + eax + 0x40) = ecx;
    MEM32(esp + eax + 0x44) = edx;
    eax = eax + 8;
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001934A0; /* jl: less (signed <) */

loc_001934BB: ;
    ecx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001934C8u); RECOMP_ICALL_SAFE(0x0037082Bu, _icall_esp); /* manual call 0x0037082B */
    }

loc_001934C8: ;
    eax = MEM32(ebx + 0x11C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00193450; /* jb: below (unsigned <) */

loc_001934DA: ;
    edi = 0; /* xor self */

loc_001934DC: ;
    eax = MEM32(ebx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001934E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001934E5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x001934EAu); RECOMP_ICALL_SAFE(0x0037084Du, _icall_esp); /* manual call 0x0037084D */
    }

loc_001934EA: ;
    eax = MEM32(ebx + 0x20);
    ebp = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0019353A; /* jae: above or equal (unsigned >=) */

loc_001934F6: ;
    _fa = (uint32_t)(MEM32(ebx + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x164), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019353A; /* jne: not equal / not zero */

loc_001934FE: ;
    _fa = (uint32_t)(MEM32(ebx + 0x168)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x168), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019353A; /* jne: not equal / not zero */

loc_00193506: ;
    _fa = (uint32_t)(MEM32(ebx + 0x190)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x190), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193517; /* jne: not equal / not zero */

loc_0019350E: ;
    _fa = (uint32_t)(MEM32(ebx + 0x16C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x16C), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019353A; /* je: equal / zero */

loc_00193517: ;
    ecx = MEM32(ebx + 0x24);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ecx + MEM32(ebx + 0x20);
    ecx = ecx & 1;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019352Du); RECOMP_ABI_CALL(0x00192620u, sub_00192620); /* call 0x00192620 */

loc_0019352D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001937E1; /* jl: less (signed <) */

loc_00193535: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001934F6; /* jb: below (unsigned <) */

loc_0019353A: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193546u); RECOMP_ABI_CALL(0x00192560u, sub_00192560); /* call 0x00192560 */

loc_00193546: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001936E4; /* je: equal / zero */

loc_0019354E: ;
    edi = edi;

loc_00193550: ;
    _fa = (uint32_t)(MEM32(ebx + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x164), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001936E4; /* jne: not equal / not zero */

loc_0019355C: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00193563u); RECOMP_ABI_CALL(0x001925B0u, sub_001925B0); /* call 0x001925B0 */

loc_00193563: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001936E4; /* je: equal / zero */

loc_0019356B: ;
    eax = MEM32(ebx + 0x114);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_0019367F; /* jbe: below or equal (unsigned <=) */

loc_0019357F: ;
    /* nop */

loc_00193580: ;
    eax = MEM32(ebx + 0x24);
    eax = MEM32(ebx + eax * 4 + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193599; /* je: equal / zero */

loc_0019358B: ;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x18) = eax;
    goto loc_001935A5;

loc_00193599: ;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = 0x9000;

loc_001935A5: ;
    ecx = MEM32(ebx + 0x28);
    eax = MEM32(esp + 0x18);
    eax = eax - ecx;
    ecx = MEM32(ebx + 0x114);
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_001935C2; /* jb: below (unsigned <) */

loc_001935BE: ;
    MEM32(esp + 0x10) = eax;

loc_001935C2: ;
    eax = MEM32(ebx + 0x11C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00193627; /* jbe: below or equal (unsigned <=) */

loc_001935CE: ;
    ebp = ebx + 0x44;

loc_001935D1: ;
    eax = MEM32(ebx + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x11C));
    edi = MEM32(ebx + 0x28);
    ecx = MEM32(esp + 0x10);
    eax = eax + edx;
    esi = eax + eax * 8;
    eax = MEM32(ebx + 0x1C);
    esi = esi << 0xC;
    esi = esi + eax;
    eax = MEM32(esp + 0x14);
    esi = esi + edi;
    edi = MEM32(ebx + 0x114);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x20));
    edi = edi + eax;
    edi = edi + MEM32(ebp);
    eax = ecx;
    ecx = ecx >> 2;
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
    eax = MEM32(ebx + 0x11C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001935D1; /* jb: below (unsigned <) */

loc_00193621: ;
    esi = MEM32(esp + 0x14);
    edi = 0; /* xor self */

loc_00193627: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x28);
    ecx = ecx + eax;
    esi = esi + eax;
    MEM32(ebx + 0x28) = ecx;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), ecx (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00193668; /* jne: not equal / not zero */

loc_00193642: ;
    ebp = MEM32(ebx + 0x20);
    edx = MEM32(ebx + 0x24);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0x20) = ebp;
    MEM32(ebx + edx * 4 + 0x2C) = edi;
    eax = MEM32(ebx + 0x24);
    MEM32(ebx + eax * 4 + 0x34) = 0xFFFFFFFFu;
    ecx = MEM32(ebx + 0x24);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 1;
    MEM32(ebx + 0x24) = ecx;
    MEM32(ebx + 0x28) = edi;

loc_00193668: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019367A; /* jne: not equal / not zero */

loc_0019366E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x114)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x114) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00193580; /* jb: below (unsigned <) */

loc_0019367A: ;
    ebp = 2;

loc_0019367F: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edi (32-bit) */
    ecx = 1;
    MEM32(ebx + eax * 4 + 0x94) = ecx;
    MEM32(ebx + eax * 4 + 0xB4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001936A8; /* je: equal / zero */

loc_0019369C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001936A8; /* jne: not equal / not zero */

loc_001936A1: ;
    MEM32(ebx + eax * 4 + 0xD4) = ecx;

loc_001936A8: ;
    edx = MEM32(ebx + 0x11C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001936D0; /* jbe: below or equal (unsigned <=) */

loc_001936B4: ;
    eax = ebx + eax * 4 + 0x54;
    goto loc_001936C0;

    /* nop */

loc_001936C0: ;
    MEM32(eax) = edi;
    edx = MEM32(ebx + 0x11C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001936C0; /* jb: below (unsigned <) */

loc_001936D0: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001936DCu); RECOMP_ABI_CALL(0x00192560u, sub_00192560); /* call 0x00192560 */

loc_001936DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00193550; /* jne: not equal / not zero */

loc_001936E4: ;
    esi = ebx + 0x94;
    /* nop */

loc_001936F0: ;
    eax = 0; /* xor self */
    ecx = esi;

loc_001936F4: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193727; /* je: equal / zero */

loc_001936F9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001936F4; /* jb: below (unsigned <) */

loc_00193702: ;
    eax = MEM32(ebx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193771; /* je: equal / zero */

loc_0019370C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = MEM32(ebx + 0x120);
    if (CMP_NE(_fa, _fb)) goto loc_00193762; /* jne: not equal / not zero */

loc_00193717: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x16C) = eax;
    goto loc_00193771;

loc_00193727: ;
    _fa = (uint32_t)(MEM32(ebx + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x164), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193702; /* jne: not equal / not zero */

loc_0019372F: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0019373Cu); RECOMP_ABI_CALL(0x00192750u, sub_00192750); /* call 0x00192750 */

loc_0019373C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001937E1; /* jl: less (signed <) */

loc_00193744: ;
    _fa = (uint32_t)(MEM32(ebx + 0x16C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x16C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001936F0; /* jne: not equal / not zero */

loc_0019374C: ;
    ecx = MEM32(ebx + 0x120);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x16C) = edx;
    goto loc_001936F0;

loc_00193762: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ebp;
    MEM32(ebx + 0x16C) = ecx;

loc_00193771: ;
    _fa = (uint32_t)(MEM32(ebx + 0x16C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x16C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001937DF; /* jne: not equal / not zero */

loc_00193779: ;
    _fa = (uint32_t)(MEM32(ebx + 0x168)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x168), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001937DF; /* je: equal / zero */

loc_00193781: ;
    _fa = (uint32_t)(MEM32(ebx + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x164), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001937DF; /* jne: not equal / not zero */

loc_00193789: ;
    eax = MEM32(ebx + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001937DF; /* jbe: below or equal (unsigned <=) */

loc_00193793: ;
    esi = ebx + 0xC;
    ebp = 0x10000;
    goto loc_001937A0;

    /* nop */

loc_001937A0: ;
    eax = MEM32(esi);
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001937ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001937AD: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x20), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001937CB; /* je: equal / zero */

loc_001937B3: ;
    eax = MEM32(ebx + 0x11C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001937A0; /* jb: below (unsigned <) */

loc_001937C1: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001937CB: ;
    MEM32(ebx + 0x164) = 1;
    MEM32(ebx + 0x168) = 0;

loc_001937DF: ;
    eax = 0; /* xor self */

loc_001937E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001937F0
 * Original: 0x001937F0 - 0x00193865 (117 bytes, 41 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001937F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001937F0: ;
    eax = 0; /* xor self */
    edx = ecx + 0xD;

loc_001937F5: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00193808; /* je: equal / zero */

loc_001937FA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001937F5; /* jl: less (signed <) */

loc_00193803: ;
    eax = 0; /* xor self */
    esp += 24; return; /* ret 20 */

loc_00193808: ;
    eax = eax + eax * 2 + 3;
    PUSH32(esp, esi);
    esi = ecx + eax * 4;
    PUSH32(esp, 0xC4);
    MEM8(esi + 1) = 1;
    MEM8(esi + 2) = 0;
    MEM8(esi + 3) = 0;
    MEM8(esi) = 0;
    PUSH32(esp, 0x00193829u); RECOMP_ABI_CALL(0x00343299u, sub_00343299); /* call 0x00343299 */

loc_00193829: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019384E; /* je: equal / zero */

loc_00193830: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0019384Cu); RECOMP_ABI_CALL(0x00192BC0u, sub_00192BC0); /* call 0x00192BC0 */

loc_0019384C: ;
    goto loc_00193850;

loc_0019384E: ;
    eax = 0; /* xor self */

loc_00193850: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0xC0) = ecx;
    MEM32(esi + 8) = eax;
    MEM8(esi + 2) = 1;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00193870
 * Original: 0x00193870 - 0x00193A2D (445 bytes, 169 insns)
 * Category: game_audio
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193870: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    esi = ecx;
    MEM32(esp + 0x14) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x18) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001938D7; /* jbe: below or equal (unsigned <=) */

loc_00193891: ;
    ebp = esi + 0xD;

loc_00193894: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = ebp;
    /* nop */

loc_001938A0: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001938B0; /* je: equal / zero */

loc_001938A5: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001938A0; /* jl: less (signed <) */

loc_001938AE: ;
    goto loc_001938C6;

loc_001938B0: ;
    ecx = ecx + ecx * 2 + 3;
    eax = esi + ecx * 4;
    MEM8(eax + 1) = 1;
    MEM8(eax + 2) = 0;
    MEM8(eax + 3) = 0;
    MEM8(eax) = 0;

loc_001938C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + ebx * 4 + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00193A09; /* je: equal / zero */

loc_001938D2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00193894; /* jb: below (unsigned <) */

loc_001938D7: ;
    PUSH32(esp, 0x198);
    PUSH32(esp, 0x001938E1u); RECOMP_ABI_CALL(0x00343299u, sub_00343299); /* call 0x00343299 */

loc_001938E1: ;
    ebp = MEM32(esp + 0x38);
    ebx = MEM32(esp + 0x34);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019391D; /* je: equal / zero */

loc_001938F0: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00193919u); RECOMP_ABI_CALL(0x00192FD0u, sub_00192FD0); /* call 0x00192FD0 */

loc_00193919: ;
    esi = eax;
    goto loc_0019391F;

loc_0019391D: ;
    esi = 0; /* xor self */

loc_0019391F: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esp + 0x3C);
    edi = esi + 0x17C;
    MEM32(esi + 0x190) = edx;
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00193944; /* je: equal / zero */

loc_00193938: ;
    eax = ZX16(LO16(ebp));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00193942u); RECOMP_ABI_CALL(0x0036F660u, sub_0036F660); /* call 0x0036F660 */

loc_00193942: ;
    goto loc_00193953;

loc_00193944: ;
    ecx = MEM32(esp + 0x3C);
    edx = ZX16(LO16(ebp));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00193953u); RECOMP_ABI_CALL(0x0036F65Bu, sub_0036F65B); /* call 0x0036F65B */

loc_00193953: ;
    SET_LO16(eax, MEM16(edi + 0xC));
    ecx = ZX16(LO16(eax));
    ecx = ecx << 0xB;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x24 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193968; /* jne: not equal / not zero */

loc_00193963: ;
    ecx = 0x4800;

loc_00193968: ;
    _fa = (uint32_t)(MEM16(edi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x48) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xC), 0x48 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00193974; /* jne: not equal / not zero */

loc_0019396F: ;
    ecx = 0x9000;

loc_00193974: ;
    edx = MEM32(edi + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0019398C; /* jbe: below or equal (unsigned <=) */

loc_0019398A: ;
    eax = ecx;

loc_0019398C: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = MEM32(esp + 0x40);
    ebp = 0; /* xor self */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esi + 0x114) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001939D1; /* jbe: below or equal (unsigned <=) */

loc_001939A3: ;
    edi = esi + 0x44;
    goto loc_001939B0;

    /* nop */
    /* nop */

loc_001939B0: ;
    eax = MEM32(esi + 0x114);
    ecx = MEM32(esp + 0x10);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001939C3u); RECOMP_ABI_CALL(0x00192360u, sub_00192360); /* call 0x00192360 */

loc_001939C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001939FD; /* je: equal / zero */

loc_001939C9: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001939B0; /* jb: below (unsigned <) */

loc_001939D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001939F1; /* jbe: below or equal (unsigned <=) */

loc_001939D7: ;
    ecx = MEM32(esp + eax * 4 + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ecx + 8) = edx;
    MEM8(ecx + 2) = 1;
    if (CMP_B(_fa, _fb)) goto loc_001939D7; /* jb: below (unsigned <) */

loc_001939F1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 40; return; /* ret 36 */

loc_001939FD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00193A05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193A05: ;
    edi = MEM32(esp + 0x40);

loc_00193A09: ;
    ecx = 0; /* xor self */
    goto loc_00193A10;

    /* nop */

loc_00193A10: ;
    eax = MEM32(esp + ecx * 4 + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193A1C; /* je: equal / zero */

loc_00193A18: ;
    MEM8(eax + 1) = 0;

loc_00193A1C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00193A10; /* jb: below (unsigned <) */

loc_00193A21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00193A30
 * Original: 0x00193A30 - 0x00193A4E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00193A38u); RECOMP_ABI_CALL(0x00192CA0u, sub_00192CA0); /* call 0x00192CA0 */

loc_00193A38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193A48; /* je: equal / zero */

loc_00193A3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00193A45u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00193A45: ;
    esp = esp + 4;

loc_00193A48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193A50
 * Original: 0x00193A50 - 0x00193A6E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193A50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00193A58u); RECOMP_ABI_CALL(0x00193180u, sub_00193180); /* call 0x00193180 */

loc_00193A58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193A68; /* je: equal / zero */

loc_00193A5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00193A65u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00193A65: ;
    esp = esp + 4;

loc_00193A68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193A70
 * Original: 0x00193A70 - 0x00193AEA (122 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193A70: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354C31);
    PUSH32(esp, eax);
    eax = MEM32(0x508554);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00193AD4; /* jne: not equal / not zero */

loc_00193A91: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00193A9Au); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_00193A9A: ;
    esp = esp + 8;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00193AB9; /* je: equal / zero */

loc_00193AB0: ;
    ecx = eax;
    PUSH32(esp, 0x00193AB7u); RECOMP_ABI_CALL(0x001256B0u, sub_001256B0); /* call 0x001256B0 */

loc_00193AB7: ;
    goto loc_00193ABB;

loc_00193AB9: ;
    eax = 0; /* xor self */

loc_00193ABB: ;
    ecx = eax;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(0x508554) = eax;
    PUSH32(esp, 0x00193ACFu); RECOMP_ABI_CALL(0x001256E0u, sub_001256E0); /* call 0x001256E0 */

loc_00193ACF: ;
    eax = MEM32(0x508554);

loc_00193AD4: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 8);
    eax = MEM32(0x508554);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00193AF0
 * Original: 0x00193AF0 - 0x00193B19 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193AF0: ;
    eax = MEM32(0x508554);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193B18; /* je: equal / zero */

loc_00193AF9: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x508554);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00193B18; /* jg: greater (signed >) */

loc_00193B05: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00193B0Bu); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_00193B0B: ;
    esp = esp + 4;
    MEM32(0x508554) = 0;

loc_00193B18: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00193B20
 * Original: 0x00193B20 - 0x00193B89 (105 bytes, 37 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00193B20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193B20: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00193B2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193B2B: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00193B36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193B36: ;
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    eax = MEM32(esi);
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00193B45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193B45: ;
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    edx = MEM32(esi);
    ecx = esi;
    fp_top() = MEMF(esp + 8) / fp_top(); /* fdivr dword ptr [esp + 8] */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00193B5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193B5B: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00193B66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193B66: ;
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00193B75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193B75: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = MEMF(esp + 4) / fp_top(); /* fdivr dword ptr [esp + 4] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193B90
 * Original: 0x00193B90 - 0x00193BEC (92 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193B90: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_00193B97: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00193B97; /* jne: not equal / not zero */

loc_00193B9E: ;
    edi = MEM32(esp + 0xC);
    edx = edi;
    eax = eax - esi;
    esi = edx + 1;
    PUSH32(esp, ebx);
    /* nop */

loc_00193BB0: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00193BB0; /* jne: not equal / not zero */

loc_00193BB7: ;
    edx = edx - esi;
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00193BE7; /* jge: greater or equal (signed >=) */

loc_00193BC1: ;
    eax = edi;
    esi = edi;

loc_00193BC5: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00193BC5; /* jne: not equal / not zero */

loc_00193BCC: ;
    eax = eax - esi;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx;

loc_00193BD1: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00193BD1; /* jne: not equal / not zero */

loc_00193BD9: ;
    ecx = eax;
    ecx = ecx >> 2;
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

loc_00193BE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00193BF0
 * Original: 0x00193BF0 - 0x00193C8C (156 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193BF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354C56);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3E0AB4;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00193C37; /* je: equal / zero */

loc_00193C22: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00193C37; /* jne: not equal / not zero */

loc_00193C32: ;
    PUSH32(esp, 0x00193C37u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00193C37: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00193C58; /* je: equal / zero */

loc_00193C43: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00193C58; /* jne: not equal / not zero */

loc_00193C53: ;
    PUSH32(esp, 0x00193C58u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00193C58: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00193C7D; /* je: equal / zero */

loc_00193C68: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00193C7D; /* jne: not equal / not zero */

loc_00193C78: ;
    PUSH32(esp, 0x00193C7Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00193C7D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00193C90
 * Original: 0x00193C90 - 0x00193C94 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193C90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193C90: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193CA0
 * Original: 0x00193CA0 - 0x00193CA4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193CA0(void)
{

loc_00193CA0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00193CB0
 * Original: 0x00193CB0 - 0x00193CB4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193CB0(void)
{

loc_00193CB0: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00193CC0
 * Original: 0x00193CC0 - 0x00193CD9 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00193CC0(void)
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

loc_00193CC0: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0AA4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0aa4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00193CD6; /* jne: not equal / not zero */

loc_00193CD0: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00193CD6: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193CE0
 * Original: 0x00193CE0 - 0x00193D05 (37 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00193CE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193CE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193D01; /* je: equal / zero */

loc_00193CEC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00193CF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193CF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00193D01; /* jle: less or equal (signed <=) */

loc_00193CFA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00193D01: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00193D10
 * Original: 0x00193D10 - 0x00193D53 (67 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D10(void)
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

loc_00193D10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00193D19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193D19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193D4A; /* je: equal / zero */

loc_00193D1D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00193D24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193D24: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00193D2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193D2F: ;
    fp_top() = MEMF(esp + 4) / fp_top(); /* fdivr dword ptr [esp + 4] */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00193D3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193D3E: ;
    fp_top() = fp_top() * MEMF(0x3E0A98); /* fmul dword ptr [0x3e0a98] */
    POP32(esp, esi);
    fp_top() = fp_top() * MEMF(esp); /* fmul dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00193D4A: ;
    fp_push(MEMF(0x3E0A9C)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193D60
 * Original: 0x00193D60 - 0x00193D67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193D60: ;
    fp_push(MEMF(0x3E0A98)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193D70
 * Original: 0x00193D70 - 0x00193D91 (33 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193D70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193D70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00193D79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193D79: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00193D84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193D84: ;
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    POP32(esp, esi);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193DA0
 * Original: 0x00193DA0 - 0x00193DBE (30 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193DA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193DA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00193DA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193DA9: ;
    fp_top() = fp_top() * MEMF(esi + 0x54); /* fmul dword ptr [esi + 0x54] */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00193DB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193DB7: ;
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193DC0
 * Original: 0x00193DC0 - 0x00193DDD (29 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193DC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193DC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00193DC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193DC9: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00193DD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193DD4: ;
    fp_top() = fp_top() * MEMF(esi + 0x54); /* fmul dword ptr [esi + 0x54] */
    POP32(esp, esi);
    fp_top() = MEMF(esp) - fp_top(); /* fsubr dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193DE0
 * Original: 0x00193DE0 - 0x00193DFD (29 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193DE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193DE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00193DE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193DE9: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00193DF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193DF4: ;
    fp_top() = fp_top() * MEMF(esi + 0x54); /* fmul dword ptr [esi + 0x54] */
    POP32(esp, esi);
    fp_top() = MEMF(esp) - fp_top(); /* fsubr dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193E00
 * Original: 0x00193E00 - 0x00193E0D (13 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193E00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00193E08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193E08: ;
    fp_top() = fp_top() * MEMF(esi + 0x54); /* fmul dword ptr [esi + 0x54] */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193E10
 * Original: 0x00193E10 - 0x00193E14 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193E10: ;
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193E20
 * Original: 0x00193E20 - 0x00193E24 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193E20: ;
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193E30
 * Original: 0x00193E30 - 0x00193E34 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193E30: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193E40
 * Original: 0x00193E40 - 0x00193E44 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193E40: ;
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193E50
 * Original: 0x00193E50 - 0x00193E54 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193E50: ;
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193E60
 * Original: 0x00193E60 - 0x00193E64 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00193E60: ;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193E70
 * Original: 0x00193E70 - 0x00193F10 (160 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193E70(void)
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

loc_00193E70: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebx + 0x5C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00193E95; /* je: equal / zero */

loc_00193E83: ;
    ecx = MEM32(0x5BB334);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00193E91u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00193E91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00193E97; /* jne: not equal / not zero */

loc_00193E95: ;
    esi = 0; /* xor self */

loc_00193E97: ;
    eax = MEM32(esi + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00193F0A; /* je: equal / zero */

loc_00193EA1: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() / MEMF(ebx + 0x5C); /* fdiv dword ptr [ebx + 0x5c] */
    edi = 0xFFFFFEA0u;
    esi = ebx + 0x160;
    edi = edi - ebx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    /* nop */

loc_00193EC0: ;
    edx = edi + esi;
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x00193EDAu); RECOMP_ABI_CALL(0x00341990u, sub_00341990); /* call 0x00341990 */

loc_00193EDA: ;
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    PUSH32(esp, 0x00193EE5u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00193EE5: ;
    MEM8(esi + 0x100) = LO8(eax);
    MEM8(esi) = LO8(eax);
    MEM8(esi + -256) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00193EC0; /* jl: less (signed <) */

loc_00193EFE: ;
    ebx = ebx + 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00193F09u); RECOMP_ABI_CALL(0x0035ADD0u, sub_0035ADD0); /* call 0x0035ADD0 */

loc_00193F09: ;
    POP32(esp, edi);

loc_00193F0A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00193F10
 * Original: 0x00193F10 - 0x00193F30 (32 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F10(void)
{

loc_00193F10: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = eax | 3;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C4); PUSH32(esp, 0x00193F24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193F24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00193F30
 * Original: 0x00193F30 - 0x00193F45 (21 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F30(void)
{

loc_00193F30: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = eax | 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C4); PUSH32(esp, 0x00193F44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193F44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00193F50
 * Original: 0x00193F50 - 0x00193F5E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F50(void)
{

loc_00193F50: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x2C4); PUSH32(esp, 0x00193F5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193F5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00193F60
 * Original: 0x00193F60 - 0x00193F77 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00193F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00193F6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193F6B: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xA4)); return; /* indirect tail jmp */

}

/**
 * sub_00193F80
 * Original: 0x00193F80 - 0x00193FBB (59 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193F80: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00193F8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00193F8F: ;
    esi = MEM32(eax);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00193FB1; /* je: equal / zero */

loc_00193F9B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00193FB1; /* jne: not equal / not zero */

loc_00193FAC: ;
    PUSH32(esp, 0x00193FB1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00193FB1: ;
    ecx = esi;
    PUSH32(esp, 0x00193FB8u); RECOMP_ABI_CALL(0x001C8700u, sub_001C8700); /* call 0x001C8700 */

loc_00193FB8: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00193FC0
 * Original: 0x00193FC0 - 0x00194066 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00193FC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354C81);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00193FE5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00193FE5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00193FF1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00193FF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00193FF9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00193FF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00193FFFu); RECOMP_ABI_CALL(0x00248F60u, sub_00248F60); /* call 0x00248F60 */

loc_00193FFF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00194013u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00194013: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0019401Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0019401B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0019402B; /* je: equal / zero */

loc_00194028: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019402B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00194053; /* je: equal / zero */

loc_0019403C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00194053; /* jne: not equal / not zero */

loc_0019404C: ;
    ecx = esi;
    PUSH32(esp, 0x00194053u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194053: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00194070
 * Original: 0x00194070 - 0x00194116 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194070: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354C81);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00194095u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00194095: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001940A1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001940A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001940A9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001940A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001940AFu); RECOMP_ABI_CALL(0x001B88A0u, sub_001B88A0); /* call 0x001B88A0 */

loc_001940AF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x001940C3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001940C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001940CBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001940CB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001940DB; /* je: equal / zero */

loc_001940D8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001940DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00194103; /* je: equal / zero */

loc_001940EC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00194103; /* jne: not equal / not zero */

loc_001940FC: ;
    ecx = esi;
    PUSH32(esp, 0x00194103u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194103: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00194120
 * Original: 0x00194120 - 0x0019416E (78 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194120: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019412Cu); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_0019412C: ;
    MEM32(esi + 8) = 0;
    ecx = MEM32(esi + 0xC);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194152; /* je: equal / zero */

loc_0019413D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00194152; /* jne: not equal / not zero */

loc_0019414D: ;
    PUSH32(esp, 0x00194152u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194152: ;
    MEM32(esi + 0xC) = 0;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00194162u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00194162: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00194170
 * Original: 0x00194170 - 0x0019418C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194170: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(esp + 8);
    MEM32(esp) = 0;
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00194188; /* je: equal / zero */

loc_00194185: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00194188: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194190
 * Original: 0x00194190 - 0x001941AC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194190: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(esp + 8);
    MEM32(esp) = 0;
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001941A8; /* je: equal / zero */

loc_001941A5: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001941A8: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001941B0
 * Original: 0x001941B0 - 0x0019423C (140 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001941B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001941B0: ;
    SET_LO8(ecx, MEM8(0x58F618));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194236; /* jne: not equal / not zero */

loc_001941BF: ;
    edx = MEM32(0x58F618);
    edx = edx | eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x35A6A0);
    MEM32(0x58F618) = edx;
    MEM32(0x58F2B8) = 0x3E0AB4;
    MEM32(0x58F2C0) = eax;
    MEM32(0x58F2C4) = eax;
    MEM32(0x58F2D0) = eax;
    MEM8(0x58F2DC) = LO8(eax);
    MEM32(0x58F2C8) = 0x3FAAAAAB;
    MEM32(0x58F2FC) = 0x3F800000;
    MEM32(0x58F300) = 0x3F8CCCCD;
    MEM32(0x58F304) = 0x3F000000;
    MEM32(0x58F308) = 0x3F000000;
    MEM32(0x58F30C) = 0x3D4CCCCD;
    PUSH32(esp, 0x00194233u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00194233: ;
    esp = esp + 4;

loc_00194236: ;
    eax = 0x58F2B8;
    esp += 4; return; /* ret */

}

/**
 * sub_00194240
 * Original: 0x00194240 - 0x00194245 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194240: ;
    g_seh_ebp = ebp; sub_001941B0(); return; /* tail jmp 0x001941B0 */

}

/**
 * sub_00194250
 * Original: 0x00194250 - 0x0019426B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194250(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00194250: ;
    PUSH32(esp, 0x00194255u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00194255: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0019425Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019425C: ;
    fp_top() = fp_top() - MEMF(0x3E0A9C); /* fsub dword ptr [0x3e0a9c] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = -fp_top(); /* fchs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00194270
 * Original: 0x00194270 - 0x0019428F (31 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194270(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00194270: ;
    PUSH32(esp, 0x00194275u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00194275: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0019427Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019427C: ;
    fp_top() = fp_top() - MEMF(0x3E0A9C); /* fsub dword ptr [0x3e0a9c] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(0x3E0A9C); /* fadd dword ptr [0x3e0a9c] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00194290
 * Original: 0x00194290 - 0x001942D7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194290(void)
{

loc_00194290: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0019429Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0019429F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001942B2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001942B2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001942C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001942C4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001942CFu); RECOMP_ABI_CALL(0x00193FC0u, sub_00193FC0); /* call 0x00193FC0 */

loc_001942CF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001942E0
 * Original: 0x001942E0 - 0x00194327 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001942E0(void)
{

loc_001942E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x001942EFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_001942EF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00194302u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00194302: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00194314u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194314: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019431Fu); RECOMP_ABI_CALL(0x00194070u, sub_00194070); /* call 0x00194070 */

loc_0019431F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00194330
 * Original: 0x00194330 - 0x00194867 (1335 bytes, 393 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194330: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354CC1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0x00194359u); RECOMP_ABI_CALL(0x00193A70u, sub_00193A70); /* call 0x00193A70 */

loc_00194359: ;
    edi = eax;
    eax = esp + 0x14;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00194367u); RECOMP_ABI_CALL(0x00194290u, sub_00194290); /* call 0x00194290 */

loc_00194367: ;
    esp = esp + 8;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    ebp = 1;
    MEM32(esp + 0x74) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0019437F; /* jne: not equal / not zero */

loc_00194379: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0019437Fu); RECOMP_ABI_CALL(0x003428BAu, sub_003428BA); /* call 0x003428BA */

loc_0019437F: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019438Bu); RECOMP_ABI_CALL(0x001942E0u, sub_001942E0); /* call 0x001942E0 */

loc_0019438B: ;
    edx = esp + 0x20;
    PUSH32(esp, 0xF);
    PUSH32(esp, edx);
    MEM8(esp + 0x84) = 2;
    MEM8(esp + 0x44) = 1;
    MEM32(esp + 0x54) = ebx;
    MEM8(esp + 0x45) = 0;
    MEM32(esp + 0x50) = 0x426FC28F;
    MEM32(esp + 0x48) = 2;
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 0x58) = ebx;
    PUSH32(esp, 0x001943C5u); RECOMP_ABI_CALL(0x0011D4C0u, sub_0011D4C0); /* call 0x0011D4C0 */

loc_001943C5: ;
    esp = esp + 0x10;
    MEM32(esp + 0x4C) = ebp;
    eax = MEM32(edi + 4);
    MEM32(esp + 0x50) = eax;
    ecx = MEM32(edi + 8);
    MEM8(esp + 0x74) = 3;
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, 0x001943E4u); RECOMP_ABI_CALL(0x001A1BDAu, sub_001A1BDA); /* call 0x001A1BDA */

loc_001943E4: ;
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, 0x001943ECu); RECOMP_ABI_CALL(0x001A1BD2u, sub_001A1BD2); /* call 0x001A1BD2 */

loc_001943EC: ;
    edx = MEM32(0x5BC508);
    ebp = MEM32(edx + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1021);
    ebx = eax;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E0BA0);
    PUSH32(esp, 4);
    ecx = ebp;
    PUSH32(esp, 0x00194411u); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_00194411: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194433; /* je: equal / zero */

loc_00194417: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194433; /* je: equal / zero */

loc_0019441C: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00194433; /* je: equal / zero */

loc_00194423: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x3E0BA0);
    PUSH32(esp, 4);
    ecx = ebp;
    PUSH32(esp, 0x00194433u); RECOMP_ABI_CALL(0x002303E0u, sub_002303E0); /* call 0x002303E0 */

loc_00194433: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esp + 0x1A;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E0B8C);
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00194449u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_00194449: ;
    SET_LO8(eax, MEM8(esi + 0x58));
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xA (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194470; /* je: equal / zero */

loc_00194453: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194470; /* je: equal / zero */

loc_00194458: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194470; /* je: equal / zero */

loc_00194460: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E0B8C);
    PUSH32(esp, 4);
    ecx = ebp;
    PUSH32(esp, 0x00194470u); RECOMP_ABI_CALL(0x00230490u, sub_00230490); /* call 0x00230490 */

loc_00194470: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001944B0; /* je: equal / zero */

loc_00194477: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001944B0; /* je: equal / zero */

loc_0019447C: ;
    eax = 0x500;
    edx = 0x2D0;
    ebx = 0; /* xor self */
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = edx;
    MEM32(esi + 0x10) = 0x3FE38E39;
    MEM32(esp + 0x48) = 6;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = ebx;
    goto loc_00194559;

loc_001944B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001944F7; /* je: equal / zero */

loc_001944B4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001944F7; /* je: equal / zero */

loc_001944B9: ;
    edx = 0x2D0;
    ecx = 0x1E0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = ecx;
    MEM32(esi + 0x10) = 0x3FC00000;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esp + 0x48) = 6;
    if (TEST_Z(_fa, _fb)) goto loc_00194559; /* je: equal / zero */

loc_001944E6: ;
    MEM32(esp + 0x48) = 0xE;
    MEM32(esi + 0x10) = 0x3FE38E39;
    goto loc_00194559;

loc_001944F7: ;
    PUSH32(esp, 0x001944FCu); RECOMP_ABI_CALL(0x001A1BA9u, sub_001A1BA9); /* call 0x001A1BA9 */

loc_001944FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194521; /* jne: not equal / not zero */

loc_00194501: ;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 0x40 (8-bit) */
    MEM32(esp + 0x48) = 1;
    MEM32(esp + 0x40) = 0x426FC28F;
    if (TEST_NZ(_fa, _fb)) goto loc_00194526; /* jne: not equal / not zero */

loc_00194517: ;
    MEM32(esp + 0x40) = 0x42480000;
    goto loc_00194526;

loc_00194521: ;
    MEM8(esp + 0x35) = 1;

loc_00194526: ;
    eax = 0x280;
    MEM32(esp + 0x50) = eax;
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x58)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x58), 1 (8-bit) */
    ecx = 0x1E0;
    MEM32(esp + 0x54) = ecx;
    MEM32(esi + 0x10) = 0x3FAAAAAB;
    MEM32(esi + 0x20) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00194557; /* je: equal / zero */

loc_0019454B: ;
    MEM32(esp + 0x48) = MEM32(esp + 0x48) | 8;
    MEM32(esi + 0x10) = 0x3FE38E39;

loc_00194557: ;
    ebx = 0; /* xor self */

loc_00194559: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3F8); PUSH32(esp, 0x0019456Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019456F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194696; /* jne: not equal / not zero */

loc_0019457D: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00194597; /* jge: greater or equal (signed >=) */

loc_00194584: ;
    MEM32(edi + 0xC) = ebx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3C9758);
    PUSH32(esp, 0x00194595u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00194595: ;
    goto loc_001945A6;

loc_00194597: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001945A6u); RECOMP_ABI_CALL(0x0020A320u, sub_0020A320); /* call 0x0020A320 */

loc_001945A6: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001945C0; /* jge: greater or equal (signed >=) */

loc_001945AD: ;
    MEM32(edi + 0x10) = ebx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3C9758);
    PUSH32(esp, 0x001945BEu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_001945BE: ;
    goto loc_001945CF;

loc_001945C0: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001945CFu); RECOMP_ABI_CALL(0x0020A320u, sub_0020A320); /* call 0x0020A320 */

loc_001945CF: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001945E9; /* jge: greater or equal (signed >=) */

loc_001945D6: ;
    MEM32(edi + 0x14) = ebx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3C9758);
    PUSH32(esp, 0x001945E7u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_001945E7: ;
    goto loc_001945F8;

loc_001945E9: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001945F8u); RECOMP_ABI_CALL(0x0020A320u, sub_0020A320); /* call 0x0020A320 */

loc_001945F8: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00194612; /* jge: greater or equal (signed >=) */

loc_001945FF: ;
    MEM32(edi + 0x18) = ebx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3C9758);
    PUSH32(esp, 0x00194610u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00194610: ;
    goto loc_00194621;

loc_00194612: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00194621u); RECOMP_ABI_CALL(0x0020A320u, sub_0020A320); /* call 0x0020A320 */

loc_00194621: ;
    edx = MEM32(edi + 0xC);
    MEM32(esp + 0x58) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(esp + 0x5C) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(edi + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x64) = edx;
    eax = MEM32(ecx);
    edx = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x0019464Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019464E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00194662u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194662: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x0019467Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019467C: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3E0B7C);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00194692u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194692: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019469D; /* jne: not equal / not zero */

loc_00194696: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0019469Du); RECOMP_ABI_CALL(0x003428BAu, sub_003428BA); /* call 0x003428BA */

loc_0019469D: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001946B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001946B0: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = esp + 0x1F;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x001946CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001946CC: ;
    eax = MEM32(esp + 0x48);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0019476C; /* ja: above (unsigned >) */

loc_001946DC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x194868); /* switch: 7 entries, 7 targets */
    if (_jt == 0x001946E3u) goto loc_001946E3;
    if (_jt == 0x001946F7u) goto loc_001946F7;
    if (_jt == 0x0019470Cu) goto loc_0019470C;
    if (_jt == 0x0019471Du) goto loc_0019471D;
    if (_jt == 0x0019472Eu) goto loc_0019472E;
    if (_jt == 0x0019473Fu) goto loc_0019473F;
    if (_jt == 0x00194750u) goto loc_00194750;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001946E3: ;
    edi = esi + 0x24;
    PUSH32(esp, 0x3E0B74);
    ecx = edi;
    PUSH32(esp, 0x001946F2u); RECOMP_ABI_CALL(0x00154410u, sub_00154410); /* call 0x00154410 */

loc_001946F2: ;
    goto loc_00194783;

loc_001946F7: ;
    edi = esi + 0x24;
    PUSH32(esp, 0x3E0B70);
    ecx = edi;
    PUSH32(esp, 0x00194706u); RECOMP_ABI_CALL(0x00154410u, sub_00154410); /* call 0x00154410 */

loc_00194706: ;
    MEM8(esi + 0x38) = 1;
    goto loc_00194783;

loc_0019470C: ;
    edi = esi + 0x24;
    PUSH32(esp, 0x3E0B6C);
    ecx = edi;
    PUSH32(esp, 0x0019471Bu); RECOMP_ABI_CALL(0x00154410u, sub_00154410); /* call 0x00154410 */

loc_0019471B: ;
    goto loc_00194783;

loc_0019471D: ;
    edi = esi + 0x24;
    PUSH32(esp, 0x3E0B64);
    ecx = edi;
    PUSH32(esp, 0x0019472Cu); RECOMP_ABI_CALL(0x00154410u, sub_00154410); /* call 0x00154410 */

loc_0019472C: ;
    goto loc_00194783;

loc_0019472E: ;
    edi = esi + 0x24;
    PUSH32(esp, 0x3E0B5C);
    ecx = edi;
    PUSH32(esp, 0x0019473Du); RECOMP_ABI_CALL(0x00154410u, sub_00154410); /* call 0x00154410 */

loc_0019473D: ;
    goto loc_00194783;

loc_0019473F: ;
    edi = esi + 0x24;
    PUSH32(esp, 0x3E0B54);
    ecx = edi;
    PUSH32(esp, 0x0019474Eu); RECOMP_ABI_CALL(0x00154410u, sub_00154410); /* call 0x00154410 */

loc_0019474E: ;
    goto loc_00194783;

loc_00194750: ;
    edi = esi + 0x24;
    PUSH32(esp, 0x3E0B48);
    ecx = edi;
    PUSH32(esp, 0x0019475Fu); RECOMP_ABI_CALL(0x00154410u, sub_00154410); /* call 0x00154410 */

loc_0019475F: ;
    eax = 0x3F8CCCCD;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    goto loc_00194783;

loc_0019476C: ;
    PUSH32(esp, 0x14);
    edi = esi + 0x24;
    PUSH32(esp, 0x3E0B44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019477Cu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0019477C: ;
    esp = esp + 0xC;
    MEM8(edi + 0x13) = 0;

loc_00194783: ;
    _fa = (uint32_t)(MEM8(esp + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194796; /* je: equal / zero */

loc_0019478A: ;
    PUSH32(esp, 0x3E0B3C);
    ecx = edi;
    PUSH32(esp, 0x00194796u); RECOMP_ABI_CALL(0x00193B90u, sub_00193B90); /* call 0x00193B90 */

loc_00194796: ;
    PUSH32(esp, 0x0019479Bu); RECOMP_ABI_CALL(0x00193AF0u, sub_00193AF0); /* call 0x00193AF0 */

loc_0019479B: ;
    ecx = esi;
    PUSH32(esp, 0x001947A2u); RECOMP_ABI_CALL(0x00193B20u, sub_00193B20); /* call 0x00193B20 */

loc_001947A2: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x2E8); PUSH32(esp, 0x001947BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001947BE: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = MEM32(esp + 0x7C);
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001947D3; /* je: equal / zero */

loc_001947CC: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x14);

loc_001947D3: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x2C) = 1;
    MEM8(esp + 0x74) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00194804; /* je: equal / zero */

loc_001947E8: ;
    edi = MEM32(ecx + 4);
    eax = ecx + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00194800; /* jne: not equal / not zero */

loc_001947FB: ;
    PUSH32(esp, 0x00194800u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194800: ;
    eax = MEM32(esp + 0x14);

loc_00194804: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x74) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0019482D; /* je: equal / zero */

loc_00194811: ;
    edi = MEM32(ecx + 4);
    eax = ecx + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00194829; /* jne: not equal / not zero */

loc_00194824: ;
    PUSH32(esp, 0x00194829u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194829: ;
    eax = MEM32(esp + 0x14);

loc_0019482D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x74) = 0;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00194850; /* je: equal / zero */

loc_00194838: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00194850; /* jne: not equal / not zero */

loc_0019484B: ;
    PUSH32(esp, 0x00194850u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194850: ;
    ecx = MEM32(esp + 0x6C);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x68;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194890
 * Original: 0x00194890 - 0x00194A8B (507 bytes, 168 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194890: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354CE0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    esi = ecx;
    PUSH32(esp, eax);
    MEM8(esi + 0x38) = 0;
    PUSH32(esp, 0x001948BAu); RECOMP_ABI_CALL(0x00194330u, sub_00194330); /* call 0x00194330 */

loc_001948BA: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001948CB; /* je: equal / zero */

loc_001948C8: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001948CB: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, ebp);
    ebp = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_001948EA; /* je: equal / zero */

loc_001948D8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001948EA; /* jne: not equal / not zero */

loc_001948E5: ;
    PUSH32(esp, 0x001948EAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001948EA: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 8) = edi;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00194913; /* je: equal / zero */

loc_001948FF: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00194913; /* jne: not equal / not zero */

loc_0019490E: ;
    PUSH32(esp, 0x00194913u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194913: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0019491Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019491E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194927; /* je: equal / zero */

loc_00194924: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00194927: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194940; /* je: equal / zero */

loc_0019492E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00194940; /* jne: not equal / not zero */

loc_0019493B: ;
    PUSH32(esp, 0x00194940u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194940: ;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x00194948u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00194948: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3E0BB8);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00194960u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194960: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C8); PUSH32(esp, 0x00194970u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194970: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x2E0); PUSH32(esp, 0x0019497Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019497D: ;
    edi = MEM32(esi + 0xC);
    MEM32(esi + 0x14) = 0;
    ebp = MEM32(edi);
    eax = ebp;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00194993u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194993: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0xDC); PUSH32(esp, 0x0019499Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019499C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebp);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001949A5; /* jle: less or equal (signed <=) */

loc_001949A1: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) | 4;

loc_001949A5: ;
    ecx = esp + 0x10;
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001949B1u); RECOMP_ABI_CALL(0x001199B0u, sub_001199B0); /* call 0x001199B0 */

loc_001949B1: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001949C5; /* je: equal / zero */

loc_001949C2: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001949C5: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001949E1; /* je: equal / zero */

loc_001949CC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001949E1; /* jne: not equal / not zero */

loc_001949DC: ;
    PUSH32(esp, 0x001949E1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001949E1: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x18) = edi;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00194A0E; /* je: equal / zero */

loc_001949F6: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00194A0E; /* jne: not equal / not zero */

loc_00194A09: ;
    PUSH32(esp, 0x00194A0Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00194A0E: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00194A1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194A1A: ;
    PUSH32(esp, 0x00194A1Fu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00194A1F: ;
    edx = MEM32(eax);
    PUSH32(esp, 0x3F800000);
    edi = esi + 0x5C;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E0BB0);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00194A39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194A39: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00194A43u); RECOMP_ABI_CALL(0x00193E70u, sub_00193E70); /* call 0x00193E70 */

loc_00194A43: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x00194A50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194A50: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00194A57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194A57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194A73; /* je: equal / zero */

loc_00194A5B: ;
    POP32(esp, edi);
    MEM32(esi + 0x54) = 0x3CA3D70A;
    POP32(esp, esi);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00194A73: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x54) = 0x3D4CCCCD;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00194A90
 * Original: 0x00194A90 - 0x00194AEC (92 bytes, 34 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00194A90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00194A90: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    edx = MEM32(esp + 8);
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(eax + 0x24); /* fadd dword ptr [eax + 0x24] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(eax + 0x28); /* fadd dword ptr [eax + 0x28] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(eax + 0x2C); /* fadd dword ptr [eax + 0x2c] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00194AF0
 * Original: 0x00194AF0 - 0x00194BED (253 bytes, 90 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00194AF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00194AF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x10); /* fmul dword ptr [ecx + 0x10] */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x14); /* fmul dword ptr [ecx + 0x14] */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x1C); /* fmul dword ptr [ecx + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x10); /* fmul dword ptr [ecx + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x20); /* fmul dword ptr [ecx + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x14); /* fmul dword ptr [ecx + 0x14] */
    edx = edx + 0x24;
    eax = eax + 0x24;
    MEM32(esp + 0xC) = ecx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    MEMF(edx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00194A90(); return; /* tail jmp 0x00194A90 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00194BF0
 * Original: 0x00194BF0 - 0x00194BFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194BF0(void)
{

loc_00194BF0: ;
    eax = ZX8(MEM8(esp + 4));
    MEM32(0x58F61C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00194C00
 * Original: 0x00194C00 - 0x00194CE3 (227 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00194C00: ;
    SET_LO8(edx, MEM8(0x58F630));
    esp = esp - 0x1BC;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x1C8);
    eax = MEM32(ecx + 0x30);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00194C83; /* je: equal / zero */

loc_00194C1D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00194C63; /* je: equal / zero */

loc_00194C20: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00194C43; /* je: equal / zero */

loc_00194C23: ;
    eax = 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194C3C; /* jne: not equal / not zero */

loc_00194C2C: ;
    MEM32(0x58F630) = MEM32(0x58F630) | eax;
    MEM32(0x58F62C) = 0x3E0C10;

loc_00194C3C: ;
    eax = 0x58F62C;
    goto loc_00194CA1;

loc_00194C43: ;
    eax = 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194C5C; /* jne: not equal / not zero */

loc_00194C4C: ;
    MEM32(0x58F630) = MEM32(0x58F630) | eax;
    MEM32(0x58F628) = 0x3E0BFC;

loc_00194C5C: ;
    eax = 0x58F628;
    goto loc_00194CA1;

loc_00194C63: ;
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194C7C; /* jne: not equal / not zero */

loc_00194C6C: ;
    MEM32(0x58F630) = MEM32(0x58F630) | eax;
    MEM32(0x58F624) = 0x3E0BE8;

loc_00194C7C: ;
    eax = 0x58F624;
    goto loc_00194CA1;

loc_00194C83: ;
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194C9C; /* jne: not equal / not zero */

loc_00194C8C: ;
    MEM32(0x58F630) = MEM32(0x58F630) | eax;
    MEM32(0x58F620) = 0x3E0BD4;

loc_00194C9C: ;
    eax = 0x58F620;

loc_00194CA1: ;
    edi = MEM32(esp + 0x1C8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00194CB4u); RECOMP_ABI_CALL(0x00197E30u, sub_00197E30); /* call 0x00197E30 */

loc_00194CB4: ;
    eax = esp + 8;
    MEM8(esi + 0xC) = 0;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00194CD5u); RECOMP_ABI_CALL(0x00197B10u, sub_00197B10); /* call 0x00197B10 */

loc_00194CD5: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x1BC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00194CF0
 * Original: 0x00194CF0 - 0x00194F93 (675 bytes, 194 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00194CF0(void)
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

loc_00194CF0: ;
    esp = esp - 0x90;
    ecx = MEM32(esp + 0x9C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 7) = LO8(eax);
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00194F8A; /* jle: less or equal (signed <=) */

loc_00194D13: ;
    eax = MEM32(esp + 0x98);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    ebx = eax + eax * 2;
    PUSH32(esp, ebp);
    ebx = ebx << 4;
    PUSH32(esp, edi);
    goto loc_00194D30;

    /* nop */

loc_00194D30: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(edi + ebx + 0x1C);
    eax = MEM32(ecx + 0x28);
    edi = edi + ebx;
    ebp = edx;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00194F67; /* jne: not equal / not zero */

loc_00194D4D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x2C), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194F67; /* jne: not equal / not zero */

loc_00194D56: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x34) = ecx;
    ebp = esi + 0x64;
    PUSH32(esp, ebp);
    ecx = esp + 0x50;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x00194D7Du); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00194D7D: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x18);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, ebp);
    eax = esp + 0x98;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, 0x00194DA5u); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00194DA5: ;
    edx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x24);
    ecx = MEM32(edi + 0x28);
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, ebp);
    edx = esp + 0x8C;
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, 0x00194DCDu); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00194DCD: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00194E0Au); RECOMP_ABI_CALL(0x001952F0u, sub_001952F0); /* call 0x001952F0 */

loc_00194E0A: ;
    esp = esp + 0x48;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194F67; /* je: equal / zero */

loc_00194E15: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    eax = esi + 0xC4;
    fp_top() = fp_top() / MEMF(esi + 0x40); /* fdiv dword ptr [esi + 0x40] */
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00194E3Cu); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00194E3C: ;
    esp = esp + 0xC;
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00194E50u); RECOMP_ABI_CALL(0x00194FA0u, sub_00194FA0); /* call 0x00194FA0 */

loc_00194E50: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194E69; /* jne: not equal / not zero */

loc_00194E61: ;
    MEM32(esp + 0x18) = 0x3F7FF972;

loc_00194E69: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00194E8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00194E8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00194F67; /* je: equal / zero */

loc_00194E97: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    fp_top() = fp_top() + MEMF(esi + 0x50); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    fp_top() = fp_top() + MEMF(esi + 0x54); /* fadd dword ptr [esi + 0x54] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    fp_top() = fp_top() + MEMF(esi + 0x58); /* fadd dword ptr [esi + 0x58] */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x5C); /* fmul dword ptr [esi + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x158); /* fmul dword ptr [esi + 0x158] */
    MEMF(esi + 0x158) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x15C); /* fmul dword ptr [esi + 0x15c] */
    MEMF(esi + 0x15C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x160); /* fmul dword ptr [esi + 0x160] */
    MEMF(esi + 0x160) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00194F49; /* jne: not equal / not zero */

loc_00194F27: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x164); /* fmul dword ptr [esi + 0x164] */
    MEMF(esi + 0x164) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x168)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    MEMF(esi + 0x168) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00194F50;

loc_00194F49: ;
    MEM8(esi + 0x178) = 1;

loc_00194F50: ;
    ecx = esi;
    PUSH32(esp, 0x00194F57u); RECOMP_ABI_CALL(0x00195010u, sub_00195010); /* call 0x00195010 */

loc_00194F57: ;
    SET_LO8(ecx, MEM8(esi + 0x178));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(eax, 1);
    MEM8(esp + 0x17) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_00194F86; /* jne: not equal / not zero */

loc_00194F67: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0xAC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00194D30; /* jl: less (signed <) */

loc_00194F82: ;
    SET_LO8(eax, MEM8(esp + 0x17));

loc_00194F86: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00194F8A: ;
    esp = esp + 0x90;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00194FA0
 * Original: 0x00194FA0 - 0x0019500D (109 bytes, 30 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00194FA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00194FA0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x94)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    edx = MEM32(esp + 8);
    fp_push(MEMF(ecx + 0x9C)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0x98)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xA0)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 0xA8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0xA4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xAC)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 0xB4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx + 0xB0)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00195010
 * Original: 0x00195010 - 0x00195210 (512 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195010(void)
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

loc_00195010: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0xC;
    eax = 0x7179519E;
    PUSH32(esp, edi);
    PUSH32(esp, 0xF179519Eu);
    ecx = ebx + 0xC;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0x00195033u); RECOMP_ABI_CALL(0x00195210u, sub_00195210); /* call 0x00195210 */

loc_00195033: ;
    SET_LO8(eax, MEM8(esi + 0xF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = esi + 0x180;
    if (TEST_Z(_fa, _fb)) goto loc_00195070; /* je: equal / zero */

loc_00195043: ;
    eax = esi + 0x128;
    PUSH32(esp, eax);
    eax = esi + 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00195054u); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00195054: ;
    eax = esi + 0x128;
    PUSH32(esp, eax);
    ebp = esi + 0x18C;
    ecx = esi + 0x50;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019506Bu); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_0019506B: ;
    esp = esp + 0x18;
    goto loc_00195099;

loc_00195070: ;
    edx = MEM32(esi + 0x44);
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x48);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x4C);
    MEM32(edi + 8) = ecx;
    edx = MEM32(esi + 0x50);
    ebp = esi + 0x18C;
    MEM32(ebp) = edx;
    eax = MEM32(esi + 0x54);
    MEM32(ebp + 4) = eax;
    ecx = MEM32(esi + 0x58);
    MEM32(ebp + 8) = ecx;

loc_00195099: ;
    SET_LO8(eax, MEM8(esi + 0x17C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001951CF; /* jne: not equal / not zero */

loc_001950A7: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001950BE; /* jp: parity */

loc_001950B7: ;
    MEM8(esi + 0x17C) = 1;

loc_001950BE: ;
    SET_LO8(eax, MEM8(esi + 0x17C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001951CF; /* jne: not equal / not zero */

loc_001950CC: ;
    edx = MEM32(ebp);
    MEM32(esi + 0x198) = edx;
    eax = MEM32(ebp + 4);
    MEM32(esi + 0x19C) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x1A0) = ecx;
    fp_push(MEMF(esi + 0x198)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    ecx = 0; /* xor self */
    edx = 0x7149F2CA;
    MEMF(esi + 0x198) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x19C)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    MEMF(esi + 0x19C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1A0)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    MEMF(esi + 0x1A0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x198)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195149; /* jne: not equal / not zero */

loc_0019512F: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    MEM32(esi + 0x1B0) = ecx;
    fp_top() = fp_top() / MEMF(esi + 0x198); /* fdiv dword ptr [esi + 0x198] */
    MEMF(esi + 0x1A4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00195159;

loc_00195149: ;
    MEM32(esi + 0x1A4) = 0;
    MEM32(esi + 0x1B0) = edx;

loc_00195159: ;
    fp_push(MEMF(esi + 0x19C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195188; /* jne: not equal / not zero */

loc_0019516E: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    MEM32(esi + 0x1B4) = ecx;
    fp_top() = fp_top() / MEMF(esi + 0x19C); /* fdiv dword ptr [esi + 0x19c] */
    MEMF(esi + 0x1A8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00195194;

loc_00195188: ;
    MEM32(esi + 0x1A8) = ecx;
    MEM32(esi + 0x1B4) = edx;

loc_00195194: ;
    fp_push(MEMF(esi + 0x1A0)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001951C3; /* jne: not equal / not zero */

loc_001951A9: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    MEM32(esi + 0x1B8) = ecx;
    fp_top() = fp_top() / MEMF(esi + 0x1A0); /* fdiv dword ptr [esi + 0x1a0] */
    MEMF(esi + 0x1AC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001951CF;

loc_001951C3: ;
    MEM32(esi + 0x1AC) = ecx;
    MEM32(esi + 0x1B8) = edx;

loc_001951CF: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001951D7u); RECOMP_ABI_CALL(0x00195230u, sub_00195230); /* call 0x00195230 */

loc_001951D7: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x001951DFu); RECOMP_ABI_CALL(0x00195230u, sub_00195230); /* call 0x00195230 */

loc_001951DF: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001951EAu); RECOMP_ABI_CALL(0x001952B0u, sub_001952B0); /* call 0x001952B0 */

loc_001951EA: ;
    SET_LO8(eax, MEM8(esi + 0x17B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019520B; /* je: equal / zero */

loc_001951F4: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019520B; /* jp: parity */

loc_00195204: ;
    MEM8(esi + 0x178) = 1;

loc_0019520B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00195210
 * Original: 0x00195210 - 0x00195221 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195210(void)
{

loc_00195210: ;
    eax = MEM32(esp + 4);
    edx = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00195230
 * Original: 0x00195230 - 0x001952A8 (120 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00195230(void)
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

loc_00195230: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195243; /* jp: parity */

loc_0019523F: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_00195243: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195256; /* jp: parity */

loc_00195250: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_00195256: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195269; /* jp: parity */

loc_00195263: ;
    eax = MEM32(edx + 8);
    MEM32(ecx + 8) = eax;

loc_00195269: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019527A; /* jne: not equal / not zero */

loc_00195275: ;
    eax = MEM32(edx);
    MEM32(ecx + 0xC) = eax;

loc_0019527A: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019528D; /* jne: not equal / not zero */

loc_00195287: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 0x10) = eax;

loc_0019528D: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001952A0; /* jne: not equal / not zero */

loc_0019529A: ;
    edx = MEM32(edx + 8);
    MEM32(ecx + 0x14) = edx;

loc_001952A0: ;
    PUSH32(esp, 0x001952A5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001952A5: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001952B0
 * Original: 0x001952B0 - 0x001952ED (61 bytes, 19 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001952B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001952B0: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0xC); /* fadd dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x10); /* fadd dword ptr [ecx + 0x10] */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x14); /* fadd dword ptr [ecx + 0x14] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001952F0
 * Original: 0x001952F0 - 0x001960C8 (3544 bytes, 1022 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001952F0(void)
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

loc_001952F0: ;
    esp = esp - 0xC8;
    eax = MEM32(esp + 0xE4);
    MEM32(eax) = 0x3F800000;
    eax = MEM32(esp + 0xD8);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(esp + 0xD4);
    PUSH32(esp, ebx);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xD8);
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    edx = MEM32(eax + 8);
    ebx = MEM32(esp + 0xE8);
    MEM32(esp + 0x54) = ecx;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, edi);
    fp_top() = fp_top() - MEMF(ebp + 4); /* fsub dword ptr [ebp + 4] */
    ecx = ebx;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = esp + 0x50;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, eax);
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(ebp + 4); /* fsub dword ptr [ebp + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0019538Au); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_0019538A: ;
    edx = MEM32(esp + 0xD8);
    fp_push(MEMF(edx + 0x160)); /* fld float */
    ecx = MEM32(edx);
    fp_top() = fp_top() * MEMF(ebx + 8); /* fmul dword ptr [ebx + 8] */
    SET_LO8(eax, MEM8(ecx + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    fp_push(MEMF(edx + 0x15C)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 4); /* fmul dword ptr [ebx + 4] */
    edi = edx + 0x158;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_NZ(_fa, _fb)) goto loc_001953D3; /* jne: not equal / not zero */

loc_001953BE: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195477; /* je: equal / zero */

loc_001953D3: ;
    SET_LO8(eax, MEM8(ecx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001953EF; /* jne: not equal / not zero */

loc_001953DA: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195477; /* jnp: not parity */

loc_001953EF: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp); /* fmul dword ptr [ebp] */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + 8); /* fmul dword ptr [ebp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 4); /* fmul dword ptr [ebx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 8); /* fmul dword ptr [ebx + 8] */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 4); /* fmul dword ptr [ebx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195485; /* jne: not equal / not zero */

loc_00195435: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195483; /* jne: not equal / not zero */

loc_00195464: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195485; /* jne: not equal / not zero */

loc_00195477: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC8;
    esp += 4; return; /* ret */

loc_00195483: ;
    fp_pop(); /* fstp st(0) */

loc_00195485: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019549D; /* jp: parity */

loc_00195496: ;
    eax = 1;
    goto loc_0019549F;

loc_0019549D: ;
    eax = 0; /* xor self */

loc_0019549F: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = MEM32(esp + 0xF4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM8(ecx) = LO8(eax);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001954C0; /* jne: not equal / not zero */

loc_001954B9: ;
    eax = 1;
    goto loc_001954C2;

loc_001954C0: ;
    eax = 0; /* xor self */

loc_001954C2: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = MEM32(esp + 0xF8);
    fp_top() = fabs(fp_top()); /* fabs */
    MEM8(ecx) = LO8(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    MEM8(esp + 0x37) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001954E8; /* je: equal / zero */

loc_001954E3: ;
    MEM8(esp + 0x37) = 0;

loc_001954E8: ;
    eax = MEM32(edx + 0x164);
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = edx + 0x16C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00195505u); RECOMP_ABI_CALL(0x001961C0u, sub_001961C0); /* call 0x001961C0 */

loc_00195505: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    esi = MEM32(esp + 0xF8);
    esp = esp + 0xC;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(esp + 0xDC);
    if (TEST_NZ(_fa, _fb)) goto loc_00195589; /* jne: not equal / not zero */

loc_00195523: ;
    fp_top() = fp_top() * MEMF(eax + 0x168); /* fmul dword ptr [eax + 0x168] */
    edx = MEM32(esp + 0xF4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(eax + 0x164); /* fmul dword ptr [eax + 0x164] */
    MEM32(esi) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(edi + 8);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 8) = ecx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0019558B;

loc_00195589: ;
    fp_pop(); /* fstp st(0) */

loc_0019558B: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = eax + 0x16C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001955A3u); RECOMP_ABI_CALL(0x001961C0u, sub_001961C0); /* call 0x001961C0 */

loc_001955A3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    ecx = MEM32(esp + 0xE8);
    esp = esp + 0xC;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195626; /* jne: not equal / not zero */

loc_001955BA: ;
    fp_top() = fp_top() * MEMF(ecx + 0x168); /* fmul dword ptr [ecx + 0x168] */
    edx = MEM32(esp + 0xF4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 0x164); /* fmul dword ptr [ecx + 0x164] */
    MEM32(esi) = eax;
    edx = MEM32(edi + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(edi + 8);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 8) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0xE4);
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00195628;

loc_00195626: ;
    fp_pop(); /* fstp st(0) */

loc_00195628: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = ecx + 0x16C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xF0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00195641u); RECOMP_ABI_CALL(0x001961C0u, sub_001961C0); /* call 0x001961C0 */

loc_00195641: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    esp = esp + 0xC;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001956B8; /* jne: not equal / not zero */

loc_00195651: ;
    ecx = MEM32(esp + 0xDC);
    fp_top() = fp_top() * MEMF(ecx + 0x168); /* fmul dword ptr [ecx + 0x168] */
    edx = MEM32(esp + 0xF4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 8);
    ecx = MEM32(esp + 0xE8);
    MEMF(esi) = (float)fp_top(); /* fst */
    MEM32(esi + 8) = edx;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001956C1;

loc_001956B8: ;
    ecx = MEM32(esp + 0xE8);
    fp_pop(); /* fstp st(0) */

loc_001956C1: ;
    fp_push(MEMF(ebp)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ebp + 4)); /* fld float */
    edx = MEM32(ecx + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x68) = eax;
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEM32(esp + 0x74) = edx;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + 8); /* fmul dword ptr [ebp + 8] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + 4); /* fmul dword ptr [ebp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp); /* fmul dword ptr [ebp] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x5C); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x58); /* fmul dword ptr [esp + 0x58] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195775; /* je: equal / zero */

loc_00195760: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001958EC; /* jne: not equal / not zero */

loc_00195775: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x5C); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x58); /* fmul dword ptr [esp + 0x58] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001957AF; /* jnp: not parity */

loc_0019579E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001958EA; /* jp: parity */

loc_001957AF: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = MEM32(esp + 0xF4);
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0019585Fu); RECOMP_ABI_CALL(0x001962A0u, sub_001962A0); /* call 0x001962A0 */

loc_0019585F: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    esp = esp + 0xC;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001958E1; /* jne: not equal / not zero */

loc_00195873: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001958DF; /* jne: not equal / not zero */

loc_00195890: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001958E1; /* jp: parity */

loc_0019589D: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xF4);
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0xE8);
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001958EC;

loc_001958DF: ;
    fp_pop(); /* fstp st(0) */

loc_001958E1: ;
    ecx = MEM32(esp + 0xE8);
    goto loc_001958EC;

loc_001958EA: ;
    fp_pop(); /* fstp st(0) */

loc_001958EC: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + 8); /* fmul dword ptr [ebp + 8] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp + 4); /* fmul dword ptr [ebp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp); /* fmul dword ptr [ebp] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195953; /* je: equal / zero */

loc_0019593E: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195ACA; /* jne: not equal / not zero */

loc_00195953: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019598D; /* jnp: not parity */

loc_0019597C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195AC8; /* jp: parity */

loc_0019598D: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = MEM32(esp + 0xF4);
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00195A3Du); RECOMP_ABI_CALL(0x001962A0u, sub_001962A0); /* call 0x001962A0 */

loc_00195A3D: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    esp = esp + 0xC;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195ABF; /* jne: not equal / not zero */

loc_00195A51: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195ABD; /* jne: not equal / not zero */

loc_00195A6E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195ABF; /* jp: parity */

loc_00195A7B: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xF4);
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0xE8);
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00195ACA;

loc_00195ABD: ;
    fp_pop(); /* fstp st(0) */

loc_00195ABF: ;
    ecx = MEM32(esp + 0xE8);
    goto loc_00195ACA;

loc_00195AC8: ;
    fp_pop(); /* fstp st(0) */

loc_00195ACA: ;
    eax = MEM32(esp + 0xE4);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x44) = eax;
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x6C); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x74); /* fmul dword ptr [esp + 0x74] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x70); /* fmul dword ptr [esp + 0x70] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00195B5D; /* je: equal / zero */

loc_00195B48: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195CB0; /* jne: not equal / not zero */

loc_00195B5D: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00195B97; /* jnp: not parity */

loc_00195B86: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195CAE; /* jp: parity */

loc_00195B97: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    edx = MEM32(esp + 0x40);
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x4C) = ecx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x4C;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00195C1Au); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00195C1A: ;
    PUSH32(esp, edi);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x00195C24u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195C24: ;
    ecx = MEM32(esp + 0xF4);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00195C3Du); RECOMP_ABI_CALL(0x001962A0u, sub_001962A0); /* call 0x001962A0 */

loc_00195C3D: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 0xC;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195CB0; /* jne: not equal / not zero */

loc_00195C51: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00195CAE; /* jne: not equal / not zero */

loc_00195C6E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00195CB0; /* jp: parity */

loc_00195C7B: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xF4);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x00195C94u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195C94: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00195CA0u); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00195CA0: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00195CACu); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195CAC: ;
    goto loc_00195CB0;

loc_00195CAE: ;
    fp_pop(); /* fstp st(0) */

loc_00195CB0: ;
    SET_LO8(eax, MEM8(esp + 0x3B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196055; /* je: equal / zero */

loc_00195CBC: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x64;
    PUSH32(esp, 0x00195CCAu); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195CCA: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x64;
    PUSH32(esp, 0x00195CD4u); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_00195CD4: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    edx = esp + 0x3C;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    ecx = esp + 0x30;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x6C); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x68); /* fmul dword ptr [esp + 0x68] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x64); /* fmul dword ptr [esp + 0x64] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00195D2Eu); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195D2E: ;
    ecx = MEM32(esp + 0xE8);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00195D3Fu); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_00195D3F: ;
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00195D52u); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00195D52: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00195D60u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195D60: ;
    ecx = MEM32(esp + 0xE8);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00195D71u); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_00195D71: ;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00195D84u); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00195D84: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00195D92u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195D92: ;
    ecx = MEM32(esp + 0xE8);
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00195DA3u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195DA3: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esp + 0xA0;
    PUSH32(esp, 0x00195DB4u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195DB4: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, 0x00195DC2u); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_00195DC2: ;
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    PUSH32(esp, ecx);
    ecx = esp + 0xA0;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00195DD8u); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00195DD8: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00195DE6u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195DE6: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    PUSH32(esp, 0x00195DF4u); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_00195DF4: ;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00195E07u); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00195E07: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xA0;
    PUSH32(esp, 0x00195E18u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195E18: ;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = esp + 0xA0;
    PUSH32(esp, 0x00195E29u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195E29: ;
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x00195E3Au); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195E3A: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x00195E48u); RECOMP_ABI_CALL(0x00196100u, sub_00196100); /* call 0x00196100 */

loc_00195E48: ;
    ecx = MEM32(esp + 0xF4);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00195E61u); RECOMP_ABI_CALL(0x001962A0u, sub_001962A0); /* call 0x001962A0 */

loc_00195E61: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 0xC;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196055; /* jne: not equal / not zero */

loc_00195E79: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00195E87u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195E87: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00195E95u); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00195E95: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00195EA3u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195EA3: ;
    PUSH32(esp, edi);
    ecx = esp + 0x88;
    PUSH32(esp, 0x00195EB0u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195EB0: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = esp + 0x88;
    PUSH32(esp, 0x00195EC1u); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00195EC1: ;
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = esp + 0xD0;
    PUSH32(esp, 0x00195ED5u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195ED5: ;
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    ecx = esp + 0x94;
    PUSH32(esp, 0x00195EE9u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195EE9: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x88;
    PUSH32(esp, 0x00195EF6u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195EF6: ;
    edx = MEM32(esp + 0xE4);
    PUSH32(esp, edx);
    ecx = esp + 0xD0;
    PUSH32(esp, 0x00195F0Au); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195F0A: ;
    eax = MEM32(esp + 0xE8);
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, 0x00195F1Eu); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_00195F1E: ;
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    ecx = esp + 0xB8;
    PUSH32(esp, 0x00195F32u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195F32: ;
    edx = esp + 0x78;
    PUSH32(esp, edx);
    ecx = esp + 0xB8;
    PUSH32(esp, 0x00195F43u); RECOMP_ABI_CALL(0x00196100u, sub_00196100); /* call 0x00196100 */

loc_00195F43: ;
    eax = esp + 0xCC;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, 0x00195F57u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195F57: ;
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = esp + 0xAC;
    PUSH32(esp, 0x00195F68u); RECOMP_ABI_CALL(0x00196100u, sub_00196100); /* call 0x00196100 */

loc_00195F68: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    ecx = esp + 0xC4;
    PUSH32(esp, 0x00195F7Cu); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195F7C: ;
    eax = esp + 0x78;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, 0x00195F8Du); RECOMP_ABI_CALL(0x00196100u, sub_00196100); /* call 0x00196100 */

loc_00195F8D: ;
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00195F9Eu); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195F9E: ;
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00195FAFu); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_00195FAF: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00195FB9u); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_00195FB9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196055; /* jne: not equal / not zero */

loc_00195FCA: ;
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00195FDBu); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00195FDB: ;
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00195FECu); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_00195FEC: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00195FF6u); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_00195FF6: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196055; /* jne: not equal / not zero */

loc_00196003: ;
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00196014u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00196014: ;
    eax = esp + 0xC0;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00196025u); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_00196025: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0019602Fu); RECOMP_ABI_CALL(0x00196160u, sub_00196160); /* call 0x00196160 */

loc_0019602F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196055; /* jne: not equal / not zero */

loc_0019603C: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xF4);
    eax = esp + 0x78;
    MEM32(edx) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00196055u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00196055: ;
    ecx = MEM32(esp + 0xF4);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001960BB; /* jp: parity */

loc_0019606B: ;
    PUSH32(esp, 0xBF800000u);
    ecx = ebx;
    PUSH32(esp, 0x00196077u); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_00196077: ;
    PUSH32(esp, edi);
    ecx = esp + 0x94;
    PUSH32(esp, 0x00196084u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_00196084: ;
    edx = MEM32(esp + 0xF4);
    fp_push(MEMF(edx)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x94;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0019609Fu); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_0019609F: ;
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001960AEu); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_001960AE: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC8;
    esp += 4; return; /* ret */

loc_001960BB: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001960D0
 * Original: 0x001960D0 - 0x001960F1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001960D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001960D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00196100
 * Original: 0x00196100 - 0x00196121 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00196100(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00196100: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00196130
 * Original: 0x00196130 - 0x00196151 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00196130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00196130: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = ecx;
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00196160
 * Original: 0x00196160 - 0x0019617B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00196160: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00196180
 * Original: 0x00196180 - 0x001961B7 (55 bytes, 22 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00196180(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00196180: ;
    fp_push(MEMF(ecx)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001961C0
 * Original: 0x001961C0 - 0x00196291 (209 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001961C0(void)
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

loc_001961C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019621A; /* je: equal / zero */

loc_001961ED: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196221; /* jp: parity */

loc_00196218: ;
    fp_pop(); /* fstp st(0) */

loc_0019621A: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    esp += 4; return; /* ret */

loc_00196221: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019621A; /* jnp: not parity */

loc_00196244: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019621A; /* jnp: not parity */

loc_00196255: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196282; /* jp: parity */

loc_0019626A: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196284; /* jne: not equal / not zero */

loc_0019627B: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    esp += 4; return; /* ret */

loc_00196282: ;
    fp_pop(); /* fstp st(0) */

loc_00196284: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = -fp_top(); /* fchs */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001962A0
 * Original: 0x001962A0 - 0x001963DB (315 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001962A0(void)
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

loc_001962A0: ;
    esp = esp - 8;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 4); /* fmul dword ptr [edx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001963BF; /* je: equal / zero */

loc_001962D4: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001963BF; /* je: equal / zero */

loc_0019633F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001963BF; /* jnp: not parity */

loc_00196350: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001963BF; /* jnp: not parity */

loc_00196388: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001963BF; /* jnp: not parity */

loc_00196399: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001963C9; /* jp: parity */

loc_001963AE: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001963CB; /* jne: not equal / not zero */

loc_001963BF: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001963C9: ;
    fp_pop(); /* fstp st(0) */

loc_001963CB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_top() = -fp_top(); /* fchs */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001963E0
 * Original: 0x001963E0 - 0x00196683 (675 bytes, 194 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001963E0(void)
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

loc_001963E0: ;
    esp = esp - 0x90;
    ecx = MEM32(esp + 0x9C);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 7) = LO8(eax);
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0019667A; /* jle: less or equal (signed <=) */

loc_00196403: ;
    eax = MEM32(esp + 0x98);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x9C);
    ebx = eax + eax * 2;
    PUSH32(esp, ebp);
    ebx = ebx << 4;
    PUSH32(esp, edi);
    goto loc_00196420;

    /* nop */

loc_00196420: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + 0xC);
    ecx = MEM32(esi);
    edx = MEM32(edi + ebx + 0x1C);
    eax = MEM32(ecx + 0x28);
    edi = edi + ebx;
    ebp = edx;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00196657; /* jne: not equal / not zero */

loc_0019643D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x2C), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196657; /* jne: not equal / not zero */

loc_00196446: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x34) = ecx;
    ebp = esi + 0x64;
    PUSH32(esp, ebp);
    ecx = esp + 0x50;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x0019646Du); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_0019646D: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x18);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, ebp);
    eax = esp + 0x98;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = edx;
    PUSH32(esp, 0x00196495u); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00196495: ;
    edx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x24);
    ecx = MEM32(edi + 0x28);
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, ebp);
    edx = esp + 0x8C;
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, 0x001964BDu); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_001964BD: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001964FAu); RECOMP_ABI_CALL(0x00196690u, sub_00196690); /* call 0x00196690 */

loc_001964FA: ;
    esp = esp + 0x48;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196657; /* je: equal / zero */

loc_00196505: ;
    fp_push(MEMF(esi + 0x5C)); /* fld float */
    eax = esi + 0xC4;
    fp_top() = fp_top() / MEMF(esi + 0x40); /* fdiv dword ptr [esi + 0x40] */
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0019652Cu); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_0019652C: ;
    esp = esp + 0xC;
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00196540u); RECOMP_ABI_CALL(0x00194FA0u, sub_00194FA0); /* call 0x00194FA0 */

loc_00196540: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196559; /* jne: not equal / not zero */

loc_00196551: ;
    MEM32(esp + 0x18) = 0x3F7FF972;

loc_00196559: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019657Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019657F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196657; /* je: equal / zero */

loc_00196587: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    fp_top() = fp_top() + MEMF(esi + 0x50); /* fadd dword ptr [esi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    fp_top() = fp_top() + MEMF(esi + 0x54); /* fadd dword ptr [esi + 0x54] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    fp_top() = fp_top() + MEMF(esi + 0x58); /* fadd dword ptr [esi + 0x58] */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x5C); /* fmul dword ptr [esi + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x158); /* fmul dword ptr [esi + 0x158] */
    MEMF(esi + 0x158) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x15C); /* fmul dword ptr [esi + 0x15c] */
    MEMF(esi + 0x15C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x160); /* fmul dword ptr [esi + 0x160] */
    MEMF(esi + 0x160) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196639; /* jne: not equal / not zero */

loc_00196617: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x164); /* fmul dword ptr [esi + 0x164] */
    MEMF(esi + 0x164) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x168)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    MEMF(esi + 0x168) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00196640;

loc_00196639: ;
    MEM8(esi + 0x178) = 1;

loc_00196640: ;
    ecx = esi;
    PUSH32(esp, 0x00196647u); RECOMP_ABI_CALL(0x00195010u, sub_00195010); /* call 0x00195010 */

loc_00196647: ;
    SET_LO8(ecx, MEM8(esi + 0x178));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(eax, 1);
    MEM8(esp + 0x17) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_00196676; /* jne: not equal / not zero */

loc_00196657: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0xAC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00196420; /* jl: less (signed <) */

loc_00196672: ;
    SET_LO8(eax, MEM8(esp + 0x17));

loc_00196676: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0019667A: ;
    esp = esp + 0x90;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00196690
 * Original: 0x00196690 - 0x00196F84 (2292 bytes, 683 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196690(void)
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

loc_00196690: ;
    esp = esp - 0x60;
    eax = MEM32(esp + 0x7C);
    MEM32(eax) = 0x3F800000;
    eax = MEM32(esp + 0x70);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(esp + 0x68);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x38) = ecx;
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    eax = MEM32(esp + 0x78);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x3C); /* fmul dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(eax + 8) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x64);
    fp_top() = fp_top() * MEMF(eax + 0x160); /* fmul dword ptr [eax + 0x160] */
    ecx = eax + 0x158;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 8) = ecx;
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    ecx = MEM32(eax);
    SET_LO8(eax, MEM8(ecx + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_NZ(_fa, _fb)) goto loc_00196762; /* jne: not equal / not zero */

loc_00196751: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019677A; /* je: equal / zero */

loc_00196762: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    SET_LO8(eax, MEM8(ecx + 0x34));
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (TEST_NZ(_fa, _fb)) goto loc_00196780; /* jne: not equal / not zero */

loc_00196775: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019678C; /* jp: parity */

loc_0019677A: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x60;
    esp += 4; return; /* ret */

loc_00196780: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019678C; /* jp: parity */

loc_00196785: ;
    eax = 1;
    goto loc_0019678E;

loc_0019678C: ;
    eax = 0; /* xor self */

loc_0019678E: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    ecx = MEM32(esp + 0x80);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM8(ecx) = LO8(eax);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001967AF; /* jne: not equal / not zero */

loc_001967A8: ;
    eax = 1;
    goto loc_001967B1;

loc_001967AF: ;
    eax = 0; /* xor self */

loc_001967B1: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    edx = MEM32(esp + 0x84);
    fp_top() = fabs(fp_top()); /* fabs */
    MEM8(edx) = LO8(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    MEM8(esp + 0x64) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001967D7; /* je: equal / zero */

loc_001967D2: ;
    MEM8(esp + 0x64) = 0;

loc_001967D7: ;
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x74);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x74);
    PUSH32(esp, edi);
    edi = esp + 0x58;
    edx = 0; /* xor self */
    esi = esi - ecx;
    ebx = ebx - ecx;
    edi = edi - ecx;
    goto loc_00196800;

    /* nop */

loc_00196800: ;
    fp_push(MEMF(ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019688E; /* jne: not equal / not zero */

loc_00196810: ;
    fp_push(MEMF(esi + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196843; /* jne: not equal / not zero */

loc_00196820: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196843; /* jne: not equal / not zero */

loc_0019682F: ;
    fp_push(MEMF(ebx + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196F7A; /* je: equal / zero */

loc_00196843: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019687D; /* jp: parity */

loc_0019685E: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019687D; /* jp: parity */

loc_0019686B: ;
    fp_push(MEMF(ebx + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00196F7A; /* jnp: not parity */

loc_0019687D: ;
    MEM32(edi + ecx) = 0x3F800000;
    MEM8(esp + edx + 0x14) = 1;
    goto loc_00196988;

loc_0019688E: ;
    fp_push(MEMF(ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    fp_push(MEMF(esi + ecx)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196919; /* jp: parity */

loc_001968A1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001968D1; /* jp: parity */

loc_001968AE: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001968D1; /* jp: parity */

loc_001968BD: ;
    fp_push(MEMF(ebx + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00196F7A; /* jnp: not parity */

loc_001968D1: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019690B; /* jne: not equal / not zero */

loc_001968EC: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019690B; /* jne: not equal / not zero */

loc_001968F9: ;
    fp_push(MEMF(ebx + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196F7A; /* je: equal / zero */

loc_0019690B: ;
    MEM32(edi + ecx) = 0xBF800000u;
    MEM8(esp + edx + 0x14) = 1;
    goto loc_00196988;

loc_00196919: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196949; /* jne: not equal / not zero */

loc_00196926: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196949; /* jne: not equal / not zero */

loc_00196935: ;
    fp_push(MEMF(ebx + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196F7A; /* je: equal / zero */

loc_00196949: ;
    fp_push(MEMF(esi + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019697C; /* jp: parity */

loc_00196959: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019697C; /* jp: parity */

loc_00196968: ;
    fp_push(MEMF(ebx + ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00196F7A; /* jnp: not parity */

loc_0019697C: ;
    MEM32(edi + ecx) = 0;
    MEM8(esp + edx + 0x14) = 0;

loc_00196988: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    ecx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196800; /* jl: less (signed <) */

loc_00196998: ;
    SET_LO8(eax, MEM8(esp + 0x74));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196A9B; /* je: equal / zero */

loc_001969A4: ;
    esi = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x78);
    edi = MEM32(esp + 0x80);
    ebx = 0; /* xor self */
    goto loc_001969C0;

    /* nop */
    edi = edi;

loc_001969C0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    MEM32(esp + 0x34) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_001969D5; /* jne: not equal / not zero */

loc_001969CD: ;
    MEM32(esp + 0x34) = 0x3F800000;

loc_001969D5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    MEM32(esp + 0x38) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_001969EA; /* jne: not equal / not zero */

loc_001969E2: ;
    MEM32(esp + 0x38) = 0x3F800000;

loc_001969EA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    MEM32(esp + 0x3C) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_001969FF; /* jne: not equal / not zero */

loc_001969F7: ;
    MEM32(esp + 0x3C) = 0x3F800000;

loc_001969FF: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    eax = esp + 0x74;
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    PUSH32(esp, eax);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    edx = MEM32(esp + 0x88);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00196A55u); RECOMP_ABI_CALL(0x00196F90u, sub_00196F90); /* call 0x00196F90 */

loc_00196A55: ;
    esp = esp + 0x30;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196A91; /* je: equal / zero */

loc_00196A5C: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x8C);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196A91; /* jp: parity */

loc_00196A70: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x84);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_00196A91: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001969C0; /* jl: less (signed <) */

loc_00196A9B: ;
    ebp = MEM32(esp + 0x8C);
    ebx = MEM32(esp + 0x18);
    esi = 0x3E0C2C;
    goto loc_00196AB0;

    /* nop */

loc_00196AB0: ;
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esp + 0x40) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_00196AC7; /* jne: not equal / not zero */

loc_00196ABF: ;
    MEM32(esp + 0x40) = 0x3F800000;

loc_00196AC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM32(esp + 0x44) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_00196ADB; /* jne: not equal / not zero */

loc_00196AD3: ;
    MEM32(esp + 0x44) = 0x3F800000;

loc_00196ADB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    MEM32(esp + 0x48) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_00196AEF; /* jne: not equal / not zero */

loc_00196AE7: ;
    MEM32(esp + 0x48) = 0x3F800000;

loc_00196AEF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esp + 0x34) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_00196B05; /* jne: not equal / not zero */

loc_00196AFD: ;
    MEM32(esp + 0x34) = 0x3F800000;

loc_00196B05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM32(esp + 0x38) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_00196B19; /* jne: not equal / not zero */

loc_00196B11: ;
    MEM32(esp + 0x38) = 0x3F800000;

loc_00196B19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    MEM32(esp + 0x3C) = 0xBF800000u;
    if (TEST_NZ(_fa, _fb)) goto loc_00196B2D; /* jne: not equal / not zero */

loc_00196B25: ;
    MEM32(esp + 0x3C) = 0x3F800000;

loc_00196B2D: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x44); /* fadd dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x48); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x64); /* fmul dword ptr [esp + 0x64] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00196CDA; /* jnp: not parity */

loc_00196B92: ;
    ecx = MEM32(esp + 0x7C);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x7C);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00196BB6u); RECOMP_ABI_CALL(0x00197330u, sub_00197330); /* call 0x00197330 */

loc_00196BB6: ;
    esp = esp + 0x1C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196C00; /* je: equal / zero */

loc_00196BBD: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196C00; /* jne: not equal / not zero */

loc_00196BCE: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196C00; /* jp: parity */

loc_00196BDC: ;
    edx = MEM32(esp + 0x74);
    edi = MEM32(esp + 0x84);
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    MEM32(ebp) = edx;
    edx = MEM32(esp + 0x54);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    goto loc_00196C07;

loc_00196C00: ;
    edi = MEM32(esp + 0x84);

loc_00196C07: ;
    edx = MEM32(esp + 0x80);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00196C31u); RECOMP_ABI_CALL(0x00197330u, sub_00197330); /* call 0x00197330 */

loc_00196C31: ;
    esp = esp + 0x1C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196C72; /* je: equal / zero */

loc_00196C38: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196C72; /* jne: not equal / not zero */

loc_00196C49: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196C72; /* jp: parity */

loc_00196C57: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x54);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_00196C72: ;
    eax = MEM32(esp + 0x78);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x84);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00196C99u); RECOMP_ABI_CALL(0x00197330u, sub_00197330); /* call 0x00197330 */

loc_00196C99: ;
    esp = esp + 0x1C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196CDA; /* je: equal / zero */

loc_00196CA0: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196CDA; /* jne: not equal / not zero */

loc_00196CB1: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196CDA; /* jp: parity */

loc_00196CBF: ;
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x50);
    MEM32(ebp) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(edi) = edx;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;

loc_00196CDA: ;
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E0C8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3E0C8C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196AB0; /* jl: less (signed <) */

loc_00196CE9: ;
    edi = MEM32(esp + 0x84);
    eax = esp + 0x14;
    ebp = 0; /* xor self */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0x1C) = ebx;
    esi = 0xFFFFFFFCu;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = 3;

loc_00196D14: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00196ECA; /* je: equal / zero */

loc_00196D26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    fp_push(MEMF(esp + ebp + 0x58)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    ecx = esi + 8;
    MEMF(esp + ebp + 0x64) = (float)fp_top(); /* fst */
    MEM32(esp + 0x20) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00196D43; /* jle: less or equal (signed <=) */

loc_00196D3C: ;
    edx = esi + -4;
    MEM32(esp + 0x20) = edx;

loc_00196D43: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = esi + 0xC;
    MEM32(esp + 0x24) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00196D54; /* jle: less or equal (signed <=) */

loc_00196D50: ;
    MEM32(esp + 0x24) = esi;

loc_00196D54: ;
    edx = 0; /* xor self */

loc_00196D56: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196D60; /* jne: not equal / not zero */

loc_00196D5A: ;
    eax = MEM32(esp + 0x78);
    goto loc_00196D70;

loc_00196D60: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    eax = MEM32(esp + 0x7C);
    if (CMP_EQ(_fa, _fb)) goto loc_00196D70; /* je: equal / zero */

loc_00196D69: ;
    eax = MEM32(esp + 0x80);

loc_00196D70: ;
    ecx = MEM32(eax);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x38) = ecx;
    fp_top() = fp_top() * MEMF(esp + ebp + 0x34); /* fmul dword ptr [esp + ebp + 0x34] */
    MEMF(esp + 0x74) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196D9F; /* jne: not equal / not zero */

loc_00196D9B: ;
    SET_LO8(ecx, 1);
    goto loc_00196DA1;

loc_00196D9F: ;
    SET_LO8(ecx, 0); /* xor self */

loc_00196DA1: ;
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + ebp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196DBE; /* jne: not equal / not zero */

loc_00196DBA: ;
    SET_LO8(eax, 1);
    goto loc_00196DC0;

loc_00196DBE: ;
    SET_LO8(eax, 0); /* xor self */

loc_00196DC0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196DCE; /* je: equal / zero */

loc_00196DC4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196EBE; /* jne: not equal / not zero */

loc_00196DCC: ;
    goto loc_00196DD6;

loc_00196DCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00196EBE; /* je: equal / zero */

loc_00196DD6: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = MEM32(esp + 0x8C);
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x74) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196EBE; /* jp: parity */

loc_00196E06: ;
    fp_push(MEMF(ebx)); /* fld float */
    eax = MEM32(ebx + 8);
    fp_push(MEMF(ebx + 4)); /* fld float */
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x74); /* fmul dword ptr [esp + 0x74] */
    eax = esp + eax + 0x4C;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x74); /* fmul dword ptr [esp + 0x74] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x74); /* fmul dword ptr [esp + 0x74] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x4C); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x38); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x3C); /* fadd dword ptr [esp + 0x3c] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196EBE; /* jne: not equal / not zero */

loc_00196E61: ;
    eax = MEM32(esp + 0x30);
    fp_push(MEMF(eax)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196EBE; /* jp: parity */

loc_00196E74: ;
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(esp + eax + 0x4C)); /* fld float */
    eax = esp + eax + 0x4C;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    MEM32(esp + 0x30) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00196EBE; /* jne: not equal / not zero */

loc_00196E91: ;
    eax = MEM32(esp + 0x30);
    fp_push(MEMF(eax)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196EBE; /* jp: parity */

loc_00196EA4: ;
    eax = MEM32(esp + 0x74);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x50);
    MEM32(edi) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;

loc_00196EBE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00196D56; /* jl: less (signed <) */

loc_00196EC8: ;
    fp_pop(); /* fstp st(0) */

loc_00196ECA: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    ecx = ecx + 4;
    ebp = ebp + 4;
    esi = esi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_00196D14; /* jne: not equal / not zero */

loc_00196EF3: ;
    ecx = MEM32(esp + 0x8C);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00196F7A; /* jp: parity */

loc_00196F09: ;
    eax = MEM32(esp + 0x88);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx + 8);
    fp_push(MEMF(ebx)); /* fld float */
    MEM32(esp + 0x6C) = edx;
    fp_push(MEMF(ebx + 4)); /* fld float */
    SET_LO8(eax, 1);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x78) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x78); /* fmul dword ptr [esp + 0x78] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x78); /* fmul dword ptr [esp + 0x78] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

loc_00196F7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00196F90
 * Original: 0x00196F90 - 0x0019732A (922 bytes, 298 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00196F90(void)
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

loc_00196F90: ;
    esp = esp - 0x30;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    fp_push(MEMF(ebx)); /* fld float */
    eax = MEM32(ebx + 8);
    fp_push(MEMF(ebx + 4)); /* fld float */
    MEM32(esp + 0x24) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, ebp);
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    ebp = MEM32(esp + 0x48);
    edx = MEM32(ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x60);
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    MEM32(esi) = edx;
    eax = MEM32(ebp + 4);
    fp_push(MEMF(esi)); /* fld float */
    MEM32(esi + 4) = eax;
    edx = MEM32(ebp + 8);
    MEM32(esi + 8) = edx;
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    fp_push(MEMF(esi + 4)); /* fld float */
    MEM32(esp + 0x30) = eax;
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    eax = MEM32(esp + 0x44);
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 4);
    fp_push(MEMF(esi + 8)); /* fld float */
    MEM32(esp + 0x34) = edx;
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    edx = MEM32(esp + 0x40);
    MEMF(esi + 8) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esi + 4) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esi + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x14) = eax;
    fp_top() = fp_top() - MEMF(edx); /* fsub dword ptr [edx] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(edx + 4); /* fsub dword ptr [edx + 4] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(edx + 8); /* fsub dword ptr [edx + 8] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197321; /* jnp: not parity */

loc_00197089: ;
    SET_LO8(eax, MEM8(esp + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001970A6; /* jne: not equal / not zero */

loc_00197091: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197321; /* jnp: not parity */

loc_001970A6: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001970C3; /* jne: not equal / not zero */

loc_001970AE: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197321; /* je: equal / zero */

loc_001970C3: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001970DB; /* jne: not equal / not zero */

loc_001970D4: ;
    eax = 1;
    goto loc_001970DD;

loc_001970DB: ;
    eax = 0; /* xor self */

loc_001970DD: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    PUSH32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    edi = MEM32(esp + 0x6C);
    MEM8(edi) = LO8(eax);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001970FC; /* jp: parity */

loc_001970F5: ;
    eax = 1;
    goto loc_001970FE;

loc_001970FC: ;
    eax = 0; /* xor self */

loc_001970FE: ;
    edi = MEM32(esp + 0x70);
    MEM8(edi) = LO8(eax);
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = MEM32(ecx + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x3C) = eax;
    fp_top() = fp_top() - MEMF(edx); /* fsub dword ptr [edx] */
    eax = MEM32(esp + 0x68);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(edx + 4); /* fsub dword ptr [edx + 4] */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(edx + 8); /* fsub dword ptr [edx + 8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() / MEMF(esp + 0x54); /* fdiv dword ptr [esp + 0x54] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197315; /* jnp: not parity */

loc_00197153: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197315; /* je: equal / zero */

loc_00197164: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edi = MEM32(esp + 0x60);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edx); /* fadd dword ptr [edx] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(edx + 4); /* fadd dword ptr [edx + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(edx + 8); /* fadd dword ptr [edx + 8] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x54);
    MEM32(edi + 8) = edx;
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = MEM32(ecx + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(ebp + 8);
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x24) = ecx;
    eax = esp + 0x1C;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_push(MEMF(ebp)); /* fld float */
    fp_push(MEMF(ebp + 4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0019721Fu); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_0019721F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197317; /* jnp: not parity */

loc_00197248: ;
    fp_push(MEMF(ebx)); /* fld float */
    ecx = MEM32(ebx + 8);
    fp_push(MEMF(ebx + 4)); /* fld float */
    MEM32(esp + 0x3C) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = esp + 0x28;
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x14) = edx;
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0019728Fu); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_0019728F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197317; /* jnp: not parity */

loc_001972B4: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001972DAu); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_001972DA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197317; /* jnp: not parity */

loc_001972FF: ;
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    PUSH32(esp, 0x0019730Bu); RECOMP_ABI_CALL(0x00196130u, sub_00196130); /* call 0x00196130 */

loc_0019730B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00197315: ;
    fp_pop(); /* fstp st(0) */

loc_00197317: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00197321: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197330
 * Original: 0x00197330 - 0x00197636 (774 bytes, 259 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197330(void)
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

loc_00197330: ;
    esp = esp - 0x30;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    fp_push(MEMF(ebx)); /* fld float */
    eax = MEM32(ebx + 8);
    fp_push(MEMF(ebx + 4)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x40);
    edx = MEM32(eax + 8);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x3C);
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(edx); /* fsub dword ptr [edx] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(edx + 4); /* fsub dword ptr [edx + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(edx + 8); /* fsub dword ptr [edx + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3e0c20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197402; /* jp: parity */

loc_001973F8: ;
    fp_pop(); /* fstp st(0) */

loc_001973FA: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_00197402: ;
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(edx + 8);
    fp_push(MEMF(edx + 4)); /* fld float */
    MEM32(esp + 0x34) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001973FA; /* jnp: not parity */

loc_0019744F: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001973FA; /* je: equal / zero */

loc_00197460: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    edi = MEM32(esp + 0x58);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(edx); /* fadd dword ptr [edx] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edx + 4); /* fadd dword ptr [edx + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(edx + 8); /* fadd dword ptr [edx + 8] */
    MEMF(edi + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x50); /* fadd dword ptr [esp + 0x50] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197542; /* jp: parity */

loc_0019752F: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019762D; /* jnp: not parity */

loc_00197542: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197564; /* jne: not equal / not zero */

loc_00197551: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019762D; /* je: equal / zero */

loc_00197564: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    edx = MEM32(esp + 0x54);
    fp_top() = fp_top() - MEMF(esp + 0x50); /* fsub dword ptr [esp + 0x50] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x50); /* fsub dword ptr [esp + 0x50] */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 8);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0019759Eu); RECOMP_ABI_CALL(0x00196180u, sub_00196180); /* call 0x00196180 */

loc_0019759E: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 4); /* fmul dword ptr [ebx + 4] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx); /* fmul dword ptr [ebx] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 8); /* fmul dword ptr [ebx + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197608; /* jp: parity */

loc_001975F9: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0019762B; /* jnp: not parity */

loc_00197608: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197622; /* jne: not equal / not zero */

loc_00197613: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019762D; /* je: equal / zero */

loc_00197622: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0019762B: ;
    fp_pop(); /* fstp st(0) */

loc_0019762D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197640
 * Original: 0x00197640 - 0x00197797 (343 bytes, 111 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00197640: ;
    SET_LO8(eax, MEM8(0x58F640));
    esp = esp - 0x4C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197671; /* jne: not equal / not zero */

loc_0019764C: ;
    MEM32(0x58F640) = MEM32(0x58F640) | 1;
    MEM32(0x58F634) = 0;
    MEM32(0x58F638) = 0;
    MEM32(0x58F63C) = 0;

loc_00197671: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0019777F; /* jle: less or equal (signed <=) */

loc_00197689: ;
    eax = MEM32(esp + 0x64);
    edi = MEM32(esp + 0x60);
    ebp = eax + eax * 2;
    ebp = ebp << 4;

loc_00197697: ;
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 0xC);
    ecx = MEM32(edi);
    edx = MEM32(esi + ebp + 0x1C);
    eax = MEM32(ecx + 0x28);
    esi = esi + ebp;
    ebx = edx;
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197767; /* jne: not equal / not zero */

loc_001976B4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x2C), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197767; /* jne: not equal / not zero */

loc_001976BD: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    MEM32(esp + 0x14) = ecx;
    ebx = edi + 0x64;
    PUSH32(esp, ebx);
    ecx = esp + 0x54;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x001976E4u); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_001976E4: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x18);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, ebx);
    eax = esp + 0x54;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0x00197709u); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00197709: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x44) = edx;
    PUSH32(esp, ebx);
    edx = esp + 0x54;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, 0x0019772Eu); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_0019772E: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197742u); RECOMP_ABI_CALL(0x001977A0u, sub_001977A0); /* call 0x001977A0 */

loc_00197742: ;
    esp = esp + 0x30;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197767; /* je: equal / zero */

loc_00197749: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x58F634);
    PUSH32(esp, 0x58F634);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00197763u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00197763: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019778B; /* jne: not equal / not zero */

loc_00197767: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x68);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00197697; /* jl: less (signed <) */

loc_0019777F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 16; return; /* ret 12 */

loc_0019778B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001977A0
 * Original: 0x001977A0 - 0x001978DB (315 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001977A0(void)
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

loc_001977A0: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001977DE; /* jp: parity */

loc_001977BC: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001977DE; /* jp: parity */

loc_001977CB: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001978D3; /* jnp: not parity */

loc_001977DE: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019780F; /* jne: not equal / not zero */

loc_001977ED: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019780F; /* jne: not equal / not zero */

loc_001977FC: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001978D3; /* je: equal / zero */

loc_0019780F: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197843; /* jp: parity */

loc_0019781F: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197843; /* jp: parity */

loc_0019782F: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001978D3; /* jnp: not parity */

loc_00197843: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197873; /* jne: not equal / not zero */

loc_00197853: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197873; /* jne: not equal / not zero */

loc_00197863: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001978D3; /* je: equal / zero */

loc_00197873: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001978A3; /* jp: parity */

loc_00197883: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001978A3; /* jp: parity */

loc_00197893: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7B8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7b8c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001978D3; /* jnp: not parity */

loc_001978A3: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001978D7; /* jne: not equal / not zero */

loc_001978B3: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001978D7; /* jne: not equal / not zero */

loc_001978C3: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001978D7; /* jne: not equal / not zero */

loc_001978D3: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001978D7: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001978E0
 * Original: 0x001978E0 - 0x00197B03 (547 bytes, 179 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001978E0(void)
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

loc_001978E0: ;
    esp = esp - 0x7C;
    ecx = MEM32(esp + 0x88);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 3) = LO8(eax);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00197AFD; /* jle: less or equal (signed <=) */

loc_00197900: ;
    eax = MEM32(esp + 0x84);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x88);
    ebx = eax + eax * 2;
    ebx = ebx << 4;
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, esi);
    /* nop */

loc_00197920: ;
    eax = MEM32(edi + 4);
    esi = MEM32(eax + 0xC);
    ebp = MEM32(edi);
    edx = MEM32(esi + ebx + 0x1C);
    ecx = MEM32(ebp + 0x28);
    esi = esi + ebx;
    eax = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197AD6; /* jne: not equal / not zero */

loc_0019793D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x2C), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197AD6; /* jne: not equal / not zero */

loc_00197946: ;
    SET_LO8(eax, MEM8(ebp + 0x36));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001979DF; /* je: equal / zero */

loc_00197951: ;
    ebx = edi + 0xF8;
    PUSH32(esp, ebx);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00197966u); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00197966: ;
    PUSH32(esp, ebx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197978u); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_00197978: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0019798Au); RECOMP_ABI_CALL(0x00194A90u, sub_00194A90); /* call 0x00194A90 */

loc_0019798A: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 0x34));
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 0x35));
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0xA4;
    edx = esp + 0xB0;
    ebx = edi + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xC8;
    PUSH32(esp, eax);
    ecx = edi + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001979D7u); RECOMP_ABI_CALL(0x00196F90u, sub_00196F90); /* call 0x00196F90 */

loc_001979D7: ;
    esp = esp + 0x54;
    goto loc_00197A61;

loc_001979DF: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esi);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esi + 4);
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = ecx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x34));
    edx = esp + 0x68;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 0x35));
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x50;
    ecx = esp + 0x5C;
    ebx = edi + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    eax = edi + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197A5Eu); RECOMP_ABI_CALL(0x00196F90u, sub_00196F90); /* call 0x00196F90 */

loc_00197A5E: ;
    esp = esp + 0x30;

loc_00197A61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197AD2; /* je: equal / zero */

loc_00197A65: ;
    fp_push(MEMF(edi + 0x5C)); /* fld float */
    eax = MEM32(esp + 0x18);
    fp_top() = fp_top() / MEMF(edi + 0x40); /* fdiv dword ptr [edi + 0x40] */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_top() = fp_top() * MEMF(0x3E0C88); /* fmul dword ptr [0x3e0c88] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00197A9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00197A9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197AD2; /* je: equal / zero */

loc_00197A9E: ;
    ecx = MEM32(esp + 0x2C);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;
    fp_top() = fp_top() * MEMF(edi + 0x5C); /* fmul dword ptr [edi + 0x5c] */
    ecx = edi;
    MEMF(edi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00197AC3u); RECOMP_ABI_CALL(0x00195010u, sub_00195010); /* call 0x00195010 */

loc_00197AC3: ;
    SET_LO8(eax, MEM8(edi + 0x178));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_00197AF5; /* jne: not equal / not zero */

loc_00197AD2: ;
    ebx = MEM32(esp + 0x24);

loc_00197AD6: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x98);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00197920; /* jl: less (signed <) */

loc_00197AF5: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00197AFD: ;
    esp = esp + 0x7C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197B10
 * Original: 0x00197B10 - 0x00197C43 (307 bytes, 116 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197B10(void)
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

loc_00197B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    SET_LO8(eax, MEM8(ecx + 0x178));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197C3F; /* jne: not equal / not zero */

loc_00197B24: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = edi;
    edx = edx << 5;
    eax = eax + edx;
    MEM32(esi + 0x14) = eax;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x28);
    ebx = MEM32(eax + 0x1C);
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00197C3D; /* jne: not equal / not zero */

loc_00197B4C: ;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0xC), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197C3D; /* jne: not equal / not zero */

loc_00197B5A: ;
    edx = eax + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00197B64u); RECOMP_ABI_CALL(0x00197C50u, sub_00197C50); /* call 0x00197C50 */

loc_00197B64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197C3D; /* jne: not equal / not zero */

loc_00197B6C: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = edi + edi + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00197B9E; /* jle: less or equal (signed <=) */

loc_00197B7D: ;
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00197B8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00197B8F: ;
    SET_LO8(ecx, MEM8(esi + 0xC));
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    POP32(esp, ebx);
    MEM8(esi + 0xC) = LO8(ecx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00197B9E: ;
    edi = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esi + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00197BB3; /* jle: less or equal (signed <=) */

loc_00197BAC: ;
    MEM32(esi + 8) = 0;

loc_00197BB3: ;
    eax = MEM32(esi + 8);
    fp_push(MEMF(edx + eax * 4 + 0x44)); /* fld float */
    ecx = MEM32(esi + 0x14);
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() + MEMF(ecx + eax * 4); /* fadd dword ptr [ecx + eax*4] */
    fp_top() = fp_top() - MEMF(ecx + eax * 4 + 0x10); /* fsub dword ptr [ecx + eax*4 + 0x10] */
    MEMF(esi + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197C02; /* jp: parity */

loc_00197BD6: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    edi = ebx + 1;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = edx + edx + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00197BF5u); RECOMP_ABI_CALL(0x00197B10u, sub_00197B10); /* call 0x00197B10 */

loc_00197BF5: ;
    ecx = MEM32(esp + 0x18);
    ebx = ebx - edi;
    PUSH32(esp, ebx);
    edi = edi + ecx;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    goto loc_00197C29;

loc_00197C02: ;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    edi = eax + 1;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    eax = eax - edi;
    PUSH32(esp, eax);
    edx = edi + ebx;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00197C1Eu); RECOMP_ABI_CALL(0x00197B10u, sub_00197B10); /* call 0x00197B10 */

loc_00197C1E: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax + eax + 1;
    PUSH32(esp, ecx);

loc_00197C29: ;
    ecx = esi;
    PUSH32(esp, 0x00197C30u); RECOMP_ABI_CALL(0x00197B10u, sub_00197B10); /* call 0x00197B10 */

loc_00197C30: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00197C3C; /* jns: not sign (positive) */

loc_00197C35: ;
    MEM32(esi + 8) = 2;

loc_00197C3C: ;
    POP32(esp, ebp);

loc_00197C3D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00197C3F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197C50
 * Original: 0x00197C50 - 0x00197E2F (479 bytes, 145 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197C50(void)
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

loc_00197C50: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197E26; /* jnp: not parity */

loc_00197C68: ;
    edx = MEM32(esp + 0x24);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197E26; /* je: equal / zero */

loc_00197C7C: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197E26; /* jnp: not parity */

loc_00197C8D: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197E26; /* je: equal / zero */

loc_00197C9E: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197E26; /* jnp: not parity */

loc_00197CAF: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197E26; /* je: equal / zero */

loc_00197CC0: ;
    SET_LO8(eax, MEM8(ecx + 0x17C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197E1D; /* jne: not equal / not zero */

loc_00197CCE: ;
    eax = MEM32(edx + 8);
    fp_push(MEMF(edx)); /* fld float */
    fp_push(MEMF(edx + 4)); /* fld float */
    edx = MEM32(esi);
    MEM32(esp + 0x1C) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = MEM32(esi + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 0x24);
    MEM32(esp + 0x28) = eax;
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEM32(esp + 8) = edx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx + 0x1A4;
    MEM32(esp + 0x24) = 0xF149F2CAu;
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    edx = 0; /* xor self */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEM32(esp + 0x28) = 0x7149F2CA;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + -384)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00197D51: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197E0E; /* jnp: not parity */

loc_00197D66: ;
    fp_push(MEMF(esp + edx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + -36); /* fsub dword ptr [ecx - 0x24] */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_push(MEMF(esp + edx + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + -36); /* fsub dword ptr [ecx - 0x24] */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197DAF; /* jp: parity */

loc_00197D87: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197D9E; /* jp: parity */

loc_00197D96: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 0x28) = eax;

loc_00197D9E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197DDB; /* jne: not equal / not zero */

loc_00197DA9: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00197DDD;

loc_00197DAF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00197DC0; /* jp: parity */

loc_00197DBA: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00197DC2;

loc_00197DC0: ;
    fp_pop(); /* fstp st(0) */

loc_00197DC2: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00197DDD; /* jne: not equal / not zero */

loc_00197DD1: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 0x24) = eax;
    goto loc_00197DDD;

loc_00197DDB: ;
    fp_pop(); /* fstp st(0) */

loc_00197DDD: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197E26; /* jnp: not parity */

loc_00197DEE: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00197E26; /* je: equal / zero */

loc_00197DFF: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00197E26; /* jnp: not parity */

loc_00197E0E: ;
    edx = edx + 4;
    ecx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00197D51; /* jl: less (signed <) */

loc_00197E1D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_00197E26: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00197E30
 * Original: 0x00197E30 - 0x00198508 (1752 bytes, 468 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197E30(void)
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

loc_00197E30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    eax = 0x7179519E;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = 0xF179519Eu;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    ecx = MEM32(esi + 8);
    ebx = 0; /* xor self */
    MEM8(esi + 0x178) = LO8(ebx);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00197E78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00197E78: ;
    ecx = MEM32(esi + 8);
    MEM8(esi + 0x179) = LO8(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00197E86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00197E86: ;
    ecx = MEM32(esi + 8);
    MEM8(esi + 0x17A) = LO8(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00197E94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00197E94: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(esi + 0x17B) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00197EBF; /* jne: not equal / not zero */

loc_00197E9E: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi);
    edx = MEM32(eax + 8);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0xC);
    MEM32(eax + 0x18) = ecx;
    MEM8(esi + 0x17C) = 1;
    goto loc_00197EC5;

loc_00197EBF: ;
    MEM8(esi + 0x17C) = LO8(ebx);

loc_00197EC5: ;
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(eax + 0x36));
    MEM8(esi + 0xF4) = LO8(edx);
    MEM32(esi + 0x60) = 0x3E800000;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(eax + 0xC);
    ecx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x4C) = ecx;
    MEM32(esp + 0x14) = eax;
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    edx = MEM32(eax + 0x18);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    eax = eax + 0x10;
    edi = esi + 0x34;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    eax = edx;
    MEM32(esi + 0x58) = eax;
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x50);
    MEM32(edi) = ecx;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 0x54);
    MEM32(edi + 4) = edx;
    eax = MEM32(esi + 0x58);
    MEM32(edi + 8) = eax;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x44); /* fsub dword ptr [esi + 0x44] */
    ecx = edi;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x48); /* fsub dword ptr [esi + 0x48] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x4C); /* fsub dword ptr [esi + 0x4c] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00197F44u); RECOMP_ABI_CALL(0x00199BA0u, sub_00199BA0); /* call 0x00199BA0 */

loc_00197F44: ;
    SET_LO8(eax, MEM8(esi + 0x17A));
    MEMF(esi + 0x40) = (float)fp_top(); /* fst */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_001980D3; /* je: equal / zero */

loc_00197F58: ;
    edx = esi + 0xC4;
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    ebp = esi + 0xE8;
    ecx = edx;
    /* nop */

loc_00197F70: ;
    ebx = 3;
    goto loc_00197F80;

    /* nop */
    edi = edi;

loc_00197F80: ;
    MEM32(ecx + -48) = 0;
    MEM32(ecx) = 0;
    ecx = ecx + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00197F80; /* jne: not equal / not zero */

loc_00197F93: ;
    ebx = MEM32(esi);
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(eax + ebx + 0x1C); /* fdiv dword ptr [eax + ebx + 0x1c] */
    eax = eax + 4;
    edx = edx + 0x10;
    ebp = ebp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    MEMF(edx + -64) = (float)fp_top(); /* fst */
    ebx = MEM32(esi);
    fp_top() = fp_top() * MEMF(ebx + eax); /* fmul dword ptr [ebx + eax] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + -52) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esi);
    ebx = MEM32(eax + ebx + 0x18);
    MEM32(edx + -16) = ebx;
    ebx = MEM32(esi);
    ebx = MEM32(ebx + eax);
    MEM32(ebp + -4) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00197F70; /* jl: less (signed <) */

loc_00197FCB: ;
    fp_push(MEMF(esi + 0xAC)); /* fld float */
    ebx = esi + 0x158;
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    ecx = ebx;
    fp_push(MEMF(esi + 0xA0)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x94); /* fmul dword ptr [esi + 0x94] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xB0)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(esi + 0x98)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0xA4)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xB4)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(esi + 0x9C)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0019805Cu); RECOMP_ABI_CALL(0x00199BA0u, sub_00199BA0); /* call 0x00199BA0 */

loc_0019805C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3E0C20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3e0c20] */
    POP32(esp, ebp);
    MEMF(esi + 0x164) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001980CA; /* jne: not equal / not zero */

loc_00198070: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esi + 0x168) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx);
    MEM32(esi + 0x16C) = ecx;
    edx = MEM32(ebx + 4);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x170) = edx;
    eax = MEM32(ebx + 8);
    MEM32(esi + 0x174) = eax;
    fp_push(MEMF(esi + 0x168)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x16C); /* fmul dword ptr [esi + 0x16c] */
    MEMF(esi + 0x16C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x170); /* fmul dword ptr [esi + 0x170] */
    MEMF(esi + 0x170) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 0x174); /* fmul dword ptr [esi + 0x174] */
    MEMF(esi + 0x174) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001980D3;

loc_001980CA: ;
    fp_pop(); /* fstp st(0) */
    MEM8(esi + 0x178) = 1;

loc_001980D3: ;
    SET_LO8(eax, MEM8(esi + 0xF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019825A; /* je: equal / zero */

loc_001980E1: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x40);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    eax = eax + 0x38;
    MEM32(esp + 0x14) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x100) = edx;
    MEMF(esi + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x44)); /* fld float */
    eax = eax + 0x44;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    edx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x10C) = edx;
    ecx = esi + 0xF8;
    MEMF(esi + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x50)); /* fld float */
    eax = eax + 0x50;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    edx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x118) = edx;
    MEM32(esp + 0x14) = eax;
    MEMF(esi + 0x114) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x5C)); /* fld float */
    eax = eax + 0x5C;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    edx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x124) = edx;
    MEM32(esp + 0x14) = eax;
    MEMF(esi + 0x120) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x68)); /* fld float */
    eax = eax + 0x68;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    edx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x128) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x130) = edx;
    MEM32(esp + 0x14) = eax;
    MEMF(esi + 0x12C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x74)); /* fld float */
    eax = eax + 0x74;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    edx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x134) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x13C) = edx;
    MEM32(esp + 0x14) = eax;
    MEMF(esi + 0x138) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x80)); /* fld float */
    eax = eax + 0x80;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = eax;
    MEMF(esi + 0x140) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x148) = edx;
    MEMF(esi + 0x144) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x8C)); /* fld float */
    eax = eax + 0x8C;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = eax;
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x154) = edx;
    MEMF(esi + 0x150) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x17A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00198413; /* je: equal / zero */

loc_00198241: ;
    eax = esi + 0x64;
    PUSH32(esp, eax);
    edx = esi + 0x94;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00198252u); RECOMP_ABI_CALL(0x00194AF0u, sub_00194AF0); /* call 0x00194AF0 */

loc_00198252: ;
    esp = esp + 0xC;
    goto loc_00198413;

loc_0019825A: ;
    SET_LO8(eax, MEM8(esi + 0x17A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00198413; /* je: equal / zero */

loc_00198268: ;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    eax = eax + 0x38;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    ecx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x100) = ecx;
    MEM32(esp + 0x14) = eax;
    MEMF(esi + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0xF8);
    MEM32(esi + 0x128) = edx;
    eax = MEM32(esi + 0xFC);
    MEM32(esi + 0x12C) = eax;
    ecx = MEM32(esi + 0x100);
    MEM32(esi + 0x130) = ecx;
    edx = MEM32(esi + 0x94);
    MEM32(esi + 0x64) = edx;
    eax = MEM32(esi + 0x98);
    MEM32(esi + 0x68) = eax;
    ecx = MEM32(esi + 0x9C);
    MEM32(esi + 0x6C) = ecx;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x44)); /* fld float */
    edx = MEM32(eax + 0x4C);
    fp_push(MEMF(eax + 0x48)); /* fld float */
    eax = eax + 0x44;
    eax = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x10C) = eax;
    MEM32(esp + 0x14) = edx;
    MEMF(esi + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x104);
    MEM32(esi + 0x134) = ecx;
    edx = MEM32(esi + 0x108);
    MEM32(esi + 0x138) = edx;
    eax = MEM32(esi + 0x10C);
    MEM32(esi + 0x13C) = eax;
    ecx = MEM32(esi + 0xA0);
    MEM32(esi + 0x70) = ecx;
    edx = MEM32(esi + 0xA4);
    MEM32(esi + 0x74) = edx;
    eax = MEM32(esi + 0xA8);
    MEM32(esi + 0x78) = eax;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x50)); /* fld float */
    ecx = MEM32(eax + 0x58);
    fp_push(MEMF(eax + 0x54)); /* fld float */
    eax = eax + 0x50;
    edx = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x118) = edx;
    MEM32(esp + 0x14) = ecx;
    MEMF(esi + 0x114) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x110);
    MEM32(esi + 0x140) = eax;
    ecx = MEM32(esi + 0x114);
    MEM32(esi + 0x144) = ecx;
    edx = MEM32(esi + 0x118);
    MEM32(esi + 0x148) = edx;
    eax = MEM32(esi + 0xAC);
    MEM32(esi + 0x7C) = eax;
    ecx = MEM32(esi + 0xB0);
    MEM32(esi + 0x80) = ecx;
    edx = MEM32(esi + 0xB4);
    MEM32(esi + 0x84) = edx;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x5C)); /* fld float */
    eax = eax + 0x5C;
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = eax;
    MEMF(esi + 0x11C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x124) = ecx;
    MEM32(esp + 0x14) = eax;
    MEMF(esi + 0x120) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x11C);
    MEM32(esi + 0x14C) = edx;
    eax = MEM32(esi + 0x120);
    MEM32(esi + 0x150) = eax;
    ecx = MEM32(esi + 0x124);
    MEM32(esi + 0x154) = ecx;
    edx = MEM32(esi + 0xB8);
    MEM32(esi + 0x88) = edx;
    eax = MEM32(esi + 0xBC);
    MEM32(esi + 0x8C) = eax;
    ecx = MEM32(esi + 0xC0);
    MEM32(esi + 0x90) = ecx;

loc_00198413: ;
    SET_LO8(eax, MEM8(esi + 0x179));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001984D2; /* je: equal / zero */

loc_00198421: ;
    SET_LO8(eax, MEM8(esi + 0xF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001984A5; /* je: equal / zero */

loc_0019842B: ;
    eax = MEM32(esi);
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    eax = eax + 0x1C;
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = esp + 0xC;
    fp_push(MEMF(eax + 8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x140); /* fmul dword ptr [esi + 0x140] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x134); /* fmul dword ptr [esi + 0x134] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * MEMF(esi + 0x128); /* fmul dword ptr [esi + 0x128] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x12C); /* fmul dword ptr [esi + 0x12c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(esi + 0x144); /* fmul dword ptr [esi + 0x144] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x138); /* fmul dword ptr [esi + 0x138] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x130); /* fmul dword ptr [esi + 0x130] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x148); /* fmul dword ptr [esi + 0x148] */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    fp_top() = fp_top() * MEMF(esi + 0x13C); /* fmul dword ptr [esi + 0x13c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001984A0u); RECOMP_ABI_CALL(0x00199BA0u, sub_00199BA0); /* call 0x00199BA0 */

loc_001984A0: ;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001984D9;

loc_001984A5: ;
    ecx = MEM32(esi);
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    MEMF(esi + 0x24) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001984BD; /* jp: parity */

loc_001984B7: ;
    edx = MEM32(ecx + 0x20);
    MEM32(esi + 0x24) = edx;

loc_001984BD: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001984D9; /* jp: parity */

loc_001984CA: ;
    eax = MEM32(ecx + 0x24);
    MEM32(esi + 0x24) = eax;
    goto loc_001984D9;

loc_001984D2: ;
    MEM32(esi + 0x24) = 0;

loc_001984D9: ;
    fp_push(MEMF(esi + 0x60)); /* fld float */
    ecx = MEM32(esi + 8);
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001984F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001984F0: ;
    ecx = esi;
    MEM8(esi + 0x17B) = LO8(eax);
    PUSH32(esp, 0x001984FDu); RECOMP_ABI_CALL(0x00195010u, sub_00195010); /* call 0x00195010 */

loc_001984FD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00198510
 * Original: 0x00198510 - 0x00198535 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00198510: ;
    SET_LO8(ecx, MEM8(0x58F65C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019852F; /* jne: not equal / not zero */

loc_0019851F: ;
    MEM32(0x58F65C) = MEM32(0x58F65C) | eax;
    MEM32(0x58F644) = 0x3E0BC8;

loc_0019852F: ;
    eax = 0x58F644;
    esp += 4; return; /* ret */

}

/**
 * sub_00198540
 * Original: 0x00198540 - 0x001988AB (875 bytes, 278 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198540(void)
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

loc_00198540: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esp = esp - 0x24;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    PUSH32(esp, ebx);
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    ebx = 0; /* xor self */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    edx = 0x7149F2CA;
    MEM8(ecx + 0x54) = LO8(ebx);
    MEM8(ecx + 0x55) = LO8(ebx);
    MEM8(ecx + 0x57) = LO8(ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(ecx + 0x50) = 0xF149F2CAu;
    MEM32(ecx + 0x4C) = edx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001985C2; /* jnp: not parity */

loc_00198577: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx + 0x48); /* fdiv dword ptr [ecx + 0x48] */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019859E; /* jp: parity */

loc_00198596: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C7B8C)); /* fld float */

loc_0019859E: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = MEMF(ecx + 0x28) - fp_top(); /* fsubr dword ptr [ecx + 0x28] */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_top() = MEMF(ecx + 0x28) - fp_top(); /* fsubr dword ptr [ecx + 0x28] */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    goto loc_001985E3;

loc_001985C2: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001986F0; /* je: equal / zero */

loc_001985D9: ;
    MEM32(ecx + 0x50) = edx;
    MEM32(ecx + 0x4C) = 0xF149F2CAu;

loc_001985E3: ;
    edx = MEM32(ecx + 0x44);
    eax = MEM32(ecx + 0x40);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(esp + 0x2C) = eax;
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    eax = MEM32(ecx + 0x20);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = MEM32(ecx + 0x2C);
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001986E3; /* jne: not equal / not zero */

loc_00198660: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001986F0; /* jne: not equal / not zero */

loc_0019869B: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001986C8; /* jp: parity */

loc_001986C3: ;
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001986CA;

loc_001986C8: ;
    fp_pop(); /* fstp st(0) */

loc_001986CA: ;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] * fp_top(); fp_pop(); /* fmulp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001986FA; /* jne: not equal / not zero */

loc_001986DA: ;
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(ecx + 0x57) = 1;
    goto loc_001986FC;

loc_001986E3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001986FC; /* jne: not equal / not zero */

loc_001986F0: ;
    MEM8(ecx + 0x56) = LO8(ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_001986FA: ;
    fp_pop(); /* fstp st(0) */

loc_001986FC: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198723; /* jp: parity */

loc_0019870C: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198723; /* jp: parity */

loc_0019871C: ;
    eax = 1;
    goto loc_00198725;

loc_00198723: ;
    eax = 0; /* xor self */

loc_00198725: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    MEM8(ecx + 0x54) = LO8(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019874F; /* jp: parity */

loc_00198738: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019874F; /* jp: parity */

loc_00198748: ;
    eax = 1;
    goto loc_00198751;

loc_0019874F: ;
    eax = 0; /* xor self */

loc_00198751: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    MEM8(ecx + 0x55) = LO8(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019877B; /* jp: parity */

loc_00198764: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0019877B; /* jp: parity */

loc_00198774: ;
    eax = 1;
    goto loc_0019877D;

loc_0019877B: ;
    eax = 0; /* xor self */

loc_0019877D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(ecx + 0x56) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0019878C; /* jne: not equal / not zero */

loc_00198784: ;
    MEM8(ecx + 0x57) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0019878C: ;
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    MEMF(ecx + 0x5C) = (float)fp_top(); /* fst */
    fp_top() = MEMF(ecx + 0x20) - fp_top(); /* fsubr dword ptr [ecx + 0x20] */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 0x60) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x5C);
    edx = MEM32(ecx + 0x60);
    MEM32(ecx + 0x68) = eax;
    eax = MEM32(ecx + 0x64);
    MEM32(ecx + 0x70) = eax;
    eax = MEM32(ecx + 0x60);
    MEM32(ecx + 0x6C) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(ecx + 0x78) = eax;
    _fa = (uint32_t)(MEM8(ecx + 0x57)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x57), LO8(ebx) (8-bit) */
    MEM32(ecx + 0x74) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(ecx + 0x7C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00198863; /* je: equal / zero */

loc_001987E6: ;
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEM32(ecx + 0x88) = ebx;
    MEMF(ecx + 0x80) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(ecx + 0x84) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8378)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8378] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198845; /* jne: not equal / not zero */

loc_00198821: ;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    SET_LO8(eax, MEM8(ecx + 0x56));
    POP32(esp, ebx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    MEMF(ecx + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00198845: ;
    SET_LO8(eax, MEM8(ecx + 0x56));
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x84) = ebx;
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x80) = 0x3F800000;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00198863: ;
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x80) = ebx;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198893; /* jp: parity */

loc_0019887B: ;
    SET_LO8(eax, MEM8(ecx + 0x56));
    MEM32(ecx + 0x84) = ebx;
    MEM32(ecx + 0x88) = 0x3F800000;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00198893: ;
    SET_LO8(eax, MEM8(ecx + 0x56));
    MEM32(ecx + 0x84) = ebx;
    MEM32(ecx + 0x88) = 0xBF800000u;
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001988B0
 * Original: 0x001988B0 - 0x00198D30 (1152 bytes, 366 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001988B0(void)
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

loc_001988B0: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp = esp - 0x2C;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    MEM8(ecx + 0x58) = 1;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001988D9; /* jp: parity */

loc_001988CD: ;
    esp = esp + 0x2C;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00198540(); return; /* tail jmp 0x00198540 */

loc_001988D9: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() + MEMF(ecx + 0x30); /* fadd dword ptr [ecx + 0x30] */
    ebx = 0; /* xor self */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = 0x7149F2CA;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    MEM8(ecx + 0x54) = LO8(ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    MEM8(ecx + 0x55) = LO8(ebx);
    MEM8(ecx + 0x57) = LO8(ebx);
    MEM32(ecx + 0x50) = 0xF149F2CAu;
    MEM32(ecx + 0x4C) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00198957; /* jnp: not parity */

loc_0019890C: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx + 0x48); /* fdiv dword ptr [ecx + 0x48] */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198933; /* jp: parity */

loc_0019892B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C7B8C)); /* fld float */

loc_00198933: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_top() = MEMF(ecx + 0x28) - fp_top(); /* fsubr dword ptr [ecx + 0x28] */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_top() = MEMF(ecx + 0x28) - fp_top(); /* fsubr dword ptr [ecx + 0x28] */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    goto loc_00198978;

loc_00198957: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00198ABA; /* je: equal / zero */

loc_0019896E: ;
    MEM32(ecx + 0x50) = edx;
    MEM32(ecx + 0x4C) = 0xF149F2CAu;

loc_00198978: ;
    edx = MEM32(ecx + 0x44);
    eax = MEM32(ecx + 0x40);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    edx = MEM32(ecx + 4);
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    MEM32(esp + 0x34) = eax;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(esp + 0xC) = edx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 0x20);
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0xC); /* fadd dword ptr [ecx + 0xc] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198AAD; /* jne: not equal / not zero */

loc_00198A00: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198A2A; /* jne: not equal / not zero */

loc_00198A27: ;
    MEM8(ecx + 0x58) = LO8(ebx);

loc_00198A2A: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp + 0x34) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198ABA; /* jne: not equal / not zero */

loc_00198A65: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198A92; /* jp: parity */

loc_00198A8D: ;
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00198A94;

loc_00198A92: ;
    fp_pop(); /* fstp st(0) */

loc_00198A94: ;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] * fp_top(); fp_pop(); /* fmulp st(2) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198AC4; /* jne: not equal / not zero */

loc_00198AA4: ;
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(ecx + 0x57) = 1;
    goto loc_00198AC6;

loc_00198AAD: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198AC6; /* jne: not equal / not zero */

loc_00198ABA: ;
    MEM8(ecx + 0x56) = LO8(ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00198AC4: ;
    fp_pop(); /* fstp st(0) */

loc_00198AC6: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198AFA; /* jp: parity */

loc_00198AD6: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198AFA; /* jp: parity */

loc_00198AE6: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198AFA; /* jp: parity */

loc_00198AF3: ;
    edx = 1;
    goto loc_00198AFC;

loc_00198AFA: ;
    edx = 0; /* xor self */

loc_00198AFC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    MEM8(ecx + 0x56) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00198B2A; /* je: equal / zero */

loc_00198B03: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198B2A; /* jp: parity */

loc_00198B13: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198B2A; /* jp: parity */

loc_00198B23: ;
    eax = 1;
    goto loc_00198B2C;

loc_00198B2A: ;
    eax = 0; /* xor self */

loc_00198B2C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    MEM8(ecx + 0x54) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00198B5A; /* je: equal / zero */

loc_00198B33: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198B5A; /* jp: parity */

loc_00198B43: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198B5A; /* jp: parity */

loc_00198B53: ;
    eax = 1;
    goto loc_00198B5C;

loc_00198B5A: ;
    eax = 0; /* xor self */

loc_00198B5C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    MEM8(ecx + 0x55) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00198B6E; /* jne: not equal / not zero */

loc_00198B63: ;
    SET_LO8(eax, MEM8(ecx + 0x56));
    MEM8(ecx + 0x57) = LO8(ebx);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00198B6E: ;
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    MEMF(ecx + 0x5C) = (float)fp_top(); /* fst */
    fp_top() = MEMF(ecx + 0x20) - fp_top(); /* fsubr dword ptr [ecx + 0x20] */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x44); /* fmul dword ptr [ecx + 0x44] */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 0x60) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x48); /* fmul dword ptr [ecx + 0x48] */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(ecx + 0x57));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00198CA9; /* je: equal / zero */

loc_00198BC4: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    MEM32(ecx + 0x88) = ebx;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx + 0x80) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(ecx + 0x84) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8378)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8378] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198C1B; /* jne: not equal / not zero */

loc_00198C01: ;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    MEMF(ecx + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(ecx + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00198C2D;

loc_00198C1B: ;
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x80) = 0x3F800000;
    MEM32(ecx + 0x84) = ebx;

loc_00198C2D: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x30); /* fsub dword ptr [ecx + 0x30] */
    MEMF(ecx + 0x70) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x10); /* fsub dword ptr [ecx + 0x10] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198C56; /* jne: not equal / not zero */

loc_00198C4F: ;
    eax = MEM32(esp + 0x20);
    MEM32(ecx + 0x70) = eax;

loc_00198C56: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x30); /* fadd dword ptr [ecx + 0x30] */
    MEMF(ecx + 0x7C) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x64); /* fadd dword ptr [ecx + 0x64] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198C7B; /* jp: parity */

loc_00198C74: ;
    edx = MEM32(esp + 0x20);
    MEM32(ecx + 0x7C) = edx;

loc_00198C7B: ;
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    SET_LO8(eax, MEM8(ecx + 0x56));
    POP32(esp, ebx);
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_top() = fp_top() + MEMF(ecx + 0x5C); /* fadd dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x68) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_top() = fp_top() + MEMF(ecx + 0x60); /* fadd dword ptr [ecx + 0x60] */
    MEMF(ecx + 0x6C) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_00198CA9: ;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    MEM32(ecx + 0x84) = ebx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM32(ecx + 0x80) = ebx;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198CD7; /* jp: parity */

loc_00198CC8: ;
    fp_top() = fp_top() + MEMF(ecx + 0x30); /* fadd dword ptr [ecx + 0x30] */
    MEM32(ecx + 0x88) = 0x3F800000;
    goto loc_00198CE4;

loc_00198CD7: ;
    fp_top() = fp_top() - MEMF(ecx + 0x30); /* fsub dword ptr [ecx + 0x30] */
    MEM32(ecx + 0x88) = 0xBF800000u;

loc_00198CE4: ;
    MEMF(ecx + 0x70) = (float)fp_top(); /* fst */
    SET_LO8(eax, MEM8(ecx + 0x56));
    MEMF(ecx + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_top() = fp_top() + MEMF(ecx + 0x5C); /* fadd dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_top() = fp_top() + MEMF(ecx + 0x60); /* fadd dword ptr [ecx + 0x60] */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 0x2C); /* fmul dword ptr [ecx + 0x2c] */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_top() = MEMF(ecx + 0x20) - fp_top(); /* fsubr dword ptr [ecx + 0x20] */
    MEMF(ecx + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x2C); /* fmul dword ptr [ecx + 0x2c] */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_top() = MEMF(ecx + 0x24) - fp_top(); /* fsubr dword ptr [ecx + 0x24] */
    MEMF(ecx + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00198D30
 * Original: 0x00198D30 - 0x0019904C (796 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198D30(void)
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

loc_00198D30: ;
    esp = esp - 0x20;
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx + 0x2C); /* fdiv dword ptr [ecx + 0x2c] */
    edx = 0; /* xor self */
    MEM8(ecx + 0x58) = 1;
    MEM8(ecx + 0x54) = LO8(edx);
    MEM8(ecx + 0x55) = LO8(edx);
    MEM8(ecx + 0x57) = LO8(edx);
    MEM8(ecx + 0x56) = LO8(edx);
    MEM32(ecx + 0x50) = 0xF149F2CAu;
    MEM32(ecx + 0x4C) = 0x7149F2CA;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(ecx + 0x30); /* fdiv dword ptr [ecx + 0x30] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x20); /* fsub dword ptr [ecx + 0x20] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x24); /* fsub dword ptr [ecx + 0x24] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x28); /* fsub dword ptr [ecx + 0x28] */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 0x40); /* fmul dword ptr [ecx + 0x40] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 0x44); /* fmul dword ptr [ecx + 0x44] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x48); /* fmul dword ptr [ecx + 0x48] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198DD9; /* jp: parity */

loc_00198DD6: ;
    MEM8(ecx + 0x58) = LO8(edx);

loc_00198DD9: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x10); /* fadd dword ptr [ecx + 0x10] */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00199046; /* jnp: not parity */

loc_00198E4C: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00199046; /* jnp: not parity */

loc_00198E61: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x24); /* fdiv dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = MEM32(esp + 0x24);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198EA7; /* jp: parity */

loc_00198E9F: ;
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x50) = eax;
    goto loc_00198EAD;

loc_00198EA7: ;
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x4C) = eax;

loc_00198EAD: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198ED4; /* jp: parity */

loc_00198EBD: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198ED4; /* jp: parity */

loc_00198ECD: ;
    eax = 1;
    goto loc_00198ED6;

loc_00198ED4: ;
    eax = 0; /* xor self */

loc_00198ED6: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    MEM8(ecx + 0x54) = LO8(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198F00; /* jp: parity */

loc_00198EE9: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198F00; /* jp: parity */

loc_00198EF9: ;
    eax = 1;
    goto loc_00198F02;

loc_00198F00: ;
    eax = 0; /* xor self */

loc_00198F02: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    MEM8(ecx + 0x55) = LO8(eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198F2C; /* jp: parity */

loc_00198F15: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00198F2C; /* jp: parity */

loc_00198F25: ;
    eax = 1;
    goto loc_00198F2E;

loc_00198F2C: ;
    eax = 0; /* xor self */

loc_00198F2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    MEM8(ecx + 0x56) = LO8(eax);
    MEM8(ecx + 0x57) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0019903F; /* je: equal / zero */

loc_00198F3C: ;
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(ecx + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(ecx + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x4C); /* fmul dword ptr [ecx + 0x4c] */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(ecx + 0x88) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    fp_push(MEMF(ecx + 0x84)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8378)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8378] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00198FF3; /* jne: not equal / not zero */

loc_00198FC1: ;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 0x80); /* fmul dword ptr [ecx + 0x80] */
    MEMF(ecx + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 0x84); /* fmul dword ptr [ecx + 0x84] */
    MEMF(ecx + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 0x88); /* fmul dword ptr [ecx + 0x88] */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00198FFF;

loc_00198FF3: ;
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x80) = 0x3F800000;

loc_00198FFF: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x80); /* fmul dword ptr [ecx + 0x80] */
    fp_top() = MEMF(ecx + 0x5C) - fp_top(); /* fsubr dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x68) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x84); /* fmul dword ptr [ecx + 0x84] */
    fp_top() = MEMF(ecx + 0x60) - fp_top(); /* fsubr dword ptr [ecx + 0x60] */
    MEMF(ecx + 0x6C) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x88)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x10); /* fmul dword ptr [ecx + 0x10] */
    fp_top() = MEMF(ecx + 0x64) - fp_top(); /* fsubr dword ptr [ecx + 0x64] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x24);
    MEMF(ecx + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ecx + 0x7C) = edx;
    MEMF(ecx + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x78) = (float)fp_top(); fp_pop(); /* fstp */

loc_0019903F: ;
    SET_LO8(eax, MEM8(ecx + 0x56));
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00199046: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00199050
 * Original: 0x00199050 - 0x00199084 (52 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199050: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019905Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019905D: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0019907F; /* je: equal / zero */

loc_0019906C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199073u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199073: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | edi;
    MEM32(eax) = ecx;

loc_0019907F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00199090
 * Original: 0x00199090 - 0x001990C4 (52 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199090: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019909Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019909D: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001990BF; /* je: equal / zero */

loc_001990AC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001990B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001990B3: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | edi;
    MEM32(eax) = ecx;

loc_001990BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001990D0
 * Original: 0x001990D0 - 0x0019912F (95 bytes, 42 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001990D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001990D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0019910B; /* je: equal / zero */

loc_001990E8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001990EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001990ED: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x18) (32-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00199104; /* jne: not equal / not zero */

loc_001990F9: ;
    edx = MEM32(esi);
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001990FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001990FF: ;
    MEM32(eax + 4) = ebp;
    goto loc_0019910B;

loc_00199104: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199108u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199108: ;
    MEM32(eax + 8) = ebp;

loc_0019910B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199126; /* je: equal / zero */

loc_00199113: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019911Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019911A: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | edi;
    MEM32(eax) = ecx;

loc_00199126: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00199130
 * Original: 0x00199130 - 0x00199209 (217 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199130(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199130: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00199194; /* je: equal / zero */

loc_00199142: ;
    ecx = MEM32(ebp);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019914Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019914C: ;
    ebx = MEM32(eax + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199156u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199156: ;
    ebp = MEM32(ebp);
    edi = MEM32(eax + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199163u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199163: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    MEM32(eax + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00199181; /* je: equal / zero */

loc_0019916E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199175u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199175: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | ebp;
    MEM32(eax) = ecx;

loc_00199181: ;
    ebp = MEM32(esp + 0x14);
    edx = MEM32(esi);
    edi = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019918Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019918F: ;
    MEM32(eax + 4) = edi;
    goto loc_001991E4;

loc_00199194: ;
    eax = MEM32(ebp);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019919Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019919E: ;
    ebx = MEM32(eax + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001991A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001991A8: ;
    ebp = MEM32(ebp);
    edi = MEM32(eax + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001991B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001991B5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    MEM32(eax + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001991D3; /* je: equal / zero */

loc_001991C0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001991C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001991C7: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | ebp;
    MEM32(eax) = ecx;

loc_001991D3: ;
    ebp = MEM32(esp + 0x14);
    edx = MEM32(esi);
    edi = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001991E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001991E1: ;
    MEM32(eax + 8) = edi;

loc_001991E4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001991FF; /* je: equal / zero */

loc_001991EC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001991F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001991F3: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | ebx;
    MEM32(eax) = ecx;

loc_001991FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00199210
 * Original: 0x00199210 - 0x001994EC (732 bytes, 311 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199210: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0019922F; /* je: equal / zero */

loc_00199221: ;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019922Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019922A: ;
    eax = MEM32(eax + 8);
    goto loc_0019923B;

loc_0019922F: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199238u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199238: ;
    eax = MEM32(eax + 4);

loc_0019923B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    edx = MEM32(esi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0019926E; /* jne: not equal / not zero */

loc_00199246: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019924Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019924B: ;
    ebx = MEM32(eax);
    eax = MEM32(edi);
    edx = MEM32(esi);
    ebx = ebx >> 0x1E;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019925Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019925C: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019926E: ;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199272u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199272: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00199281; /* je: equal / zero */

loc_00199278: ;
    eax = MEM32(ebp + 4);
    MEM32(esp + 0x14) = eax;
    goto loc_00199288;

loc_00199281: ;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x14) = eax;

loc_00199288: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00199291; /* je: equal / zero */

loc_0019928C: ;
    ebx = MEM32(ebp + 8);
    goto loc_00199294;

loc_00199291: ;
    ebx = MEM32(ebp + 4);

loc_00199294: ;
    ecx = MEM32(ebp);
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199448; /* jne: not equal / not zero */

loc_001992A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001992BA; /* je: equal / zero */

loc_001992AA: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001992B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001992B1: ;
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001992DA; /* jne: not equal / not zero */

loc_001992BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199418; /* je: equal / zero */

loc_001992C6: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001992CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001992CD: ;
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00199418; /* je: equal / zero */

loc_001992DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019935A; /* je: equal / zero */

loc_001992E2: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001992E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001992E9: ;
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019935A; /* je: equal / zero */

loc_001992F2: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001992FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001992FB: ;
    ecx = MEM32(eax);
    ecx = ecx >> 0x1E;
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0019930Eu); RECOMP_ABI_CALL(0x00025060u, sub_00025060); /* call 0x00025060 */

loc_0019930E: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019931Bu); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_0019931B: ;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199324u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199324: ;
    eax = MEM32(eax + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019932Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019932E: ;
    MEM32(eax) = MEM32(eax) & 0xBFFFFFFFu;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019933Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019933D: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199347u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199347: ;
    ecx = MEM32(eax);
    POP32(esp, ebp);
    POP32(esp, edi);
    ecx = ecx & 0xBFFFFFFFu;
    POP32(esp, esi);
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019935A: ;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199363u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199363: ;
    ebx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    ebx = ebx >> 0x1E;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199376u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199376: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00199384; /* je: equal / zero */

loc_0019937C: ;
    ecx = ecx | 0x40000000;
    goto loc_0019938A;

loc_00199384: ;
    ecx = ecx & 0xBFFFFFFFu;

loc_0019938A: ;
    MEM32(eax) = ecx;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199395u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199395: ;
    ecx = MEM32(eax);
    ebx = MEM32(esp + 0x18);
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    eax = MEM32(edi);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001993ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001993AC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = esp + 0x18;
    if (TEST_Z(_fa, _fb)) goto loc_001993E6; /* je: equal / zero */

loc_001993B4: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001993C5u); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_001993C5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001993D4u); RECOMP_ABI_CALL(0x00199090u, sub_00199090); /* call 0x00199090 */

loc_001993D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001993DDu); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_001993DD: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001993E6: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001993F7u); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_001993F7: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00199406u); RECOMP_ABI_CALL(0x00199050u, sub_00199050); /* call 0x00199050 */

loc_00199406: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019940Fu); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_0019940F: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00199418: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199421u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199421: ;
    ebx = MEM32(eax);
    eax = MEM32(edi);
    edx = MEM32(esi);
    ebx = ebx >> 0x1E;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199432u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199432: ;
    MEM32(eax) = MEM32(eax) & 0xBFFFFFFFu;
    MEM32(ebp) = MEM32(ebp) | 0x40000000;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00199448: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199451u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199451: ;
    ecx = MEM32(eax);
    eax = MEM32(ebp);
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00199465; /* je: equal / zero */

loc_0019945E: ;
    eax = eax | 0x40000000;
    goto loc_0019946A;

loc_00199465: ;
    eax = eax & 0xBFFFFFFFu;

loc_0019946A: ;
    MEM32(ebp) = eax;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199476u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199476: ;
    MEM32(eax) = MEM32(eax) | 0x40000000;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00199489u); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_00199489: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199492u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199492: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = esp + 0x18;
    if (TEST_Z(_fa, _fb)) goto loc_001994C3; /* je: equal / zero */

loc_0019949A: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001994ABu); RECOMP_ABI_CALL(0x00199210u, sub_00199210); /* call 0x00199210 */

loc_001994AB: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001994BAu); RECOMP_ABI_CALL(0x00199050u, sub_00199050); /* call 0x00199050 */

loc_001994BA: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001994C3: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001994D4u); RECOMP_ABI_CALL(0x00199210u, sub_00199210); /* call 0x00199210 */

loc_001994D4: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001994E3u); RECOMP_ABI_CALL(0x00199090u, sub_00199090); /* call 0x00199090 */

loc_001994E3: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001994F0
 * Original: 0x001994F0 - 0x00199862 (882 bytes, 370 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001994F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001994F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    ebx = 0x3FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00199519; /* jne: not equal / not zero */

loc_00199505: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199510; /* jne: not equal / not zero */

loc_0019950A: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = eax;

loc_00199510: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00199519: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00199522u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199522: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001995AD; /* je: equal / zero */

loc_0019952A: ;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199533u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199533: ;
    edx = MEM32(eax + 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00199546u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_00199546: ;
    ebp = MEM32(edi);
    edx = MEM32(esi);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199557u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199557: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    MEM32(eax + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00199575; /* je: equal / zero */

loc_00199562: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199569u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199569: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | ebp;
    MEM32(eax) = ecx;

loc_00199575: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019958D; /* jne: not equal / not zero */

loc_0019957F: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019958Du); RECOMP_ABI_CALL(0x00199050u, sub_00199050); /* call 0x00199050 */

loc_0019958D: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199596u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199596: ;
    ebx = MEM32(eax + 4);
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001995A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001995A2: ;
    ebp = MEM32(esp + 0x10);
    MEM8(esp + 0x18) = 0;
    goto loc_0019961A;

loc_001995AD: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001995B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001995B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00199858; /* je: equal / zero */

loc_001995BF: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001995C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001995C8: ;
    ecx = MEM32(eax + 8);
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001995DBu); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_001995DB: ;
    ecx = MEM32(edi);
    ebp = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001995ECu); RECOMP_ABI_CALL(0x00199090u, sub_00199090); /* call 0x00199090 */

loc_001995EC: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199600; /* jne: not equal / not zero */

loc_001995F2: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00199600u); RECOMP_ABI_CALL(0x00199090u, sub_00199090); /* call 0x00199090 */

loc_00199600: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199609u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199609: ;
    ebx = MEM32(eax + 8);
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199615u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199615: ;
    MEM8(esp + 0x18) = 1;

loc_0019961A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001997B1; /* je: equal / zero */

loc_00199626: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019962Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019962F: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001996D9; /* je: equal / zero */

loc_0019963C: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199645u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199645: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001996D9; /* je: equal / zero */

loc_00199652: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019965Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019965B: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199665u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199665: ;
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001996D9; /* je: equal / zero */

loc_0019966E: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199677u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199677: ;
    eax = MEM32(eax + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199681u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199681: ;
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001996D9; /* je: equal / zero */

loc_0019968A: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199693u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199693: ;
    ebx = eax;
    edx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    edx = edx | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(ebx) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001996B6; /* je: equal / zero */

loc_001996A9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001996B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001996B0: ;
    MEM32(eax) = MEM32(eax) & 0xBFFFFFFFu;

loc_001996B6: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001997B1; /* je: equal / zero */

loc_001996C5: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001996CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001996CC: ;
    ecx = MEM32(eax);
    ecx = ecx & 0xBFFFFFFFu;
    goto loc_001997AF;

loc_001996D9: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esi;
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001996ED; /* je: equal / zero */

loc_001996E4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001996E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001996E8: ;
    eax = MEM32(eax + 8);
    goto loc_001996F4;

loc_001996ED: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001996F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001996F1: ;
    eax = MEM32(eax + 4);

loc_001996F4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001996FF; /* jne: not equal / not zero */

loc_001996F8: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    goto loc_00199761;

loc_001996FF: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    edx = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(edi);
    ecx = esi;
    PUSH32(esp, eax);
    if (TEST_Z(_fa, _fb)) goto loc_00199736; /* je: equal / zero */

loc_0019970E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199710u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199710: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00199725u); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_00199725: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00199734u); RECOMP_ABI_CALL(0x00199090u, sub_00199090); /* call 0x00199090 */

loc_00199734: ;
    goto loc_0019975C;

loc_00199736: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199738u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199738: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, 1);
    edx = esp + 0x14;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0019974Du); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_0019974D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019975Cu); RECOMP_ABI_CALL(0x00199050u, sub_00199050); /* call 0x00199050 */

loc_0019975C: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);

loc_00199761: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00199769u); RECOMP_ABI_CALL(0x00199130u, sub_00199130); /* call 0x00199130 */

loc_00199769: ;
    ecx = MEM32(edi);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199772u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199772: ;
    ebx = eax;
    edx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    edx = edx & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(ebx) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00199795; /* je: equal / zero */

loc_00199788: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019978Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019978F: ;
    MEM32(eax) = MEM32(eax) | 0x40000000;

loc_00199795: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001997B1; /* je: equal / zero */

loc_001997A0: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001997A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001997A7: ;
    ecx = MEM32(eax);
    ecx = ecx | 0x40000000;

loc_001997AF: ;
    MEM32(eax) = ecx;

loc_001997B1: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001997BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001997BA: ;
    ecx = MEM32(eax);
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019984B; /* je: equal / zero */

loc_001997C8: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001997D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001997D1: ;
    ecx = MEM32(eax + 4);
    ebx = 0x3FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019980D; /* je: equal / zero */

loc_001997DD: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001997E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001997E6: ;
    eax = MEM32(eax + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001997F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001997F0: ;
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019980D; /* je: equal / zero */

loc_001997F9: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199802u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199802: ;
    eax = MEM32(eax + 4);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0019980D: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199816u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199816: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019984B; /* je: equal / zero */

loc_0019981B: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199824u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199824: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019982Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019982E: ;
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019984B; /* je: equal / zero */

loc_00199837: ;
    eax = MEM32(edi);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199840u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199840: ;
    eax = MEM32(eax + 8);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0019984B: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x3FFFFFFF;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00199858: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00199870
 * Original: 0x00199870 - 0x00199914 (164 bytes, 63 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199870: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001998DD; /* je: equal / zero */

loc_00199885: ;
    SET_LO8(ebx, MEM8(esp + 0x1C));
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    edi = edi;

loc_00199890: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019989Au); RECOMP_ABI_CALL(0x001990D0u, sub_001990D0); /* call 0x001990D0 */

loc_0019989A: ;
    MEM8(esp + 0x1C) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001998A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001998A5: ;
    ebp = MEM32(eax);
    ebp = ebp & 0xBFFFFFFFu;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(esp + 0x20) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001998CA; /* jne: not equal / not zero */

loc_001998B5: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001998C6u); RECOMP_ABI_CALL(0x00199210u, sub_00199210); /* call 0x00199210 */

loc_001998C6: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_001998CC;

loc_001998CA: ;
    SET_LO8(ebx, 1);

loc_001998CC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FFFFFFF (32-bit) */
    eax = MEM32(esp + 0x20);
    ecx = edi;
    edi = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00199890; /* jne: not equal / not zero */

loc_001998DC: ;
    POP32(esp, ebp);

loc_001998DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019990E; /* je: equal / zero */

loc_001998E7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001998EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001998EE: ;
    MEM32(eax) = MEM32(eax) & 0xBFFFFFFFu;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001998FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001998FE: ;
    edx = MEM32(eax);
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;

loc_0019990E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00199920
 * Original: 0x00199920 - 0x00199B46 (550 bytes, 227 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199920: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199932u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199932: ;
    ecx = MEM32(eax + 4);
    ebx = 0x3FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199ACB; /* je: equal / zero */

loc_00199942: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199949u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199949: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199ACB; /* je: equal / zero */

loc_00199952: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199959u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199959: ;
    eax = MEM32(eax);
    edx = MEM32(esi);
    eax = eax & 0xBFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019996Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019996B: ;
    edi = MEM32(eax + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0019997Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019997D: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019999C; /* je: equal / zero */

loc_00199982: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x14) = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019998Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019998D: ;
    edi = MEM32(eax + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199997u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199997: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199982; /* jne: not equal / not zero */

loc_0019999C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001999A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001999A3: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001999B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001999B1: ;
    ebx = MEM32(eax + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001999BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001999BB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    MEM32(eax + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001999D9; /* je: equal / zero */

loc_001999C6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001999CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001999CD: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | edi;
    MEM32(eax) = ecx;

loc_001999D9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001999E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001999E0: ;
    ebx = MEM32(eax + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001999EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001999EA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    MEM32(eax + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00199A08; /* je: equal / zero */

loc_001999F5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001999FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001999FC: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | edi;
    MEM32(eax) = ecx;

loc_00199A08: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199A0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199A0F: ;
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esp + 0x20) = LO8(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199A21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199A21: ;
    ebx = MEM32(eax);
    edx = MEM32(esi);
    ebx = ebx >> 0x1E;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199A30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199A30: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00199A3E; /* je: equal / zero */

loc_00199A36: ;
    ecx = ecx | 0x40000000;
    goto loc_00199A44;

loc_00199A3E: ;
    ecx = ecx & 0xBFFFFFFFu;

loc_00199A44: ;
    MEM32(eax) = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199A4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199A4D: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00199A5F; /* je: equal / zero */

loc_00199A57: ;
    ecx = ecx | 0x40000000;
    goto loc_00199A65;

loc_00199A5F: ;
    ecx = ecx & 0xBFFFFFFFu;

loc_00199A65: ;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00199A7B; /* je: equal / zero */

loc_00199A73: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199A79u); RECOMP_ABI_CALL(0x00199050u, sub_00199050); /* call 0x00199050 */

loc_00199A79: ;
    goto loc_00199A81;

loc_00199A7B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00199A81u); RECOMP_ABI_CALL(0x00199090u, sub_00199090); /* call 0x00199090 */

loc_00199A81: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00199A8Fu); RECOMP_ABI_CALL(0x001990D0u, sub_001990D0); /* call 0x001990D0 */

loc_00199A8F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199A96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199A96: ;
    MEM32(eax + 4) = 0x3FFFFFFF;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199AA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199AA4: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    MEM32(eax + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00199AC6; /* je: equal / zero */

loc_00199AB3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199ABAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199ABA: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x40000000;
    ecx = ecx | ebp;
    MEM32(eax) = ecx;

loc_00199AC6: ;
    ebx = 0x3FFFFFFF;

loc_00199ACB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199AD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199AD2: ;
    eax = MEM32(eax);
    edx = MEM32(esi);
    eax = eax >> 0x1E;
    SET_LO8(eax, LO8(eax) & 1);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esp + 0x24) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199AE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199AE4: ;
    edi = MEM32(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    edi = edi & 0xBFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199AF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199AF3: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    PUSH32(esp, ebp);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00199B04; /* jne: not equal / not zero */

loc_00199AFB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00199AFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199AFF: ;
    ebx = MEM32(eax + 8);
    goto loc_00199B0B;

loc_00199B04: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199B08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199B08: ;
    ebx = MEM32(eax + 4);

loc_00199B0B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00199B13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199B13: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199B2D; /* je: equal / zero */

loc_00199B1B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00199B22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00199B22: ;
    MEM32(eax) = MEM32(eax) & 0xBFFFFFFFu;
    MEM8(esp + 0x20) = 1;

loc_00199B2D: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00199B3Cu); RECOMP_ABI_CALL(0x00199870u, sub_00199870); /* call 0x00199870 */

loc_00199B3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00199B50
 * Original: 0x00199B50 - 0x00199B78 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199B50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00199B76; /* je: equal / zero */

loc_00199B5A: ;
    /* nop */

loc_00199B60: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199B69u); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_00199B69: ;
    esp = esp + 4;
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199B60; /* jne: not equal / not zero */

loc_00199B76: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00199B80
 * Original: 0x00199B80 - 0x00199B98 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199B80(void)
{

loc_00199B80: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00199B94u); RECOMP_ABI_CALL(0x00342A40u, sub_00342A40); /* call 0x00342A40 */

loc_00199B94: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00199BA0
 * Original: 0x00199BA0 - 0x00199BC1 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00199BA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00199BA0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00199BD0
 * Original: 0x00199BD0 - 0x00199BEF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199BD0: ;
    eax = MEM32(0x58F67C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00199BEE; /* je: equal / zero */

loc_00199BD9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199BE1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00199BE1: ;
    esp = esp + 8;
    MEM32(0x58F67C) = 0;

loc_00199BEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00199BF0
 * Original: 0x00199BF0 - 0x00199C01 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199BF0: ;
    eax = MEM32(esp + 4);
    edx = eax + 1;

loc_00199BF7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199BF7; /* jne: not equal / not zero */

loc_00199BFE: ;
    eax = eax - edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00199C10
 * Original: 0x00199C10 - 0x00199C64 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199C10: ;
    _fa = (uint32_t)(MEM8(0x5A6688)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5A6688), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199C5E; /* jne: not equal / not zero */

loc_00199C19: ;
    eax = MEM32(0x5A6688);
    eax = eax | 1;
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(0x5A6688) = eax;
    ecx = 0x2000;
    eax = 0; /* xor self */
    edi = 0x58F684;
    MEM32(0x58F680) = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x58F684) = 1;
    MEM8(0x597688) = LO8(edx);
    MEM8(0x597689) = LO8(edx);
    MEM32(0x597684) = 2;
    POP32(esp, edi);

loc_00199C5E: ;
    eax = 0x58F680;
    esp += 4; return; /* ret */

}

/**
 * sub_00199C70
 * Original: 0x00199C70 - 0x00199CC4 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199C70: ;
    _fa = (uint32_t)(MEM8(0x5ABE98)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5ABE98), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199CBE; /* jne: not equal / not zero */

loc_00199C79: ;
    eax = MEM32(0x5ABE98);
    eax = eax | 1;
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(0x5ABE98) = eax;
    ecx = 0x800;
    eax = 0; /* xor self */
    edi = 0x5A6694;
    MEM32(0x5A6690) = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x5A6694) = 1;
    MEM8(0x5A8698) = LO8(edx);
    MEM8(0x5A8699) = LO8(edx);
    MEM32(0x5A8694) = 2;
    POP32(esp, edi);

loc_00199CBE: ;
    eax = 0x5A6690;
    esp += 4; return; /* ret */

}

/**
 * sub_00199CD0
 * Original: 0x00199CD0 - 0x00199D41 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199CD0: ;
    eax = MEM32(0x58F67C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199D40; /* jne: not equal / not zero */

loc_00199CD9: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x2C08);
    PUSH32(esp, 0x00199CE7u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00199CE7: ;
    edx = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00199D26; /* je: equal / zero */

loc_00199CF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + 4;
    eax = 0; /* xor self */
    edi = esi;
    ecx = 0x400;
    MEM32(edx) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi) = 1;
    MEM8(edx + 0x1008) = LO8(eax);
    MEM8(edx + 0x1009) = LO8(eax);
    MEM32(edx + 0x1004) = 2;
    POP32(esp, esi);
    goto loc_00199D28;

loc_00199D26: ;
    edx = 0; /* xor self */

loc_00199D28: ;
    PUSH32(esp, 0x199BD0);
    MEM32(0x58F67C) = edx;
    PUSH32(esp, 0x00199D38u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_00199D38: ;
    eax = MEM32(0x58F67C);
    esp = esp + 4;

loc_00199D40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00199D50
 * Original: 0x00199D50 - 0x00199DA4 (84 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199D50: ;
    _fa = (uint32_t)(MEM8(0x5B76A8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5B76A8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199D9E; /* jne: not equal / not zero */

loc_00199D59: ;
    eax = MEM32(0x5B76A8);
    eax = eax | 1;
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(0x5B76A8) = eax;
    ecx = 0x1000;
    eax = 0; /* xor self */
    edi = 0x5ABEA4;
    MEM32(0x5ABEA0) = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x5ABEA4) = 1;
    MEM8(0x5AFEA8) = LO8(edx);
    MEM8(0x5AFEA9) = LO8(edx);
    MEM32(0x5AFEA4) = 2;
    POP32(esp, edi);

loc_00199D9E: ;
    eax = 0x5ABEA0;
    esp += 4; return; /* ret */

}

/**
 * sub_00199DB0
 * Original: 0x00199DB0 - 0x00199DCF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_parser_text_destroy(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199DB0: ;
    xml1_parser_text_reset();
    eax = MEM32(0x5B76BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00199DCE; /* je: equal / zero */

loc_00199DB9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00199DC1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00199DC1: ;
    esp = esp + 8;
    MEM32(0x5B76BC) = 0;

loc_00199DCE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00199DD0
 * Original: 0x00199DD0 - 0x00199E09 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_parser_text_ensure_initialized(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199DD0: ;
    eax = MEM32(0x5B76BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199E08; /* jne: not equal / not zero */

loc_00199DD9: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x1E000);
    PUSH32(esp, 0x00199DE7u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00199DE7: ;
    PUSH32(esp, 0x199DB0);
    MEM32(0x5B76BC) = eax;
    MEM32(0x5B76B0) = eax;
    MEM32(0x5B76B4) = eax;
    PUSH32(esp, 0x00199E00u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_00199E00: ;
    eax = MEM32(0x5B76BC);
    esp = esp + 0x10;

loc_00199E08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00199E10
 * Original: 0x00199E10 - 0x00199E1D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199E10(void)
{

loc_00199E10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00199E20
 * Original: 0x00199E20 - 0x00199E39 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199E20(void)
{

loc_00199E20: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00199E40
 * Original: 0x00199E40 - 0x00199ED2 (146 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_parser_text_reset(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199E40: ;
    xml1_parser_text_reset();
    eax = MEM32(0x5B76C0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199E54; /* jne: not equal / not zero */

loc_00199E4C: ;
    MEM32(0x5B76C0) = edx;
    goto loc_00199E5A;

loc_00199E54: ;
    MEM32(0x5B76C0) = MEM32(0x5B76C0) + 1;
    _fa = (uint32_t)(MEM32(0x5B76C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00199E5A: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x400;
    edi = 0x5B76C4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x5B76BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(0x5B76C4) = 1;
    MEM8(0x5B86C8) = LO8(edx);
    MEM8(0x5B86C9) = LO8(edx);
    MEM32(0x5B86C4) = 2;
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00199EC2; /* jne: not equal / not zero */

loc_00199E93: ;
    PUSH32(esp, 0x2A);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x1E000);
    PUSH32(esp, 0x00199EA1u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00199EA1: ;
    PUSH32(esp, 0x199DB0);
    MEM32(0x5B76BC) = eax;
    MEM32(0x5B76B0) = eax;
    MEM32(0x5B76B4) = eax;
    PUSH32(esp, 0x00199EBAu); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_00199EBA: ;
    eax = MEM32(0x5B76BC);
    esp = esp + 0x10;

loc_00199EC2: ;
    MEM32(0x5B76B0) = eax;
    MEM32(0x5B76B4) = 0x5B76B8;
    esp += 4; return; /* ret */

}

/**
 * sub_00199EE0
 * Original: 0x00199EE0 - 0x00199F0B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_xml_attribute_text(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00199EE0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00199EF2; /* jne: not equal / not zero */

loc_00199EE6: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00199F0A; /* jne: not equal / not zero */

loc_00199EEC: ;
    eax = 0x5B76B8;
    esp += 4; return; /* ret */

loc_00199EF2: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00199EEC; /* je: equal / zero */

loc_00199EF9: ;
    eax = eax & 0xFFFFFF;
    eax = MEM32(eax * 4 + 0x5B76C4);
    eax = eax + 0x5B86C8;

loc_00199F0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00199F10
 * Original: 0x00199F10 - 0x00199FC3 (179 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00199F10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    edx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00199F33; /* jne: not equal / not zero */

loc_00199F22: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00199F2F; /* jne: not equal / not zero */

loc_00199F28: ;
    esi = 0x5B76B8;
    goto loc_00199F53;

loc_00199F2F: ;
    esi = eax;
    goto loc_00199F53;

loc_00199F33: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00199F41; /* jne: not equal / not zero */

loc_00199F3A: ;
    esi = 0x5B76B8;
    goto loc_00199F53;

loc_00199F41: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF;
    esi = MEM32(eax * 4 + 0x5B76C4);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x5B86C8)) >> 32) & 1);
    esi = esi + 0x5B86C8;

loc_00199F53: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00199F65; /* jne: not equal / not zero */

loc_00199F58: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00199F84; /* jne: not equal / not zero */

loc_00199F5E: ;
    eax = 0x5B76B8;
    goto loc_00199F84;

loc_00199F65: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00199F73; /* jne: not equal / not zero */

loc_00199F6C: ;
    eax = 0x5B76B8;
    goto loc_00199F84;

loc_00199F73: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFF;
    eax = MEM32(eax * 4 + 0x5B76C4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5B86C8)) >> 32) & 1);
    eax = eax + 0x5B86C8;

loc_00199F84: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00199FB4; /* jne: not equal / not zero */

loc_00199F8E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00199FA8; /* je: equal / zero */

loc_00199F92: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00199FB4; /* jne: not equal / not zero */

loc_00199F9E: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00199F84; /* jne: not equal / not zero */

loc_00199FA8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00199FB4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00199FD0
 * Original: 0x00199FD0 - 0x0019A05F (143 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00199FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00199FD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00199FFE; /* jle: less or equal (signed <=) */

loc_00199FE4: ;
    eax = 0x77;
    edx = ebp;
    goto loc_00199FF0;

    /* nop */

loc_00199FF0: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + eax + -119);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    ecx = ecx + edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00199FF0; /* jne: not equal / not zero */

loc_00199FFE: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    eax = eax ^ ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    eax = eax & 0x3FF;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0019A01Cu); RECOMP_ABI_CALL(0x000124F0u, sub_000124F0); /* call 0x000124F0 */

loc_0019A01C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_0019A051; /* jne: not equal / not zero */

loc_0019A024: ;
    eax = MEM32(ebx + 0x1004);
    edi = eax + ebx + 0x1008;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
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
    ecx = MEM32(ebx + 0x1004);
    MEM32(ebx + edx * 4 + 4) = ecx;
    MEM32(ebx + 0x1004) = MEM32(ebx + 0x1004) + ebp;

loc_0019A051: ;
    eax = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax << 0x18;
    POP32(esp, ebp);
    eax = eax | edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019A060
 * Original: 0x0019A060 - 0x0019A18E (302 bytes, 127 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_parser_text_literal_store(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A060: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    MEM32(ebx + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0019A159; /* jne: not equal / not zero */

loc_0019A074: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A085; /* jne: not equal / not zero */

loc_0019A07D: ;
    MEM32(ebx) = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019A085: ;
    esi = ebp;
    eax = 0x5B76B8;
    /* nop */

loc_0019A090: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019A0B4; /* jne: not equal / not zero */

loc_0019A098: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0019A0B0; /* je: equal / zero */

loc_0019A09C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019A0B4; /* jne: not equal / not zero */

loc_0019A0A6: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A090; /* jne: not equal / not zero */

loc_0019A0B0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0019A0B9;

loc_0019A0B4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0019A0B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A0C9; /* jne: not equal / not zero */

loc_0019A0BD: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    MEM32(ebx) = 0x5B76B8;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019A0C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019A0CFu); RECOMP_ABI_CALL(0x00199DD0u, xml1_guest_parser_text_ensure_initialized); /* call 0x00199DD0 */

loc_0019A0CF: ;
    edi = MEM32(0x5B76B4);
    esi = ebp;
    eax = edi;
    /* nop */

loc_0019A0E0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019A104; /* jne: not equal / not zero */

loc_0019A0E8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0019A100; /* je: equal / zero */

loc_0019A0EC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0019A104; /* jne: not equal / not zero */

loc_0019A0F6: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A0E0; /* jne: not equal / not zero */

loc_0019A100: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0019A109;

loc_0019A104: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_0019A109: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A116; /* jne: not equal / not zero */

loc_0019A10D: ;
    MEM32(ebx) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019A116: ;
    { uint32_t literal=xml1_parser_text_find(ebp);
      if(literal) { edi=literal; goto loc_0019A10D; } }
    xml1_parser_text_reserve(ebp);
    esi = MEM32(0x5B76B0);
    edx = esi;
    MEM32(0x5B76B4) = esi;
    MEM32(ebx) = esi;
    eax = ebp;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    /* nop */

loc_0019A130: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A130; /* jne: not equal / not zero */

loc_0019A13A: ;
    eax = ebp;
    edx = eax + 1;
    /* nop */

loc_0019A140: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A140; /* jne: not equal / not zero */

loc_0019A147: ;
    POP32(esp, edi);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    POP32(esp, ebp);
    eax = esi + eax + 1;
    POP32(esp, esi);
    MEM32(0x5B76B0) = eax;
    POP32(esp, ebx);
    xml1_parser_text_publish(MEM32(0x5B76B4));
    esp += 12; return; /* ret 8 */

loc_0019A159: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A169; /* jne: not equal / not zero */

loc_0019A161: ;
    POP32(esp, esi);
    MEM32(ebx + 4) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0019A169: ;
    eax = edx;
    esi = eax + 1;
    edi = edi;

loc_0019A170: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A170; /* jne: not equal / not zero */

loc_0019A177: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = 0x5B76C0;
    PUSH32(esp, 0x0019A186u); RECOMP_ABI_CALL(0x00199FD0u, sub_00199FD0); /* call 0x00199FD0 */

loc_0019A186: ;
    POP32(esp, esi);
    MEM32(ebx + 4) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019A190
 * Original: 0x0019A190 - 0x0019A1A5 (21 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A190(void)
{

loc_0019A190: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0019A19Fu); RECOMP_ABI_CALL(0x0019A060u, xml1_guest_parser_text_literal_store); /* call 0x0019A060 */

loc_0019A19F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019A1B0
 * Original: 0x0019A1B0 - 0x0019A1CA (26 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A1B0(void)
{

loc_0019A1B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019A1C4u); RECOMP_ABI_CALL(0x0019A060u, xml1_guest_parser_text_literal_store); /* call 0x0019A060 */

loc_0019A1C4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019A1D0
 * Original: 0x0019A1D0 - 0x0019A1D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A1D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A1D0: ;
    g_seh_ebp = ebp; sub_0027D1C0(); return; /* tail jmp 0x0027D1C0 */

}

/**
 * sub_0019A1E0
 * Original: 0x0019A1E0 - 0x0019A1F6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A1E0(void)
{

loc_0019A1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019A1EDu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0019A1ED: ;
    MEM32(esi + 0x28) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019A200
 * Original: 0x0019A200 - 0x0019A38B (395 bytes, 125 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A200: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x354D00);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0019A23C; /* je: equal / zero */

loc_0019A227: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019A23C; /* jne: not equal / not zero */

loc_0019A237: ;
    PUSH32(esp, 0x0019A23Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019A23C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0019A242u); RECOMP_ABI_CALL(0x00296A00u, sub_00296A00); /* call 0x00296A00 */

loc_0019A242: ;
    MEM32(ebp + 0x20) = eax;
    ecx = MEM32(ebp + 0x24);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019A264; /* je: equal / zero */

loc_0019A24F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019A264; /* jne: not equal / not zero */

loc_0019A25F: ;
    PUSH32(esp, 0x0019A264u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019A264: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0019A26Au); RECOMP_ABI_CALL(0x00296930u, sub_00296930); /* call 0x00296930 */

loc_0019A26A: ;
    esp = esp + 4;
    MEM32(ebp + 0x24) = eax;
    MEM32(esp + 0x10) = 0x6E;

loc_0019A278: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0019A27Eu); RECOMP_ABI_CALL(0x002A00A0u, sub_002A00A0); /* call 0x002A00A0 */

loc_0019A27E: ;
    esi = eax;
    esp = esp + 4;
    MEM32(esp + 0x14) = esi;
    MEM32(esi + 0xC) = ebx;
    MEM8(esi + 0x90) = 1;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BCA00);
    ecx = esi;
    MEM32(esp + 0x34) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0019A2A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A2A1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BCA00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019A2ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A2AD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BCA00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0019A2BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A2BC: ;
    eax = esp + 0x1C;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0019A2E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A2E3: ;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019A2ECu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0019A2EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0019A2F2u); RECOMP_ABI_CALL(0x002A0630u, sub_002A0630); /* call 0x002A0630 */

loc_0019A2F2: ;
    edi = eax;
    esp = esp + 4;
    MEM32(esp + 0x18) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x30) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0019A31F; /* je: equal / zero */

loc_0019A30A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019A31F; /* jne: not equal / not zero */

loc_0019A31A: ;
    PUSH32(esp, 0x0019A31Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019A31F: ;
    MEM32(edi + 0x10) = esi;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019A32Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A32B: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019A334u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0019A334: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM8(esp + 0x30) = LO8(ebx);
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019A34F; /* jne: not equal / not zero */

loc_0019A348: ;
    ecx = edi;
    PUSH32(esp, 0x0019A34Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019A34F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019A36E; /* jne: not equal / not zero */

loc_0019A367: ;
    ecx = esi;
    PUSH32(esp, 0x0019A36Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019A36E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0019A278; /* jne: not equal / not zero */

loc_0019A378: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A390
 * Original: 0x0019A390 - 0x0019A3BD (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A390: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A39F; /* jl: less (signed <) */

loc_0019A39B: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019A39F: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(edx + eax * 4);
    eax = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019A3B5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0019A3B5: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019A3C0
 * Original: 0x0019A3C0 - 0x0019A4B3 (243 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A3C0(void)
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

loc_0019A3C0: ;
    eax = MEM32(0x5BA6C8);
    esp = esp - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A3D2; /* jne: not equal / not zero */

loc_0019A3CC: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0019A3D2: ;
    eax = MEM32(0x5BA75C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0019A3E4u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019A3E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A3EF; /* jne: not equal / not zero */

loc_0019A3E8: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0019A3EF: ;
    ecx = MEM32(edi + 0x2C);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A3E8; /* je: equal / zero */

loc_0019A3F9: ;
    edx = MEM32(0x5BDAF4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0019A40Cu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019A40C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A418; /* jne: not equal / not zero */

loc_0019A410: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0019A418: ;
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019A422u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0019A422: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A410; /* je: equal / zero */

loc_0019A429: ;
    ecx = MEM32(0x5BA6C8);
    PUSH32(esp, ebx);
    MEM32(ecx + 0x88) = eax;
    edx = MEM32(ebp);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0019A43Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A43F: ;
    ecx = MEM32(edi + 0x2C);
    ebx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BA6C8);
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM64(esp + 0x14)); /* fild */
    ebp = ebp + 0x64;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0019A48D; /* jle: less or equal (signed <=) */

loc_0019A46D: ;
    /* nop */

loc_0019A470: ;
    edx = MEM32(edi + 0x2C);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0019A488u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A488: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A470; /* jl: less (signed <) */

loc_0019A48D: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(0x5BA6C8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(ecx + 0x88) = 0;
    PUSH32(esp, 0x0019A4A8u); RECOMP_ABI_CALL(0x0028B440u, sub_0028B440); /* call 0x0028B440 */

loc_0019A4A8: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0019A4C0
 * Original: 0x0019A4C0 - 0x0019A4FA (58 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A4C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A4C0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A4F6; /* je: equal / zero */

loc_0019A4CA: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0019A4F5; /* js: sign (negative) */

loc_0019A4D1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    goto loc_0019A4E0;

    /* nop */

loc_0019A4E0: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0019A4F0u); RECOMP_ABI_CALL(0x001A8460u, sub_001A8460); /* call 0x001A8460 */

loc_0019A4F0: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0019A4E0; /* jns: not sign (positive) */

loc_0019A4F3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0019A4F5: ;
    POP32(esp, esi);

loc_0019A4F6: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019A500
 * Original: 0x0019A500 - 0x0019A527 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A500(void)
{

loc_0019A500: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0019A50Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A50D: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0019A51Au); RECOMP_ABI_CALL(0x0019A4C0u, sub_0019A4C0); /* call 0x0019A4C0 */

loc_0019A51A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019A521u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0019A521: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019A530
 * Original: 0x0019A530 - 0x0019A543 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A530: ;
    ecx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0019A542; /* jg: greater (signed >) */

loc_0019A539: ;
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0019A542u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0019A542: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A550
 * Original: 0x0019A550 - 0x0019A592 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A550: ;
    eax = MEM32(0x5BA6CC);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0019A581; /* js: sign (negative) */

loc_0019A55F: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_0019A564: ;
    edx = MEM32(0x5BA6CC);
    eax = MEM32(edx + 0x28);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + esi * 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0019A57Du); RECOMP_ABI_CALL(0x0027C840u, sub_0027C840); /* call 0x0027C840 */

loc_0019A57D: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0019A564; /* jns: not sign (positive) */

loc_0019A580: ;
    POP32(esp, edi);

loc_0019A581: ;
    eax = MEM32(0x5BA6CC);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019A590u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0019A590: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019A5A0
 * Original: 0x0019A5A0 - 0x0019A5CC (44 bytes, 15 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0019A5A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0019A5A0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0xC); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0019A5D0
 * Original: 0x0019A5D0 - 0x0019A615 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A5D0: ;
    eax = MEM32(ecx + 0x34);
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019A5FC; /* jl: less (signed <) */

loc_0019A5F2: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + ecx * 4);
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

loc_0019A5FC: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A60E; /* je: equal / zero */

loc_0019A603: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4 + -4);
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

loc_0019A60E: ;
    eax = MEM32(eax + 0x14);
    eax = eax + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0019A620
 * Original: 0x0019A620 - 0x0019A711 (241 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A620(void)
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

loc_0019A620: ;
    esp = esp - 0x14;
    fp_push(MEMF(ebx)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() - MEMF(edi + 0x74); /* fsub dword ptr [edi + 0x74] */
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x78); /* fsub dword ptr [edi + 0x78] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x7C); /* fsub dword ptr [edi + 0x7c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0019A64Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A64F: ;
    fp_push(MEMF(edi + 0x7C)); /* fld float */
    edx = MEM32(0x5BE400);
    fp_top() = fp_top() - MEMF(ebx + 8); /* fsub dword ptr [ebx + 8] */
    eax = MEM32(edx + 8);
    fp_push(MEMF(edi + 0x78)); /* fld float */
    eax = eax + edi;
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    fp_push(MEMF(edi + 0x74)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A6A8; /* je: equal / zero */

loc_0019A6A0: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */

loc_0019A6A8: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BCA00);
    ecx = esi;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0019A6C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A6C2: ;
    ecx = MEM32(0x5BE36C);
    eax = MEM32(ecx + 8);
    fp_push(MEMF(eax + edi + 0xC)); /* fld float */
    edx = MEM32(esi);
    fp_push(MEMF(esp)); /* fld float */
    eax = eax + edi;
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    ecx = esi;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019A6FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A6FE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BCA00);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0019A70Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019A70D: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0019A720
 * Original: 0x0019A720 - 0x0019A7A5 (133 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A720: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0019A79D; /* jle: less or equal (signed <=) */

loc_0019A73E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);

loc_0019A744: ;
    edx = MEM32(ebp + 0x20);
    ecx = MEM32(edx + 0x20);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019A792; /* jne: not equal / not zero */

loc_0019A756: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, 0x0019A75Eu); RECOMP_ABI_CALL(0x0019A390u, sub_0019A390); /* call 0x0019A390 */

loc_0019A75E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019A79B; /* je: equal / zero */

loc_0019A766: ;
    edx = MEM32(ebp + 0x20);
    ecx = MEM32(edx + 0x20);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + esi * 4);
    esi = MEM32(eax + 0x10);
    edi = MEM32(ecx + 0x10);
    PUSH32(esp, 0x0019A77Du); RECOMP_ABI_CALL(0x0019A620u, sub_0019A620); /* call 0x0019A620 */

loc_0019A77D: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0019A78Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0019A78A: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);

loc_0019A792: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0019A744; /* jl: less (signed <) */

loc_0019A79B: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0019A79D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019A7B0
 * Original: 0x0019A7B0 - 0x0019A897 (231 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A7B0(void)
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

loc_0019A7B0: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0019A7E2; /* jl: less (signed <) */

loc_0019A7DA: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    goto loc_0019A7F5;

loc_0019A7E2: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A7F2; /* je: equal / zero */

loc_0019A7E9: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_0019A7F5;

loc_0019A7F2: ;
    eax = MEM32(eax + 0x14);

loc_0019A7F5: ;
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019A803u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0019A803: ;
    esp = esp + 8;
    esi = esi + 0xA4;
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ecx = edx;
    PUSH32(esp, 0x0019A819u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0019A819: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    ecx = MEM32(esp + 0x44);
    fp_top() = fp_top() + MEMF(0x3CAA54); /* fadd dword ptr [0x3caa54] */
    edx = MEM32(0x5BA6CC);
    eax = MEM32(esp + 0x40);
    MEM32(esp + 8) = ecx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edx + 0x28);
    PUSH32(esp, 0);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0019A847u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0019A847: ;
    ecx = MEM32(0x5BA6CC);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019A857u); RECOMP_ABI_CALL(0x0019A720u, sub_0019A720); /* call 0x0019A720 */

loc_0019A857: ;
    ecx = MEM32(0x5BA6CC);
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0019A892; /* jle: less or equal (signed <=) */

loc_0019A869: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    edi = edi;

loc_0019A870: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0019A880u); RECOMP_ABI_CALL(0x00278050u, sub_00278050); /* call 0x00278050 */

loc_0019A880: ;
    ecx = MEM32(0x5BA6CC);
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0019A870; /* jl: less (signed <) */

loc_0019A891: ;
    POP32(esp, edi);

loc_0019A892: ;
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0019A8A0
 * Original: 0x0019A8A0 - 0x0019A8CC (44 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A8A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A8C2; /* jne: not equal / not zero */

loc_0019A8BD: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_0019A8C2: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019A8D0
 * Original: 0x0019A8D0 - 0x0019A93F (111 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A8D0: ;
    eax = MEM32(0x5BE5D8);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x34);
    edx = MEM32(esi + 0x44);
    eax = MEM32(edx + ecx * 4);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A8FE; /* je: equal / zero */

loc_0019A8F7: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4 + -4);

loc_0019A8FE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A91A; /* je: equal / zero */

loc_0019A902: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019A91A; /* jne: not equal / not zero */

loc_0019A909: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019A914u); RECOMP_ABI_CALL(0x0028B440u, sub_0028B440); /* call 0x0028B440 */

loc_0019A914: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0019A91A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019A922u); RECOMP_ABI_CALL(0x0019A7B0u, sub_0019A7B0); /* call 0x0019A7B0 */

loc_0019A922: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019A92Du); RECOMP_ABI_CALL(0x0028B440u, sub_0028B440); /* call 0x0028B440 */

loc_0019A92D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0019A936u); RECOMP_ABI_CALL(0x0019A550u, sub_0019A550); /* call 0x0019A550 */

loc_0019A936: ;
    esp = esp + 0x18;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019A940
 * Original: 0x0019A940 - 0x0019A998 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDC9C);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(0x5BDA90);
    eax = MEM32(edi + 8);
    ebx = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x19A8D0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(0x5BA6CC) = ebp;
    PUSH32(esp, 0x0019A96Fu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0019A96F: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0019A97Au); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0019A97A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebp = eax;
    MEM32(0x5BA6CC) = 0;
    PUSH32(esp, 0x0019A98Eu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0019A98E: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019A9A0
 * Original: 0x0019A9A0 - 0x0019A9C6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0019A9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019A9A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019A9ADu); RECOMP_ABI_CALL(0x0013F8A0u, sub_0013F8A0); /* call 0x0013F8A0 */

loc_0019A9AD: ;
    ecx = eax;
    PUSH32(esp, 0x0019A9B4u); RECOMP_ABI_CALL(0x0013EC80u, sub_0013EC80); /* call 0x0013EC80 */

loc_0019A9B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019A9C3; /* je: equal / zero */

loc_0019A9B8: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019A9C2u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_0019A9C2: ;
    esp += 4; return; /* ret */

loc_0019A9C3: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0019A9D0
 * Original: 0x0019A9D0 - 0x0019A9D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A9D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A9D0: ;
    g_seh_ebp = ebp; sub_00296750(); return; /* tail jmp 0x00296750 */

}

/**
 * sub_0019A9E0
 * Original: 0x0019A9E0 - 0x0019A9E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A9E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A9E0: ;
    g_seh_ebp = ebp; sub_00297460(); return; /* tail jmp 0x00297460 */

}

/**
 * sub_0019A9F0
 * Original: 0x0019A9F0 - 0x0019A9F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019A9F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019A9F0: ;
    g_seh_ebp = ebp; sub_002968F0(); return; /* tail jmp 0x002968F0 */

}

/**
 * sub_0019AA00
 * Original: 0x0019AA00 - 0x0019AA83 (131 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019AA00: ;
    ecx = MEM32(0x5BA6EC);
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    esp = esp - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0x14;
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0019AA24; /* jl: less (signed <) */

loc_0019AA1A: ;
    PUSH32(esp, 0x297440);
    PUSH32(esp, 0x0019AA24u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0019AA24: ;
    eax = MEM32(esi);
    edx = MEM32(edi + 0x10);
    ecx = eax + 1;
    MEM32(esi) = ecx;
    esi = MEM32(edx + eax * 4);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0019AA44u); RECOMP_ABI_CALL(0x0023FFC0u, sub_0023FFC0); /* call 0x0023FFC0 */

loc_0019AA44: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019AA60; /* je: equal / zero */

loc_0019AA4C: ;
    edx = MEM32(ebx);
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;

loc_0019AA60: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019AA6F; /* je: equal / zero */

loc_0019AA68: ;
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 0x14) = edx;

loc_0019AA6F: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0019AA7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AA7B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019AA90
 * Original: 0x0019AA90 - 0x0019ABA9 (281 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019AA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019AA90: ;
    ecx = MEM32(0x5BA700);
    eax = MEM32(ecx + 0x14);
    edx = MEM32(ecx + 8);
    esp = esp - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = ecx + 0x14;
    ebx = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0019AAB9; /* jl: less (signed <) */

loc_0019AAAF: ;
    PUSH32(esp, 0x296730);
    PUSH32(esp, 0x0019AAB9u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0019AAB9: ;
    eax = MEM32(esi);
    edx = MEM32(ebx + 0x10);
    ecx = eax + 1;
    MEM32(esi) = ecx;
    esi = MEM32(edx + eax * 4);
    eax = MEM32(0x5BE414);
    eax = MEM32(eax + 8);
    edx = MEM32(eax + edi);
    ecx = MEM32(0x5BE264);
    ecx = MEM32(ecx + 8);
    eax = eax + edi;
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 0xC);
    ecx = ecx + edi;
    MEM32(esp + 0x18) = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = eax;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = edx;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x28) = eax;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019AB3B; /* je: equal / zero */

loc_0019AB1A: ;
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp + 8);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;

loc_0019AB3B: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019AB50; /* je: equal / zero */

loc_0019AB43: ;
    ecx = MEM32(ebp + 0xC);
    edx = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x28) = edx;

loc_0019AB50: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0019AB5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AB5F: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0019AB6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AB6B: ;
    eax = MEM32(0x5BE228);
    ecx = MEM32(eax + 8);
    edx = MEM32(esi);
    ecx = ecx + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0019AB80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AB80: ;
    eax = MEM32(0x5BE4BC);
    ecx = MEM32(eax + 8);
    edx = MEM32(esi);
    ecx = ecx + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0019AB95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AB95: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019ABA0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019ABA0: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0019ABB0
 * Original: 0x0019ABB0 - 0x0019B247 (1687 bytes, 568 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019ABB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019ABB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354D48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019ABCFu); RECOMP_ABI_CALL(0x002A0890u, sub_002A0890); /* call 0x002A0890 */

loc_0019ABCF: ;
    ebp = eax;
    eax = MEM32(0x5BA6F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019ABF4; /* je: equal / zero */

loc_0019ABDC: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019ABF4; /* jne: not equal / not zero */

loc_0019ABEF: ;
    PUSH32(esp, 0x0019ABF4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019ABF4: ;
    edi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019ABFEu); RECOMP_ABI_CALL(0x00297730u, sub_00297730); /* call 0x00297730 */

loc_0019ABFE: ;
    esp = esp + 4;
    MEM32(0x5BA6F8) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019AC0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AC0F: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BA6F8);
    eax = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(eax) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019AC27; /* je: equal / zero */

loc_0019AC24: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AC27: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0019AC33u); RECOMP_ABI_CALL(0x002A0120u, sub_002A0120); /* call 0x002A0120 */

loc_0019AC33: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019AC52; /* je: equal / zero */

loc_0019AC41: ;
    eax = MEM32(0x5BE668);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019AC4Eu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019AC4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019AC56; /* jne: not equal / not zero */

loc_0019AC52: ;
    esi = 0; /* xor self */
    goto loc_0019AC59;

loc_0019AC56: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AC59: ;
    eax = MEM32(0x5BA6F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AC7C; /* je: equal / zero */

loc_0019AC64: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AC7C; /* jne: not equal / not zero */

loc_0019AC77: ;
    PUSH32(esp, 0x0019AC7Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AC7C: ;
    eax = MEM32(esp + 0x24);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BA6F8) = esi;
    MEM32(esp + 0x1C) = ebx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019ACAB; /* je: equal / zero */

loc_0019AC93: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019ACAB; /* jne: not equal / not zero */

loc_0019ACA6: ;
    PUSH32(esp, 0x0019ACABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019ACAB: ;
    eax = MEM32(0x5BA6F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019ACCE; /* je: equal / zero */

loc_0019ACB6: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019ACCE; /* jne: not equal / not zero */

loc_0019ACC9: ;
    PUSH32(esp, 0x0019ACCEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019ACCE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019ACD4u); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_0019ACD4: ;
    esp = esp + 4;
    MEM32(0x5BA6F0) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019ACE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019ACE5: ;
    ecx = MEM32(0x5BA6F0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0019ACF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019ACF2: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BA6F0);
    eax = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(eax) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019AD0A; /* je: equal / zero */

loc_0019AD07: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AD0A: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0019AD16u); RECOMP_ABI_CALL(0x002A0120u, sub_002A0120); /* call 0x002A0120 */

loc_0019AD16: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0019AD35; /* je: equal / zero */

loc_0019AD24: ;
    eax = MEM32(0x5BE680);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019AD31u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019AD31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019AD39; /* jne: not equal / not zero */

loc_0019AD35: ;
    esi = 0; /* xor self */
    goto loc_0019AD3C;

loc_0019AD39: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AD3C: ;
    eax = MEM32(0x5BA6F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AD5D; /* je: equal / zero */

loc_0019AD47: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AD5D; /* jne: not equal / not zero */

loc_0019AD58: ;
    PUSH32(esp, 0x0019AD5Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AD5D: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BA6F0) = esi;
    MEM32(esp + 0x1C) = ebx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AD89; /* je: equal / zero */

loc_0019AD71: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AD89; /* jne: not equal / not zero */

loc_0019AD84: ;
    PUSH32(esp, 0x0019AD89u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AD89: ;
    eax = MEM32(0x5BA6F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019ADAC; /* je: equal / zero */

loc_0019AD94: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019ADAC; /* jne: not equal / not zero */

loc_0019ADA7: ;
    PUSH32(esp, 0x0019ADACu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019ADAC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019ADB2u); RECOMP_ABI_CALL(0x00297AC0u, sub_00297AC0); /* call 0x00297AC0 */

loc_0019ADB2: ;
    esp = esp + 4;
    MEM32(0x5BA6F4) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019ADC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019ADC3: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BA6F4);
    eax = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(eax) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019ADDB; /* je: equal / zero */

loc_0019ADD8: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019ADDB: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0019ADE7u); RECOMP_ABI_CALL(0x002A0120u, sub_002A0120); /* call 0x002A0120 */

loc_0019ADE7: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0019AE06; /* je: equal / zero */

loc_0019ADF5: ;
    eax = MEM32(0x5BE6A4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019AE02u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019AE02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019AE0A; /* jne: not equal / not zero */

loc_0019AE06: ;
    esi = 0; /* xor self */
    goto loc_0019AE0D;

loc_0019AE0A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AE0D: ;
    eax = MEM32(0x5BA6F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AE2E; /* je: equal / zero */

loc_0019AE18: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AE2E; /* jne: not equal / not zero */

loc_0019AE29: ;
    PUSH32(esp, 0x0019AE2Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AE2E: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BA6F4) = esi;
    MEM32(esp + 0x1C) = ebx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AE5A; /* je: equal / zero */

loc_0019AE42: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AE5A; /* jne: not equal / not zero */

loc_0019AE55: ;
    PUSH32(esp, 0x0019AE5Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AE5A: ;
    eax = MEM32(0x5BA6E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AE7D; /* je: equal / zero */

loc_0019AE65: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AE7D; /* jne: not equal / not zero */

loc_0019AE78: ;
    PUSH32(esp, 0x0019AE7Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AE7D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019AE83u); RECOMP_ABI_CALL(0x00297330u, sub_00297330); /* call 0x00297330 */

loc_0019AE83: ;
    esp = esp + 4;
    MEM32(0x5BA6E8) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0019AE94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AE94: ;
    ecx = MEM32(0x5BA6E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0019AEA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AEA1: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BA6E8);
    eax = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(eax) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019AEB9; /* je: equal / zero */

loc_0019AEB6: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AEB9: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0019AEC5u); RECOMP_ABI_CALL(0x002A0120u, sub_002A0120); /* call 0x002A0120 */

loc_0019AEC5: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_0019AEE4; /* je: equal / zero */

loc_0019AED3: ;
    eax = MEM32(0x5BE640);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019AEE0u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019AEE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019AEE8; /* jne: not equal / not zero */

loc_0019AEE4: ;
    esi = 0; /* xor self */
    goto loc_0019AEEB;

loc_0019AEE8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AEEB: ;
    eax = MEM32(0x5BA6E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AF0C; /* je: equal / zero */

loc_0019AEF6: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AF0C; /* jne: not equal / not zero */

loc_0019AF07: ;
    PUSH32(esp, 0x0019AF0Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AF0C: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BA6E8) = esi;
    MEM32(esp + 0x1C) = ebx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AF38; /* je: equal / zero */

loc_0019AF20: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AF38; /* jne: not equal / not zero */

loc_0019AF33: ;
    PUSH32(esp, 0x0019AF38u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AF38: ;
    eax = MEM32(0x5BA6FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AF5B; /* je: equal / zero */

loc_0019AF43: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AF5B; /* jne: not equal / not zero */

loc_0019AF56: ;
    PUSH32(esp, 0x0019AF5Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AF5B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019AF61u); RECOMP_ABI_CALL(0x002968D0u, sub_002968D0); /* call 0x002968D0 */

loc_0019AF61: ;
    esp = esp + 4;
    MEM32(0x5BA6FC) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019AF72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019AF72: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BA6FC);
    eax = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(eax) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019AF8A; /* je: equal / zero */

loc_0019AF87: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AF8A: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0019AF96u); RECOMP_ABI_CALL(0x002A0120u, sub_002A0120); /* call 0x002A0120 */

loc_0019AF96: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_0019AFB5; /* je: equal / zero */

loc_0019AFA4: ;
    eax = MEM32(0x5BE5D8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019AFB1u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019AFB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019AFB9; /* jne: not equal / not zero */

loc_0019AFB5: ;
    esi = 0; /* xor self */
    goto loc_0019AFBC;

loc_0019AFB9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019AFBC: ;
    eax = MEM32(0x5BA6FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019AFDD; /* je: equal / zero */

loc_0019AFC7: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019AFDD; /* jne: not equal / not zero */

loc_0019AFD8: ;
    PUSH32(esp, 0x0019AFDDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019AFDD: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BA6FC) = esi;
    MEM32(esp + 0x1C) = ebx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B009; /* je: equal / zero */

loc_0019AFF1: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B009; /* jne: not equal / not zero */

loc_0019B004: ;
    PUSH32(esp, 0x0019B009u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B009: ;
    eax = MEM32(0x5BA6E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B02C; /* je: equal / zero */

loc_0019B014: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B02C; /* jne: not equal / not zero */

loc_0019B027: ;
    PUSH32(esp, 0x0019B02Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B02C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019B032u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0019B032: ;
    esp = esp + 4;
    MEM32(0x5BA6E4) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019B043u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019B043: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BA6E4);
    eax = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(eax) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B05B; /* je: equal / zero */

loc_0019B058: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019B05B: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0019B067u); RECOMP_ABI_CALL(0x002A0120u, sub_002A0120); /* call 0x002A0120 */

loc_0019B067: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 5;
    if (TEST_Z(_fa, _fb)) goto loc_0019B086; /* je: equal / zero */

loc_0019B075: ;
    eax = MEM32(0x5BE500);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B082u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019B082: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B08A; /* jne: not equal / not zero */

loc_0019B086: ;
    esi = 0; /* xor self */
    goto loc_0019B08D;

loc_0019B08A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019B08D: ;
    eax = MEM32(0x5BA6E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B0AE; /* je: equal / zero */

loc_0019B098: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B0AE; /* jne: not equal / not zero */

loc_0019B0A9: ;
    PUSH32(esp, 0x0019B0AEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B0AE: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BA6E4) = esi;
    MEM32(esp + 0x1C) = ebx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B0DA; /* je: equal / zero */

loc_0019B0C2: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B0DA; /* jne: not equal / not zero */

loc_0019B0D5: ;
    PUSH32(esp, 0x0019B0DAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B0DA: ;
    eax = MEM32(0x5BA704);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B0FD; /* je: equal / zero */

loc_0019B0E5: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B0FD; /* jne: not equal / not zero */

loc_0019B0F8: ;
    PUSH32(esp, 0x0019B0FDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B0FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019B103u); RECOMP_ABI_CALL(0x002972F0u, sub_002972F0); /* call 0x002972F0 */

loc_0019B103: ;
    esp = esp + 4;
    MEM32(0x5BA704) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0019B114u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019B114: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BA704);
    eax = esp;
    MEM32(eax) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x28) = esp;
    if (TEST_Z(_fa, _fb)) goto loc_0019B12C; /* je: equal / zero */

loc_0019B129: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019B12C: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0019B138u); RECOMP_ABI_CALL(0x002A0120u, sub_002A0120); /* call 0x002A0120 */

loc_0019B138: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x1C) = 6;
    if (TEST_Z(_fa, _fb)) goto loc_0019B157; /* je: equal / zero */

loc_0019B146: ;
    eax = MEM32(0x5BE634);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B153u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0019B153: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B15B; /* jne: not equal / not zero */

loc_0019B157: ;
    esi = 0; /* xor self */
    goto loc_0019B15E;

loc_0019B15B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019B15E: ;
    eax = MEM32(0x5BA704);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B181; /* je: equal / zero */

loc_0019B169: ;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B181; /* jne: not equal / not zero */

loc_0019B17C: ;
    PUSH32(esp, 0x0019B181u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B181: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BA704) = esi;
    MEM32(esp + 0x1C) = ebx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B1AD; /* je: equal / zero */

loc_0019B195: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B1AD; /* jne: not equal / not zero */

loc_0019B1A8: ;
    PUSH32(esp, 0x0019B1ADu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B1AD: ;
    eax = MEM32(0x5BA6EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B1D0; /* je: equal / zero */

loc_0019B1B8: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B1D0; /* jne: not equal / not zero */

loc_0019B1CB: ;
    PUSH32(esp, 0x0019B1D0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B1D0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019B1D6u); RECOMP_ABI_CALL(0x0019BBD0u, sub_0019BBD0); /* call 0x0019BBD0 */

loc_0019B1D6: ;
    MEM32(0x5BA6EC) = eax;
    eax = MEM32(0x5BA700);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B201; /* je: equal / zero */

loc_0019B1E9: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B201; /* jne: not equal / not zero */

loc_0019B1FC: ;
    PUSH32(esp, 0x0019B201u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B201: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019B207u); RECOMP_ABI_CALL(0x0019BBF0u, sub_0019BBF0); /* call 0x0019BBF0 */

loc_0019B207: ;
    esp = esp + 4;
    MEM32(0x5BA700) = eax;
    PUSH32(esp, 0x0019B214u); RECOMP_ABI_CALL(0x00297460u, sub_00297460); /* call 0x00297460 */

loc_0019B214: ;
    MEM32(0x5BA6DC) = eax;
    PUSH32(esp, 0x0019B21Eu); RECOMP_ABI_CALL(0x00296750u, sub_00296750); /* call 0x00296750 */

loc_0019B21E: ;
    MEM32(0x5BA6D8) = eax;
    PUSH32(esp, 0x0019B228u); RECOMP_ABI_CALL(0x002968F0u, sub_002968F0); /* call 0x002968F0 */

loc_0019B228: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x5BA6D0) = eax;
    MEM8(0x5BA6D4) = 1;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B250
 * Original: 0x0019B250 - 0x0019B3BA (362 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B250: ;
    eax = MEM32(0x5BA6F4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B274; /* je: equal / zero */

loc_0019B25E: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B274; /* jne: not equal / not zero */

loc_0019B26F: ;
    PUSH32(esp, 0x0019B274u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B274: ;
    eax = MEM32(0x5BA6F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5BA6F4) = ebx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B29B; /* je: equal / zero */

loc_0019B285: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B29B; /* jne: not equal / not zero */

loc_0019B296: ;
    PUSH32(esp, 0x0019B29Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B29B: ;
    eax = MEM32(0x5BA6F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5BA6F0) = ebx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B2C2; /* je: equal / zero */

loc_0019B2AC: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B2C2; /* jne: not equal / not zero */

loc_0019B2BD: ;
    PUSH32(esp, 0x0019B2C2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B2C2: ;
    eax = MEM32(0x5BA6E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5BA6F8) = ebx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B2E9; /* je: equal / zero */

loc_0019B2D3: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B2E9; /* jne: not equal / not zero */

loc_0019B2E4: ;
    PUSH32(esp, 0x0019B2E9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B2E9: ;
    eax = MEM32(0x5BA6FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5BA6E8) = ebx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B310; /* je: equal / zero */

loc_0019B2FA: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B310; /* jne: not equal / not zero */

loc_0019B30B: ;
    PUSH32(esp, 0x0019B310u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B310: ;
    eax = MEM32(0x5BA6E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5BA6FC) = ebx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B337; /* je: equal / zero */

loc_0019B321: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B337; /* jne: not equal / not zero */

loc_0019B332: ;
    PUSH32(esp, 0x0019B337u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B337: ;
    eax = MEM32(0x5BA704);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5BA6E4) = ebx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B35E; /* je: equal / zero */

loc_0019B348: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B35E; /* jne: not equal / not zero */

loc_0019B359: ;
    PUSH32(esp, 0x0019B35Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B35E: ;
    eax = MEM32(0x5BA6EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5BA704) = ebx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B385; /* je: equal / zero */

loc_0019B36F: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B385; /* jne: not equal / not zero */

loc_0019B380: ;
    PUSH32(esp, 0x0019B385u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B385: ;
    eax = MEM32(0x5BA700);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x5BA6EC) = ebx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B3AC; /* je: equal / zero */

loc_0019B396: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B3AC; /* jne: not equal / not zero */

loc_0019B3A7: ;
    PUSH32(esp, 0x0019B3ACu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B3AC: ;
    MEM32(0x5BA700) = ebx;
    MEM8(0x5BA6D4) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B3C0
 * Original: 0x0019B3C0 - 0x0019B6D1 (785 bytes, 263 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B3C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B3C0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BA6E0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    SET_LO8(eax, MEM8(edx + 0x20));
    ebp = 0; /* xor self */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0019B3FD; /* je: equal / zero */

loc_0019B3E7: ;
    ecx = MEM32(0x5BA6FC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019B3F5u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0019B3F5: ;
    edx = MEM32(0x5BA6E0);
    SET_LO8(ebx, 1);

loc_0019B3FD: ;
    eax = MEM32(edx + 0x20);
    eax = eax >> 3;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B41B; /* je: equal / zero */

loc_0019B407: ;
    ecx = MEM32(0x5BA6E4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019B415u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0019B415: ;
    edx = MEM32(0x5BA6E0);

loc_0019B41B: ;
    eax = MEM32(edx + 0x20);
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B43F; /* jne: not equal / not zero */

loc_0019B427: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B43F; /* jne: not equal / not zero */

loc_0019B431: ;
    ecx = eax;
    ecx = ecx >> 5;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B5BC; /* je: equal / zero */

loc_0019B43F: ;
    eax = eax >> 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B483; /* je: equal / zero */

loc_0019B446: ;
    edx = MEM32(0x5BA6F8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0019B454u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0019B454: ;
    eax = MEM32(0x5BA6F0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B461u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0019B461: ;
    ecx = MEM32(0x5BA6E8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019B46Fu); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0019B46F: ;
    edx = MEM32(0x5BA6F4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0019B47Du); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0019B47D: ;
    edx = MEM32(0x5BA6E0);

loc_0019B483: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B4BC; /* jne: not equal / not zero */

loc_0019B487: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(0x5BA6D0);
    ebx = MEM32(eax + 0x10);
    eax = MEM32(ecx + 8);
    edi = MEM32(esi + 0x44);
    ecx = MEM32(edi + eax * 4);
    eax = MEM32(ebx + ecx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B4AA; /* jne: not equal / not zero */

loc_0019B4A6: ;
    ecx = 0; /* xor self */
    goto loc_0019B4B1;

loc_0019B4AA: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4 + -4);

loc_0019B4B1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B52E; /* je: equal / zero */

loc_0019B4B5: ;
    SET_LO8(eax, MEM8(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B52E; /* jne: not equal / not zero */

loc_0019B4BC: ;
    ebp = MEM32(edx + 0x20);
    eax = ebp;
    eax = eax >> 1;
    SET_LO8(eax, LO8(eax) & 1);
    if ((LO8(eax) != 0)) goto loc_0019B4D5; /* jne: not equal / not zero */

loc_0019B4C7: ;
    ecx = ebp;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B5BC; /* je: equal / zero */

loc_0019B4D5: ;
    ecx = MEM32(0x5BA6DC);
    ecx = MEM32(ecx + 8);
    edi = MEM32(esi + 0x44);
    ecx = MEM32(edi + ecx * 4);
    edi = MEM32(esi + 0x10);
    edi = MEM32(edi + 0x10);
    ecx = MEM32(edi + ecx * 4);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B4FB; /* je: equal / zero */

loc_0019B4F4: ;
    ecx = MEM32(ecx + 0x10);
    edi = MEM32(ecx + edi * 4 + -4);

loc_0019B4FB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B5BC; /* je: equal / zero */

loc_0019B503: ;
    ecx = ebp;
    ecx = ecx >> 2;
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ebx = edx + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0019B519u); RECOMP_ABI_CALL(0x0019AA00u, sub_0019AA00); /* call 0x0019AA00 */

loc_0019B519: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B5B6; /* je: equal / zero */

loc_0019B528: ;
    PUSH32(esp, eax);
    goto loc_0019B5AF;

loc_0019B52E: ;
    eax = MEM32(0x5BA6D8);
    ecx = MEM32(eax + 8);
    eax = MEM32(edi + ecx * 4);
    eax = MEM32(ebx + eax * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0019B547; /* jne: not equal / not zero */

loc_0019B543: ;
    edi = 0; /* xor self */
    goto loc_0019B54E;

loc_0019B547: ;
    eax = MEM32(eax + 0x10);
    edi = MEM32(eax + ecx * 4 + -4);

loc_0019B54E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0019B5BC; /* je: equal / zero */

loc_0019B552: ;
    eax = MEM32(edx + 0x20);
    ecx = eax;
    ecx = ecx >> 2;
    ecx = ecx & 0xFFFFFF01u;
    eax = eax >> 1;
    PUSH32(esp, ecx);
    eax = eax & 0xFFFFFF01u;
    PUSH32(esp, eax);
    edx = edx + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0019B572u); RECOMP_ABI_CALL(0x0019AA90u, sub_0019AA90); /* call 0x0019AA90 */

loc_0019B572: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0019B5B6; /* je: equal / zero */

loc_0019B57F: ;
    eax = MEM32(0x5BA6E0);
    edx = MEM32(eax + 0x20);
    edx = edx >> 5;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B5AE; /* je: equal / zero */

loc_0019B58F: ;
    edx = MEM32(edi);
    eax = eax + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0019B59Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019B59D: ;
    ecx = MEM32(0x5BA6E0);
    edx = MEM32(ecx + 0x44);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0019B5AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019B5AE: ;
    PUSH32(esp, edi);

loc_0019B5AF: ;
    ecx = esi;
    PUSH32(esp, 0x0019B5B6u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0019B5B6: ;
    edx = MEM32(0x5BA6E0);

loc_0019B5BC: ;
    eax = MEM32(edx + 0x20);
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B5D4; /* je: equal / zero */

loc_0019B5C6: ;
    ecx = MEM32(0x5BA704);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019B5D4u); RECOMP_ABI_CALL(0x0027C970u, sub_0027C970); /* call 0x0027C970 */

loc_0019B5D4: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019B5E3u); RECOMP_ABI_CALL(0x0028B440u, sub_0028B440); /* call 0x0028B440 */

loc_0019B5E3: ;
    ecx = MEM32(0x5BA6E0);
    edx = MEM32(ecx + 0x20);
    edx = edx >> 4;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0019B606; /* je: equal / zero */

loc_0019B5F9: ;
    eax = MEM32(0x5BA704);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B606u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B606: ;
    ecx = MEM32(0x5BA6E0);
    eax = MEM32(ecx + 0x20);
    edx = eax;
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B629; /* jne: not equal / not zero */

loc_0019B618: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B629; /* jne: not equal / not zero */

loc_0019B622: ;
    eax = eax >> 5;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B690; /* je: equal / zero */

loc_0019B629: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B639; /* je: equal / zero */

loc_0019B631: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B639u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B639: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B649; /* je: equal / zero */

loc_0019B641: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B649u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B649: ;
    edx = MEM32(0x5BA6E0);
    eax = MEM32(edx + 0x20);
    eax = eax >> 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B690; /* je: equal / zero */

loc_0019B659: ;
    ecx = MEM32(0x5BA6F4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019B667u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B667: ;
    edx = MEM32(0x5BA6E8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0019B675u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B675: ;
    eax = MEM32(0x5BA6F0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B682u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B682: ;
    ecx = MEM32(0x5BA6F8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019B690u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B690: ;
    edx = MEM32(0x5BA6E0);
    eax = MEM32(edx + 0x20);
    eax = eax >> 3;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B6AE; /* je: equal / zero */

loc_0019B6A0: ;
    ecx = MEM32(0x5BA6E4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0019B6AEu); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B6AE: ;
    edx = MEM32(0x5BA6E0);
    _fa = (uint32_t)(MEM8(edx + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x20), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B6C7; /* je: equal / zero */

loc_0019B6BA: ;
    eax = MEM32(0x5BA6FC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B6C7u); RECOMP_ABI_CALL(0x0027C9A0u, sub_0027C9A0); /* call 0x0027C9A0 */

loc_0019B6C7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B6E0
 * Original: 0x0019B6E0 - 0x0019B75A (122 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B6E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B6E0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B748; /* je: equal / zero */

loc_0019B6EA: ;
    SET_LO8(eax, MEM8(0x5BA6D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B748; /* je: equal / zero */

loc_0019B6F3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDC9C);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(0x5BDA90);
    eax = MEM32(edi + 8);
    ebp = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x19B3C0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(0x5BA6E0) = ebx;
    PUSH32(esp, 0x0019B71Du); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0019B71D: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0019B728u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0019B728: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = eax;
    MEM32(0x5BA6E0) = 0;
    PUSH32(esp, 0x0019B73Cu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0019B73C: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0019B748: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019B753u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0019B753: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019B760
 * Original: 0x0019B760 - 0x0019B76F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B760(void)
{

loc_0019B760: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019B76Eu); RECOMP_ABI_CALL(0x0019B6E0u, sub_0019B6E0); /* call 0x0019B6E0 */

loc_0019B76E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B770
 * Original: 0x0019B770 - 0x0019B7FC (140 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B770: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354D68);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = ecx;
    MEM32(esp + 0x1C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0019B79C; /* je: equal / zero */

loc_0019B799: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019B79C: ;
    eax = MEM32(ebx + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0019B7AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019B7AF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0019B7B6u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0019B7B6: ;
    esp = esp + 8;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0019B7C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019B7C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0019B7E6; /* je: equal / zero */

loc_0019B7CF: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019B7E6; /* jne: not equal / not zero */

loc_0019B7DF: ;
    ecx = edi;
    PUSH32(esp, 0x0019B7E6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019B7E6: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019B800
 * Original: 0x0019B800 - 0x0019B80F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B800(void)
{

loc_0019B800: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019B80Eu); RECOMP_ABI_CALL(0x0019B770u, sub_0019B770); /* call 0x0019B770 */

loc_0019B80E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B810
 * Original: 0x0019B810 - 0x0019B815 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B810(void)
{

loc_0019B810: ;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019B820
 * Original: 0x0019B820 - 0x0019B85F (63 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0019B858; /* je: equal / zero */

loc_0019B82A: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B858; /* je: equal / zero */

loc_0019B832: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019B839u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0019B839: ;
    edx = MEM32(eax);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0019B850u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019B850: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0019B858: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0019B860
 * Original: 0x0019B860 - 0x0019B864 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B860(void)
{

loc_0019B860: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B870
 * Original: 0x0019B870 - 0x0019B87C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B870(void)
{

loc_0019B870: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019B878u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0019B878: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B880
 * Original: 0x0019B880 - 0x0019B886 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B880(void)
{

loc_0019B880: ;
    eax = MEM32(0x5BC33C);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B890
 * Original: 0x0019B890 - 0x0019B895 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B890: ;
    g_seh_ebp = ebp; sub_001E6A80(); return; /* tail jmp 0x001E6A80 */

}

/**
 * sub_0019B8A0
 * Original: 0x0019B8A0 - 0x0019B8C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019B8A0: ;
    eax = MEM32(0x5BA750);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019B8B4; /* je: equal / zero */

loc_0019B8A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019B8C6; /* jne: not equal / not zero */

loc_0019B8B4: ;
    PUSH32(esp, 0x19C8A0);
    PUSH32(esp, 0x0019B8BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019B8BE: ;
    eax = MEM32(0x5BA750);
    esp = esp + 4;

loc_0019B8C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019B8D0
 * Original: 0x0019B8D0 - 0x0019B932 (98 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B8D0(void)
{

loc_0019B8D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA750);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019B8E0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0019B8E0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x460BC0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0019B8F0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0019B8F0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019B8F8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019B8F8: ;
    ebx = eax;
    PUSH32(esp, 0x0019B8FFu); RECOMP_ABI_CALL(0x00291CC0u, sub_00291CC0); /* call 0x00291CC0 */

loc_0019B8FF: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019B90Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019B90D: ;
    ebx = eax;
    PUSH32(esp, 0x0019B914u); RECOMP_ABI_CALL(0x00291C80u, sub_00291C80); /* call 0x00291C80 */

loc_0019B914: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x460BB4);
    PUSH32(esp, 0x460BA8);
    PUSH32(esp, 0x460B9C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0019B92Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0019B92E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B940
 * Original: 0x0019B940 - 0x0019B94C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B940(void)
{

loc_0019B940: ;
    PUSH32(esp, 0x19CA30);
    PUSH32(esp, 0x0019B94Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019B94A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B950
 * Original: 0x0019B950 - 0x0019B95C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B950(void)
{

loc_0019B950: ;
    PUSH32(esp, 0x19C930);
    PUSH32(esp, 0x0019B95Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019B95A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B960
 * Original: 0x0019B960 - 0x0019B96C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B960(void)
{

loc_0019B960: ;
    PUSH32(esp, 0x19CAE0);
    PUSH32(esp, 0x0019B96Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019B96A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B970
 * Original: 0x0019B970 - 0x0019B9C1 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B970(void)
{

loc_0019B970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA75C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019B980u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0019B980: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x460C1C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0019B990u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0019B990: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019B998u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019B998: ;
    ebx = eax;
    PUSH32(esp, 0x0019B99Fu); RECOMP_ABI_CALL(0x00223090u, sub_00223090); /* call 0x00223090 */

loc_0019B99F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x460C18);
    PUSH32(esp, 0x460C14);
    PUSH32(esp, 0x460C10);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0019B9BDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0019B9BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019B9D0
 * Original: 0x0019B9D0 - 0x0019BA1D (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B9D0(void)
{

loc_0019B9D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA760);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019B9E0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0019B9E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x460C2C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0019B9F0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0019B9F0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019B9F8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019B9F8: ;
    ebx = eax;
    PUSH32(esp, 0x0019B9FFu); RECOMP_ABI_CALL(0x001A52B0u, sub_001A52B0); /* call 0x001A52B0 */

loc_0019B9FF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x460C28);
    PUSH32(esp, 0x460C24);
    PUSH32(esp, 0x460C20);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0019BA19u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0019BA19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BA20
 * Original: 0x0019BA20 - 0x0019BA2C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BA20(void)
{

loc_0019BA20: ;
    PUSH32(esp, 0x19CB30);
    PUSH32(esp, 0x0019BA2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BA2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BA30
 * Original: 0x0019BA30 - 0x0019BAC9 (153 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA764);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019BA40u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0019BA40: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x460C54);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0019BA50u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0019BA50: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019BA58u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019BA58: ;
    ebx = eax;
    PUSH32(esp, 0x0019BA5Fu); RECOMP_ABI_CALL(0x0024A040u, sub_0024A040); /* call 0x0024A040 */

loc_0019BA5F: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019BA6Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019BA6D: ;
    ebx = eax;
    eax = MEM32(0x5BA750);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019BA92; /* jne: not equal / not zero */

loc_0019BA78: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0019BA84u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0019BA84: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BA8Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0019BA8A: ;
    esp = esp + 8;
    MEM32(0x5BA750) = eax;

loc_0019BA92: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0019BAA0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019BAA0: ;
    ebx = eax;
    PUSH32(esp, 0x0019BAA7u); RECOMP_ABI_CALL(0x00291C80u, sub_00291C80); /* call 0x00291C80 */

loc_0019BAA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x460C48);
    PUSH32(esp, 0x460C3C);
    PUSH32(esp, 0x460C30);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0019BAC5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0019BAC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BAD0
 * Original: 0x0019BAD0 - 0x0019BADC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BAD0(void)
{

loc_0019BAD0: ;
    PUSH32(esp, 0x19C500);
    PUSH32(esp, 0x0019BADAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BADA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BAE0
 * Original: 0x0019BAE0 - 0x0019BB2A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BAE0(void)
{

loc_0019BAE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA768);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019BAEFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0019BAEF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x460C6C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0019BAFFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0019BAFF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019BB07u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019BB07: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0019BB10u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0019BB10: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x460C68);
    PUSH32(esp, 0x460C64);
    PUSH32(esp, 0x460C60);
    ecx = esi;
    PUSH32(esp, 0x0019BB27u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0019BB27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BB30
 * Original: 0x0019BB30 - 0x0019BB3C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BB30(void)
{

loc_0019BB30: ;
    PUSH32(esp, 0x19C5A0);
    PUSH32(esp, 0x0019BB3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BB3A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BB40
 * Original: 0x0019BB40 - 0x0019BB91 (81 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BB40(void)
{

loc_0019BB40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BA76C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019BB50u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0019BB50: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x460C7C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0019BB60u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0019BB60: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019BB68u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019BB68: ;
    ebx = eax;
    PUSH32(esp, 0x0019BB6Fu); RECOMP_ABI_CALL(0x00249560u, sub_00249560); /* call 0x00249560 */

loc_0019BB6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x460C78);
    PUSH32(esp, 0x460C74);
    PUSH32(esp, 0x460C70);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0019BB8Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0019BB8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BBA0
 * Original: 0x0019BBA0 - 0x0019BBAC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BBA0(void)
{

loc_0019BBA0: ;
    PUSH32(esp, 0x19C640);
    PUSH32(esp, 0x0019BBAAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BBAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BBB0
 * Original: 0x0019BBB0 - 0x0019BBB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BBB0(void)
{

loc_0019BBB0: ;
    MEM8(0x5BA6D4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BBC0
 * Original: 0x0019BBC0 - 0x0019BBCC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BBC0(void)
{

loc_0019BBC0: ;
    PUSH32(esp, 0x19C6E0);
    PUSH32(esp, 0x0019BBCAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BBCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BBD0
 * Original: 0x0019BBD0 - 0x0019BBEE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BBD0(void)
{

loc_0019BBD0: ;
    PUSH32(esp, 0x19CA30);
    PUSH32(esp, 0x0019BBDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BBDA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA754);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BBEDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019BBED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BBF0
 * Original: 0x0019BBF0 - 0x0019BC0E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BBF0(void)
{

loc_0019BBF0: ;
    PUSH32(esp, 0x19C930);
    PUSH32(esp, 0x0019BBFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BBFA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA758);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BC0Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019BC0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BC10
 * Original: 0x0019BC10 - 0x0019BC2E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BC10(void)
{

loc_0019BC10: ;
    PUSH32(esp, 0x19CAE0);
    PUSH32(esp, 0x0019BC1Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BC1A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA75C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BC2Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019BC2D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BC30
 * Original: 0x0019BC30 - 0x0019BC57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BC30: ;
    eax = MEM32(0x5BA75C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019BC44; /* je: equal / zero */

loc_0019BC39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019BC56; /* jne: not equal / not zero */

loc_0019BC44: ;
    PUSH32(esp, 0x19CAE0);
    PUSH32(esp, 0x0019BC4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BC4E: ;
    eax = MEM32(0x5BA75C);
    esp = esp + 4;

loc_0019BC56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BC60
 * Original: 0x0019BC60 - 0x0019BC7E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BC60(void)
{

loc_0019BC60: ;
    PUSH32(esp, 0x19C400);
    PUSH32(esp, 0x0019BC6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BC6A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA760);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BC7Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019BC7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BC80
 * Original: 0x0019BC80 - 0x0019BCA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BC80: ;
    eax = MEM32(0x5BA760);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019BC94; /* je: equal / zero */

loc_0019BC89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019BCA6; /* jne: not equal / not zero */

loc_0019BC94: ;
    PUSH32(esp, 0x19C400);
    PUSH32(esp, 0x0019BC9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BC9E: ;
    eax = MEM32(0x5BA760);
    esp = esp + 4;

loc_0019BCA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BCB0
 * Original: 0x0019BCB0 - 0x0019BCCE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BCB0(void)
{

loc_0019BCB0: ;
    PUSH32(esp, 0x19CB30);
    PUSH32(esp, 0x0019BCBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BCBA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA764);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BCCDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019BCCD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BCD0
 * Original: 0x0019BCD0 - 0x0019BCF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BCD0: ;
    eax = MEM32(0x5BA764);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019BCE4; /* je: equal / zero */

loc_0019BCD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019BCF6; /* jne: not equal / not zero */

loc_0019BCE4: ;
    PUSH32(esp, 0x19CB30);
    PUSH32(esp, 0x0019BCEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BCEE: ;
    eax = MEM32(0x5BA764);
    esp = esp + 4;

loc_0019BCF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BD00
 * Original: 0x0019BD00 - 0x0019BD1E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BD00(void)
{

loc_0019BD00: ;
    PUSH32(esp, 0x19C500);
    PUSH32(esp, 0x0019BD0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BD0A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA768);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BD1Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019BD1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BD20
 * Original: 0x0019BD20 - 0x0019BD47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BD20: ;
    eax = MEM32(0x5BA768);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019BD34; /* je: equal / zero */

loc_0019BD29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019BD46; /* jne: not equal / not zero */

loc_0019BD34: ;
    PUSH32(esp, 0x19C500);
    PUSH32(esp, 0x0019BD3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BD3E: ;
    eax = MEM32(0x5BA768);
    esp = esp + 4;

loc_0019BD46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BD50
 * Original: 0x0019BD50 - 0x0019BD6E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BD50(void)
{

loc_0019BD50: ;
    PUSH32(esp, 0x19C5A0);
    PUSH32(esp, 0x0019BD5Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BD5A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA76C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BD6Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019BD6D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BD70
 * Original: 0x0019BD70 - 0x0019BD97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BD70: ;
    eax = MEM32(0x5BA76C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019BD84; /* je: equal / zero */

loc_0019BD79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019BD96; /* jne: not equal / not zero */

loc_0019BD84: ;
    PUSH32(esp, 0x19C5A0);
    PUSH32(esp, 0x0019BD8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BD8E: ;
    eax = MEM32(0x5BA76C);
    esp = esp + 4;

loc_0019BD96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BDA0
 * Original: 0x0019BDA0 - 0x0019BDBE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BDA0(void)
{

loc_0019BDA0: ;
    PUSH32(esp, 0x19C640);
    PUSH32(esp, 0x0019BDAAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BDAA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BA774);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BDBDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0019BDBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BDC0
 * Original: 0x0019BDC0 - 0x0019BDE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BDC0: ;
    eax = MEM32(0x5BA774);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019BDD4; /* je: equal / zero */

loc_0019BDC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019BDE6; /* jne: not equal / not zero */

loc_0019BDD4: ;
    PUSH32(esp, 0x19C640);
    PUSH32(esp, 0x0019BDDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BDDE: ;
    eax = MEM32(0x5BA774);
    esp = esp + 4;

loc_0019BDE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BDF0
 * Original: 0x0019BDF0 - 0x0019BEB1 (193 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BDF0(void)
{

loc_0019BDF0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA774);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019BE02u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0019BE02: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x460D14);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0019BE12u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0019BE12: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0019BE1Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019BE1D: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x0019BE49u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0019BE49: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0019BE54u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019BE54: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0019BE80u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0019BE80: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0019BE8Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0019BE8B: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x0019BE94u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0019BE94: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x460D04);
    PUSH32(esp, 0x460CF4);
    PUSH32(esp, 0x460CE4);
    ecx = esi;
    PUSH32(esp, 0x0019BEABu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0019BEAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BEC0
 * Original: 0x0019BEC0 - 0x0019BF53 (147 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BEC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354D93);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0019BF00; /* je: equal / zero */

loc_0019BEEC: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0019BF00; /* jne: not equal / not zero */

loc_0019BEF8: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BF00u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0019BF00: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019BF20; /* je: equal / zero */

loc_0019BF0C: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0019BF20; /* jne: not equal / not zero */

loc_0019BF18: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BF20u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0019BF20: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0019BF43; /* je: equal / zero */

loc_0019BF2F: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0019BF43; /* jne: not equal / not zero */

loc_0019BF3B: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019BF43u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0019BF43: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BF60
 * Original: 0x0019BF60 - 0x0019BFB2 (82 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BF60(void)
{

loc_0019BF60: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BA778);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0019BF6Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0019BF6F: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x460D74);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0019BF7Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0019BF7F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x460D64);
    PUSH32(esp, 0x460D54);
    PUSH32(esp, 0x460D44);
    ecx = esi;
    PUSH32(esp, 0x0019BF96u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0019BF96: ;
    eax = MEM32(0x5BA778);
    PUSH32(esp, 0x24E2B0);
    MEM32(eax + 0x40) = 0x19B890;
    PUSH32(esp, 0x0019BFACu); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_0019BFAC: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0019BFC0
 * Original: 0x0019BFC0 - 0x0019BFE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BFC0: ;
    eax = MEM32(0x5BA754);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019BFD4; /* je: equal / zero */

loc_0019BFC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019BFE6; /* jne: not equal / not zero */

loc_0019BFD4: ;
    PUSH32(esp, 0x19CA30);
    PUSH32(esp, 0x0019BFDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019BFDE: ;
    eax = MEM32(0x5BA754);
    esp = esp + 4;

loc_0019BFE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019BFF0
 * Original: 0x0019BFF0 - 0x0019C017 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019BFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019BFF0: ;
    eax = MEM32(0x5BA758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019C004; /* je: equal / zero */

loc_0019BFF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C016; /* jne: not equal / not zero */

loc_0019C004: ;
    PUSH32(esp, 0x19C930);
    PUSH32(esp, 0x0019C00Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019C00E: ;
    eax = MEM32(0x5BA758);
    esp = esp + 4;

loc_0019C016: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C020
 * Original: 0x0019C020 - 0x0019C047 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C020: ;
    eax = MEM32(0x5BA778);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019C034; /* je: equal / zero */

loc_0019C029: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C046; /* jne: not equal / not zero */

loc_0019C034: ;
    PUSH32(esp, 0x19C6E0);
    PUSH32(esp, 0x0019C03Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019C03E: ;
    eax = MEM32(0x5BA778);
    esp = esp + 4;

loc_0019C046: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C050
 * Original: 0x0019C050 - 0x0019C056 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C050(void)
{

loc_0019C050: ;
    eax = MEM32(0x5BD9C8);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C060
 * Original: 0x0019C060 - 0x0019C070 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C060: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0019C065u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0019C065: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0019C070
 * Original: 0x0019C070 - 0x0019C0A0 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C070: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019C087; /* je: equal / zero */

loc_0019C078: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(esp + 4);
    edx = edx | eax;
    MEM32(ecx + 0x14) = edx;
    esp += 12; return; /* ret 8 */

loc_0019C087: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x14);
    edx = ~edx;
    eax = eax & edx;
    MEM32(ecx + 0x14) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0019C0A0
 * Original: 0x0019C0A0 - 0x0019C135 (149 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C0A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354DB3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0019C0E1; /* je: equal / zero */

loc_0019C0CC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C0E1; /* jne: not equal / not zero */

loc_0019C0DC: ;
    PUSH32(esp, 0x0019C0E1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C0E1: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019C102; /* je: equal / zero */

loc_0019C0ED: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C102; /* jne: not equal / not zero */

loc_0019C0FD: ;
    PUSH32(esp, 0x0019C102u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C102: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0019C125; /* je: equal / zero */

loc_0019C111: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0019C125; /* jne: not equal / not zero */

loc_0019C11D: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019C125u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0019C125: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C140
 * Original: 0x0019C140 - 0x0019C146 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C140(void)
{

loc_0019C140: ;
    eax = MEM32(0x5BDA80);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C150
 * Original: 0x0019C150 - 0x0019C170 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C150: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0019C164; /* je: equal / zero */

loc_0019C157: ;
    eax = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_0019C164: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0019C170
 * Original: 0x0019C170 - 0x0019C1D0 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C170: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354DC8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019C1B1; /* je: equal / zero */

loc_0019C19C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C1B1; /* jne: not equal / not zero */

loc_0019C1AC: ;
    PUSH32(esp, 0x0019C1B1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C1B1: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0019C1C0u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0019C1C0: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C1D0
 * Original: 0x0019C1D0 - 0x0019C1E0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C1D0(void)
{

loc_0019C1D0: ;
    eax = MEM32(0x5BA760);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C1E0
 * Original: 0x0019C1E0 - 0x0019C240 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C1E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354E18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019C221; /* je: equal / zero */

loc_0019C20C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C221; /* jne: not equal / not zero */

loc_0019C21C: ;
    PUSH32(esp, 0x0019C221u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C221: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0019C230u); RECOMP_ABI_CALL(0x0019C170u, sub_0019C170); /* call 0x0019C170 */

loc_0019C230: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C240
 * Original: 0x0019C240 - 0x0019C250 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C240(void)
{

loc_0019C240: ;
    eax = MEM32(0x5BA764);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C250
 * Original: 0x0019C250 - 0x0019C2F2 (162 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C250: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354DFE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0019C291; /* je: equal / zero */

loc_0019C27C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C291; /* jne: not equal / not zero */

loc_0019C28C: ;
    PUSH32(esp, 0x0019C291u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C291: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0019C2B2; /* je: equal / zero */

loc_0019C29D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C2B2; /* jne: not equal / not zero */

loc_0019C2AD: ;
    PUSH32(esp, 0x0019C2B2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C2B2: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019C2D3; /* je: equal / zero */

loc_0019C2BE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C2D3; /* jne: not equal / not zero */

loc_0019C2CE: ;
    PUSH32(esp, 0x0019C2D3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C2D3: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0019C2E2u); RECOMP_ABI_CALL(0x0019C170u, sub_0019C170); /* call 0x0019C170 */

loc_0019C2E2: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C300
 * Original: 0x0019C300 - 0x0019C306 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C300(void)
{

loc_0019C300: ;
    eax = MEM32(0x5BA768);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C310
 * Original: 0x0019C310 - 0x0019C316 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C310(void)
{

loc_0019C310: ;
    eax = MEM32(0x5BA76C);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C320
 * Original: 0x0019C320 - 0x0019C326 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C320(void)
{

loc_0019C320: ;
    eax = MEM32(0x5BA774);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C330
 * Original: 0x0019C330 - 0x0019C336 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C330(void)
{

loc_0019C330: ;
    eax = MEM32(0x5BA778);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C340
 * Original: 0x0019C340 - 0x0019C346 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C340(void)
{

loc_0019C340: ;
    eax = MEM32(0x5BDA2C);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C350
 * Original: 0x0019C350 - 0x0019C356 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C350(void)
{

loc_0019C350: ;
    eax = MEM32(0x5BD8E4);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C360
 * Original: 0x0019C360 - 0x0019C366 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C360(void)
{

loc_0019C360: ;
    eax = MEM32(0x5BDB40);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C370
 * Original: 0x0019C370 - 0x0019C37A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C370(void)
{

loc_0019C370: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x24) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019C380
 * Original: 0x0019C380 - 0x0019C3A3 (35 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C380: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0019C38F; /* je: equal / zero */

loc_0019C38C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0019C38F: ;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0019C398u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_0019C398: ;
    esp = esp + 4;
    MEM32(edi + 0x20) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0019C3B0
 * Original: 0x0019C3B0 - 0x0019C3FA (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C3B0(void)
{

loc_0019C3B0: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C3BDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019C3BD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E0FD4;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C3F3u); RECOMP_ABI_CALL(0x0019C1E0u, sub_0019C1E0); /* call 0x0019C1E0 */

loc_0019C3F3: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C400
 * Original: 0x0019C400 - 0x0019C447 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C400: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C410; /* jne: not equal / not zero */

loc_0019C409: ;
    MEM8(0x5BA77C) = 1;

loc_0019C410: ;
    PUSH32(esp, 0x460FAC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19B9D0);
    PUSH32(esp, 0x19C3B0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x3E14C8);
    PUSH32(esp, 0x144FC0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BA760);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019C443u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019C443: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C450
 * Original: 0x0019C450 - 0x0019C4A2 (82 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C450(void)
{

loc_0019C450: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C45Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019C45D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E1064;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C49Bu); RECOMP_ABI_CALL(0x0019C250u, sub_0019C250); /* call 0x0019C250 */

loc_0019C49B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C4B0
 * Original: 0x0019C4B0 - 0x0019C4F6 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C4B0(void)
{

loc_0019C4B0: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C4BDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019C4BD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E10F4;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C4EFu); RECOMP_ABI_CALL(0x0019C170u, sub_0019C170); /* call 0x0019C170 */

loc_0019C4EF: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C500
 * Original: 0x0019C500 - 0x0019C544 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C500: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C510; /* jne: not equal / not zero */

loc_0019C509: ;
    MEM8(0x5BA77C) = 1;

loc_0019C510: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19BAE0);
    PUSH32(esp, 0x19C4B0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x3E14DC);
    PUSH32(esp, 0x144FE0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BA768);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019C540u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019C540: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C550
 * Original: 0x0019C550 - 0x0019C59A (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C550(void)
{

loc_0019C550: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C55Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019C55D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E1184;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C593u); RECOMP_ABI_CALL(0x0019C1E0u, sub_0019C1E0); /* call 0x0019C1E0 */

loc_0019C593: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C5A0
 * Original: 0x0019C5A0 - 0x0019C5E7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C5A0: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C5B0; /* jne: not equal / not zero */

loc_0019C5A9: ;
    MEM8(0x5BA77C) = 1;

loc_0019C5B0: ;
    PUSH32(esp, 0x460FB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19BB40);
    PUSH32(esp, 0x19C550);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x3E14EC);
    PUSH32(esp, 0x145000);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BA76C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019C5E3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019C5E3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C5F0
 * Original: 0x0019C5F0 - 0x0019C636 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C5F0(void)
{

loc_0019C5F0: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C5FDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019C5FD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E1214;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C62Fu); RECOMP_ABI_CALL(0x0019C170u, sub_0019C170); /* call 0x0019C170 */

loc_0019C62F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C640
 * Original: 0x0019C640 - 0x0019C687 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C640: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C650; /* jne: not equal / not zero */

loc_0019C649: ;
    MEM8(0x5BA77C) = 1;

loc_0019C650: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x19BBB0);
    PUSH32(esp, 0x19BDF0);
    PUSH32(esp, 0x19C5F0);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x3E1500);
    PUSH32(esp, 0x144FF0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BA774);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019C683u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019C683: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C690
 * Original: 0x0019C690 - 0x0019C6D2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C690(void)
{

loc_0019C690: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C69Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019C69D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E12A4;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C6CBu); RECOMP_ABI_CALL(0x0019BEC0u, sub_0019BEC0); /* call 0x0019BEC0 */

loc_0019C6CB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C6E0
 * Original: 0x0019C6E0 - 0x0019C727 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C6E0: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C6F0; /* jne: not equal / not zero */

loc_0019C6E9: ;
    MEM8(0x5BA77C) = 1;

loc_0019C6F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x24E2B0);
    PUSH32(esp, 0x19BF60);
    PUSH32(esp, 0x19C690);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x3E1510);
    PUSH32(esp, 0x19C020);
    PUSH32(esp, 0x19B880);
    PUSH32(esp, 0x22F4F0);
    PUSH32(esp, 0x5BA778);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019C723u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019C723: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C730
 * Original: 0x0019C730 - 0x0019C736 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C730(void)
{

loc_0019C730: ;
    eax = MEM32(0x5BA750);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C740
 * Original: 0x0019C740 - 0x0019C7C1 (129 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C740: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354E43);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0019C781; /* je: equal / zero */

loc_0019C76C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C781; /* jne: not equal / not zero */

loc_0019C77C: ;
    PUSH32(esp, 0x0019C781u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C781: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019C7A2; /* je: equal / zero */

loc_0019C78D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C7A2; /* jne: not equal / not zero */

loc_0019C79D: ;
    PUSH32(esp, 0x0019C7A2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C7A2: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0019C7B1u); RECOMP_ABI_CALL(0x0019C170u, sub_0019C170); /* call 0x0019C170 */

loc_0019C7B1: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C7D0
 * Original: 0x0019C7D0 - 0x0019C7D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C7D0(void)
{

loc_0019C7D0: ;
    eax = MEM32(0x5BA758);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C7E0
 * Original: 0x0019C7E0 - 0x0019C7E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C7E0(void)
{

loc_0019C7E0: ;
    eax = MEM32(0x5BDA90);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C7F0
 * Original: 0x0019C7F0 - 0x0019C850 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C7F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354E58);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019C831; /* je: equal / zero */

loc_0019C81C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C831; /* jne: not equal / not zero */

loc_0019C82C: ;
    PUSH32(esp, 0x0019C831u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C831: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0019C840u); RECOMP_ABI_CALL(0x0019C1E0u, sub_0019C1E0); /* call 0x0019C1E0 */

loc_0019C840: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C850
 * Original: 0x0019C850 - 0x0019C89E (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C850(void)
{

loc_0019C850: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C85Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019C85D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E1524;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0019C897u); RECOMP_ABI_CALL(0x0019C740u, sub_0019C740); /* call 0x0019C740 */

loc_0019C897: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C8A0
 * Original: 0x0019C8A0 - 0x0019C8E7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C8A0: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C8B0; /* jne: not equal / not zero */

loc_0019C8A9: ;
    MEM8(0x5BA77C) = 1;

loc_0019C8B0: ;
    PUSH32(esp, 0x461080);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19B8D0);
    PUSH32(esp, 0x19C850);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x3E16A4);
    PUSH32(esp, 0x144FA0);
    PUSH32(esp, 0x19C340);
    PUSH32(esp, 0x281570);
    PUSH32(esp, 0x5BA750);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019C8E3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019C8E3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C8F0
 * Original: 0x0019C8F0 - 0x0019C8F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C8F0(void)
{

loc_0019C8F0: ;
    eax = MEM32(0x5BA754);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C900
 * Original: 0x0019C900 - 0x0019C924 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C900(void)
{

loc_0019C900: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0019C90Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019C90B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E15AC;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C930
 * Original: 0x0019C930 - 0x0019C974 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C930: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019C940; /* jne: not equal / not zero */

loc_0019C939: ;
    MEM8(0x5BA77C) = 1;

loc_0019C940: ;
    PUSH32(esp, 0x4610BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19C900);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x3E1720);
    PUSH32(esp, 0x19BFF0);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BA758);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019C970u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019C970: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C980
 * Original: 0x0019C980 - 0x0019C986 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C980(void)
{

loc_0019C980: ;
    eax = MEM32(0x5BA75C);
    esp += 4; return; /* ret */

}

/**
 * sub_0019C990
 * Original: 0x0019C990 - 0x0019C9F0 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019C990: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x354E78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0019C9D1; /* je: equal / zero */

loc_0019C9BC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0019C9D1; /* jne: not equal / not zero */

loc_0019C9CC: ;
    PUSH32(esp, 0x0019C9D1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0019C9D1: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0019C9E0u); RECOMP_ABI_CALL(0x0019C7F0u, sub_0019C7F0); /* call 0x0019C7F0 */

loc_0019C9E0: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0019C9F0
 * Original: 0x0019C9F0 - 0x0019C9FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C9F0(void)
{

loc_0019C9F0: ;
    PUSH32(esp, 0x19C8A0);
    PUSH32(esp, 0x0019C9FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0019C9FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0019CA00
 * Original: 0x0019CA00 - 0x0019CA24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CA00(void)
{

loc_0019CA00: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0019CA0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019CA0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x3E16C4;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0019CA30
 * Original: 0x0019CA30 - 0x0019CA74 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CA30: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019CA40; /* jne: not equal / not zero */

loc_0019CA39: ;
    MEM8(0x5BA77C) = 1;

loc_0019CA40: ;
    PUSH32(esp, 0x4610F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19CA00);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x3E17D4);
    PUSH32(esp, 0x19BFC0);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BA754);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019CA70u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019CA70: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0019CA80
 * Original: 0x0019CA80 - 0x0019CAD2 (82 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CA80(void)
{

loc_0019CA80: ;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0019CA8Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0019CA8D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E173C;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0019CACBu); RECOMP_ABI_CALL(0x0019C990u, sub_0019C990); /* call 0x0019C990 */

loc_0019CACB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0019CAE0
 * Original: 0x0019CAE0 - 0x0019CB27 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0019CAE0: ;
    SET_LO8(eax, MEM8(0x5BA77C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0019CAF0; /* jne: not equal / not zero */

loc_0019CAE9: ;
    MEM8(0x5BA77C) = 1;

loc_0019CAF0: ;
    PUSH32(esp, 0x4610F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19B970);
    PUSH32(esp, 0x19CA80);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3E17E4);
    PUSH32(esp, 0x144FB0);
    PUSH32(esp, 0x19C7E0);
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x5BA75C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0019CB23u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0019CB23: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}
