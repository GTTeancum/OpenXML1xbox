/**
 * X-Men Legends - Recompiled code chunk 46
 * Functions: 250 (0x001ECC80 - 0x001F1F40)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001ECC80
 * Original: 0x001ECC80 - 0x001ECC9C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC80(void)
{

loc_001ECC80: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x7C));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xE0); PUSH32(esp, 0x001ECC99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECC99: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ECCA0
 * Original: 0x001ECCA0 - 0x001ECD1A (122 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECCA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECCA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(esp + 0x10));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001ECCE2; /* jle: less or equal (signed <=) */

loc_001ECCB0: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = eax - esi;
    MEM32(esp + 0x18) = eax;
    goto loc_001ECCC5;

loc_001ECCC1: ;
    eax = MEM32(esp + 0x18);

loc_001ECCC5: ;
    eax = MEM32(eax + esi);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001ECCD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECCD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECCE1; /* je: equal / zero */

loc_001ECCD7: ;
    MEM32(esi) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ECCC1; /* jl: less (signed <) */

loc_001ECCE1: ;
    POP32(esp, esi);

loc_001ECCE2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ECD08; /* jge: greater or equal (signed >=) */

loc_001ECCE6: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x001ECCF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECCF6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001ECD08: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001ECD20
 * Original: 0x001ECD20 - 0x001ECDA9 (137 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECD20: ;
    eax = ZX16(MEM16(esp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001ECD6E; /* jle: less or equal (signed <=) */

loc_001ECD2F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebp = ebp - edi;
    goto loc_001ECD40;

    /* nop */

loc_001ECD40: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ebx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + esi * 2));
    ecx = MEM32(edi + ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001ECD59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECD59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECD6C; /* je: equal / zero */

loc_001ECD5D: ;
    MEM32(edi) = eax;
    eax = ZX16(MEM16(esp + 0x18));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ECD40; /* jl: less (signed <) */

loc_001ECD6C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001ECD6E: ;
    eax = ZX16(MEM16(esp + 0x10));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ECD98; /* jge: greater or equal (signed >=) */

loc_001ECD77: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF4); PUSH32(esp, 0x001ECD87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECD87: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x46A728);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_001ECD98: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001ECDB0
 * Original: 0x001ECDB0 - 0x001ECDB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECDB0(void)
{

loc_001ECDB0: ;
    eax = MEM32(ecx + 0x84);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECDC0
 * Original: 0x001ECDC0 - 0x001ECF10 (336 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECDC0(void)
{

loc_001ECDC0: ;
    PUSH32(esp, ecx);
    SET_LO8(edx, MEM8(eax + 0x10));
    SET_LO8(ecx, MEM8(eax + 0x11));
    MEM8(esp) = LO8(ecx);
    MEM8(esp + 1) = LO8(edx);
    SET_LO16(ecx, MEM16(esp));
    MEM16(eax + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x13));
    SET_LO8(ecx, MEM8(eax + 0x12));
    MEM8(esp + 1) = LO8(ecx);
    MEM8(esp) = LO8(edx);
    SET_LO16(edx, MEM16(esp));
    MEM16(eax + 0x12) = LO16(edx);
    SET_LO8(ecx, MEM8(eax + 0x17));
    SET_LO8(edx, MEM8(eax + 0x16));
    MEM8(esp) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    MEM8(esp + 1) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(esp + 2) = LO8(ecx);
    MEM8(esp + 3) = LO8(edx);
    ecx = MEM32(esp);
    MEM32(eax + 0x14) = ecx;
    SET_LO8(edx, MEM8(eax + 0x1B));
    SET_LO8(ecx, MEM8(eax + 0x1A));
    MEM8(esp + 1) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x18));
    MEM8(esp) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x19));
    MEM8(esp + 2) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    edx = MEM32(esp);
    MEM32(eax + 0x18) = edx;
    SET_LO8(ecx, MEM8(eax + 0x1F));
    SET_LO8(edx, MEM8(eax + 0x1E));
    MEM8(esp) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x1D));
    MEM8(esp + 1) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1C));
    MEM8(esp + 2) = LO8(ecx);
    MEM8(esp + 3) = LO8(edx);
    ecx = MEM32(esp);
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(edx, MEM8(eax + 0x23));
    SET_LO8(ecx, MEM8(eax + 0x22));
    MEM8(esp + 1) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEM8(esp) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x21));
    MEM8(esp + 2) = LO8(edx);
    MEM8(esp + 3) = LO8(ecx);
    edx = MEM32(esp);
    MEM32(eax + 0x20) = edx;
    SET_LO8(ecx, MEM8(eax + 0x27));
    SET_LO8(edx, MEM8(eax + 0x26));
    MEM8(esp) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x25));
    MEM8(esp + 1) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x24));
    MEM8(esp + 2) = LO8(ecx);
    MEM8(esp + 3) = LO8(edx);
    ecx = MEM32(esp);
    MEM32(eax + 0x24) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x28));
    SET_LO8(edx, MEM8(eax + 0x29));
    MEM8(esp + 1) = LO8(ecx);
    MEM8(esp) = LO8(edx);
    SET_LO16(edx, MEM16(esp));
    MEM16(eax + 0x28) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x2A));
    SET_LO8(ecx, MEM8(eax + 0x2B));
    MEM8(esp) = LO8(ecx);
    MEM8(esp + 1) = LO8(edx);
    SET_LO16(ecx, MEM16(esp));
    MEM16(eax + 0x2A) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x2D));
    SET_LO8(ecx, MEM8(eax + 0x2C));
    MEM8(esp + 1) = LO8(ecx);
    MEM8(esp) = LO8(edx);
    SET_LO16(edx, MEM16(esp));
    MEM16(eax + 0x2C) = LO16(edx);
    SET_LO8(ecx, MEM8(eax + 0x2F));
    SET_LO8(edx, MEM8(eax + 0x2E));
    MEM8(esp) = LO8(ecx);
    MEM8(esp + 1) = LO8(edx);
    SET_LO16(ecx, MEM16(esp));
    MEM16(eax + 0x2E) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x30));
    SET_LO8(edx, MEM8(eax + 0x31));
    MEM8(esp) = LO8(edx);
    MEM8(esp + 1) = LO8(ecx);
    SET_LO16(edx, MEM16(esp));
    MEM16(eax + 0x30) = LO16(edx);
    SET_LO8(ecx, MEM8(eax + 0x33));
    SET_LO8(edx, MEM8(eax + 0x32));
    MEM8(esp) = LO8(ecx);
    MEM8(esp + 1) = LO8(edx);
    SET_LO16(ecx, MEM16(esp));
    MEM16(eax + 0x32) = LO16(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECF10
 * Original: 0x001ECF10 - 0x001ED08E (382 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECF10: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001ED089; /* jle: less or equal (signed <=) */

loc_001ECF1E: ;
    eax = ecx + 6;

loc_001ECF21: ;
    SET_LO8(edx, MEM8(eax + -3));
    MEM8(esp + 4) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -4));
    MEM8(esp + 5) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -5));
    MEM8(esp + 6) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    MEM8(esp + 7) = LO8(edx);
    edx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(esp + 8) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(esp + 9) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -1));
    MEM8(esp + 0xA) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -2));
    MEM8(esp + 0xB) = LO8(edx);
    edx = MEM32(esp + 8);
    MEM32(eax + -2) = edx;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(esp + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 4));
    MEM8(esp + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(esp + 0xF) = LO8(edx);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 2) = edx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esp + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(esp + 0x11) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 7));
    MEM8(esp + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 6));
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 6) = edx;
    SET_LO8(edx, MEM8(eax + 0xD));
    MEM8(esp + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xC));
    MEM8(esp + 0x15) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xB));
    MEM8(esp + 0x16) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xA));
    MEM8(esp + 0x17) = LO8(edx);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0xA) = edx;
    SET_LO8(edx, MEM8(eax + 0x11));
    MEM8(esp + 0x18) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x10));
    MEM8(esp + 0x19) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xF));
    MEM8(esp + 0x1A) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM8(esp + 0x1B) = LO8(edx);
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0xE) = edx;
    SET_LO8(edx, MEM8(eax + 0x15));
    MEM8(esp + 0x1C) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(esp + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x13));
    MEM8(esp + 0x1E) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x12));
    MEM8(esp + 0x1F) = LO8(edx);
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x12) = edx;
    SET_LO8(edx, MEM8(eax + 0x19));
    MEM8(esp + 0x20) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x18));
    MEM8(esp + 0x21) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x17));
    MEM8(esp + 0x22) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x16));
    MEM8(esp + 0x23) = LO8(edx);
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x16) = edx;
    SET_LO8(edx, MEM8(eax + 0x1D));
    MEM8(esp + 0x24) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1C));
    MEM8(esp + 0x25) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1B));
    MEM8(esp + 0x26) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1A));
    MEM8(esp + 0x27) = LO8(edx);
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x1A) = edx;
    SET_LO8(edx, MEM8(eax + 0x21));
    MEM8(esp + 0x28) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x20));
    MEM8(esp + 0x29) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1F));
    MEM8(esp + 0x2A) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1E));
    MEM8(esp + 0x2B) = LO8(edx);
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x1E) = edx;
    ecx = ecx + 0x28;
    eax = eax + 0x28;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ECF21; /* jne: not equal / not zero */

loc_001ED089: ;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_001ED090
 * Original: 0x001ED090 - 0x001ED130 (160 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED090: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001ED12B; /* jle: less or equal (signed <=) */

loc_001ED09E: ;
    eax = ecx + 6;

loc_001ED0A1: ;
    SET_LO8(edx, MEM8(eax + -3));
    MEM8(esp + 8) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -4));
    MEM8(esp + 9) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -5));
    MEM8(esp + 0xA) = LO8(edx);
    SET_LO8(edx, MEM8(ecx));
    MEM8(esp + 0xB) = LO8(edx);
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(esp + 0xC) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(esp + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -1));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -2));
    MEM8(esp + 0xF) = LO8(edx);
    edx = MEM32(esp + 0xC);
    MEM32(eax + -2) = edx;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(esp + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 4));
    MEM8(esp + 0x11) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(esp + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 2) = edx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esp + 4) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(esp + 5) = LO8(edx);
    SET_LO16(edx, MEM16(esp + 4));
    MEM16(eax + 8) = LO16(edx);
    ecx = ecx + 0x10;
    eax = eax + 0x10;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ED0A1; /* jne: not equal / not zero */

loc_001ED12B: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001ED130
 * Original: 0x001ED130 - 0x001ED158 (40 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED130: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x50);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED152; /* je: equal / zero */

loc_001ED138: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001ED152; /* jl: less (signed <) */

loc_001ED140: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x4C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001ED152; /* jg: greater (signed >) */

loc_001ED145: ;
    eax = ZX16(MEM16(ecx + 0x3E));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax + esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001ED152: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ED160
 * Original: 0x001ED160 - 0x001ED30B (427 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x10C;
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(ecx));
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001ED2FE; /* je: equal / zero */

loc_001ED182: ;
    ebx = MEM32(ebp + 0xC);

loc_001ED185: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x50) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x50 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED192; /* jne: not equal / not zero */

loc_001ED18C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001ED2E7;

loc_001ED192: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x51) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x51 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED2EB; /* jne: not equal / not zero */

loc_001ED19A: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED2CD; /* jl: less (signed <) */

loc_001ED1A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001ED2CD; /* jg: greater (signed >) */

loc_001ED1B2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001ED2CD; /* je: equal / zero */

loc_001ED1BF: ;
    goto loc_001ED1C5;

loc_001ED1C1: ;
    eax = MEM32(esp + 0x14);

loc_001ED1C5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(ecx));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED1EB; /* jl: less (signed <) */

loc_001ED1D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001ED1E7; /* jg: greater (signed >) */

loc_001ED1D6: ;
    eax = SX8(LO8(eax));
    edx = edi + edi * 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax + edx * 2 + -48;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ED1D2; /* jge: greater or equal (signed >=) */

loc_001ED1E7: ;
    MEM32(esp + 0xC) = ecx;

loc_001ED1EB: ;
    eax = MEM32(ebp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001ED1F7; /* jle: less or equal (signed <=) */

loc_001ED1F5: ;
    esi = eax;

loc_001ED1F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED1FFu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001ED1FF: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, ebx);
    MEM8(esi + ebx) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED20Bu); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_001ED20B: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED28A; /* je: equal / zero */

loc_001ED212: ;
    esi = esi - eax;
    ecx = esi + ebx + 1;
    edx = ecx;
    ecx = ecx >> 2;
    esi = eax + 1;
    edi = esp + 0x18;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    eax = eax - ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE (32-bit) */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED23C; /* jle: less or equal (signed <=) */

loc_001ED237: ;
    eax = 0xFE;

loc_001ED23C: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED245; /* jle: less or equal (signed <=) */

loc_001ED243: ;
    eax = esi;

loc_001ED245: ;
    esi = esi - eax;
    ebx = ebx + eax;
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(ebx) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED258u); RECOMP_ABI_CALL(0x001ED160u, sub_001ED160); /* call 0x001ED160 */

loc_001ED258: ;
    eax = ebx;
    esp = esp + 0xC;
    edx = eax + 1;

loc_001ED260: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED260; /* jne: not equal / not zero */

loc_001ED267: ;
    eax = eax - edx;
    esi = esi - eax;
    ebx = ebx + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    MEM32(ebp + 0x10) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001ED29E; /* jle: less or equal (signed <=) */

loc_001ED275: ;
    MEM8(ebx) = 0x3E;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ebp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001ED29E; /* jle: less or equal (signed <=) */

loc_001ED284: ;
    MEM8(ebx) = LO8(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001ED29B;

loc_001ED28A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0x10);
    ecx = ecx + edi;
    ebx = ebx + esi;
    MEM32(esp + 0xC) = ecx;
    eax = eax - esi;

loc_001ED29B: ;
    MEM32(ebp + 0x10) = eax;

loc_001ED29E: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_001ED2C9; /* je: equal / zero */

loc_001ED2AA: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED1C1; /* jle: less or equal (signed <=) */

loc_001ED2B6: ;
    MEM8(ebx) = 0x3A;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx) = 0x3A;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax - 2;
    MEM32(ebp + 0x10) = eax;
    goto loc_001ED1C1;

loc_001ED2C9: ;
    edx = MEM32(esp + 0x10);

loc_001ED2CD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED2EB; /* je: equal / zero */

loc_001ED2D1: ;
    eax = MEM32(ebp + 0x10);

loc_001ED2D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED2E4; /* jle: less or equal (signed <=) */

loc_001ED2D9: ;
    MEM8(ebx) = 0x2A;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx) = 0;
    if ((_fa != 0)) goto loc_001ED2D4; /* jne: not equal / not zero */

loc_001ED2E4: ;
    MEM32(ebp + 0x10) = eax;

loc_001ED2E7: ;
    MEM32(esp + 0x10) = edx;

loc_001ED2EB: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED185; /* jne: not equal / not zero */

loc_001ED2F4: ;
    MEM8(ebx) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001ED2FE: ;
    ecx = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx) = 0;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED310
 * Original: 0x001ED310 - 0x001ED61B (779 bytes, 304 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    PUSH32(esp, edi);
    eax = esi + 1;
    if (CMP_NE(_fa, _fb)) goto loc_001ED32C; /* jne: not equal / not zero */

loc_001ED32A: ;
    eax = esi;

loc_001ED32C: ;
    PUSH32(esp, 0x3EEB60);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED337u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001ED337: ;
    ebx = MEM32(ebp + 0x10);
    ecx = eax;
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_001ED5D9; /* je: equal / zero */

loc_001ED34B: ;
    SET_LO8(eax, MEM8(ecx + 2));
    edi = ecx;
    ecx = ecx + 2;
    edi = edi - esi;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x51) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x51 (8-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001ED495; /* jne: not equal / not zero */

loc_001ED361: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 1);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED495; /* jl: less (signed <) */

loc_001ED372: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001ED495; /* jg: greater (signed >) */

loc_001ED37B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001ED495; /* je: equal / zero */

loc_001ED388: ;
    MEM32(esp + 0x18) = eax;
    goto loc_001ED392;

loc_001ED38E: ;
    ecx = MEM32(esp + 0x14);

loc_001ED392: ;
    SET_LO8(eax, MEM8(ecx));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED3B9; /* jl: less (signed <) */

loc_001ED39A: ;
    /* nop */

loc_001ED3A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001ED3B5; /* jg: greater (signed >) */

loc_001ED3A4: ;
    eax = SX8(LO8(eax));
    edx = edi + edi * 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax + edx * 2 + -48;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001ED3A0; /* jge: greater or equal (signed >=) */

loc_001ED3B5: ;
    MEM32(esp + 0x14) = ecx;

loc_001ED3B9: ;
    eax = MEM32(ebp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001ED3C5; /* jle: less or equal (signed <=) */

loc_001ED3C3: ;
    esi = eax;

loc_001ED3C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED3CDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001ED3CD: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, ebx);
    MEM8(esi + ebx) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED3D9u); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_001ED3D9: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED45A; /* je: equal / zero */

loc_001ED3E0: ;
    esi = esi - eax;
    ecx = esi + ebx + 1;
    edx = ecx;
    ecx = ecx >> 2;
    esi = eax + 1;
    edi = esp + 0x20;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    eax = eax - ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFE (32-bit) */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED40A; /* jle: less or equal (signed <=) */

loc_001ED405: ;
    eax = 0xFE;

loc_001ED40A: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED413; /* jle: less or equal (signed <=) */

loc_001ED411: ;
    eax = esi;

loc_001ED413: ;
    esi = esi - eax;
    ebx = ebx + eax;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(ebx) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED426u); RECOMP_ABI_CALL(0x001ED160u, sub_001ED160); /* call 0x001ED160 */

loc_001ED426: ;
    eax = ebx;
    esp = esp + 0xC;
    edx = eax + 1;
    edi = edi;

loc_001ED430: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED430; /* jne: not equal / not zero */

loc_001ED437: ;
    eax = eax - edx;
    esi = esi - eax;
    ebx = ebx + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    MEM32(ebp + 0x14) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001ED46E; /* jle: less or equal (signed <=) */

loc_001ED445: ;
    MEM8(ebx) = 0x3E;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001ED46E; /* jle: less or equal (signed <=) */

loc_001ED454: ;
    MEM8(ebx) = LO8(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_001ED46B;

loc_001ED45A: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x14);
    ecx = ecx + edi;
    ebx = ebx + esi;
    MEM32(esp + 0x14) = ecx;
    eax = eax - esi;

loc_001ED46B: ;
    MEM32(ebp + 0x14) = eax;

loc_001ED46E: ;
    ecx = MEM32(ebp + 0x14);
    eax = 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED487; /* jle: less or equal (signed <=) */

loc_001ED47A: ;
    MEM8(ebx) = 0x3A;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx) = 0x3A;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx - eax;
    MEM32(ebp + 0x14) = ecx;

loc_001ED487: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001ED38E; /* jne: not equal / not zero */

loc_001ED491: ;
    edi = MEM32(esp + 0x10);

loc_001ED495: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3EEB60);
    PUSH32(esp, ecx);
    MEM8(ebx) = 0;
    esi = ebx + -1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED4ABu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001ED4AB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED590; /* jne: not equal / not zero */

loc_001ED4B6: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001ED4CA; /* jbe: below or equal (unsigned <=) */

loc_001ED4BE: ;
    edi = edi;

loc_001ED4C0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED4CA; /* jne: not equal / not zero */

loc_001ED4C5: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001ED4C0; /* ja: above (unsigned >) */

loc_001ED4CA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001ED4D2; /* je: equal / zero */

loc_001ED4D1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ED4D2: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001ED4EA; /* jbe: below or equal (unsigned <=) */

loc_001ED4DA: ;
    /* nop */

loc_001ED4E0: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x3A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED4EF; /* je: equal / zero */

loc_001ED4E5: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001ED4E0; /* ja: above (unsigned >) */

loc_001ED4EA: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001ED4F0; /* jne: not equal / not zero */

loc_001ED4EF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001ED4F0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3ED494);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED503u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001ED503: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED511; /* jne: not equal / not zero */

loc_001ED50A: ;
    esi = esi - edi;
    goto loc_001ED5CB;

loc_001ED511: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3ED48C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED524u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001ED524: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED54B; /* jne: not equal / not zero */

loc_001ED52B: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001ED537; /* jle: less or equal (signed <=) */

loc_001ED532: ;
    MEM8(ebx) = 0x7E;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001ED537: ;
    esi = esi - edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED5D5; /* jle: less or equal (signed <=) */

loc_001ED542: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_001ED5FA;

loc_001ED54B: ;
    eax = MEM32(0x46A3F8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED58C; /* je: equal / zero */

loc_001ED556: ;
    eax = 0x46A3F8;
    esi = eax;
    /* nop */

loc_001ED560: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED571u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001ED571: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED57F; /* jne: not equal / not zero */

loc_001ED578: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED5AF; /* jne: not equal / not zero */

loc_001ED57F: ;
    ecx = MEM32(esi + 8);
    esi = esi + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001ED560; /* jne: not equal / not zero */

loc_001ED58C: ;
    edi = MEM32(esp + 0x10);

loc_001ED590: ;
    eax = MEM32(ebp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED59E; /* jle: less or equal (signed <=) */

loc_001ED598: ;
    MEM32(esp + 0x10) = eax;
    edi = eax;

loc_001ED59E: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED5A9u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001ED5A9: ;
    MEM8(edi + ebx) = 0;
    goto loc_001ED604;

loc_001ED5AF: ;
    edi = MEM32(edi * 8 + 0x46A3FC);
    eax = edi;
    edx = eax + 1;
    goto loc_001ED5C0;

    /* nop */

loc_001ED5C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED5C0; /* jne: not equal / not zero */

loc_001ED5C7: ;
    eax = eax - edx;
    esi = eax;

loc_001ED5CB: ;
    eax = MEM32(ebp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED5D5; /* jle: less or equal (signed <=) */

loc_001ED5D3: ;
    esi = eax;

loc_001ED5D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_001ED5FA;

loc_001ED5D9: ;
    eax = esi;
    edx = eax + 1;
    edi = edi;

loc_001ED5E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED5E0; /* jne: not equal / not zero */

loc_001ED5E7: ;
    eax = eax - edx;
    esi = eax;
    eax = MEM32(ebp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001ED5F5; /* jle: less or equal (signed <=) */

loc_001ED5F3: ;
    esi = eax;

loc_001ED5F5: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);

loc_001ED5FA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001ED600u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001ED600: ;
    MEM8(esi + ebx) = 0;

loc_001ED604: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(ebp + 8);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001ED620
 * Original: 0x001ED620 - 0x001ED6A7 (135 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001ED620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED620: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(ebx) = 0;
    ebp = 0; /* xor self */
    goto loc_001ED630;

    /* nop */

loc_001ED630: ;
    eax = MEM32(esp + 0x10);
    edx = 1;
    ecx = ebp;
    edx = edx << LO8(ecx);
    edx = edx & eax;
    if ((edx == 0)) goto loc_001ED69B; /* je: equal / zero */

loc_001ED641: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED69B; /* je: equal / zero */

loc_001ED64C: ;
    /* nop */

loc_001ED650: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED660; /* je: equal / zero */

loc_001ED654: ;
    ecx = MEM32(eax + 0xC);
    eax = eax + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED650; /* jne: not equal / not zero */

loc_001ED65E: ;
    goto loc_001ED69B;

loc_001ED660: ;
    edi = MEM32(eax + 4);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001ED69B; /* je: equal / zero */

loc_001ED668: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    esi = 0x3C806C;
    if (CMP_NE(_fa, _fb)) goto loc_001ED677; /* jne: not equal / not zero */

loc_001ED672: ;
    esi = 0x3D4FAC;

loc_001ED677: ;
    eax = ebx;
    edx = eax + 1;
    /* nop */

loc_001ED680: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED680; /* jne: not equal / not zero */

loc_001ED687: ;
    PUSH32(esp, edi);
    eax = eax - edx;
    PUSH32(esp, esi);
    eax = eax + ebx;
    PUSH32(esp, 0x3C97F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001ED698u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001ED698: ;
    esp = esp + 0x10;

loc_001ED69B: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001ED630; /* jl: less (signed <) */

loc_001ED6A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED6B0
 * Original: 0x001ED6B0 - 0x001ED6C5 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED6B0: ;
    eax = MEM32(ecx + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ED6C4; /* je: equal / zero */

loc_001ED6B7: ;
    MEM32(ecx + 0x84) = eax;
    MEM8(ecx + 0x88) = 1;

loc_001ED6C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ED6D0
 * Original: 0x001ED6D0 - 0x001ED6DA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED6D0(void)
{

loc_001ED6D0: ;
    eax = MEM32(ecx + 0x74);
    MEM32(ecx + 0x84) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001ED6E0
 * Original: 0x001ED6E0 - 0x001ED6F1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED6E0(void)
{

loc_001ED6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001ED6E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ED6E8: ;
    MEM8(esi + 0x88) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED700
 * Original: 0x001ED700 - 0x001ED707 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED700(void)
{

loc_001ED700: ;
    SET_LO8(eax, MEM8(ecx + 0x88));
    esp += 4; return; /* ret */

}

/**
 * sub_001ED710
 * Original: 0x001ED710 - 0x001ED746 (54 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED710: ;
    SET_LO8(eax, MEM8(ecx + 0x88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED737; /* jne: not equal / not zero */

loc_001ED71A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x78) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x7C) = edx;
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_001ED737: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ED750
 * Original: 0x001ED750 - 0x001ED757 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED750(void)
{

loc_001ED750: ;
    eax = MEM32(ecx + 0x78);
    edx = MEM32(ecx + 0x7C);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED760
 * Original: 0x001ED760 - 0x001ED778 (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED760(void)
{

loc_001ED760: ;
    SET_LO16(eax, MEM16(esp + 8));
    MEM16(ecx + 0x70) = LO16(eax);
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ED780
 * Original: 0x001ED780 - 0x001ED7C7 (71 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ED780: ;
    SET_LO8(eax, MEM8(ecx + 0x88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED7B8; /* jne: not equal / not zero */

loc_001ED78A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x74) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x78) = edx;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x89) = LO8(edx);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 24; return; /* ret 20 */

loc_001ED7B8: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001ED7D0
 * Original: 0x001ED7D0 - 0x001ED7D4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED7D0(void)
{

loc_001ED7D0: ;
    eax = MEM32(ecx + 0x74);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED7E0
 * Original: 0x001ED7E0 - 0x001ED7F4 (20 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED7E0(void)
{
    int _cf = 0; /* carry flag */

loc_001ED7E0: ;
    eax = MEM32(ecx + 0x84);
    ecx = MEM32(ecx + 0x74);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED800
 * Original: 0x001ED800 - 0x001ED809 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED800(void)
{

loc_001ED800: ;
    eax = MEM32(ecx + 0x84);
    edx = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001ED810
 * Original: 0x001ED810 - 0x001ED82E (30 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED810(void)
{
    int _cf = 0; /* carry flag */

loc_001ED810: ;
    eax = MEM32(ecx + 0x74);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x84);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    esi = MEM32(ecx + 0x7C);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x78))) >> 32) & 1);
    eax = eax + MEM32(ecx + 0x78);
    POP32(esp, edi);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(esi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED830
 * Original: 0x001ED830 - 0x001ED8A2 (114 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED830: ;
    SET_LO8(eax, MEM8(ecx + 0x88));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001ED844; /* je: equal / zero */

loc_001ED83A: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED847; /* jne: not equal / not zero */

loc_001ED844: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001ED847: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x84);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ecx + 0x70));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ebp = MEM32(ecx + 0x78);
    esi = edi;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    esi = esi & edi;
    edi = MEM32(ecx + 0x74);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebp)) >> 32) & 1);
    edi = edi + ebp;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ecx + 0x7C)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    eax = ebx + esi;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001ED88D; /* jg: greater (signed >) */

loc_001ED87C: ;
    if (CMP_L(_fas, _fbs)) goto loc_001ED886; /* jl: less (signed <) */

loc_001ED87E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x80) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001ED88D; /* jae: above or equal (unsigned >=) */

loc_001ED886: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001ED88D: ;
    edx = MEM32(ecx + 0x80);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(esi)) >> 32) & 1);
    ebx = ebx + esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x84) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001ED8B0
 * Original: 0x001ED8B0 - 0x001ED90C (92 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ED8B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001ED8BF; /* jne: not equal / not zero */

loc_001ED8BA: ;
    ebx = 1;

loc_001ED8BF: ;
    esi = ZX16(MEM16(ecx + 0x70));
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x84);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = esi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    esi = MEM32(ecx + 0x74);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    edi = MEM32(ecx + 0x78);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ecx + 0x7C)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_001ED8FE; /* jg: greater (signed >) */

loc_001ED8F1: ;
    if (CMP_L(_fas, _fbs)) goto loc_001ED8F7; /* jl: less (signed <) */

loc_001ED8F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001ED8FE; /* jae: above or equal (unsigned >=) */

loc_001ED8F7: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001ED8FE: ;
    edx = eax + ebx;
    POP32(esp, esi);
    MEM32(ecx + 0x84) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ED910
 * Original: 0x001ED910 - 0x001ED97C (108 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ED910: ;
    eax = MEM32(esp + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001ED921; /* ja: above (unsigned >) */

loc_001ED91F: ;
    eax = edx;

loc_001ED921: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001ED930; /* jne: not equal / not zero */

loc_001ED92B: ;
    ebx = 1;

loc_001ED930: ;
    esi = ZX16(LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x84);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = esi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    esi = MEM32(ecx + 0x74);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    edi = MEM32(ecx + 0x78);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ecx + 0x7C)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_001ED96E; /* jg: greater (signed >) */

loc_001ED961: ;
    if (CMP_L(_fas, _fbs)) goto loc_001ED967; /* jl: less (signed <) */

loc_001ED963: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001ED96E; /* jae: above or equal (unsigned >=) */

loc_001ED967: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001ED96E: ;
    edx = eax + ebx;
    POP32(esp, esi);
    MEM32(ecx + 0x84) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ED980
 * Original: 0x001ED980 - 0x001EDA0F (143 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED980(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ED980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001ED999; /* je: equal / zero */

loc_001ED990: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001ED99E; /* jne: not equal / not zero */

loc_001ED994: ;
    ebp = 1;

loc_001ED999: ;
    edi = 1;

loc_001ED99E: ;
    esi = ZX16(MEM16(ecx + 0x70));
    edi = (uint32_t)((int32_t)edi * (int32_t)ebp);
    ebx = MEM32(ecx + 0x84);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    ebp = MEM32(ecx + 0x78);
    eax = edx;
    edx = esi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    esi = MEM32(ecx + 0x74);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebp)) >> 32) & 1);
    esi = esi + ebp;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x7C)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001ED9E2; /* jg: greater (signed >) */

loc_001ED9D3: ;
    if (CMP_L(_fas, _fbs)) goto loc_001ED9D9; /* jl: less (signed <) */

loc_001ED9D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001ED9E2; /* jae: above or equal (unsigned >=) */

loc_001ED9D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001ED9E2: ;
    eax = MEM32(ecx + 0x84);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    MEM32(ecx + 0x84) = eax;
    ecx = edi;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EDA10
 * Original: 0x001EDA10 - 0x001EDA99 (137 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EDA10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0xC));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001EDA25; /* jne: not equal / not zero */

loc_001EDA20: ;
    ebx = 1;

loc_001EDA25: ;
    eax = MEM32(esp + 0x18);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001EDA36; /* ja: above (unsigned >) */

loc_001EDA34: ;
    eax = edx;

loc_001EDA36: ;
    edi = MEM32(ecx + 0x84);
    esi = ZX16(LO16(eax));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = esi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(ecx + 0x74);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    esi = edi + eax;
    edi = MEM32(ecx + 0x78);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x7C)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001EDA74; /* jg: greater (signed >) */

loc_001EDA66: ;
    if (CMP_L(_fas, _fbs)) goto loc_001EDA6C; /* jl: less (signed <) */

loc_001EDA68: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001EDA74; /* jae: above or equal (unsigned >=) */

loc_001EDA6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001EDA74: ;
    eax = esi + ebx;
    MEM32(ecx + 0x84) = eax;
    ecx = ebx;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EDAA0
 * Original: 0x001EDAA0 - 0x001EDABD (29 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EDAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDAA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDAB8; /* jne: not equal / not zero */

loc_001EDAA8: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001EDAB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EDAB5: ;
    esp += 12; return; /* ret 8 */

loc_001EDAB8: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EDAC0
 * Original: 0x001EDAC0 - 0x001EDAE2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EDAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDAC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDADD; /* jne: not equal / not zero */

loc_001EDAC8: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001EDADAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EDADA: ;
    esp += 16; return; /* ret 12 */

loc_001EDADD: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EDAF0
 * Original: 0x001EDAF0 - 0x001EDB69 (121 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDAF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDAF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x84);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x1C), LO16(ebx) (16-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001EDB37; /* jbe: below or equal (unsigned <=) */

loc_001EDB0A: ;
    ebp = MEM32(esp + 0x24);
    edi = edi;

loc_001EDB10: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(edi);
    esi = ZX16(LO16(ebx));
    esi = esi << 2;
    ecx = MEM32(esi + eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001EDB28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EDB28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + ebp) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001EDB4B; /* je: equal / zero */

loc_001EDB2F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esp + 0x1C) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EDB10; /* jb: below (unsigned <) */

loc_001EDB37: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_001EDB4B: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    MEM32(edi + 0x84) = edx;
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EDB70
 * Original: 0x001EDB70 - 0x001EDBF2 (130 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDB70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDB70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x84);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x1C), LO16(ebx) (16-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_001EDBC0; /* jbe: below or equal (unsigned <=) */

loc_001EDB8A: ;
    ebp = MEM32(esp + 0x28);
    edi = edi;

loc_001EDB90: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(edi);
    esi = ZX16(LO16(ebx));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp + esi * 2));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ecx + esi * 4);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001EDBADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EDBAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 0x24);
    MEM32(ecx + esi * 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001EDBD4; /* je: equal / zero */

loc_001EDBB8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 0x1C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esp + 0x1C) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EDB90; /* jb: below (unsigned <) */

loc_001EDBC0: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_001EDBD4: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    MEM32(edi + 0x84) = edx;
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001EDC00
 * Original: 0x001EDC00 - 0x001EDC07 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDC00(void)
{

loc_001EDC00: ;
    eax = MEM32(ecx + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_001EDC10
 * Original: 0x001EDC10 - 0x001EDC1D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDC10(void)
{

loc_001EDC10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x8C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EDC20
 * Original: 0x001EDC20 - 0x001EDD32 (274 bytes, 90 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EDC20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EDC20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0x74);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EDD2F; /* je: equal / zero */

loc_001EDC2F: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esi + 0x70));
    PUSH32(esp, edi);
    edi = ZX16(LO16(ebx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001EDC48; /* jbe: below or equal (unsigned <=) */

loc_001EDC42: ;
    MEM32(esi + 0x80) = edi;

loc_001EDC48: ;
    ecx = MEM32(esi + 0x80);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EDC62; /* je: equal / zero */

loc_001EDC58: ;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    MEM32(esi + 0x80) = ecx;

loc_001EDC62: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EDD2D; /* je: equal / zero */

loc_001EDC70: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001EDC82; /* je: equal / zero */

loc_001EDC76: ;
    eax = ebp;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    MEM32(esi + 0x84) = edx;

loc_001EDC82: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EDC94; /* je: equal / zero */

loc_001EDC8C: ;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    MEM32(esi + 0x84) = edi;

loc_001EDC94: ;
    eax = MEM32(esi + 0x84);
    edi = MEM32(esi + 0x78);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EDCAFu); RECOMP_ABI_CALL(0x003436B0u, sub_003436B0); /* call 0x003436B0 */

loc_001EDCAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 0x88) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001EDD2D; /* je: equal / zero */

loc_001EDCB9: ;
    ecx = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_001EDCCE; /* jne: not equal / not zero */

loc_001EDCC8: ;
    edx = MEM32(0x5BC538);

loc_001EDCCE: ;
    edx = MEM32(edx);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((1) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(ecx);
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001EDCE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EDCE2: ;
    ecx = MEM32(esi + 0x88);
    MEM32(esi + 0x8C) = eax;
    if (3) _cf = (int)(((ecx) >> ((3) - 1)) & 1);
    ecx = ecx >> 3;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EDD19; /* je: equal / zero */

loc_001EDCF6: ;
    goto loc_001EDD00;

    /* nop */
    /* nop */

loc_001EDD00: ;
    edx = MEM32(esi + 0x8C);
    MEM8(eax + edx) = 0;
    ecx = MEM32(esi + 0x88);
    if (3) _cf = (int)(((ecx) >> ((3) - 1)) & 1);
    ecx = ecx >> 3;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001EDD00; /* jb: below (unsigned <) */

loc_001EDD19: ;
    edx = MEM32(esi + 0x88);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x90) = edx;
    MEM8(esi + 0x94) = 1;

loc_001EDD2D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001EDD2F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EDD40
 * Original: 0x001EDD40 - 0x001EDD6A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDD40: ;
    edx = MEM32(ecx + 0x88);
    edx = edx >> 3;
    eax = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EDD69; /* je: equal / zero */

loc_001EDD4E: ;
    edi = edi;

loc_001EDD50: ;
    edx = MEM32(ecx + 0x8C);
    MEM8(eax + edx) = 0;
    edx = MEM32(ecx + 0x88);
    edx = edx >> 3;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EDD50; /* jb: below (unsigned <) */

loc_001EDD69: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EDD70
 * Original: 0x001EDD70 - 0x001EDD77 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDD70(void)
{

loc_001EDD70: ;
    SET_LO8(eax, MEM8(ecx + 0x94));
    esp += 4; return; /* ret */

}

/**
 * sub_001EDD80
 * Original: 0x001EDD80 - 0x001EDDB6 (54 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDD80: ;
    SET_LO8(eax, MEM8(ecx + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDDA7; /* jne: not equal / not zero */

loc_001EDD8A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x78) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x7C) = edx;
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_001EDDA7: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EDDC0
 * Original: 0x001EDDC0 - 0x001EDDF1 (49 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDDC0: ;
    SET_LO8(eax, MEM8(ecx + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDDE2; /* jne: not equal / not zero */

loc_001EDDCA: ;
    SET_LO16(eax, MEM16(esp + 8));
    MEM16(ecx + 0x70) = LO16(eax);
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_001EDDE2: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EDE00
 * Original: 0x001EDE00 - 0x001EDE32 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDE00: ;
    SET_LO8(eax, MEM8(ecx + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDE23; /* jne: not equal / not zero */

loc_001EDE0A: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x80) = eax;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_001EDE23: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EDE40
 * Original: 0x001EDE40 - 0x001EDE87 (71 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDE40: ;
    SET_LO8(eax, MEM8(ecx + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDE78; /* jne: not equal / not zero */

loc_001EDE4A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x74) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x78) = edx;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x95) = LO8(edx);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 24; return; /* ret 20 */

loc_001EDE78: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001EDE90
 * Original: 0x001EDE90 - 0x001EDF1F (143 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EDE90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDE90: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x94));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDEA7; /* jne: not equal / not zero */

loc_001EDEA0: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001EDEA7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x88);
    edi = edi >> 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EDED7; /* jbe: below or equal (unsigned <=) */

loc_001EDEB8: ;
    ebx = MEM32(ebp + 0x8C);
    edi = edi;

loc_001EDEC0: ;
    SET_LO8(ecx, MEM8(ebx + edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EDED2; /* je: equal / zero */

loc_001EDEC7: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDEC7; /* jne: not equal / not zero */

loc_001EDED2: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EDEC0; /* jb: below (unsigned <) */

loc_001EDED7: ;
    ecx = MEM32(ebp + 0x88);
    eax = MEM32(ebp + 0x8C);
    edx = ecx;
    ecx = ecx & 7;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    edx = edx >> 3;
    SET_LO8(ecx, MEM8(edx + eax));
    POP32(esp, edi);
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    POP32(esp, ebx);
    if ((LO8(ecx) == 0)) goto loc_001EDF0B; /* je: equal / zero */

loc_001EDEFA: ;
    /* nop */

loc_001EDF00: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDF00; /* jne: not equal / not zero */

loc_001EDF0B: ;
    eax = MEM32(ebp + 0x88);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x80));
    POP32(esp, esi);
    edx = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EDF20
 * Original: 0x001EDF20 - 0x001EDFA9 (137 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EDF20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDF20: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x94));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDF37; /* jne: not equal / not zero */

loc_001EDF30: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001EDF37: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x88);
    edi = edi >> 3;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EDF67; /* jbe: below or equal (unsigned <=) */

loc_001EDF48: ;
    edx = MEM32(ebp + 0x8C);
    edi = edi;

loc_001EDF50: ;
    SET_LO8(eax, MEM8(edx + ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EDF62; /* je: equal / zero */

loc_001EDF57: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDF57; /* jne: not equal / not zero */

loc_001EDF62: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EDF50; /* jb: below (unsigned <) */

loc_001EDF67: ;
    ecx = MEM32(ebp + 0x88);
    edx = MEM32(ebp + 0x8C);
    eax = ecx;
    ecx = ecx & 7;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    eax = eax >> 3;
    SET_LO8(eax, MEM8(eax + edx));
    POP32(esp, edi);
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    POP32(esp, ebx);
    if ((LO8(eax) == 0)) goto loc_001EDF9B; /* je: equal / zero */

loc_001EDF8A: ;
    /* nop */

loc_001EDF90: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDF90; /* jne: not equal / not zero */

loc_001EDF9B: ;
    eax = MEM32(ebp + 0x80);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    POP32(esp, esi);
    edx = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EDFB0
 * Original: 0x001EDFB0 - 0x001EDFB8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDFB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EDFB0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xB0)); return; /* indirect tail jmp */

}

/**
 * sub_001EDFC0
 * Original: 0x001EDFC0 - 0x001EE028 (104 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EDFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EDFC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx + 0x88);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    SET_LO8(ecx, 1);
    esi = esi >> 3;

loc_001EDFD2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EDFF8; /* jae: above or equal (unsigned >=) */

loc_001EDFD6: ;
    edi = MEM32(edx + 0x8C);
    SET_LO8(ebx, MEM8(edi + eax));
    SET_LO8(ebx, ~LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EDFE7; /* je: equal / zero */

loc_001EDFE5: ;
    SET_LO8(ecx, 0); /* xor self */

loc_001EDFE7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EDFD2; /* jne: not equal / not zero */

loc_001EDFEC: ;
    eax = MEM32(edx + 0x80);
    POP32(esp, edi);
    POP32(esp, esi);
    edx = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001EDFF8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EDFEC; /* je: equal / zero */

loc_001EDFFC: ;
    ecx = MEM32(edx + 0x88);
    esi = MEM32(edx + 0x8C);
    eax = ecx;
    eax = eax >> 3;
    eax = ZX8(MEM8(eax + esi));
    ecx = ecx & 7;
    esi = 1;
    esi = esi << LO8(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax ^ esi;
    if ((eax != 0)) goto loc_001EDFEC; /* jne: not equal / not zero */

loc_001EE020: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE030
 * Original: 0x001EE030 - 0x001EE0BA (138 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE030: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x94));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE041; /* jne: not equal / not zero */

loc_001EE03D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EE041: ;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x90);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x8C);
    edx = ebp;
    PUSH32(esp, ebx);

loc_001EE058: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE05F; /* jne: not equal / not zero */

loc_001EE05D: ;
    edx = 0; /* xor self */

loc_001EE05F: ;
    ecx = edx;
    ecx = ecx & 7;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = edx;
    ecx = ecx >> 3;
    SET_LO8(ecx, MEM8(ecx + edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE082; /* je: equal / zero */

loc_001EE077: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE058; /* jne: not equal / not zero */

loc_001EE07B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EE082: ;
    eax = edx;
    eax = eax >> 3;
    SET_LO8(ebx, MEM8(edi + eax));
    edi = edi + eax;
    ecx = edx;
    ecx = ecx & 7;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    MEM8(edi) = LO8(ebx);
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x74);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    POP32(esp, ebx);
    MEM32(esi + 0x90) = edx;
    edx = MEM32(esi + 0x84);
    POP32(esp, edi);
    eax = eax + edx;
    POP32(esp, ebp);
    eax = eax + ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EE0C0
 * Original: 0x001EE0C0 - 0x001EE0DC (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EE0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE0C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x80) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE0D7; /* ja: above (unsigned >) */

loc_001EE0CC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001EE0D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE0D4: ;
    esp += 8; return; /* ret 4 */

loc_001EE0D7: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE0E0
 * Original: 0x001EE0E0 - 0x001EE231 (337 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE0E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE0E0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x80);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EE101; /* jbe: below or equal (unsigned <=) */

loc_001EE0F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001EE101: ;
    eax = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE112; /* ja: above (unsigned >) */

loc_001EE110: ;
    eax = ecx;

loc_001EE112: ;
    ecx = ZX16(LO16(eax));
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esi + 0x74);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ecx;
    ebx = edx;
    eax = eax + MEM32(esi + 0x84);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x10) = ebx;
    eax = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001EE17A; /* jne: not equal / not zero */

loc_001EE139: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE151; /* jne: not equal / not zero */

loc_001EE13D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001EE147u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE147: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001EE151: ;
    ecx = ecx - eax;
    ebx = ecx;
    ecx = ebx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE1E3; /* ja: above (unsigned >) */

loc_001EE160: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001EE16Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE16A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE1E3; /* je: equal / zero */

loc_001EE16E: ;
    eax = eax + ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001EE17A: ;
    SET_LO8(edx, MEM8(esi + 0x94));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE1E3; /* je: equal / zero */

loc_001EE184: ;
    edi = MEM32(esi + 0x90);
    edx = ecx;
    edx = edx - eax;
    edi = edi;

loc_001EE190: ;
    eax = MEM32(esi + 0x88);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE19D; /* jne: not equal / not zero */

loc_001EE19B: ;
    edi = 0; /* xor self */

loc_001EE19D: ;
    eax = edx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x80) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE1D8; /* ja: above (unsigned >) */

loc_001EE1A8: ;
    ebx = MEM32(esi + 0x8C);
    MEM32(esp + 0x20) = edx;
    ecx = edi;
    ecx = ecx & 7;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = eax >> 3;
    _fa = (uint32_t)(MEM8(eax + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ebx), LO8(edx) (8-bit) */
    edx = MEM32(esp + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_001EE1EF; /* je: equal / zero */

loc_001EE1CC: ;
    ebx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);

loc_001EE1D8: ;
    eax = edx + ebx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE190; /* jne: not equal / not zero */

loc_001EE1E3: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001EE1EF: ;
    eax = MEM32(esi + 0x8C);
    ecx = edi;
    ecx = ecx >> 3;
    ebp = ecx + eax;
    ecx = edi;
    ecx = ecx & 7;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(ebp) = MEM8(ebp) | LO8(eax);
    eax = MEM32(esi + 0x80);
    ebx = MEM32(esi + 0x74);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    MEM32(esi + 0x90) = edi;
    edi = MEM32(esi + 0x84);
    eax = eax + ebx;
    POP32(esp, ebx);
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + edx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EE240
 * Original: 0x001EE240 - 0x001EE28A (74 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE240: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x80) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EE25A; /* jbe: below or equal (unsigned <=) */

loc_001EE254: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EE25A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001EE264u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE264: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE284; /* je: equal / zero */

loc_001EE26A: ;
    ecx = MEM32(esi + 0x80);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_001EE284: ;
    eax = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EE290
 * Original: 0x001EE290 - 0x001EE2D8 (72 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE290: ;
    eax = MEM32(ecx + 0x80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EE2AA; /* jbe: below or equal (unsigned <=) */

loc_001EE2A4: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001EE2AA: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001EE2B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE2B8: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE2D2; /* je: equal / zero */

loc_001EE2BE: ;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_001EE2D2: ;
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EE2E0
 * Original: 0x001EE2E0 - 0x001EE3BA (218 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE2E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE2E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001EE302; /* jne: not equal / not zero */

loc_001EE2EC: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x001EE2FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE2FB: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EE302: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE2FB; /* ja: above (unsigned >) */

loc_001EE30C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE3AA; /* je: equal / zero */

loc_001EE319: ;
    edx = MEM32(esi + 0x84);
    ecx = MEM32(esi + 0x74);
    edi = edi - edx;
    edi = edi - ecx;
    ecx = eax;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, ebp);
    ebp = edx;
    edx = ebx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE343; /* ja: above (unsigned >) */

loc_001EE338: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EE343: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001EE34Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE34E: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001EE3A1; /* je: equal / zero */

loc_001EE358: ;
    eax = MEM32(esi + 0x80);
    eax = eax - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EE366; /* jae: above or equal (unsigned >=) */

loc_001EE364: ;
    eax = ebx;

loc_001EE366: ;
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EE372u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001EE372: ;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x80));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x80)); }
    edx = MEM32(esi + 0x8C);
    esp = esp + 0xC;
    ecx = eax;
    ecx = ecx >> 3;
    edx = edx + ecx;
    ecx = eax;
    ecx = ecx & 7;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(edx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(edx) = LO8(ecx);
    ecx = MEM32(esp + 0x18);

loc_001EE3A1: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EE3AA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001EE3B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE3B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EE3C0
 * Original: 0x001EE3C0 - 0x001EE4F9 (313 bytes, 131 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE3C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE3C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001EE3E2; /* jne: not equal / not zero */

loc_001EE3CC: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x001EE3DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE3DB: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001EE3E2: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EE3F5; /* jbe: below or equal (unsigned <=) */

loc_001EE3ED: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001EE3F5: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE413; /* jne: not equal / not zero */

loc_001EE3FD: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001EE40Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE40D: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001EE413: ;
    eax = MEM32(esi + 0x84);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x74);
    PUSH32(esp, edi);
    edi = ecx;
    edi = edi - eax;
    edi = edi - ebx;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x70));
    _fa = (uint32_t)(MEM16(esp + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x20), LO16(eax) (16-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_A(_fa, _fb)) goto loc_001EE43F; /* ja: above (unsigned >) */

loc_001EE43B: ;
    MEM32(esp + 0x20) = eax;

loc_001EE43F: ;
    ebx = ZX16(MEM16(esp + 0x20));
    edx = 0; /* xor self */
    eax = ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE466; /* jne: not equal / not zero */

loc_001EE44E: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x10);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE466; /* ja: above (unsigned >) */

loc_001EE45C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001EE466: ;
    ecx = ecx - MEM32(esp + 0x10);
    edx = 0; /* xor self */
    eax = ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE478; /* je: equal / zero */

loc_001EE474: ;
    ebx = ebx - edx;
    goto loc_001EE47A;

loc_001EE478: ;
    ebx = 0; /* xor self */

loc_001EE47A: ;
    eax = MEM32(esp + 0x1C);
    edx = ebx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EE4CA; /* jbe: below or equal (unsigned <=) */

loc_001EE485: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001EE495u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE495: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE4EF; /* je: equal / zero */

loc_001EE49B: ;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x80));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x80)); }
    ecx = MEM32(esi + 0x8C);
    edx = eax;
    edx = edx >> 3;
    edi = edx + ecx;
    ecx = eax;
    SET_LO8(eax, MEM8(edi));
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    MEM8(edi) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    goto loc_001EE4CC;

loc_001EE4CA: ;
    ebx = ebx + ecx;

loc_001EE4CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE4EF; /* je: equal / zero */

loc_001EE4D0: ;
    esi = MEM32(esi + 0x80);
    esi = esi - MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EE4E0; /* jae: above or equal (unsigned >=) */

loc_001EE4DE: ;
    esi = eax;

loc_001EE4E0: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x001EE4ECu); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_001EE4EC: ;
    esp = esp + 0xC;

loc_001EE4EF: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EE500
 * Original: 0x001EE500 - 0x001EE61D (285 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX16(MEM16(esp + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EE52A; /* jbe: below or equal (unsigned <=) */

loc_001EE510: ;
    edx = MEM32(esi + 0x80);
    edi = MEM32(esp + 0x18);
    /* nop */

loc_001EE520: ;
    _fa = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4), edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE579; /* ja: above (unsigned >) */

loc_001EE525: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EE520; /* jb: below (unsigned <) */

loc_001EE52A: ;
    eax = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x8C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    goto loc_001EE540;

    /* nop */

loc_001EE540: ;
    ecx = MEM32(esi + 0x88);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE54F; /* jne: not equal / not zero */

loc_001EE54B: ;
    eax = 0; /* xor self */
    edi = 0; /* xor self */

loc_001EE54F: ;
    ecx = eax;
    ecx = ecx & 7;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = eax;
    ecx = ecx >> 3;
    SET_LO8(ecx, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE58B; /* jne: not equal / not zero */

loc_001EE567: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE56D; /* jne: not equal / not zero */

loc_001EE56B: ;
    ebp = eax;

loc_001EE56D: ;
    ecx = ZX16(MEM16(esp + 0x18));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE595; /* je: equal / zero */

loc_001EE577: ;
    goto loc_001EE58D;

loc_001EE579: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001EE58B: ;
    edi = 0; /* xor self */

loc_001EE58D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE540; /* jne: not equal / not zero */

loc_001EE595: ;
    ecx = ZX16(MEM16(esp + 0x18));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE60A; /* jne: not equal / not zero */

loc_001EE59E: ;
    eax = MEM32(esi + 0x80);
    ebx = MEM32(esi + 0x84);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    edi = MEM32(esi + 0x74);
    eax = eax + ebx;
    eax = eax + edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EE5F0; /* jbe: below or equal (unsigned <=) */

loc_001EE5BA: ;
    /* nop */

loc_001EE5C0: ;
    ecx = MEM32(esi + 0x8C);
    edx = ebp;
    edx = edx >> 3;
    edx = edx + ecx;
    ecx = ebp;
    ecx = ecx & 7;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    MEM8(edx) = MEM8(edx) | LO8(ebx);
    edx = MEM32(esp + 0x20);
    ecx = ZX16(MEM16(esp + 0x18));
    MEM32(edx + edi * 4) = eax;
    eax = eax + MEM32(esi + 0x80);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EE5C0; /* jb: below (unsigned <) */

loc_001EE5F0: ;
    eax = MEM32(esp + 0x14);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x90) = ebp;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001EE60A: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x46A728);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EE620
 * Original: 0x001EE620 - 0x001EE7DA (442 bytes, 153 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE620: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX16(MEM16(esp + 0x18));
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EE652; /* jbe: below or equal (unsigned <=) */

loc_001EE633: ;
    edx = MEM32(esi + 0x80);
    /* nop */

loc_001EE640: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4), edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE6DE; /* ja: above (unsigned >) */

loc_001EE64D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EE640; /* jb: below (unsigned <) */

loc_001EE652: ;
    eax = MEM32(esi + 0x84);
    ecx = MEM32(esi + 0x74);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    ecx = ecx + eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x90);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ecx;

loc_001EE670: ;
    eax = MEM32(esi + 0x88);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE67F; /* jne: not equal / not zero */

loc_001EE67B: ;
    ebp = 0; /* xor self */
    edi = 0; /* xor self */

loc_001EE67F: ;
    edx = MEM32(esp + 0x2C);
    SET_LO16(eax, MEM16(esi + 0x70));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edx + edi * 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EE694; /* jbe: below or equal (unsigned <=) */

loc_001EE692: ;
    eax = ecx;

loc_001EE694: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE6B6; /* je: equal / zero */

loc_001EE6A3: ;
    eax = MEM32(esp + 0x24);
    eax = MEM32(eax + edi * 4);
    eax = eax - edx;
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x80) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE707; /* ja: above (unsigned >) */

loc_001EE6B6: ;
    eax = MEM32(esi + 0x8C);
    ecx = ebp;
    ecx = ecx & 7;
    ebx = 1;
    edx = ebp;
    ebx = ebx << LO8(ecx);
    edx = edx >> 3;
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE703; /* jne: not equal / not zero */

loc_001EE6D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE6F3; /* jne: not equal / not zero */

loc_001EE6D6: ;
    ebx = ebp;
    MEM32(esp + 0x10) = ebx;
    goto loc_001EE6F7;

loc_001EE6DE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

loc_001EE6F3: ;
    ebx = MEM32(esp + 0x10);

loc_001EE6F7: ;
    eax = ZX16(MEM16(esp + 0x20));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EE715; /* je: equal / zero */

loc_001EE701: ;
    goto loc_001EE709;

loc_001EE703: ;
    ebx = MEM32(esp + 0x10);

loc_001EE707: ;
    edi = 0; /* xor self */

loc_001EE709: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE670; /* jne: not equal / not zero */

loc_001EE715: ;
    eax = ZX16(MEM16(esp + 0x20));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EE7C4; /* jne: not equal / not zero */

loc_001EE722: ;
    edi = MEM32(esi + 0x80);
    ebp = MEM32(esi + 0x74);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    edx = MEM32(esi + 0x84);
    edi = edi + ebp;
    edi = edi + edx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EE7A7; /* jbe: below or equal (unsigned <=) */

loc_001EE73E: ;
    edi = edi;

loc_001EE740: ;
    edx = MEM32(esi + 0x8C);
    ecx = ebx;
    ecx = ecx >> 3;
    eax = ecx + edx;
    ecx = ebx;
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    MEM8(eax) = MEM8(eax) | LO8(edx);
    eax = MEM32(esp + 0x2C);
    eax = ZX16(MEM16(eax + ebp * 2));
    SET_LO16(ecx, MEM16(esi + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE76C; /* ja: above (unsigned >) */

loc_001EE76A: ;
    eax = ecx;

loc_001EE76C: ;
    ecx = ZX16(LO16(eax));
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EE782; /* jne: not equal / not zero */

loc_001EE779: ;
    edx = MEM32(esp + 0x28);
    MEM32(edx + ebp * 4) = edi;
    goto loc_001EE794;

loc_001EE782: ;
    ecx = MEM32(esp + 0x2C);
    eax = edi;
    eax = eax - edx;
    edx = ecx + eax * 2;
    eax = MEM32(esp + 0x28);
    MEM32(eax + ebp * 4) = edx;

loc_001EE794: ;
    ecx = MEM32(esi + 0x80);
    eax = ZX16(MEM16(esp + 0x20));
    edi = edi + ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EE740; /* jb: below (unsigned <) */

loc_001EE7A7: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, ebp);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x90) = ebx;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

loc_001EE7C4: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(0x46A728);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001EE7E0
 * Original: 0x001EE7E0 - 0x001EE80F (47 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE7E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE7E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EE809; /* jbe: below or equal (unsigned <=) */

loc_001EE7EF: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);

loc_001EE7F4: ;
    ecx = MEM32(ebp + esi * 4);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x001EE803u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE803: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EE7F4; /* jb: below (unsigned <) */

loc_001EE808: ;
    POP32(esp, ebp);

loc_001EE809: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EE810
 * Original: 0x001EE810 - 0x001EE852 (66 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EE810: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE84F; /* je: equal / zero */

loc_001EE818: ;
    eax = eax - MEM32(ecx + 0x84);
    eax = eax - MEM32(ecx + 0x74);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x80));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x80)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x88) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EE84F; /* ja: above (unsigned >) */

loc_001EE831: ;
    ecx = MEM32(ecx + 0x8C);
    edx = eax;
    edx = edx >> 3;
    edx = edx + ecx;
    ecx = eax;
    ecx = ecx & 7;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(edx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    MEM8(edx) = LO8(ecx);

loc_001EE84F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE860
 * Original: 0x001EE860 - 0x001EE8D4 (116 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EE860: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001EE8CC; /* jb: below (unsigned <) */

loc_001EE870: ;
    ecx = MEM32(esi + 0x78);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    edx = edi;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    ecx = MEM32(esi + 0x7C);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001EE8CC; /* ja: above (unsigned >) */

loc_001EE882: ;
    if (CMP_B(_fa, _fb)) goto loc_001EE888; /* jb: below (unsigned <) */

loc_001EE884: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001EE8CC; /* jae: above or equal (unsigned >=) */

loc_001EE888: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x84)));
    eax = eax - MEM32(esi + 0x84);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edi = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x80));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x80)); }
    ebx = MEM32(esi + 0x8C);
    ecx = eax;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    _fa = (uint32_t)(MEM8(edx + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ebx), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EE8CC; /* je: equal / zero */

loc_001EE8B6: ;
    esi = MEM32(esi + 0x80);
    eax = edi;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    esp += 8; return; /* ret 4 */

loc_001EE8CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE8E0
 * Original: 0x001EE8E0 - 0x001EE8ED (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE8E0(void)
{

loc_001EE8E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x98) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EE8F0
 * Original: 0x001EE8F0 - 0x001EE9CD (221 bytes, 81 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE8F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EE8F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001EE911; /* je: equal / zero */

loc_001EE901: ;
    edi = MEM32(ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x98); PUSH32(esp, 0x001EE911u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EE911: ;
    esi = MEM32(esi + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebp = MEM32(0x5BC5D8);
    if (TEST_Z(_fa, _fb)) goto loc_001EE9C0; /* je: equal / zero */

loc_001EE922: ;
    edi = MEM32(ebx + 0x98);
    PUSH32(esp, 0x3EEB94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE933u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001EE933: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE94F; /* je: equal / zero */

loc_001EE93A: ;
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    MEM32(ebx + 0x98) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EE94F: ;
    PUSH32(esp, 0x3EEB84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE95Au); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001EE95A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE979; /* je: equal / zero */

loc_001EE961: ;
    eax = MEM32(esp + 0x14);
    edi = 1;
    MEM32(ebx + 0x98) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EE979: ;
    PUSH32(esp, 0x3EEB74);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE984u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001EE984: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE9A3; /* je: equal / zero */

loc_001EE98B: ;
    eax = MEM32(esp + 0x14);
    edi = 2;
    MEM32(ebx + 0x98) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EE9A3: ;
    PUSH32(esp, 0x3EEB64);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EE9AEu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_001EE9AE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EE9BA; /* je: equal / zero */

loc_001EE9B5: ;
    edi = 3;

loc_001EE9BA: ;
    MEM32(ebx + 0x98) = edi;

loc_001EE9C0: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EE9D0
 * Original: 0x001EE9D0 - 0x001EE9E3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE9D0(void)
{

loc_001EE9D0: ;
    eax = 0; /* xor self */
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM8(ecx + 0x70) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001EE9F0
 * Original: 0x001EE9F0 - 0x001EEA13 (35 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EE9F0(void)
{

loc_001EE9F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x88) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x8C) = edx;
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EEA20
 * Original: 0x001EEA20 - 0x001EEA2D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEA20(void)
{

loc_001EEA20: ;
    eax = MEM32(ecx + 0x88);
    edx = MEM32(ecx + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_001EEA30
 * Original: 0x001EEA30 - 0x001EEA53 (35 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEA30(void)
{

loc_001EEA30: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x80) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x84) = edx;
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EEA60
 * Original: 0x001EEA60 - 0x001EEA7B (27 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEA60(void)
{

loc_001EEA60: ;
    SET_LO16(eax, MEM16(esp + 8));
    MEM16(ecx + 0x90) = LO16(eax);
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EEA80
 * Original: 0x001EEA80 - 0x001EEA88 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEA80(void)
{

loc_001EEA80: ;
    SET_LO16(eax, MEM16(ecx + 0x90));
    esp += 4; return; /* ret */

}

/**
 * sub_001EEA90
 * Original: 0x001EEA90 - 0x001EEAA6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEA90(void)
{

loc_001EEA90: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EEAB0
 * Original: 0x001EEAB0 - 0x001EEAC9 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEAB0(void)
{
    int _cf = 0; /* carry flag */

loc_001EEAB0: ;
    edx = MEM32(ecx + 0x38);
    eax = MEM32(ecx + 0x80);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(ecx + 0x84);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EEAD0
 * Original: 0x001EEAD0 - 0x001EEADD (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEAD0(void)
{

loc_001EEAD0: ;
    edx = MEM32(ecx + 0x7C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001EEADCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEADC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EEAE0
 * Original: 0x001EEAE0 - 0x001EEAFC (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEAE0(void)
{

loc_001EEAE0: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x90));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x001EEAF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEAF9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EEB00
 * Original: 0x001EEB00 - 0x001EEB17 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEB00(void)
{

loc_001EEB00: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x001EEB14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEB14: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EEB20
 * Original: 0x001EEB20 - 0x001EEB81 (97 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEB20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEB20: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x10));
    esi = ecx;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x90));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x001EEB44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEB44: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EEB7A; /* je: equal / zero */

loc_001EEB4A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EEB7A; /* je: equal / zero */

loc_001EEB4E: ;
    esi = MEM32(esi + 0x9C);
    eax = esi;
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EEB66; /* jne: not equal / not zero */

loc_001EEB5C: ;
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EEB7A; /* jne: not equal / not zero */

loc_001EEB66: ;
    ecx = edi;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001EEB7A: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EEB90
 * Original: 0x001EEB90 - 0x001EEBEA (90 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEB90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x001EEBAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEBAF: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EEBE3; /* je: equal / zero */

loc_001EEBB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EEBE3; /* je: equal / zero */

loc_001EEBB9: ;
    edi = MEM32(edi + 0x9C);
    eax = edi;
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EEBD1; /* jne: not equal / not zero */

loc_001EEBC7: ;
    ecx = edi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EEBE3; /* jne: not equal / not zero */

loc_001EEBD1: ;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001EEBE3: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EEBF0
 * Original: 0x001EEBF0 - 0x001EEC0F (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEBF0(void)
{

loc_001EEBF0: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x90));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x001EEC0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEC0C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EEC10
 * Original: 0x001EEC10 - 0x001EEC18 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEC10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEC10: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x188)); return; /* indirect tail jmp */

}

/**
 * sub_001EEC20
 * Original: 0x001EEC20 - 0x001EEC7E (94 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EEC20: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(edx + -4);
    eax = edx + -4;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001EEC3F; /* jne: not equal / not zero */

loc_001EEC3C: ;
    eax = edx + -12;

loc_001EEC3F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x40000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = eax + -6;
    if (TEST_NZ(_fa, _fb)) goto loc_001EEC4D; /* jne: not equal / not zero */

loc_001EEC4A: ;
    esi = eax + -4;

loc_001EEC4D: ;
    eax = ZX16(MEM16(esi + 2));
    edi = MEM32(ecx + 0x50);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    eax = MEM32(ecx + 0x54);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x54) = eax;
    _cf = (int)((uint32_t)(MEM32(ecx + 0x58)) < (uint32_t)(edx));
    MEM32(ecx + 0x58) = MEM32(ecx + 0x58) - edx;
    { uint64_t _t = (uint64_t)(MEM32(ecx + 0x5C)) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 0x5C) = (uint32_t)_t; }  /* sbb */
    eax = MEM32(ecx);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    esi = esi + 0xFFFFFFF8u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ecx + 0x50) = edi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x001EEC79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEC79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EEC80
 * Original: 0x001EEC80 - 0x001EEC8E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEC80(void)
{

loc_001EEC80: ;
    eax = MEM32(0x46A65C);
    MEM32(ecx + 0x9C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EEC90
 * Original: 0x001EEC90 - 0x001EECAC (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEC90(void)
{

loc_001EEC90: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x90));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x188); PUSH32(esp, 0x001EECA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EECA9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EECB0
 * Original: 0x001EECB0 - 0x001EECFF (79 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EECB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EECB0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + -4);
    eax = ecx + -4;
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EECCB; /* jne: not equal / not zero */

loc_001EECC8: ;
    eax = ecx + -12;

loc_001EECCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EECD2; /* jne: not equal / not zero */

loc_001EECCF: ;
    esp += 8; return; /* ret 4 */

loc_001EECD2: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EECE6; /* js: sign (negative) */

loc_001EECD8: ;
    ecx = ecx >> 5;
    ecx = ecx & 0x7FFFF;
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_001EECE6: ;
    eax = MEM32(eax + 8);
    eax = eax & 0xFFF;
    ecx = ecx >> 5;
    eax = eax << 0x13;
    ecx = ecx & 0x7FFFF;
    eax = eax + ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EED00
 * Original: 0x001EED00 - 0x001EED0A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EED00(void)
{

loc_001EED00: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x78) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EED10
 * Original: 0x001EED10 - 0x001EEDB0 (160 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EED10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EED10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x001EED22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EED22: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EED2D; /* jge: greater or equal (signed >=) */

loc_001EED28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EED9F; /* jge: greater or equal (signed >=) */

loc_001EED2D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + -4);
    esi = eax + -4;
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EED48; /* jne: not equal / not zero */

loc_001EED45: ;
    esi = eax + -12;

loc_001EED48: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x001EED52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EED52: ;
    edx = MEM32(esi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ecx = eax;
    ecx = ecx << 0x18;
    ecx = ecx ^ edx;
    ecx = ecx & 0x1F000000;
    edx = edx ^ ecx;
    ecx = edx;
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    MEM32(esi) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001EED8E; /* jne: not equal / not zero */

loc_001EED77: ;
    edi = MEM32(esi + 8);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 0xC;
    eax = eax ^ edi;
    eax = eax & 0xFFF000;
    ecx = edi;
    ecx = ecx ^ eax;
    MEM32(esi + 8) = ecx;

loc_001EED8E: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001EED9F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EEDB0
 * Original: 0x001EEDB0 - 0x001EEDD5 (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEDB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x001EEDBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEDBF: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), 0x40 (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001EEDCB; /* jge: greater or equal (signed >=) */

loc_001EEDC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EEDD0; /* jge: greater or equal (signed >=) */

loc_001EEDCB: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001EEDD0: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EEDE0
 * Original: 0x001EEDE0 - 0x001EEE37 (87 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEDE0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EEE03; /* je: equal / zero */

loc_001EEDE8: ;
    edx = MEM32(ecx + -4);
    eax = ecx + -4;
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEDFF; /* jne: not equal / not zero */

loc_001EEDFC: ;
    eax = ecx + -12;

loc_001EEDFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EEE09; /* jne: not equal / not zero */

loc_001EEE03: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_001EEE09: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EEE1C; /* js: sign (negative) */

loc_001EEE0F: ;
    ecx = ecx >> 0x18;
    ecx = ecx & 0x1F;
    ecx = ecx << 1;
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_001EEE1C: ;
    eax = MEM32(eax + 8);
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    ecx = ecx >> 0x18;
    eax = eax << 5;
    ecx = ecx & 0x1F;
    eax = eax + ecx;
    eax = eax << 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EEE40
 * Original: 0x001EEE40 - 0x001EEF2E (238 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEE40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EEE40: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + -4);
    eax = edx + -4;
    esi = esi & 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80000000u (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001EEE5D; /* jne: not equal / not zero */

loc_001EEE5A: ;
    eax = edx + -12;

loc_001EEE5D: ;
    edi = MEM32(eax);
    edx = edi;
    edx = edx >> 5;
    esi = edi;
    esi = esi & 0x80000000u;
    edx = edx & 0x7FFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EEE88; /* jne: not equal / not zero */

loc_001EEE7A: ;
    esi = MEM32(eax + 8);
    esi = esi & 0xFFF;
    esi = esi << 0x13;
    edx = edx + esi;

loc_001EEE88: ;
    edx = edx + 3;
    esi = edi;
    esi = esi & 0x1E;
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x40000000 (32-bit) */
    esi = edx + esi * 2 + 4;
    if (TEST_Z(_fa, _fb)) goto loc_001EEEE9; /* je: equal / zero */

loc_001EEE9F: ;
    edi = ZX16(MEM16(eax + -2));
    edx = eax;
    edx = edx - edi;
    eax = eax - edx;
    esi = esi + eax;
    eax = MEM32(ecx + 0x9C);
    ecx = eax;
    ecx = ecx >> 5;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    ecx = MEM32(0x5BB9AC);
    if (TEST_Z(_fa, _fb)) goto loc_001EEECD; /* je: equal / zero */

loc_001EEEC1: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x001EEEC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEEC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EEECD: ;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    eax = MEM32(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_001EEEE0; /* je: equal / zero */

loc_001EEED6: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001EEEDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEEDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EEEE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

loc_001EEEE9: ;
    ecx = MEM32(ecx + 0x9C);
    edx = ecx;
    edx = edx >> 5;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EEF0B; /* je: equal / zero */

loc_001EEEF9: ;
    ecx = MEM32(0x5BB9AC);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001EEF06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEF06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EEF0B: ;
    ecx = ecx >> 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    ecx = MEM32(0x5BB9AC);
    edx = MEM32(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_001EEF25; /* je: equal / zero */

loc_001EEF1B: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x001EEF20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEF20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EEF25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_001EEF30
 * Original: 0x001EEF30 - 0x001EEF81 (81 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEF30: ;
    eax = ZX8(MEM8(ecx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001EEF47; /* jne: not equal / not zero */

loc_001EEF41: ;
    edx = MEM32(0x5BC538);

loc_001EEF47: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edi = MEM32(edx + eax * 4);
    esi = ecx + 0x90;
    ebx = 0x20;
    /* nop */

loc_001EEF60: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EEF77; /* je: equal / zero */

loc_001EEF66: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001EEF71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEF71: ;
    MEM32(esi) = 0;

loc_001EEF77: ;
    esi = esi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EEF60; /* jne: not equal / not zero */

loc_001EEF7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EEF90
 * Original: 0x001EEF90 - 0x001EEFB1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEF90(void)
{

loc_001EEF90: ;
    eax = MEM32(0x46A664);
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0x8C) = eax;
    ecx = 0x20;
    eax = 0; /* xor self */
    edi = edx + 0x90;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EEFC0
 * Original: 0x001EEFC0 - 0x001EEFF1 (49 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EEFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EEFC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EEFEE; /* jne: not equal / not zero */

loc_001EEFCB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x001EEFD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEFD3: ;
    _fa = (uint32_t)(MEM8(esi + 0x8C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x8C), 4 (8-bit) */
    MEM8(esi + 0x70) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001EEFEE; /* je: equal / zero */

loc_001EEFE0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001EEFEEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EEFEE: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF000
 * Original: 0x001EF000 - 0x001EF054 (84 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x001EF00Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF00D: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_001EF021; /* jne: not equal / not zero */

loc_001EF01B: ;
    ecx = MEM32(0x5BC538);

loc_001EF021: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edi = MEM32(edx + eax * 4);
    esi = esi + 0x90;
    ebx = 0x20;

loc_001EF033: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF04A; /* je: equal / zero */

loc_001EF039: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001EF044u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF044: ;
    MEM32(esi) = 0;

loc_001EF04A: ;
    esi = esi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EF033; /* jne: not equal / not zero */

loc_001EF050: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF060
 * Original: 0x001EF060 - 0x001EF07D (29 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF060(void)
{

loc_001EF060: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x78) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x7C) = edx;
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EF080
 * Original: 0x001EF080 - 0x001EF085 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF080(void)
{

loc_001EF080: ;
    SET_LO16(eax, 0x1000);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF090
 * Original: 0x001EF090 - 0x001EF09F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF090(void)
{

loc_001EF090: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF0A0
 * Original: 0x001EF0A0 - 0x001EF0B3 (19 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF0A0(void)
{
    int _cf = 0; /* carry flag */

loc_001EF0A0: ;
    edx = MEM32(ecx + 0x38);
    eax = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(ecx + 0x7C);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF0C0
 * Original: 0x001EF0C0 - 0x001EF0D4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF0C0(void)
{

loc_001EF0C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x001EF0D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF0D1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF0E0
 * Original: 0x001EF0E0 - 0x001EF0F7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF0E0(void)
{

loc_001EF0E0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x001EF0F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF0F4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF100
 * Original: 0x001EF100 - 0x001EF153 (83 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF100: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x001EF11Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF11A: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF14C; /* je: equal / zero */

loc_001EF120: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF14C; /* je: equal / zero */

loc_001EF124: ;
    _fa = (uint32_t)(MEM8(edi + 0x8C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x8C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF13A; /* jne: not equal / not zero */

loc_001EF12D: ;
    ecx = MEM32(edi + 0x8C);
    ecx = ecx >> 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF14C; /* jne: not equal / not zero */

loc_001EF13A: ;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001EF14C: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF160
 * Original: 0x001EF160 - 0x001EF1B7 (87 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF160: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x001EF17Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF17F: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF1B0; /* je: equal / zero */

loc_001EF185: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF1B0; /* je: equal / zero */

loc_001EF189: ;
    _fa = (uint32_t)(MEM8(edi + 0x8C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x8C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF19E; /* jne: not equal / not zero */

loc_001EF192: ;
    eax = MEM32(edi + 0x8C);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF1B0; /* jne: not equal / not zero */

loc_001EF19E: ;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001EF1B0: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EF1C0
 * Original: 0x001EF1C0 - 0x001EF1D7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF1C0(void)
{

loc_001EF1C0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x001EF1D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF1D4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF1E0
 * Original: 0x001EF1E0 - 0x001EF1E8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF1E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF1E0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18C)); return; /* indirect tail jmp */

}

/**
 * sub_001EF1F0
 * Original: 0x001EF1F0 - 0x001EF1FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF1F0(void)
{

loc_001EF1F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EF200
 * Original: 0x001EF200 - 0x001EF214 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF200(void)
{

loc_001EF200: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x001EF211u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF211: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF220
 * Original: 0x001EF220 - 0x001EF235 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF220: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x001EF22Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF22D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF240
 * Original: 0x001EF240 - 0x001EF248 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF240: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x198)); return; /* indirect tail jmp */

}

/**
 * sub_001EF250
 * Original: 0x001EF250 - 0x001EF25D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF250(void)
{

loc_001EF250: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x84) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF260
 * Original: 0x001EF260 - 0x001EF2A5 (69 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF260: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x8C);
    ecx = MEM32(0x5BB9AC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = eax >> 3;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001EF284; /* je: equal / zero */

loc_001EF27D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001EF282u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF282: ;
    goto loc_001EF289;

loc_001EF284: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001EF289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF289: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF29D; /* je: equal / zero */

loc_001EF28F: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x001EF29Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF29D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF2B0
 * Original: 0x001EF2B0 - 0x001EF2F6 (70 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF2B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = ecx;
    eax = MEM32(ebx + 0x8C);
    ecx = MEM32(0x5BB9AC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = eax >> 3;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001EF2D9; /* je: equal / zero */

loc_001EF2D2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001EF2D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF2D7: ;
    goto loc_001EF2DE;

loc_001EF2D9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001EF2DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF2DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF2F0; /* je: equal / zero */

loc_001EF2E2: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x001EF2F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF2F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF300
 * Original: 0x001EF300 - 0x001EF366 (102 bytes, 45 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF300: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001EF326; /* je: equal / zero */

loc_001EF316: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EF35D; /* je: equal / zero */

loc_001EF31A: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x194); PUSH32(esp, 0x001EF326u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF326: ;
    ecx = MEM32(edi + 0x8C);
    PUSH32(esp, ebx);
    ecx = ecx >> 3;
    PUSH32(esp, ebp);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    ecx = MEM32(0x5BB9AC);
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001EF344; /* je: equal / zero */

loc_001EF33D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001EF342u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF342: ;
    goto loc_001EF349;

loc_001EF344: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x001EF349u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF349: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF35D; /* je: equal / zero */

loc_001EF34F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x001EF35Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF35D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EF370
 * Original: 0x001EF370 - 0x001EF3B5 (69 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF370: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x8C);
    ecx = MEM32(0x5BB9AC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = eax >> 3;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001EF394; /* je: equal / zero */

loc_001EF38D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001EF392u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF392: ;
    goto loc_001EF399;

loc_001EF394: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x001EF399u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF399: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF3AD; /* je: equal / zero */

loc_001EF39F: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x001EF3ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF3AD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF3C0
 * Original: 0x001EF3C0 - 0x001EF3FD (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF3C0: ;
    eax = MEM32(esp + 4);
    edx = eax;
    edx = edx >> 0x1B;
    edx = MEM32(ecx + edx * 4 + 0x90);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF3D9; /* jne: not equal / not zero */

loc_001EF3D4: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001EF3D9: ;
    eax = eax >> 0xC;
    eax = eax & 0x7FFF;
    ecx = eax;
    ecx = ecx & 0xF;
    PUSH32(esp, esi);
    ecx = ecx << 1;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = eax >> 4;
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF400
 * Original: 0x001EF400 - 0x001EF516 (278 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF400: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = esi;
    ecx = ecx >> 0xC;
    ecx = ecx & 0x7FFF;
    ebx = ecx;
    ecx = ecx & 0xF;
    PUSH32(esp, edi);
    ecx = ecx << 1;
    edi = esi;
    edx = 1;
    edi = edi >> 0x1B;
    eax = MEM32(ebp + edi * 4 + 0x90);
    edx = edx << LO8(ecx);
    ebx = ebx >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001EF471; /* jne: not equal / not zero */

loc_001EF43A: ;
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_001EF44E; /* jne: not equal / not zero */

loc_001EF448: ;
    ecx = MEM32(0x5BC538);

loc_001EF44E: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x800);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x001EF466u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF466: ;
    edx = MEM32(esp + 0x14);
    MEM32(ebp + edi * 4 + 0x90) = eax;

loc_001EF471: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    ecx = MEM32(eax + ebx * 4);
    if (TEST_Z(_fa, _fb)) goto loc_001EF480; /* je: equal / zero */

loc_001EF47C: ;
    ecx = ecx | edx;
    goto loc_001EF484;

loc_001EF480: ;
    edx = ~edx;
    ecx = ecx & edx;

loc_001EF484: ;
    MEM32(eax + ebx * 4) = ecx;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EF490; /* jle: less or equal (signed <=) */

loc_001EF48F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001EF490: ;
    esi = esi + eax;
    edi = esi;
    esi = esi >> 0xC;
    esi = esi & 0x7FFF;
    ecx = esi;
    ebx = esi;
    ecx = ecx & 0xF;
    edi = edi >> 0x1B;
    eax = MEM32(ebp + edi * 4 + 0x90);
    ecx = ecx << 1;
    esi = 2;
    ebx = ebx >> 4;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF4F1; /* jne: not equal / not zero */

loc_001EF4BE: ;
    eax = ZX8(MEM8(ebp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_001EF4D2; /* jne: not equal / not zero */

loc_001EF4CC: ;
    ecx = MEM32(0x5BC538);

loc_001EF4D2: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x800);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x001EF4EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF4EA: ;
    MEM32(ebp + edi * 4 + 0x90) = eax;

loc_001EF4F1: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    ecx = MEM32(eax + ebx * 4);
    if (TEST_Z(_fa, _fb)) goto loc_001EF508; /* je: equal / zero */

loc_001EF4FC: ;
    POP32(esp, edi);
    ecx = ecx | esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + ebx * 4) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001EF508: ;
    esi = ~esi;
    POP32(esp, edi);
    ecx = ecx & esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + ebx * 4) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EF520
 * Original: 0x001EF520 - 0x001EF52F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF520(void)
{

loc_001EF520: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF530
 * Original: 0x001EF530 - 0x001EF53F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF530(void)
{

loc_001EF530: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001EF540
 * Original: 0x001EF540 - 0x001EF58F (79 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF540: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF548u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF548: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF55C; /* je: equal / zero */

loc_001EF54C: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EF55C: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x001EF56Eu); RECOMP_ABI_CALL(0x00300DE0u, sub_00300DE0); /* call 0x00300DE0 */

loc_001EF56E: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 0x14) = 1;
    eax = 0x5BC5D8;
    if (TEST_Z(_fa, _fb)) goto loc_001EF583; /* je: equal / zero */

loc_001EF57E: ;
    eax = 0x46A728;

loc_001EF583: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF590
 * Original: 0x001EF590 - 0x001EF5BF (47 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF590: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF598u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF598: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_001EF5B3; /* jne: not equal / not zero */

loc_001EF5A0: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EF5B3: ;
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF5C0
 * Original: 0x001EF5C0 - 0x001EF5EF (47 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF5C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF5C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF5C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_001EF5E3; /* jne: not equal / not zero */

loc_001EF5D0: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EF5E3: ;
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF5F0
 * Original: 0x001EF5F0 - 0x001EF606 (22 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF5F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF5F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF5F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF601; /* jne: not equal / not zero */

loc_001EF5FC: ;
    eax = MEM32(esi + 0xC);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EF601: ;
    eax = MEM32(esi + 0x1C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF610
 * Original: 0x001EF610 - 0x001EF656 (70 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF610: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF618u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF618: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF62C; /* jne: not equal / not zero */

loc_001EF61C: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EF62C: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EF635u); RECOMP_ABI_CALL(0x00300E30u, sub_00300E30); /* call 0x00300E30 */

loc_001EF635: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 0x14) = 0;
    eax = 0x5BC5D8;
    if (TEST_Z(_fa, _fb)) goto loc_001EF64A; /* je: equal / zero */

loc_001EF645: ;
    eax = 0x46A728;

loc_001EF64A: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF660
 * Original: 0x001EF660 - 0x001EF6B8 (88 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF660: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF668u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF668: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF67C; /* jne: not equal / not zero */

loc_001EF66C: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EF67C: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x001EF68Cu); RECOMP_ABI_CALL(0x00300EE0u, sub_00300EE0); /* call 0x00300EE0 */

loc_001EF68C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF6A7; /* je: equal / zero */

loc_001EF693: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0x46A728;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EF6A7: ;
    eax = 0x5BC5D8;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF6C0
 * Original: 0x001EF6C0 - 0x001EF724 (100 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF6C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF6C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF6DC; /* jne: not equal / not zero */

loc_001EF6CC: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EF6DC: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF6EF; /* je: equal / zero */

loc_001EF6E4: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EF6EDu); RECOMP_ABI_CALL(0x00300EA0u, sub_00300EA0); /* call 0x00300EA0 */

loc_001EF6ED: ;
    goto loc_001EF6F8;

loc_001EF6EF: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF6F8u); RECOMP_ABI_CALL(0x00300E60u, sub_00300E60); /* call 0x00300E60 */

loc_001EF6F8: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF713; /* jne: not equal / not zero */

loc_001EF6FF: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0x5BC5D8;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EF713: ;
    eax = 0x46A728;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF730
 * Original: 0x001EF730 - 0x001EF781 (81 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF730: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF738u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF738: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF74C; /* jne: not equal / not zero */

loc_001EF73C: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EF74C: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EF755u); RECOMP_ABI_CALL(0x00300E60u, sub_00300E60); /* call 0x00300E60 */

loc_001EF755: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF770; /* jne: not equal / not zero */

loc_001EF75C: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0x5BC5D8;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EF770: ;
    eax = 0x46A728;
    ecx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF790
 * Original: 0x001EF790 - 0x001EF7EA (90 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF790: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EF798u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF798: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF7AC; /* jne: not equal / not zero */

loc_001EF79C: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EF7AC: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EF7B5u); RECOMP_ABI_CALL(0x00300E60u, sub_00300E60); /* call 0x00300E60 */

loc_001EF7B5: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF7D7; /* je: equal / zero */

loc_001EF7BC: ;
    /* nop */

loc_001EF7C0: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x001EF7C7u); RECOMP_ABI_CALL(0x0019F583u, sub_0019F583); /* call 0x0019F583 */

loc_001EF7C7: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF7D0u); RECOMP_ABI_CALL(0x00300E60u, sub_00300E60); /* call 0x00300E60 */

loc_001EF7D0: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF7C0; /* jne: not equal / not zero */

loc_001EF7D7: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF7F0
 * Original: 0x001EF7F0 - 0x001EF81B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF7F0(void)
{

loc_001EF7F0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF4240);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EF806u); RECOMP_ABI_CALL(0x003436B0u, sub_003436B0); /* call 0x003436B0 */

loc_001EF806: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF80Cu); RECOMP_ABI_CALL(0x0019F583u, sub_0019F583); /* call 0x0019F583 */

loc_001EF80C: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EF820
 * Original: 0x001EF820 - 0x001EF838 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF820: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EF835; /* jne: not equal / not zero */

loc_001EF827: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 0x38) = eax;
    PUSH32(esp, 0x001EF834u); RECOMP_ABI_CALL(0x00300F10u, sub_00300F10); /* call 0x00300F10 */

loc_001EF834: ;
    POP32(esp, ecx);

loc_001EF835: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF840
 * Original: 0x001EF840 - 0x001EF85E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF840: ;
    PUSH32(esp, 0x001EF845u); RECOMP_ABI_CALL(0x00300F60u, sub_00300F60); /* call 0x00300F60 */

loc_001EF845: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = 0x5BC5D8;
    if (TEST_Z(_fa, _fb)) goto loc_001EF853; /* je: equal / zero */

loc_001EF84E: ;
    eax = 0x46A728;

loc_001EF853: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF860
 * Original: 0x001EF860 - 0x001EF871 (17 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF860(void)
{

loc_001EF860: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x001EF86Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF86B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EF880
 * Original: 0x001EF880 - 0x001EF8AF (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF880: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF893u); RECOMP_ABI_CALL(0x00301030u, sub_00301030); /* call 0x00301030 */

loc_001EF893: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = 0x5BC5D8;
    if (TEST_Z(_fa, _fb)) goto loc_001EF8A4; /* je: equal / zero */

loc_001EF89F: ;
    eax = 0x46A728;

loc_001EF8A4: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF8B0
 * Original: 0x001EF8B0 - 0x001EF8B5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EF8B0: ;
    g_seh_ebp = ebp; sub_003010B0(); return; /* tail jmp 0x003010B0 */

}

/**
 * sub_001EF8C0
 * Original: 0x001EF8C0 - 0x001EF8D4 (20 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8C0(void)
{

loc_001EF8C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    edx = esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001EF8CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF8CD: ;
    PUSH32(esp, 0x001EF8D2u); RECOMP_ABI_CALL(0x003015B0u, sub_003015B0); /* call 0x003015B0 */

loc_001EF8D2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF8E0
 * Original: 0x001EF8E0 - 0x001EF91D (61 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF8E0: ;
    eax = MEM32(0x5BEB88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF91C; /* je: equal / zero */

loc_001EF8E9: ;
    eax = MEM32(0x5BEB8C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EF8F5u); RECOMP_ABI_CALL(0x00301870u, sub_00301870); /* call 0x00301870 */

loc_001EF8F5: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF91B; /* je: equal / zero */

loc_001EF8FE: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EF91B; /* jne: not equal / not zero */

loc_001EF904: ;
    ecx = MEM32(0x5BEB8C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EF912u); RECOMP_ABI_CALL(0x00301880u, sub_00301880); /* call 0x00301880 */

loc_001EF912: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EF918u); RECOMP_ABI_CALL(0x00301700u, sub_00301700); /* call 0x00301700 */

loc_001EF918: ;
    esp = esp + 0xC;

loc_001EF91B: ;
    POP32(esp, esi);

loc_001EF91C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EF920
 * Original: 0x001EF920 - 0x001EF949 (41 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF920: ;
    eax = MEM32(ecx + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EF948; /* je: equal / zero */

loc_001EF927: ;
    edx = MEM32(ecx + 0x78);
    MEM32(ecx + 0x84) = eax;
    eax = edx + eax + -4;
    edx = eax;
    edx = edx & 3;
    eax = eax - edx;
    MEM32(ecx + 0x88) = eax;
    MEM8(ecx + 0x8C) = 1;

loc_001EF948: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EF950
 * Original: 0x001EF950 - 0x001EF96E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF950(void)
{

loc_001EF950: ;
    eax = MEM32(ecx + 0x74);
    edx = MEM32(ecx + 0x78);
    MEM32(ecx + 0x84) = eax;
    eax = edx + eax + -4;
    edx = eax;
    edx = edx & 3;
    eax = eax - edx;
    MEM32(ecx + 0x88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001EF970
 * Original: 0x001EF970 - 0x001EF981 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF970(void)
{

loc_001EF970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001EF978u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EF978: ;
    MEM8(esi + 0x8C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EF990
 * Original: 0x001EF990 - 0x001EF997 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF990(void)
{

loc_001EF990: ;
    SET_LO8(eax, MEM8(ecx + 0x8C));
    esp += 4; return; /* ret */

}

/**
 * sub_001EF9A0
 * Original: 0x001EF9A0 - 0x001EF9A5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF9A0(void)
{

loc_001EF9A0: ;
    SET_LO16(eax, MEM16(ecx + 0x70));
    esp += 4; return; /* ret */

}

/**
 * sub_001EF9B0
 * Original: 0x001EF9B0 - 0x001EF9C9 (25 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF9B0(void)
{

loc_001EF9B0: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x80) = eax;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EF9D0
 * Original: 0x001EF9D0 - 0x001EFA17 (71 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EF9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EF9D0: ;
    SET_LO8(eax, MEM8(ecx + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFA08; /* jne: not equal / not zero */

loc_001EF9DA: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x74) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x78) = edx;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x8D) = LO8(edx);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 24; return; /* ret 20 */

loc_001EFA08: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001EFA20
 * Original: 0x001EFA20 - 0x001EFA6A (74 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EFA20: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x8C));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFA31; /* jne: not equal / not zero */

loc_001EFA2F: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001EFA31: ;
    ebx = MEM32(ecx + 0x74);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x88);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x84);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001EFA66; /* je: equal / zero */

loc_001EFA49: ;
    /* nop */

loc_001EFA50: ;
    ecx = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFFFF;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ecx));
    edi = edi - ecx;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EFA50; /* jne: not equal / not zero */

loc_001EFA66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EFA70
 * Original: 0x001EFA70 - 0x001EFA8B (27 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFA70(void)
{
    int _cf = 0; /* carry flag */

loc_001EFA70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x001EFA7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EFA7B: ;
    ecx = MEM32(esi + 0x78);
    esi = MEM32(esi + 0x7C);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    edx = esi;
    eax = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EFA90
 * Original: 0x001EFA90 - 0x001EFAB3 (35 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EFA90: ;
    eax = MEM32(ecx + 0x88);
    ecx = MEM32(ecx + 0x84);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    POP32(esp, esi);
    if (((int32_t)edx < 0)) goto loc_001EFAAE; /* js: sign (negative) */

loc_001EFAA8: ;
    if (_flags /* jg: greater (signed >) */) goto loc_001EFAB2;

loc_001EFAAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_A(_fa & _fb, 0)) goto loc_001EFAB2; /* ja: above (unsigned >) */

loc_001EFAAE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_001EFAB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EFAC0
 * Original: 0x001EFAC0 - 0x001EFB29 (105 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFAC0: ;
    SET_LO8(eax, MEM8(ecx + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFACD; /* jne: not equal / not zero */

loc_001EFACA: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001EFACD: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFADC; /* jne: not equal / not zero */

loc_001EFAD8: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001EFADC: ;
    eax = ZX16(MEM16(ecx + 0x70));
    edx = MEM32(ecx + 0x84);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + -1;
    ebx = edx;
    ebx = ebx & esi;
    eax = eax - ebx;
    eax = eax & esi;
    esi = edi + eax;
    edi = MEM32(ecx + 0x88);
    ebx = edi;
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EFB0A; /* jge: greater or equal (signed >=) */

loc_001EFB04: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001EFB0A: ;
    eax = eax + edx;
    edx = edx + esi;
    MEM32(ecx + 0x84) = edx;
    MEM32(edi) = esi;
    edx = MEM32(ecx + 0x88);
    POP32(esp, esi);
    edx = edx + 0xFFFFFFFCu;
    POP32(esp, ebx);
    MEM32(ecx + 0x88) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EFB30
 * Original: 0x001EFB30 - 0x001EFB90 (96 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFB30: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFB3F; /* jne: not equal / not zero */

loc_001EFB39: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001EFB3F: ;
    eax = ZX16(MEM16(ecx + 0x70));
    edx = MEM32(ecx + 0x84);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + -1;
    ebx = edx;
    ebx = ebx & esi;
    eax = eax - ebx;
    eax = eax & esi;
    esi = eax + edi;
    edi = MEM32(ecx + 0x88);
    ebx = edi;
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EFB6F; /* jge: greater or equal (signed >=) */

loc_001EFB67: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_001EFB6F: ;
    eax = eax + edx;
    edx = edx + esi;
    MEM32(ecx + 0x84) = edx;
    MEM32(edi) = esi;
    edx = MEM32(ecx + 0x88);
    POP32(esp, esi);
    edx = edx + 0xFFFFFFFCu;
    POP32(esp, ebx);
    MEM32(ecx + 0x88) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EFB90
 * Original: 0x001EFB90 - 0x001EFC09 (121 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EFB90: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFB9E; /* jne: not equal / not zero */

loc_001EFB99: ;
    edi = 1;

loc_001EFB9E: ;
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EFBAF; /* ja: above (unsigned >) */

loc_001EFBAD: ;
    eax = edx;

loc_001EFBAF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFBB9; /* jne: not equal / not zero */

loc_001EFBB3: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001EFBB9: ;
    edx = MEM32(ecx + 0x84);
    PUSH32(esp, ebx);
    eax = ZX16(LO16(eax));
    PUSH32(esp, esi);
    esi = eax + -1;
    ebx = edx;
    ebx = ebx & esi;
    eax = eax - ebx;
    eax = eax & esi;
    esi = eax + edi;
    edi = MEM32(ecx + 0x88);
    ebx = edi;
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EFBE8; /* jge: greater or equal (signed >=) */

loc_001EFBE0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001EFBE8: ;
    eax = eax + edx;
    edx = edx + esi;
    MEM32(ecx + 0x84) = edx;
    MEM32(edi) = esi;
    edx = MEM32(ecx + 0x88);
    POP32(esp, esi);
    edx = edx + 0xFFFFFFFCu;
    POP32(esp, ebx);
    MEM32(ecx + 0x88) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EFC10
 * Original: 0x001EFC10 - 0x001EFC86 (118 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFC10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFC10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x18));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFC26; /* jne: not equal / not zero */

loc_001EFC21: ;
    edi = 1;

loc_001EFC26: ;
    eax = ZX16(MEM16(ecx + 0x70));
    edx = MEM32(ecx + 0x84);
    esi = eax + -1;
    ebx = edx;
    ebx = ebx & esi;
    eax = eax - ebx;
    ebx = MEM32(ecx + 0x88);
    eax = eax & esi;
    ebp = ebx;
    esi = eax + edi;
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EFC55; /* jge: greater or equal (signed >=) */

loc_001EFC4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EFC55: ;
    ebp = edx + eax;
    edx = edx + esi;
    MEM32(ecx + 0x84) = edx;
    MEM32(ebx) = esi;
    MEM32(ecx + 0x88) = MEM32(ecx + 0x88) + 0xFFFFFFFCu;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EFC90
 * Original: 0x001EFC90 - 0x001EFD20 (144 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFC90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFC90: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0xC));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFCA3; /* jne: not equal / not zero */

loc_001EFC9E: ;
    edi = 1;

loc_001EFCA3: ;
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EFCB4; /* ja: above (unsigned >) */

loc_001EFCB2: ;
    eax = edx;

loc_001EFCB4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EFCBE; /* jne: not equal / not zero */

loc_001EFCB8: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_001EFCBE: ;
    edx = MEM32(ecx + 0x84);
    PUSH32(esp, ebx);
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax + -1;
    ebx = edx;
    ebx = ebx & esi;
    eax = eax - ebx;
    ebx = MEM32(ecx + 0x88);
    eax = eax & esi;
    ebp = ebx;
    esi = eax + edi;
    ebp = ebp - edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EFCEF; /* jge: greater or equal (signed >=) */

loc_001EFCE6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_001EFCEF: ;
    ebp = edx + eax;
    edx = edx + esi;
    MEM32(ecx + 0x84) = edx;
    MEM32(ebx) = esi;
    MEM32(ecx + 0x88) = MEM32(ecx + 0x88) + 0xFFFFFFFCu;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    POP32(esp, esi);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EFD20
 * Original: 0x001EFD20 - 0x001EFD90 (112 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFD20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001EFD3F; /* je: equal / zero */

loc_001EFD2E: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001EFD37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EFD37: ;
    edi = eax;
    MEM32(esp + 0x18) = edi;
    goto loc_001EFD4B;

loc_001EFD3F: ;
    MEM32(esp + 0x18) = 0;
    edi = MEM32(esp + 0x18);

loc_001EFD4B: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EFD87; /* je: equal / zero */

loc_001EFD53: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EFD7C; /* je: equal / zero */

loc_001EFD57: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001EFD62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EFD62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EFD68; /* jb: below (unsigned <) */

loc_001EFD66: ;
    eax = esi;

loc_001EFD68: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = ebp;
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
    edi = MEM32(esp + 0x18);

loc_001EFD7C: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001EFD87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EFD87: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EFD90
 * Original: 0x001EFD90 - 0x001EFE07 (119 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFD90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFD90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001EFDB6; /* je: equal / zero */

loc_001EFD9E: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001EFDAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EFDAE: ;
    edi = eax;
    MEM32(esp + 0x18) = edi;
    goto loc_001EFDC2;

loc_001EFDB6: ;
    MEM32(esp + 0x18) = 0;
    edi = MEM32(esp + 0x18);

loc_001EFDC2: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EFDFE; /* je: equal / zero */

loc_001EFDCA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EFDF3; /* je: equal / zero */

loc_001EFDCE: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x001EFDD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EFDD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EFDDF; /* jb: below (unsigned <) */

loc_001EFDDD: ;
    eax = esi;

loc_001EFDDF: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = ebp;
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
    edi = MEM32(esp + 0x18);

loc_001EFDF3: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001EFDFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EFDFE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EFE10
 * Original: 0x001EFE10 - 0x001EFF9F (399 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFE10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFE10: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = ecx;
    ecx = ZX16(MEM16(esp + 0x18));
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EFE32; /* jbe: below or equal (unsigned <=) */

loc_001EFE26: ;
    edi = MEM32(esp + 0x24);
    edx = edx + MEM32(edi + esi * 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EFE26; /* jb: below (unsigned <) */

loc_001EFE32: ;
    edi = ZX16(MEM16(eax + 0x70));
    ebx = MEM32(eax + 0x88);
    ebp = MEM32(eax + 0x84);
    esi = edi + 3;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    edx = edx + esi;
    esi = ebx;
    esi = esi - ebp;
    esi = esi + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EFEC4; /* ja: above (unsigned >) */

loc_001EFE55: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = edi + -1;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EFEA8; /* jbe: below or equal (unsigned <=) */

loc_001EFE5C: ;
    edx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x28);
    edx = edx - esi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x20) = ecx;
    edi = edi;

loc_001EFE70: ;
    edi = MEM32(eax + 0x84);
    ecx = ZX16(MEM16(eax + 0x70));
    edx = edi;
    edx = edx & ebp;
    ecx = ecx - edx;
    edx = MEM32(esp + 0x24);
    edx = MEM32(edx + esi);
    ecx = ecx & ebp;
    edi = edi + ecx;
    edx = edx + ecx;
    MEM32(esi) = edi;
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + edx;
    ecx = MEM32(esp + 0x20);
    MEM32(ebx) = edx;
    ebx = ebx - 4;
    esi = esi + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    if ((_fa != 0)) goto loc_001EFE70; /* jne: not equal / not zero */

loc_001EFEA8: ;
    POP32(esp, edi);
    MEM32(eax + 0x88) = ebx;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

loc_001EFEC4: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = edi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = edi;
    if (CMP_A(_fa, _fb)) goto loc_001EFF7F; /* ja: above (unsigned >) */

loc_001EFEDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = MEM32(eax + 0x84);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x10) = 0;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EFF4F; /* jbe: below or equal (unsigned <=) */

loc_001EFEF2: ;
    edx = MEM32(esp + 0x24);
    edx = edx - ebp;
    MEM32(esp + 0x24) = edx;
    goto loc_001EFF02;

loc_001EFEFE: ;
    edi = MEM32(esp + 0x14);

loc_001EFF02: ;
    esi = MEM32(eax + 0x84);
    edx = ZX16(MEM16(eax + 0x70));
    esi = esi & edi;
    edx = edx - esi;
    esi = MEM32(esp + 0x24);
    esi = MEM32(esi + ebp);
    edx = edx & edi;
    edi = ebx;
    edi = edi - MEM32(esp + 0x20);
    esi = esi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EFF4F; /* jb: below (unsigned <) */

loc_001EFF25: ;
    edi = MEM32(eax + 0x84);
    edi = edi + edx;
    edx = MEM32(esp + 0x20);
    edx = edx + esi;
    MEM32(ebp) = edi;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ebx) = esi;
    ebx = ebx - 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_001EFEFE; /* jb: below (unsigned <) */

loc_001EFF4F: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EFF7B; /* jne: not equal / not zero */

loc_001EFF55: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(eax + 0x88) = ebx;
    MEM32(eax + 0x84) = ecx;
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

loc_001EFF7B: ;
    ebp = MEM32(esp + 0x28);

loc_001EFF7F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EFF89; /* jbe: below or equal (unsigned <=) */

loc_001EFF83: ;
    eax = 0; /* xor self */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001EFF89: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EFFA0
 * Original: 0x001EFFA0 - 0x001F017B (475 bytes, 163 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EFFA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EFFA0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(esp + 0x1C));
    edx = 0; /* xor self */
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EFFE0; /* jbe: below or equal (unsigned <=) */

loc_001EFFB6: ;
    SET_LO16(ebp, MEM16(ecx + 0x70));
    /* nop */

loc_001EFFC0: ;
    edi = MEM32(esp + 0x24);
    edx = edx + MEM32(edi + eax * 4);
    edi = MEM32(esp + 0x2C);
    edi = ZX16(MEM16(edi + eax * 2));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebp) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EFFD6; /* ja: above (unsigned >) */

loc_001EFFD4: ;
    edi = ebp;

loc_001EFFD6: ;
    edi = ZX16(LO16(edi));
    ebx = ebx + edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EFFC0; /* jb: below (unsigned <) */

loc_001EFFE0: ;
    ebp = MEM32(ecx + 0x84);
    ebx = ebx - esi;
    eax = ebx + esi * 4;
    edx = edx + eax;
    eax = MEM32(ecx + 0x88);
    edi = eax;
    edi = edi - ebp;
    edi = edi + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F0092; /* ja: above (unsigned >) */

loc_001F0002: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F0076; /* jbe: below or equal (unsigned <=) */

loc_001F000C: ;
    eax = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x28);
    eax = eax - edi;
    MEM32(esp + 0x24) = eax;
    /* nop */

loc_001F0020: ;
    edx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + ebx * 2));
    SET_LO16(edx, MEM16(ecx + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F0035; /* ja: above (unsigned >) */

loc_001F0033: ;
    eax = edx;

loc_001F0035: ;
    esi = MEM32(ecx + 0x84);
    eax = ZX16(LO16(eax));
    edx = eax + -1;
    ebp = esi;
    ebp = ebp & edx;
    eax = eax - ebp;
    eax = eax & edx;
    edx = MEM32(esp + 0x24);
    edx = MEM32(edx + edi);
    esi = esi + eax;
    edx = edx + eax;
    eax = MEM32(esp + 0x14);
    MEM32(edi) = esi;
    MEM32(ecx + 0x84) = MEM32(ecx + 0x84) + edx;
    MEM32(eax) = edx;
    edx = ZX16(MEM16(esp + 0x20));
    eax = eax - 4;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001F0020; /* jb: below (unsigned <) */

loc_001F0076: ;
    POP32(esp, edi);
    MEM32(ecx + 0x88) = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

loc_001F0092: ;
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    edi = MEM32(esp + 0x28);
    if (CMP_A(_fa, _fb)) goto loc_001F015B; /* ja: above (unsigned >) */

loc_001F00A0: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F0128; /* jbe: below or equal (unsigned <=) */

loc_001F00B0: ;
    edx = MEM32(esp + 0x24);
    edx = edx - edi;
    MEM32(esp + 0x24) = edx;
    /* nop */

loc_001F00C0: ;
    edx = MEM32(esp + 0x2C);
    eax = ZX16(MEM16(edx + eax * 2));
    SET_LO16(edx, MEM16(ecx + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F00D3; /* ja: above (unsigned >) */

loc_001F00D1: ;
    eax = edx;

loc_001F00D3: ;
    esi = MEM32(ecx + 0x84);
    eax = ZX16(LO16(eax));
    edx = eax + -1;
    ebp = esi;
    ebp = ebp & edx;
    eax = eax - ebp;
    eax = eax & edx;
    edx = MEM32(esp + 0x24);
    edx = MEM32(edi + edx);
    ebp = ebx;
    ebp = ebp - MEM32(esp + 0x10);
    edx = edx + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0124; /* jb: below (unsigned <) */

loc_001F00FA: ;
    ebp = MEM32(esp + 0x10);
    esi = esi + eax;
    eax = MEM32(esp + 0x14);
    ebp = ebp + edx;
    MEM32(edi) = esi;
    MEM32(ebx) = edx;
    edx = ZX16(MEM16(esp + 0x20));
    ebx = ebx - 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001F00C0; /* jb: below (unsigned <) */

loc_001F0122: ;
    goto loc_001F0128;

loc_001F0124: ;
    eax = MEM32(esp + 0x14);

loc_001F0128: ;
    esi = ZX16(MEM16(esp + 0x20));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0157; /* jne: not equal / not zero */

loc_001F0131: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx + 0x84) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 0x88) = ebx;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

loc_001F0157: ;
    edi = MEM32(esp + 0x28);

loc_001F015B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F0165; /* jbe: below or equal (unsigned <=) */

loc_001F015F: ;
    ecx = esi;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001F0165: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F001A
 * Original: 0x001F001A - 0x001F017B (353 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F001A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F001A: ;
    /* nop */

loc_001F0020: ;
    edx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + ebx * 2));
    SET_LO16(edx, MEM16(ecx + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F0035; /* ja: above (unsigned >) */

loc_001F0033: ;
    eax = edx;

loc_001F0035: ;
    esi = MEM32(ecx + 0x84);
    eax = ZX16(LO16(eax));
    edx = eax + -1;
    ebp = esi;
    ebp = ebp & edx;
    eax = eax - ebp;
    eax = eax & edx;
    edx = MEM32(esp + 0x24);
    edx = MEM32(edx + edi);
    esi = esi + eax;
    edx = edx + eax;
    eax = MEM32(esp + 0x14);
    MEM32(edi) = esi;
    MEM32(ecx + 0x84) = MEM32(ecx + 0x84) + edx;
    MEM32(eax) = edx;
    edx = ZX16(MEM16(esp + 0x20));
    eax = eax - 4;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001F0020; /* jb: below (unsigned <) */

loc_001F0076: ;
    POP32(esp, edi);
    MEM32(ecx + 0x88) = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F0128; /* jbe: below or equal (unsigned <=) */

loc_001F00B0: ;
    edx = MEM32(esp + 0x24);
    edx = edx - edi;
    MEM32(esp + 0x24) = edx;
    /* nop */

loc_001F00C0: ;
    edx = MEM32(esp + 0x2C);
    eax = ZX16(MEM16(edx + eax * 2));
    SET_LO16(edx, MEM16(ecx + 0x70));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F00D3; /* ja: above (unsigned >) */

loc_001F00D1: ;
    eax = edx;

loc_001F00D3: ;
    esi = MEM32(ecx + 0x84);
    eax = ZX16(LO16(eax));
    edx = eax + -1;
    ebp = esi;
    ebp = ebp & edx;
    eax = eax - ebp;
    eax = eax & edx;
    edx = MEM32(esp + 0x24);
    edx = MEM32(edi + edx);
    ebp = ebx;
    ebp = ebp - MEM32(esp + 0x10);
    edx = edx + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0124; /* jb: below (unsigned <) */

loc_001F00FA: ;
    ebp = MEM32(esp + 0x10);
    esi = esi + eax;
    eax = MEM32(esp + 0x14);
    ebp = ebp + edx;
    MEM32(edi) = esi;
    MEM32(ebx) = edx;
    edx = ZX16(MEM16(esp + 0x20));
    ebx = ebx - 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_001F00C0; /* jb: below (unsigned <) */

loc_001F0122: ;
    goto loc_001F0128;

loc_001F0124: ;
    eax = MEM32(esp + 0x14);

loc_001F0128: ;
    esi = ZX16(MEM16(esp + 0x20));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0157; /* jne: not equal / not zero */

loc_001F0131: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx + 0x84) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 0x88) = ebx;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

loc_001F0157: ;
    edi = MEM32(esp + 0x28);

loc_001F015B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F0165; /* jbe: below or equal (unsigned <=) */

loc_001F015F: ;
    ecx = esi;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_001F0165: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001F0180
 * Original: 0x001F0180 - 0x001F01E2 (98 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x148); PUSH32(esp, 0x001F0191u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0191: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F019C; /* jne: not equal / not zero */

loc_001F0195: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F019C: ;
    eax = MEM32(edi + 0x88);
    edx = MEM32(eax + 4);
    ecx = MEM32(edi + 0x84);
    eax = eax + 4;
    edx = edx & 0x7FFFFFFF;
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F01D2; /* jbe: below or equal (unsigned <=) */

loc_001F01BA: ;
    /* nop */

loc_001F01C0: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx = edx & 0x7FFFFFFF;
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F01C0; /* ja: above (unsigned >) */

loc_001F01D2: ;
    eax = MEM32(eax);
    eax = eax & 0x7FFFFFFF;
    eax = eax - esi;
    POP32(esp, edi);
    eax = eax + ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F01F0
 * Original: 0x001F01F0 - 0x001F0223 (51 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F01F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F01F0: ;
    eax = MEM32(ecx + 0x74);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001F021D; /* jb: below (unsigned <) */

loc_001F01FC: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x78);
    ecx = MEM32(ecx + 0x7C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_001F021D; /* ja: above (unsigned >) */

loc_001F020E: ;
    if (CMP_B(_fa, _fb)) goto loc_001F0214; /* jb: below (unsigned <) */

loc_001F0210: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001F021D; /* jae: above or equal (unsigned >=) */

loc_001F0214: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F021D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F0230
 * Original: 0x001F0230 - 0x001F0311 (225 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0230: ;
    eax = MEM32(ecx + 0x88);
    edx = MEM32(ecx + 0x84);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = eax + 4;
    edx = edx - esi;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(esi + edi * 4 + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F02C4; /* ja: above (unsigned >) */

loc_001F0256: ;
    MEM32(ecx + 0x84) = edx;
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F0280; /* jbe: below or equal (unsigned <=) */

loc_001F0263: ;
    esi = MEM32(eax + 4);
    edi = MEM32(ecx + 0x84);
    eax = eax + 4;
    esi = esi & 0x7FFFFFFF;
    edi = edi - esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x84) = edi;
    if ((_fa != 0)) goto loc_001F0263; /* jne: not equal / not zero */

loc_001F0280: ;
    edx = MEM32(ecx + 0x84);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F02B6; /* je: equal / zero */

loc_001F028B: ;
    goto loc_001F0290;

    /* nop */

loc_001F0290: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_001F02B6; /* jns: not sign (positive) */

loc_001F0296: ;
    esi = MEM32(ecx + 0x84);
    edx = edx & 0x7FFFFFFF;
    esi = esi - edx;
    edx = esi;
    MEM32(ecx + 0x84) = esi;
    esi = MEM32(ecx + 0x74);
    eax = eax + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0290; /* jne: not equal / not zero */

loc_001F02B6: ;
    eax = eax + 0xFFFFFFFCu;
    POP32(esp, edi);
    MEM32(ecx + 0x88) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F02C4: ;
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    ecx = ecx & 0x7FFFFFFF;
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F02F2; /* jbe: below or equal (unsigned <=) */

loc_001F02D6: ;
    goto loc_001F02E0;

    /* nop */
    /* nop */

loc_001F02E0: ;
    ecx = MEM32(eax + 4);
    eax = eax + 4;
    ecx = ecx & 0x7FFFFFFF;
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F02E0; /* ja: above (unsigned >) */

loc_001F02F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001F030C; /* jbe: below or equal (unsigned <=) */

loc_001F02F6: ;
    ecx = edi;
    goto loc_001F0300;

    /* nop */

loc_001F0300: ;
    MEM32(eax) = MEM32(eax) | 0x80000000u;
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F0300; /* jne: not equal / not zero */

loc_001F030C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F0320
 * Original: 0x001F0320 - 0x001F03DE (190 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0320: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F03D9; /* je: equal / zero */

loc_001F0330: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x148); PUSH32(esp, 0x001F0339u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0339: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F03D9; /* je: equal / zero */

loc_001F0341: ;
    eax = MEM32(esi + 0x88);
    edx = MEM32(esi + 0x84);
    eax = eax + 4;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = edx;
    ecx = ecx - edi;
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F03A8; /* ja: above (unsigned >) */

loc_001F035E: ;
    edi = edi & 0x7FFFFFFF;
    edx = edx - edi;
    ecx = edx;
    MEM32(esi + 0x84) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0399; /* je: equal / zero */

loc_001F0373: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_001F0399; /* jns: not sign (positive) */

loc_001F0379: ;
    edi = MEM32(esi + 0x84);
    ecx = ecx & 0x7FFFFFFF;
    edi = edi - ecx;
    MEM32(esi + 0x84) = edi;
    ecx = MEM32(esi + 0x74);
    edx = edi;
    eax = eax + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0373; /* jne: not equal / not zero */

loc_001F0399: ;
    eax = eax + 0xFFFFFFFCu;
    POP32(esp, edi);
    MEM32(esi + 0x88) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001F03A8: ;
    edx = MEM32(eax);
    edx = edx & 0x7FFFFFFF;
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F03D2; /* jbe: below or equal (unsigned <=) */

loc_001F03B6: ;
    goto loc_001F03C0;

    /* nop */
    /* nop */

loc_001F03C0: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx = edx & 0x7FFFFFFF;
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F03C0; /* ja: above (unsigned >) */

loc_001F03D2: ;
    MEM32(eax) = MEM32(eax) | 0x80000000u;
    POP32(esp, edi);

loc_001F03D9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F03E0
 * Original: 0x001F03E0 - 0x001F03ED (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F03E0(void)
{

loc_001F03E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x90) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F03F0
 * Original: 0x001F03F0 - 0x001F04D2 (226 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F03F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F03F0: ;
    esp = esp - 0x20;
    SET_LO16(eax, MEM16(0x3EEBA4));
    SET_LO8(edx, MEM8(0x3EEBA6));
    MEM16(esp + 0xC) = LO16(eax);
    SET_LO16(eax, MEM16(0x3EEBA0));
    MEM16(esp + 0x10) = LO16(eax);
    SET_LO16(eax, MEM16(0x3E89A8));
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(0x3EEBA2));
    MEM16(esp + 8) = LO16(eax);
    SET_LO16(eax, MEM16(0x3DB1FC));
    MEM8(esp + 0x12) = LO8(edx);
    SET_LO8(edx, MEM8(0x3E89AA));
    MEM16(esp + 0x14) = LO16(eax);
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM8(esp + 0xA) = LO8(edx);
    SET_LO8(edx, MEM8(0x3DB1FE));
    MEM16(esp) = 0x77;
    MEM16(esp + 4) = 0x72;
    MEM8(esp + 0x16) = LO8(edx);
    MEM32(esp + 0x18) = 0x622B61;
    MEM32(esp + 0x1C) = 0x622B77;
    if (CMP_NE(_fa, _fb)) goto loc_001F0470; /* jne: not equal / not zero */

loc_001F046D: ;
    eax = MEM32(ecx + 0x14);

loc_001F0470: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F04A6; /* ja: above (unsigned >) */

loc_001F0476: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F04D4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x001F047Du) goto loc_001F047D;
    if (_jt == 0x001F0482u) goto loc_001F0482;
    if (_jt == 0x001F0488u) goto loc_001F0488;
    if (_jt == 0x001F048Eu) goto loc_001F048E;
    if (_jt == 0x001F0494u) goto loc_001F0494;
    if (_jt == 0x001F049Au) goto loc_001F049A;
    if (_jt == 0x001F04A0u) goto loc_001F04A0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F047D: ;
    eax = esp;
    goto loc_001F04AA;

loc_001F0482: ;
    eax = esp + 8;
    goto loc_001F04AA;

loc_001F0488: ;
    eax = esp + 0xC;
    goto loc_001F04AA;

loc_001F048E: ;
    eax = esp + 0x18;
    goto loc_001F04AA;

loc_001F0494: ;
    eax = esp + 0x10;
    goto loc_001F04AA;

loc_001F049A: ;
    eax = esp + 0x1C;
    goto loc_001F04AA;

loc_001F04A0: ;
    eax = esp + 0x14;
    goto loc_001F04AA;

loc_001F04A6: ;
    eax = esp + 4;

loc_001F04AA: ;
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x5C); PUSH32(esp, 0x001F04B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F04B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    eax = 0x46A728;
    if (TEST_Z(_fa, _fb)) goto loc_001F04C4; /* je: equal / zero */

loc_001F04BF: ;
    eax = 0x5BC5D8;

loc_001F04C4: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x24);
    MEM32(eax) = ecx;
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F04D2
 * Original: 0x001F04D2 - 0x001F04FF (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F04D2(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F04D2: ;
    edi = edi;
    if (_flags /* jge: greater or equal (signed >=) */) (void)0; /* goto loc_001F04DA - dead code, label not in function */

loc_001F04D6: ;
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    MEM8(eax + -1811931388) = MEM8(eax + -1811931388) + LO8(ecx);
    SET_LO8(eax, LO8(eax) + 0x1F);
    MEM8(eax + -2113921276) = MEM8(eax + -2113921276) + HI8(eax);
    SET_LO8(eax, LO8(eax) + 0x1F);
    MEM8(esi + -1711268092) = MEM8(esi + -1711268092) + LO8(ecx);
    SET_LO8(eax, LO8(eax) + 0x1F);
    MEM8(ebx + -1065019327) = MEM8(ebx + -1065019327) + LO8(ecx);
    if ((MEM8(ebx + -1065019327) == 0)) goto loc_001F04FE; /* je: equal / zero */

loc_001F04F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F04FDu); RECOMP_ABI_CALL(0x00342980u, sub_00342980); /* call 0x00342980 */

loc_001F04FD: ;
    POP32(esp, ecx);

loc_001F04FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F04F0
 * Original: 0x001F04F0 - 0x001F04FF (15 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F04F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F04F0: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F04FE; /* je: equal / zero */

loc_001F04F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F04FDu); RECOMP_ABI_CALL(0x00342980u, sub_00342980); /* call 0x00342980 */

loc_001F04FD: ;
    POP32(esp, ecx);

loc_001F04FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0500
 * Original: 0x001F0500 - 0x001F051E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0500(void)
{

loc_001F0500: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0518u); RECOMP_ABI_CALL(0x00343DD1u, sub_00343DD1); /* call 0x00343DD1 */

loc_001F0518: ;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0520
 * Original: 0x001F0520 - 0x001F053E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0520(void)
{

loc_001F0520: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0538u); RECOMP_ABI_CALL(0x00343F34u, sub_00343F34); /* call 0x00343F34 */

loc_001F0538: ;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0540
 * Original: 0x001F0540 - 0x001F054D (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0540(void)
{

loc_001F0540: ;
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0549u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_001F0549: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0550
 * Original: 0x001F0550 - 0x001F0569 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0550(void)
{

loc_001F0550: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0563u); RECOMP_ABI_CALL(0x0034400Fu, sub_0034400F); /* call 0x0034400F */

loc_001F0563: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F0570
 * Original: 0x001F0570 - 0x001F057D (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0570(void)
{

loc_001F0570: ;
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0579u); RECOMP_ABI_CALL(0x003441BAu, sub_003441BA); /* call 0x003441BA */

loc_001F0579: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0580
 * Original: 0x001F0580 - 0x001F0715 (405 bytes, 153 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0580: ;
    esp = esp - 0x20C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x218);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F05A0; /* jne: not equal / not zero */

loc_001F0595: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

loc_001F05A0: ;
    eax = ebp;
    edx = eax + 1;

loc_001F05A5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F05A5; /* jne: not equal / not zero */

loc_001F05AC: ;
    eax = eax - edx;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001F0708; /* jle: less or equal (signed <=) */

loc_001F05C0: ;
    PUSH32(esp, ebx);
    eax = esp + 0x220;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    SET_LO8(ebx, 0x25);
    goto loc_001F05D5;

loc_001F05D1: ;
    ecx = MEM32(esp + 0x14);

loc_001F05D5: ;
    edi = 0; /* xor self */

loc_001F05D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0602; /* je: equal / zero */

loc_001F05DB: ;
    SET_LO8(eax, MEM8(esi + ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F05EA; /* je: equal / zero */

loc_001F05E2: ;
    MEM8(esp + edi + 0x1C) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001F05D7;

loc_001F05EA: ;
    _fa = (uint32_t)(MEM8(esi + ebp + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + ebp + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F060C; /* jne: not equal / not zero */

loc_001F05F0: ;
    MEM8(esp + edi + 0x1C) = LO8(ebx);
    SET_LO8(edx, MEM8(esi + ebp + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + edi + 0x1C) = LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001F05D7;

loc_001F0602: ;
    eax = 1;
    goto loc_001F06A3;

loc_001F060C: ;
    SET_LO8(eax, MEM8(esi + ebp));
    MEM8(esp + edi + 0x1C) = LO8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(esi + ebp + 1);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F0620u); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_001F0620: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F0684; /* jne: not equal / not zero */

loc_001F0627: ;
    SET_LO8(eax, MEM8(esi + ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F062E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x75 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0632: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0636: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x78 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F063A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F063E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0642: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x65 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0646: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x66 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F064A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x67) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x67 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F064E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x73 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0652: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x53 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0656: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x63 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F065A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x43 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F065E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0662: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x70 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F0666: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0684; /* je: equal / zero */

loc_001F066C: ;
    MEM8(esp + edi + 0x1C) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM8(esi + ebp + 1);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F067Du); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_001F067D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F0627; /* je: equal / zero */

loc_001F0684: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F068Eu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_001F068E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F069E; /* jne: not equal / not zero */

loc_001F0695: ;
    SET_LO8(ecx, MEM8(esi + ebp));
    MEM8(esp + edi + 0x1C) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F069E: ;
    eax = 2;

loc_001F06A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM8(esp + edi + 0x1C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001F06CC; /* jne: not equal / not zero */

loc_001F06AD: ;
    eax = MEM32(esp + 0x220);
    ecx = MEM32(eax + 0x18);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F06C2u); RECOMP_ABI_CALL(0x003444E6u, sub_003444E6); /* call 0x003444E6 */

loc_001F06C2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F06FC; /* je: equal / zero */

loc_001F06CA: ;
    goto loc_001F06F8;

loc_001F06CC: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x220);
    eax = eax + 4;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x18);
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F06F0u); RECOMP_ABI_CALL(0x003444E6u, sub_003444E6); /* call 0x003444E6 */

loc_001F06F0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0706; /* je: equal / zero */

loc_001F06F8: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + eax;

loc_001F06FC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F05D1; /* jl: less (signed <) */

loc_001F0706: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F0708: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x20C;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0720
 * Original: 0x001F0720 - 0x001F073B (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0720(void)
{

loc_001F0720: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0737u); RECOMP_ABI_CALL(0x00343805u, sub_00343805); /* call 0x00343805 */

loc_001F0737: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0740
 * Original: 0x001F0740 - 0x001F074D (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0740(void)
{

loc_001F0740: ;
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0749u); RECOMP_ABI_CALL(0x00344530u, sub_00344530); /* call 0x00344530 */

loc_001F0749: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0750
 * Original: 0x001F0750 - 0x001F0764 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0750(void)
{

loc_001F0750: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F075Eu); RECOMP_ABI_CALL(0x003445ECu, sub_003445EC); /* call 0x003445EC */

loc_001F075E: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F0770
 * Original: 0x001F0770 - 0x001F0784 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0770(void)
{

loc_001F0770: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F077Eu); RECOMP_ABI_CALL(0x00344631u, sub_00344631); /* call 0x00344631 */

loc_001F077E: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F0790
 * Original: 0x001F0790 - 0x001F07A9 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0790(void)
{

loc_001F0790: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F07A3u); RECOMP_ABI_CALL(0x00344689u, sub_00344689); /* call 0x00344689 */

loc_001F07A3: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F07B0
 * Original: 0x001F07B0 - 0x001F07C4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F07B0(void)
{

loc_001F07B0: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F07BEu); RECOMP_ABI_CALL(0x0034470Fu, sub_0034470F); /* call 0x0034470F */

loc_001F07BE: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F07D0
 * Original: 0x001F07D0 - 0x001F07DB (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F07D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F07D0: ;
    edx = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001F07E0
 * Original: 0x001F07E0 - 0x001F07E4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F07E0(void)
{

loc_001F07E0: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_001F07F0
 * Original: 0x001F07F0 - 0x001F0823 (51 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F07F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F07F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_001F07F6: ;
    eax = MEM32(esi + 0x5BBB38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F0815; /* je: equal / zero */

loc_001F0800: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x001F080Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F080B: ;
    MEM32(esi + 0x5BBB38) = 0;

loc_001F0815: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F07F6; /* jb: below (unsigned <) */

loc_001F0820: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F0830
 * Original: 0x001F0830 - 0x001F086F (63 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F083F; /* jne: not equal / not zero */

loc_001F083A: ;
    edi = 0x3C806C;

loc_001F083F: ;
    eax = edi;
    esi = eax + 1;

loc_001F0844: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F0844; /* jne: not equal / not zero */

loc_001F084B: ;
    edx = MEM32(ecx);
    eax = eax - esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001F0854u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0854: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F086A; /* je: equal / zero */

loc_001F0858: ;
    esi = eax;
    ecx = edi;
    esi = esi - edi;
    edi = edi;

loc_001F0860: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F0860; /* jne: not equal / not zero */

loc_001F086A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F0870
 * Original: 0x001F0870 - 0x001F087E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0870(void)
{

loc_001F0870: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F087Au); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_001F087A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F0880
 * Original: 0x001F0880 - 0x001F0897 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0880(void)
{

loc_001F0880: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001F0894u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0894: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F08A0
 * Original: 0x001F08A0 - 0x001F0930 (144 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F08A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F08A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = ecx;
    eax = MEM32(ebx);
    if (CMP_AE(_fa, _fb)) goto loc_001F08D2; /* jae: above or equal (unsigned >=) */

loc_001F08B8: ;
    ebp = ebp - edi;
    PUSH32(esp, ebp);
    ecx = esi + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001F08C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F08C9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001F08D2: ;
    ecx = edi;
    ecx = ecx - ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esi + ebp;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001F08E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F08E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F08C9; /* jne: not equal / not zero */

loc_001F08E5: ;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001F08EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F08EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F0901; /* jne: not equal / not zero */

loc_001F08F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001F0901: ;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001F0925u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0925: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0930
 * Original: 0x001F0930 - 0x001F0940 (16 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0930: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001F0940
 * Original: 0x001F0940 - 0x001F0945 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0940: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_001F0950
 * Original: 0x001F0950 - 0x001F0955 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0950(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0950: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_001F0960
 * Original: 0x001F0960 - 0x001F09C3 (99 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0960: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F098E; /* jle: less or equal (signed <=) */

loc_001F096C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001F0971u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0971: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x001F097Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F097A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F09BE; /* jne: not equal / not zero */

loc_001F097F: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001F0989u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0989: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F098E: ;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001F09B7; /* jge: greater or equal (signed >=) */

loc_001F0990: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x48); PUSH32(esp, 0x001F099Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F099D: ;
    eax = eax + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x40); PUSH32(esp, 0x001F09AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F09AA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001F09B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F09B1: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F09B7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001F09BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F09BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F09D0
 * Original: 0x001F09D0 - 0x001F0B1B (331 bytes, 140 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F09D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F09D0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;

loc_001F09E0: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esi);
    ecx = esi;
    PUSH32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_001F0A0D; /* jne: not equal / not zero */

loc_001F09ED: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001F09F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F09F0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F0A96; /* jne: not equal / not zero */

loc_001F09FB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x001F0A06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0A06: ;
    edi = eax;
    goto loc_001F0A91;

loc_001F0A0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001F0A11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0A11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F0A19; /* je: equal / zero */

loc_001F0A15: ;
    edi = ebx;
    goto loc_001F0A91;

loc_001F0A19: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001F0A20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0A20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F0A5E; /* jne: not equal / not zero */

loc_001F0A28: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x001F0A33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0A33: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F0A91; /* je: equal / zero */

loc_001F0A39: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F0B0F; /* je: equal / zero */

loc_001F0A42: ;
    edx = MEM32(esi);
    _cf = (int)((ebp) != 0);
    ebp = (uint32_t)(-(int32_t)ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x001F0A4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0A4F: ;
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001F0A5E: ;
    if (CMP_A(_fa, _fb)) goto loc_001F0A91; /* ja: above (unsigned >) */

loc_001F0A60: ;
    ecx = ebx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001F0A91; /* jbe: below or equal (unsigned <=) */

loc_001F0A67: ;
    edx = MEM32(esi);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001F0A72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0A72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F0A91; /* je: equal / zero */

loc_001F0A76: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(esi);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(ebp)) >> 32) & 1);
    ebx = ebx + ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x001F0A89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0A89: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F0AE2; /* jne: not equal / not zero */

loc_001F0A91: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F0B0F; /* je: equal / zero */

loc_001F0A96: ;
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x001F0AA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0AA9: ;
    ecx = MEM32(eax);
    eax = MEM32(0x5BC5D8);
    edx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F0B03; /* je: equal / zero */

loc_001F0AB8: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x001F0AC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0AC7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BC5D8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F09E0; /* je: equal / zero */

loc_001F0AD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001F0AE2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F0B0F; /* je: equal / zero */

loc_001F0AE7: ;
    eax = MEM32(esi);
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x001F0AF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0AF4: ;
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001F0B03: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001F0B0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0B0F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F0B20
 * Original: 0x001F0B20 - 0x001F0B94 (116 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001F0B29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0B29: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    edx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    eax = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_001F0B7E; /* jne: not equal / not zero */

loc_001F0B3A: ;
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x001F0B47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0B47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F0B6D; /* je: equal / zero */

loc_001F0B4C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001F0B5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0B5C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001F0B6D: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001F0B7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x001F0B8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0B8D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0BA0
 * Original: 0x001F0BA0 - 0x001F0BAF (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BA0(void)
{

loc_001F0BA0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001F0BACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0BAC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F0BB0
 * Original: 0x001F0BB0 - 0x001F0BC2 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0BB0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x001F0BBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0BBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F0BC1; /* jne: not equal / not zero */

loc_001F0BBE: ;
    eax = eax | 0xFFFFFFFFu;

loc_001F0BC1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0BD0
 * Original: 0x001F0BD0 - 0x001F0BDD (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F0BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0BD0: ;
    eax = MEM32(0x46A668);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0BDC; /* jne: not equal / not zero */

loc_001F0BDA: ;
    eax = 0; /* xor self */

loc_001F0BDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0BE0
 * Original: 0x001F0BE0 - 0x001F0BE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BE0(void)
{

loc_001F0BE0: ;
    eax = 0x1000;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0BF0
 * Original: 0x001F0BF0 - 0x001F0BF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0BF0(void)
{

loc_001F0BF0: ;
    eax = 0x10000;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0C00
 * Original: 0x001F0C00 - 0x001F0C06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C00(void)
{

loc_001F0C00: ;
    eax = MEM32(0x46A668);
    esp += 4; return; /* ret */

}

/**
 * sub_001F0C10
 * Original: 0x001F0C10 - 0x001F0C16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C10(void)
{

loc_001F0C10: ;
    eax = MEM32(0x5BBAD0);
    esp += 4; return; /* ret */

}

/**
 * sub_001F0C20
 * Original: 0x001F0C20 - 0x001F0C26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C20(void)
{

loc_001F0C20: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F0C30
 * Original: 0x001F0C30 - 0x001F0C51 (33 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C30(void)
{

loc_001F0C30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM32(edx) = 0xFFFFFFFFu;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0C60
 * Original: 0x001F0C60 - 0x001F0C7C (28 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C60(void)
{

loc_001F0C60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0xFFFFFFFFu;
    MEM32(ecx) = 0xFFFFFFFFu;
    eax = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0C80
 * Original: 0x001F0C80 - 0x001F0C95 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0C80(void)
{

loc_001F0C80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    edx = MEM32(eax);
    ecx = MEM32(ecx);
    ecx = ecx - edx;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F0CA0
 * Original: 0x001F0CA0 - 0x001F0CAE (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0CA0(void)
{

loc_001F0CA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0CAAu); RECOMP_ABI_CALL(0x001E8EB0u, sub_001E8EB0); /* call 0x001E8EB0 */

loc_001F0CAA: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F0CB0
 * Original: 0x001F0CB0 - 0x001F0CF2 (66 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0CB0(void)
{

loc_001F0CB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001F0CCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0CCD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x001F0CE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0CE0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0D00
 * Original: 0x001F0D00 - 0x001F0D05 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0D00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0D00: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_001F0D10
 * Original: 0x001F0D10 - 0x001F0D1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0D10(void)
{

loc_001F0D10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F0D20
 * Original: 0x001F0D20 - 0x001F0D62 (66 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0D20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0D20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F0D5D; /* je: equal / zero */

loc_001F0D2C: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_001F0D32: ;
    ecx = edx;
    ecx = ecx & 0xF;
    ecx = ecx << 1;
    ebx = 3;
    ebx = ebx << LO8(ecx);
    eax = edx;
    eax = eax >> 4;
    ebp = MEM32(esi + eax * 4);
    ebx = ~ebx;
    ebx = ebx & ebp;
    ebp = MEM32(esp + 0x1C);
    ebp = ebp << LO8(ecx);
    ebx = ebx | ebp;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + eax * 4) = ebx;
    if ((_fa != 0)) goto loc_001F0D32; /* jne: not equal / not zero */

loc_001F0D5B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001F0D5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F0D70
 * Original: 0x001F0D70 - 0x001F0DCA (90 bytes, 38 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0D70: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4000 (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_001F0DC3; /* jae: above or equal (unsigned >=) */

loc_001F0D84: ;
    edi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    /* nop */

loc_001F0D90: ;
    ecx = MEM32(esp + 0x18);
    ebp = ecx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001F0DC3; /* je: equal / zero */

loc_001F0D9F: ;
    ebp = edx;
    ebp = ebp >> 4;
    ebp = MEM32(esi + ebp * 4);
    ecx = edx;
    ecx = ecx & 0xF;
    ecx = ecx << 1;
    ebp = ebp >> LO8(ecx);
    ebp = ebp & edi;
    ebp = ebp & 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0DC3; /* jne: not equal / not zero */

loc_001F0DB9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F0D90; /* jb: below (unsigned <) */

loc_001F0DC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F0DD0
 * Original: 0x001F0DD0 - 0x001F0E59 (137 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0DD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edx = ecx;
    eax = 2;
    edi = 0x1000;

loc_001F0DE3: ;
    ecx = eax + -2;
    ebx = ecx;
    ebx = ebx >> 4;
    ebx = MEM32(edx + ebx * 4);
    ecx = ecx & 0xF;
    ecx = ecx << 1;
    ebx = ebx >> LO8(ecx);
    ebx = ebx & 3;
    ecx = esi + ebx * 4;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = eax + -1;
    ebx = ecx;
    ebx = ebx >> 4;
    ebx = MEM32(edx + ebx * 4);
    ecx = ecx & 0xF;
    ecx = ecx << 1;
    ebx = ebx >> LO8(ecx);
    ebx = ebx & 3;
    ecx = esi + ebx * 4;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = eax;
    ebx = ebx >> 4;
    ebx = MEM32(edx + ebx * 4);
    ecx = eax;
    ecx = ecx & 0xF;
    ecx = ecx << 1;
    ebx = ebx >> LO8(ecx);
    ebx = ebx & 3;
    ecx = esi + ebx * 4;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = eax + 1;
    ebx = ecx;
    ebx = ebx >> 4;
    ebx = MEM32(edx + ebx * 4);
    ecx = ecx & 0xF;
    ecx = ecx << 1;
    ebx = ebx >> LO8(ecx);
    eax = eax + 4;
    ebx = ebx & 3;
    ecx = esi + ebx * 4;
    ebx = MEM32(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = ebx;
    if ((_fa != 0)) goto loc_001F0DE3; /* jne: not equal / not zero */

loc_001F0E53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F0E60
 * Original: 0x001F0E60 - 0x001F0E7B (27 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0E60: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F0E78; /* je: equal / zero */

loc_001F0E6C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001F0E71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0E71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F0E78; /* je: equal / zero */

loc_001F0E75: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001F0E78: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001F0E80
 * Original: 0x001F0E80 - 0x001F0F68 (232 bytes, 87 insns)
 * Category: game_vtable
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0E80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F0E80: ;
    eax = MEM32(0x5BC508);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x50);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001F0E9A; /* je: equal / zero */

loc_001F0E97: ;
    MEM8(ebx) = 0;

loc_001F0E9A: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esp + 0x34);
    MEM32(ecx) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001F0EAF; /* je: equal / zero */

loc_001F0EAC: ;
    MEM8(eax) = 0;

loc_001F0EAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebp = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x28);
    MEM32(ebp) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001F0F2B; /* je: equal / zero */

loc_001F0EC2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001F0EC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0EC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F0F2B; /* je: equal / zero */

loc_001F0ECD: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edx = esp + 0x58;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001F0EFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F0EFF: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F0F2B; /* jne: not equal / not zero */

loc_001F0F09: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x34);
    edi = edi - eax;
    eax = MEM32(esp + 0x24);
    MEM32(ecx) = edi;
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 36; return; /* ret 32 */

loc_001F0F2B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F0F52; /* je: equal / zero */

loc_001F0F2F: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, 0x3EEA78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F0F3Fu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001F0F3F: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F0F4Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001F0F4F: ;
    esp = esp + 0x18;

loc_001F0F52: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_001F0F70
 * Original: 0x001F0F70 - 0x001F10C6 (342 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F0F70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F0F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3EEC60);
    PUSH32(esp, 0x3432FC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esp;
    MEM32(ebp + -4) = 0;
    eax = 0;
    /* TODO: cpuid  */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM32(0x5BBCC0) = ebx;
    MEM32(0x5BBCC4) = edx;
    MEM32(0x5BBCC8) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001F10AF; /* je: equal / zero */

loc_001F0FCA: ;
    eax = 1;
    /* TODO: cpuid  */
    MEM32(0x5BC5A4) = eax;
    MEM32(0x5BC59C) = edx;
    eax = 0x80000000u;
    /* TODO: cpuid  */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000001u (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F10AF; /* jb: below (unsigned <) */

loc_001F0FEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000004u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000004u (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F109D; /* jb: below (unsigned <) */

loc_001F0FF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000005u (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F1043; /* jb: below (unsigned <) */

loc_001F1000: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000006u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000006u (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F1025; /* jb: below (unsigned <) */

loc_001F1007: ;
    eax = 0x80000006u;
    /* TODO: cpuid  */
    MEM32(0x5BC5B8) = eax;
    MEM32(0x5BC5BC) = ebx;
    MEM32(0x5BC5C0) = ecx;
    MEM32(0x5BC5C4) = edx;

loc_001F1025: ;
    eax = 0x80000005u;
    /* TODO: cpuid  */
    MEM32(0x5BC5A8) = eax;
    MEM32(0x5BC5AC) = ebx;
    MEM32(0x5BC5B0) = ecx;
    MEM32(0x5BC5B4) = edx;

loc_001F1043: ;
    eax = 0x80000002u;
    /* TODO: cpuid  */
    MEM32(0x5BBE5C) = eax;
    MEM32(0x5BBE60) = ebx;
    MEM32(0x5BBE64) = ecx;
    MEM32(0x5BBE68) = edx;
    eax = 0x80000003u;
    /* TODO: cpuid  */
    MEM32(0x5BBE6C) = eax;
    MEM32(0x5BBE70) = ebx;
    MEM32(0x5BBE74) = ecx;
    MEM32(0x5BBE78) = edx;
    eax = 0x80000004u;
    /* TODO: cpuid  */
    MEM32(0x5BBE7C) = eax;
    MEM32(0x5BBE80) = ebx;
    MEM32(0x5BBE84) = ecx;
    MEM32(0x5BBE88) = edx;

loc_001F109D: ;
    eax = 0x80000001u;
    /* TODO: cpuid  */
    MEM32(0x5BC5A0) = edx;
    eax = 1;

loc_001F10AF: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001F10C6
 * Original: 0x001F10C6 - 0x001F10CC (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F10C6(void)
{

loc_001F10C6: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001F10CC
 * Original: 0x001F10CC - 0x001F10F0 (36 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F10CC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F10CC: ;
    esp = MEM32(ebp + -24);
    eax = eax | 0xFFFFFFFFu;
    MEM32(ebp + -4) = eax;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001F10F0
 * Original: 0x001F10F0 - 0x001F1341 (593 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F10F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_001F10F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    PUSH32(esp, esi);
    MEMD(esp + 0x40) = fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x28;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    PUSH32(esp, eax);
    MEMD(esp + 0x34) = fp_top(); fp_pop(); /* fstp */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F111Au); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_001F111A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F1312; /* je: equal / zero */

loc_001F1122: ;
    fp_push(MEMD(esp + 0x40)); /* fld double */
    goto loc_001F1130;

    /* nop */
    /* nop */

loc_001F1130: ;
    fp_push(MEMD(esp + 0x30)); /* fld double */
    ecx = esp + 0x20;
    MEMD(esp + 0x40) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMD(esp + 0x34) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F1147u); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_001F1147: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_001F1160;

    /* nop */

loc_001F1160: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F116Au); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_001F116A: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esp + 0x1C);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x14) = edx;
    if (((int32_t)edx < 0)) goto loc_001F1160; /* js: sign (negative) */

loc_001F1184: ;
    if (_flags /* jg: greater (signed >) */) goto loc_001F118B;

loc_001F1186: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001F1160; /* jb: below (unsigned <) */

loc_001F118B: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;

loc_001F11A1: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F11ABu); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_001F11AB: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    ecx = MEM32(esp + 0x1C);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x14) = ecx;
    if (((int32_t)ecx < 0)) goto loc_001F11A1; /* js: sign (negative) */

loc_001F11C5: ;
    if (_flags /* jg: greater (signed >) */) goto loc_001F11CE;

loc_001F11C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001F11A1; /* jb: below (unsigned <) */

loc_001F11CE: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    eax = MEM32(esp + 0x1C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x38) = edx;
    fp_push((double)SMEM64(esp + 0x38)); /* fild */
    fp_top() = fp_top() * MEMD(0x3EEC78); /* fmul qword ptr [0x3eec78] */
    fp_push((double)SMEM64(esp + 0x28)); /* fild */
    fp_top() = fp_top() * MEMD(0x3E2170); /* fmul qword ptr [0x3e2170] */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001F1310; /* jnp: not parity */

loc_001F121B: ;
    ecx = MEM32(esp + 8);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(esp + 0xC)));
    ecx = ecx - MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001F1235; /* jge: greater or equal (signed >=) */

loc_001F122F: ;
    fp_top() = fp_top() + MEMD(0x3E1E90); /* fadd qword ptr [0x3e1e90] */

loc_001F1235: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    fp_st1() = fp_top() / fp_st1(); fp_pop(); /* fdivrp st(1) */
    fp_push(MEMD(esp + 0x40)); /* fld double */
    fp_top() = fp_top() + MEMD(esp + 0x30); /* fadd qword ptr [esp + 0x30] */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_001F1130; /* jl: less (signed <) */

loc_001F124E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001F12DF; /* jge: greater or equal (signed >=) */

loc_001F1257: ;
    fp_push(MEMD(0x3CD650)); /* fld double */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() - MEMD(esp + 0x10); /* fsub qword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F1272; /* jp: parity */

loc_001F1270: ;
    fp_top() = -fp_top(); /* fchs */

loc_001F1272: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3CD650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3cd650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F1130; /* je: equal / zero */

loc_001F1283: ;
    fp_push(MEMD(esp + 0x30)); /* fld double */
    fp_top() = fp_top() * MEMD(0x3CD650); /* fmul qword ptr [0x3cd650] */
    fp_top() = fp_top() - MEMD(esp + 0x10); /* fsub qword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F12A0; /* jp: parity */

loc_001F129E: ;
    fp_top() = -fp_top(); /* fchs */

loc_001F12A0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3CD650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3cd650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F1130; /* je: equal / zero */

loc_001F12B1: ;
    fp_push(MEMD(esp + 0x40)); /* fld double */
    fp_top() = fp_top() * MEMD(0x3CD650); /* fmul qword ptr [0x3cd650] */
    fp_top() = fp_top() - MEMD(esp + 0x10); /* fsub qword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F12CE; /* jp: parity */

loc_001F12CC: ;
    fp_top() = -fp_top(); /* fchs */

loc_001F12CE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3CD650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3cd650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001F1130; /* je: equal / zero */

loc_001F12DF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMD(esp + 0x10)); /* fld double */
    fp_top() = fp_top() * MEMD(0x3EEC70); /* fmul qword ptr [0x3eec70] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F131C; /* jp: parity */

loc_001F12F8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C8244)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F130Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001F130B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F1310: ;
    fp_pop(); /* fstp st(0) */

loc_001F1312: ;
    eax = 0x64;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001F131C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3EEC6C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3eec6c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1331; /* jne: not equal / not zero */

loc_001F1329: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3EEC6C)); /* fld float */

loc_001F1331: ;
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001F133Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001F133C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F1350
 * Original: 0x001F1350 - 0x001F139C (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001F1350(void)
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

loc_001F1350: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F135Cu); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_001F135C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1365; /* je: equal / zero */

loc_001F1360: ;
    eax = MEM32(esp);
    goto loc_001F137C;

loc_001F1365: ;
    PUSH32(esp, 0x3EEC84);
    PUSH32(esp, 0x47A180);
    PUSH32(esp, 0x001F1374u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_001F1374: ;
    esp = esp + 8;
    eax = 1;

loc_001F137C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001F138C; /* jge: greater or equal (signed >=) */

loc_001F1386: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_001F138C: ;
    fp_top() = MEMF(0x3EEC80) / fp_top(); /* fdivr dword ptr [0x3eec80] */
    MEMF(0x5BC5CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F13A0
 * Original: 0x001F13A0 - 0x001F13BE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F13A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001F13A0: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F13ACu); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_001F13AC: ;
    fp_push((double)SMEM64(esp)); /* fild */
    fp_top() = fp_top() * MEMF(0x5BC5CC); /* fmul dword ptr [0x5bc5cc] */
    PUSH32(esp, 0x001F13BAu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_001F13BA: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F13C0
 * Original: 0x001F13C0 - 0x001F13D1 (17 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F13C0(void)
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

loc_001F13C0: ;
    fp_push(MEMF(0x5BC5CC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3EEC80); /* fmul dword ptr [0x3eec80] */
    g_seh_ebp = ebp; sub_001A41F0(); return; /* tail jmp 0x001A41F0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F13E0
 * Original: 0x001F13E0 - 0x001F142E (78 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F13E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F13E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1426; /* je: equal / zero */

loc_001F13EA: ;
    PUSH32(esp, edi);
    goto loc_001F13F0;

    /* nop */

loc_001F13F0: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    edi = MEM32(eax + 0x10);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    ecx = ecx - edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F140Bu); RECOMP_ABI_CALL(0x0034D41Bu, sub_0034D41B); /* call 0x0034D41B */

loc_001F140B: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x001F1416u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_001F1416: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F141Cu); RECOMP_ABI_CALL(0x0019ED5Eu, sub_0019ED5E); /* call 0x0019ED5E */

loc_001F141C: ;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 4) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001F13F0; /* jne: not equal / not zero */

loc_001F1425: ;
    POP32(esp, edi);

loc_001F1426: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001F07F0(); return; /* tail jmp 0x001F07F0 */

}

/**
 * sub_001F1430
 * Original: 0x001F1430 - 0x001F1446 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1430(void)
{

loc_001F1430: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x404);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F1443u); RECOMP_ABI_CALL(0x0019EE46u, sub_0019EE46); /* call 0x0019EE46 */

loc_001F1443: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1450
 * Original: 0x001F1450 - 0x001F145D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1450(void)
{

loc_001F1450: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F145Au); RECOMP_ABI_CALL(0x0019EEBCu, sub_0019EEBC); /* call 0x0019EEBC */

loc_001F145A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F1460
 * Original: 0x001F1460 - 0x001F14B2 (82 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x404);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F1475u); RECOMP_ABI_CALL(0x0019EE46u, sub_0019EE46); /* call 0x0019EE46 */

loc_001F1475: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F14AB; /* je: equal / zero */

loc_001F147B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F14AB; /* je: equal / zero */

loc_001F1483: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F14A5; /* je: equal / zero */

loc_001F148B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F1491; /* jbe: below or equal (unsigned <=) */

loc_001F148F: ;
    ecx = esi;

loc_001F1491: ;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    esi = eax;
    edi = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);

loc_001F14A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F14ABu); RECOMP_ABI_CALL(0x0019EEBCu, sub_0019EEBC); /* call 0x0019EEBC */

loc_001F14AB: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F14C0
 * Original: 0x001F14C0 - 0x001F14C8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F14C0(void)
{

loc_001F14C0: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F14D0
 * Original: 0x001F14D0 - 0x001F165B (395 bytes, 142 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F14D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F14D0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esi + ebp;
    PUSH32(esp, ebp);
    ebx = ecx;
    edx = MEM32(ebx);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001F1505u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F1505: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x001F1518u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F1518: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1625; /* je: equal / zero */

loc_001F1520: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F162D; /* je: equal / zero */

loc_001F152C: ;
    ebp = MEM32(edi + 0xC);
    esi = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(edi + 0x10);
    esi = esi - ebp;
    ebp = eax;
    ebp = ebp - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_001F1564; /* jae: above or equal (unsigned >=) */

loc_001F154A: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F1617; /* jbe: below or equal (unsigned <=) */

loc_001F1556: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F1576; /* ja: above (unsigned >) */

loc_001F155A: ;
    eax = ecx;
    eax = eax - esi;
    MEM32(esp + 0x10) = eax;
    goto loc_001F1572;

loc_001F1564: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F1617; /* jae: above or equal (unsigned >=) */

loc_001F156C: ;
    eax = eax - ecx;
    MEM32(esp + 0x10) = eax;

loc_001F1572: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F157A; /* jle: less or equal (signed <=) */

loc_001F1576: ;
    MEM32(esp + 0x10) = ebp;

loc_001F157A: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1588; /* jle: less or equal (signed <=) */

loc_001F1584: ;
    MEM32(esp + 0x10) = eax;

loc_001F1588: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    edx = edx - ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001F159Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F159F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F15FF; /* je: equal / zero */

loc_001F15A3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F15B1; /* jne: not equal / not zero */

loc_001F15A8: ;
    eax = MEM32(esp + 0x1C);
    MEM32(ebx + 4) = eax;
    goto loc_001F15C0;

loc_001F15B1: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F15C0; /* je: equal / zero */

loc_001F15B9: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x10) = ecx;

loc_001F15C0: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001F15D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F15D0: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F15DDu); RECOMP_ABI_CALL(0x0034D41Bu, sub_0034D41B); /* call 0x0034D41B */

loc_001F15DD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x001F15E5u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_001F15E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F15EBu); RECOMP_ABI_CALL(0x0019ED5Eu, sub_0019ED5E); /* call 0x0019ED5E */

loc_001F15EB: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    eax = eax + ecx;
    MEM32(esp + 0x30) = eax;
    goto loc_001F161B;

loc_001F15FF: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    eax = eax + ecx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x30) = eax;
    goto loc_001F161B;

loc_001F1617: ;
    MEM32(esp + 0x14) = edi;

loc_001F161B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    edi = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001F1520; /* jne: not equal / not zero */

loc_001F1625: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1644; /* jne: not equal / not zero */

loc_001F162D: ;
    POP32(esp, edi);
    eax = 0x5BC5D8;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_001F1644: ;
    POP32(esp, edi);
    eax = 0x46A728;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F1660
 * Original: 0x001F1660 - 0x001F1787 (295 bytes, 110 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1660: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    esp = esp - 0x1C;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x5BC5D8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    if (TEST_Z(_fa, _fb)) goto loc_001F16F7; /* je: equal / zero */

loc_001F167D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F1777; /* jle: less or equal (signed <=) */

loc_001F1685: ;
    PUSH32(esp, 0x1C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F1692u); RECOMP_ABI_CALL(0x0034D457u, sub_0034D457); /* call 0x0034D457 */

loc_001F1692: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1771; /* jne: not equal / not zero */

loc_001F169B: ;
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    esi = esi - edi;
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F16AD; /* jle: less or equal (signed <=) */

loc_001F16AB: ;
    esi = ebx;

loc_001F16AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F1771; /* jle: less or equal (signed <=) */

loc_001F16B5: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F16DF; /* je: equal / zero */

loc_001F16C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F16D9; /* jne: not equal / not zero */

loc_001F16C7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F16D5u); RECOMP_ABI_CALL(0x0034D3EDu, sub_0034D3ED); /* call 0x0034D3ED */

loc_001F16D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F16DF; /* jne: not equal / not zero */

loc_001F16D9: ;
    ebp = MEM32(0x46A728);

loc_001F16DF: ;
    ebx = ebx - esi;
    edi = edi + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001F1685; /* jg: greater (signed >) */

loc_001F16E7: ;
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

loc_001F16F7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F1777; /* jle: less or equal (signed <=) */

loc_001F16FB: ;
    goto loc_001F1700;

    /* nop */

loc_001F1700: ;
    PUSH32(esp, 0x1C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F170Du); RECOMP_ABI_CALL(0x0034D457u, sub_0034D457); /* call 0x0034D457 */

loc_001F170D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F1771; /* jne: not equal / not zero */

loc_001F1712: ;
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    esi = esi - edi;
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F1724; /* jle: less or equal (signed <=) */

loc_001F1722: ;
    esi = ebx;

loc_001F1724: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F1771; /* jle: less or equal (signed <=) */

loc_001F1728: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1743; /* je: equal / zero */

loc_001F1733: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1759; /* je: equal / zero */

loc_001F173A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1759; /* je: equal / zero */

loc_001F1741: ;
    goto loc_001F1753;

loc_001F1743: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F174Fu); RECOMP_ABI_CALL(0x0034D41Bu, sub_0034D41B); /* call 0x0034D41B */

loc_001F174F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1759; /* jne: not equal / not zero */

loc_001F1753: ;
    ebp = MEM32(0x46A728);

loc_001F1759: ;
    ebx = ebx - esi;
    edi = edi + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001F1700; /* jg: greater (signed >) */

loc_001F1761: ;
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

loc_001F1771: ;
    ebp = MEM32(0x46A728);

loc_001F1777: ;
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F1790
 * Original: 0x001F1790 - 0x001F17DC (76 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1790: ;
    eax = MEM32(0x5BC5F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001F17A6; /* jne: not equal / not zero */

loc_001F179C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F17A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F17A1: ;
    MEM32(0x5BC5F4) = eax;

loc_001F17A6: ;
    eax = MEM32(0x5BC5F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F17BB; /* jne: not equal / not zero */

loc_001F17AF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001F17B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F17B6: ;
    MEM32(0x5BC5F0) = eax;

loc_001F17BB: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x103000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F17D1u); RECOMP_ABI_CALL(0x0034D3EDu, sub_0034D3ED); /* call 0x0034D3ED */

loc_001F17D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_001F17D9; /* jne: not equal / not zero */

loc_001F17D6: ;
    eax = eax | 0xFFFFFFFFu;

loc_001F17D9: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001F17E0
 * Original: 0x001F17E0 - 0x001F1832 (82 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F17E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F17E0: ;
    eax = MEM32(0x5BC5FC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001F17FA; /* jne: not equal / not zero */

loc_001F17F0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F17F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F17F5: ;
    MEM32(0x5BC5FC) = eax;

loc_001F17FA: ;
    eax = MEM32(0x5BC5F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F180F; /* jne: not equal / not zero */

loc_001F1803: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001F180Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F180A: ;
    MEM32(0x5BC5F8) = eax;

loc_001F180F: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x8000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F1820u); RECOMP_ABI_CALL(0x0034D41Bu, sub_0034D41B); /* call 0x0034D41B */

loc_001F1820: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F182B; /* je: equal / zero */

loc_001F1824: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001F182B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F1840
 * Original: 0x001F1840 - 0x001F18CB (139 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1840: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, 0x1C);
    eax = esp + 0x10;
    MEM32(esi) = 0;
    PUSH32(esp, eax);
    MEM32(edi) = 0;
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = 0;
    MEM32(ebx) = 0;
    PUSH32(esp, 0x001F187Au); RECOMP_ABI_CALL(0x0034D457u, sub_0034D457); /* call 0x0034D457 */

loc_001F187A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F18C2; /* je: equal / zero */

loc_001F187E: ;
    edi = edi;

loc_001F1880: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    ecx = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_001F18A5; /* je: equal / zero */

loc_001F188F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F18A1; /* je: equal / zero */

loc_001F1896: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F18A7; /* jne: not equal / not zero */

loc_001F189D: ;
    MEM32(ebx) = MEM32(ebx) + ecx;
    goto loc_001F18A7;

loc_001F18A1: ;
    MEM32(edi) = MEM32(edi) + ecx;
    goto loc_001F18A7;

loc_001F18A5: ;
    MEM32(esi) = MEM32(esi) + ecx;

loc_001F18A7: ;
    eax = MEM32(esp + 0xC);
    eax = eax + ecx;
    PUSH32(esp, 0x1C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001F18BEu); RECOMP_ABI_CALL(0x0034D457u, sub_0034D457); /* call 0x0034D457 */

loc_001F18BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1880; /* jne: not equal / not zero */

loc_001F18C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F18D0
 * Original: 0x001F18D0 - 0x001F18D5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F18D0(void)
{

loc_001F18D0: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F18E0
 * Original: 0x001F18E0 - 0x001F191E (62 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F18E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F18E0: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F18E9u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_001F18E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F18EFu); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_001F18EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F18F6; /* jne: not equal / not zero */

loc_001F18F3: ;
    esp += 16; return; /* ret 12 */

loc_001F18F6: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    ecx = ecx + edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    MEM32(ecx) = eax;
    eax = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F1920
 * Original: 0x001F1920 - 0x001F197E (94 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F1920: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F1952; /* jle: less or equal (signed <=) */

loc_001F192E: ;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(ecx + 0x10);
    ebx = MEM32(eax);

loc_001F1937: ;
    eax = edx + edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(ebp + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001F1949; /* jae: above or equal (unsigned >=) */

loc_001F1944: ;
    edi = eax + 1;
    goto loc_001F194E;

loc_001F1949: ;
    if (CMP_BE(_fa, _fb)) goto loc_001F1977; /* jbe: below or equal (unsigned <=) */

loc_001F194B: ;
    edx = eax + -1;

loc_001F194E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1937; /* jl: less (signed <) */

loc_001F1952: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1974; /* je: equal / zero */

loc_001F1959: ;
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + edi * 4);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F1974; /* jb: below (unsigned <) */

loc_001F1969: ;
    if (CMP_A(_fa, _fb)) goto loc_001F1974; /* ja: above (unsigned >) */

loc_001F196B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001F1974: ;
    eax = eax | 0xFFFFFFFFu;

loc_001F1977: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1980
 * Original: 0x001F1980 - 0x001F19B7 (55 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1980: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F1985u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F1985: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F199B; /* je: equal / zero */

loc_001F1989: ;
    ecx = MEM32(esp + 4);
    /* nop */

loc_001F1990: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F19A9; /* je: equal / zero */

loc_001F1994: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1990; /* jne: not equal / not zero */

loc_001F199B: ;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

loc_001F19A9: ;
    SET_LO8(eax, 1);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F19C0
 * Original: 0x001F19C0 - 0x001F19E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F19C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F19C0: ;
    eax = MEM32(0x5BC274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F19D4; /* je: equal / zero */

loc_001F19C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F19E6; /* jne: not equal / not zero */

loc_001F19D4: ;
    PUSH32(esp, 0x2221E0);
    PUSH32(esp, 0x001F19DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F19DE: ;
    eax = MEM32(0x5BC274);
    esp = esp + 4;

loc_001F19E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F19F0
 * Original: 0x001F19F0 - 0x001F1A49 (89 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F19F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F19F0: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001F1A0C; /* jle: less or equal (signed <=) */

loc_001F19FE: ;
    edi = MEM32(esp + 0xC);

loc_001F1A02: ;
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1A0F; /* je: equal / zero */

loc_001F1A07: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1A02; /* jl: less (signed <) */

loc_001F1A0C: ;
    eax = eax | 0xFFFFFFFFu;

loc_001F1A0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F1A41; /* jge: greater or equal (signed >=) */

loc_001F1A13: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001F1A35; /* jge: greater or equal (signed >=) */

loc_001F1A1A: ;
    /* nop */

loc_001F1A20: ;
    esi = MEM32(ecx + 8);
    edi = MEM32(esi + edx * 4 + 4);
    esi = esi + edx * 4;
    MEM32(esi) = edi;
    esi = MEM32(ecx + 0xC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F1A20; /* jl: less (signed <) */

loc_001F1A35: ;
    edx = MEM32(ecx + 0xC);
    POP32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx + 0xC) = edx;
    esp += 8; return; /* ret 4 */

loc_001F1A41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F1A50
 * Original: 0x001F1A50 - 0x001F1A77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1A50: ;
    eax = MEM32(0x5BC2FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1A64; /* je: equal / zero */

loc_001F1A59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1A76; /* jne: not equal / not zero */

loc_001F1A64: ;
    PUSH32(esp, 0x2225B0);
    PUSH32(esp, 0x001F1A6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1A6E: ;
    eax = MEM32(0x5BC2FC);
    esp = esp + 4;

loc_001F1A76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1A80
 * Original: 0x001F1A80 - 0x001F1AB5 (53 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1A80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001F1AAB; /* je: equal / zero */

loc_001F1A8A: ;
    eax = MEM32(esi);
    edi = MEM32(0x5BC258);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001F1A97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001F1A97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1AAB; /* je: equal / zero */

loc_001F1A9B: ;
    goto loc_001F1AA0;

    /* nop */

loc_001F1AA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F1AB0; /* je: equal / zero */

loc_001F1AA4: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1AA0; /* jne: not equal / not zero */

loc_001F1AAB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F1AB0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F1AC0
 * Original: 0x001F1AC0 - 0x001F1AE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1AC0: ;
    eax = MEM32(0x5BC1C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1AD4; /* je: equal / zero */

loc_001F1AC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1AE6; /* jne: not equal / not zero */

loc_001F1AD4: ;
    PUSH32(esp, 0x2207E0);
    PUSH32(esp, 0x001F1ADEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1ADE: ;
    eax = MEM32(0x5BC1C4);
    esp = esp + 4;

loc_001F1AE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1AF0
 * Original: 0x001F1AF0 - 0x001F1B17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1AF0: ;
    eax = MEM32(0x5BC42C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1B04; /* je: equal / zero */

loc_001F1AF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1B16; /* jne: not equal / not zero */

loc_001F1B04: ;
    PUSH32(esp, 0x229460);
    PUSH32(esp, 0x001F1B0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1B0E: ;
    eax = MEM32(0x5BC42C);
    esp = esp + 4;

loc_001F1B16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1B20
 * Original: 0x001F1B20 - 0x001F1B47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1B20: ;
    eax = MEM32(0x5BC424);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1B34; /* je: equal / zero */

loc_001F1B29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1B46; /* jne: not equal / not zero */

loc_001F1B34: ;
    PUSH32(esp, 0x22A0B0);
    PUSH32(esp, 0x001F1B3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1B3E: ;
    eax = MEM32(0x5BC424);
    esp = esp + 4;

loc_001F1B46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1B50
 * Original: 0x001F1B50 - 0x001F1B77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1B50: ;
    eax = MEM32(0x5BC420);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1B64; /* je: equal / zero */

loc_001F1B59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1B76; /* jne: not equal / not zero */

loc_001F1B64: ;
    PUSH32(esp, 0x21EED0);
    PUSH32(esp, 0x001F1B6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1B6E: ;
    eax = MEM32(0x5BC420);
    esp = esp + 4;

loc_001F1B76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1B80
 * Original: 0x001F1B80 - 0x001F1BA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1B80: ;
    eax = MEM32(0x5BC41C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1B94; /* je: equal / zero */

loc_001F1B89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1BA6; /* jne: not equal / not zero */

loc_001F1B94: ;
    PUSH32(esp, 0x229360);
    PUSH32(esp, 0x001F1B9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1B9E: ;
    eax = MEM32(0x5BC41C);
    esp = esp + 4;

loc_001F1BA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1BB0
 * Original: 0x001F1BB0 - 0x001F1BD7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1BB0: ;
    eax = MEM32(0x5BC418);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1BC4; /* je: equal / zero */

loc_001F1BB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1BD6; /* jne: not equal / not zero */

loc_001F1BC4: ;
    PUSH32(esp, 0x2292E0);
    PUSH32(esp, 0x001F1BCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1BCE: ;
    eax = MEM32(0x5BC418);
    esp = esp + 4;

loc_001F1BD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1BE0
 * Original: 0x001F1BE0 - 0x001F1C07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1BE0: ;
    eax = MEM32(0x5BC414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1BF4; /* je: equal / zero */

loc_001F1BE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1C06; /* jne: not equal / not zero */

loc_001F1BF4: ;
    PUSH32(esp, 0x22ABA0);
    PUSH32(esp, 0x001F1BFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1BFE: ;
    eax = MEM32(0x5BC414);
    esp = esp + 4;

loc_001F1C06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1C10
 * Original: 0x001F1C10 - 0x001F1C37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1C10: ;
    eax = MEM32(0x5BC40C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1C24; /* je: equal / zero */

loc_001F1C19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1C36; /* jne: not equal / not zero */

loc_001F1C24: ;
    PUSH32(esp, 0x229F80);
    PUSH32(esp, 0x001F1C2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1C2E: ;
    eax = MEM32(0x5BC40C);
    esp = esp + 4;

loc_001F1C36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1C40
 * Original: 0x001F1C40 - 0x001F1C67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1C40: ;
    eax = MEM32(0x5BC408);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1C54; /* je: equal / zero */

loc_001F1C49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1C66; /* jne: not equal / not zero */

loc_001F1C54: ;
    PUSH32(esp, 0x2291E0);
    PUSH32(esp, 0x001F1C5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1C5E: ;
    eax = MEM32(0x5BC408);
    esp = esp + 4;

loc_001F1C66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1C70
 * Original: 0x001F1C70 - 0x001F1C97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1C70: ;
    eax = MEM32(0x5BC404);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1C84; /* je: equal / zero */

loc_001F1C79: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1C96; /* jne: not equal / not zero */

loc_001F1C84: ;
    PUSH32(esp, 0x22AAF0);
    PUSH32(esp, 0x001F1C8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1C8E: ;
    eax = MEM32(0x5BC404);
    esp = esp + 4;

loc_001F1C96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1CA0
 * Original: 0x001F1CA0 - 0x001F1CC7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1CA0: ;
    eax = MEM32(0x5BC400);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1CB4; /* je: equal / zero */

loc_001F1CA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1CC6; /* jne: not equal / not zero */

loc_001F1CB4: ;
    PUSH32(esp, 0x229160);
    PUSH32(esp, 0x001F1CBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1CBE: ;
    eax = MEM32(0x5BC400);
    esp = esp + 4;

loc_001F1CC6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1CD0
 * Original: 0x001F1CD0 - 0x001F1CF7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1CD0: ;
    eax = MEM32(0x5BC3FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1CE4; /* je: equal / zero */

loc_001F1CD9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1CF6; /* jne: not equal / not zero */

loc_001F1CE4: ;
    PUSH32(esp, 0x22AA50);
    PUSH32(esp, 0x001F1CEEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1CEE: ;
    eax = MEM32(0x5BC3FC);
    esp = esp + 4;

loc_001F1CF6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1D00
 * Original: 0x001F1D00 - 0x001F1D27 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1D00: ;
    eax = MEM32(0x5BC3F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1D14; /* je: equal / zero */

loc_001F1D09: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1D26; /* jne: not equal / not zero */

loc_001F1D14: ;
    PUSH32(esp, 0x2290E0);
    PUSH32(esp, 0x001F1D1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1D1E: ;
    eax = MEM32(0x5BC3F8);
    esp = esp + 4;

loc_001F1D26: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1D30
 * Original: 0x001F1D30 - 0x001F1D57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1D30: ;
    eax = MEM32(0x5BC3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1D44; /* je: equal / zero */

loc_001F1D39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1D56; /* jne: not equal / not zero */

loc_001F1D44: ;
    PUSH32(esp, 0x22A9B0);
    PUSH32(esp, 0x001F1D4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1D4E: ;
    eax = MEM32(0x5BC3F4);
    esp = esp + 4;

loc_001F1D56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1D60
 * Original: 0x001F1D60 - 0x001F1D87 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1D60: ;
    eax = MEM32(0x5BC3F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1D74; /* je: equal / zero */

loc_001F1D69: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1D86; /* jne: not equal / not zero */

loc_001F1D74: ;
    PUSH32(esp, 0x22E320);
    PUSH32(esp, 0x001F1D7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1D7E: ;
    eax = MEM32(0x5BC3F0);
    esp = esp + 4;

loc_001F1D86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1D90
 * Original: 0x001F1D90 - 0x001F1DB7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1D90: ;
    eax = MEM32(0x5BC3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1DA4; /* je: equal / zero */

loc_001F1D99: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1DB6; /* jne: not equal / not zero */

loc_001F1DA4: ;
    PUSH32(esp, 0x22A930);
    PUSH32(esp, 0x001F1DAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1DAE: ;
    eax = MEM32(0x5BC3EC);
    esp = esp + 4;

loc_001F1DB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1DC0
 * Original: 0x001F1DC0 - 0x001F1DE7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1DC0: ;
    eax = MEM32(0x5BC3E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1DD4; /* je: equal / zero */

loc_001F1DC9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1DE6; /* jne: not equal / not zero */

loc_001F1DD4: ;
    PUSH32(esp, 0x229060);
    PUSH32(esp, 0x001F1DDEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1DDE: ;
    eax = MEM32(0x5BC3E8);
    esp = esp + 4;

loc_001F1DE6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1DF0
 * Original: 0x001F1DF0 - 0x001F1E17 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1DF0: ;
    eax = MEM32(0x5BC3E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1E04; /* je: equal / zero */

loc_001F1DF9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1E16; /* jne: not equal / not zero */

loc_001F1E04: ;
    PUSH32(esp, 0x22A890);
    PUSH32(esp, 0x001F1E0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1E0E: ;
    eax = MEM32(0x5BC3E4);
    esp = esp + 4;

loc_001F1E16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1E20
 * Original: 0x001F1E20 - 0x001F1E47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1E20: ;
    eax = MEM32(0x5BC3E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1E34; /* je: equal / zero */

loc_001F1E29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1E46; /* jne: not equal / not zero */

loc_001F1E34: ;
    PUSH32(esp, 0x228FE0);
    PUSH32(esp, 0x001F1E3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1E3E: ;
    eax = MEM32(0x5BC3E0);
    esp = esp + 4;

loc_001F1E46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1E50
 * Original: 0x001F1E50 - 0x001F1E77 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1E50: ;
    eax = MEM32(0x5BC3DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1E64; /* je: equal / zero */

loc_001F1E59: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1E76; /* jne: not equal / not zero */

loc_001F1E64: ;
    PUSH32(esp, 0x22A7F0);
    PUSH32(esp, 0x001F1E6Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1E6E: ;
    eax = MEM32(0x5BC3DC);
    esp = esp + 4;

loc_001F1E76: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1E80
 * Original: 0x001F1E80 - 0x001F1EA7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1E80: ;
    eax = MEM32(0x5BC3D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1E94; /* je: equal / zero */

loc_001F1E89: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1EA6; /* jne: not equal / not zero */

loc_001F1E94: ;
    PUSH32(esp, 0x228F60);
    PUSH32(esp, 0x001F1E9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1E9E: ;
    eax = MEM32(0x5BC3D8);
    esp = esp + 4;

loc_001F1EA6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1EB0
 * Original: 0x001F1EB0 - 0x001F1ED7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1EB0: ;
    eax = MEM32(0x5BC3D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1EC4; /* je: equal / zero */

loc_001F1EB9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1ED6; /* jne: not equal / not zero */

loc_001F1EC4: ;
    PUSH32(esp, 0x228EE0);
    PUSH32(esp, 0x001F1ECEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1ECE: ;
    eax = MEM32(0x5BC3D4);
    esp = esp + 4;

loc_001F1ED6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1EE0
 * Original: 0x001F1EE0 - 0x001F1F07 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1EE0: ;
    eax = MEM32(0x5BC3D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1EF4; /* je: equal / zero */

loc_001F1EE9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1F06; /* jne: not equal / not zero */

loc_001F1EF4: ;
    PUSH32(esp, 0x228E60);
    PUSH32(esp, 0x001F1EFEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1EFE: ;
    eax = MEM32(0x5BC3D0);
    esp = esp + 4;

loc_001F1F06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1F10
 * Original: 0x001F1F10 - 0x001F1F37 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1F10: ;
    eax = MEM32(0x5BC3CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1F24; /* je: equal / zero */

loc_001F1F19: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1F36; /* jne: not equal / not zero */

loc_001F1F24: ;
    PUSH32(esp, 0x228DE0);
    PUSH32(esp, 0x001F1F2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1F2E: ;
    eax = MEM32(0x5BC3CC);
    esp = esp + 4;

loc_001F1F36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F1F40
 * Original: 0x001F1F40 - 0x001F1F67 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F1F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F1F40: ;
    eax = MEM32(0x5BC2B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F1F54; /* je: equal / zero */

loc_001F1F49: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F1F66; /* jne: not equal / not zero */

loc_001F1F54: ;
    PUSH32(esp, 0x235F20);
    PUSH32(esp, 0x001F1F5Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_001F1F5E: ;
    eax = MEM32(0x5BC2B4);
    esp = esp + 4;

loc_001F1F66: ;
    esp += 4; return; /* ret */

}
