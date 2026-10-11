/**
 * X-Men Legends - Recompiled code chunk 102
 * Functions: 234 (0x003BB6CE - 0x006F62B8)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003BB6CE
 * Original: 0x003BB6CE - 0x003BB79A (204 bytes, 58 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB6CE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BB6CE: ;
    eax = 0x3556CD;
    PUSH32(esp, 0x003BB6D8u); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_003BB6D8: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -28) = ebx;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -40;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x003BB6FCu); RECOMP_ABI_CALL(0x003BB5DBu, sub_003BB5DB); /* call 0x003BB5DB */

loc_003BB6FC: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BB765; /* jl: less (signed <) */

loc_003BB701: ;
    MEM32(ebp + -16) = 0x3BE6A0;
    MEM32(ebp + -20) = 0x431B20;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -20;
    MEM8(ebp + -4) = 1;
    PUSH32(esp, 0x003BB71Fu); RECOMP_ABI_CALL(0x003BB081u, sub_003BB081); /* call 0x003BB081 */

loc_003BB71F: ;
    MEM32(ebp + -16) = 0x3BE6DC;
    MEM32(ebp + -20) = 0x431B30;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -20;
    MEM8(ebp + -4) = 2;
    PUSH32(esp, 0x003BB73Du); RECOMP_ABI_CALL(0x003BB081u, sub_003BB081); /* call 0x003BB081 */

loc_003BB73D: ;
    MEM32(ebp + -16) = 0x3BE6C8;
    MEM32(ebp + -20) = 0x431B28;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -20;
    MEM8(ebp + -4) = 3;
    PUSH32(esp, 0x003BB75Bu); RECOMP_ABI_CALL(0x003BB081u, sub_003BB081); /* call 0x003BB081 */

loc_003BB75B: ;
    MEM8(ebp + -4) = LO8(ebx);
    MEM32(ebp + -20) = 0x431B18;

loc_003BB765: ;
    PUSH32(esp, 0x3BE6F0);
    PUSH32(esp, ebx);
    ecx = ebp + -40;
    PUSH32(esp, 0x003BB773u); RECOMP_ABI_CALL(0x003BB031u, sub_003BB031); /* call 0x003BB031 */

loc_003BB773: ;
    ecx = MEM32(ebp + -28);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    esi = MEM32(ebp + -40);
    if (CMP_EQ(_fa, _fb)) goto loc_003BB788; /* je: equal / zero */

loc_003BB781: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x003BB788u); RECOMP_ABI_CALL(0x003BB656u, sub_003BB656); /* call 0x003BB656 */

loc_003BB788: ;
    ecx = MEM32(ebp + -12);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BB79A
 * Original: 0x003BB79A - 0x003BB7CE (52 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BB79A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BB79A: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003BB7B6; /* jne: not equal / not zero */

loc_003BB7A1: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB7AC; /* je: equal / zero */

loc_003BB7A9: ;
    MEM32(eax) = MEM32(eax) & 0;

loc_003BB7AC: ;
    eax = 0x80004005u;
    MEM32(ecx + 0xC) = eax;
    goto loc_003BB7CB;

loc_003BB7B6: ;
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ecx + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003BB7C9; /* je: equal / zero */

loc_003BB7C2: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + eax * 4);
    MEM32(edx) = eax;

loc_003BB7C9: ;
    eax = 0; /* xor self */

loc_003BB7CB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BB7CE
 * Original: 0x003BB7CE - 0x003BB7DE (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB7CE(void)
{

loc_003BB7CE: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BB7DE
 * Original: 0x003BB7DE - 0x003BB7E6 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB7DE(void)
{

loc_003BB7DE: ;
    eax = MEM32(ecx + 0xC);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003BB7E6
 * Original: 0x003BB7E6 - 0x003BB7F8 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB7E6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BB7E6: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB7F7; /* je: equal / zero */

loc_003BB7EC: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BB7F7u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003BB7F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BB7F8
 * Original: 0x003BB7F8 - 0x003BB873 (123 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB7F8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BB7F8: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), eax (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_003BB85D; /* jne: not equal / not zero */

loc_003BB804: ;
    eax = eax * 4 + 0x40;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BB816u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003BB816: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003BB826; /* jne: not equal / not zero */

loc_003BB81C: ;
    eax = 0x8007000Eu;
    MEM32(ebx + 0xC) = eax;
    goto loc_003BB86E;

loc_003BB826: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB856; /* je: equal / zero */

loc_003BB82D: ;
    ecx = MEM32(ebx + 4);
    ecx = ecx << 2;
    eax = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    edi = ebp;
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
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003BB856; /* je: equal / zero */

loc_003BB84B: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BB856u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003BB856: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) + 0x10;
    MEM32(ebx) = ebp;
    POP32(esp, esi);

loc_003BB85D: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4) = edx;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */

loc_003BB86E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BB873
 * Original: 0x003BB873 - 0x003BB8B0 (61 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB873(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BB873: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BB8AE; /* je: equal / zero */

loc_003BB87B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    ebx = 0x24870000;
    if (CMP_BE(_fa, _fb)) goto loc_003BB89F; /* jbe: below or equal (unsigned <=) */

loc_003BB889: ;
    eax = MEM32(esi);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB899; /* je: equal / zero */

loc_003BB892: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BB899u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003BB899: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BB889; /* jb: below (unsigned <) */

loc_003BB89F: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB8AC; /* je: equal / zero */

loc_003BB8A5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BB8ACu); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003BB8AC: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003BB8AE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BB8B0
 * Original: 0x003BB8B0 - 0x003BB972 (194 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB8B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BB8B0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), eax (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003BB909; /* jne: not equal / not zero */

loc_003BB8BE: ;
    eax = eax * 4 + 0x40;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BB8D0u); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003BB8D0: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB933; /* je: equal / zero */

loc_003BB8D6: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB903; /* je: equal / zero */

loc_003BB8DC: ;
    ecx = MEM32(ebx + 4);
    ecx = ecx << 2;
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp;
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
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB903; /* je: equal / zero */

loc_003BB8F8: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BB903u); RECOMP_ABI_CALL(0x001A1E7Bu, sub_001A1E7B); /* call 0x001A1E7B */

loc_003BB903: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) + 0x10;
    MEM32(ebx) = ebp;

loc_003BB909: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BB95D; /* je: equal / zero */

loc_003BB911: ;
    eax = esi;
    edi = eax + 1;

loc_003BB916: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003BB916; /* jne: not equal / not zero */

loc_003BB91D: ;
    eax = eax - edi;
    ebp = eax;
    PUSH32(esp, 0x24870000);
    eax = ebp + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BB92Fu); RECOMP_ABI_CALL(0x001A1DDBu, sub_001A1DDB); /* call 0x001A1DDB */

loc_003BB92F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003BB93D; /* jne: not equal / not zero */

loc_003BB933: ;
    eax = 0x8007000Eu;
    MEM32(ebx + 0xC) = eax;
    goto loc_003BB96B;

loc_003BB93D: ;
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
    MEM8(eax + ebp) = 0;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    MEM32(edx + ecx * 4) = eax;
    goto loc_003BB966;

loc_003BB95D: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    MEM32(ecx + eax * 4) = MEM32(ecx + eax * 4) & 0;

loc_003BB966: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */

loc_003BB96B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BB972
 * Original: 0x003BB972 - 0x003BB975 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB972(void)
{

loc_003BB972: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BB975
 * Original: 0x003BB975 - 0x003BB976 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB975(void)
{

loc_003BB975: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BB976
 * Original: 0x003BB976 - 0x003BB97B (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BB976(void)
{

loc_003BB976: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BB97B
 * Original: 0x003BB97B - 0x003BB980 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BB97B(void)
{

loc_003BB97B: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003BCE7E
 * Original: 0x003BCE7E - 0x003BD4A9 (1579 bytes, 869 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BCE7E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BCE7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BCED3 - dead code, label not in function */

loc_003BCE90: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BCF08 - dead code, label not in function */

loc_003BCE94: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BCEC9 - dead code, label not in function */

loc_003BCE98: ;
    _cf = 0; /* logical op clears CF */
    MEM8(0x25783020) = MEM8(0x25783020) & HI8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BCEDD; /* js: sign (negative) */

loc_003BCEA2: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    if (_flags /* jo: overflow */) goto loc_003BCF19;

loc_003BCEA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BCEFB;

loc_003BCEB8: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BCF30 - dead code, label not in function */

loc_003BCEBC: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BCEF0;

loc_003BCEC0: ;
    _cf = 0; /* logical op clears CF */
    MEM8(0x25783020) = MEM8(0x25783020) & HI8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BCF05; /* js: sign (negative) */

loc_003BCECA: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x30) = MEM8(eax + 0x30) & HI8(ebx);
    _cf = (int)((uint32_t)(MEM32(ebx)) < (uint32_t)(edi));
    MEM32(ebx) = MEM32(ebx) - edi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x50) = MEM8(eax + 0x50) & HI8(ebx);
    PUSH32(esp, ebx);
    POP32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BCEDD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    PUSH32(esp, esp);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BCEF0: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    POP32(esp, edi);
    PUSH32(esp, edx);

loc_003BCEFB: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) ^ HI8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BCF23; /* jl: less (signed <) */

loc_003BCF03: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(eax);

loc_003BCF05: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BCF2B; /* jl: less (signed <) */

loc_003BCF0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    POP32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BCF19: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    PUSH32(esp, esp);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_003BCF23: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BCF2B: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    POP32(esp, edi);
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) ^ eax;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(edx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x53) = MEM8(eax + 0x53) & LO8(edx);
    POP32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    PUSH32(esp, esp);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    POP32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BCFC1;

loc_003BCF78: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) goto loc_003BCFF0;

loc_003BCF7B: ;
    if (_flags /* je: equal / zero */) goto loc_003BCFF0;

loc_003BCF7D: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x435F5350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x435F5350 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD00D - dead code, label not in function */

loc_003BCF9A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BCFF5;

loc_003BCFAC: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) goto loc_003BD024;

loc_003BCFAF: ;
    if (_flags /* je: equal / zero */) goto loc_003BD024;

loc_003BCFB1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x435F5350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x435F5350 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);

loc_003BCFC1: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    /* TODO: das  */
    /* TODO: das  */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x46202D2D));
    eax = eax - 0x46202D2D;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD00B;

loc_003BCFEB: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;

loc_003BCFF0: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;

loc_003BCFF5: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xA2D2D));
    eax = eax - 0xA2D2D;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (_flags /* jo: overflow */) goto loc_003BD071;

loc_003BCFFE: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD07B;

loc_003BD007: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD03C - dead code, label not in function */

loc_003BD00B: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3D205D64;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(edx);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BD03A - dead code, label not in function */ /* js: sign (negative) */

loc_003BD015: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD054; /* js: sign (negative) */

loc_003BD019: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */

loc_003BD024: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD09B;

loc_003BD027: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BD05B;

loc_003BD02B: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3D205D64;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(edx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD05A; /* js: sign (negative) */

loc_003BD035: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD074; /* js: sign (negative) */

loc_003BD039: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jo: overflow */) goto loc_003BD0AE;

loc_003BD046: ;
    /* TODO: popal  */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) (void)0; /* goto loc_003BD0BE - dead code, label not in function */ /* jne: not equal / not zero */

loc_003BD04A: ;
    if ((_fb != 0)) (void)0; /* goto loc_003BD0C1 - dead code, label not in function */ /* jo: overflow */

loc_003BD04C: ;
    if ((_fa == 0)) (void)0; /* goto loc_003BD0C1 - dead code, label not in function */ /* je: equal / zero */

loc_003BD04E: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x503D5D64;

loc_003BD054: ;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BD05A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD05B: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD08F; /* jl: less (signed <) */

loc_003BD06F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);

loc_003BD071: ;
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD074: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD07B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    PUSH32(esp, esp);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);

loc_003BD08F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD0B7; /* jl: less (signed <) */

loc_003BD097: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BD09B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD0AE: ;
    PUSH32(esp, ebp);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    PUSH32(esp, esp);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);

loc_003BD0B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0x207C2073) = MEM8(0x207C2073) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x73;
    if (_flags /* jo: overflow */) goto loc_003BD149;

loc_003BD0D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) (void)0; /* goto loc_003BD154 - dead code, label not in function */ /* jne: not equal / not zero */

loc_003BD0E0: ;
    if ((_fb != 0)) goto loc_003BD157; /* jo: overflow */

loc_003BD0E2: ;
    if ((_fa == 0)) goto loc_003BD157; /* je: equal / zero */

loc_003BD0E4: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x503D5D64;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD172 - dead code, label not in function */

loc_003BD10A: ;
    /* TODO: popal  */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD184 - dead code, label not in function */

loc_003BD10F: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD184 - dead code, label not in function */

loc_003BD111: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x503D5D64;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) goto loc_003BD1AE;

loc_003BD139: ;
    if (_flags /* je: equal / zero */) goto loc_003BD1AE;

loc_003BD13B: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x503D5D64;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD149: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    /* TODO: das  */
    /* TODO: das  */

loc_003BD157: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x53202D2D));
    eax = eax - 0x53202D2D;
    if ((eax == 0)) (void)0; /* goto loc_003BD1C9 - dead code, label not in function */ /* je: equal / zero */

loc_003BD168: ;
    _cf = 0; /* logical op clears CF */
    MEM8(LO16(edi)) = MEM8(LO16(edi)) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + 0x2D2D2D2D) = MEM8(XBOX_FS_BASE + 0x2D2D2D2D) & HI8(ecx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xA2D2D));
    eax = eax - 0xA2D2D;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0x207C2073) = MEM8(0x207C2073) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xA2C73;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0x207C2073) = MEM8(0x207C2073) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xA3B2973;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD1AE: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xA2C73;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD23D - dead code, label not in function */

loc_003BD1CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* jo: overflow */) goto loc_003BD234;

loc_003BD1D3: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD23A;

loc_003BD1D5: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x435F5350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x435F5350 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(edx + ecx) = MEM8(edx + ecx) ^ HI8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD24B - dead code, label not in function */

loc_003BD1FE: ;
    /* TODO: popal  */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD271 - dead code, label not in function */

loc_003BD201: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x5F53503D);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD28D - dead code, label not in function */

loc_003BD21A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD297 - dead code, label not in function */

loc_003BD222: ;
    if (_flags /* je: equal / zero */) goto loc_003BD278;

loc_003BD224: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BD29B - dead code, label not in function */

loc_003BD227: ;
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BD29B - dead code, label not in function */

loc_003BD229: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x495F5350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x495F5350 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, esp);

loc_003BD234: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, eax);
    PUSH32(esp, esp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BD23A: ;
    _cf = (int)((uint32_t)(MEM8(0x64252C64)) < (uint32_t)(HI8(eax)));
    MEM8(0x64252C64) = MEM8(0x64252C64) - HI8(eax);
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x25));
    SET_LO8(eax, LO8(eax) - 0x25);
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x25));
    SET_LO8(eax, LO8(eax) - 0x25);
    _cf = (int)((uint32_t)(MEM32(XBOX_FS_BASE + ebx)) < (uint32_t)(edi));
    MEM32(XBOX_FS_BASE + ebx) = MEM32(XBOX_FS_BASE + ebx) - edi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xA3B2973;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0xA2C73) = MEM8(0xA2C73) & HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esp);
    if (((int32_t)MEM8(eax + 0x73) < 0)) goto loc_003BD2E2; /* js: sign (negative) */

loc_003BD26E: ;
    if ((MEM8(eax + 0x73) != 0)) goto loc_003BD2E2; /* jne: not equal / not zero */

loc_003BD270: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD2B4;

loc_003BD277: ;
    PUSH32(esp, eax);

loc_003BD278: ;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    PUSH32(esp, esp);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, eax);
    PUSH32(esp, esp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xA3B2973;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0xA2C64) = MEM8(0xA2C64) & HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */

loc_003BD2B4: ;
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD2FE;

loc_003BD2BB: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BD32C - dead code, label not in function */

loc_003BD2BE: ;
    if (_flags /* je: equal / zero */) goto loc_003BD2FD;

loc_003BD2C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(LO8(ecx)));
    MEM8(edx) = MEM8(edx) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    POP32(esp, edx);
    if (_cf) goto loc_003BD347; /* jb: below (unsigned <) */

loc_003BD2D8: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BD357 - dead code, label not in function */

loc_003BD2DE: ;
    _cf = (int)((uint32_t)(MEM8(esi)) < (uint32_t)(HI8(eax)));
    MEM8(esi) = MEM8(esi) - HI8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD355 - dead code, label not in function */

loc_003BD2E2: ;
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x20));
    SET_LO8(eax, LO8(eax) - 0x20);
    if (!_cf) (void)0; /* goto loc_003BD350 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BD2E7: ;
    if (_flags /* jp: parity */) (void)0; /* goto loc_003BD34E - dead code, label not in function */

loc_003BD2E9: ;
    /* TODO: outsd dx, dword ptr [esi] */
    _cf = (int)((uint32_t)(MEM8(eax + 0x73)) < (uint32_t)(HI8(edx)));
    MEM8(eax + 0x73) = MEM8(eax + 0x73) - HI8(edx);
    _cf = (int)((uint32_t)(MEM32(XBOX_FS_BASE + ecx)) < (uint32_t)(ebp));
    MEM32(XBOX_FS_BASE + ecx) = MEM32(XBOX_FS_BASE + ecx) - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(ebx + esi + 0x44)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx + esi + 0x44) = MEM8(ebx + esi + 0x44) + LO8(eax);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);

loc_003BD2FD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD2FE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x73) = MEM8(eax + 0x73) & HI8(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(XBOX_FS_BASE + edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(XBOX_FS_BASE + edx) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + LO8(ecx);
    if ((_cf || MEM8(ecx + 0x6E) == 0)) goto loc_003BD371; /* jbe: below or equal (unsigned <=) */

loc_003BD310: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(eax + 0x74) * (int32_t)0x75747865);
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD380;

loc_003BD31B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(eax);
    if ((MEM8(ebp + 0x73) == 0)) goto loc_003BD38A; /* je: equal / zero */

loc_003BD321: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) goto loc_003BD38E;

loc_003BD325: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(edx);
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0xA2E7265);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    PUSH32(esp, ebp);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD39D;

loc_003BD338: ;
    /* TODO: arpl word ptr [edi + 0x67], bp */
    /* TODO: outsb dx, byte ptr [esi] */
    edi = (uint32_t)((int32_t)MEM32(edx + 0x65) * (int32_t)0x6E492064);
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD3B9;

loc_003BD345: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BD3BC - dead code, label not in function */

loc_003BD347: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(edi + 0x6E)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + 0x6E) = MEM8(edi + 0x6E) + LO8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x72) = MEM8(edi + 0x72) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) & HI8(ecx);
    if (0) (void)0; /* goto loc_003BD3C0 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BD35B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD3D0 - dead code, label not in function */

loc_003BD361: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BD3D9;

loc_003BD366: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x66) = MEM8(edi + 0x66) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) & HI8(eax);
    if (_flags /* jo: overflow */) goto loc_003BD3D7;

loc_003BD36E: ;
    if (((int32_t)MEM8(ecx + 0x20) < 0)) goto loc_003BD3D5; /* js: sign (negative) */

loc_003BD370: ;
    /* TODO: insb byte ptr es:[edi], dx */

loc_003BD371: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x68) = MEM8(ebx + 0x68) & HI8(edx);
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BD399 - dead code, label not in function */

loc_003BD379: ;
    /* TODO: arpl word ptr [edi + 0x6e], bp */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BD3F2 - dead code, label not in function */

loc_003BD37E: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */

loc_003BD380: ;
    if (_flags /* je: equal / zero */) goto loc_003BD3A2;

loc_003BD382: ;
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BD3EA - dead code, label not in function */

loc_003BD385: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x65) = MEM8(esi + 0x65) & HI8(ecx);
    /* TODO: popal  */

loc_003BD38A: ;
    if (_flags /* je: equal / zero */) goto loc_003BD3F5;

loc_003BD38C: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_003BD3F3;

loc_003BD38E: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x6E)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp + 0x6E) = MEM8(ebp + 0x6E) + LO8(edx);
    /* TODO: popal  */
    /* TODO: bound ebp, qword ptr [ebp + 0x20] */
    if (_flags /* je: equal / zero */) goto loc_003BD40C;

loc_003BD39D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x72) = MEM8(ebx + 0x72) & HI8(eax);
    /* TODO: popal  */

loc_003BD3A2: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD409 - dead code, label not in function */

loc_003BD3A4: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x75) = MEM8(edi + 0x75) & HI8(ecx);
    if ((MEM8(edi + 0x75) == 0)) goto loc_003BD419; /* je: equal / zero */

loc_003BD3A9: ;
    if ((MEM8(edi + 0x75) != 0)) goto loc_003BD41F; /* jne: not equal / not zero */

loc_003BD3AB: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x75) = MEM8(edx + 0x75) & HI8(eax);
    if (0) goto loc_003BD3E1; /* jb: below (unsigned <) */

loc_003BD3B3: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD3B9: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD3D5: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD3D7: ;
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);

loc_003BD3D9: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD3E1: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD3F3: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD3F5: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD40C: ;
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */

loc_003BD419: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD41F: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + -1610612736)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + -1610612736) = MEM8(eax + -1610612736) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: pushal  */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));

}

/**
 * sub_003BD5B6
 * Original: 0x003BD5B6 - 0x003BE72F (4473 bytes, 1831 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BD5B6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BD5B6: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD621;

loc_003BD5BC: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + ebp * 2 + 0x61) = MEM8(eax + ebp * 2 + 0x61) & HI8(edx);
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(edx) = MEM8(edx) & HI8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD63D;

loc_003BD5C9: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD640 - dead code, label not in function */

loc_003BD5CD: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ecx + 0x6E) = MEM8(XBOX_FS_BASE + ecx + 0x6E) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) & HI8(edx);
    /* TODO: popal  */
    _cf = 0; /* logical op clears CF */
    MEM8(LO16(edi)) = MEM8(LO16(edi)) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xA;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD64D;

loc_003BD5E8: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + ebp * 2 + 0x61) = MEM8(eax + ebp * 2 + 0x61) & HI8(edx);
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(edx) = MEM8(edx) & HI8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD669;

loc_003BD5F5: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD66C - dead code, label not in function */

loc_003BD5F9: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ecx + 0x6E) = MEM8(XBOX_FS_BASE + ecx + 0x6E) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x69) = MEM8(esi + 0x69) & HI8(eax);
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD63F;

loc_003BD611: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x6E49000A;
    if (0) goto loc_003BD679; /* jbe: below or equal (unsigned <=) */

loc_003BD618: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(eax + 0x63) * (int32_t)0x74736E6F);

loc_003BD621: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD645 - dead code, label not in function */

loc_003BD625: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BD696 - dead code, label not in function */

loc_003BD627: ;
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BD69B - dead code, label not in function */

loc_003BD629: ;
    /* TODO: arpl word ptr [ebp + 0x20], sp */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD693;

loc_003BD62E: ;
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0xD2E7265);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    if (_flags /* jo: overflow */) goto loc_003BD6AD;

loc_003BD63A: ;
    PUSH32(esp, eax);

loc_003BD63D: ;
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BD63F: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BD68F - dead code, label not in function */

loc_003BD64C: ;
    /* TODO: outsd dx, dword ptr [esi] */

loc_003BD64D: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BD6C4 - dead code, label not in function */

loc_003BD650: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BD6C7;

loc_003BD654: ;
    _cf = 0; /* logical op clears CF */
    MEM8(0x25783020) = MEM8(0x25783020) & HI8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD699; /* js: sign (negative) */

loc_003BD65E: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xA;
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);

loc_003BD669: ;
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x61) = MEM32(ebp + 0x61) ^ ecx;
    if (_flags /* jo: overflow */) goto loc_003BD6E0;

loc_003BD670: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x30203D20);
    if (_flags /* js: sign (negative) */) goto loc_003BD69E;

loc_003BD679: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD6B8; /* js: sign (negative) */

loc_003BD67D: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x7370000A;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) ^ LO8(ecx);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD6FC - dead code, label not in function */

loc_003BD68C: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x30203D20);

loc_003BD693: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BD6BA - dead code, label not in function */

loc_003BD695: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BD6D4 - dead code, label not in function */ /* js: sign (negative) */

loc_003BD699: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x7370000A;

loc_003BD69E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */

loc_003BD6AD: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD6F3;

loc_003BD6B0: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD728;

loc_003BD6B4: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD6E9 - dead code, label not in function */

loc_003BD6B8: ;
    _cf = 0; /* logical op clears CF */
    MEM8(0x25783020) = MEM8(0x25783020) & HI8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BD6FD - dead code, label not in function */ /* js: sign (negative) */

loc_003BD6C2: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xA;

loc_003BD6C7: ;
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BD71F - dead code, label not in function */

loc_003BD6DC: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BD754 - dead code, label not in function */

loc_003BD6E0: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BD714;

loc_003BD6E4: ;
    _cf = 0; /* logical op clears CF */
    MEM8(0x25783020) = MEM8(0x25783020) & HI8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD729; /* js: sign (negative) */

loc_003BD6EE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xA;

loc_003BD6F3: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD717; /* jl: less (signed <) */

loc_003BD6F7: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) ^ HI8(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0xA) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD75D;

loc_003BD714: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD78C - dead code, label not in function */

loc_003BD717: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD78C - dead code, label not in function */

loc_003BD719: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x435F5350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x435F5350 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);

loc_003BD728: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD729: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(0xA)) < (uint32_t)(LO8(ecx)));
    MEM8(0xA) = MEM8(0xA) - LO8(ecx);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD7A9 - dead code, label not in function */

loc_003BD736: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BD791 - dead code, label not in function */

loc_003BD748: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) goto loc_003BD7C0;

loc_003BD74B: ;
    if (_flags /* je: equal / zero */) goto loc_003BD7C0;

loc_003BD74D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x435F5350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x435F5350 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);

loc_003BD75D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(0xD00000A)) < (uint32_t)(LO8(ecx)));
    MEM8(0xD00000A) = MEM8(0xD00000A) - LO8(ecx);
    _cf = 0; /* logical op clears CF */
    SET_HI8(ecx, HI8(ecx) | MEM8(edi));
    /* TODO: das  */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x46202D2D));
    eax = eax - 0x46202D2D;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6D6F436C);
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD7A8;

loc_003BD788: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xA0D2D2D));
    eax = eax - 0xA0D2D2D;
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD817;

loc_003BD7A3: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD7D8 - dead code, label not in function */

loc_003BD7A7: ;
    POP32(esp, ebx);

loc_003BD7A8: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3D205D64;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(edx);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BD7D6 - dead code, label not in function */ /* js: sign (negative) */

loc_003BD7B1: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD7F0; /* js: sign (negative) */

loc_003BD7B5: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x7370000A;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */

loc_003BD7C0: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BD837;

loc_003BD7C3: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BD7F7;

loc_003BD7C7: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3D205D64;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(edx);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BD7F6; /* js: sign (negative) */

loc_003BD7D1: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ HI8(ebx);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BD810 - dead code, label not in function */ /* js: sign (negative) */

loc_003BD7D5: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x7370000A;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD84A - dead code, label not in function */

loc_003BD7E2: ;
    /* TODO: popal  */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BD85A; /* jne: not equal / not zero */

loc_003BD7E6: ;
    if ((_fb != 0)) goto loc_003BD85D; /* jo: overflow */

loc_003BD7E8: ;
    if ((_fa == 0)) goto loc_003BD85D; /* je: equal / zero */

loc_003BD7EA: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x503D5D64;

loc_003BD7F0: ;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BD7F6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD7F7: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(0xA)) < (uint32_t)(LO8(ecx)));
    MEM8(0xA) = MEM8(0xA) - LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0xA) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);

loc_003BD817: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) (void)0; /* goto loc_003BD890 - dead code, label not in function */ /* jne: not equal / not zero */

loc_003BD81C: ;
    if ((_fb != 0)) goto loc_003BD893; /* jo: overflow */

loc_003BD81E: ;
    if ((_fa == 0)) goto loc_003BD893; /* je: equal / zero */

loc_003BD820: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x503D5D64;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);

loc_003BD837: ;
    _cf = (int)((uint32_t)(MEM8(0x7000000A)) < (uint32_t)(LO8(ecx)));
    MEM8(0x7000000A) = MEM8(0x7000000A) - LO8(ecx);
    if (!_cf) goto loc_003BD8A3; /* jae: above or equal (unsigned >=) */

loc_003BD83F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD8AE - dead code, label not in function */

loc_003BD846: ;
    /* TODO: popal  */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) goto loc_003BD8C0;

loc_003BD84B: ;
    if (_flags /* je: equal / zero */) goto loc_003BD8C0;

loc_003BD84D: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x503D5D64;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD85A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);

loc_003BD85D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(0x7000000A)) < (uint32_t)(LO8(ecx)));
    MEM8(0x7000000A) = MEM8(0x7000000A) - LO8(ecx);
    if (!_cf) (void)0; /* goto loc_003BD8CF - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BD86B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD8EA - dead code, label not in function */

loc_003BD875: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD8EA - dead code, label not in function */

loc_003BD877: ;
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x503D5D64;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(0xA)) < (uint32_t)(LO8(ecx)));
    MEM8(0xA) = MEM8(0xA) - LO8(ecx);

loc_003BD893: ;
    _cf = (int)((((uint64_t)(MEM8(0x2D2F2F0A)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(0x2D2F2F0A) = MEM8(0x2D2F2F0A) + LO8(ecx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;

loc_003BD8A3: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x7453202D));
    eax = eax - 0x7453202D;
    /* TODO: popal  */
    _cf = 0; /* logical op clears CF */
    MEM8(LO16(edi)) = MEM8(LO16(edi)) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + 0x2D2D2D2D) = MEM8(XBOX_FS_BASE + 0x2D2D2D2D) & HI8(ecx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x2D2D2D2D));
    eax = eax - 0x2D2D2D2D;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xA0D2D2D));
    eax = eax - 0xA0D2D2D;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BD8C0: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xA0D2C73;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0x207C2073) = MEM8(0x207C2073) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xD3B2973;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xA0D2C73;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (_flags /* jo: overflow */) goto loc_003BD981;

loc_003BD90E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* jo: overflow */) goto loc_003BD978;

loc_003BD917: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BD97E;

loc_003BD919: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x435F5350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x435F5350 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(MEM8(0x2020000A)) < (uint32_t)(LO8(ecx)));
    MEM8(0x2020000A) = MEM8(0x2020000A) - LO8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0xA) = MEM8(ecx + 0xA) ^ HI8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BD993 - dead code, label not in function */

loc_003BD946: ;
    /* TODO: popal  */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD9B9 - dead code, label not in function */

loc_003BD949: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x5F53503D);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(MEM8(0xA)) < (uint32_t)(LO8(ecx)));
    MEM8(0xA) = MEM8(0xA) - LO8(ecx);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD9D5 - dead code, label not in function */

loc_003BD962: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BD9DF - dead code, label not in function */

loc_003BD96A: ;
    if (_flags /* je: equal / zero */) goto loc_003BD9C0;

loc_003BD96C: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BD9E3 - dead code, label not in function */

loc_003BD96F: ;
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BD9E3 - dead code, label not in function */

loc_003BD971: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x495F5350) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x495F5350 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BD978: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esp);
    PUSH32(esp, esp);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, eax);

loc_003BD97E: ;
    PUSH32(esp, esp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);

loc_003BD981: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(MEM8(0x64252C64)) < (uint32_t)(HI8(eax)));
    MEM8(0x64252C64) = MEM8(0x64252C64) - HI8(eax);
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x25));
    SET_LO8(eax, LO8(eax) - 0x25);
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x25));
    SET_LO8(eax, LO8(eax) - 0x25);
    _cf = (int)((uint32_t)(MEM32(XBOX_FS_BASE + ebx)) < (uint32_t)(edi));
    MEM32(XBOX_FS_BASE + ebx) = MEM32(XBOX_FS_BASE + ebx) - edi;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x2000000A;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0xD3B2973) = MEM8(0xD3B2973) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0xA0D2C73) = MEM8(0xA0D2C73) & HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esp);
    if (((int32_t)MEM8(eax + 0x73) < 0)) goto loc_003BDA2A; /* js: sign (negative) */

loc_003BD9B6: ;
    if ((MEM8(eax + 0x73) != 0)) goto loc_003BDA2A; /* jne: not equal / not zero */

loc_003BD9B8: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BD9FC - dead code, label not in function */

loc_003BD9BF: ;
    PUSH32(esp, eax);

loc_003BD9C0: ;
    PUSH32(esp, ebx);
    POP32(esp, edi);
    PUSH32(esp, esp);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, eax);
    PUSH32(esp, esp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    _cf = (int)((uint32_t)(MEM8(0xA)) < (uint32_t)(LO8(ecx)));
    MEM8(0xA) = MEM8(0xA) - LO8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x207C2073;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xD3B2973;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(0xA0D2C64) = MEM8(0xA0D2C64) & HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x73)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x73) = MEM8(eax + 0x73) + HI8(edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDA4A;

loc_003BDA07: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BDA78 - dead code, label not in function */

loc_003BDA0A: ;
    if (_flags /* je: equal / zero */) goto loc_003BDA49;

loc_003BDA0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    _cf = (int)((uint32_t)(MEM8(0x655A000A)) < (uint32_t)(LO8(ecx)));
    MEM8(0x655A000A) = MEM8(0x655A000A) - LO8(ecx);
    if (_cf) goto loc_003BDA93; /* jb: below (unsigned <) */

loc_003BDA24: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDAA3 - dead code, label not in function */

loc_003BDA2A: ;
    _cf = (int)((uint32_t)(MEM8(esi)) < (uint32_t)(HI8(eax)));
    MEM8(esi) = MEM8(esi) - HI8(eax);
    if (_flags /* jo: overflow */) goto loc_003BDAA1;

loc_003BDA2E: ;
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x20));
    SET_LO8(eax, LO8(eax) - 0x20);
    if (!_cf) (void)0; /* goto loc_003BDA9C - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BDA33: ;
    if (_flags /* jp: parity */) (void)0; /* goto loc_003BDA9A - dead code, label not in function */

loc_003BDA35: ;
    /* TODO: outsd dx, dword ptr [esi] */
    _cf = (int)((uint32_t)(MEM8(eax + 0x73)) < (uint32_t)(HI8(edx)));
    MEM8(eax + 0x73) = MEM8(eax + 0x73) - HI8(edx);
    _cf = (int)((uint32_t)(MEM32(XBOX_FS_BASE + ecx)) < (uint32_t)(ebp));
    MEM32(XBOX_FS_BASE + ecx) = MEM32(XBOX_FS_BASE + ecx) - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0xA) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(ebx + esi + 0x44)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx + esi + 0x44) = MEM8(ebx + esi + 0x44) + LO8(eax);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BDA49: ;
    POP32(esp, eax);

loc_003BDA4A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x73) = MEM8(eax + 0x73) & HI8(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(XBOX_FS_BASE + 0xA)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(XBOX_FS_BASE + 0xA) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(ecx);
    /* TODO: das  */
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x70) = MEM8(edi + 0x70) & LO8(ecx);
    if ((MEM8(edi + 0x70) == 0)) (void)0; /* goto loc_003BDAD0 - dead code, label not in function */ /* je: equal / zero */

loc_003BDA67: ;
    /* TODO: insd dword ptr es:[edi], dx */
    edi = (uint32_t)((int32_t)MEM32(edx + 0x65) * (int32_t)0x68732064);
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDA81 - dead code, label not in function */

loc_003BDA74: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(0x6E49000A));
    if (0) (void)0; /* goto loc_003BDADD - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_003BDA7C: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(eax + 0x74) * (int32_t)0x75747865);
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDAEC;

loc_003BDA87: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(eax);
    if ((MEM8(ebp + 0x73) == 0)) (void)0; /* goto loc_003BDAF6 - dead code, label not in function */ /* je: equal / zero */

loc_003BDA8D: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) goto loc_003BDAFA;

loc_003BDA91: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */

loc_003BDA93: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(edx);
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0xD2E7265);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    PUSH32(esp, ebp);

loc_003BDAA1: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDB09;

loc_003BDAA4: ;
    /* TODO: arpl word ptr [edi + 0x67], bp */
    /* TODO: outsb dx, byte ptr [esi] */
    edi = (uint32_t)((int32_t)MEM32(edx + 0x65) * (int32_t)0x6E492064);
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BDB25 - dead code, label not in function */

loc_003BDAB1: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDB28 - dead code, label not in function */

loc_003BDAB3: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xA;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x72) = MEM8(edi + 0x72) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x6F) = MEM8(ebp + 0x6F) & HI8(ecx);
    if (0) (void)0; /* goto loc_003BDB30 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BDACB: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BDB40 - dead code, label not in function */

loc_003BDAD1: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BDB49;

loc_003BDAD6: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x66) = MEM8(edi + 0x66) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) & HI8(eax);
    if (_flags /* jo: overflow */) goto loc_003BDB47;

loc_003BDADE: ;
    if (((int32_t)MEM8(ecx + 0x20) < 0)) goto loc_003BDB45; /* js: sign (negative) */

loc_003BDAE0: ;
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x68) = MEM8(ebx + 0x68) & HI8(edx);
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDB09;

loc_003BDAE9: ;
    /* TODO: arpl word ptr [edi + 0x6e], bp */

loc_003BDAEC: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BDB62 - dead code, label not in function */

loc_003BDAEE: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDB12 - dead code, label not in function */

loc_003BDAF2: ;
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDB5A;

loc_003BDAF5: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x65) = MEM8(esi + 0x65) & HI8(ecx);
    /* TODO: popal  */

loc_003BDAFA: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDB65 - dead code, label not in function */

loc_003BDAFC: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) (void)0; /* goto loc_003BDB63 - dead code, label not in function */

loc_003BDAFE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xA;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BDB09: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BDB81 - dead code, label not in function */

loc_003BDB0C: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDB2E - dead code, label not in function */

loc_003BDB0E: ;
    PUSH32(esp, eax);
    edi = (uint32_t)((int32_t)MEM32(eax + 0x65) * (int32_t)0x6853206C);
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDB3B;

loc_003BDB1B: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x646F636F);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x61) = MEM8(edi + 0x61) & HI8(edx);
    if (1) goto loc_003BDB49; /* jae: above or equal (unsigned >=) */

loc_003BDB29: ;
    if (1) (void)0; /* goto loc_003BDB9D - dead code, label not in function */ /* ja: above (unsigned >) */

loc_003BDB2B: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(LO16(esi) + 0x65) = MEM8(LO16(esi) + 0x65) & HI8(ecx);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDB9D - dead code, label not in function */

loc_003BDB35: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x69) = MEM8(ebx + 0x69) & HI8(edx);
    if (_flags /* jp: parity */) (void)0; /* goto loc_003BDBA0 - dead code, label not in function */

loc_003BDB3B: ;
    /* TODO: outsd dx, dword ptr [esi] */
    _cf = (int)((uint32_t)(MEM8(ebx + esi + 0x44)) < (uint32_t)(LO8(eax)));
    MEM8(ebx + esi + 0x44) = MEM8(ebx + esi + 0x44) - LO8(eax);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BDB45: ;
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);

loc_003BDB47: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BDB49: ;
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(MEM32(eax)) < (uint32_t)(eax));
    MEM32(eax) = MEM32(eax) - eax;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    PUSH32(esp, ebp);
    /* TODO: outsb dx, byte ptr [esi] */

loc_003BDB5A: ;
    /* TODO: popal  */
    /* TODO: bound ebp, qword ptr [ebp + 0x20] */
    if (_flags /* je: equal / zero */) goto loc_003BDBD0;

loc_003BDB61: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x72) = MEM8(ebx + 0x72) & HI8(eax);
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDBCD - dead code, label not in function */

loc_003BDB68: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);
    if ((MEM8(ecx + 0x6E) == 0)) (void)0; /* goto loc_003BDBD2 - dead code, label not in function */ /* je: equal / zero */

loc_003BDB6D: ;
    if (0) goto loc_003BDBDC; /* jb: below (unsigned <) */

loc_003BDB6F: ;
    esp = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + ecx + 0x74) * (int32_t)0x75622065);
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDBAB;

loc_003BDB7D: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x6E55000A;
    /* TODO: popal  */
    /* TODO: bound ebp, qword ptr [ebp + 0x20] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDBF8 - dead code, label not in function */

loc_003BDB89: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x72) = MEM8(ebx + 0x72) & HI8(eax);
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDBF5 - dead code, label not in function */

loc_003BDB90: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x75) = MEM8(edi + 0x75) & HI8(ecx);
    if ((MEM8(edi + 0x75) == 0)) (void)0; /* goto loc_003BDC05 - dead code, label not in function */ /* je: equal / zero */

loc_003BDB95: ;
    if ((MEM8(edi + 0x75) != 0)) goto loc_003BDC0B; /* jne: not equal / not zero */

loc_003BDB97: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x75) = MEM8(edx + 0x75) & HI8(eax);
    if (0) (void)0; /* goto loc_003BDBCD - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BDB9F: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xA;
    /* TODO: bound edi, qword ptr [eax + 0x32] */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x69)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + 0x69) = MEM8(edx + 0x69) + HI8(eax);
    /* TODO: popal  */

loc_003BDBAB: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BDBAD;

loc_003BDBAD: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edx + esi)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + esi) = MEM8(edx + esi) + HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x32)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + 0x32) = MEM8(eax + 0x32) + HI8(ebx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x32);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x33);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x34);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BDBD0: ;
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0x78);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ MEM32(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x34)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + 0x34) = MEM8(ebp + 0x34) + HI8(ecx);
    if (((int32_t)MEM8(ebp + 0x34) < 0)) (void)0; /* goto loc_003BDC10 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDBDC: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (_cf) (void)0; /* goto loc_003BDC46 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BDBE3: ;
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + HI8(edx);
    /* TODO: bound esi, qword ptr [edx + 0x64] */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + HI8(edx);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x32);
    if (_flags /* jo: overflow */) goto loc_003BDC6B;

loc_003BDBF7: ;
    PUSH32(esp, 0);
    if (((int32_t)edi < 0)) (void)0; /* goto loc_003BDC64 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDBFE: ;
    /* TODO: arpl word ptr [eax], ax */
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BDC66 - dead code, label not in function */

loc_003BDC02: ;
    _cf = (int)((((uint64_t)(MEM8(XBOX_FS_BASE + eax + 0x64)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(XBOX_FS_BASE + eax + 0x64) = MEM8(XBOX_FS_BASE + eax + 0x64) + HI8(ebx);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(eax + 0x6D)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + 0x6D) = MEM8(eax + 0x6D) + HI8(ebx);
    /* TODO: insd dword ptr es:[edi], dx */

loc_003BDC0B: ;
    /* TODO: arpl word ptr [eax], ax */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x6D)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + 0x6D) = MEM8(eax + 0x6D) + HI8(ebx);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: popal  */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if ((MEM8(eax) == 0)) goto loc_003BDC7F; /* je: equal / zero */

loc_003BDC1A: ;
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BDC89 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDC1C: ;
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x33);
    if (0) (void)0; /* goto loc_003BDC94 - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_003BDC21: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BDC88 - dead code, label not in function */

loc_003BDC23: ;
    /* TODO: arpl word ptr [eax], ax */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + HI8(edx);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x33);
    if (1) (void)0; /* goto loc_003BDCA1 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BDC31: ;
    /* TODO: arpl word ptr gs:[eax], ax */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDC9B - dead code, label not in function */

loc_003BDC36: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BDCA5 - dead code, label not in function */

loc_003BDC38: ;
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x33);
    esp = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + esi + 0x66) * (int32_t)0x78657400);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x33);
    if ((edi == 0)) goto loc_003BDCAE; /* je: equal / zero */

loc_003BDC49: ;
    if (((int32_t)edi < 0)) goto loc_003BDC4B; /* js: sign (negative) */

loc_003BDC4B: ;
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + HI8(edx);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x33);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BDCB6 - dead code, label not in function */

loc_003BDC55: ;
    _cf = (int)((((uint64_t)(MEM8(XBOX_FS_BASE + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(XBOX_FS_BASE + eax) = MEM8(XBOX_FS_BASE + eax) + LO8(eax);
    if ((MEM8(XBOX_FS_BASE + eax) == 0)) (void)0; /* goto loc_003BDCBF - dead code, label not in function */ /* je: equal / zero */

loc_003BDC5A: ;
    if (((int32_t)MEM8(XBOX_FS_BASE + eax) < 0)) (void)0; /* goto loc_003BDCC9 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDC5C: ;
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x32);
    if ((edi == 0)) (void)0; /* goto loc_003BDCC6 - dead code, label not in function */ /* je: equal / zero */

loc_003BDC61: ;
    if (((int32_t)edi < 0)) goto loc_003BDC63; /* js: sign (negative) */

loc_003BDC63: ;
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + HI8(edx);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x32);

loc_003BDC6B: ;
    if (_flags /* jo: overflow */) goto loc_003BDCCE;

loc_003BDC6D: ;
    _cf = (int)((((uint64_t)(MEM8(XBOX_FS_BASE + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(XBOX_FS_BASE + eax) = MEM8(XBOX_FS_BASE + eax) + LO8(eax);
    if ((MEM8(XBOX_FS_BASE + eax) == 0)) (void)0; /* goto loc_003BDCD7 - dead code, label not in function */ /* je: equal / zero */

loc_003BDC72: ;
    if (((int32_t)MEM8(XBOX_FS_BASE + eax) < 0)) (void)0; /* goto loc_003BDCE6 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDC74: ;
    _cf = 0; /* logical op clears CF */
    SET_HI8(eax, HI8(eax) ^ MEM8(LO16(ebx) + 0x62));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + HI8(edx);

loc_003BDC7F: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDCE6 - dead code, label not in function */

loc_003BDC81: ;
    _cf = 0; /* logical op clears CF */
    SET_HI8(eax, HI8(eax) ^ MEM8(LO16(ebx) + LO16(edi) + 0x72));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + HI8(edx);
    /* TODO: bound esp, qword ptr [ebp + 0x6d] */
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + HI8(edx);
    /* TODO: bound esp, qword ptr [ebp + 0x6d] */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if ((MEM8(eax) == 0)) (void)0; /* goto loc_003BDCFF - dead code, label not in function */ /* je: equal / zero */

loc_003BDC9A: ;
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BDC9C; /* js: sign (negative) */

loc_003BDC9C: ;
    if ((MEM8(eax) == 0)) goto loc_003BDD03; /* je: equal / zero */

loc_003BDC9E: ;
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BDD0B - dead code, label not in function */ /* js: sign (negative) */

loc_003BDCA0: ;
    ebp = (uint32_t)((int32_t)MEM32(esp + ebp * 2) * (int32_t)0x63786574);
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDD10 - dead code, label not in function */

loc_003BDCAC: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BDCAE: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: arpl word ptr [esi + 0x64], bp */
    _cf = (int)((((uint64_t)(MEM8(edx + esi * 2 + 0x70)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx + esi * 2 + 0x70) = MEM8(edx + esi * 2 + 0x70) + HI8(ecx);
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x75)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebx + 0x75) = MEM8(ebx + 0x75) + HI8(edx);
    /* TODO: bound eax, qword ptr [eax] */
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BDCF2 - dead code, label not in function */

loc_003BDCBE: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x76) * (int32_t)0x64696C61);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) & HI8(ecx);
    if (1) (void)0; /* goto loc_003BDD37 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BDCCC: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi) = MEM8(edi) & HI8(eax);

loc_003BDCCE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2773;
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + HI8(ecx);
    if ((_cf || MEM8(ecx + 0x6E) == 0)) goto loc_003BDD39; /* jbe: below or equal (unsigned <=) */

loc_003BDCD8: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(eax + 0x73) * (int32_t)0x7A7A6977);
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    MEM8(edi) = MEM8(edi) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2773;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x76) * (int32_t)0x64696C61);
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(edx);
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x27207265);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x64255B73;

loc_003BDD03: ;
    POP32(esp, ebp);
    /* TODO: daa  */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + HI8(ecx);
    if ((_cf || MEM8(ecx + 0x6E) == 0)) (void)0; /* goto loc_003BDD6D - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_003BDD0C: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(eax + 0x72) * (int32_t)0x73696765);
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDD7C - dead code, label not in function */

loc_003BDD17: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDD39;

loc_003BDD19: ;
    /* TODO: daa  */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x30615B73;
    if (((int32_t)eax < 0)) (void)0; /* goto loc_003BDD42 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDD22: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(MEM32(eax)));
    esp = esp - MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x275D64;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + HI8(ecx);
    if ((_cf || MEM8(ecx + 0x6E) == 0)) goto loc_003BDD91; /* jbe: below or equal (unsigned <=) */

loc_003BDD30: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(eax + 0x72) * (int32_t)0x73696765);

loc_003BDD39: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDDA0 - dead code, label not in function */

loc_003BDD3B: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDD5D - dead code, label not in function */

loc_003BDD3D: ;
    /* TODO: daa  */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2773;
    _cf = (int)((((uint64_t)(MEM8(edi + 0x54)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi + 0x54) = MEM8(edi + 0x54) + HI8(ecx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: outsd dx, dword ptr [esi] */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (!_cf) (void)0; /* goto loc_003BDDC7 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BDD52: ;
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(eax + 0x72)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x72) = MEM8(eax + 0x72) + HI8(edx);
    /* TODO: outsd dx, dword ptr [esi] */
    _cf = (int)((((uint64_t)(MEM8(XBOX_FS_BASE + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(XBOX_FS_BASE + eax) = MEM8(XBOX_FS_BASE + eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    esi = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + ebx + 0x63) * (int32_t)0x647261);
    if (_flags /* jp: parity */) goto loc_003BDDCB;

loc_003BDD66: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDDD7;

loc_003BDD68: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if ((_cf || MEM8(eax) == 0)) goto loc_003BDD6E; /* jbe: below or equal (unsigned <=) */

loc_003BDD6E: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    POP32(esp, edi);
    PUSH32(esp, 0x696D65);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    POP32(esp, edi);
    PUSH32(esp, 0x33696D65);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    POP32(esp, edi);
    PUSH32(esp, 0x32696D65);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    POP32(esp, edi);
    PUSH32(esp, 0x31696D65);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    POP32(esp, edi);

loc_003BDD91: ;
    PUSH32(esp, 0x735F006C);
    esp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x5F000033);
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BDE08 - dead code, label not in function */

loc_003BDD9F: ;
    /* TODO: outsb dx, byte ptr [si] */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(edi + 0x73)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edi + 0x73) = MEM8(edi + 0x73) + LO8(ebx);
    esp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x5F000031);
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BDE10 - dead code, label not in function */

loc_003BDDAF: ;
    if (_flags /* je: equal / zero */) goto loc_003BDDB1;

loc_003BDDB1: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edi + 0x73)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edi + 0x73) = MEM8(edi + 0x73) + LO8(ebx);
    /* TODO: outsb dx, byte ptr [si] */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    POP32(esp, edi);
    /* TODO: bound edi, qword ptr [eax + 0x32] */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x76) * (int32_t)0x64696C61);

loc_003BDDCB: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(eax);
    if ((MEM8(ebp + 0x73) == 0)) goto loc_003BDE3A; /* je: equal / zero */

loc_003BDDD1: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDE3E - dead code, label not in function */

loc_003BDDD5: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */

loc_003BDDD7: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(edx);
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x7265);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: daa  */
    if (_flags /* je: equal / zero */) goto loc_003BDE0A;

loc_003BDDEA: ;
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BDE5F - dead code, label not in function */

loc_003BDDEC: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) & LO8(eax);
    if (((int32_t)MEM8(ecx + 0x30) < 0)) (void)0; /* goto loc_003BDE13 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDDF3: ;
    if (1) (void)0; /* goto loc_003BDE5E - dead code, label not in function */ /* ja: above (unsigned >) */

loc_003BDDF5: ;
    if ((MEM8(ecx + 0x30) == 0)) (void)0; /* goto loc_003BDE5F - dead code, label not in function */ /* je: equal / zero */

loc_003BDDF7: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x20) * (int32_t)0x65642061);
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BDE74 - dead code, label not in function */

loc_003BDE00: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6E6F6974);
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(edx);

loc_003BDE0A: ;
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x2E7265);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x76) * (int32_t)0x64696C61);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x72) = MEM8(edi + 0x72) & HI8(edx);
    esi = (uint32_t)((int32_t)MEM32(ebp + 0x20) * (int32_t)0x6B73616D);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (!_cf) goto loc_003BDE99; /* jae: above or equal (unsigned >=) */

loc_003BDE2A: ;
    if ((MEM8(eax) != 0)) (void)0; /* goto loc_003BDE9E - dead code, label not in function */ /* jne: not equal / not zero */

loc_003BDE2C: ;
    /* TODO: arpl word ptr [ebp + 0x20], sp */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    esp = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + esi + 0x69) * (int32_t)0x20737265);
    /* TODO: popal  */

loc_003BDE3A: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDEA1 - dead code, label not in function */

loc_003BDE3C: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x6F) = MEM8(esi + 0x6F) & HI8(ecx);
    if ((MEM8(esi + 0x6F) == 0)) (void)0; /* goto loc_003BDE61 - dead code, label not in function */ /* je: equal / zero */

loc_003BDE41: ;
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* ja: above (unsigned >) */) goto loc_003BDEAC;

loc_003BDE47: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + edi + 0x6E) = MEM8(XBOX_FS_BASE + edi + 0x6E) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & HI8(eax);
    if ((MEM8(ebp + 0x73) == 0)) goto loc_003BDEBA; /* je: equal / zero */

loc_003BDE51: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) goto loc_003BDEBE;

loc_003BDE55: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(edx);
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x737265);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x76) * (int32_t)0x64696C61);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(edx);
    if ((MEM8(ebx + 0x6F) != 0)) goto loc_003BDEE2; /* jne: not equal / not zero */

loc_003BDE70: ;
    /* TODO: arpl word ptr [ebp + 0x20], sp */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDEDA - dead code, label not in function */

loc_003BDE75: ;
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x69007265);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jbe: below or equal (unsigned <=) */) (void)0; /* goto loc_003BDEE1 - dead code, label not in function */

loc_003BDE80: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(eax + 0x73) * (int32_t)0x7A7A6977);
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + HI8(ecx);
    if ((_cf || MEM8(ecx + 0x6E) == 0)) (void)0; /* goto loc_003BDEF1 - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_003BDE90: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(eax + 0x63) * (int32_t)0x74736E6F);

loc_003BDE99: ;
    /* TODO: popal  */
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BDE9D;

loc_003BDE9D: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x70)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + 0x70) = MEM8(eax + 0x70) + HI8(ebx);
    if (!_cf) goto loc_003BDEA4; /* jae: above or equal (unsigned >=) */

loc_003BDEA4: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BDF19 - dead code, label not in function */

loc_003BDEA6: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BDF20 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDEAA: ;
    if (!_cf) (void)0; /* goto loc_003BDF1F - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BDEAC: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) goto loc_003BDF28; /* js: sign (negative) */

loc_003BDEB2: ;
    if (!_cf) goto loc_003BDF2B; /* jae: above or equal (unsigned >=) */

loc_003BDEB4: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (((int32_t)MEM8(eax) < 0)) (void)0; /* goto loc_003BDF30 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDEBA: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BDEBC;

loc_003BDEBC: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_003BDF31;

loc_003BDEBE: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BDF34 - dead code, label not in function */

loc_003BDEC2: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BDF37 - dead code, label not in function */

loc_003BDEC5: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: arpl word ptr [ebp + 0x73], sp */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BDF3A - dead code, label not in function */

loc_003BDECB: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDEED - dead code, label not in function */

loc_003BDECD: ;
    esi = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + edx + 0x65) * (int32_t)0x76697463);
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BDEF8 - dead code, label not in function */

loc_003BDED8: ;
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDF40 - dead code, label not in function */

loc_003BDEDB: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x6F) = MEM8(esi + 0x6F) & HI8(ecx);
    if ((MEM8(esi + 0x6F) == 0)) (void)0; /* goto loc_003BDF00 - dead code, label not in function */ /* je: equal / zero */

loc_003BDEE0: ;
    if (1) goto loc_003BDF57; /* jae: above or equal (unsigned >=) */

loc_003BDEE2: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BDF54 - dead code, label not in function */

loc_003BDEE4: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDF5B;

loc_003BDEE7: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if ((MEM8(eax) != 0)) (void)0; /* goto loc_003BDF5C - dead code, label not in function */ /* jne: not equal / not zero */

loc_003BDEEE: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77);
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x72) = MEM8(eax + 0x72) & HI8(edx);
    /* TODO: popal  */
    /* TODO: insd dword ptr es:[di], dx */
    /* TODO: popal  */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (_cf) (void)0; /* goto loc_003BDF60 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BDEFF: ;
    /* TODO: insd dword ptr es:[di], dx */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BDF05;

loc_003BDF05: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x63)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebx + 0x63) = MEM8(ebx + 0x63) + HI8(edx);
    if (_cf) goto loc_003BDF71; /* jb: below (unsigned <) */

loc_003BDF0C: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BDF80 - dead code, label not in function */

loc_003BDF10: ;
    /* TODO: popal  */
    /* TODO: arpl word ptr [ebp], sp */
    _cf = 0; /* logical op clears CF */
    esi = esi & MEM32(eax + 0x72);
    /* TODO: popal  */
    /* TODO: insd dword ptr es:[di], dx */
    /* TODO: popal  */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x65) * (int32_t)0x49000000);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDF8D - dead code, label not in function */

loc_003BDF28: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BDF98;

loc_003BDF2A: ;
    /* TODO: popal  */

loc_003BDF2B: ;
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x73) = MEM8(ecx + 0x73) & HI8(eax);
    if (1) (void)0; /* goto loc_003BDF96 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BDF31: ;
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: bound ebp, qword ptr [ebp + 0x72] */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x72) = MEM8(ebp + 0x72) & HI8(eax);
    if (0) goto loc_003BDFAA; /* jb: below (unsigned <) */

loc_003BDF3B: ;
    if (0) goto loc_003BDF5E; /* jb: below (unsigned <) */

loc_003BDF3D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(0x64) = MEM8(0x64) & HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + LO8(ecx);
    if (!_cf) (void)0; /* goto loc_003BDFC0 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BDF4C: ;
    if (_cf) (void)0; /* goto loc_003BDFC3 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BDF4E: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */

loc_003BDF57: ;
    /* TODO: bound ebp, qword ptr [ecx + 0x6e] */
    /* TODO: popal  */

loc_003BDF5B: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BDFC6 - dead code, label not in function */

loc_003BDF5D: ;
    /* TODO: outsd dx, dword ptr [esi] */

loc_003BDF5E: ;
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x73) = MEM8(ecx + 0x73) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x6F) = MEM8(esi + 0x6F) & HI8(ecx);
    if ((MEM8(esi + 0x6F) == 0)) goto loc_003BDF87; /* je: equal / zero */

loc_003BDF67: ;
    /* TODO: popal  */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* ja: above (unsigned >) */) (void)0; /* goto loc_003BDFD2 - dead code, label not in function */

loc_003BDF6D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ecx + 0x6E) = MEM8(XBOX_FS_BASE + ecx + 0x6E) & HI8(ecx);

loc_003BDF71: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) & HI8(eax);
    if (0) (void)0; /* goto loc_003BDFE9 - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_003BDF76: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x68) = MEM8(ebx + 0x68) & HI8(edx);
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDFAC - dead code, label not in function */

loc_003BDF7E: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) & LO8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x76) = MEM8(eax + 0x76) & HI8(ebx);
    if (1) goto loc_003BDFA7; /* jae: above or equal (unsigned >=) */

loc_003BDF87: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x73) * (int32_t)0x64616574);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x30)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) + HI8(eax);
    if (((int32_t)MEM8(ecx + 0x30) < 0)) (void)0; /* goto loc_003BDFB5 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDF95: ;
    /* TODO: arpl word ptr [ecx + 0x6e], sp */

loc_003BDF98: ;
    /* TODO: daa  */
    if (_flags /* je: equal / zero */) goto loc_003BDFBB;

loc_003BDF9B: ;
    /* TODO: bound esp, qword ptr [ebp + 0x20] */
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) goto loc_003BE009;

loc_003BDFA4: ;
    _cf = (int)((((uint64_t)(MEM8(XBOX_FS_BASE + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(XBOX_FS_BASE + eax) = MEM8(XBOX_FS_BASE + eax) + LO8(eax);

loc_003BDFA7: ;
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x30)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx + 0x30) = MEM8(ecx + 0x30) + HI8(eax);

loc_003BDFAA: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BDFCD - dead code, label not in function */

loc_003BDFAD: ;
    /* TODO: arpl word ptr [ecx + 0x6e], sp */
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x6E) = MEM8(edi + 0x6E) & HI8(ecx);
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jns: not sign (positive) */) (void)0; /* goto loc_003BDFD6 - dead code, label not in function */

loc_003BDFB6: ;
    /* TODO: popal  */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE029 - dead code, label not in function */

loc_003BDFB9: ;
    /* TODO: popal  */

loc_003BDFBB: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BDFDD - dead code, label not in function */

loc_003BDFBD: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: arpl word ptr [ebp + 0x20], sp */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x20) * (int32_t)0x69206E61);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* js: sign (negative) */) goto loc_003BDFEE;

loc_003BDFCE: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE041 - dead code, label not in function */

loc_003BDFD1: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE038;

loc_003BDFD3: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE048 - dead code, label not in function */

loc_003BDFD5: ;
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0);
    ebp = (uint32_t)((int32_t)MEM32(esp + ebp * 2 + 0x65) * (int32_t)0x206C6167);
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE04B;

loc_003BDFE6: ;
    esi = (uint32_t)((int32_t)MEM32(LO16(ebp) + LO16(edi) + 0x74) * (int32_t)0x69207265);

loc_003BDFEE: ;
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);
    if (((int32_t)MEM8(ecx + 0x6E) < 0)) (void)0; /* goto loc_003BE016 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDFF6: ;
    if (((int32_t)MEM8(ecx + 0x6E) < 0)) (void)0; /* goto loc_003BE069 - dead code, label not in function */ /* js: sign (negative) */

loc_003BDFF9: ;
    if (0) goto loc_003BE060; /* jb: below (unsigned <) */

loc_003BDFFB: ;
    if (1) (void)0; /* goto loc_003BE070 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BDFFD: ;
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0);
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE07F;

loc_003BE006: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE06A;

loc_003BE009: ;
    if (_flags /* js: sign (negative) */) goto loc_003BE02B;

loc_003BE00B: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE080 - dead code, label not in function */

loc_003BE00E: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE011;

loc_003BE011: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(0x5F642573)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(0x5F642573) = MEM8(0x5F642573) + HI8(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x6F630073;
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE08D - dead code, label not in function */

loc_003BE021: ;
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE047 - dead code, label not in function */

loc_003BE027: ;
    /* TODO: arpl word ptr [ecx + 0x6e], sp */
    /* TODO: outsb dx, byte ptr [esi] */

loc_003BE02B: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE04E;

loc_003BE02E: ;
    /* TODO: bound esp, qword ptr [ebp + 0x20] */
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BE0A6 - dead code, label not in function */

loc_003BE033: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + edi + 0x69) = MEM8(XBOX_FS_BASE + edi + 0x69) & HI8(edx);

loc_003BE038: ;
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE0A2 - dead code, label not in function */

loc_003BE03A: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x74) = MEM8(edi + 0x74) & HI8(ecx);
    PUSH32(esp, 0x6D207265);
    /* TODO: outsd dx, dword ptr [esi] */
    esp = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + esi + 0x69) * (int32_t)0x737265);

loc_003BE04B: ;
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x6F)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) + HI8(eax);

loc_003BE04E: ;
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE0BD - dead code, label not in function */

loc_003BE051: ;
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE077 - dead code, label not in function */

loc_003BE057: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE07B - dead code, label not in function */

loc_003BE05B: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE0D2 - dead code, label not in function */

loc_003BE05D: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE0CF - dead code, label not in function */

loc_003BE05F: ;
    /* TODO: outsd dx, dword ptr [esi] */

loc_003BE060: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE0D6;

loc_003BE062: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ecx + 0x6E) = MEM8(XBOX_FS_BASE + ecx + 0x6E) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x65) = MEM8(esi + 0x65) & HI8(edx);

loc_003BE06A: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE0E0;

loc_003BE06C: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE08F - dead code, label not in function */

loc_003BE06F: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE0D9;

loc_003BE071: ;
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE0E9;

loc_003BE076: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x76) * (int32_t)0x64696C61);

loc_003BE07F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x65) = MEM8(esi + 0x65) & HI8(edx);
    if (0) goto loc_003BE0F7; /* jb: below (unsigned <) */

loc_003BE084: ;
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x70784500);
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) & HI8(eax);
    if (0) (void)0; /* goto loc_003BE0FA - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_003BE095: ;
    if (0) goto loc_003BE10A; /* jb: below (unsigned <) */

loc_003BE097: ;
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x61747320);
    if (_flags /* je: equal / zero */) goto loc_003BE105;

loc_003BE0A0: ;
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE0C5;

loc_003BE0A5: ;
    _cf = (int)((uint32_t)(MEM8(edi)) < (uint32_t)(HI8(eax)));
    MEM8(edi) = MEM8(edi) - HI8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE11C - dead code, label not in function */

loc_003BE0A9: ;
    /* TODO: daa  */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x20));
    SET_LO8(eax, LO8(eax) - 0x20);
    /* TODO: daa  */
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE11F - dead code, label not in function */

loc_003BE0AF: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE0D8 - dead code, label not in function */

loc_003BE0B1: ;
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x20));
    SET_LO8(eax, LO8(eax) - 0x20);
    /* TODO: daa  */
    if (_flags /* jbe: below or equal (unsigned <=) */) (void)0; /* goto loc_003BE129 - dead code, label not in function */

loc_003BE0B6: ;
    /* TODO: daa  */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x20));
    SET_LO8(eax, LO8(eax) - 0x20);
    /* TODO: daa  */
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE132 - dead code, label not in function */

loc_003BE0BC: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE0E5;

loc_003BE0BE: ;
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x20));
    SET_LO8(eax, LO8(eax) - 0x20);
    /* TODO: daa  */
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE139 - dead code, label not in function */

loc_003BE0C3: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE138;

loc_003BE0C5: ;
    /* TODO: daa  */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x20));
    SET_LO8(eax, LO8(eax) - 0x20);
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE0EB;

loc_003BE0CB: ;
    /* TODO: daa  */
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE144 - dead code, label not in function */

loc_003BE0CE: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE147 - dead code, label not in function */

loc_003BE0D0: ;
    /* TODO: daa  */
    _cf = (int)((uint32_t)(MEM32(esi)) < (uint32_t)(ebp));
    MEM32(esi) = MEM32(esi) - ebp;
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x61)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ecx + 0x61) = MEM8(ecx + 0x61) + HI8(ebx);

loc_003BE0D6: ;
    /* TODO: arpl word ptr [ebx + 0x20], sp */

loc_003BE0D9: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE14F - dead code, label not in function */

loc_003BE0DB: ;
    /* TODO: popal  */
    /* TODO: arpl word ptr [ebx + 0x20], bp */
    /* TODO: outsd dx, dword ptr [esi] */

loc_003BE0E0: ;
    if (_flags /* jbe: below or equal (unsigned <=) */) (void)0; /* goto loc_003BE147 - dead code, label not in function */

loc_003BE0E2: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE14A - dead code, label not in function */

loc_003BE0E4: ;
    /* TODO: insb byte ptr es:[edi], dx */

loc_003BE0E5: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* ja: above (unsigned >) */) goto loc_003BE0E8;

loc_003BE0E8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BE0E9: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE15B - dead code, label not in function */

loc_003BE0EB: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx) = MEM8(ebx) & HI8(eax);
    /* TODO: outsb dx, byte ptr gs:[esi] */

loc_003BE0F7: ;
    esp = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + esi) * (int32_t)0x756E6500);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BE105: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BE174 - dead code, label not in function */

loc_003BE108: ;
    /* TODO: outsb dx, byte ptr fs:[esi] */

loc_003BE10A: ;
    /* TODO: daa  */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE12D - dead code, label not in function */

loc_003BE10D: ;
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x64) * (int32_t)0x6F20));
    /* TODO: bound ebp, qword ptr [edx + 0x65] */
    /* TODO: arpl word ptr [eax + 0x74], si */
    /* TODO: outsd dx, dword ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);
    /* TODO: arpl word ptr [edx + 0x65], si */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE155;

loc_003BE126: ;
    /* TODO: arpl word ptr gs:[edx + 0x65], si */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE130;

loc_003BE130: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) (void)0; /* goto loc_003BE1A3 - dead code, label not in function */ /* js: sign (negative) */

loc_003BE133: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */

loc_003BE138: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x61) = MEM8(eax + 0x61) & HI8(edx);
    if (0) goto loc_003BE1A2; /* jb: below (unsigned <) */

loc_003BE13D: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE1A8 - dead code, label not in function */

loc_003BE140: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE1AC - dead code, label not in function */

loc_003BE143: ;
    if (_flags /* jp: parity */) (void)0; /* goto loc_003BE1AA - dead code, label not in function */

loc_003BE145: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ebp + 0x78) = MEM8(XBOX_FS_BASE + ebp + 0x78) & HI8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE1BD - dead code, label not in function */

loc_003BE14B: ;
    if (1) goto loc_003BE1C1; /* jae: above or equal (unsigned >=) */

loc_003BE14E: ;
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x2300002E);

loc_003BE155: ;
    esp = (uint32_t)((int32_t)MEM32(esi + 0x20) * (int32_t)0x6E207369);
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE17F - dead code, label not in function */

loc_003BE15F: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE1D6;

loc_003BE161: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE1D3 - dead code, label not in function */

loc_003BE163: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE1DA - dead code, label not in function */

loc_003BE166: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(esi + 0x20) * (int32_t)0x6E207369);
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE199;

loc_003BE179: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE1F0;

loc_003BE17B: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE1ED - dead code, label not in function */

loc_003BE17D: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE1F4 - dead code, label not in function */

loc_003BE180: ;
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x6E)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp + 0x6E) = MEM8(ebp + 0x6E) + LO8(edx);
    if (((int32_t)MEM8(ebp + 0x6E) < 0)) goto loc_003BE1F9; /* js: sign (negative) */

loc_003BE189: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx) = MEM8(ebx) & HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE1F9;

loc_003BE194: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    PUSH32(esp, ebp);

loc_003BE199: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* js: sign (negative) */) goto loc_003BE20D;

loc_003BE19D: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */

loc_003BE1A2: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx) = MEM8(ebx) & HI8(eax);
    /* TODO: outsb dx, byte ptr gs:[esi] */
    esp = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + esi) * (int32_t)0x69460000);
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x61) = MEM8(esi + 0x61) & HI8(ecx);
    /* TODO: insd dword ptr es:[edi], dx */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE1D7 - dead code, label not in function */

loc_003BE1B7: ;
    PUSH32(esp, 0x20657661);
    if (_flags /* je: equal / zero */) goto loc_003BE22D;

loc_003BE1BE: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(eax);

loc_003BE1C1: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x75) = MEM8(ecx + 0x75) & HI8(edx);
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE22C - dead code, label not in function */

loc_003BE1C7: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + edi + 0x69) = MEM8(XBOX_FS_BASE + edi + 0x69) & HI8(edx);
    if ((MEM8(XBOX_FS_BASE + edi + 0x69) == 0)) goto loc_003BE235; /* je: equal / zero */

loc_003BE1CD: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + ebp) = MEM8(esi + ebp) & HI8(ebx);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x72) = MEM8(edi + 0x72) & HI8(ecx);

loc_003BE1D6: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edx) = MEM8(edx) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + LO8(ecx);
    /* TODO: arpl word ptr [ebp + esi*2 + 0x64], bp */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x69) = MEM8(esi + 0x69) & HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x61) = MEM8(esi + 0x61) & HI8(ecx);
    /* TODO: insd dword ptr es:[edi], dx */

loc_003BE1F0: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + ebp * 2 + 0x6F) = MEM8(edi + ebp * 2 + 0x6F) & HI8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + ebp * 2 + 0x6E) = MEM8(edi + ebp * 2 + 0x6E) & HI8(ecx);

loc_003BE1F9: ;
    _cf = (int)((((uint64_t)(MEM8(LO16(edi) + 0x78)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(LO16(edi) + 0x78) = MEM8(LO16(edi) + 0x78) + LO8(eax);
    if (_flags /* jo: overflow */) goto loc_003BE265;

loc_003BE200: ;
    /* TODO: arpl word ptr [ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x69) = MEM8(esi + 0x69) & HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x61) = MEM8(esi + 0x61) & HI8(ecx);
    /* TODO: insd dword ptr es:[edi], dx */

loc_003BE20D: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (!_cf) goto loc_003BE27B; /* jae: above or equal (unsigned >=) */

loc_003BE212: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: insb byte ptr es:[di], dx */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x656E696C));
    eax = eax - 0x656E696C;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE244 - dead code, label not in function */

loc_003BE224: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE249;

loc_003BE229: ;
    if (_flags /* ja: above (unsigned >) */) goto loc_003BE294;

loc_003BE22B: ;
    if (_flags /* je: equal / zero */) goto loc_003BE295;

loc_003BE22D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + ebp * 2 + 0x65) = MEM8(eax + ebp * 2 + 0x65) & HI8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + ebp * 2 + 0x6E) = MEM8(ecx + ebp * 2 + 0x6E) & HI8(ecx);

loc_003BE235: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x746E6F63));
    eax = eax - 0x746E6F63;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x75) * (int32_t)0x6F697461);
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x68) = MEM8(ebx + 0x68) & HI8(eax);
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE2AA - dead code, label not in function */

loc_003BE249: ;
    /* TODO: arpl word ptr [ebp + 0x72], si */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & HI8(ecx);
    POP32(esp, esp);
    _cf = (int)((uint32_t)(MEM32(esi)) < (uint32_t)(ebp));
    MEM32(esi) = MEM32(esi) - ebp;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + ebp * 2 + 0x65) = MEM8(eax + ebp * 2 + 0x65) & LO8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x65) = MEM8(esi + 0x65) & HI8(ecx);
    if (((int32_t)MEM8(esi + 0x65) < 0)) goto loc_003BE2CF; /* js: sign (negative) */

loc_003BE25B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + ebp * 2 + 0x6E) = MEM8(ecx + ebp * 2 + 0x6E) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x69) = MEM8(edi + 0x69) & HI8(edx);
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */

loc_003BE265: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(edx + esi * 2 + 0x65) = MEM8(edx + esi * 2 + 0x65) & HI8(edx);
    /* TODO: popal  */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE2D4 - dead code, label not in function */

loc_003BE26F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ecx + 0x73) = MEM8(XBOX_FS_BASE + ecx + 0x73) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) & HI8(eax);
    /* TODO: arpl word ptr [edi + 0x6e], bp */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE2E4 - dead code, label not in function */

loc_003BE27B: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jne: not equal / not zero */) goto loc_003BE2DF;

loc_003BE27E: ;
    if (_flags /* je: equal / zero */) goto loc_003BE2E9;

loc_003BE280: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x66) = MEM8(edi + 0x66) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + ebp * 2 + 0x65) = MEM8(eax + ebp * 2 + 0x65) & HI8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE2C0 - dead code, label not in function */

loc_003BE292: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BE294: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BE295: ;
    if (_flags /* js: sign (negative) */) goto loc_003BE307;

loc_003BE297: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x72) = MEM8(ecx + 0x72) & HI8(eax);
    if ((MEM8(ecx + 0x72) != 0)) (void)0; /* goto loc_003BE312 - dead code, label not in function */ /* jne: not equal / not zero */

loc_003BE2A5: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE2C9 - dead code, label not in function */

loc_003BE2A9: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    /* TODO: arpl word ptr [edi + ebp*2 + 0x73], bp */
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ecx + 0x6E) = MEM8(XBOX_FS_BASE + ecx + 0x6E) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x61) = MEM8(eax + 0x61) & HI8(edx);
    if (0) (void)0; /* goto loc_003BE31E - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BE2B9: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE324 - dead code, label not in function */

loc_003BE2BC: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE324 - dead code, label not in function */

loc_003BE2BF: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE2C1;

loc_003BE2C1: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + LO8(eax);
    if (_flags /* jo: overflow */) goto loc_003BE32D;

loc_003BE2C8: ;
    /* TODO: arpl word ptr [ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) & HI8(ecx);

loc_003BE2CF: ;
    /* TODO: arpl word ptr [edx + 0x6f], si */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x61) = MEM8(eax + 0x61) & HI8(edx);
    if (0) goto loc_003BE338; /* jb: below (unsigned <) */

loc_003BE2D7: ;
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE340 - dead code, label not in function */

loc_003BE2DB: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE2DD;

loc_003BE2DD: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BE2DF: ;
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x63)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebp + 0x63) = MEM8(ebp + 0x63) + HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + HI8(ecx);
    /* TODO: arpl word ptr [eax], ax */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003BE2E9: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE35B - dead code, label not in function */

loc_003BE2EB: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) & HI8(ecx);
    /* TODO: arpl word ptr [edx + 0x6f], si */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x61) = MEM8(eax + 0x61) & HI8(edx);
    if (0) (void)0; /* goto loc_003BE35C - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BE2FB: ;
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE364 - dead code, label not in function */

loc_003BE2FF: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE32F - dead code, label not in function */

loc_003BE301: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edi + ebp * 2 + 0x6F)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + ebp * 2 + 0x6F) = MEM8(edi + ebp * 2 + 0x6F) + LO8(edx);

loc_003BE307: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) & HI8(ecx);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jns: not sign (positive) */) goto loc_003BE32D;

loc_003BE30D: ;
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE385 - dead code, label not in function */

loc_003BE311: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ebp + 0x76) = MEM8(XBOX_FS_BASE + ebp + 0x76) & HI8(ecx);
    /* TODO: insb byte ptr es:[edi], dx */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE33B - dead code, label not in function */

loc_003BE31B: ;
    /* TODO: outsd dx, dword ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx) = MEM8(ebx) & HI8(eax);
    esp = (uint32_t)((int32_t)MEM32(esi + 0x64) * (int32_t)0x232F6665);
    esp = (uint32_t)((int32_t)MEM32(esi + 0x6E) * (int32_t)0x20666564);

loc_003BE32D: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x20) * (int32_t)0x73696874);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x69) = MEM8(esi + 0x69) & HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */

loc_003BE338: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (!_cf) (void)0; /* goto loc_003BE3B7 - dead code, label not in function */ /* jae: above or equal (unsigned >=) */

loc_003BE33E: ;
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: bound ebp, qword ptr [edi + 0x6c] */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) & HI8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE3AC - dead code, label not in function */

loc_003BE347: ;
    /* TODO: arpl word ptr [ebp + 0x64], si */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x65) * (int32_t)0xA642520);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x65) * (int32_t)0x20642520);
    _cf = 0; /* logical op clears CF */
    SET_HI8(eax, HI8(eax) & MEM8(0xA2273));
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x79)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx + 0x79) = MEM8(ebx + 0x79) + LO8(edx);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE3CE;

loc_003BE36D: ;
    if (_flags /* js: sign (negative) */) goto loc_003BE38F;

loc_003BE36F: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE3E4 - dead code, label not in function */

loc_003BE372: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE395 - dead code, label not in function */

loc_003BE375: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x20) * (int32_t)0x6D756E65);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x69)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp + 0x69) = MEM8(ebp + 0x69) + LO8(ecx);
    if (!_cf) goto loc_003BE3F7; /* jae: above or equal (unsigned >=) */

loc_003BE384: ;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x67) * (int32_t)0x65706F20);
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x72) = MEM8(edx + 0x72) & HI8(eax);

loc_003BE38F: ;
    /* TODO: popal  */
    /* TODO: arpl word ptr [ebp + 0x20], sp */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x20) * (int32_t)0x6D756E65);
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x6F)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) + LO8(edx);
    if ((MEM8(ebx + 0x6F) != 0)) goto loc_003BE412; /* jne: not equal / not zero */

loc_003BE3A0: ;
    /* TODO: arpl word ptr [ebp + 0x20], sp */
    /* TODO: insb byte ptr es:[edi], dx */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x65) * (int32_t)0x6F6F7420);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + ebp * 2 + 0x6E) = MEM8(edi + ebp * 2 + 0x6E) & HI8(ecx);
    _cf = (int)((((uint64_t)(MEM8(LO16(ebx) + LO16(esi))) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(LO16(ebx) + LO16(esi)) = MEM8(LO16(ebx) + LO16(esi)) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x6E)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp + 0x6E) = MEM8(ebp + 0x6E) + LO8(edx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x6D726574));
    eax = eax - 0x6D726574;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x20646574);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x6C797473));
    eax = eax - 0x6C797473;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: insd dword ptr es:[edi], dx */

loc_003BE3CE: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE400;

loc_003BE3D2: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) & LO8(eax);
    if (_flags /* jo: overflow */) goto loc_003BE43C;

loc_003BE3D7: ;
    /* TODO: arpl word ptr [ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(edx) = MEM8(edx) & HI8(eax);
    _cf = (int)((uint32_t)(HI8(ecx)) < (uint32_t)(MEM8(edi)));
    SET_HI8(ecx, HI8(ecx) - MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_HI8(ecx, HI8(ecx) & MEM8(esi));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + LO8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE44D - dead code, label not in function */

loc_003BE3E8: ;
    /* TODO: arpl word ptr [ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x72) = MEM8(ecx + 0x72) & HI8(eax);
    if ((MEM8(ecx + 0x72) != 0)) (void)0; /* goto loc_003BE45F - dead code, label not in function */ /* jne: not equal / not zero */

loc_003BE3F2: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE416;

loc_003BE3F6: ;
    /* TODO: outsb dx, byte ptr [esi] */

loc_003BE3F7: ;
    /* TODO: popal  */
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(ebp + esi * 2 + 0x70)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + esi * 2 + 0x70) = MEM8(ebp + esi * 2 + 0x70) + LO8(eax);
    /* TODO: insb byte ptr es:[edi], dx */

loc_003BE400: ;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x61206574);
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE470 - dead code, label not in function */

loc_003BE409: ;
    if (_flags /* jne: not equal / not zero */) goto loc_003BE478;

loc_003BE40B: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE42F - dead code, label not in function */

loc_003BE40F: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    /* TODO: insd dword ptr es:[edi], dx */

loc_003BE412: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BE416: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003BE48B; /* js: sign (negative) */

loc_003BE41B: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(edi) = MEM8(edi) & HI8(eax);
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x27));
    SET_LO8(eax, LO8(eax) - 0x27);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x72) = MEM8(edi + 0x72) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(edi) = MEM8(edi) & HI8(eax);
    _cf = (int)((uint32_t)(MEM32(edi)) < (uint32_t)(esp));
    MEM32(edi) = MEM32(edi) - esp;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) (void)0; /* goto loc_003BE4A3 - dead code, label not in function */ /* js: sign (negative) */

loc_003BE433: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(edi) = MEM8(edi) & HI8(eax);
    _cf = (int)((uint32_t)(MEM8(edi)) < (uint32_t)(HI8(eax)));
    MEM8(edi) = MEM8(edi) - HI8(eax);

loc_003BE43C: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + LO8(eax);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE4A9 - dead code, label not in function */

loc_003BE444: ;
    /* TODO: arpl word ptr [ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) & HI8(ecx);
    /* TODO: arpl word ptr [edx + 0x6f], si */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x61) = MEM8(eax + 0x61) & HI8(edx);
    if (0) goto loc_003BE4B4; /* jb: below (unsigned <) */

loc_003BE453: ;
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* je: equal / zero */) goto loc_003BE4BC;

loc_003BE457: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE479 - dead code, label not in function */

loc_003BE459: ;
    /* TODO: outsb dx, byte ptr [esi] */
    /* TODO: popal  */
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) (void)0; /* goto loc_003BE4D3 - dead code, label not in function */ /* js: sign (negative) */

loc_003BE463: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: popal  */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + LO8(eax);
    if (_flags /* jo: overflow */) goto loc_003BE4D9;

loc_003BE474: ;
    /* TODO: arpl word ptr [ebp + 0x64], si */

loc_003BE478: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi) = MEM8(edi) & HI8(eax);
    _cf = (int)((uint32_t)(MEM32(edi)) < (uint32_t)(esp));
    MEM32(edi) = MEM32(edi) - esp;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + ebp * 2 + 0x69)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax + ebp * 2 + 0x69) = MEM8(eax + ebp * 2 + 0x69) + LO8(edx);
    if (!_cf) goto loc_003BE4A5; /* jae: above or equal (unsigned >=) */

loc_003BE485: ;
    if (!_cf) goto loc_003BE500; /* jae: above or equal (unsigned >=) */

loc_003BE487: ;
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: bound ebp, qword ptr [edi + 0x6c] */

loc_003BE48B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x73) = MEM8(ecx + 0x73) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6C) = MEM8(ecx + 0x6C) & HI8(eax);
    if (0) goto loc_003BE4F8; /* jb: below (unsigned <) */

loc_003BE493: ;
    /* TODO: popal  */
    if (_flags /* jns: not sign (positive) */) goto loc_003BE4B7;

loc_003BE497: ;
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x65) * (int32_t)0x64));
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x6E)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp + 0x6E) = MEM8(ebp + 0x6E) + LO8(edx);
    if (((int32_t)MEM8(ebp + 0x6E) < 0)) (void)0; /* goto loc_003BE515 - dead code, label not in function */ /* js: sign (negative) */

loc_003BE4A5: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x79) = MEM8(ebx + 0x79) & HI8(edx);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: bound ebp, qword ptr [edi + 0x6c] */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BE4B4: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003BE527; /* js: sign (negative) */

loc_003BE4B7: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */

loc_003BE4BC: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) & HI8(eax);
    /* TODO: arpl word ptr [edi + 0x6d], bp */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: popal  */
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x72) = MEM8(edi + 0x72) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) & HI8(eax);
    /* TODO: arpl word ptr [edi + ebp*2 + 0x73], bp */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x61) = MEM8(eax + 0x61) & HI8(edx);
    if (0) (void)0; /* goto loc_003BE539 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BE4D4: ;
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    PUSH32(esp, esp);

loc_003BE4D9: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsd dx, dword ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x65) = MEM8(esi + 0x65) & HI8(eax);
    if (1) goto loc_003BE500; /* ja: above (unsigned >) */

loc_003BE4E0: ;
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE54A - dead code, label not in function */

loc_003BE4E3: ;
    if (_flags /* jne: not equal / not zero */) goto loc_003BE552;

loc_003BE4E5: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) goto loc_003BE55C;

loc_003BE4E9: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(edi + ebp * 2 + 0x6F)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + ebp * 2 + 0x6F) = MEM8(edi + ebp * 2 + 0x6F) + LO8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) & HI8(ecx);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jns: not sign (positive) */) (void)0; /* goto loc_003BE515 - dead code, label not in function */

loc_003BE4F5: ;
    /* TODO: popal  */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE55F - dead code, label not in function */

loc_003BE4F8: ;
    if (_flags /* jne: not equal / not zero */) (void)0; /* goto loc_003BE567 - dead code, label not in function */

loc_003BE4FA: ;
    /* TODO: outsb dx, byte ptr gs:[esi] */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE571 - dead code, label not in function */

loc_003BE4FE: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BE500: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) (void)0; /* goto loc_003BE573 - dead code, label not in function */ /* js: sign (negative) */

loc_003BE503: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(edi) = MEM8(edi) & HI8(eax);
    _cf = (int)((uint32_t)(MEM8(edi)) < (uint32_t)(HI8(eax)));
    MEM8(edi) = MEM8(edi) - HI8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003BE583; /* js: sign (negative) */

loc_003BE513: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x6E) = MEM8(ebp + 0x6E) & HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(eax);
    /* TODO: outsw dx, word ptr [esi] */
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE589 - dead code, label not in function */

loc_003BE524: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x6E) = MEM8(ebp + 0x6E) & HI8(eax);

loc_003BE527: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + edi + 0x66) = MEM8(XBOX_FS_BASE + edi + 0x66) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x69) = MEM8(esi + 0x69) & HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x6E)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebp + 0x6E) = MEM8(ebp + 0x6E) + HI8(eax);
    /* TODO: insd dword ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    PUSH32(esp, esp);
    PUSH32(esp, 0x6D207369);
    /* TODO: popal  */
    /* TODO: arpl word ptr [edx + 0x6f], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x73) = MEM8(ecx + 0x73) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6C) = MEM8(ecx + 0x6C) & HI8(eax);
    if (0) goto loc_003BE5B3; /* jb: below (unsigned <) */

loc_003BE54E: ;
    /* TODO: popal  */
    if (_flags /* jns: not sign (positive) */) goto loc_003BE572;

loc_003BE552: ;
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x65) * (int32_t)0x64));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BE55C: ;
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: popal  */
    /* TODO: arpl word ptr [edx + 0x6f], si */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x78)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0x78) = MEM8(ebp + 0x78) + LO8(eax);
    if (_flags /* jo: overflow */) goto loc_003BE5C9;

loc_003BE568: ;
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ebp + 0x61) = MEM8(XBOX_FS_BASE + ebp + 0x61) & HI8(ecx);
    /* TODO: arpl word ptr [edx + 0x6f], si */

loc_003BE572: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + ebp * 2 + 0x6F) = MEM8(edi + ebp * 2 + 0x6F) & HI8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + ebp * 2 + 0x6E) = MEM8(edi + ebp * 2 + 0x6E) & HI8(ecx);
    _cf = (int)((((uint64_t)(MEM8(LO16(ebx) + LO16(esi))) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(LO16(ebx) + LO16(esi)) = MEM8(LO16(ebx) + LO16(esi)) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) (void)0; /* goto loc_003BE5F3 - dead code, label not in function */ /* js: sign (negative) */

loc_003BE583: ;
    /* TODO: arpl word ptr gs:[ebp + 0x64], si */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x20) = MEM8(ecx + 0x20) & HI8(eax);
    /* TODO: arpl word ptr [edi + 0x6d], bp */
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: popal  */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x6F)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx + 0x6F) = MEM8(ebx + 0x6F) + LO8(eax);
    if ((MEM8(ebx + 0x6F) != 0)) (void)0; /* goto loc_003BE604 - dead code, label not in function */ /* jne: not equal / not zero */

loc_003BE598: ;
    /* TODO: outsb dx, byte ptr fs:[esi] */
    /* TODO: daa  */
    if (_flags /* je: equal / zero */) (void)0; /* goto loc_003BE5BD - dead code, label not in function */

loc_003BE59D: ;
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE605 - dead code, label not in function */

loc_003BE5A0: ;
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);
    /* TODO: arpl word ptr [ebp + esi*2 + 0x64], bp */
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x69) = MEM8(esi + 0x69) & HI8(eax);
    /* TODO: insb byte ptr es:[edi], dx */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x61)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx + 0x61) = MEM8(ebx + 0x61) + LO8(eax);
    /* TODO: outsb dx, byte ptr [esi] */

loc_003BE5B3: ;
    /* TODO: daa  */
    if (_flags /* je: equal / zero */) goto loc_003BE5D6;

loc_003BE5B6: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE62A - dead code, label not in function */

loc_003BE5B8: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: arpl word ptr [ebp + 0x73], sp */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE5DE - dead code, label not in function */

loc_003BE5BE: ;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & MEM32(ecx + 0x6E);
    /* TODO: arpl word ptr [ebp + esi*2 + 0x64], bp */
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(eax);

loc_003BE5C9: ;
    /* TODO: arpl word ptr [ecx + 0x75], sp */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE633;

loc_003BE5CE: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x6F) = MEM8(esi + 0x6F) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(edx + 0x65) = MEM8(edx + 0x65) & HI8(edx);
    if (1) goto loc_003BE645; /* jae: above or equal (unsigned >=) */

loc_003BE5D6: ;
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jbe: below or equal (unsigned <=) */) (void)0; /* goto loc_003BE63E - dead code, label not in function */

loc_003BE5D9: ;
    if (_cf /* jb: below (unsigned <) */) goto loc_003BE5FB;

loc_003BE5DB: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: bound ebp, qword ptr [edx + 0x65] */
    /* TODO: arpl word ptr [eax + 0x77], si */
    /* TODO: popal  */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE606;

loc_003BE5E6: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE65D;

loc_003BE5E8: ;
    if (_flags /* jo: overflow */) goto loc_003BE65A;

loc_003BE5EA: ;
    /* TODO: insb byte ptr es:[edi], dx */
    esp = (uint32_t)((int32_t)MEM32(ebp + 0x64) * (int32_t)0x206F7420);
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE666 - dead code, label not in function */

loc_003BE5F4: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE669 - dead code, label not in function */

loc_003BE5F7: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: arpl word ptr [ebp + 0x73], sp */

loc_003BE5FB: ;
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE66C - dead code, label not in function */

loc_003BE5FD: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE61F - dead code, label not in function */

loc_003BE5FF: ;
    if (_flags /* jne: not equal / not zero */) goto loc_003BE670;

loc_003BE602: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */

loc_003BE606: ;
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = (int)((((uint64_t)(MEM8(edi + ebp * 2 + 0x6F)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + ebp * 2 + 0x6F) = MEM8(edi + ebp * 2 + 0x6F) + LO8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) & HI8(ecx);
    /* TODO: outsb dx, byte ptr [esi] */
    if (_flags /* jns: not sign (positive) */) goto loc_003BE631;

loc_003BE611: ;
    /* TODO: insb byte ptr es:[edi], dx */
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_003BE67A;

loc_003BE615: ;
    /* TODO: insb byte ptr es:[edi], dx */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE638 - dead code, label not in function */

loc_003BE618: ;
    /* TODO: outsd dx, dword ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) & HI8(ecx);
    /* TODO: arpl word ptr [ebp + esi*2 + 0x64], bp */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx + ebp * 2 + 0x72) = MEM8(ecx + ebp * 2 + 0x72) & HI8(eax);
    /* TODO: arpl word ptr gs:[ecx + ebp*2 + 0x76], si */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE65C - dead code, label not in function */

loc_003BE62E: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x61) = MEM8(ebp + 0x61) & LO8(ecx);

loc_003BE631: ;
    if (_flags /* js: sign (negative) */) (void)0; /* goto loc_003BE69C - dead code, label not in function */

loc_003BE633: ;
    /* TODO: insd dword ptr es:[edi], dx */
    if (_flags /* jne: not equal / not zero */) goto loc_003BE6A3;

loc_003BE636: ;
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x66) = MEM8(edi + 0x66) & HI8(ecx);
    _cf = 0; /* logical op clears CF */
    MEM8(0x656C2064) = MEM8(0x656C2064) & HI8(eax);
    if (0) (void)0; /* goto loc_003BE6A6 - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_003BE641: ;
    /* TODO: insb byte ptr es:[edi], dx */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE664 - dead code, label not in function */

loc_003BE644: ;
    /* TODO: popal  */

loc_003BE645: ;
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: insb byte ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* ja: above (unsigned >) */) (void)0; /* goto loc_003BE6AF - dead code, label not in function */

loc_003BE64A: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    PUSH32(esp, ebp);
    /* TODO: outsb dx, byte ptr [esi] */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77);
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x72) = MEM8(eax + 0x72) & HI8(edx);

loc_003BE65A: ;
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003BE6CF - dead code, label not in function */

loc_003BE65D: ;
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: arpl word ptr [ebp + 0x73], sp */
    if (!_cf /* jae: above or equal (unsigned >=) */) (void)0; /* goto loc_003BE6D2 - dead code, label not in function */

loc_003BE663: ;
    if (_cf /* jb: below (unsigned <) */) (void)0; /* goto loc_003BE685 - dead code, label not in function */

loc_003BE665: ;
    esi = (uint32_t)((int32_t)MEM32(XBOX_FS_BASE + edx + 0x65) * (int32_t)0x76697463);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BE670: ;
    esp = (uint32_t)((int32_t)MEM32(esi + 0x6E) * (int32_t)0x666564);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x66)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x66) = MEM8(ecx + 0x66) + HI8(ecx);

loc_003BE67A: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x6E)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x6E) = MEM8(ecx + 0x6E) + HI8(ecx);
    /* TODO: arpl word ptr [ebp + esi*2 + 0x64], bp */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x6E)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebp + 0x6E) = MEM8(ebp + 0x6E) + HI8(edx);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax + 0x72)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + 0x72) = MEM8(eax + 0x72) + HI8(edx);
    /* TODO: popal  */
    /* TODO: insd dword ptr es:[di], dx */
    /* TODO: popal  */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x65) * (int32_t)0));
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* TODO: popal  */

loc_003BE6A3: ;
    _cf = 0; /* logical op clears CF */
    MEM8(XBOX_FS_BASE + ebx + 0x6F) = MEM8(XBOX_FS_BASE + ebx + 0x6F) & LO8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x74) = MEM8(ebx + 0x74) & LO8(edx);
    if (0) (void)0; /* goto loc_003BE717 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_003BE6AE: ;
    if (_flags /* jo: overflow */) goto loc_003BE720;

loc_003BE6B0: ;
    if (0) goto loc_003BE6B3; /* jb: below (unsigned <) */

loc_003BE6B3: ;
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    eax = eax + MEM32(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    /* TODO: sldt word ptr [eax] */
    _cf = (int)((((uint64_t)(MEM8(eax + 0x61)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax + 0x61) = MEM8(eax + 0x61) + LO8(edx);
    esi = (uint32_t)((int32_t)MEM32(edx + 0x20) * (int32_t)0x74736E49);
    if (_cf /* jb: below (unsigned <) */) { g_seh_ebp = ebp; sub_003BE748(); return; }

loc_003BE6D3: ;
    /* TODO: arpl word ptr [ecx + ebp*2 + 0x6f], si */
    /* TODO: outsb dx, byte ptr [esi] */
    if (!_cf /* jae: above or equal (unsigned >=) */) goto loc_003BE6DA;

loc_003BE6DA: ;
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    PUSH32(esp, edx);
    /* TODO: insd dword ptr es:[edi], dx */
    /* TODO: outsd dx, dword ptr [esi] */
    if (_flags /* jbe: below or equal (unsigned <=) */) { g_seh_ebp = ebp; sub_003BE747(); return; }

loc_003BE6E2: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0x6D) = MEM8(ebp + 0x6D) & LO8(eax);
    if (_flags /* jo: overflow */) { g_seh_ebp = ebp; sub_003BE75B(); return; }

loc_003BE6E7: ;
    if (((int32_t)MEM8(ebp + 0x6D) >= 0)) (void)0; /* goto loc_003BE709 - dead code, label not in function */ /* jns: not sign (positive) */

loc_003BE6E9: ;
    PUSH32(esp, ebx);
    if ((MEM8(ebp + 0x6D) == 0)) { g_seh_ebp = ebp; sub_003BE74D(); return; } /* je: equal / zero */

loc_003BE6EC: ;
    if (1) goto loc_003BE6F0; /* jae: above or equal (unsigned >=) */

loc_003BE6F0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x61) * (int32_t)0x6576206C);
    if (_cf /* jb: below (unsigned <) */) { g_seh_ebp = ebp; sub_003BE763(); return; }

loc_003BE6FA: ;
    SET_LO16(esp, (uint32_t)((int32_t)MEM16(ebx + 0x61) * (int32_t)0x6974));
    /* TODO: outsd dx, dword ptr [esi] */
    /* TODO: outsb dx, byte ptr [esi] */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    eax = SX16(eax); /* cwde */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(ebx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

loc_003BE720: ;
    SET_LO8(eax, MEM8(0x431A));
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);

}

/**
 * sub_003BF580
 * Original: 0x003BF580 - 0x003BF68C (268 bytes, 95 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BF580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0xC04;
    edi = 0x5D9CE8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x5D9CEC;
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 0x60);
    MEM32(0x5D9CF0) = eax;
    MEM32(0x5D9CEC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF5B2u); RECOMP_ABI_CALL(0x003C28D4u, sub_003C28D4); /* call 0x003C28D4 */

loc_003BF5B2: ;
    edi = eax;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(0x5DCCF4) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF5C9u); RECOMP_ABI_CALL(0x003BF9C4u, sub_003BF9C4); /* call 0x003BF9C4 */

loc_003BF5C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003BF5E2; /* jne: not equal / not zero */

loc_003BF5CD: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x3BF3F8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF5DAu); RECOMP_ABI_CALL(0x003BF98Du, sub_003BF98D); /* call 0x003BF98D */

loc_003BF5DA: ;
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BF5E5; /* jbe: below or equal (unsigned <=) */

loc_003BF5E2: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_003BF5E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C6B58);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BAC); PUSH32(esp, 0x003BF5F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BF5F4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003BF667; /* jbe: below or equal (unsigned <=) */

loc_003BF5FA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    eax = esi + 0x41;
    if (CMP_A(_fa, _fb)) goto loc_003BF605; /* ja: above (unsigned >) */

loc_003BF602: ;
    eax = esi + 0x30;

loc_003BF605: ;
    ecx = MEM32(ebp + -8);
    MEM8(ecx + 0xB) = LO8(eax);
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3A);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x170);
    PUSH32(esp, 0x3BF430);
    { uint32_t _icall_target = MEM32(0x3C6D80); PUSH32(esp, 0x003BF627u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BF627: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003BF667; /* jl: less (signed <) */

loc_003BF62B: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, 0x5C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x1E) = 1;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | ecx;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFEFu;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF662u); RECOMP_ABI_CALL(0x003C04F4u, sub_003C04F4); /* call 0x003C04F4 */

loc_003BF662: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BF5FA; /* jb: below (unsigned <) */

loc_003BF667: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x3BF421) = LO8(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_003BF67B; /* jbe: below or equal (unsigned <=) */

loc_003BF675: ;
    MEM8(0x3BF427) = MEM8(0x3BF427) << 1;

loc_003BF67B: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x3BF420);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF688u); RECOMP_ABI_CALL(0x003BF9D0u, sub_003BF9D0); /* call 0x003BF9D0 */

loc_003BF688: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF68C
 * Original: 0x003BF68C - 0x003BF897 (523 bytes, 165 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BF68C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF68C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x60;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0x3BF55C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3BF55C), esi (32-bit) */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003BF892; /* jne: not equal / not zero */

loc_003BF6AA: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x3BF55C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF6BEu); RECOMP_ABI_CALL(0x003BF9C4u, sub_003BF9C4); /* call 0x003BF9C4 */

loc_003BF6BE: ;
    MEM32(ebp + -16) = eax;
    eax = 0x3BF3C4;
    ebx = 0x3BF3CC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_003BF745; /* jae: above or equal (unsigned >=) */

loc_003BF6D1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BF71E; /* je: equal / zero */

loc_003BF6D7: ;
    eax = MEM32(eax + 4);
    MEM32(ebp + esi * 4 + -96) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BF6F3; /* jne: not equal / not zero */

loc_003BF6E5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF6EEu); RECOMP_ABI_CALL(0x003BF98Du, sub_003BF98D); /* call 0x003BF98D */

loc_003BF6EE: ;
    ecx = MEM32(edi);
    MEM8(ecx + 1) = LO8(eax);

loc_003BF6F3: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BF6FE; /* je: equal / zero */

loc_003BF6FC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003BF6FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BF6FE: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    eax = ZX8(MEM8(eax + 1));
    if (TEST_Z(_fa, _fb)) goto loc_003BF711; /* je: equal / zero */

loc_003BF70C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    goto loc_003BF71E;

loc_003BF711: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BF71B; /* je: equal / zero */

loc_003BF716: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    goto loc_003BF71E;

loc_003BF71B: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;

loc_003BF71E: ;
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BF6D1; /* jb: below (unsigned <) */

loc_003BF725: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF736; /* je: equal / zero */

loc_003BF72B: ;
    MEM16(0x5DCCF8) = 0xC;
    goto loc_003BF74E;

loc_003BF736: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM16(0x5DCCF8) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_003BF74E; /* jne: not equal / not zero */

loc_003BF745: ;
    MEM16(0x5DCCF8) = 4;

loc_003BF74E: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BF759; /* jbe: below or equal (unsigned <=) */

loc_003BF756: ;
    MEM32(ebp + -8) = eax;

loc_003BF759: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BF761; /* jbe: below or equal (unsigned <=) */

loc_003BF75E: ;
    MEM32(ebp + -4) = eax;

loc_003BF761: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    eax = eax + ecx;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003BF776; /* jbe: below or equal (unsigned <=) */

loc_003BF773: ;
    MEM32(ebp + -16) = ecx;

loc_003BF776: ;
    eax = MEM32(ebp + -16);
    eax = eax + MEM32(ebp + -8);
    ecx = ZX16(MEM16(0x5DCCF8));
    MEM32(ebp + -16) = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAB);
    ebx = esi;
    ebx = ebx << 2;
    ecx = ecx + ebx;
    eax = eax + ecx;
    PUSH32(esp, 0x5F444958);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF7A3u); RECOMP_ABI_CALL(0x003C28D4u, sub_003C28D4); /* call 0x003C28D4 */

loc_003BF7A3: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    MEM32(0x3BF530) = esi;
    MEM32(0x3BF548) = esi;
    MEM32(0x3BF534) = eax;
    MEM32(0x3BF54C) = eax;
    edi = eax;
    esi = ebp + -96;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(ebp + -16);
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    eax = eax + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(0x5DCD00) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003BF7F7; /* jbe: below or equal (unsigned <=) */

loc_003BF7E1: ;
    MEM32(eax + 0xA7) = ecx;
    ecx = eax;
    eax = eax + 0xAB;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BF7E1; /* jne: not equal / not zero */

loc_003BF7F1: ;
    MEM32(0x5DCD00) = ecx;

loc_003BF7F7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM16(0x5DCCF8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5DCCF8), LO16(edi) (16-bit) */
    MEM32(0x5DCCFC) = eax;
    MEM16(0x5DCCFA) = LO16(edi);
    if (CMP_BE(_fa, _fb)) goto loc_003BF82B; /* jbe: below or equal (unsigned <=) */

loc_003BF80E: ;
    ecx = 0; /* xor self */

loc_003BF810: ;
    eax = MEM32(0x5DCCFC);
    eax = ecx + eax + 4;
    MEM8(eax) = MEM8(eax) & 0xFE;
    eax = ZX16(MEM16(0x5DCCF8));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x16;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BF810; /* jb: below (unsigned <) */

loc_003BF82B: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = 0x3BF550;
    if (CMP_EQ(_fa, _fb)) goto loc_003BF84C; /* je: equal / zero */

loc_003BF837: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x3BF550) = 0;
    MEM8(0x3BF551) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF84Cu); RECOMP_ABI_CALL(0x003BF9D0u, sub_003BF9D0); /* call 0x003BF9D0 */

loc_003BF84C: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF868; /* je: equal / zero */

loc_003BF853: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x3BF550) = 2;
    MEM8(0x3BF551) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF868u); RECOMP_ABI_CALL(0x003BF9D0u, sub_003BF9D0); /* call 0x003BF9D0 */

loc_003BF868: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF884; /* je: equal / zero */

loc_003BF86F: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x3BF550) = 1;
    MEM8(0x3BF551) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BF884u); RECOMP_ABI_CALL(0x003BF9D0u, sub_003BF9D0); /* call 0x003BF9D0 */

loc_003BF884: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x5DCD50);
    { uint32_t _icall_target = MEM32(0x3C6CF8); PUSH32(esp, 0x003BF890u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BF890: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003BF892: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF910
 * Original: 0x003BF910 - 0x003BF98D (125 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF910: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x44425355);
    edi = edi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003BF924u); RECOMP_ABI_CALL(0x003C28D4u, sub_003C28D4); /* call 0x003C28D4 */

loc_003BF924: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BF988; /* je: equal / zero */

loc_003BF92A: ;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    MEM8(0x5DCD98) = MEM8(0x5DCD98) + 1;
    _fa = (uint32_t)(MEM8(0x5DCD98)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(0x5DCD98));
    ecx = 0x5DCDA0;
    MEM32(esi) = eax;
    PUSH32(esp, 0x003BF957u); RECOMP_ABI_CALL(0x003C1C5Fu, sub_003C1C5F); /* call 0x003C1C5F */

loc_003BF957: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 4;
    MEM32(ecx) = eax;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    MEM8(eax + 2) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 1) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 3) = 0x80;
    eax = MEM32(ecx);
    MEM32(eax + 0xC) = esi;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    esi = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BF988u); RECOMP_ABI_CALL(0x003BFE0Cu, sub_003BFE0C); /* call 0x003BFE0C */

loc_003BF988: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BF98D
 * Original: 0x003BF98D - 0x003BF9C4 (55 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF98D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF98D: ;
    edx = MEM32(ecx + 0x9C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BF9BB; /* je: equal / zero */

loc_003BF999: ;
    ecx = MEM32(ecx + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_003BF9B7; /* jbe: below or equal (unsigned <=) */

loc_003BF9A5: ;
    esi = edx;

loc_003BF9A7: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF9BE; /* je: equal / zero */

loc_003BF9AF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BF9A7; /* jb: below (unsigned <) */

loc_003BF9B7: ;
    eax = 0; /* xor self */

loc_003BF9B9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003BF9BB: ;
    esp += 8; return; /* ret 4 */

loc_003BF9BE: ;
    eax = MEM32(edx + eax * 8 + 4);
    goto loc_003BF9B9;

}

/**
 * sub_003BF9C4
 * Original: 0x003BF9C4 - 0x003BF9D0 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF9C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF9C4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ecx + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x9C), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003BF9D0
 * Original: 0x003BF9D0 - 0x003BFBD2 (514 bytes, 198 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BF9D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF9D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX8(MEM8(esi + 1));
    MEM32(ebp + -8) = eax;
    eax = ZX8(MEM8(esi));
    eax = eax - 0;
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edx;
    if ((eax == 0)) goto loc_003BFA30; /* je: equal / zero */

loc_003BF9F0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003BFA2B; /* je: equal / zero */

loc_003BF9F3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BFA34; /* jne: not equal / not zero */

loc_003BF9F6: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x34)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x34) (8-bit) */
    ebx = edx + 0x64;
    if (CMP_BE(_fa, _fb)) goto loc_003BFA04; /* jbe: below or equal (unsigned <=) */

loc_003BFA01: ;
    MEM8(edx + 0x34) = LO8(eax);

loc_003BFA04: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFA37; /* jbe: below or equal (unsigned <=) */

loc_003BFA0B: ;
    SET_LO8(eax, LO8(eax) - 4);
    PUSH32(esp, esi);
    ecx = edx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFA1Bu); RECOMP_ABI_CALL(0x003BF9D0u, sub_003BF9D0); /* call 0x003BF9D0 */

loc_003BFA1B: ;
    MEM8(esi + 1) = MEM8(esi + 1) + 4;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 4;
    edx = MEM32(ebp + -12);
    MEM8(esi) = 2;
    goto loc_003BFA37;

loc_003BFA2B: ;
    ebx = edx + 0x32;
    goto loc_003BFA37;

loc_003BFA30: ;
    ebx = edx;
    goto loc_003BFA37;

loc_003BFA34: ;
    ebx = MEM32(ebp + 8);

loc_003BFA37: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFA42; /* jbe: below or equal (unsigned <=) */

loc_003BFA3F: ;
    MEM8(ebx + 2) = LO8(eax);

loc_003BFA42: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003BFA99; /* je: equal / zero */

loc_003BFA50: ;
    edi = ebx + 3;

loc_003BFA53: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFA99; /* jae: above or equal (unsigned >=) */

loc_003BFA59: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 3) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFA68; /* jbe: below or equal (unsigned <=) */

loc_003BFA60: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xA;
    goto loc_003BFA93;

loc_003BFA68: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFA85; /* jae: above or equal (unsigned >=) */

loc_003BFA6E: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    ecx = ebx + 0x2B;

loc_003BFA77: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    ecx = ecx - 0xA;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BFA77; /* jne: not equal / not zero */

loc_003BFA82: ;
    edx = MEM32(ebp + -12);

loc_003BFA85: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi = edi + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BFA93: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFA53; /* jne: not equal / not zero */

loc_003BFA99: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003BFAF0; /* je: equal / zero */

loc_003BFAA7: ;
    edi = ebx + 4;

loc_003BFAAA: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFAF0; /* jae: above or equal (unsigned >=) */

loc_003BFAB0: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 4) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFABF; /* jbe: below or equal (unsigned <=) */

loc_003BFAB7: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xA;
    goto loc_003BFAEA;

loc_003BFABF: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFADC; /* jae: above or equal (unsigned >=) */

loc_003BFAC5: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    ecx = ebx + 0x2C;

loc_003BFACE: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    ecx = ecx - 0xA;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BFACE; /* jne: not equal / not zero */

loc_003BFAD9: ;
    edx = MEM32(ebp + -12);

loc_003BFADC: ;
    SET_LO8(eax, MEM8(esi + 4));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi = edi + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BFAEA: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFAAA; /* jne: not equal / not zero */

loc_003BFAF0: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003BFB47; /* je: equal / zero */

loc_003BFAFE: ;
    edi = ebx + 5;

loc_003BFB01: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFB47; /* jae: above or equal (unsigned >=) */

loc_003BFB07: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 5) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFB16; /* jbe: below or equal (unsigned <=) */

loc_003BFB0E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xA;
    goto loc_003BFB41;

loc_003BFB16: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFB33; /* jae: above or equal (unsigned >=) */

loc_003BFB1C: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    ecx = ebx + 0x2D;

loc_003BFB25: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    ecx = ecx - 0xA;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BFB25; /* jne: not equal / not zero */

loc_003BFB30: ;
    edx = MEM32(ebp + -12);

loc_003BFB33: ;
    SET_LO8(eax, MEM8(esi + 5));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi = edi + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BFB41: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFB01; /* jne: not equal / not zero */

loc_003BFB47: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003BFB9E; /* je: equal / zero */

loc_003BFB55: ;
    edi = ebx + 8;

loc_003BFB58: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFB9E; /* jae: above or equal (unsigned >=) */

loc_003BFB5E: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 8) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFB6D; /* jbe: below or equal (unsigned <=) */

loc_003BFB65: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xA;
    goto loc_003BFB98;

loc_003BFB6D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFB8A; /* jae: above or equal (unsigned >=) */

loc_003BFB73: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + 8);
    ecx = ebx + 0x30;

loc_003BFB7C: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    ecx = ecx - 0xA;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BFB7C; /* jne: not equal / not zero */

loc_003BFB87: ;
    edx = MEM32(ebp + -12);

loc_003BFB8A: ;
    SET_LO8(eax, MEM8(esi + 8));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi = edi + 0xA;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003BFB98: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFB58; /* jne: not equal / not zero */

loc_003BFB9E: ;
    SET_LO8(eax, MEM8(esi + 6));
    ecx = edx + 0xB0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFBAD; /* jbe: below or equal (unsigned <=) */

loc_003BFBAB: ;
    MEM8(ecx) = LO8(eax);

loc_003BFBAD: ;
    SET_LO8(eax, MEM8(esi + 7));
    ecx = edx + 0xB1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFBBC; /* jbe: below or equal (unsigned <=) */

loc_003BFBBA: ;
    MEM8(ecx) = LO8(eax);

loc_003BFBBC: ;
    SET_LO8(eax, MEM8(esi + 9));
    POP32(esp, edi);
    ecx = edx + 0xB2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_003BFBCE; /* jbe: below or equal (unsigned <=) */

loc_003BFBCC: ;
    MEM8(ecx) = LO8(eax);

loc_003BFBCE: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BFBD2
 * Original: 0x003BFBD2 - 0x003BFD1B (329 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BFBD2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFBD2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM8(ecx + 0xA0) = 0x10;
    _fa = (uint32_t)(MEM8(0x3BF3E8)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3BF3E8), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003BFBFB; /* je: equal / zero */

loc_003BFBF4: ;
    MEM8(ecx + 0xA0) = 0x30;

loc_003BFBFB: ;
    SET_LO8(eax, MEM8(ecx + 2));
    SET_LO8(edx, MEM8(ecx + 0x34));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(edx, LO8(edx) + MEM8(ecx + 0x66));
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) + 3);
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(edx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFC20; /* jbe: below or equal (unsigned <=) */

loc_003BFC1A: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_003BFC20: ;
    SET_LO8(eax, MEM8(ecx + 0x66));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFC31; /* jbe: below or equal (unsigned <=) */

loc_003BFC2B: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_003BFC31: ;
    SET_LO8(eax, MEM8(ecx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003BFC42; /* jbe: below or equal (unsigned <=) */

loc_003BFC3C: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_003BFC42: ;
    SET_LO8(eax, MEM8(ecx + 0xA1));
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(eax);
    eax = ecx + 0x37;
    MEM32(ebp + -12) = 4;

loc_003BFC58: ;
    edi = ZX8(MEM8(eax + 0x32));
    edx = ZX8(MEM8(eax + -50));
    edx = edx + edi;
    edi = ZX8(MEM8(eax));
    edi = edi + esi;
    esi = edi + edx;
    edi = ZX8(MEM8(eax + 0x30));
    edx = ZX8(MEM8(eax + -52));
    edx = edx + edi;
    edi = ZX8(MEM8(eax + -2));
    edi = edi + MEM32(ebp + -4);
    eax = eax + 0xA;
    edi = edi + edx;
    edx = ZX8(MEM8(eax + -61));
    MEM32(ebp + -4) = edi;
    edi = ZX8(MEM8(eax + 0x27));
    edx = edx + edi;
    edi = ZX8(MEM8(eax + -11));
    edi = edi + MEM32(ebp + -8);
    edi = edi + edx;
    edx = ZX8(MEM8(eax + -57));
    MEM32(ecx + 0xA8) = MEM32(ecx + 0xA8) + edx;
    ebx = ZX8(MEM8(eax + 0x2B));
    edx = MEM32(ecx + 0xA8);
    edx = edx + ebx;
    MEM32(ecx + 0xA8) = edx;
    ebx = ZX8(MEM8(eax + -7));
    ebx = ebx + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edi;
    MEM32(ecx + 0xA8) = ebx;
    if ((_fa != 0)) goto loc_003BFC58; /* jne: not equal / not zero */

loc_003BFCC6: ;
    _fa = (uint32_t)(MEM8(0x3BF3E8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3BF3E8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFCD8; /* je: equal / zero */

loc_003BFCCF: ;
    esi = esi + 0xD;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xD;
    goto loc_003BFCDF;

loc_003BFCD8: ;
    esi = esi + 5;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 5;

loc_003BFCDF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + 0xB0;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0xD (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003BFCF0; /* jae: above or equal (unsigned >=) */

loc_003BFCED: ;
    MEM8(edx) = 0xD;

loc_003BFCF0: ;
    eax = MEM32(ebp + -4);
    edx = ZX8(MEM8(edx));
    eax = eax + edi;
    edi = ZX8(MEM8(ecx + 0xB1));
    ebx = eax + esi * 2;
    ebx = ebx + esi;
    ebx = ebx + edi;
    edx = edx + ebx;
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    MEM32(ecx + 0xAC) = edx;
    MEM32(ecx + 0xA4) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003BFD1B
 * Original: 0x003BFD1B - 0x003BFDBE (163 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BFD1B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFD1B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = ZX8(LO8(eax));
    MEM8(esi + 0x7A) = LO8(eax);
    ebx = 0; /* xor self */
    eax = edi;
    PUSH32(esp, 0x44425355);
    eax = eax << 5;
    PUSH32(esp, eax);
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(ebx);
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFD4Cu); RECOMP_ABI_CALL(0x003C28D4u, sub_003C28D4); /* call 0x003C28D4 */

loc_003BFD4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003BFD66; /* je: equal / zero */

loc_003BFD53: ;
    PUSH32(esp, 0x3C293C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFD61u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_003BFD61: ;
    eax = MEM32(ebp + 8);
    goto loc_003BFD68;

loc_003BFD66: ;
    eax = 0; /* xor self */

loc_003BFD68: ;
    ecx = ZX8(MEM8(esi + 0x7A));
    MEM32(esi + 0xE0) = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(esi + 0x7B) = LO8(eax);
    SET_LO8(eax, 0); /* xor self */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003BFD9C; /* jle: less or equal (signed <=) */

loc_003BFD7F: ;
    ecx = 0; /* xor self */

loc_003BFD81: ;
    edx = MEM32(esi + 0xE0);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 5;
    MEM8(ecx + edx + 1) = LO8(eax);
    edx = ZX8(MEM8(esi + 0x7A));
    ecx = SX8(LO8(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BFD81; /* jl: less (signed <) */

loc_003BFD9C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C3683);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CFC); PUSH32(esp, 0x003BFDACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFDAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    esi = esi + 0x50;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6CF8); PUSH32(esp, 0x003BFDB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFDB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BFDBE
 * Original: 0x003BFDBE - 0x003BFDCA (12 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFDBE(void)
{

loc_003BFDBE: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x003BFDC7u); RECOMP_ABI_CALL(0x003C00A3u, sub_003C00A3); /* call 0x003C00A3 */

loc_003BFDC7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BFDCA
 * Original: 0x003BFDCA - 0x003BFE0C (66 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BFDCA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFDCA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = MEM32(0x3C6CCC);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0xA1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 0xA1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFE0A; /* je: equal / zero */

loc_003BFDDB: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM8(ebp + -24) = 3;
    MEM32(ebp + -16) = 0x1000;
    MEM32(ebp + -20) = 0xFED00000u;
    { uint32_t _icall_target = MEM32(0x3C6D30); PUSH32(esp, 0x003BFDF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFDF9: ;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x4E0);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFE0Au); RECOMP_ABI_CALL(0x003BF910u, sub_003BF910); /* call 0x003BF910 */

loc_003BFE0A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003BFE0C
 * Original: 0x003BFE0C - 0x003BFF87 (379 bytes, 114 insns)
 * Category: game_input
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BFE0C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFE0C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM8(ebp + 0xC) = MEM8(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 0xC));
    MEM32(esi + 0x45C) = edi;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 4) = ecx;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFE3Au); RECOMP_ABI_CALL(0x003C02C9u, sub_003C02C9); /* call 0x003C02C9 */

loc_003BFE3A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFE40u); RECOMP_ABI_CALL(0x003C02D4u, sub_003C02D4); /* call 0x003C02D4 */

loc_003BFE40: ;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C5E00);
    eax = esi + 0x440;
    MEM32(ebx + 0x48) = 0x1200;
    MEM32(ebx + 0x4C) = 0;
    MEM32(ebx + 0x50) = 0x80000000u;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CFC); PUSH32(esp, 0x003BFE6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFE6A: ;
    eax = MEM32(edi * 4 + 0x5DCFC4);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 8);
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003BFE80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFE80: ;
    MEM8(ebp + 0xF) = LO8(eax);
    eax = MEM32(ebp + 8);
    eax = eax | 1;
    MEM32(ebx + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(0x3C6D40); PUSH32(esp, 0x003BFE94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFE94: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFE9Bu); RECOMP_ABI_CALL(0x003C0268u, sub_003C0268); /* call 0x003C0268 */

loc_003BFE9B: ;
    MEM32(ebx + 4) = 0xBE;
    eax = MEM32(ebx + 0x34);
    eax = eax & 0xA772EED8u;
    eax = eax | 0x27722ED8;
    ecx = eax;
    ecx = ~ecx;
    ecx = ecx ^ eax;
    ecx = ecx & 0x7FFFFFFF;
    eax = ~eax;
    ecx = ecx ^ eax;
    MEM32(ebx + 0x34) = ecx;
    eax = MEM32(0x3C6CCC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003BFF0F; /* jne: not equal / not zero */

loc_003BFECC: ;
    MEM32(ebp + 8) = 2;

loc_003BFED3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFED8u); RECOMP_ABI_CALL(0x003C3DECu, sub_003C3DEC); /* call 0x003C3DEC */

loc_003BFED8: ;
    edx = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    eax = eax - MEM32(0x5DCFC0);
    ecx = esi;
    MEM32(edx + 0x14) = eax;
    eax = MEM32(edx);
    eax = eax & 0xF808FFFFu;
    eax = eax | 0x80000;
    MEM8(edx + 0x11) = 0;
    MEM32(edx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFF07u); RECOMP_ABI_CALL(0x003C52BDu, sub_003C52BD); /* call 0x003C52BD */

loc_003BFF07: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BFED3; /* jne: not equal / not zero */

loc_003BFF0C: ;
    edi = MEM32(ebp + -4);

loc_003BFF0F: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003BFF18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFF18: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edi + 0x5DD000;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C572C);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D2C); PUSH32(esp, 0x003BFF3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFF3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D28); PUSH32(esp, 0x003BFF45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFF45: ;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x4C0;
    eax = esi + 0x4C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(ecx) = 0x3C4116;
    MEM32(esi + 0x4C4) = edx;
    MEM32(esi + 0x4CC) = eax;
    MEM32(eax) = eax;
    { uint32_t _icall_target = MEM32(0x3C6CD0); PUSH32(esp, 0x003BFF70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003BFF70: ;
    ecx = esi;
    MEM32(ebx + 0x10) = 0x80000033u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003BFF7Eu); RECOMP_ABI_CALL(0x003BFFF3u, sub_003BFFF3); /* call 0x003BFFF3 */

loc_003BFF7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003BFFF3
 * Original: 0x003BFFF3 - 0x003C00A3 (176 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BFFF3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFFF3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x478;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CF8); PUSH32(esp, 0x003C000Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C000E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C51B6);
    eax = esi + 0x4A0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CFC); PUSH32(esp, 0x003C0021u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0021: ;
    MEM8(esi + 0x460) = 4;
    eax = MEM32(ebx + 0x50);
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    MEM32(ebx + 0x50) = eax;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    edi = ebp + -4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x460), LO8(edx) (8-bit) */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    if (CMP_BE(_fa, _fb)) goto loc_003C007D; /* jbe: below or equal (unsigned <=) */

loc_003C004C: ;
    eax = ebx + 0x54;

loc_003C004F: ;
    edi = MEM32(eax);
    MEM32(ebp + -8) = edi;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C0062; /* je: equal / zero */

loc_003C005A: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) | LO16(ecx);
    MEM16(ebp + -4) = MEM16(ebp + -4) | LO16(ecx);

loc_003C0062: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    edi = MEM32(ebp + -8);
    MEM32(eax) = edi;
    edi = ZX8(MEM8(esi + 0x460));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    ecx = ecx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C004F; /* jb: below (unsigned <) */

loc_003C007D: ;
    MEM32(ebx + 0x10) = 0x40;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C008Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C008A: ;
    edx = ebp + -4;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C0096u); RECOMP_ABI_CALL(0x003C50BDu, sub_003C50BD); /* call 0x003C50BD */

loc_003C0096: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C009Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C009E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C00A3
 * Original: 0x003C00A3 - 0x003C0268 (453 bytes, 142 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C00A3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C00A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ZX8(MEM8(ebx + 0xE));
    eax = MEM32(ebx + 4);
    ecx = ecx << 6;
    ecx = ecx + 0x30;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_003C00C3; /* jae: above or equal (unsigned >=) */

loc_003C00C1: ;
    MEM32(ebx) = eax;

loc_003C00C3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebx + 8);
    ecx = ecx + 8;
    ecx = ecx << 5;
    eax = eax + ecx;
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    eax = eax + ecx;
    ecx = eax;
    eax = ecx + 0xFFF;
    eax = eax >> 0xC;
    edx = eax;
    edx = edx << 4;
    edx = edx + ecx;
    ecx = eax;
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C00F7; /* jae: above or equal (unsigned >=) */

loc_003C00F6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C00F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = eax << 0xC;
    edi = eax;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x3C6C34); PUSH32(esp, 0x003C0107u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0107: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x003C0113u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0113: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x003C011Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C011A: ;
    ecx = esi;
    ecx = ecx - eax;
    MEM32(0x5DCFC0) = ecx;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = edx;
    edx = 0; /* xor self */
    MEM32(0x5DCFC4) = esi;
    MEM32(0x5DCFC8) = edx;
    edi = ZX8(MEM8(ebx + 0xE));
    ecx = esi + eax;
    esi = esi + 0x100;
    eax = 0; /* xor self */
    MEM32(0x5DCFEC) = edi;
    MEM32(0x5DCFE8) = edx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edx (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003C01A9; /* jbe: below or equal (unsigned <=) */

loc_003C016B: ;
    edi = MEM32(0x5DCFE8);
    MEM32(esi) = edi;
    edi = MEM32(0x5DCFC8);
    MEM32(0x5DCFE8) = esi;
    esi = esi + MEM32(ebp + -8);
    MEM32(esi + 0x18) = edi;
    MEM32(0x5DCFC8) = esi;
    esi = esi + 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C016B; /* jb: below (unsigned <) */

loc_003C0194: ;
    goto loc_003C01A9;

loc_003C0196: ;
    edi = MEM32(0x5DCFC8);
    MEM32(esi + 0x18) = edi;
    MEM32(0x5DCFC8) = esi;
    esi = esi + 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C01A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C0196; /* jb: below (unsigned <) */

loc_003C01AD: ;
    edi = esi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(0x5DCFCC) = edx;
    MEM32(0x5DCFD0) = esi;
    if (CMP_A(_fa, _fb)) goto loc_003C01E7; /* ja: above (unsigned >) */

loc_003C01C3: ;
    eax = esi;
    eax = eax - MEM32(0x5DCFC0);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = esi;
    MEM32(edi + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C01D7u); RECOMP_ABI_CALL(0x003C52A0u, sub_003C52A0); /* call 0x003C52A0 */

loc_003C01D7: ;
    esi = esi + 0x20;
    edi = edi + 0x20;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -12) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C01C3; /* jbe: below or equal (unsigned <=) */

loc_003C01E5: ;
    edx = 0; /* xor self */

loc_003C01E7: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(0x5DCFD4) = eax;
    MEM32(0x5DCFD8) = edx;
    MEM32(0x5DCFDC) = 0x3E8;
    SET_LO16(eax, ZX8(MEM8(ebx + 0xC)));
    MEM16(0x5DCFE0) = LO16(eax);
    SET_LO16(eax, ZX8(MEM8(ebx + 0xD)));
    MEM16(0x5DCFE4) = LO16(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    POP32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_003C0250; /* jbe: below or equal (unsigned <=) */

loc_003C021E: ;
    SET_LO8(ecx, LO8(ecx) - MEM8(ebx + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0239; /* je: equal / zero */

loc_003C0226: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 1);
    SET_LO16(esi, ZX8(LO8(edx)));
    SET_LO16(eax, LO16(eax) + LO16(esi));
    MEM16(0x5DCFE4) = LO16(eax);
    SET_LO8(ecx, LO8(ecx) - LO8(edx));

loc_003C0239: ;
    SET_LO16(eax, ZX8(LO8(ecx)));
    MEM16(0x5DCFE0) = MEM16(0x5DCFE0) + LO16(eax);
    eax = MEM32(ebp + -4);
    MEM32(ebx + 8) = eax;
    SET_LO16(eax, MEM16(0x5DCFE4));

loc_003C0250: ;
    SET_LO16(ecx, MEM16(0x5DCFE0));
    POP32(esp, esi);
    MEM16(0x5DCFE2) = LO16(ecx);
    MEM16(0x5DCFE6) = LO16(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C0268
 * Original: 0x003C0268 - 0x003C02C9 (97 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0268(void)
{

loc_003C0268: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    eax = eax - MEM32(0x5DCFC0);
    ecx = MEM32(esi);
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    MEM32(ecx + 0x1C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x20) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x24) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x28) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = eax;
    PUSH32(esp, 1);
    MEM16(esi + 0x416) = 0x2772;
    eax = MEM32(esi);
    PUSH32(esp, 3);
    MEM32(eax + 0x40) = 0x2A29;
    PUSH32(esp, 8);
    MEM16(esi + 0x414) = 0x236F;
    PUSH32(esp, 0x003C02BFu); RECOMP_ABI_CALL(0x003C1CC3u, sub_003C1CC3); /* call 0x003C1CC3 */

loc_003C02BF: ;
    ecx = MEM32(esi);
    eax = ZX16(LO16(eax));
    MEM32(ecx + 0x44) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C02C9
 * Original: 0x003C02C9 - 0x003C02D4 (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C02C9(void)
{

loc_003C02C9: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C02D4
 * Original: 0x003C02D4 - 0x003C0336 (98 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C02D4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C02D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C02FD; /* je: equal / zero */

loc_003C02EB: ;
    ecx = MEM32(eax + 8);
    ecx = ecx | 8;
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx);

loc_003C02F6: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 4), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C02F6; /* jne: not equal / not zero */

loc_003C02FB: ;
    goto loc_003C0331;

loc_003C02FD: ;
    edx = ecx;
    edx = edx >> 6;
    edx = edx & 3;
    if ((edx == 0)) goto loc_003C0331; /* je: equal / zero */

loc_003C0307: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0331; /* je: equal / zero */

loc_003C030C: ;
    ecx = ecx & 0xFFFFFF7Fu;
    ecx = ecx | 0x40;
    MEM32(eax + 4) = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + -8) = 0xFFFCF2C0u;
    { uint32_t _icall_target = MEM32(0x3C6CB0); PUSH32(esp, 0x003C0331u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0331: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C043E
 * Original: 0x003C043E - 0x003C0460 (34 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C043E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C043E: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | eax;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0459; /* je: equal / zero */

loc_003C0455: ;
    MEM32(ecx) = MEM32(ecx) | eax;
    goto loc_003C045D;

loc_003C0459: ;
    eax = ~eax;
    MEM32(ecx) = MEM32(ecx) & eax;

loc_003C045D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003C0460
 * Original: 0x003C0460 - 0x003C0465 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C0460: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x003BF897u); return; /* manual tail jmp 0x003BF897 */

}

/**
 * sub_003C04F4
 * Original: 0x003C04F4 - 0x003C051C (40 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C04F4(void)
{

loc_003C04F4: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x58);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xC) = 4;
    eax = MEM32(0x5D9CE8);
    MEM32(edx + 8) = eax;
    MEM32(0x5D9CE8) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C051C
 * Original: 0x003C051C - 0x003C05B2 (150 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C051C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C051C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x003C052Au); RECOMP_ABI_CALL(0x003C184Eu, sub_003C184E); /* call 0x003C184E */

loc_003C052A: ;
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C0537; /* jb: below (unsigned <) */

loc_003C0533: ;
    eax = eax - 0x10;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C0537: ;
    eax = ecx + eax * 2;
    ecx = MEM32(0x5DCCF4);
    PUSH32(esp, ebx);
    eax = eax + eax * 2;
    PUSH32(esp, 1);
    esi = ecx + eax * 4;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x003C0552u); RECOMP_ABI_CALL(0x003C17D8u, sub_003C17D8); /* call 0x003C17D8 */

loc_003C0552: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C05A0; /* je: equal / zero */

loc_003C0556: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 5) = LO8(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x40 (16-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003C05A2; /* jne: not equal / not zero */

loc_003C0565: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x003C056Eu); RECOMP_ABI_CALL(0x003C17D8u, sub_003C17D8); /* call 0x003C17D8 */

loc_003C056E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C05A0; /* je: equal / zero */

loc_003C0572: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 6) = LO8(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x40 (16-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003C05A2; /* jne: not equal / not zero */

loc_003C0581: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C0587u); RECOMP_ABI_CALL(0x003C16DDu, sub_003C16DD); /* call 0x003C16DD */

loc_003C0587: ;
    ecx = edi;
    MEM32(esi) = edi;
    PUSH32(esp, 0x003C0590u); RECOMP_ABI_CALL(0x003C16EAu, sub_003C16EA); /* call 0x003C16EA */

loc_003C0590: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x003C059Bu); RECOMP_ABI_CALL(0x003C16EEu, sub_003C16EE); /* call 0x003C16EE */

loc_003C059B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    goto loc_003C05A7;

loc_003C05A0: ;
    ecx = edi;

loc_003C05A2: ;
    PUSH32(esp, 0x80000400u);

loc_003C05A7: ;
    PUSH32(esp, 0x003C05ACu); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C05AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C05B2
 * Original: 0x003C05B2 - 0x003C0684 (210 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C05B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C05B2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_003C05E0; /* je: equal / zero */

loc_003C05C5: ;
    edx = MEM32(esi + 0x24);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFBFFFFu;
    goto loc_003C0615;

loc_003C05E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C0602; /* je: equal / zero */

loc_003C05E7: ;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFDFFFFu;
    goto loc_003C0615;

loc_003C0602: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C063B; /* je: equal / zero */

loc_003C0609: ;
    MEM8(esi + 0x111) = 0xC3;
    eax = eax & 0xFFFEFFFFu;

loc_003C0615: ;
    ecx = esi + 0x110;
    MEM8(ecx) = 0x1C;
    MEM32(esi + 0x118) = 0x3C05B2;
    MEM32(esi + 0x11C) = esi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x003C0639u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0639: ;
    goto loc_003C067F;

loc_003C063B: ;
    eax = eax & 0xFFF7FFFFu;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003C0663; /* je: equal / zero */

loc_003C064D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_target = MEM32(0x3C6D00); PUSH32(esp, 0x003C065Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C065F: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFFEu;

loc_003C0663: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C067E; /* je: equal / zero */

loc_003C0669: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x003C0670u); RECOMP_ABI_CALL(0x003C2BD1u, sub_003C2BD1); /* call 0x003C2BD1 */

loc_003C0670: ;
    MEM32(edi) = ebx;
    eax = MEM32(esi + 0xC);
    eax = eax & 0xFFFFFFFDu;
    eax = eax | 4;
    MEM32(esi + 0xC) = eax;

loc_003C067E: ;
    POP32(esp, ebx);

loc_003C067F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0684
 * Original: 0x003C0684 - 0x003C069E (26 bytes, 10 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0684(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0684: ;
    eax = MEM32(ecx + 0xC);
    edx = 0x80000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C069D; /* jne: not equal / not zero */

loc_003C0690: ;
    PUSH32(esp, ecx);
    eax = eax | edx;
    PUSH32(esp, 0);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x003C069Du); RECOMP_ABI_CALL(0x003C05B2u, sub_003C05B2); /* call 0x003C05B2 */

loc_003C069D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C06D3
 * Original: 0x003C06D3 - 0x003C070B (56 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C06D3(void)
{

loc_003C06D3: ;
    eax = MEM32(0x3C6D84);
    MEM32(0x3BF43C) = eax;
    MEM32(0x3BF440) = eax;
    MEM32(0x3BF44C) = eax;
    MEM32(0x3BF450) = eax;
    MEM32(0x3BF454) = eax;
    MEM32(0x3BF458) = eax;
    MEM32(0x3BF45C) = eax;
    MEM32(0x3BF460) = eax;
    MEM32(0x3BF46C) = eax;
    MEM32(0x3BF470) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003C070B
 * Original: 0x003C070B - 0x003C0742 (55 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C070B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C070B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x3BF3C4;
    PUSH32(esp, edi);
    edi = eax;
    esi = 0x3BF3CC;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(edx) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_003C0736; /* jae: above or equal (unsigned >=) */

loc_003C0723: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C072F; /* je: equal / zero */

loc_003C0729: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C073C; /* je: equal / zero */

loc_003C072D: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_003C072F: ;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C0723; /* jb: below (unsigned <) */

loc_003C0736: ;
    eax = 0; /* xor self */

loc_003C0738: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003C073C: ;
    MEM8(edx) = LO8(ebx);
    eax = MEM32(eax);
    goto loc_003C0738;

}

/**
 * sub_003C0742
 * Original: 0x003C0742 - 0x003C076D (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0742(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0742: ;
    eax = 0x3BF3C4;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x3BF3CC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C0765; /* jae: above or equal (unsigned >=) */

loc_003C0753: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C075E; /* je: equal / zero */

loc_003C0759: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0769; /* je: equal / zero */

loc_003C075E: ;
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C0753; /* jb: below (unsigned <) */

loc_003C0765: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003C0769: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C076D
 * Original: 0x003C076D - 0x003C0788 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C076D(void)
{

loc_003C076D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCD78);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5DCD50);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C0787u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0787: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0788
 * Original: 0x003C0788 - 0x003C0799 (17 bytes, 4 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0788(void)
{

loc_003C0788: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x5DCD18);
    PUSH32(esp, 0x003C0796u); RECOMP_ABI_CALL(0x003C16C6u, sub_003C16C6); /* call 0x003C16C6 */

loc_003C0796: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C0799
 * Original: 0x003C0799 - 0x003C07BC (35 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0799(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0799: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003C07A5u); RECOMP_ABI_CALL(0x003C16DDu, sub_003C16DD); /* call 0x003C16DD */

loc_003C07A5: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003C07ACu); RECOMP_ABI_CALL(0x003C2BD1u, sub_003C2BD1); /* call 0x003C2BD1 */

loc_003C07AC: ;
    MEM32(esi) = MEM32(esi) & 0;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    MEM16(0x5DCCFA) = MEM16(0x5DCCFA) - 1;
    _fa = (uint32_t)(MEM16(0x5DCCFA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C07BC
 * Original: 0x003C07BC - 0x003C0826 (106 bytes, 42 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C07BC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C07BC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(MEM16(0x5DCCF8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5DCCF8), LO16(ebx) (16-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = edx;
    edi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003C081F; /* jbe: below or equal (unsigned <=) */

loc_003C07D3: ;
    PUSH32(esp, esi);

loc_003C07D4: ;
    eax = MEM32(0x5DCCFC);
    esi = ZX8(LO8(ebx));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    eax = eax + esi;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C080F; /* je: equal / zero */

loc_003C07E7: ;
    ecx = MEM32(eax);
    PUSH32(esp, 0x003C07EEu); RECOMP_ABI_CALL(0x003C184Eu, sub_003C184E); /* call 0x003C184E */

loc_003C07EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C080F; /* jne: not equal / not zero */

loc_003C07F4: ;
    eax = MEM32(0x5DCCFC);
    eax = eax + esi;
    _fa = (uint32_t)(MEM32(eax + 0xE)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C080F; /* jne: not equal / not zero */

loc_003C0800: ;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C080F; /* je: equal / zero */

loc_003C0808: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C080F; /* jne: not equal / not zero */

loc_003C080D: ;
    ebp = eax;

loc_003C080F: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x5DCCF8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x5DCCF8) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C07D4; /* jb: below (unsigned <) */

loc_003C081E: ;
    POP32(esp, esi);

loc_003C081F: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0826
 * Original: 0x003C0826 - 0x003C08D1 (171 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C0826(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0826: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ebx = esi + 0x52;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 0x82;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C084Au); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C084A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003C08CC; /* jl: less (signed <) */

loc_003C084E: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 2;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 2;
    SET_LO8(eax, MEM8(edi + 8));
    MEM8(esi + 0x67) = LO8(eax);
    eax = MEM32(ebp + -4);
    MEM8(esi + 0x68) = 3;
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(esi + 0x69) = LO8(eax);
    MEM16(esi + 0x6E) = 0x20;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C0881u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0881: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003C08CC; /* jl: less (signed <) */

loc_003C0885: ;
    ecx = MEM32(esi + 0x62);
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C08CC; /* je: equal / zero */

loc_003C0893: ;
    _fa = (uint32_t)(MEM8(edi + 9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 9), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C08CC; /* je: equal / zero */

loc_003C0899: ;
    MEM32(esi + 0x5A) = MEM32(esi + 0x5A) & 0;
    MEM8(ebx) = 0x20;
    MEM8(esi + 0x53) = 2;
    SET_LO8(eax, MEM8(edi + 9));
    MEM8(esi + 0x67) = LO8(eax);
    MEM8(esi + 0x68) = 3;
    SET_LO8(eax, MEM8(ecx + 2));
    MEM8(esi + 0x69) = LO8(eax);
    MEM16(esi + 0x6E) = 0x20;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C08C2u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C08C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003C08CC; /* jl: less (signed <) */

loc_003C08C6: ;
    ecx = MEM32(esi + 0x62);
    MEM32(esi + 0x10) = ecx;

loc_003C08CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C08D1
 * Original: 0x003C08D1 - 0x003C0982 (177 bytes, 54 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C08D1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C08D1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 2 (8-bit) */
    eax = MEM32(esi);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003C0902; /* je: equal / zero */

loc_003C08E4: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x3C08D1;
    MEM32(eax + 0xC) = esi;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) & 0xFD;
    goto loc_003C094C;

loc_003C0902: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0929; /* je: equal / zero */

loc_003C0909: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 8) = 0x3C08D1;
    MEM32(eax + 0xC) = esi;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0x10) = edx;
    MEM32(esi + 0xC) = edi;
    goto loc_003C094C;

loc_003C0929: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0954; /* je: equal / zero */

loc_003C092E: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 8) = 0x3C08D1;
    MEM32(eax + 0xC) = esi;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = edx;
    MEM32(esi + 0x10) = edi;

loc_003C094C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C0952u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0952: ;
    goto loc_003C097D;

loc_003C0954: ;
    MEM32(eax + 0x12) = edi;
    MEM32(esi) = edi;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C0966; /* je: equal / zero */

loc_003C095F: ;
    ecx = eax;
    PUSH32(esp, 0x003C0966u); RECOMP_ABI_CALL(0x003C0799u, sub_003C0799); /* call 0x003C0799 */

loc_003C0966: ;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C097D; /* je: equal / zero */

loc_003C096F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x9E));
    { uint32_t _icall_target = MEM32(0x3C6D00); PUSH32(esp, 0x003C097Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C097D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0982
 * Original: 0x003C0982 - 0x003C0A3E (188 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0982(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0982: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_003C09DA; /* jne: not equal / not zero */

loc_003C0993: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C09DA; /* jne: not equal / not zero */

loc_003C099A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C09DF; /* jl: less (signed <) */

loc_003C09A6: ;
    SET_LO8(eax, LO8(eax) & 0xF);
    MEM8(edi + 4) = LO8(eax);
    eax = MEM32(edi + 0xE);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003C09B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C09B3: ;
    MEM8(ebx + 0xA2) = MEM8(ebx + 0xA2) | 0x10;
    MEM32(ebx + 8) = MEM32(ebx + 8) + 1;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    eax = ZX8(MEM8(edi + 0xC));
    MEM32(esi + 0x14) = eax;
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C09D9; /* je: equal / zero */

loc_003C09D1: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C09D9u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C09D9: ;
    POP32(esp, esi);

loc_003C09DA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003C09DF: ;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM16(esi + 0x2A) = LO16(ecx);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x3C0A3E;
    MEM32(esi + 0xC) = ebx;
    MEM8(esi + 0x1C) = 0;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;
    MEM8(esi + 0x28) = 2;
    MEM8(esi + 0x29) = 1;
    SET_LO16(eax, ZX8(MEM8(edi + 8)));
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(ecx);
    SET_LO8(ecx, MEM8(edi + 4));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF0);
    SET_LO8(eax, LO8(eax) + 0x10);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(edi + 4) = LO8(eax);
    SET_LO8(eax, LO8(eax) & 0xF0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C09D1; /* jne: not equal / not zero */

loc_003C0A35: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x003C0A3Cu); RECOMP_ABI_CALL(0x003C2DBFu, sub_003C2DBF); /* call 0x003C2DBF */

loc_003C0A3C: ;
    goto loc_003C09D9;

}

/**
 * sub_003C0A3E
 * Original: 0x003C0A3E - 0x003C0AC8 (138 bytes, 44 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0A3E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0A3E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esi);
    _fa = (uint32_t)(MEM8(ebx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C0AC3; /* jne: not equal / not zero */

loc_003C0A4C: ;
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xA2), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C0AC3; /* jne: not equal / not zero */

loc_003C0A55: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C0ABB; /* jl: less (signed <) */

loc_003C0A60: ;
    MEM32(edi + 8) = MEM32(edi + 8) & 0;
    MEM8(edi) = 0x18;
    MEM8(edi + 1) = 5;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = 4;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C0A80u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0A80: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x62) = eax;
    eax = esi + 0x32;
    MEM8(esi + 0x52) = 0x28;
    MEM8(esi + 0x53) = 0x41;
    MEM32(esi + 0x5A) = 0x3C0982;
    MEM32(esi + 0x5E) = esi;
    MEM32(esi + 0x6A) = eax;
    eax = ZX8(MEM8(ebx + 0xC));
    MEM32(esi + 0x66) = eax;
    MEM8(esi + 0x6E) = 2;
    MEM8(esi + 0x6F) = 1;
    MEM8(esi + 0x70) = 0;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C0AB9u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0AB9: ;
    goto loc_003C0AC2;

loc_003C0ABB: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x003C0AC2u); RECOMP_ABI_CALL(0x003C2DBFu, sub_003C2DBF); /* call 0x003C2DBF */

loc_003C0AC2: ;
    POP32(esp, edi);

loc_003C0AC3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0B3E
 * Original: 0x003C0B3E - 0x003C0B6B (45 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0B3E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C0B3E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx + 4));
    esi = edx;
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0x003C0B4Du); RECOMP_ABI_CALL(0x003C16F8u, sub_003C16F8); /* call 0x003C16F8 */

loc_003C0B4D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003C0B68; /* je: equal / zero */

loc_003C0B53: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D00); PUSH32(esp, 0x003C0B5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0B5E: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6C04)); return; /* indirect tail jmp */

loc_003C0B68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0B6B
 * Original: 0x003C0B6B - 0x003C0BD1 (102 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0B6B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0B6B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(MEM8(eax + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA2), 1 (8-bit) */
    ecx = MEM32(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_003C0BB8; /* jne: not equal / not zero */

loc_003C0B7F: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C0BB8; /* jne: not equal / not zero */

loc_003C0B85: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C0BAF; /* jl: less (signed <) */

loc_003C0B8F: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM8(esi) = 0x18;
    MEM8(esi + 1) = 5;
    eax = MEM32(eax + 0x10);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 4;
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C0BAFu); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0BAF: ;
    MEM32(esi + 4) = 0xC0000004u;
    goto loc_003C0BC3;

loc_003C0BB8: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi + 4) = 0x80000700u;

loc_003C0BC3: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x003C0BCCu); RECOMP_ABI_CALL(0x003C0B3Eu, sub_003C0B3E); /* call 0x003C0B3E */

loc_003C0BCC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0BD1
 * Original: 0x003C0BD1 - 0x003C0BE2 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0BD1(void)
{

loc_003C0BD1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(0x3C6D00); PUSH32(esp, 0x003C0BDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0BDF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0BE2
 * Original: 0x003C0BE2 - 0x003C0C2F (77 bytes, 35 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C0BE2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0BE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x3C6D08);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = edx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -12) = 0xFFF85EE0u;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x003C0C0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0C0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0C28; /* jne: not equal / not zero */

loc_003C0C16: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C0C1Fu); RECOMP_ABI_CALL(0x003C16C6u, sub_003C16C6); /* call 0x003C16C6 */

loc_003C0C1F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x003C0C28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0C28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0C2F
 * Original: 0x003C0C2F - 0x003C0CB9 (138 bytes, 47 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0C2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0C2F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCD50);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C0C3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0C3D: ;
    esi = MEM32(esp + 0x14);
    edi = esi + 0xA;
    edx = edi;
    SET_LO8(ecx, 2);
    PUSH32(esp, 0x003C0C4Du); RECOMP_ABI_CALL(0x003C070Bu, sub_003C070B); /* call 0x003C070B */

loc_003C0C4D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C0C8E; /* je: equal / zero */

loc_003C0C53: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003C0C5Au); RECOMP_ABI_CALL(0x003C184Eu, sub_003C184E); /* call 0x003C184E */

loc_003C0C5A: ;
    edx = eax;
    ecx = ebx;
    PUSH32(esp, 0x003C0C63u); RECOMP_ABI_CALL(0x003C07BCu, sub_003C07BC); /* call 0x003C07BC */

loc_003C0C63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C0C8E; /* jne: not equal / not zero */

loc_003C0C67: ;
    ecx = MEM32(esi);
    MEM8(esi + 0xB) = LO8(eax);
    SET_LO8(eax, MEM8(edi));
    MEM32(esi + 0xE) = ebx;
    MEM8(esi + 0xC) = 8;
    MEM8(esi + 0xD) = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C0C7Fu); RECOMP_ABI_CALL(0x003C16EEu, sub_003C16EE); /* call 0x003C16EE */

loc_003C0C7F: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003C0C88u); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C0C88: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    goto loc_003C0CB3;

loc_003C0C8E: ;
    edi = MEM32(esi);
    MEM32(esi) = MEM32(esi) & 0;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    MEM16(0x5DCCFA) = MEM16(0x5DCCFA) - 1;
    _fa = (uint32_t)(MEM16(0x5DCCFA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x003C0CA7u); RECOMP_ABI_CALL(0x003C16DDu, sub_003C16DD); /* call 0x003C16DD */

loc_003C0CA7: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x003C0CB3u); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C0CB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0CB9
 * Original: 0x003C0CB9 - 0x003C0D56 (157 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0CB9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C0CB9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCD50);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C0CC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0CC8: ;
    esi = MEM32(esp + 0x18);
    ebp = esi + 0xA;
    edx = ebp;
    SET_LO8(ecx, 4);
    PUSH32(esp, 0x003C0CD8u); RECOMP_ABI_CALL(0x003C070Bu, sub_003C070B); /* call 0x003C070B */

loc_003C0CD8: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0D2C; /* je: equal / zero */

loc_003C0CE0: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x003C0CE7u); RECOMP_ABI_CALL(0x003C184Eu, sub_003C184E); /* call 0x003C184E */

loc_003C0CE7: ;
    edx = eax;
    ecx = edi;
    PUSH32(esp, 0x003C0CF0u); RECOMP_ABI_CALL(0x003C07BCu, sub_003C07BC); /* call 0x003C07BC */

loc_003C0CF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C0D2C; /* jne: not equal / not zero */

loc_003C0CF4: ;
    SET_LO8(ecx, MEM8(esi + 6));
    MEM32(esi + 0xE) = edi;
    MEM8(esi + 0xB) = LO8(ebx);
    eax = MEM32(edi + 8);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C0D0B; /* jae: above or equal (unsigned >=) */

loc_003C0D06: ;
    MEM8(esi + 0xC) = LO8(ecx);
    goto loc_003C0D0E;

loc_003C0D0B: ;
    MEM8(esi + 0xC) = LO8(eax);

loc_003C0D0E: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp));
    MEM8(esi + 0xD) = LO8(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C0D1Eu); RECOMP_ABI_CALL(0x003C16EEu, sub_003C16EE); /* call 0x003C16EE */

loc_003C0D1E: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C0D26u); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C0D26: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    goto loc_003C0D4F;

loc_003C0D2C: ;
    edi = MEM32(esi);
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    MEM32(esi) = ebx;
    MEM16(0x5DCCFA) = MEM16(0x5DCCFA) - 1;
    _fa = (uint32_t)(MEM16(0x5DCCFA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003C0D43u); RECOMP_ABI_CALL(0x003C16DDu, sub_003C16DD); /* call 0x003C16DD */

loc_003C0D43: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x003C0D4Fu); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C0D4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0D56
 * Original: 0x003C0D56 - 0x003C0D74 (30 bytes, 11 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D56(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0D56: ;
    edx = ecx + 0xA2;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C0D73; /* jne: not equal / not zero */

loc_003C0D62: ;
    PUSH32(esp, ecx);
    ecx = ecx + 0x82;
    SET_LO8(eax, LO8(eax) | 4);
    PUSH32(esp, ecx);
    MEM8(edx) = LO8(eax);
    PUSH32(esp, 0x003C0D73u); RECOMP_ABI_CALL(0x003C08D1u, sub_003C08D1); /* call 0x003C08D1 */

loc_003C0D73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0D74
 * Original: 0x003C0D74 - 0x003C0DF8 (132 bytes, 38 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D74(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0D74: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(edx + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0xA2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA2), 1 (8-bit) */
    ecx = MEM32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_003C0D90; /* jne: not equal / not zero */

loc_003C0D8A: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C0D97; /* je: equal / zero */

loc_003C0D90: ;
    MEM32(ecx + 4) = 0x80000700u;

loc_003C0D97: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000004u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xC0000004u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0DF0; /* jne: not equal / not zero */

loc_003C0DA0: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 0x41 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0DF0; /* jne: not equal / not zero */

loc_003C0DA6: ;
    MEM32(ecx + 0xC) = edx;
    edx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM8(ecx) = 0x30;
    MEM8(ecx + 1) = 0x40;
    MEM32(ecx + 8) = 0x3C0B6B;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM8(ecx + 0x1C) = LO8(edx);
    MEM8(ecx + 0x1D) = LO8(edx);
    MEM8(ecx + 0x1E) = LO8(edx);
    MEM8(ecx + 0x28) = 2;
    MEM8(ecx + 0x29) = 1;
    MEM16(ecx + 0x2A) = LO16(edx);
    SET_LO16(esi, ZX8(MEM8(eax + 9)));
    MEM16(ecx + 0x2C) = LO16(esi);
    MEM16(ecx + 0x2E) = LO16(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x003C0DEDu); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0DED: ;
    POP32(esp, esi);
    goto loc_003C0DF5;

loc_003C0DF0: ;
    PUSH32(esp, 0x003C0DF5u); RECOMP_ABI_CALL(0x003C0B3Eu, sub_003C0B3E); /* call 0x003C0B3E */

loc_003C0DF5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0DF8
 * Original: 0x003C0DF8 - 0x003C0E83 (139 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0DF8(void)
{

loc_003C0DF8: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCD50);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C0E04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0E04: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    MEM8(0x5DCD18) = 0x30;
    MEM8(0x5DCD19) = 0x40;
    MEM32(0x5DCD20) = 0x3C0C2F;
    MEM32(0x5DCD24) = esi;
    MEM32(0x5DCD28) = eax;
    MEM32(0x5DCD30) = eax;
    MEM32(0x5DCD2C) = eax;
    MEM8(0x5DCD34) = LO8(eax);
    MEM8(0x5DCD35) = 1;
    MEM8(0x5DCD36) = LO8(eax);
    MEM8(0x5DCD40) = 0x21;
    MEM8(0x5DCD41) = 0xA;
    MEM16(0x5DCD42) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x5DCD44) = LO16(ecx);
    MEM16(0x5DCD46) = LO16(eax);
    PUSH32(esp, 0x003C0E73u); RECOMP_ABI_CALL(0x003C076Du, sub_003C076D); /* call 0x003C076D */

loc_003C0E73: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x5DCD18);
    PUSH32(esp, 0x003C0E7Fu); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0E7F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0E83
 * Original: 0x003C0E83 - 0x003C0F0E (139 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0E83(void)
{

loc_003C0E83: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCD50);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C0E8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0E8F: ;
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    MEM8(0x5DCD18) = 0x30;
    MEM8(0x5DCD19) = 0x40;
    MEM32(0x5DCD20) = 0x3C0CB9;
    MEM32(0x5DCD24) = esi;
    MEM32(0x5DCD28) = eax;
    MEM32(0x5DCD30) = eax;
    MEM32(0x5DCD2C) = eax;
    MEM8(0x5DCD34) = LO8(eax);
    MEM8(0x5DCD35) = 1;
    MEM8(0x5DCD36) = LO8(eax);
    MEM8(0x5DCD40) = 0x21;
    MEM8(0x5DCD41) = 0xA;
    MEM16(0x5DCD42) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x5DCD44) = LO16(ecx);
    MEM16(0x5DCD46) = LO16(eax);
    PUSH32(esp, 0x003C0EFEu); RECOMP_ABI_CALL(0x003C076Du, sub_003C076D); /* call 0x003C076D */

loc_003C0EFE: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x5DCD18);
    PUSH32(esp, 0x003C0F0Au); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C0F0A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0F49
 * Original: 0x003C0F49 - 0x003C0FDD (148 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C0F49(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0F49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C0F59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0F59: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(esi + 0xA3);
    eax = MEM32(eax + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0F6F; /* je: equal / zero */

loc_003C0F6B: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003C0F6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0F6F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0FB6; /* je: equal / zero */

loc_003C0F73: ;
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | 1;
    eax = ebp + -12;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -20;
    ecx = esi;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 0x9E) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C0F9Du); RECOMP_ABI_CALL(0x003C0D56u, sub_003C0D56); /* call 0x003C0D56 */

loc_003C0F9D: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C0FA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0FA6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D08); PUSH32(esp, 0x003C0FB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0FB4: ;
    goto loc_003C0FBF;

loc_003C0FB6: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C0FBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0FBF: ;
    eax = MEM32(esi + 0xA3);
    MEM8(eax + 1) = MEM8(eax + 1) + 1;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x5DCD00);
    MEM32(esi + 0xA7) = eax;
    MEM32(0x5DCD00) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C0FDD
 * Original: 0x003C0FDD - 0x003C110B (302 bytes, 100 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C0FDD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0FDD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    esi = edx;
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C0FF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C0FF2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003C10F5; /* je: equal / zero */

loc_003C0FFF: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C10F5; /* jne: not equal / not zero */

loc_003C1009: ;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xD), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1019; /* jne: not equal / not zero */

loc_003C100E: ;
    MEM32(esi) = 0x32;
    goto loc_003C10FB;

loc_003C1019: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1038; /* je: equal / zero */

loc_003C1020: ;
    ecx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(0x3C6C8C));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C08); PUSH32(esp, 0x003C1031u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1031: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003C103B; /* jge: greater or equal (signed >=) */

loc_003C1035: ;
    MEM32(esi + 4) = ebx;

loc_003C1038: ;
    MEM32(esi + 0xC) = ebx;

loc_003C103B: ;
    ecx = esi + 0x40;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003C1052; /* jne: not equal / not zero */

loc_003C1047: ;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x41) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C1052; /* jae: above or equal (unsigned >=) */

loc_003C104F: ;
    MEM8(esi + 0x41) = LO8(eax);

loc_003C1052: ;
    eax = MEM32(edi + 0xE);
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C105E; /* je: equal / zero */

loc_003C105B: ;
    ecx = esi + 0x42;

loc_003C105E: ;
    edx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebx (32-bit) */
    eax = esi + 0x10;
    MEM32(esi + 0x1C) = esi;
    MEM32(esi + 0x18) = 0x3C0D74;
    if (CMP_EQ(_fa, _fb)) goto loc_003C1096; /* je: equal / zero */

loc_003C1073: ;
    MEM8(eax) = 0x28;
    MEM8(esi + 0x11) = 0x41;
    edx = MEM32(edx + 0x10);
    MEM32(esi + 0x28) = ecx;
    ecx = ZX8(MEM8(esi + 0x41));
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = ecx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    goto loc_003C10DD;

loc_003C1096: ;
    MEM32(esi + 0x28) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x41));
    edx = ZX8(LO8(ecx));
    MEM32(esi + 0x24) = edx;
    SET_LO16(edx, ZX8(MEM8(ebp + -1)));
    SET_LO16(edx, LO16(edx) | 0x200);
    MEM8(eax) = 0x30;
    MEM8(esi + 0x11) = 0x40;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    MEM8(esi + 0x38) = 0x21;
    MEM8(esi + 0x39) = 9;
    MEM16(esi + 0x3A) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(edi + 5)));
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(esi + 0x3C) = LO16(edx);
    MEM16(esi + 0x3E) = LO16(ecx);

loc_003C10DD: ;
    ecx = MEM32(ebp + -8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C10EBu); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C10EB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C10F1u); RECOMP_ABI_CALL(0x003C16F8u, sub_003C16F8); /* call 0x003C16F8 */

loc_003C10F1: ;
    MEM32(esi) = eax;
    goto loc_003C10FB;

loc_003C10F5: ;
    MEM32(esi) = 0x48F;

loc_003C10FB: ;
    SET_LO8(ecx, MEM8(ebp + -2));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C1104u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1104: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C110B
 * Original: 0x003C110B - 0x003C11E9 (222 bytes, 55 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C110B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C110B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    PUSH32(esp, 0x003C1117u); RECOMP_ABI_CALL(0x003C17D2u, sub_003C17D2); /* call 0x003C17D2 */

loc_003C1117: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C11BE; /* jne: not equal / not zero */

loc_003C1123: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C11A2; /* jne: not equal / not zero */

loc_003C1129: ;
    eax = 0; /* xor self */
    MEM8(0x5DCD18) = 0x30;
    MEM8(0x5DCD19) = 0x40;
    MEM32(0x5DCD20) = 0x3C0DF8;
    MEM32(0x5DCD24) = esi;
    MEM32(0x5DCD28) = eax;
    MEM32(0x5DCD30) = eax;
    MEM32(0x5DCD2C) = eax;
    MEM8(0x5DCD34) = LO8(eax);
    MEM8(0x5DCD35) = 1;
    MEM8(0x5DCD36) = LO8(eax);
    MEM8(0x5DCD40) = 0x21;
    MEM8(0x5DCD41) = 0xB;
    MEM16(0x5DCD42) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x5DCD44) = LO16(ecx);
    MEM16(0x5DCD46) = LO16(eax);
    PUSH32(esp, 0x003C1194u); RECOMP_ABI_CALL(0x003C076Du, sub_003C076D); /* call 0x003C076D */

loc_003C1194: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x5DCD18);
    PUSH32(esp, 0x003C11A0u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C11A0: ;
    goto loc_003C11E5;

loc_003C11A2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C11BE; /* jne: not equal / not zero */

loc_003C11A7: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C11BE; /* jne: not equal / not zero */

loc_003C11AD: ;
    PUSH32(esp, 0x003C11B2u); RECOMP_ABI_CALL(0x003C076Du, sub_003C076D); /* call 0x003C076D */

loc_003C11B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003C11BCu); RECOMP_ABI_CALL(0x003C0E83u, sub_003C0E83); /* call 0x003C0E83 */

loc_003C11BC: ;
    goto loc_003C11E5;

loc_003C11BE: ;
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = 0; /* xor self */
    MEM32(esi) = eax;
    MEM16(0x5DCCFA) = MEM16(0x5DCCFA) - 1;
    _fa = (uint32_t)(MEM16(0x5DCCFA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C11D8u); RECOMP_ABI_CALL(0x003C16DDu, sub_003C16DD); /* call 0x003C16DD */

loc_003C11D8: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x003C11E4u); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C11E4: ;
    POP32(esp, edi);

loc_003C11E5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C11E9
 * Original: 0x003C11E9 - 0x003C12DD (244 bytes, 72 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C11E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C11E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCD50);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C11F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C11F7: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C12CD; /* jl: less (signed <) */

loc_003C1206: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C12CD; /* jb: below (unsigned <) */

loc_003C1210: ;
    _fa = (uint32_t)(MEM8(0x5DCD04)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCD04), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C12CD; /* jb: below (unsigned <) */

loc_003C121D: ;
    _fa = (uint32_t)(MEM8(0x5DCD05)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCD05), 0x42 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C12CD; /* jne: not equal / not zero */

loc_003C122A: ;
    _fa = (uint32_t)(MEM16(0x5DCD06)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5DCD06), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C12CD; /* je: equal / zero */

loc_003C1237: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(0x5DCD08));
    edi = esi + 0xA;
    edx = edi;
    PUSH32(esp, 0x003C124Bu); RECOMP_ABI_CALL(0x003C070Bu, sub_003C070B); /* call 0x003C070B */

loc_003C124B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xE) = eax;
    SET_LO8(ecx, MEM8(0x5DCD09));
    MEM8(esi + 0xB) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x5DCD0A));
    MEM8(esi + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x5DCD0B));
    MEM8(esi + 0xD) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003C12A8; /* je: equal / zero */

loc_003C126D: ;
    SET_LO8(eax, MEM8(0x5DCD0A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C12A8; /* jb: below (unsigned <) */

loc_003C1276: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C12A8; /* ja: above (unsigned >) */

loc_003C127A: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 6) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C12A8; /* ja: above (unsigned >) */

loc_003C1282: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C128E; /* je: equal / zero */

loc_003C1287: ;
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 7)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 7) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C12A8; /* ja: above (unsigned >) */

loc_003C128E: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C129Au); RECOMP_ABI_CALL(0x003C16EEu, sub_003C16EE); /* call 0x003C16EE */

loc_003C129A: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C12A2u); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C12A2: ;
    MEM8(esi + 4) = MEM8(esi + 4) | 8;
    goto loc_003C12D7;

loc_003C12A8: ;
    edi = MEM32(esi);
    MEM8(esi + 4) = MEM8(esi + 4) & 0xFE;
    MEM32(esi) = ebx;
    MEM16(0x5DCCFA) = MEM16(0x5DCCFA) - 1;
    _fa = (uint32_t)(MEM16(0x5DCCFA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003C12BFu); RECOMP_ABI_CALL(0x003C16DDu, sub_003C16DD); /* call 0x003C16DD */

loc_003C12BF: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    PUSH32(esp, 0x003C12CBu); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C12CB: ;
    goto loc_003C12D7;

loc_003C12CD: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C12D7u); RECOMP_ABI_CALL(0x003C110Bu, sub_003C110B); /* call 0x003C110B */

loc_003C12D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C12DD
 * Original: 0x003C12DD - 0x003C152D (592 bytes, 182 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C12DD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C12DD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(eax) = ebx;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C1300u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1300: ;
    edx = edi;
    ecx = esi;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C130Cu); RECOMP_ABI_CALL(0x003C07BCu, sub_003C07BC); /* call 0x003C07BC */

loc_003C130C: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003C1321; /* jne: not equal / not zero */

loc_003C1315: ;
    MEM32(ebp + -8) = 0x48F;
    goto loc_003C150C;

loc_003C1321: ;
    _fa = (uint32_t)(MEM32(edx + 0x12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C1332; /* je: equal / zero */

loc_003C1326: ;
    MEM32(ebp + -8) = 0x20;
    goto loc_003C150C;

loc_003C1332: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003C1345; /* jne: not equal / not zero */

loc_003C1339: ;
    MEM32(ebp + -8) = 0xE;
    goto loc_003C150C;

loc_003C1345: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    ebx = MEM32(0x5DCD00);
    eax = MEM32(ebx + 0xA7);
    MEM32(0x5DCD00) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    PUSH32(esp, 0x2A);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(ebx + 0xA2));
    MEM32(ebx) = edx;
    MEM32(ebx + 0xA3) = esi;
    SET_LO8(eax, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xE7);
    if (3) _cf = (int)(((LO8(eax)) >> (8 - (3))) & 1);
    SET_LO8(eax, LO8(eax) << 3);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(ebx + 0xA2) = LO8(eax);
    MEM32(edx + 0x12) = ebx;
    edx = edi;
    ecx = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C13A0u); RECOMP_ABI_CALL(0x003C0826u, sub_003C0826); /* call 0x003C0826 */

loc_003C13A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003C1503; /* jl: less (signed <) */

loc_003C13A8: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003C13C1; /* je: equal / zero */

loc_003C13AF: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = edx; PUSH32(esp, 0x003C13B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C13B3: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF00;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000100u)) >> 32) & 1);
    eax = eax + 0x80000100u;

loc_003C13C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003C1503; /* jl: less (signed <) */

loc_003C13C9: ;
    esi = MEM32(esi + 8);
    ecx = ZX8(MEM8(esi));
    esi = MEM32(esi + 1);
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    eax = ebx + 0x34;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    PUSH32(esp, 7);
    esi = eax;
    eax = MEM32(ebp + -16);
    edi = ebx + 0x14;
    POP32(esp, ecx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = MEM32(ebp + -20);
    if (TEST_NZ(_fa, _fb)) goto loc_003C14B0; /* jne: not equal / not zero */

loc_003C1401: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    eax = ebp + -32;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    eax = ZX8(MEM8(esi + 0xC));
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x62) = MEM32(ebx + 0x62) & 0;
    ecx = ebp + -40;
    MEM32(ebx + 0x5E) = ecx;
    ecx = ebx + 0x32;
    edi = ebx + 0x52;
    MEM8(edi) = 0x30;
    MEM8(ebx + 0x53) = 0x40;
    MEM32(ebx + 0x5A) = 0x3C0BD1;
    MEM32(ebx + 0x6A) = ecx;
    MEM32(ebx + 0x66) = eax;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    MEM8(ebx + 0x7A) = 0xA1;
    MEM8(ebx + 0x7B) = 1;
    MEM16(ebx + 0x7C) = 0x100;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(ebx + 0x7E) = LO16(ecx);
    MEM16(ebx + 0x80) = LO16(eax);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    MEM8(ebp + -40) = 1;
    MEM8(ebp + -38) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1470u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C1470: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C1479u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1479: ;
    ecx = MEM32(esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1486u); RECOMP_ABI_CALL(0x003C0BE2u, sub_003C0BE2); /* call 0x003C0BE2 */

loc_003C1486: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C148Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C148C: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003C1315; /* je: equal / zero */

loc_003C1498: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003C1315; /* jne: not equal / not zero */

loc_003C14A2: ;
    _fa = (uint32_t)(MEM32(ebx + 0x56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x56), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003C14B0; /* jl: less (signed <) */

loc_003C14A8: ;
    eax = MEM32(ebp + -16);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003C14B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C14B0: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebx + 0x62) = ecx;
    ecx = ebx + 0x32;
    eax = ebx + 0x52;
    MEM8(eax) = 0x28;
    MEM8(ebx + 0x53) = 0x41;
    MEM32(ebx + 0x5A) = 0x3C0982;
    MEM32(ebx + 0x5E) = ebx;
    MEM32(ebx + 0x6A) = ecx;
    ecx = ZX8(MEM8(esi + 0xC));
    MEM32(ebx + 0x66) = ecx;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 4) = MEM8(esi + 4) & 0xF;
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003C14F8; /* je: equal / zero */

loc_003C14F0: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C14F8u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C14F8: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(eax) = ebx;
    goto loc_003C150C;

loc_003C1503: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1509u); RECOMP_ABI_CALL(0x003C16F8u, sub_003C16F8); /* call 0x003C16F8 */

loc_003C1509: ;
    MEM32(ebp + -8) = eax;

loc_003C150C: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C1515u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1515: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003C1526; /* je: equal / zero */

loc_003C151E: ;
    ecx = MEM32(ebp + -24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1526u); RECOMP_ABI_CALL(0x003C0F49u, sub_003C0F49); /* call 0x003C0F49 */

loc_003C1526: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C1681
 * Original: 0x003C1681 - 0x003C1698 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C1681(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1681: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1695; /* je: equal / zero */

loc_003C1688: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    eax = eax + MEM32(0x5DCE80);
    esp += 4; return; /* ret */

loc_003C1695: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003C1698
 * Original: 0x003C1698 - 0x003C16AF (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C1698(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1698: ;
    SET_LO8(eax, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C16AC; /* je: equal / zero */

loc_003C169F: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    eax = eax + MEM32(0x5DCE80);
    esp += 4; return; /* ret */

loc_003C16AC: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003C16AF
 * Original: 0x003C16AF - 0x003C16C6 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C16AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C16AF: ;
    SET_LO8(eax, MEM8(ecx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C16C3; /* je: equal / zero */

loc_003C16B6: ;
    eax = ZX8(LO8(eax));
    eax = eax << 5;
    eax = eax + MEM32(0x5DCE80);
    esp += 4; return; /* ret */

loc_003C16C3: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003C16C6
 * Original: 0x003C16C6 - 0x003C16D9 (19 bytes, 6 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16C6(void)
{

loc_003C16C6: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, MEM32(esp + 4));
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C16D6u); RECOMP_ABI_CALL(0x003C4151u, sub_003C4151); /* call 0x003C4151 */

loc_003C16D6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C16D9
 * Original: 0x003C16D9 - 0x003C16DD (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16D9(void)
{

loc_003C16D9: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_003C16DD
 * Original: 0x003C16DD - 0x003C16EA (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16DD(void)
{

loc_003C16DD: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    MEM32(ecx + 0x1C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C16EA
 * Original: 0x003C16EA - 0x003C16EE (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16EA(void)
{

loc_003C16EA: ;
    SET_LO8(eax, MEM8(ecx + 2));
    esp += 4; return; /* ret */

}

/**
 * sub_003C16EE
 * Original: 0x003C16EE - 0x003C16F8 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16EE(void)
{

loc_003C16EE: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 7) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C16F8
 * Original: 0x003C16F8 - 0x003C1766 (110 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C16F8: ;
    eax = MEM32(esp + 4);
    ecx = 0xC000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C1745; /* jg: greater (signed >) */

loc_003C1705: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003C173E; /* je: equal / zero */

loc_003C1707: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C172A; /* je: equal / zero */

loc_003C170E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000100u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1739; /* je: equal / zero */

loc_003C1715: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000800u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1732; /* je: equal / zero */

loc_003C171C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C1757; /* jle: less or equal (signed <=) */

loc_003C1723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000000Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C1757; /* jg: greater (signed >) */

loc_003C172A: ;
    eax = 0x45D;

loc_003C172F: ;
    esp += 8; return; /* ret 4 */

loc_003C1732: ;
    eax = 0x5AA;
    goto loc_003C172F;

loc_003C1739: ;
    PUSH32(esp, 0xE);

loc_003C173B: ;
    POP32(esp, eax);
    goto loc_003C172F;

loc_003C173E: ;
    eax = 0x4C7;
    goto loc_003C172F;

loc_003C1745: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000010u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000010u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C172A; /* je: equal / zero */

loc_003C174C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1762; /* je: equal / zero */

loc_003C1750: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C175B; /* je: equal / zero */

loc_003C1757: ;
    PUSH32(esp, 0x1F);
    goto loc_003C173B;

loc_003C175B: ;
    eax = 0x3E5;
    goto loc_003C172F;

loc_003C1762: ;
    eax = 0; /* xor self */
    goto loc_003C172F;

}

/**
 * sub_003C1766
 * Original: 0x003C1766 - 0x003C17D2 (108 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1766(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1766: ;
    eax = MEM32(esp + 4);
    ecx = 0xC000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C17AE; /* jg: greater (signed >) */

loc_003C1773: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003C17A7; /* je: equal / zero */

loc_003C1775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1798; /* je: equal / zero */

loc_003C177C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000100u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C17A0; /* je: equal / zero */

loc_003C1783: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000800u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C17A0; /* je: equal / zero */

loc_003C178A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C17C0; /* jle: less or equal (signed <=) */

loc_003C1791: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000000Eu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C17C0; /* jg: greater (signed >) */

loc_003C1798: ;
    eax = 0xC0000185u;

loc_003C179D: ;
    esp += 8; return; /* ret 4 */

loc_003C17A0: ;
    eax = 0xC000009Au;
    goto loc_003C179D;

loc_003C17A7: ;
    eax = 0xC0000120u;
    goto loc_003C179D;

loc_003C17AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000010u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000010u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1798; /* je: equal / zero */

loc_003C17B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C17CE; /* je: equal / zero */

loc_003C17B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C17C7; /* je: equal / zero */

loc_003C17C0: ;
    eax = 0xC0000001u;
    goto loc_003C179D;

loc_003C17C7: ;
    eax = 0x103;
    goto loc_003C179D;

loc_003C17CE: ;
    eax = 0; /* xor self */
    goto loc_003C179D;

}

/**
 * sub_003C17D2
 * Original: 0x003C17D2 - 0x003C17D8 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C17D2(void)
{

loc_003C17D2: ;
    eax = MEM32(0x5DCE7C);
    esp += 4; return; /* ret */

}

/**
 * sub_003C17D8
 * Original: 0x003C17D8 - 0x003C184E (118 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C17D8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C17D8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x5DCE7C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(0x5DCE2E));
    PUSH32(esp, edi);
    esi = esi + 0x5DCE2C;
    edi = 0; /* xor self */

loc_003C17F3: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1845; /* je: equal / zero */

loc_003C17F9: ;
    eax = ZX8(LO8(edx));
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C1845; /* jae: above or equal (unsigned >=) */

loc_003C1802: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C183D; /* jne: not equal / not zero */

loc_003C1809: ;
    SET_LO8(edx, MEM8(ecx + 3));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 8) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C183D; /* jne: not equal / not zero */

loc_003C1814: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C183D; /* je: equal / zero */

loc_003C181A: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 2));
    ebx = 0; /* xor self */
    edx = edx >> 7;
    edx = ~edx;
    edx = edx & 1;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(ebx) (8-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C183D; /* jne: not equal / not zero */

loc_003C1833: ;
    SET_LO8(edx, MEM8(ebp + 0x10));
    MEM8(ebp + 0x10) = MEM8(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1843; /* je: equal / zero */

loc_003C183D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C17F3; /* jne: not equal / not zero */

loc_003C1841: ;
    goto loc_003C1845;

loc_003C1843: ;
    edi = ecx;

loc_003C1845: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003C184E
 * Original: 0x003C184E - 0x003C1852 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C184E(void)
{

loc_003C184E: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1852
 * Original: 0x003C1852 - 0x003C18D8 (134 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1852(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1852: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1880; /* jne: not equal / not zero */

loc_003C185D: ;
    PUSH32(esp, 0x003C1862u); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C1862: ;
    ebx = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1880; /* je: equal / zero */

loc_003C186B: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C187Cu); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C187C: ;
    eax = 0; /* xor self */
    goto loc_003C18D3;

loc_003C1880: ;
    SET_LO8(eax, MEM8(edi + 5));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM8(esi + 0x14) = LO8(eax);
    MEM8(esi + 0x15) = 0;
    MEM8(esi + 0x16) = 0;
    SET_LO16(eax, ZX8(MEM8(edi + 6)));
    MEM16(esi + 0x1C) = LO16(eax);
    SET_LO8(eax, MEM8(edi + 4));
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    SET_LO8(eax, LO8(eax) >> 7);
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 1) = 2;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C18BAu); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C18BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003C18CE; /* jl: less (signed <) */

loc_003C18BE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 8) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003C18CE; /* je: equal / zero */

loc_003C18C8: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ebx + 8) = ecx;

loc_003C18CE: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    POP32(esp, esi);

loc_003C18D3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C18D8
 * Original: 0x003C18D8 - 0x003C1944 (108 bytes, 38 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C18D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C18D8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1911; /* jne: not equal / not zero */

loc_003C18E8: ;
    PUSH32(esp, 0x003C18EDu); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C18ED: ;
    ecx = eax;
    PUSH32(esp, 0x003C18F4u); RECOMP_ABI_CALL(0x003C1698u, sub_003C1698); /* call 0x003C1698 */

loc_003C18F4: ;
    goto loc_003C1902;

loc_003C18F6: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1932; /* je: equal / zero */

loc_003C18FB: ;
    ecx = eax;
    PUSH32(esp, 0x003C1902u); RECOMP_ABI_CALL(0x003C16AFu, sub_003C16AF); /* call 0x003C16AF */

loc_003C1902: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C18F6; /* jne: not equal / not zero */

loc_003C1906: ;
    ecx = esi;
    PUSH32(esp, 0x003C190Du); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C190D: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;

loc_003C1911: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    PUSH32(esp, eax);
    MEM8(eax + 1) = 0x43;
    MEM32(eax + 0x10) = edi;
    eax = MEM32(esi + 0xC);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C192Du); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C192D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003C1932: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C1940u); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C1940: ;
    eax = 0; /* xor self */
    goto loc_003C192D;

}

/**
 * sub_003C1944
 * Original: 0x003C1944 - 0x003C1975 (49 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1944(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1944: ;
    PUSH32(esp, 0x003C1949u); RECOMP_ABI_CALL(0x003C1698u, sub_003C1698); /* call 0x003C1698 */

loc_003C1949: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1972; /* je: equal / zero */

loc_003C194D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esp + 0xC));
    esi = 0xFFFFFF7Fu;
    edi = edi & esi;

loc_003C195B: ;
    ecx = ZX8(MEM8(eax + 4));
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1970; /* je: equal / zero */

loc_003C1965: ;
    ecx = eax;
    PUSH32(esp, 0x003C196Cu); RECOMP_ABI_CALL(0x003C16AFu, sub_003C16AF); /* call 0x003C16AF */

loc_003C196C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C195B; /* jne: not equal / not zero */

loc_003C1970: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C1972: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1975
 * Original: 0x003C1975 - 0x003C19BD (72 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1975(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1975: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx - MEM32(0x5DCE80);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(eax + 3) = 0x80;
    ecx = ecx - MEM32(0x5DCE80);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    MEM8(eax + 1) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x003C199Fu); RECOMP_ABI_CALL(0x003C1698u, sub_003C1698); /* call 0x003C1698 */

loc_003C199F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C19AF; /* jne: not equal / not zero */

loc_003C19A3: ;
    MEM8(esi + 2) = LO8(ebx);
    goto loc_003C19B8;

loc_003C19A8: ;
    ecx = eax;
    PUSH32(esp, 0x003C19AFu); RECOMP_ABI_CALL(0x003C16AFu, sub_003C16AF); /* call 0x003C16AF */

loc_003C19AF: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C19A8; /* jne: not equal / not zero */

loc_003C19B5: ;
    MEM8(eax + 3) = LO8(ebx);

loc_003C19B8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C19BD
 * Original: 0x003C19BD - 0x003C1A19 (92 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C19BD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C19BD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x003C19C8u); RECOMP_ABI_CALL(0x003C1698u, sub_003C1698); /* call 0x003C1698 */

loc_003C19C8: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_003C19E2; /* jne: not equal / not zero */

loc_003C19D4: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    MEM8(ebp + 2) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003C1A08; /* jne: not equal / not zero */

loc_003C19DE: ;
    SET_LO8(ebx, 0); /* xor self */
    goto loc_003C1A08;

loc_003C19E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1A08; /* je: equal / zero */

loc_003C19E6: ;
    ecx = edi;
    PUSH32(esp, 0x003C19EDu); RECOMP_ABI_CALL(0x003C16AFu, sub_003C16AF); /* call 0x003C16AF */

loc_003C19ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C19FE; /* je: equal / zero */

loc_003C19F1: ;
    ecx = edi;
    PUSH32(esp, 0x003C19F8u); RECOMP_ABI_CALL(0x003C16AFu, sub_003C16AF); /* call 0x003C16AF */

loc_003C19F8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C19E6; /* jne: not equal / not zero */

loc_003C19FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1A08; /* je: equal / zero */

loc_003C1A02: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);

loc_003C1A08: ;
    POP32(esp, edi);
    MEM8(esi + 3) = 0x80;
    MEM8(esi + 1) = 0x80;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1A19
 * Original: 0x003C1A19 - 0x003C1A8E (117 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1A19(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1A19: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    edx = ZX8(MEM8(edx + 4));
    edx = edx & 0x7F;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(ecx + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003C1A39; /* jl: less (signed <) */

loc_003C1A30: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_003C1A8B;

loc_003C1A39: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = edx ^ 2;
    MEM32(ecx + 0x14) = edx;
    PUSH32(esp, edi);
    edi = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1A69; /* jne: not equal / not zero */

loc_003C1A4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1A89; /* je: equal / zero */

loc_003C1A52: ;
    _fa = (uint32_t)(MEM8(0x3BF3E8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3BF3E8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1A60; /* je: equal / zero */

loc_003C1A5B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1A89; /* je: equal / zero */

loc_003C1A60: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_003C1A89;

loc_003C1A69: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C1A89; /* jbe: below or equal (unsigned <=) */

loc_003C1A6E: ;
    eax = MEM32(eax + 8);
    eax = ZX8(MEM8(eax + 4));
    eax = eax & 0x7F;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C1A60; /* ja: above (unsigned >) */

loc_003C1A7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1A89; /* jne: not equal / not zero */

loc_003C1A83: ;
    edx = edx + 0x10;
    MEM32(ecx + 0x14) = edx;

loc_003C1A89: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C1A8B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C1A8E
 * Original: 0x003C1A8E - 0x003C1B78 (234 bytes, 89 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C1A8E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1A8E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(esi + 1));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    MEM8(ebp + -1) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003C1ACE; /* je: equal / zero */

loc_003C1AA5: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1ACE; /* jne: not equal / not zero */

loc_003C1AAA: ;
    edx = ebp + -12;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -12) = edx;
    edx = ebp + -20;
    MEM8(ebp + -1) = 1;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 8) = 0x3C0BD1;
    MEM32(esi + 0xC) = edx;

loc_003C1ACE: ;
    eax = ZX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C1B24; /* je: equal / zero */

loc_003C1AD5: ;
    eax = eax - 7;
    if ((eax == 0)) goto loc_003C1B1C; /* je: equal / zero */

loc_003C1ADA: ;
    eax = eax - 0x37;
    if ((eax == 0)) goto loc_003C1B06; /* je: equal / zero */

loc_003C1ADF: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_003C1AFE; /* je: equal / zero */

loc_003C1AE4: ;
    eax = eax - 0x3F;
    if ((eax == 0)) goto loc_003C1AF6; /* je: equal / zero */

loc_003C1AE9: ;
    eax = eax - 0x41;
    if ((eax != 0)) goto loc_003C1B39; /* jne: not equal / not zero */

loc_003C1AEE: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1AF4u); RECOMP_ABI_CALL(0x003C18D8u, sub_003C18D8); /* call 0x003C18D8 */

loc_003C1AF4: ;
    goto loc_003C1B46;

loc_003C1AF6: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1AFCu); RECOMP_ABI_CALL(0x003C1852u, sub_003C1852); /* call 0x003C1852 */

loc_003C1AFC: ;
    goto loc_003C1B46;

loc_003C1AFE: ;
    eax = ecx + 0x18;
    MEM32(esi + 0x18) = eax;
    goto loc_003C1B39;

loc_003C1B06: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1B11; /* jne: not equal / not zero */

loc_003C1B0B: ;
    eax = MEM32(ecx + 8);
    MEM32(esi + 0x10) = eax;

loc_003C1B11: ;
    _fa = (uint32_t)(MEM8(esi + 0x29)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x29), 9 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1B39; /* jne: not equal / not zero */

loc_003C1B17: ;
    MEM32(ecx + 0x18) = ebx;
    goto loc_003C1B39;

loc_003C1B1C: ;
    SET_LO8(eax, MEM8(ecx + 5));
    MEM8(esi + 0x14) = LO8(eax);
    goto loc_003C1B39;

loc_003C1B24: ;
    SET_LO8(eax, MEM8(ecx + 5));
    MEM8(esi + 0x14) = LO8(eax);
    eax = ecx + 0x18;
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(ecx + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    MEM8(esi + 0x1E) = LO8(eax);

loc_003C1B39: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1B46u); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C1B46: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1B72; /* je: equal / zero */

loc_003C1B4B: ;
    ecx = eax;
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1B6C; /* jne: not equal / not zero */

loc_003C1B5B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D08); PUSH32(esp, 0x003C1B69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1B69: ;
    eax = MEM32(esi + 4);

loc_003C1B6C: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_003C1B72: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1B78
 * Original: 0x003C1B78 - 0x003C1BBA (66 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1B78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1B78: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 4;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1B92; /* jne: not equal / not zero */

loc_003C1B87: ;
    SET_LO8(edx, MEM8(edx + 4));
    SET_LO8(edx, LO8(edx) & 0x7F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1B9B; /* je: equal / zero */

loc_003C1B92: ;
    MEM32(ecx + 0x14) = 0x20;
    goto loc_003C1BB6;

loc_003C1B9B: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1BAA; /* jne: not equal / not zero */

loc_003C1BA4: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    goto loc_003C1BB6;

loc_003C1BAA: ;
    esi = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(eax) = esi;
    PUSH32(esp, 0x003C1BB6u); RECOMP_ABI_CALL(0x003C1A19u, sub_003C1A19); /* call 0x003C1A19 */

loc_003C1BB6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C1BBA
 * Original: 0x003C1BBA - 0x003C1C05 (75 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C1BBA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1BBA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 5);
    POP32(esp, esi);
    MEM32(ebp + -4) = edi;

loc_003C1BCA: ;
    ecx = MEM32(ebp + esi * 4 + -24);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1BD4u); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C1BD4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    MEM32(ebp + esi * 4 + -24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003C1BCA; /* jne: not equal / not zero */

loc_003C1BDD: ;
    edx = MEM32(0x3C6CCC);
    PUSH32(esp, 5);
    POP32(esp, eax);
    eax = eax - esi;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 1 (8-bit) */
    ecx = ebp + esi * 4 + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003C1BFC; /* je: equal / zero */

loc_003C1BF5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1BFAu); RECOMP_ABI_CALL(0x003C1B78u, sub_003C1B78); /* call 0x003C1B78 */

loc_003C1BFA: ;
    goto loc_003C1C01;

loc_003C1BFC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1C01u); RECOMP_ABI_CALL(0x003C1A19u, sub_003C1A19); /* call 0x003C1A19 */

loc_003C1C01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C1C05
 * Original: 0x003C1C05 - 0x003C1C5F (90 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1C05(void)
{

loc_003C1C05: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edx = ecx;
    MEM32(edx + 0x98) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 0x9C) = eax;
    eax = 0; /* xor self */
    MEM8(edx + 0xA0) = 0;
    MEM8(edx + 0xA1) = 0;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx + 0x64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    edi = edx + 0xA4;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C1C5F
 * Original: 0x003C1C5F - 0x003C1CAF (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1C5F(void)
{

loc_003C1C5F: ;
    edx = ZX8(MEM8(ecx + 0x79));
    eax = MEM32(ecx + 0xE0);
    edx = edx << 5;
    PUSH32(esp, esi);
    esi = eax + edx + 1;
    SET_LO8(eax, MEM8(esi));
    MEM8(ecx + 0x79) = LO8(eax);
    MEM8(esi) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 2) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 3) = 0x80;
    eax = MEM32(ecx + 0xE0);
    MEM32(eax + edx + 0x1C) = MEM32(eax + edx + 0x1C) & 0;
    eax = MEM32(ecx + 0xE0);
    MEM8(eax + edx + 7) = 0xFF;
    eax = MEM32(ecx + 0xE0);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1CAF
 * Original: 0x003C1CAF - 0x003C1CC3 (20 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1CAF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1CAF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1CC0; /* je: equal / zero */

loc_003C1CBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x003C1CC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1CC0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1CC3
 * Original: 0x003C1CC3 - 0x003C1D0C (73 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C1CC3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1CC3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = ZX8(MEM8(ebp + 0xC));
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -12) = 9;
    MEM32(ebp + -4) = 0xD;
    ecx = MEM32(ebp + eax * 4 + -16);
    eax = ZX16(MEM16(ebp + 8));
    eax = eax + ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    edx = 0; /* xor self */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_003C1CFF; /* jne: not equal / not zero */

loc_003C1CFD: ;
    eax = 0; /* xor self */

loc_003C1CFF: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1D08; /* je: equal / zero */

loc_003C1D05: ;
    eax = eax << 3;

loc_003C1D08: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003C1D0C
 * Original: 0x003C1D0C - 0x003C1D41 (53 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1D0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1D0C: ;
    PUSH32(esp, esi);
    eax = 0x3BF3D4;
    esi = 0x3BF3E4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_AE(_fa, _fb)) goto loc_003C1D37; /* jae: above or equal (unsigned >=) */

loc_003C1D1D: ;
    edx = MEM32(esp + 8);

loc_003C1D21: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C1D30; /* je: equal / zero */

loc_003C1D27: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1D30; /* jne: not equal / not zero */

loc_003C1D2C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1D3D; /* je: equal / zero */

loc_003C1D30: ;
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C1D21; /* jb: below (unsigned <) */

loc_003C1D37: ;
    eax = 0; /* xor self */

loc_003C1D39: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003C1D3D: ;
    eax = MEM32(ecx);
    goto loc_003C1D39;

}

/**
 * sub_003C1D41
 * Original: 0x003C1D41 - 0x003C1D61 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C1D41(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003C1D41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebp + -4) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xA));
    MEM8(ebp + -3) = LO8(eax);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -2) = HI8(eax);
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1D61
 * Original: 0x003C1D61 - 0x003C1DBB (90 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C1D61(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1D61: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x18);
    ebx = 0x103;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C1D78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1D78: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    ecx = MEM32(ebp + 0xC);
    MEM8(ebp + 0xB) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003C1D98; /* je: equal / zero */

loc_003C1D84: ;
    eax = 0xC000009Du;
    SET_LO8(edx, 0); /* xor self */
    ebx = eax;
    MEM32(ecx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C1D96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1D96: ;
    goto loc_003C1DA9;

loc_003C1D98: ;
    eax = MEM32(ecx + 0x5C);
    MEM8(eax + 3) = MEM8(eax + 3) | 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D94); PUSH32(esp, 0x003C1DA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1DA9: ;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C1DB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1DB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C1DBB
 * Original: 0x003C1DBB - 0x003C1DFB (64 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1DBB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1DBB: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + 0x10) = eax;
    ecx = 0xC0000000u;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    eax = MEM32(esi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_003C1DDE; /* jne: not equal / not zero */

loc_003C1DD8: ;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    goto loc_003C1DE4;

loc_003C1DDE: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 0x14) = ecx;

loc_003C1DE4: ;
    ecx = MEM32(esi + 0x10);
    SET_LO8(edx, 0); /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C1DEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1DEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x3C6D98); PUSH32(esp, 0x003C1DF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1DF7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C1DFB
 * Original: 0x003C1DFB - 0x003C1E17 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1DFB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1DFB: ;
    eax = MEM32(0x5D9CEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D9CEC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D9CEC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1E16; /* je: equal / zero */

loc_003C1E07: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x003C1E16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C1E16: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1E17
 * Original: 0x003C1E17 - 0x003C1E3E (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1E17(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1E17: ;
    eax = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C1E3D; /* jbe: below or equal (unsigned <=) */

loc_003C1E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003C1E22: ;
    edi = MEM32(eax);
    edi = edi + edx;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = 0x3C6B68;
    edx = edx + 0x1000;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C1E22; /* jb: below (unsigned <) */

loc_003C1E3B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C1E3D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1E3E
 * Original: 0x003C1E3E - 0x003C1E58 (26 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C1E3E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1E3E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C1E53; /* jbe: below or equal (unsigned <=) */

loc_003C1E47: ;
    ecx = eax + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C1E53; /* jne: not equal / not zero */

loc_003C1E4E: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003C1E55;

loc_003C1E53: ;
    eax = 0; /* xor self */

loc_003C1E55: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1E58
 * Original: 0x003C1E58 - 0x003C1E6E (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1E58(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1E58: ;
    ecx = 0; /* xor self */
    SET_LO8(eax, 0); /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C1E5D: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 4), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C1E6B; /* jne: not equal / not zero */

loc_003C1E63: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C1E5D; /* jb: below (unsigned <) */

loc_003C1E6B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1E6E
 * Original: 0x003C1E6E - 0x003C2054 (486 bytes, 139 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C1E6E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1E6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + 0x5C);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    eax = 0xC0000000u;
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x28);
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003C1EAB; /* jne: not equal / not zero */

loc_003C1E9C: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = edx;
    goto loc_003C2020;

loc_003C1EAB: ;
    SET_LO16(eax, MEM16(edi + 6));
    PUSH32(esp, MEM32(edi));
    MEM8(ebp + 0xA) = HI8(eax);
    MEM8(ebp + 0xB) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 4));
    ecx = ZX16(MEM16(ebp + 0xA));
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    esi = ZX16(MEM16(ebp + 0xE));
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1ED1u); RECOMP_ABI_CALL(0x003C1D41u, sub_003C1D41); /* call 0x003C1D41 */

loc_003C1ED1: ;
    ecx = ZX16(MEM16(ebp + 0xA));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -16) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_003C1EEA; /* jne: not equal / not zero */

loc_003C1EE5: ;
    esi = 0x2000;

loc_003C1EEA: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1EF0u); RECOMP_ABI_CALL(0x003C1E3Eu, sub_003C1E3E); /* call 0x003C1E3E */

loc_003C1EF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2041; /* je: equal / zero */

loc_003C1EF8: ;
    edx = ZX16(MEM16(ebp + 0xA));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C2041; /* ja: above (unsigned >) */

loc_003C1F08: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x4000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C2041; /* ja: above (unsigned >) */

loc_003C1F14: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(esi), 0xFFF (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C2041; /* jne: not equal / not zero */

loc_003C1F1F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2041; /* je: equal / zero */

loc_003C1F2A: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C2041; /* jb: below (unsigned <) */

loc_003C1F35: ;
    if (CMP_A(_fa, _fb)) goto loc_003C1F40; /* ja: above (unsigned >) */

loc_003C1F37: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C2041; /* jb: below (unsigned <) */

loc_003C1F40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C2041; /* ja: above (unsigned >) */

loc_003C1F49: ;
    if (CMP_B(_fa, _fb)) goto loc_003C1F55; /* jb: below (unsigned <) */

loc_003C1F4B: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C2041; /* ja: above (unsigned >) */

loc_003C1F55: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, edx);
    MEM32(ebx + 0x160) = ecx;
    MEM32(ebx + 0x164) = eax;
    MEM32(ebx + 0x168) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1F70u); RECOMP_ABI_CALL(0x003C1E58u, sub_003C1E58); /* call 0x003C1E58 */

loc_003C1F70: ;
    eax = ZX8(LO8(eax));
    MEM32(ebx + 0x158) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -16));
    MEM32(ebx + 0x148) = 0xC;
    PUSH32(esp, MEM32(ebp + -20));
    edi = ebx + 0x140;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C1F98u); RECOMP_ABI_CALL(0x003436B0u, sub_003436B0); /* call 0x003436B0 */

loc_003C1F98: ;
    MEM32(edi) = eax;
    eax = MEM32(ebp + -12);
    esi = esi >> 0xC;
    MEM32(edi + 4) = edx;
    MEM32(ebx + 0x14C) = 1;
    MEM32(ebx + 0x150) = esi;
    MEM32(ebx + 0x154) = 0x1000;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1FFF; /* je: equal / zero */

loc_003C1FC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74004) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74004 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C201D; /* jne: not equal / not zero */

loc_003C1FCE: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x30);
    eax = 0; /* xor self */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x160);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x164);
    MEM32(edx + 0xC) = eax;
    MEM8(edx + 0x1A) = 1;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x14) = 0x20;
    goto loc_003C2016;

loc_003C1FFF: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, 6);
    esi = edi;
    edi = MEM32(eax + 0x30);
    POP32(esp, ecx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x14) = 0x18;

loc_003C2016: ;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;

loc_003C201D: ;
    edi = MEM32(ebp + -8);

loc_003C2020: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D58); PUSH32(esp, 0x003C2027u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2027: ;
    ecx = MEM32(ebx + 0x10);
    SET_LO8(edx, 0); /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C2032u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2032: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx));
    { uint32_t _icall_target = MEM32(0x3C6D98); PUSH32(esp, 0x003C203Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C203A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_003C2041: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    eax = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = 0xC000014Fu;
    goto loc_003C2020;

}

/**
 * sub_003C2054
 * Original: 0x003C2054 - 0x003C20D5 (129 bytes, 48 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C2054(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003C2054: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(edx + 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    MEM8(esi + 0x4F) = 0x2F;
    ecx = MEM32(esi + 0x158);
    eax = MEM32(edi);
    edx = MEM32(edi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2077u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_003C2077: ;
    ecx = MEM32(esi + 0x158);
    ebx = MEM32(edi + 8);
    edx = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = 0x3C1DBB;
    ebx = ebx >> LO8(ecx);
    SET_LO16(ecx, MEM16(edi + 0xA));
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)0x64));
    MEM16(esi + 0x34) = LO16(ecx);
    ecx = esi + 0x4F;
    MEM8(esi + 0x37) = LO8(eax);
    MEM8(esi + 0x36) = 2;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, edx);
    MEM8(ecx) = 0x2F;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C20B8u); RECOMP_ABI_CALL(0x003C1D41u, sub_003C1D41); /* call 0x003C1D41 */

loc_003C20B8: ;
    MEM32(esi + 0x51) = eax;
    MEM8(ebp + -4) = HI8(ebx);
    MEM8(ebp + -3) = LO8(ebx);
    SET_LO16(eax, MEM16(ebp + -4));
    ecx = esi;
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C20D0u); RECOMP_ABI_CALL(0x003C3DBEu, sub_003C3DBE); /* call 0x003C3DBE */

loc_003C20D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C20D5
 * Original: 0x003C20D5 - 0x003C21A3 (206 bytes, 72 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C20D5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C20D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x28);
    ecx = ecx + edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_003C2195; /* jae: above or equal (unsigned >=) */

loc_003C20F2: ;
    edx = edi;
    edx = edx - 0x3C6B68;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = edx;
    PUSH32(esp, esi);

loc_003C20FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46313539) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x46313539 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2179; /* jne: not equal / not zero */

loc_003C2109: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C2124; /* je: equal / zero */

loc_003C2112: ;
    esi = MEM32(edx + eax * 4 + 0x3C6B68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x3C6B68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax * 4 + 0x3C6B68) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2109; /* je: equal / zero */

loc_003C2122: ;
    goto loc_003C2179;

loc_003C2124: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6C54); PUSH32(esp, 0x003C212Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C212B: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003C213D; /* jl: less (signed <) */

loc_003C2136: ;
    MEM32(ebp + 0xC) = 0xC000003Eu;

loc_003C213D: ;
    eax = ebx;
    eax = eax & 6;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2158; /* jne: not equal / not zero */

loc_003C2146: ;
    esi = ebx;
    esi = esi & 0xFFFFFFFDu;
    esi = esi | 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6C50); PUSH32(esp, 0x003C2158u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2158: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    MEM32(edi + eax * 4) = 0x4C494146;
    if ((_fa != 0)) goto loc_003C2158; /* jne: not equal / not zero */

loc_003C2167: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2176; /* je: equal / zero */

loc_003C216C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6C50); PUSH32(esp, 0x003C2176u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2176: ;
    ecx = MEM32(ebp + -8);

loc_003C2179: ;
    edx = MEM32(ebp + -12);
    eax = 0x1000;
    edi = edi + eax;
    edx = edx + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -12) = edx;
    if (CMP_B(_fa, _fb)) goto loc_003C20FF; /* jb: below (unsigned <) */

loc_003C2190: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003C2195: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C219Eu); RECOMP_ABI_CALL(0x003C1DBBu, sub_003C1DBB); /* call 0x003C1DBB */

loc_003C219E: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C21A3
 * Original: 0x003C21A3 - 0x003C2389 (486 bytes, 133 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C21A3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C21A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    ebx = ebx & 0xF0000000u;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x5C);
    MEM32(ebp + 8) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003C2279; /* jl: less (signed <) */

loc_003C21C8: ;
    ebx = ebx + 0x10000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C21E1; /* jne: not equal / not zero */

loc_003C21D6: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C21F4; /* jne: not equal / not zero */

loc_003C21DC: ;
    ebx = 0x40000000;

loc_003C21E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C21F4; /* jne: not equal / not zero */

loc_003C21E9: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C21F4; /* jne: not equal / not zero */

loc_003C21EF: ;
    ebx = 0x60000000;

loc_003C21F4: ;
    eax = MEM32(esi + 0xC);
    edx = 0xFFFFFFF;
    eax = eax & edx;
    eax = eax | ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C2332; /* je: equal / zero */

loc_003C220F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2306; /* je: equal / zero */

loc_003C221B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C22E6; /* je: equal / zero */

loc_003C2227: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x50000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C22B4; /* je: equal / zero */

loc_003C2233: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x60000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2382; /* jne: not equal / not zero */

loc_003C223F: ;
    eax = eax & edx;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x5D9CEC);
    edx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, 0); /* xor self */
    MEM32(ecx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C2267u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2267: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C226Cu); RECOMP_ABI_CALL(0x003C1DFBu, sub_003C1DFB); /* call 0x003C1DFB */

loc_003C226C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x3C6D98); PUSH32(esp, 0x003C2274u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2274: ;
    goto loc_003C2382;

loc_003C2279: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C228D; /* je: equal / zero */

loc_003C2281: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C21EF; /* jne: not equal / not zero */

loc_003C228D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000003Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC000003Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C21EF; /* jne: not equal / not zero */

loc_003C229A: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C22A2u); RECOMP_ABI_CALL(0x003C1E17u, sub_003C1E17); /* call 0x003C1E17 */

loc_003C22A2: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    ecx = MEM32(ebp + 8);
    ebx = ebx + 0x10000000;
    goto loc_003C21F4;

loc_003C22B4: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    MEM8(esi + 0x37) = 6;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x4F) = 0x2A;
    eax = MEM32(edi + 8);
    eax = eax - MEM32(esi + 0x1C);
    eax = eax + MEM32(edi + 4);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x168);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi + 0xC);
    eax = eax - MEM32(esi + 0x1C);

loc_003C22E1: ;
    eax = eax + MEM32(edi + 4);
    goto loc_003C2353;

loc_003C22E6: ;
    MEM32(esi + 0x28) = 0x5D9CF4;
    eax = MEM32(esi + 0x168);
    eax = eax - MEM32(esi + 0x1C);
    MEM8(esi + 0x37) = 1;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x28;
    eax = MEM32(edi + 0xC);
    goto loc_003C22E1;

loc_003C2306: ;
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x38) = eax;
    MEM8(esi + 0x37) = 6;
    eax = esi + 0x168;
    ecx = MEM32(eax);
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x28) = ecx;
    eax = MEM32(eax);
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x2A;
    eax = MEM32(edi + 0xC);
    eax = eax - MEM32(esi + 0x38);
    goto loc_003C2353;

loc_003C2332: ;
    MEM32(esi + 0x28) = 0x5D9CF4;
    eax = MEM32(esi + 0x168);
    eax = eax - MEM32(esi + 0x18);
    MEM8(esi + 0x37) = 1;
    MEM32(esi + 0x2C) = eax;
    MEM8(esi + 0x4F) = 0x28;
    eax = MEM32(edi + 0xC);
    eax = eax - MEM32(esi + 0x2C);

loc_003C2353: ;
    edi = esi + 0x158;
    ecx = MEM32(edi);
    eax = eax >> LO8(ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2363u); RECOMP_ABI_CALL(0x003C1D41u, sub_003C1D41); /* call 0x003C1D41 */

loc_003C2363: ;
    MEM32(esi + 0x51) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x2C);
    eax = eax >> LO8(ecx);
    ecx = esi;
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0xE));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2382u); RECOMP_ABI_CALL(0x003C3DBEu, sub_003C3DBE); /* call 0x003C3DBE */

loc_003C2382: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2389
 * Original: 0x003C2389 - 0x003C2504 (379 bytes, 110 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C2389(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2389: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x10);
    edx = MEM32(ebx + 0x5C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    edi = edi & 0xF0000000u;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003C23B2; /* jl: less (signed <) */

loc_003C23AA: ;
    edi = edi + 0x10000000;
    goto loc_003C23E7;

loc_003C23B2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C23C2; /* je: equal / zero */

loc_003C23BA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C23E2; /* jne: not equal / not zero */

loc_003C23C2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000003Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xC000003Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C23E2; /* jne: not equal / not zero */

loc_003C23CB: ;
    ecx = esi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C23D3u); RECOMP_ABI_CALL(0x003C1E17u, sub_003C1E17); /* call 0x003C1E17 */

loc_003C23D3: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    edx = MEM32(ebp + 8);
    edi = edi + 0x10000000;
    goto loc_003C23E7;

loc_003C23E2: ;
    edi = 0x50000000;

loc_003C23E7: ;
    eax = MEM32(esi + 0xC);
    ecx = 0xFFFFFFF;
    eax = eax & ecx;
    eax = eax | edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000000 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C24AE; /* je: equal / zero */

loc_003C2402: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2495; /* je: equal / zero */

loc_003C240E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C245E; /* je: equal / zero */

loc_003C2416: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C24FD; /* jne: not equal / not zero */

loc_003C2422: ;
    eax = eax & ecx;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x5D9CEC);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    eax = MEM32(edx + 4);
    MEM32(ebx + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, 0); /* xor self */
    ecx = ebx;
    MEM32(ebx + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C244Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C244C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2451u); RECOMP_ABI_CALL(0x003C1DFBu, sub_003C1DFB); /* call 0x003C1DFB */

loc_003C2451: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x3C6D98); PUSH32(esp, 0x003C2459u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2459: ;
    goto loc_003C24FD;

loc_003C245E: ;
    MEM8(esi + 0x4F) = 0x2A;
    MEM8(esi + 0x37) = 6;
    eax = MEM32(esi + 0x168);
    eax = eax - MEM32(esi + 0x18);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi + 0x168);
    eax = eax - MEM32(esi + 0x1C);
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(edx + 8);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x168);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edx + 0xC);
    eax = eax - MEM32(esi + 0x38);
    goto loc_003C24CE;

loc_003C2495: ;
    eax = MEM32(esi + 0x2C);
    eax = eax + 0x5D9CF4;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edx + 0xC);
    eax = eax + MEM32(edx + 4);
    goto loc_003C24CE;

loc_003C24AE: ;
    MEM8(esi + 0x37) = 1;
    MEM8(esi + 0x4F) = 0x28;
    MEM32(esi + 0x28) = 0x5D9CF4;
    ecx = MEM32(esi + 0x168);
    ecx = ecx - MEM32(esi + 0x18);
    MEM32(esi + 0x2C) = ecx;
    eax = MEM32(edx + 0xC);
    eax = eax - ecx;

loc_003C24CE: ;
    edi = esi + 0x158;
    ecx = MEM32(edi);
    eax = eax >> LO8(ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C24DEu); RECOMP_ABI_CALL(0x003C1D41u, sub_003C1D41); /* call 0x003C1D41 */

loc_003C24DE: ;
    MEM32(esi + 0x51) = eax;
    ecx = MEM32(edi);
    eax = MEM32(esi + 0x2C);
    eax = eax >> LO8(ecx);
    ecx = esi;
    MEM8(ebp + 0xE) = HI8(eax);
    MEM8(ebp + 0xF) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0xE));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C24FDu); RECOMP_ABI_CALL(0x003C3DBEu, sub_003C3DBE); /* call 0x003C3DBE */

loc_003C24FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2504
 * Original: 0x003C2504 - 0x003C2561 (93 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2504(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2504: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 8);
    POP32(esp, edi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D54); PUSH32(esp, 0x003C2517u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2517: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C2529; /* jne: not equal / not zero */

loc_003C251B: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    eax = 0xC000009Au;
    goto loc_003C255E;

loc_003C2529: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = edi;
    ecx = esi + 0x4F;
    MEM32(esi + 0x30) = 0x3C1E6E;
    MEM16(esi + 0x34) = 0xA;
    MEM8(esi + 0x36) = 2;
    MEM8(esi + 0x37) = 1;
    eax = 0; /* xor self */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(ecx) = 0x25;
    ecx = esi;
    PUSH32(esp, 0x003C2559u); RECOMP_ABI_CALL(0x003C3DBEu, sub_003C3DBE); /* call 0x003C3DBE */

loc_003C2559: ;
    eax = 0x103;

loc_003C255E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2561
 * Original: 0x003C2561 - 0x003C2603 (162 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2561(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2561: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(esi + 0xF) = MEM8(esi + 0xF) & 0xF;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    eax = 0xC0000000u;
    edi = edx;
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2598; /* jne: not equal / not zero */

loc_003C257F: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0;
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, 0); /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C258Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C258E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x3C6D98); PUSH32(esp, 0x003C2596u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2596: ;
    goto loc_003C25FE;

loc_003C2598: ;
    eax = 0; /* xor self */
    edi = esi + 0x4F;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(esi + 0x34) = 8;
    MEM8(esi + 0x36) = 2;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C25BA; /* je: equal / zero */

loc_003C25B1: ;
    MEM32(esi + 0x30) = 0x3C2389;
    goto loc_003C25C1;

loc_003C25BA: ;
    MEM32(esi + 0x30) = 0x3C21A3;

loc_003C25C1: ;
    MEM8(esi + 0xF) = MEM8(esi + 0xF) | 0x10;
    edi = MEM32(0x5D9CEC);
    edx = 0x5D9CEC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    eax = ecx + 0x54;
    if (CMP_NE(_fa, _fb)) goto loc_003C25EC; /* jne: not equal / not zero */

loc_003C25D7: ;
    MEM32(eax) = edi;
    MEM32(ecx + 0x58) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edi + 4) = eax;
    PUSH32(esp, esi);
    MEM32(0x5D9CEC) = eax;
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x003C25EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C25EA: ;
    goto loc_003C25FE;

loc_003C25EC: ;
    esi = MEM32(0x5D9CF0);
    MEM32(eax) = edx;
    MEM32(ecx + 0x58) = esi;
    MEM32(esi) = eax;
    MEM32(0x5D9CF0) = eax;

loc_003C25FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2603
 * Original: 0x003C2603 - 0x003C26D3 (208 bytes, 67 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C2603(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2603: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x5C);
    eax = MEM32(eax + 0x10);
    eax = eax - 0x70000;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_003C2686; /* je: equal / zero */

loc_003C261C: ;
    eax = eax - 0x14;
    if ((eax == 0)) goto loc_003C267A; /* je: equal / zero */

loc_003C2621: ;
    eax = eax - 0x3FF0;
    if ((eax == 0)) goto loc_003C2636; /* je: equal / zero */

loc_003C2628: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    eax = 0xC0000010u;
    goto loc_003C26B7;

loc_003C2636: ;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, 8);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x160);
    eax = eax | MEM32(ebx + 0x164);
    if ((eax != 0)) goto loc_003C265B; /* jne: not equal / not zero */

loc_003C2650: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2659u); RECOMP_ABI_CALL(0x003C2504u, sub_003C2504); /* call 0x003C2504 */

loc_003C2659: ;
    goto loc_003C26B0;

loc_003C265B: ;
    eax = MEM32(ebx + 0x160);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx + 0x164);
    MEM32(edx + 0xC) = eax;
    MEM8(edx + 0x1A) = 1;
    MEM32(esi + 0x14) = 0x20;
    goto loc_003C26AE;

loc_003C267A: ;
    ecx = MEM32(ebp + 8);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2684u); RECOMP_ABI_CALL(0x003C2054u, sub_003C2054); /* call 0x003C2054 */

loc_003C2684: ;
    goto loc_003C26CC;

loc_003C2686: ;
    eax = MEM32(ebx + 0x160);
    eax = eax | MEM32(ebx + 0x164);
    edi = MEM32(esi + 0x30);
    if ((eax == 0)) goto loc_003C2650; /* je: equal / zero */

loc_003C2697: ;
    PUSH32(esp, 6);
    esi = ebx + 0x140;
    POP32(esp, ecx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x14) = 0x18;
    esi = ecx;

loc_003C26AE: ;
    eax = 0; /* xor self */

loc_003C26B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C26CC; /* je: equal / zero */

loc_003C26B7: ;
    SET_LO8(edx, 0); /* xor self */
    ecx = esi;
    MEM32(esi + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C26C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C26C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx));
    { uint32_t _icall_target = MEM32(0x3C6D98); PUSH32(esp, 0x003C26CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C26CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C26D3
 * Original: 0x003C26D3 - 0x003C2863 (400 bytes, 138 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C26D3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C26D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    eax = edx;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(ecx + 0xC);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_003C274F; /* jne: not equal / not zero */

loc_003C26FC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003C274F; /* jne: not equal / not zero */

loc_003C2700: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = ebx;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x10)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x164)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x164) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003C274C; /* jg: greater (signed >) */

loc_003C2711: ;
    if (CMP_L(_fas, _fbs)) goto loc_003C271B; /* jl: less (signed <) */

loc_003C2713: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x160) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003C274C; /* ja: above (unsigned >) */

loc_003C271B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003C2727; /* jne: not equal / not zero */

loc_003C271F: ;
    eax = MEM32(ebp + -8);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & ebx;
    goto loc_003C275C;

loc_003C2727: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003C2738; /* je: equal / zero */

loc_003C272D: ;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -8);
    goto loc_003C2744;

loc_003C2738: ;
    eax = MEM32(ebp + -8);
    edi = MEM32(eax + 0x30);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ecx + 8))) >> 32) & 1);
    edi = edi + MEM32(ecx + 8);
    MEM32(ebp + -4) = edi;

loc_003C2744: ;
    edi = MEM32(ebp + -4);
    MEM32(ecx + 8) = edi;
    goto loc_003C2756;

loc_003C274C: ;
    eax = MEM32(ebp + -8);

loc_003C274F: ;
    MEM32(eax + 0x10) = 0xC000000Du;

loc_003C2756: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003C2777; /* jne: not equal / not zero */

loc_003C275C: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C276Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C276A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x3C6D98); PUSH32(esp, 0x003C2772u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2772: ;
    goto loc_003C285E;

loc_003C2777: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = esi + 0x4F;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003C2810; /* jne: not equal / not zero */

loc_003C2789: ;
    edi = MEM32(esi + 0x168);
    eax = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xF) = MEM8(esi + 0xF) & 0xF1;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003C27CC; /* je: equal / zero */

loc_003C27A0: ;
    eax = edi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003C27BB; /* jbe: below or equal (unsigned <=) */

loc_003C27AB: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x8000000;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x1C) = eax;
    goto loc_003C27E3;

loc_003C27BB: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + -12)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x2000000;
    MEM32(esi + 0xC) = ecx;

loc_003C27CC: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003C27DF; /* je: equal / zero */

loc_003C27D6: ;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xF) = MEM8(esi + 0xF) | 4;
    MEM32(esi + 0x1C) = edx;

loc_003C27DF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003C27ED; /* jne: not equal / not zero */

loc_003C27E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C27EBu); RECOMP_ABI_CALL(0x003C2561u, sub_003C2561); /* call 0x003C2561 */

loc_003C27EB: ;
    goto loc_003C285E;

loc_003C27ED: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(0xE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xF), 0xE (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003C27FC; /* je: equal / zero */

loc_003C27F3: ;
    MEM32(esi + 0x30) = 0x3C2561;
    goto loc_003C2803;

loc_003C27FC: ;
    MEM32(esi + 0x30) = 0x3C1DBB;

loc_003C2803: ;
    edx = MEM32(ebp + -12);
    MEM8(esi + 0x37) = 2;
    MEM8(esi + 0x4F) = 0x2A;
    goto loc_003C281F;

loc_003C2810: ;
    MEM32(esi + 0x30) = 0x3C20D5;
    MEM8(esi + 0x37) = 1;
    MEM8(esi + 0x4F) = 0x28;

loc_003C281F: ;
    edi = MEM32(esi + 0x158);
    eax = MEM32(ebp + -4);
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((edx) >> ((LO8(ecx)) - 1)) & 1);
    edx = edx >> LO8(ecx);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = ebx;
    MEM16(esi + 0x34) = 8;
    PUSH32(esp, edx);
    MEM8(esi + 0x36) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2842u); RECOMP_ABI_CALL(0x003C1D41u, sub_003C1D41); /* call 0x003C1D41 */

loc_003C2842: ;
    ecx = edi;
    if (LO8(ecx)) _cf = (int)(((ebx) >> ((LO8(ecx)) - 1)) & 1);
    ebx = ebx >> LO8(ecx);
    MEM32(esi + 0x51) = eax;
    ecx = esi;
    MEM8(ebp + -2) = HI8(ebx);
    MEM8(ebp + -1) = LO8(ebx);
    SET_LO16(eax, MEM16(ebp + -2));
    MEM16(esi + 0x56) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C285Eu); RECOMP_ABI_CALL(0x003C3DBEu, sub_003C3DBE); /* call 0x003C3DBE */

loc_003C285E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C2863
 * Original: 0x003C2863 - 0x003C28D4 (113 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C2863(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2863: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi + 0x5C);
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_target = MEM32(0x3C6DA0); PUSH32(esp, 0x003C287Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C287E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C289C; /* je: equal / zero */

loc_003C2882: ;
    SET_LO8(edx, 0); /* xor self */
    ecx = edi;
    MEM32(edi + 0x10) = 0xC0000240u;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x003C2893u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2893: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6D98); PUSH32(esp, 0x003C289Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C289A: ;
    goto loc_003C28CD;

loc_003C289C: ;
    MEM32(esi + 0x14) = ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebx + 0x10) = edi;
    eax = ZX8(MEM8(esi));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C28C4; /* je: equal / zero */

loc_003C28AC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C28BD; /* je: equal / zero */

loc_003C28AF: ;
    eax = eax - 7;
    if ((eax != 0)) goto loc_003C28CD; /* jne: not equal / not zero */

loc_003C28B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C28BBu); RECOMP_ABI_CALL(0x003C2603u, sub_003C2603); /* call 0x003C2603 */

loc_003C28BB: ;
    goto loc_003C28CD;

loc_003C28BD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D9C); PUSH32(esp, 0x003C28C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C28C4: ;
    edx = edi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C28CDu); RECOMP_ABI_CALL(0x003C26D3u, sub_003C26D3); /* call 0x003C26D3 */

loc_003C28CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C28D4
 * Original: 0x003C28D4 - 0x003C293C (104 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C28D4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C28D4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edi + 3;
    esi = esi & 0xFFFFFFFCu;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C28E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C28E7: ;
    _fa = (uint32_t)(MEM32(0x3BF560)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3BF560), esi (32-bit) */
    SET_LO8(ecx, LO8(eax));
    if (CMP_B(_fa, _fb)) goto loc_003C2921; /* jb: below (unsigned <) */

loc_003C28F1: ;
    ebx = 0x80001000u;
    ebx = ebx - MEM32(0x3BF560);
    MEM32(0x3BF560) = MEM32(0x3BF560) - esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C2908u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2908: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0xCCCCCCCCu;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    goto loc_003C2934;

loc_003C2921: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C2927u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2927: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x3C6D54); PUSH32(esp, 0x003C2932u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2932: ;
    ebx = eax;

loc_003C2934: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C293C
 * Original: 0x003C293C - 0x003C294E (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C293C(void)
{

loc_003C293C: ;
    eax = ecx;
    MEM8(eax) = 0xFF;
    MEM8(eax + 1) = 0x80;
    MEM8(eax + 2) = 0x80;
    MEM8(eax + 3) = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_003C294E
 * Original: 0x003C294E - 0x003C2980 (50 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C294E(void)
{

loc_003C294E: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE0);
    eax = eax - ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edx = ZX8(LO8(eax));
    edx = edx << 5;
    MEM8(edx + ecx) = 0xFF;
    SET_LO8(ebx, MEM8(esi + 0x79));
    ecx = MEM32(esi + 0xE0);
    MEM8(edx + ecx + 1) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C2980
 * Original: 0x003C2980 - 0x003C2A44 (196 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C2980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x5DCDA0;
    PUSH32(esp, 0x003C298Fu); RECOMP_ABI_CALL(0x003C1C5Fu, sub_003C1C5F); /* call 0x003C1C5F */

loc_003C298F: ;
    esi = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003C2A3E; /* je: equal / zero */

loc_003C299B: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esi) = 0xFE;
    MEM8(esi + 4) = LO8(eax);
    MEM32(esi + 0x10) = ebx;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x003C29B6u); RECOMP_ABI_CALL(0x003C1975u, sub_003C1975); /* call 0x003C1975 */

loc_003C29B6: ;
    _fa = (uint32_t)(MEM8(0x5DCDA0)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA0), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MEM8(esp + 0x14));
    if (CMP_EQ(_fa, _fb)) goto loc_003C29F9; /* je: equal / zero */

loc_003C29C2: ;
    edi = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(esi + 5) = LO8(eax);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x003C29CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C29CF: ;
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(0xF4240)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + 0xF4240;
    MEM32(esi + 0x10) = ebx;
    { uint64_t _t = (uint64_t)(MEM32(edi + 4)) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edi + 4) = (uint32_t)_t; }  /* adc */
    eax = MEM32(0x5DCE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003C29EF; /* jne: not equal / not zero */

loc_003C29E4: ;
    MEM32(0x5DCE1C) = esi;
    goto loc_003C2A3E;

loc_003C29EC: ;
    eax = MEM32(eax + 0x10);

loc_003C29EF: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003C29EC; /* jne: not equal / not zero */

loc_003C29F4: ;
    MEM32(eax + 0x10) = esi;
    goto loc_003C2A3E;

loc_003C29F9: ;
    MEM8(esi) = 0xFD;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCDD4);
    MEM8(0x5DCDA2) = LO8(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    MEM8(0x5DCDA0) = 1;
    MEM8(0x5DCDA1) = LO8(ebx);
    MEM32(0x5DCE20) = esi;
    MEM8(0x5DCDA3) = 0x80;
    MEM8(esi + 5) = LO8(ebx);
    PUSH32(esp, 0x5DCDF0);
    MEM8(0x5DCE18) = LO8(ebx);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C2A3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2A3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2A44
 * Original: 0x003C2A44 - 0x003C2A66 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2A44(void)
{

loc_003C2A44: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCDD4);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFD050F80u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5DCDF0);
    MEM8(0x5DCE18) = 1;
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C2A65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2A65: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C2A66
 * Original: 0x003C2A66 - 0x003C2AB7 (81 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2A66(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2A66: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    MEM8(0x5DCDA3) = 0x81;
    if (CMP_GE(_fas, _fbs)) goto loc_003C2A81; /* jge: greater or equal (signed >=) */

loc_003C2A74: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, 0x003C2A7Fu); RECOMP_ABI_CALL(0x003C2ECBu, sub_003C2ECB); /* call 0x003C2ECB */

loc_003C2A7F: ;
    goto loc_003C2AB4;

loc_003C2A81: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x1000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2A93; /* jne: not equal / not zero */

loc_003C2A8B: ;
    eax = MEM32(esp + 8);
    MEM8(eax + 4) = MEM8(eax + 4) | 0x80;

loc_003C2A93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCDD4);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFFE7960u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5DCDF0);
    MEM8(0x5DCE18) = 2;
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C2AB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2AB4: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2AB7
 * Original: 0x003C2AB7 - 0x003C2AE2 (43 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2AB7(void)
{

loc_003C2AB7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCDD4);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFFFB1E0u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5DCDF0);
    MEM8(0x5DCDA3) = 0x84;
    MEM8(0x5DCE18) = 3;
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C2ADFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2ADF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2AE2
 * Original: 0x003C2AE2 - 0x003C2B13 (49 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2AE2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2AE2: ;
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    SET_LO8(ebx, 0); /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(edx));

loc_003C2AEB: ;
    esi = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM32(ecx + esi * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + esi * 4 + 8), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2B05; /* je: equal / zero */

loc_003C2AF4: ;
    edx = edx << 1;
    if ((edx != 0)) goto loc_003C2AFD; /* jne: not equal / not zero */

loc_003C2AF8: ;
    edx = 0; /* xor self */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C2AFD: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x80 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C2AEB; /* jb: below (unsigned <) */

loc_003C2B03: ;
    goto loc_003C2B0E;

loc_003C2B05: ;
    esi = ZX8(LO8(ebx));
    ecx = ecx + esi * 4 + 8;
    MEM32(ecx) = MEM32(ecx) | edx;

loc_003C2B0E: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) & 0x7F);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2B13
 * Original: 0x003C2B13 - 0x003C2B47 (52 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2B13(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2B13: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x1F (8-bit) */
    PUSH32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_003C2B32; /* jbe: below or equal (unsigned <=) */

loc_003C2B1E: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) - 0x20);
    SET_LO8(eax, LO8(eax) >> 5);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    SET_LO8(ebx, LO8(eax));

loc_003C2B2C: ;
    SET_LO8(edx, LO8(edx) + 0xE0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C2B2C; /* jne: not equal / not zero */

loc_003C2B32: ;
    eax = ZX8(LO8(ebx));
    esi = 0; /* xor self */
    eax = ecx + eax * 4 + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(edx));
    esi = esi << LO8(ecx);
    esi = ~esi;
    MEM32(eax) = MEM32(eax) & esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2B47
 * Original: 0x003C2B47 - 0x003C2B4E (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2B47(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2B47: ;
    MEM32(0x5DCE84) = MEM32(0x5DCE84) + 1;
    _fa = (uint32_t)(MEM32(0x5DCE84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003C2B4E
 * Original: 0x003C2B4E - 0x003C2B55 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2B4E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2B4E: ;
    MEM32(0x5DCE84) = MEM32(0x5DCE84) - 1;
    _fa = (uint32_t)(MEM32(0x5DCE84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003C2B55
 * Original: 0x003C2B55 - 0x003C2B6A (21 bytes, 6 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2B55(void)
{

loc_003C2B55: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + -20);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003C2B67u); RECOMP_ABI_CALL(0x003C2980u, sub_003C2980); /* call 0x003C2980 */

loc_003C2B67: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2B6A
 * Original: 0x003C2B6A - 0x003C2BCC (98 bytes, 39 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2B6A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2B6A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5DCE20);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    edi = edi + 0x18;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2B8C; /* je: equal / zero */

loc_003C2B83: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C2B8Au); RECOMP_ABI_CALL(0x003C2ECBu, sub_003C2ECB); /* call 0x003C2ECB */

loc_003C2B8A: ;
    goto loc_003C2BC8;

loc_003C2B8C: ;
    ecx = esi;
    MEM8(0x5DCDA3) = LO8(ebx);
    PUSH32(esp, 0x003C2B99u); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C2B99: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2BB4; /* jne: not equal / not zero */

loc_003C2B9D: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C2A66);
    eax = eax & 0x7F;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C2BB2u); RECOMP_ABI_CALL(0x003C514Cu, sub_003C514C); /* call 0x003C514C */

loc_003C2BB2: ;
    goto loc_003C2BC8;

loc_003C2BB4: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C2BC8u); RECOMP_ABI_CALL(0x003C4742u, sub_003C4742); /* call 0x003C4742 */

loc_003C2BC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2BCC
 * Original: 0x003C2BCC - 0x003C2BD1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2BCC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2BCC: ;
    g_seh_ebp = ebp; sub_003C2A66(); return; /* tail jmp 0x003C2A66 */

}

/**
 * sub_003C2BD1
 * Original: 0x003C2BD1 - 0x003C2C47 (118 bytes, 47 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2BD1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2BD1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003C2BF8; /* je: equal / zero */

loc_003C2BDD: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2BF8; /* je: equal / zero */

loc_003C2BED: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C2BF8u); RECOMP_ABI_CALL(0x003C043Eu, sub_003C043E); /* call 0x003C043E */

loc_003C2BF8: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 5 (8-bit) */
    ebx = 0x5DCDA0;
    if (CMP_NE(_fa, _fb)) goto loc_003C2C2C; /* jne: not equal / not zero */

loc_003C2C02: ;
    ecx = esi;
    PUSH32(esp, 0x003C2C09u); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C2C09: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003C2C13u); RECOMP_ABI_CALL(0x003C19BDu, sub_003C19BD); /* call 0x003C19BD */

loc_003C2C13: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C2C3B; /* jne: not equal / not zero */

loc_003C2C17: ;
    SET_LO8(edx, MEM8(edi + 5));
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x003C2C22u); RECOMP_ABI_CALL(0x003C2B13u, sub_003C2B13); /* call 0x003C2B13 */

loc_003C2C22: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003C2C2Au); RECOMP_ABI_CALL(0x003C294Eu, sub_003C294E); /* call 0x003C294E */

loc_003C2C2A: ;
    goto loc_003C2C3B;

loc_003C2C2C: ;
    SET_LO8(edx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2C3B; /* je: equal / zero */

loc_003C2C33: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x003C2C3Bu); RECOMP_ABI_CALL(0x003C2B13u, sub_003C2B13); /* call 0x003C2B13 */

loc_003C2C3B: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003C2C43u); RECOMP_ABI_CALL(0x003C294Eu, sub_003C294E); /* call 0x003C294E */

loc_003C2C43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2C47
 * Original: 0x003C2C47 - 0x003C2C99 (82 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2C47(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2C47: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 4 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003C2C83; /* jne: not equal / not zero */

loc_003C2C51: ;
    PUSH32(esp, 0x003C2C56u); RECOMP_ABI_CALL(0x003C1698u, sub_003C1698); /* call 0x003C1698 */

loc_003C2C56: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2C95; /* je: equal / zero */

loc_003C2C5C: ;
    PUSH32(esp, edi);

loc_003C2C5D: ;
    ecx = esi;
    PUSH32(esp, 0x003C2C64u); RECOMP_ABI_CALL(0x003C16AFu, sub_003C16AF); /* call 0x003C16AF */

loc_003C2C64: ;
    edi = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2C73; /* je: equal / zero */

loc_003C2C6D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003C2C71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2C71: ;
    goto loc_003C2C7A;

loc_003C2C73: ;
    ecx = esi;
    PUSH32(esp, 0x003C2C7Au); RECOMP_ABI_CALL(0x003C2BD1u, sub_003C2BD1); /* call 0x003C2BD1 */

loc_003C2C7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003C2C5D; /* jne: not equal / not zero */

loc_003C2C80: ;
    POP32(esp, edi);
    goto loc_003C2C95;

loc_003C2C83: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2C90; /* je: equal / zero */

loc_003C2C8A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003C2C8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2C8E: ;
    goto loc_003C2C95;

loc_003C2C90: ;
    PUSH32(esp, 0x003C2C95u); RECOMP_ABI_CALL(0x003C2BD1u, sub_003C2BD1); /* call 0x003C2BD1 */

loc_003C2C95: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C2C99
 * Original: 0x003C2C99 - 0x003C2D48 (175 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C2C99(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2C99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2CB1; /* je: equal / zero */

loc_003C2CA9: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2CB1u); RECOMP_ABI_CALL(0x003C2C47u, sub_003C2C47); /* call 0x003C2C47 */

loc_003C2CB1: ;
    eax = MEM32(0x5DCE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(0x5DCDA1) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003C2CCE; /* jne: not equal / not zero */

loc_003C2CC0: ;
    MEM32(0x5DCE20) = ebx;
    MEM8(0x5DCDA0) = LO8(ebx);
    goto loc_003C2D43;

loc_003C2CCE: ;
    MEM32(0x5DCE20) = eax;
    ecx = MEM32(eax + 0x10);
    MEM32(0x5DCE1C) = ecx;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(0x5DCDA2) = LO8(ecx);
    MEM8(0x5DCDA3) = 0x80;
    MEM8(eax) = 0xFD;
    eax = MEM32(0x5DCE20);
    MEM32(eax + 0x10) = ebx;
    eax = MEM32(0x5DCE20);
    MEM8(eax + 5) = LO8(ebx);
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x003C2D09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2D09: ;
    eax = MEM32(0x5DCE20);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C2D27; /* jl: less (signed <) */

loc_003C2D16: ;
    if (CMP_G(_fas, _fbs)) goto loc_003C2D20; /* jg: greater (signed >) */

loc_003C2D18: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x18) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C2D27; /* jbe: below or equal (unsigned <=) */

loc_003C2D20: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2D25u); RECOMP_ABI_CALL(0x003C2B6Au, sub_003C2B6A); /* call 0x003C2B6A */

loc_003C2D25: ;
    goto loc_003C2D43;

loc_003C2D27: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCDD4);
    MEM8(0x5DCE18) = LO8(ebx);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, 0x5DCDF0);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C2D43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2D43: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2D48
 * Original: 0x003C2D48 - 0x003C2DBF (119 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2D48(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2D48: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    edi = ecx;
    PUSH32(esp, 0x003C2D55u); RECOMP_ABI_CALL(0x003C1944u, sub_003C1944); /* call 0x003C1944 */

loc_003C2D55: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2DBA; /* je: equal / zero */

loc_003C2D5B: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003C2D63u); RECOMP_ABI_CALL(0x003C19BDu, sub_003C19BD); /* call 0x003C19BD */

loc_003C2D63: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0xFE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2D9A; /* jne: not equal / not zero */

loc_003C2D68: ;
    eax = MEM32(0x5DCE1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2D7E; /* jne: not equal / not zero */

loc_003C2D71: ;
    eax = MEM32(esi + 0x10);
    MEM32(0x5DCE1C) = eax;
    goto loc_003C2D89;

loc_003C2D7B: ;
    eax = MEM32(eax + 0x10);

loc_003C2D7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2D7B; /* jne: not equal / not zero */

loc_003C2D83: ;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_003C2D89: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    PUSH32(esp, esi);
    ecx = 0x5DCDA0;
    PUSH32(esp, 0x003C2D98u); RECOMP_ABI_CALL(0x003C294Eu, sub_003C294E); /* call 0x003C294E */

loc_003C2D98: ;
    goto loc_003C2DBA;

loc_003C2D9A: ;
    _fa = (uint32_t)(MEM8(0x5DCDA0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA0), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2DB4; /* je: equal / zero */

loc_003C2DA3: ;
    _fa = (uint32_t)(MEM32(0x5DCE20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5DCE20), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2DB4; /* jne: not equal / not zero */

loc_003C2DAB: ;
    MEM8(0x5DCDA1) = 1;
    goto loc_003C2DBA;

loc_003C2DB4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C2DBAu); RECOMP_ABI_CALL(0x003C2C47u, sub_003C2C47); /* call 0x003C2C47 */

loc_003C2DBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C2DBF
 * Original: 0x003C2DBF - 0x003C2E04 (69 bytes, 30 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C2DBF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2DBF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 5 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003C2DD3; /* jne: not equal / not zero */

loc_003C2DCA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2DCFu); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C2DCF: ;
    esi = eax;
    goto loc_003C2DD5;

loc_003C2DD3: ;
    esi = ecx;

loc_003C2DD5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2DDCu); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C2DDC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2E00; /* je: equal / zero */

loc_003C2DE2: ;
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2DF4u); RECOMP_ABI_CALL(0x003C2D48u, sub_003C2D48); /* call 0x003C2D48 */

loc_003C2DF4: ;
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2E00u); RECOMP_ABI_CALL(0x003C2980u, sub_003C2980); /* call 0x003C2980 */

loc_003C2E00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C2E04
 * Original: 0x003C2E04 - 0x003C2E85 (129 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C2E04(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2E04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), 0 (8-bit) */
    esi = ecx;
    MEM8(ebp + -4) = LO8(ebx);
    MEM8(0x5DCDA3) = 0xA;
    if (CMP_NE(_fa, _fb)) goto loc_003C2E46; /* jne: not equal / not zero */

loc_003C2E24: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2E29u); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C2E29: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2E33u); RECOMP_ABI_CALL(0x003C19BDu, sub_003C19BD); /* call 0x003C19BD */

loc_003C2E33: ;
    SET_LO8(eax, MEM8(0x5DCDA2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2E46; /* je: equal / zero */

loc_003C2E3C: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(ebp + -4) = LO8(eax);

loc_003C2E46: ;
    SET_LO8(edx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2E55; /* je: equal / zero */

loc_003C2E4D: ;
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2E55u); RECOMP_ABI_CALL(0x003C2B13u, sub_003C2B13); /* call 0x003C2B13 */

loc_003C2E55: ;
    PUSH32(esp, esi);
    ecx = 0x5DCDA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2E60u); RECOMP_ABI_CALL(0x003C294Eu, sub_003C294E); /* call 0x003C294E */

loc_003C2E60: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C2E71; /* je: equal / zero */

loc_003C2E64: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2E71u); RECOMP_ABI_CALL(0x003C2980u, sub_003C2980); /* call 0x003C2980 */

loc_003C2E71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM8(0x5DCDA1) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2E80u); RECOMP_ABI_CALL(0x003C2C99u, sub_003C2C99); /* call 0x003C2C99 */

loc_003C2E80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C2E85
 * Original: 0x003C2E85 - 0x003C2E98 (19 bytes, 5 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2E85(void)
{

loc_003C2E85: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + -20);
    PUSH32(esp, 0x003C2E95u); RECOMP_ABI_CALL(0x003C2D48u, sub_003C2D48); /* call 0x003C2D48 */

loc_003C2E95: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2E98
 * Original: 0x003C2E98 - 0x003C2ECB (51 bytes, 13 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2E98(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2E98: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    MEM8(0x5DCDA3) = 9;
    if (CMP_GE(_fas, _fbs)) goto loc_003C2EB6; /* jge: greater or equal (signed >=) */

loc_003C2EAB: ;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2EBE; /* jne: not equal / not zero */

loc_003C2EB3: ;
    MEM8(ecx + 5) = LO8(eax);

loc_003C2EB6: ;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2EC3; /* je: equal / zero */

loc_003C2EBE: ;
    MEM8(0x5DCDA2) = LO8(eax);

loc_003C2EC3: ;
    PUSH32(esp, 0x003C2EC8u); RECOMP_ABI_CALL(0x003C2E04u, sub_003C2E04); /* call 0x003C2E04 */

loc_003C2EC8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2ECB
 * Original: 0x003C2ECB - 0x003C2F38 (109 bytes, 36 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2ECB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2ECB: ;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), 0 (8-bit) */
    PUSH32(esp, esi);
    MEM8(0x5DCDA3) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_003C2F24; /* jne: not equal / not zero */

loc_003C2EDC: ;
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003C2EE7u); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C2EE7: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2F0D; /* jne: not equal / not zero */

loc_003C2EEC: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    eax = eax & 0x7F;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C2F01u); RECOMP_ABI_CALL(0x003C5199u, sub_003C5199); /* call 0x003C5199 */

loc_003C2F01: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x003C2F0Bu); RECOMP_ABI_CALL(0x003C2E98u, sub_003C2E98); /* call 0x003C2E98 */

loc_003C2F0B: ;
    goto loc_003C2F34;

loc_003C2F0D: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ecx & 0xFFFFFF7Fu;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C2F22u); RECOMP_ABI_CALL(0x003C4742u, sub_003C4742); /* call 0x003C4742 */

loc_003C2F22: ;
    goto loc_003C2F34;

loc_003C2F24: ;
    ecx = MEM32(esp + 0xC);
    MEM8(0x5DCDA2) = 0;
    PUSH32(esp, 0x003C2F34u); RECOMP_ABI_CALL(0x003C2E04u, sub_003C2E04); /* call 0x003C2E04 */

loc_003C2F34: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2F38
 * Original: 0x003C2F38 - 0x003C2F9D (101 bytes, 22 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2F38(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2F38: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCDF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C2F43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C2F43: ;
    eax = MEM32(esp + 4);
    MEM8(0x5DCDA3) = 3;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C2F67; /* jl: less (signed <) */

loc_003C2F54: ;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), 0 (8-bit) */
    MEM32(0x5DCDAC) = 0x3C2AB7;
    if (CMP_EQ(_fa, _fb)) goto loc_003C2F71; /* je: equal / zero */

loc_003C2F67: ;
    MEM32(0x5DCDAC) = 0x3C2ECB;

loc_003C2F71: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM8(0x5DCDA4) = 0x1C;
    MEM8(0x5DCDA5) = 0x43;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x5DCDA4);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C2F95u); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C2F95: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C2F9D
 * Original: 0x003C2F9D - 0x003C30F8 (347 bytes, 106 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C2F9D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2F9D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM8(0x5DCDA3) = 7;
    if (CMP_GE(_fas, _fbs)) goto loc_003C2FCD; /* jge: greater or equal (signed >=) */

loc_003C2FBC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000400u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x80000400u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2FC8; /* jne: not equal / not zero */

loc_003C2FC5: ;
    MEM32(ebp + -4) = ebx;

loc_003C2FC8: ;
    MEM32(esi + 0x10) = ebx;
    goto loc_003C2FEE;

loc_003C2FCD: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2FEE; /* je: equal / zero */

loc_003C2FD4: ;
    edx = MEM32(esi + 0x10);
    edx = MEM32(edx + 0x14);
    eax = ZX8(LO8(eax));
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2FEE; /* je: equal / zero */

loc_003C2FE4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C2FEEu); RECOMP_ABI_CALL(0x003C043Eu, sub_003C043E); /* call 0x003C043E */

loc_003C2FEE: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_003C3103(); return; } /* je: equal / zero */

loc_003C2FF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_003C3103(); return; } /* je: equal / zero */

loc_003C3000: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    ecx = MEM32(esi + 8);
    edi = esi;
    MEM32(ebp + -12) = ecx;
    MEM32(esi + 8) = ebx;
    MEM32(ebp + -8) = 0x3C2C99;
    if (CMP_NE(_fa, _fb)) goto loc_003C30B4; /* jne: not equal / not zero */

loc_003C301A: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3021u); RECOMP_ABI_CALL(0x003C16AFu, sub_003C16AF); /* call 0x003C16AF */

loc_003C3021: ;
    ecx = esi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C302Au); RECOMP_ABI_CALL(0x003C1681u, sub_003C1681); /* call 0x003C1681 */

loc_003C302A: ;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), 0 (8-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003C30CC; /* jne: not equal / not zero */

loc_003C3039: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C306E; /* jne: not equal / not zero */

loc_003C303F: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3047u); RECOMP_ABI_CALL(0x003C19BDu, sub_003C19BD); /* call 0x003C19BD */

loc_003C3047: ;
    PUSH32(esp, esi);
    ecx = 0x5DCDA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3052u); RECOMP_ABI_CALL(0x003C294Eu, sub_003C294E); /* call 0x003C294E */

loc_003C3052: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3059u); RECOMP_ABI_CALL(0x003C1698u, sub_003C1698); /* call 0x003C1698 */

loc_003C3059: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C306E; /* jne: not equal / not zero */

loc_003C305D: ;
    PUSH32(esp, edi);
    MEM8(0x5DCDA2) = LO8(eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3069u); RECOMP_ABI_CALL(0x003C2ECBu, sub_003C2ECB); /* call 0x003C2ECB */

loc_003C3069: ;
    g_seh_ebp = ebp; sub_003C3122(); return; /* tail jmp 0x003C3122 */

loc_003C306E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C30CC; /* je: equal / zero */

loc_003C3072: ;
    eax = MEM32(0x5DCE7C);

loc_003C3077: ;
    ecx = ZX8(MEM8(eax));
    eax = eax + ecx;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3077; /* jne: not equal / not zero */

loc_003C3082: ;
    MEM32(0x5DCE7C) = eax;
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(ebx + 2) = LO8(eax);
    eax = MEM32(0x5DCE7C);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 9) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ebp + 0xA) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(eax);
    MEM8(ebp + 8) = 0x82;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C30B2u); RECOMP_ABI_CALL(0x003C3129u, sub_003C3129); /* call 0x003C3129 */

loc_003C30B2: ;
    g_seh_ebp = ebp; sub_003C3122(); return; /* tail jmp 0x003C3122 */

loc_003C30B4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C30CC; /* jge: greater or equal (signed >=) */

loc_003C30B9: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C30C5; /* jne: not equal / not zero */

loc_003C30BE: ;
    MEM8(0x5DCDA2) = 0;

loc_003C30C5: ;
    MEM32(ebp + -8) = 0x3C2ECB;

loc_003C30CC: ;
    eax = MEM32(ebp + -8);
    MEM32(0x5DCDAC) = eax;
    eax = MEM32(ebp + -12);
    MEM32(0x5DCDB4) = eax;
    MEM8(0x5DCDA4) = 0x1C;
    MEM8(0x5DCDA5) = 0x43;
    MEM32(0x5DCDB0) = edi;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x5DCDA4);

}

/**
 * sub_003C3064
 * Original: 0x003C3064 - 0x003C30F8 (148 bytes, 39 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3064(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C3064: ;
    PUSH32(esp, 0x003C3069u); RECOMP_ABI_CALL(0x003C2ECBu, sub_003C2ECB); /* call 0x003C2ECB */

loc_003C3069: ;
    g_seh_ebp = ebp; sub_003C3122(); return; /* tail jmp 0x003C3122 */

    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C30CC; /* je: equal / zero */

loc_003C3072: ;
    eax = MEM32(0x5DCE7C);

loc_003C3077: ;
    ecx = ZX8(MEM8(eax));
    eax = eax + ecx;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3077; /* jne: not equal / not zero */

loc_003C3082: ;
    MEM32(0x5DCE7C) = eax;
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(ebx + 2) = LO8(eax);
    eax = MEM32(0x5DCE7C);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 9) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ebp + 0xA) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(eax);
    MEM8(ebp + 8) = 0x82;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, 0x003C30B2u); RECOMP_ABI_CALL(0x003C3129u, sub_003C3129); /* call 0x003C3129 */

loc_003C30B2: ;
    g_seh_ebp = ebp; sub_003C3122(); return; /* tail jmp 0x003C3122 */

    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C30CC; /* jge: greater or equal (signed >=) */

loc_003C30B9: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C30C5; /* jne: not equal / not zero */

loc_003C30BE: ;
    MEM8(0x5DCDA2) = 0;

loc_003C30C5: ;
    MEM32(ebp + -8) = 0x3C2ECB;

loc_003C30CC: ;
    eax = MEM32(ebp + -8);
    MEM32(0x5DCDAC) = eax;
    eax = MEM32(ebp + -12);
    MEM32(0x5DCDB4) = eax;
    MEM8(0x5DCDA4) = 0x1C;
    MEM8(0x5DCDA5) = 0x43;
    MEM32(0x5DCDB0) = edi;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x5DCDA4);

}

/**
 * sub_003C30F5
 * Original: 0x003C30F5 - 0x003C3129 (52 bytes, 21 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C30F5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C30F5: ;
    /* TODO: int 0x5d */
    MEM8(ebx + -397403968) = MEM8(ebx + -397403968) + LO8(eax);
    /* TODO: rcl dword ptr [ecx], 0 */
    SET_LO8(ebx, LO8(ebx) + HI8(ecx));
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C311B; /* jge: greater or equal (signed >=) */

loc_003C3108: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3114; /* jne: not equal / not zero */

loc_003C310D: ;
    MEM8(0x5DCDA2) = 0;

loc_003C3114: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_seh_ebp = ebp; sub_003C3064(); return; /* tail jmp 0x003C3064 */

loc_003C311B: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C3122u); RECOMP_ABI_CALL(0x003C2C99u, sub_003C2C99); /* call 0x003C2C99 */

loc_003C3122: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C3122
 * Original: 0x003C3122 - 0x003C3129 (7 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3122(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C3122: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C3129
 * Original: 0x003C3129 - 0x003C315D (52 bytes, 18 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3129(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3129: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003C3131u); RECOMP_ABI_CALL(0x003C1BBAu, sub_003C1BBA); /* call 0x003C1BBA */

loc_003C3131: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C314D; /* je: equal / zero */

loc_003C3137: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x003C3140u); RECOMP_ABI_CALL(0x003C1D0Cu, sub_003C1D0C); /* call 0x003C1D0C */

loc_003C3140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003C314D; /* je: equal / zero */

loc_003C3147: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003C314Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C314B: ;
    goto loc_003C3159;

loc_003C314D: ;
    ecx = esi;
    PUSH32(esp, 0x80000400u);
    PUSH32(esp, 0x003C3159u); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C3159: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C315D
 * Original: 0x003C315D - 0x003C3238 (219 bytes, 51 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C315D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C315D: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCDF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C3169u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3169: ;
    edx = MEM32(esp + 8);
    ebx = 0; /* xor self */
    MEM8(0x5DCDA3) = 2;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C322A; /* jl: less (signed <) */

loc_003C317F: ;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C322A; /* jne: not equal / not zero */

loc_003C318B: ;
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C3223; /* jb: below (unsigned <) */

loc_003C3195: ;
    SET_LO8(eax, MEM8(0x5DCE2B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C3223; /* ja: above (unsigned >) */

loc_003C31A2: ;
    _fa = (uint32_t)(MEM8(0x5DCE25)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCE25), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3223; /* jne: not equal / not zero */

loc_003C31AB: ;
    SET_LO8(ecx, MEM8(0x5DCE24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C31BB; /* je: equal / zero */

loc_003C31B6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x12 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3223; /* jne: not equal / not zero */

loc_003C31BB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    MEM8(esi + 6) = LO8(eax);
    PUSH32(esp, 0x003C31CBu); RECOMP_ABI_CALL(0x003C2AE2u, sub_003C2AE2); /* call 0x003C2AE2 */

loc_003C31CB: ;
    MEM8(esi + 5) = LO8(eax);
    MEM32(0x5DCDAC) = 0x3C2F38;
    MEM32(0x5DCDBC) = ebx;
    MEM32(0x5DCDB8) = ebx;
    MEM8(0x5DCDCC) = LO8(ebx);
    MEM8(0x5DCDCD) = 5;
    SET_LO16(eax, ZX8(MEM8(esi + 5)));
    MEM16(0x5DCDCE) = LO16(eax);
    MEM16(0x5DCDD0) = LO16(ebx);
    MEM16(0x5DCDD2) = LO16(ebx);
    PUSH32(esp, 0x003C320Fu); RECOMP_ABI_CALL(0x003C2A44u, sub_003C2A44); /* call 0x003C2A44 */

loc_003C320F: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x5DCDA4);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C3220u); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C3220: ;
    POP32(esp, esi);
    goto loc_003C3234;

loc_003C3223: ;
    MEM32(edx + 4) = 0x80000600u;

loc_003C322A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, 0x003C3234u); RECOMP_ABI_CALL(0x003C2F38u, sub_003C2F38); /* call 0x003C2F38 */

loc_003C3234: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C3238
 * Original: 0x003C3238 - 0x003C337F (327 bytes, 96 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C3238(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3238: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5DCDF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C3248u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3248: ;
    ecx = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    MEM8(0x5DCDA3) = 6;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C3370; /* jl: less (signed <) */

loc_003C325D: ;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3370; /* jne: not equal / not zero */

loc_003C3269: ;
    esi = MEM32(ebp + 0xC);
    MEM32(esi + 0x18) = ebx;
    eax = 0x5DCE2C;

loc_003C3274: ;
    edx = ZX8(MEM8(eax));
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5DCE7C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5DCE7C (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C335F; /* jae: above or equal (unsigned >=) */

loc_003C3284: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C335F; /* je: equal / zero */

loc_003C328D: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3274; /* jne: not equal / not zero */

loc_003C3293: ;
    _fa = (uint32_t)(MEM8(0x5DCE30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCE30), 1 (8-bit) */
    MEM32(0x5DCE7C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C332A; /* je: equal / zero */

loc_003C32A5: ;
    _fa = (uint32_t)(MEM8(0x5DCE1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCE1B), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C332A; /* je: equal / zero */

loc_003C32AE: ;
    MEM8(esi) = 4;
    MEM8(esi + 2) = 0x80;
    _fa = (uint32_t)(MEM8(0x5DCE30)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCE30), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C331B; /* jbe: below or equal (unsigned <=) */

loc_003C32BE: ;
    eax = ZX8(MEM8(0x5DCE1B));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C331B; /* jbe: below or equal (unsigned <=) */

loc_003C32C9: ;
    ecx = 0x5DCDA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C32D3u); RECOMP_ABI_CALL(0x003C1C5Fu, sub_003C1C5F); /* call 0x003C1C5F */

loc_003C32D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C331B; /* je: equal / zero */

loc_003C32D7: ;
    MEM8(eax) = 5;
    SET_LO8(ecx, MEM8(esi + 4));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(eax + 4) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 5));
    MEM8(eax + 5) = LO8(ecx);
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, MEM8(esi + 6));
    MEM8(eax + 6) = LO8(ecx);
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C330Fu); RECOMP_ABI_CALL(0x003C1975u, sub_003C1975); /* call 0x003C1975 */

loc_003C330F: ;
    eax = ZX8(MEM8(0x5DCE30));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C32BE; /* jb: below (unsigned <) */

loc_003C331B: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3326u); RECOMP_ABI_CALL(0x003C1698u, sub_003C1698); /* call 0x003C1698 */

loc_003C3326: ;
    esi = eax;
    goto loc_003C332D;

loc_003C332A: ;
    MEM8(esi) = 3;

loc_003C332D: ;
    eax = MEM32(0x5DCE7C);
    SET_LO8(eax, MEM8(eax + 2));
    MEM8(esi + 2) = LO8(eax);
    eax = MEM32(0x5DCE7C);
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 0xD) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 6));
    SET_LO8(eax, MEM8(eax + 7));
    MEM8(ebp + 0xE) = LO8(ecx);
    MEM8(ebp + 0xF) = LO8(eax);
    MEM8(ebp + 0xC) = 0x82;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C335Du); RECOMP_ABI_CALL(0x003C3129u, sub_003C3129); /* call 0x003C3129 */

loc_003C335D: ;
    goto loc_003C3379;

loc_003C335F: ;
    MEM8(0x5DCDA2) = 0;
    MEM32(ecx + 4) = 0x80000400u;
    PUSH32(esp, esi);
    goto loc_003C3373;

loc_003C3370: ;
    PUSH32(esp, MEM32(ebp + 0xC));

loc_003C3373: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3379u); RECOMP_ABI_CALL(0x003C2F38u, sub_003C2F38); /* call 0x003C2F38 */

loc_003C3379: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C337F
 * Original: 0x003C337F - 0x003C347F (256 bytes, 60 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C337F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C337F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    edi = edi + 0x18;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(ebx) (8-bit) */
    MEM8(0x5DCDA3) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003C33A7; /* je: equal / zero */

loc_003C339B: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C33A2u); RECOMP_ABI_CALL(0x003C2ECBu, sub_003C2ECB); /* call 0x003C2ECB */

loc_003C33A2: ;
    goto loc_003C347B;

loc_003C33A7: ;
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, ebp);
    MEM8(0x5DCDA4) = 0x20;
    MEM8(0x5DCDA5) = 2;
    MEM32(0x5DCDAC) = ebx;
    MEM8(0x5DCDB9) = LO8(ebx);
    MEM8(0x5DCDBA) = LO8(ebx);
    MEM8(0x5DCDBB) = LO8(ebx);
    MEM16(0x5DCDC0) = 8;
    SET_LO8(eax, MEM8(esi + 4));
    ebp = 0x5DCDA4;
    PUSH32(esp, ebp);
    SET_LO8(eax, LO8(eax) >> 7);
    PUSH32(esp, edi);
    MEM8(0x5DCDC2) = LO8(eax);
    MEM8(0x5DCDB8) = LO8(ebx);
    PUSH32(esp, 0x003C33F7u); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C33F7: ;
    eax = MEM32(0x5DCDB4);
    MEM32(esi + 8) = eax;
    MEM8(0x5DCDA4) = 0x30;
    MEM8(0x5DCDA5) = 0x40;
    MEM32(0x5DCDAC) = 0x3C315D;
    MEM32(0x5DCDB0) = esi;
    eax = MEM32(esi + 8);
    PUSH32(esp, 8);
    MEM32(0x5DCDB4) = eax;
    POP32(esp, eax);
    MEM32(0x5DCDBC) = 0x5DCE24;
    MEM32(0x5DCDB8) = eax;
    MEM8(0x5DCDC0) = 2;
    MEM8(0x5DCDC1) = LO8(ebx);
    MEM8(0x5DCDC2) = LO8(ebx);
    MEM8(0x5DCDCC) = 0x80;
    MEM8(0x5DCDCD) = 6;
    MEM16(0x5DCDCE) = 0x100;
    MEM16(0x5DCDD0) = LO16(ebx);
    MEM16(0x5DCDD2) = LO16(eax);
    PUSH32(esp, 0x003C3473u); RECOMP_ABI_CALL(0x003C2A44u, sub_003C2A44); /* call 0x003C2A44 */

loc_003C3473: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C347Au); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C347A: ;
    POP32(esp, ebp);

loc_003C347B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C347F
 * Original: 0x003C347F - 0x003C3538 (185 bytes, 43 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C347F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C347F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCDF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C348Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C348D: ;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    MEM8(0x5DCDA3) = 5;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C34C0; /* jl: less (signed <) */

loc_003C349E: ;
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C34C0; /* jne: not equal / not zero */

loc_003C34A6: ;
    SET_LO16(ecx, MEM16(0x5DCE2E));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x50 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C34CD; /* jbe: below or equal (unsigned <=) */

loc_003C34B3: ;
    MEM8(0x5DCDA2) = LO8(edx);
    MEM32(eax + 4) = 0x80000400u;

loc_003C34C0: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C34C9u); RECOMP_ABI_CALL(0x003C2F38u, sub_003C2F38); /* call 0x003C2F38 */

loc_003C34C9: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003C34CD: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C34DE; /* je: equal / zero */

loc_003C34D5: ;
    MEM32(eax + 4) = 0x80000000u;
    goto loc_003C34C0;

loc_003C34DE: ;
    SET_LO16(eax, ZX8(MEM8(0x5DCE31)));
    MEM32(0x5DCDAC) = 0x3C3238;
    MEM32(0x5DCDBC) = edx;
    MEM32(0x5DCDB8) = edx;
    MEM8(0x5DCDCC) = LO8(edx);
    MEM8(0x5DCDCD) = 9;
    MEM16(0x5DCDCE) = LO16(eax);
    MEM16(0x5DCDD0) = LO16(edx);
    MEM16(0x5DCDD2) = LO16(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3522u); RECOMP_ABI_CALL(0x003C2A44u, sub_003C2A44); /* call 0x003C2A44 */

loc_003C3522: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x5DCDA4);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3536u); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C3536: ;
    goto loc_003C34C9;

}

/**
 * sub_003C3538
 * Original: 0x003C3538 - 0x003C3683 (331 bytes, 83 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C3538(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3538: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(0x5DCDA1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5DCDA1), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    esi = edx;
    MEM8(0x5DCDA3) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_003C355D; /* je: equal / zero */

loc_003C3551: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3558u); RECOMP_ABI_CALL(0x003C2ECBu, sub_003C2ECB); /* call 0x003C2ECB */

loc_003C3558: ;
    goto loc_003C367F;

loc_003C355D: ;
    SET_LO8(eax, MEM8(0x5DCE28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C359A; /* je: equal / zero */

loc_003C3566: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, MEM8(0x5DCE28));
    MEM8(ebp + -3) = LO8(eax);
    SET_LO8(eax, MEM8(0x5DCE29));
    MEM8(ebp + -2) = LO8(eax);
    SET_LO8(eax, MEM8(0x5DCE2A));
    MEM8(ebp + -1) = LO8(eax);
    MEM8(ebp + -4) = 0x81;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3595u); RECOMP_ABI_CALL(0x003C3129u, sub_003C3129); /* call 0x003C3129 */

loc_003C3595: ;
    goto loc_003C367F;

loc_003C359A: ;
    SET_LO16(eax, ZX8(MEM8(0x5DCE2B)));
    MEM16(0x5DCDC0) = LO16(eax);
    MEM8(0x5DCDA4) = 0x20;
    MEM8(0x5DCDA5) = 2;
    MEM32(0x5DCDAC) = ebx;
    MEM8(0x5DCDB9) = LO8(ebx);
    MEM8(0x5DCDBA) = LO8(ebx);
    MEM8(0x5DCDBB) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(eax, LO8(eax) >> 7);
    MEM8(0x5DCDC2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 5));
    PUSH32(esp, edi);
    MEM8(0x5DCDB8) = LO8(eax);
    eax = MEM32(esi + 0xC);
    edi = 0x5DCDA4;
    PUSH32(esp, edi);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C35F4u); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C35F4: ;
    eax = MEM32(0x5DCDB4);
    MEM32(esi + 8) = eax;
    MEM8(0x5DCDA4) = 0x30;
    MEM8(0x5DCDA5) = 0x40;
    MEM32(0x5DCDAC) = 0x3C347F;
    MEM32(0x5DCDB0) = esi;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0x50);
    MEM32(0x5DCDB4) = eax;
    POP32(esp, eax);
    MEM32(0x5DCDBC) = 0x5DCE2C;
    MEM32(0x5DCDB8) = eax;
    MEM8(0x5DCDC0) = 2;
    MEM8(0x5DCDC1) = 1;
    MEM8(0x5DCDC2) = LO8(ebx);
    MEM8(0x5DCDCC) = 0x80;
    MEM8(0x5DCDCD) = 6;
    MEM16(0x5DCDCE) = 0x200;
    MEM16(0x5DCDD0) = LO16(ebx);
    MEM16(0x5DCDD2) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3671u); RECOMP_ABI_CALL(0x003C2A44u, sub_003C2A44); /* call 0x003C2A44 */

loc_003C3671: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C367Eu); RECOMP_ABI_CALL(0x003C42C2u, sub_003C42C2); /* call 0x003C42C2 */

loc_003C367E: ;
    POP32(esp, edi);

loc_003C367F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C3683
 * Original: 0x003C3683 - 0x003C36D7 (84 bytes, 25 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3683(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3683: ;
    eax = ZX8(MEM8(0x5DCE18));
    eax = eax - 0;
    if ((eax == 0)) goto loc_003C36CF; /* je: equal / zero */

loc_003C368F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C36B7; /* je: equal / zero */

loc_003C3692: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C36AA; /* je: equal / zero */

loc_003C3695: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C36D4; /* jne: not equal / not zero */

loc_003C3698: ;
    edx = MEM32(0x5DCE20);
    ecx = 0x5DCDA4;
    PUSH32(esp, 0x003C36A8u); RECOMP_ABI_CALL(0x003C3538u, sub_003C3538); /* call 0x003C3538 */

loc_003C36A8: ;
    goto loc_003C36D4;

loc_003C36AA: ;
    ecx = MEM32(0x5DCE20);
    PUSH32(esp, 0x003C36B5u); RECOMP_ABI_CALL(0x003C337Fu, sub_003C337F); /* call 0x003C337F */

loc_003C36B5: ;
    goto loc_003C36D4;

loc_003C36B7: ;
    eax = MEM32(0x5DCE20);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x5DCDA4);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C36CDu); RECOMP_ABI_CALL(0x003C4151u, sub_003C4151); /* call 0x003C4151 */

loc_003C36CD: ;
    goto loc_003C36D4;

loc_003C36CF: ;
    PUSH32(esp, 0x003C36D4u); RECOMP_ABI_CALL(0x003C2B6Au, sub_003C2B6A); /* call 0x003C2B6A */

loc_003C36D4: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C36D7
 * Original: 0x003C36D7 - 0x003C37DD (262 bytes, 68 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C36D7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C36D7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 1 (8-bit) */
    ebp = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(_fa, _fb)) goto loc_003C36F5; /* je: equal / zero */

loc_003C36E7: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C36F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C36F1: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;

loc_003C36F5: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C370A; /* je: equal / zero */

loc_003C36FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Du);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x003C3705u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3705: ;
    goto loc_003C37D9;

loc_003C370A: ;
    eax = eax | 0x1000;
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x6C) = edi;
    edi = esi + 0xB8;
    ebx = 0; /* xor self */
    MEM8(edi) = 0x18;
    MEM8(esi + 0xB9) = 5;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = 4;
    ecx = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C374Au); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C374A: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 3;
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C3769u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3769: ;
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x3C3BBE;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM8(esi + 0xD4) = LO8(ebx);
    MEM8(esi + 0xD5) = LO8(ebx);
    MEM8(esi + 0xD6) = LO8(ebx);
    MEM8(esi + 0xE0) = 2;
    MEM8(esi + 0xE1) = 1;
    MEM16(esi + 0xE2) = LO16(ebx);
    SET_LO16(eax, ZX8(MEM8(ebp + 5)));
    MEM16(esi + 0xE4) = LO16(eax);
    MEM16(esi + 0xE6) = LO16(ebx);
    ecx = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C37D8u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C37D8: ;
    POP32(esp, ebx);

loc_003C37D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003C37DD
 * Original: 0x003C37DD - 0x003C3861 (132 bytes, 48 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C37DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C37DD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C37F9; /* je: equal / zero */

loc_003C37EB: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C37F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C37F5: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;

loc_003C37F9: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFD;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003C3810; /* jge: greater or equal (signed >=) */

loc_003C3808: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C380Eu); RECOMP_ABI_CALL(0x003C1766u, sub_003C1766); /* call 0x003C1766 */

loc_003C380E: ;
    edi = eax;

loc_003C3810: ;
    _fa = (uint32_t)(MEM32(esi + 0x5F)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53425355) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5F), 0x53425355 (32-bit) */
    eax = 0xC0000001u;
    if (CMP_EQ(_fa, _fb)) goto loc_003C3820; /* je: equal / zero */

loc_003C381E: ;
    edi = eax;

loc_003C3820: ;
    ecx = MEM32(esi + 0x63);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x44) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C382A; /* je: equal / zero */

loc_003C3828: ;
    edi = eax;

loc_003C382A: ;
    SET_LO8(ecx, MEM8(esi + 0x6B));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3834; /* jne: not equal / not zero */

loc_003C3832: ;
    edi = eax;

loc_003C3834: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C383E; /* jne: not equal / not zero */

loc_003C3839: ;
    edi = 0xC000003Eu;

loc_003C383E: ;
    eax = 0xC0000000u;
    ecx = edi;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3856; /* jne: not equal / not zero */

loc_003C384B: ;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x003C3854u); RECOMP_ABI_CALL(0x003C36D7u, sub_003C36D7); /* call 0x003C36D7 */

loc_003C3854: ;
    goto loc_003C385C;

loc_003C3856: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x003C385Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C385C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C3861
 * Original: 0x003C3861 - 0x003C38EA (137 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3861(void)
{

loc_003C3861: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, edi);
    eax = esi + 0x5F;
    MEM32(esi + 0xD0) = eax;
    eax = ZX16(MEM16(esi + 0x34));
    PUSH32(esp, 0xFFFFFFFFu);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFE7960u);
    PUSH32(esp, edx);
    edi = esi + 0xB8;
    PUSH32(esp, eax);
    MEM8(edi) = 0x28;
    MEM8(esi + 0xB9) = 0x41;
    MEM32(esi + 0xC0) = 0x3C37DD;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xCC) = 0xD;
    MEM8(esi + 0xD4) = 2;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    PUSH32(esp, 0x003C38C9u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_003C38C9: ;
    ecx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C38DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C38DC: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C38E7u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C38E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C38EA
 * Original: 0x003C38EA - 0x003C39E7 (253 bytes, 80 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C38EA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C38EA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    edx = 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C3939; /* je: equal / zero */

loc_003C38FB: ;
    eax = eax & 0xFFFFF7FFu;
    ecx = esi + 0xB8;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), ecx (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003C3917; /* jne: not equal / not zero */

loc_003C390F: ;
    ecx = MEM32(esi + 0xEC);
    goto loc_003C391D;

loc_003C3917: ;
    ecx = MEM32(esi + 0xBC);

loc_003C391D: ;
    eax = eax & 0xFFFFF9FFu;
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x003C392Bu); RECOMP_ABI_CALL(0x003C1766u, sub_003C1766); /* call 0x003C1766 */

loc_003C392B: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x003C3934u); RECOMP_ABI_CALL(0x003C36D7u, sub_003C36D7); /* call 0x003C36D7 */

loc_003C3934: ;
    goto loc_003C39E3;

loc_003C3939: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_003C398D; /* jl: less (signed <) */

loc_003C3944: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C398D; /* jne: not equal / not zero */

loc_003C3948: ;
    edx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C395C; /* jae: above or equal (unsigned >=) */

loc_003C3950: ;
    edx = esi;
    PUSH32(esp, 0x003C3957u); RECOMP_ABI_CALL(0x003C39E7u, sub_003C39E7); /* call 0x003C39E7 */

loc_003C3957: ;
    goto loc_003C39E2;

loc_003C395C: ;
    edi = esi + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    edx = 0x200;
    if (CMP_NE(_fa, _fb)) goto loc_003C3975; /* jne: not equal / not zero */

loc_003C396B: ;
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    goto loc_003C397C;

loc_003C3975: ;
    eax = eax & 0xFFFFFBFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */

loc_003C397C: ;
    MEM32(esi + 0xC) = eax;
    if (_flags /* jne: not equal / not zero */) goto loc_003C39E2;

loc_003C3981: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | edx;
    ecx = esi;
    PUSH32(esp, 0x003C398Bu); RECOMP_ABI_CALL(0x003C3861u, sub_003C3861); /* call 0x003C3861 */

loc_003C398B: ;
    goto loc_003C39E2;

loc_003C398D: ;
    edi = esi + 0xB8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C39BC; /* jne: not equal / not zero */

loc_003C3997: ;
    eax = eax & 0xFFFFFDFFu;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003C39D1; /* je: equal / zero */

loc_003C39A4: ;
    eax = eax | edx;
    MEM32(esi + 0xC) = eax;
    eax = esi + 0xE8;
    PUSH32(esp, eax);

loc_003C39B0: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, 0x003C39BAu); RECOMP_ABI_CALL(0x003C16C6u, sub_003C16C6); /* call 0x003C16C6 */

loc_003C39BA: ;
    goto loc_003C39E2;

loc_003C39BC: ;
    eax = eax & 0xFFFFFBFFu;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003C39D1; /* je: equal / zero */

loc_003C39C9: ;
    eax = eax | edx;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, edi);
    goto loc_003C39B0;

loc_003C39D1: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0x003C39D9u); RECOMP_ABI_CALL(0x003C1766u, sub_003C1766); /* call 0x003C1766 */

loc_003C39D9: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x003C39E2u); RECOMP_ABI_CALL(0x003C36D7u, sub_003C36D7); /* call 0x003C36D7 */

loc_003C39E2: ;
    POP32(esp, edi);

loc_003C39E3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C39E7
 * Original: 0x003C39E7 - 0x003C3AAD (198 bytes, 73 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C39E7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C39E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    SET_LO8(eax, MEM8(edi + 0x37));
    esi = ecx;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3A08; /* jne: not equal / not zero */

loc_003C39FF: ;
    ebx = MEM32(edi + 0x20);
    MEM8(ebp + -1) = 2;
    goto loc_003C3A0F;

loc_003C3A08: ;
    ebx = MEM32(edi + 0x24);
    MEM8(ebp + -1) = 1;

loc_003C3A0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    edx = MEM32(edi + 0x6C);
    if (TEST_Z(_fa, _fb)) goto loc_003C3A3E; /* je: equal / zero */

loc_003C3A16: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C3A25; /* jae: above or equal (unsigned >=) */

loc_003C3A1D: ;
    eax = edx + 0x5D9CF4;
    goto loc_003C3A43;

loc_003C3A25: ;
    eax = MEM32(edi + 0x3C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C3A33; /* jae: above or equal (unsigned >=) */

loc_003C3A2C: ;
    eax = MEM32(edi + 0x28);
    eax = eax - ecx;
    goto loc_003C3A41;

loc_003C3A33: ;
    ecx = ecx - eax;
    eax = ecx + edx + 0x5D9CF4;
    goto loc_003C3A43;

loc_003C3A3E: ;
    eax = MEM32(edi + 0x28);

loc_003C3A41: ;
    eax = eax + edx;

loc_003C3A43: ;
    ecx = MEM32(edi + 0x2C);
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C3A55; /* jbe: below or equal (unsigned <=) */

loc_003C3A50: ;
    ecx = 0x400;

loc_003C3A55: ;
    edx = edx + ecx;
    MEM32(edi + 0x6C) = edx;
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    edx = edi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esi + 0x14) = ecx;
    MEM8(esi + 0x1C) = LO8(eax);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFE91CA0u;
    PUSH32(esp, eax);
    eax = edi + 0x70;
    PUSH32(esp, eax);
    MEM8(esi) = 0x28;
    MEM8(esi + 1) = 0x41;
    MEM32(esi + 8) = 0x3C38EA;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C3A9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3A9D: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3AA8u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C3AA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C3AAD
 * Original: 0x003C3AAD - 0x003C3B15 (104 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3AAD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3AAD: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_003C3AFC; /* jl: less (signed <) */

loc_003C3ABD: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C3AFC; /* jne: not equal / not zero */

loc_003C3AC3: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3AF3; /* je: equal / zero */

loc_003C3AC8: ;
    MEM32(esi + 0x6C) = ecx;
    ecx = esi + 0xB8;
    edx = esi;
    PUSH32(esp, 0x003C3AD8u); RECOMP_ABI_CALL(0x003C39E7u, sub_003C39E7); /* call 0x003C39E7 */

loc_003C3AD8: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x2C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C3B11; /* jae: above or equal (unsigned >=) */

loc_003C3AE0: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 4;
    ecx = esi + 0xE8;
    edx = esi;
    PUSH32(esp, 0x003C3AF1u); RECOMP_ABI_CALL(0x003C39E7u, sub_003C39E7); /* call 0x003C39E7 */

loc_003C3AF1: ;
    goto loc_003C3B11;

loc_003C3AF3: ;
    ecx = esi;
    PUSH32(esp, 0x003C3AFAu); RECOMP_ABI_CALL(0x003C3861u, sub_003C3861); /* call 0x003C3861 */

loc_003C3AFA: ;
    goto loc_003C3B11;

loc_003C3AFC: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFD;
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x003C3B08u); RECOMP_ABI_CALL(0x003C1766u, sub_003C1766); /* call 0x003C1766 */

loc_003C3B08: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x003C3B11u); RECOMP_ABI_CALL(0x003C36D7u, sub_003C36D7); /* call 0x003C36D7 */

loc_003C3B11: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C3B15
 * Original: 0x003C3B15 - 0x003C3BBE (169 bytes, 44 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3B15(void)
{

loc_003C3B15: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x40;
    MEM32(edi) = 0x43425355;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 4) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(edi + 8) = eax;
    SET_LO8(eax, MEM8(esi + 0x37));
    SET_LO8(eax, LO8(eax) << 7);
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(edi + 0xC) = LO8(eax);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFF3CB00u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    MEM8(edi + 0xD) = 0;
    MEM8(edi + 0xE) = 0xA;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 1;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C3B5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3B5E: ;
    ecx = MEM32(esi + 0x24);
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 2;
    eax = esi + 0xB8;
    MEM8(eax) = 0x28;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    MEM8(esi + 0xB9) = 0x41;
    MEM32(esi + 0xC0) = 0x3C3AAD;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xD0) = edi;
    MEM32(esi + 0xCC) = 0x1F;
    MEM8(esi + 0xD4) = 1;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    ecx = MEM32(eax);
    PUSH32(esp, 0x003C3BBBu); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C3BBB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C3BBE
 * Original: 0x003C3BBE - 0x003C3DBE (512 bytes, 120 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3BBE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3BBE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax & 0xFFFFFDFFu;
    edi = edi & 0x7000;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003C3BEE; /* je: equal / zero */

loc_003C3BE0: ;
    eax = esi + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C3BEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3BEA: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xFE;

loc_003C3BEE: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C3BFC; /* je: equal / zero */

loc_003C3BF5: ;
    PUSH32(esp, 0xC000009Du);
    goto loc_003C3C5D;

loc_003C3BFC: ;
    edx = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C3C18; /* jge: greater or equal (signed >=) */

loc_003C3C07: ;
    eax = eax & 0xFFFF8FFFu;
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x003C3C16u); RECOMP_ABI_CALL(0x003C2DBFu, sub_003C2DBF); /* call 0x003C2DBF */

loc_003C3C16: ;
    goto loc_003C3BF5;

loc_003C3C18: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3CE7; /* je: equal / zero */

loc_003C3C24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3C66; /* je: equal / zero */

loc_003C3C2C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3DB8; /* jne: not equal / not zero */

loc_003C3C38: ;
    eax = eax & 0xFFFFBFFFu;
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, MEM8(esi + 0x36));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x36) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_003C3C5A; /* je: equal / zero */

loc_003C3C4E: ;
    ecx = esi;
    PUSH32(esp, 0x003C3C55u); RECOMP_ABI_CALL(0x003C3B15u, sub_003C3B15); /* call 0x003C3B15 */

loc_003C3C55: ;
    goto loc_003C3DB8;

loc_003C3C5A: ;
    PUSH32(esp, MEM32(esi + 0x6C));

loc_003C3C5D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x003C3C61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3C61: ;
    goto loc_003C3DB8;

loc_003C3C66: ;
    eax = eax & 0xFFFFDFFFu;
    eax = eax | 0x4000;
    edi = esi + 0xB8;
    MEM32(esi + 0xC) = eax;
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x3C3BBE;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = ecx;
    MEM32(esi + 0xD0) = ecx;
    MEM32(esi + 0xCC) = ecx;
    MEM8(esi + 0xD4) = 1;
    MEM8(esi + 0xD5) = 0;
    MEM8(esi + 0xD6) = 0;
    MEM8(esi + 0xE0) = 0x21;
    MEM8(esi + 0xE1) = 0xFF;
    MEM16(esi + 0xE2) = LO16(ecx);
    SET_LO16(eax, ZX8(MEM8(ebx + 4)));
    MEM16(esi + 0xE4) = LO16(eax);
    MEM16(esi + 0xE6) = LO16(ecx);
    goto loc_003C3D8D;

loc_003C3CE7: ;
    eax = eax & 0xFFFFEFFFu;
    eax = eax | 0x2000;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 0x24);
    edi = esi + 0xB8;
    MEM8(edi) = 0x18;
    MEM8(esi + 0xB9) = 5;
    MEM32(esi + 0xC0) = ecx;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = 4;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C3D25u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C3D25: ;
    eax = 0; /* xor self */
    MEM8(edi) = 0x30;
    MEM8(esi + 0xB9) = 0x40;
    MEM32(esi + 0xC0) = 0x3C3BBE;
    MEM32(esi + 0xC4) = esi;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM8(esi + 0xD4) = LO8(eax);
    MEM8(esi + 0xD5) = LO8(eax);
    MEM8(esi + 0xD6) = LO8(eax);
    MEM8(esi + 0xE0) = 2;
    MEM8(esi + 0xE1) = 1;
    MEM16(esi + 0xE2) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(ebx + 6)));
    MEM16(esi + 0xE4) = LO16(ecx);
    MEM16(esi + 0xE6) = LO16(eax);

loc_003C3D8D: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 3;
    edx = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = 0xFFF0BDC0u;
    PUSH32(esp, eax);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C3DACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3DAC: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) | 2;
    ecx = MEM32(ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C3DB8u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C3DB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C3DBE
 * Original: 0x003C3DBE - 0x003C3DEC (46 bytes, 17 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3DBE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C3DBE: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C3DC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3DC8: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 6 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(_fa, _fb)) goto loc_003C3DDB; /* je: equal / zero */

loc_003C3DD0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC000009Du);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x003C3DD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3DD9: ;
    goto loc_003C3DE2;

loc_003C3DDB: ;
    ecx = esi;
    PUSH32(esp, 0x003C3DE2u); RECOMP_ABI_CALL(0x003C3B15u, sub_003C3B15); /* call 0x003C3B15 */

loc_003C3DE2: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6CEC)); return; /* indirect tail jmp */

}

/**
 * sub_003C3DEC
 * Original: 0x003C3DEC - 0x003C3DFF (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3DEC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3DEC: ;
    eax = MEM32(0x5DCFC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C3DFE; /* je: equal / zero */

loc_003C3DF5: ;
    ecx = MEM32(eax + 0x18);
    MEM32(0x5DCFC8) = ecx;

loc_003C3DFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C3DFF
 * Original: 0x003C3DFF - 0x003C3F73 (372 bytes, 133 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C3DFF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3DFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edx;
    MEM32(ebp + -12) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C3E16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3E16: ;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3E1Eu); RECOMP_ABI_CALL(0x003C3DECu, sub_003C3DEC); /* call 0x003C3DEC */

loc_003C3E1E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C3E30; /* jne: not equal / not zero */

loc_003C3E24: ;
    MEM32(ebp + -8) = 0x80000100u;
    goto loc_003C3F5E;

loc_003C3E30: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esi;
    eax = eax - MEM32(0x5DCFC0);
    MEM32(esi + 0x14) = eax;
    SET_LO8(eax, MEM8(ebx + 0x16));
    MEM8(esi + 0x11) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 0x17));
    MEM8(esi + 0x13) = LO8(eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x11));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x1C));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3E69u); RECOMP_ABI_CALL(0x003C1CC3u, sub_003C1CC3); /* call 0x003C1CC3 */

loc_003C3E69: ;
    MEM16(esi + 0x22) = LO16(eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x14));
    eax = eax ^ MEM32(esi);
    eax = eax & 0x7F;
    MEM32(esi) = MEM32(esi) ^ eax;
    eax = ZX8(MEM8(ebx + 0x15));
    ecx = MEM32(esi);
    eax = eax << 7;
    eax = eax ^ ecx;
    eax = eax & 0x780;
    eax = eax ^ ecx;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 0 (8-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003C3E9C; /* jne: not equal / not zero */

loc_003C3E93: ;
    eax = eax & 0xFFFFE7FFu;
    MEM32(esi) = eax;
    goto loc_003C3EB6;

loc_003C3E9C: ;
    _fa = (uint32_t)(MEM8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x15), 0x80 (8-bit) */
    PUSH32(esp, 0);
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0xB;
    ecx = ecx ^ eax;
    ecx = ecx & 0x1800;
    ecx = ecx ^ eax;
    MEM32(esi) = ecx;

loc_003C3EB6: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x1E));
    ecx = ecx & 0xFFFF5FFFu;
    eax = eax & 1;
    eax = eax | 2;
    eax = eax << 0xD;
    eax = eax | ecx;
    MEM32(esi) = eax;
    ecx = ZX16(MEM16(ebx + 0x1C));
    ecx = ecx << 0x10;
    ecx = ecx ^ eax;
    ecx = ecx & 0x7FF0000;
    ecx = ecx ^ eax;
    eax = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3F1C; /* je: equal / zero */

loc_003C3EF5: ;
    eax = ecx;
    edi = 0; /* xor self */
    ecx = ecx >> 7;
    ecx = ecx & 0xF;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x1800;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3F11; /* jne: not equal / not zero */

loc_003C3F0E: ;
    edi = edi << 0x10;

loc_003C3F11: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C3F1C; /* je: equal / zero */

loc_003C3F15: ;
    MEM32(esi + 8) = 2;

loc_003C3F1C: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003C3F37; /* je: equal / zero */

loc_003C3F24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3F37; /* je: equal / zero */

loc_003C3F28: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3F32u); RECOMP_ABI_CALL(0x003C53D7u, sub_003C53D7); /* call 0x003C53D7 */

loc_003C3F32: ;
    MEM32(ebp + -8) = eax;
    goto loc_003C3F41;

loc_003C3F37: ;
    ecx = MEM32(ebp + -12);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C3F41u); RECOMP_ABI_CALL(0x003C52BDu, sub_003C52BD); /* call 0x003C52BD */

loc_003C3F41: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C3F4C; /* jl: less (signed <) */

loc_003C3F47: ;
    MEM32(ebx + 0x10) = esi;
    goto loc_003C3F5E;

loc_003C3F4C: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    eax = MEM32(0x5DCFC8);
    MEM32(esi + 0x18) = eax;
    MEM32(0x5DCFC8) = esi;

loc_003C3F5E: ;
    esi = MEM32(ebp + -8);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM32(ebx + 4) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C3F6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C3F6D: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C3F73
 * Original: 0x003C3F73 - 0x003C3F94 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C3F73(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3F73: ;
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + 8);
    eax = eax & 1;
    MEM32(edx + 0x14) = eax;
    _fa = (uint32_t)(MEM8(ecx + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x26), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3F8B; /* jne: not equal / not zero */

loc_003C3F85: ;
    _fa = (uint32_t)(MEM8(ecx + 0x27)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x27), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3F91; /* je: equal / zero */

loc_003C3F8B: ;
    eax = eax | 2;
    MEM32(edx + 0x14) = eax;

loc_003C3F91: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003C3F94
 * Original: 0x003C3F94 - 0x003C3FC2 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C3F94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3F94: ;
    eax = MEM32(edx + 0x10);
    edx = MEM32(edx + 0x14);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C3FA3; /* je: equal / zero */

loc_003C3F9F: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0xFFFFFFFDu;

loc_003C3FA3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C3FAC; /* je: equal / zero */

loc_003C3FA8: ;
    MEM32(eax + 8) = MEM32(eax + 8) | 2;

loc_003C3FAC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C3FBF; /* jne: not equal / not zero */

loc_003C3FB1: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C3FBF; /* je: equal / zero */

loc_003C3FB9: ;
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(eax + 8) = ecx;

loc_003C3FBF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003C3FC2
 * Original: 0x003C3FC2 - 0x003C3FFB (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3FC2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3FC2: ;
    eax = MEM32(ecx + 0x41C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3FDC; /* je: equal / zero */

loc_003C3FCF: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3FCF; /* jne: not equal / not zero */

loc_003C3FD8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C3FE7; /* jne: not equal / not zero */

loc_003C3FDC: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x41C) = eax;
    goto loc_003C3FED;

loc_003C3FE7: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_003C3FED: ;
    eax = ecx + 0x420;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3FF9; /* jne: not equal / not zero */

loc_003C3FF7: ;
    MEM32(eax) = esi;

loc_003C3FF9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C3FFB
 * Original: 0x003C3FFB - 0x003C4034 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3FFB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C3FFB: ;
    eax = MEM32(ecx + 0x424);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4015; /* je: equal / zero */

loc_003C4008: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C4008; /* jne: not equal / not zero */

loc_003C4011: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C4020; /* jne: not equal / not zero */

loc_003C4015: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x424) = eax;
    goto loc_003C4026;

loc_003C4020: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_003C4026: ;
    eax = ecx + 0x428;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C4032; /* jne: not equal / not zero */

loc_003C4030: ;
    MEM32(eax) = esi;

loc_003C4032: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C4034
 * Original: 0x003C4034 - 0x003C4063 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4034(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4034: ;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C404B; /* je: equal / zero */

loc_003C403E: ;
    esi = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C403E; /* jne: not equal / not zero */

loc_003C4047: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C4053; /* jne: not equal / not zero */

loc_003C404B: ;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x28) = eax;
    goto loc_003C4059;

loc_003C4053: ;
    eax = MEM32(eax + 0x24);
    MEM32(esi + 0x24) = eax;

loc_003C4059: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C4061; /* jne: not equal / not zero */

loc_003C405E: ;
    MEM32(ecx + 0x2C) = esi;

loc_003C4061: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C4063
 * Original: 0x003C4063 - 0x003C40D9 (118 bytes, 46 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4063(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4063: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = edx;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x26), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C40D6; /* je: equal / zero */

loc_003C406D: ;
    eax = ZX8(MEM8(edi + 0x11));
    eax = eax - 0;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if ((eax == 0)) goto loc_003C4095; /* je: equal / zero */

loc_003C4078: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C4087; /* je: equal / zero */

loc_003C407C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C40D4; /* jne: not equal / not zero */

loc_003C407F: ;
    ebx = edi + 0x28;
    ebp = edi + 0x2C;
    goto loc_003C40A1;

loc_003C4087: ;
    ebx = ecx + 0x424;
    ebp = ecx + 0x428;
    goto loc_003C40A1;

loc_003C4095: ;
    ebx = ecx + 0x41C;
    ebp = ecx + 0x420;

loc_003C40A1: ;
    PUSH32(esp, esi);

loc_003C40A2: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C40C0; /* jne: not equal / not zero */

loc_003C40A9: ;
    eax = MEM32(esi + 0x24);
    MEM32(ebx) = eax;
    MEM32(esi + 4) = 0xC000000Fu;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C40BEu); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C40BE: ;
    goto loc_003C40C7;

loc_003C40C0: ;
    MEM32(esp + 0x10) = esi;
    ebx = esi + 0x24;

loc_003C40C7: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C40A2; /* jne: not equal / not zero */

loc_003C40CC: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    POP32(esp, esi);

loc_003C40D4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003C40D6: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C40D9
 * Original: 0x003C40D9 - 0x003C4116 (61 bytes, 24 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C40D9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C40D9: ;
    PUSH32(esp, esi);
    esi = edx;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003C4113; /* jne: not equal / not zero */

loc_003C40E8: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    PUSH32(esp, 0x003C40F1u); RECOMP_ABI_CALL(0x003C57C2u, sub_003C57C2); /* call 0x003C57C2 */

loc_003C40F1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(edi + 0x438)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x438), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4102; /* je: equal / zero */

loc_003C40FE: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x40;

loc_003C4102: ;
    ecx = MEM32(edi);
    PUSH32(esp, 4);
    POP32(esp, eax);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(edi);
    MEM32(ecx + 0x10) = eax;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x20;

loc_003C4113: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C4116
 * Original: 0x003C4116 - 0x003C4151 (59 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4116(void)
{

loc_003C4116: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + -100);
    esi = esi + 0xFFFFFB40u;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    SET_LO8(ecx, MEM8(eax + 0x5DD00C));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D44); PUSH32(esp, 0x003C4133u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4133: ;
    ecx = MEM32(esi);
    MEM32(ecx + 0x14) = 0x80000033u;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = 2;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C414Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C414D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C4151
 * Original: 0x003C4151 - 0x003C4208 (183 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4151(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4151: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4166; /* je: equal / zero */

loc_003C415C: ;
    eax = 0x40020000;
    goto loc_003C4204;

loc_003C4166: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C416Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C416E: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 0x10 (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (TEST_NZ(_fa, _fb)) goto loc_003C41F3; /* jne: not equal / not zero */

loc_003C4179: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C41D3; /* je: equal / zero */

loc_003C4181: ;
    eax = ZX8(MEM8(edi + 0x11));
    eax = eax - 0;
    if ((eax == 0)) goto loc_003C41B0; /* je: equal / zero */

loc_003C418A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C41A3; /* je: equal / zero */

loc_003C418E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C4198; /* je: equal / zero */

loc_003C4191: ;
    esi = 0x80000600u;
    goto loc_003C41F8;

loc_003C4198: ;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0x003C41A1u); RECOMP_ABI_CALL(0x003C4034u, sub_003C4034); /* call 0x003C4034 */

loc_003C41A1: ;
    goto loc_003C41BB;

loc_003C41A3: ;
    ecx = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x003C41AEu); RECOMP_ABI_CALL(0x003C3FFBu, sub_003C3FFB); /* call 0x003C3FFB */

loc_003C41AE: ;
    goto loc_003C41BB;

loc_003C41B0: ;
    ecx = MEM32(esp + 0x10);
    edx = esi;
    PUSH32(esp, 0x003C41BBu); RECOMP_ABI_CALL(0x003C3FC2u, sub_003C3FC2); /* call 0x003C3FC2 */

loc_003C41BB: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x22) = MEM8(esi + 0x22) | 1;
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0xC000000Fu;
    PUSH32(esp, 0x003C41CFu); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C41CF: ;
    esi = 0; /* xor self */
    goto loc_003C41F8;

loc_003C41D3: ;
    ecx = MEM32(esp + 0x10);
    SET_LO16(eax, LO16(eax) | 1);
    MEM16(esi + 0x22) = LO16(eax);
    eax = ecx + 0x42C;
    edx = MEM32(eax);
    MEM32(esi + 0x24) = edx;
    edx = edi;
    MEM32(eax) = esi;
    PUSH32(esp, 0x003C41F3u); RECOMP_ABI_CALL(0x003C40D9u, sub_003C40D9); /* call 0x003C40D9 */

loc_003C41F3: ;
    esi = 0x40020000;

loc_003C41F8: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C4200u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4200: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);

loc_003C4204: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4208
 * Original: 0x003C4208 - 0x003C426F (103 bytes, 40 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4208(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C4208: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebp = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C4219u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4219: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 0x10;
    edx = esi;
    ecx = ebp;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x003C4228u); RECOMP_ABI_CALL(0x003C4063u, sub_003C4063); /* call 0x003C4063 */

loc_003C4228: ;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C423E; /* je: equal / zero */

loc_003C422F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C423E; /* je: equal / zero */

loc_003C4233: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x003C423Cu); RECOMP_ABI_CALL(0x003C55B3u, sub_003C55B3); /* call 0x003C55B3 */

loc_003C423C: ;
    goto loc_003C4247;

loc_003C423E: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x003C4247u); RECOMP_ABI_CALL(0x003C52FAu, sub_003C52FA); /* call 0x003C52FA */

loc_003C4247: ;
    edx = esi;
    ecx = ebp;
    PUSH32(esp, 0x003C4250u); RECOMP_ABI_CALL(0x003C40D9u, sub_003C40D9); /* call 0x003C40D9 */

loc_003C4250: ;
    eax = ebp + 0x434;
    ecx = MEM32(eax);
    MEM32(edi + 0x14) = ecx;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C4265u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4265: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C426F
 * Original: 0x003C426F - 0x003C42C2 (83 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C426F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C426F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebp = ecx;
    ebx = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C4283u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4283: ;
    edx = edi;
    ecx = ebp;
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0x003C4290u); RECOMP_ABI_CALL(0x003C4063u, sub_003C4063); /* call 0x003C4063 */

loc_003C4290: ;
    _fa = (uint32_t)(MEM8(edi + 0x27)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x27), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C42B0; /* je: equal / zero */

loc_003C4295: ;
    eax = ebp + 0x430;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    edx = edi;
    ecx = ebp;
    MEM32(eax) = esi;
    PUSH32(esp, 0x003C42ABu); RECOMP_ABI_CALL(0x003C40D9u, sub_003C40D9); /* call 0x003C40D9 */

loc_003C42AB: ;
    ebx = 0x40000000;

loc_003C42B0: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C42BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C42BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C42C2
 * Original: 0x003C42C2 - 0x003C43DA (280 bytes, 98 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C42C2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C42C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(edi + 1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C435A; /* jg: greater (signed >) */

loc_003C42D7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003C434E; /* je: equal / zero */

loc_003C42D9: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    eax = eax - ecx;
    if ((eax == 0)) goto loc_003C4342; /* je: equal / zero */

loc_003C42E0: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_003C4336; /* je: equal / zero */

loc_003C42E4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C4327; /* je: equal / zero */

loc_003C42E7: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_003C4315; /* je: equal / zero */

loc_003C42EB: ;
    eax = eax - ecx;
    if ((eax == 0)) goto loc_003C4306; /* je: equal / zero */

loc_003C42EF: ;
    eax = eax - ecx;
    if ((eax != 0)) goto loc_003C43A8; /* jne: not equal / not zero */

loc_003C42F7: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4301u); RECOMP_ABI_CALL(0x003C61A2u, sub_003C61A2); /* call 0x003C61A2 */

loc_003C4301: ;
    goto loc_003C43B9;

loc_003C4306: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4310u); RECOMP_ABI_CALL(0x003C5F28u, sub_003C5F28); /* call 0x003C5F28 */

loc_003C4310: ;
    goto loc_003C43B9;

loc_003C4315: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C431Du); RECOMP_ABI_CALL(0x003C57C2u, sub_003C57C2); /* call 0x003C57C2 */

loc_003C431D: ;
    MEM32(edi + 0x14) = eax;
    esi = 0; /* xor self */
    goto loc_003C43BB;

loc_003C4327: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4331u); RECOMP_ABI_CALL(0x003C3F94u, sub_003C3F94); /* call 0x003C3F94 */

loc_003C4331: ;
    goto loc_003C43B9;

loc_003C4336: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4340u); RECOMP_ABI_CALL(0x003C3F73u, sub_003C3F73); /* call 0x003C3F73 */

loc_003C4340: ;
    goto loc_003C43B9;

loc_003C4342: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C434Cu); RECOMP_ABI_CALL(0x003C3DFFu, sub_003C3DFF); /* call 0x003C3DFF */

loc_003C434C: ;
    goto loc_003C43B9;

loc_003C434E: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4358u); RECOMP_ABI_CALL(0x003C6309u, sub_003C6309); /* call 0x003C6309 */

loc_003C4358: ;
    goto loc_003C43B9;

loc_003C435A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C43AF; /* je: equal / zero */

loc_003C435F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C43A8; /* jle: less or equal (signed <=) */

loc_003C4364: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x41 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C439C; /* jle: less or equal (signed <=) */

loc_003C4369: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x43 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4390; /* je: equal / zero */

loc_003C436E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4384; /* je: equal / zero */

loc_003C4373: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C43A8; /* jne: not equal / not zero */

loc_003C4378: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4382u); RECOMP_ABI_CALL(0x003C60D5u, sub_003C60D5); /* call 0x003C60D5 */

loc_003C4382: ;
    goto loc_003C43B9;

loc_003C4384: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C438Eu); RECOMP_ABI_CALL(0x003C426Fu, sub_003C426F); /* call 0x003C426F */

loc_003C438E: ;
    goto loc_003C43B9;

loc_003C4390: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C439Au); RECOMP_ABI_CALL(0x003C4208u, sub_003C4208); /* call 0x003C4208 */

loc_003C439A: ;
    goto loc_003C43B9;

loc_003C439C: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C43A6u); RECOMP_ABI_CALL(0x003C6AD2u, sub_003C6AD2); /* call 0x003C6AD2 */

loc_003C43A6: ;
    goto loc_003C43B9;

loc_003C43A8: ;
    esi = 0x80000200u;
    goto loc_003C43BB;

loc_003C43AF: ;
    ecx = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C43B9u); RECOMP_ABI_CALL(0x003C6428u, sub_003C6428); /* call 0x003C6428 */

loc_003C43B9: ;
    esi = eax;

loc_003C43BB: ;
    eax = esi;
    eax = eax & 0xC0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C43D2; /* je: equal / zero */

loc_003C43C9: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C43D2u); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C43D2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C43DA
 * Original: 0x003C43DA - 0x003C4406 (44 bytes, 12 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C43DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C43DA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C4402; /* jge: greater or equal (signed >=) */

loc_003C43E5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCEF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C43F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C43F0: ;
    PUSH32(esp, MEM32(0x5DCEE8));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x003C4402u); RECOMP_ABI_CALL(0x003C2BCCu, sub_003C2BCC); /* call 0x003C2BCC */

loc_003C4402: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4406
 * Original: 0x003C4406 - 0x003C442A (36 bytes, 8 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4406(void)
{

loc_003C4406: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCEF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C4411u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4411: ;
    PUSH32(esp, MEM32(0x5DCEE8));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(eax + 4));
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x003C4427u); RECOMP_ABI_CALL(0x003C2E98u, sub_003C2E98); /* call 0x003C2E98 */

loc_003C4427: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C442A
 * Original: 0x003C442A - 0x003C4487 (93 bytes, 29 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C442A(void)
{

loc_003C442A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003C4437u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4437: ;
    SET_LO16(edi, ZX8(MEM8(eax + 3)));
    edx = 0; /* xor self */
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x3C4D0E;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x23;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = 1;
    MEM16(eax + 0x34) = LO16(edi);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, 0x003C4482u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4482: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C4487
 * Original: 0x003C4487 - 0x003C44BD (54 bytes, 19 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4487(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4487: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    if ((LO8(eax) == 0)) goto loc_003C44A6; /* je: equal / zero */

loc_003C4495: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C44A6; /* jne: not equal / not zero */

loc_003C449C: ;
    PUSH32(esp, 0x003C44A1u); RECOMP_ABI_CALL(0x003C2B4Eu, sub_003C2B4E); /* call 0x003C2B4E */

loc_003C44A1: ;
    MEM8(esi) = MEM8(esi) & 0xEF;
    goto loc_003C44B9;

loc_003C44A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C44B9; /* jne: not equal / not zero */

loc_003C44AA: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C44B9; /* je: equal / zero */

loc_003C44B1: ;
    PUSH32(esp, 0x003C44B6u); RECOMP_ABI_CALL(0x003C2B47u, sub_003C2B47); /* call 0x003C2B47 */

loc_003C44B6: ;
    MEM8(esi) = MEM8(esi) | 0x10;

loc_003C44B9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C44BD
 * Original: 0x003C44BD - 0x003C452E (113 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C44BD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C44BD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003C44C9u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C44C9: ;
    ecx = MEM32(0x5DCF34);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_003C451F; /* je: equal / zero */

loc_003C44D4: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C450B; /* je: equal / zero */

loc_003C44D7: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C44F7; /* je: equal / zero */

loc_003C44DA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C452A; /* jne: not equal / not zero */

loc_003C44DD: ;
    eax = MEM32(0x5DCF38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C452A; /* je: equal / zero */

loc_003C44E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C44EEu); RECOMP_ABI_CALL(0x003C4487u, sub_003C4487); /* call 0x003C4487 */

loc_003C44EE: ;
    MEM32(0x5DCF38) = MEM32(0x5DCF38) & 0;
    goto loc_003C452A;

loc_003C44F7: ;
    PUSH32(esp, MEM32(0x5DCEE8));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x003C4509u); RECOMP_ABI_CALL(0x003C2E98u, sub_003C2E98); /* call 0x003C2E98 */

loc_003C4509: ;
    goto loc_003C452A;

loc_003C450B: ;
    PUSH32(esp, MEM32(0x5DCEE8));
    ecx = esi;
    PUSH32(esp, 0x80000600u);
    PUSH32(esp, 0x003C451Du); RECOMP_ABI_CALL(0x003C2BCCu, sub_003C2BCC); /* call 0x003C2BCC */

loc_003C451D: ;
    goto loc_003C452A;

loc_003C451F: ;
    eax = eax + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C452Au); RECOMP_ABI_CALL(0x003C16C6u, sub_003C16C6); /* call 0x003C16C6 */

loc_003C452A: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C452E
 * Original: 0x003C452E - 0x003C4591 (99 bytes, 28 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C452E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C452E: ;
    _fa = (uint32_t)(MEM32(0x5DCF38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5DCF38), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x5DCEF0;
    if (CMP_EQ(_fa, _fb)) goto loc_003C4558; /* je: equal / zero */

loc_003C453D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C4544u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4544: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x5DCF38));
    PUSH32(esp, 0x003C4551u); RECOMP_ABI_CALL(0x003C4487u, sub_003C4487); /* call 0x003C4487 */

loc_003C4551: ;
    MEM32(0x5DCF38) = MEM32(0x5DCF38) & 0;

loc_003C4558: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C4567; /* jne: not equal / not zero */

loc_003C4560: ;
    eax = 0xFA0A1F00u;
    goto loc_003C4576;

loc_003C4567: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    eax = 0xFFF48E50u;
    if (CMP_EQ(_fa, _fb)) goto loc_003C4576; /* je: equal / zero */

loc_003C4571: ;
    eax = 0xFFB3B4C0u;

loc_003C4576: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCF18);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x5DCF34) = edx;
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C458Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C458D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C4591
 * Original: 0x003C4591 - 0x003C46DF (334 bytes, 117 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C4591(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4591: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C45A1u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C45A1: ;
    esi = eax;
    SET_LO16(eax, MEM16(esi + 0x3A));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4608; /* je: equal / zero */

loc_003C45AD: ;
    _fa = (uint32_t)(MEM32(0x5DCF34)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5DCF34), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C4600; /* jne: not equal / not zero */

loc_003C45B6: ;
    _fa = (uint32_t)(MEM32(0x5DCEE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5DCEE8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4600; /* je: equal / zero */

loc_003C45BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCEF0);
    edi = 0; /* xor self */
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C45CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C45CB: ;
    SET_LO16(eax, MEM16(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C45E3; /* je: equal / zero */

loc_003C45D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C45E3; /* jne: not equal / not zero */

loc_003C45D7: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C45E8; /* je: equal / zero */

loc_003C45DC: ;
    edi = 0x1000000;
    goto loc_003C45E8;

loc_003C45E3: ;
    edi = 0x80000600u;

loc_003C45E8: ;
    eax = MEM32(0x5DCEE8);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(0x5DCEE8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C45FDu); RECOMP_ABI_CALL(0x003C2BCCu, sub_003C2BCC); /* call 0x003C2BCC */

loc_003C45FD: ;
    edi = MEM32(ebp + 8);

loc_003C4600: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xEF;
    PUSH32(esp, 0x14);
    goto loc_003C467F;

loc_003C4608: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4659; /* je: equal / zero */

loc_003C460C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 3));
    MEM8(ebp + 8) = LO8(ecx);
    SET_LO8(eax, 1);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4639; /* je: equal / zero */

loc_003C461F: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C462E; /* je: equal / zero */

loc_003C4624: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C462Eu); RECOMP_ABI_CALL(0x003C2D48u, sub_003C2D48); /* call 0x003C2D48 */

loc_003C462E: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4634u); RECOMP_ABI_CALL(0x003C442Au, sub_003C442A); /* call 0x003C442A */

loc_003C4634: ;
    goto loc_003C46D8;

loc_003C4639: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4651; /* je: equal / zero */

loc_003C4640: ;
    PUSH32(esp, MEM32(ebp + 8));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    ecx = edi;
    MEM8(esi + 5) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4651u); RECOMP_ABI_CALL(0x003C2D48u, sub_003C2D48); /* call 0x003C2D48 */

loc_003C4651: ;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xFE;
    PUSH32(esp, 0x10);
    goto loc_003C467F;

loc_003C4659: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4665; /* je: equal / zero */

loc_003C465D: ;
    SET_LO16(eax, LO16(eax) & 0xFFFD);
    PUSH32(esp, 0x11);
    goto loc_003C467B;

loc_003C4665: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4671; /* je: equal / zero */

loc_003C4669: ;
    SET_LO16(eax, LO16(eax) & 0xFFFB);
    PUSH32(esp, 0x12);
    goto loc_003C467B;

loc_003C4671: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C46C9; /* je: equal / zero */

loc_003C4675: ;
    SET_LO16(eax, LO16(eax) & 0xFFF7);
    PUSH32(esp, 0x13);

loc_003C467B: ;
    MEM16(esi + 0x3A) = LO16(eax);

loc_003C467F: ;
    POP32(esp, ecx);
    MEM16(esi + 0x32) = LO16(ecx);
    SET_LO16(ecx, ZX8(MEM8(esi + 3)));
    eax = esi + 8;
    MEM16(esi + 0x34) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x3C4CDE;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 1;
    MEM16(esi + 0x36) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C46C7u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C46C7: ;
    goto loc_003C46D8;

loc_003C46C9: ;
    MEM16(esi + 0x3A) = MEM16(esi + 0x3A) & 0;
    PUSH32(esp, edi);
    esi = esi + 8;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C46D8u); RECOMP_ABI_CALL(0x003C4CDEu, sub_003C4CDE); /* call 0x003C4CDE */

loc_003C46D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C46DF
 * Original: 0x003C46DF - 0x003C4742 (99 bytes, 30 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C46DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C46DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x003C46ECu); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C46EC: ;
    PUSH32(esp, 0);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x003C46F7u); RECOMP_ABI_CALL(0x003C16DDu, sub_003C16DD); /* call 0x003C16DD */

loc_003C46F7: ;
    MEM8(esi) = MEM8(esi) & 0xFE;
    MEM16(0x5DCF42) = MEM16(0x5DCF42) - 1;
    _fa = (uint32_t)(MEM16(0x5DCF42)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4731; /* je: equal / zero */

loc_003C4706: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C470Eu); RECOMP_ABI_CALL(0x003C4487u, sub_003C4487); /* call 0x003C4487 */

loc_003C470E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5DCF38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x5DCF38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C4728; /* jne: not equal / not zero */

loc_003C4716: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCEF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C4721u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4721: ;
    MEM32(0x5DCF38) = MEM32(0x5DCF38) & 0;

loc_003C4728: ;
    ecx = edi;
    PUSH32(esp, 0x003C472Fu); RECOMP_ABI_CALL(0x003C2BD1u, sub_003C2BD1); /* call 0x003C2BD1 */

loc_003C472F: ;
    goto loc_003C473D;

loc_003C4731: ;
    PUSH32(esp, 0x80000100u);
    ecx = edi;
    PUSH32(esp, 0x003C473Du); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C473D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4742
 * Original: 0x003C4742 - 0x003C4829 (231 bytes, 60 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C4742(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4742: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4751u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4751: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, 4);
    SET_LO8(edx, 3);
    POP32(esp, esi);
    MEM32(ebp + -4) = 1;
    edi = 0x3C43DA;
    if (CMP_EQ(_fa, _fb)) goto loc_003C4812; /* je: equal / zero */

loc_003C476C: ;
    SET_LO8(ebx, MEM8(ebp + 0xC));
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C4812; /* jb: below (unsigned <) */

loc_003C4778: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ecx) (8-bit) */
    eax = MEM32(ebp + 0x10);
    MEM32(0x5DCEE8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C4796; /* je: equal / zero */

loc_003C4785: ;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = edx;
    edi = 0x3C4406;
    MEM32(ebp + -4) = 2;

loc_003C4796: ;
    PUSH32(esp, MEM32(ebp + -4));
    SET_LO16(eax, ZX8(LO8(ebx)));
    MEM32(0x5DCEC0) = edi;
    edi = MEM32(ebp + 8);
    MEM8(0x5DCEB8) = 0x30;
    MEM8(0x5DCEB9) = 0x40;
    MEM32(0x5DCEC4) = edi;
    MEM32(0x5DCEC8) = ecx;
    MEM32(0x5DCED0) = ecx;
    MEM32(0x5DCECC) = ecx;
    MEM8(0x5DCED4) = LO8(ecx);
    MEM8(0x5DCED5) = LO8(ecx);
    MEM8(0x5DCED6) = LO8(ecx);
    MEM8(0x5DCEE0) = 0x23;
    MEM8(0x5DCEE1) = LO8(edx);
    MEM16(0x5DCEE2) = LO16(esi);
    MEM16(0x5DCEE4) = LO16(eax);
    MEM16(0x5DCEE6) = LO16(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4804u); RECOMP_ABI_CALL(0x003C452Eu, sub_003C452E); /* call 0x003C452E */

loc_003C4804: ;
    PUSH32(esp, 0x5DCEB8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4810u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4810: ;
    goto loc_003C4822;

loc_003C4812: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x80000300u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4822u); RECOMP_ABI_CALL(0x003C2BCCu, sub_003C2BCC); /* call 0x003C2BCC */

loc_003C4822: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C4829
 * Original: 0x003C4829 - 0x003C484B (34 bytes, 9 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4829(void)
{

loc_003C4829: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM8(eax) = 0x1C;
    MEM8(eax + 1) = 0xC3;
    MEM32(eax + 8) = 0x3C46DF;
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, 0x003C4848u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4848: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C484B
 * Original: 0x003C484B - 0x003C487D (50 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C484B(void)
{

loc_003C484B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    PUSH32(esp, 0x003C4857u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4857: ;
    edx = MEM32(eax + 0x3C);
    ecx = eax + 8;
    MEM8(ecx) = 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 9) = 0x43;
    MEM32(eax + 0x10) = 0x3C4829;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, 0x003C4879u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4879: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C487D
 * Original: 0x003C487D - 0x003C490E (145 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C487D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C487D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x003C488Au); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C488A: ;
    edi = eax;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C489A; /* je: equal / zero */

loc_003C4892: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C4898u); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4898: ;
    goto loc_003C4909;

loc_003C489A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    ecx = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_003C48B2; /* jge: greater or equal (signed >=) */

loc_003C48A7: ;
    SET_LO8(eax, LO8(eax) | 8);
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0x003C48B0u); RECOMP_ABI_CALL(0x003C2DBFu, sub_003C2DBF); /* call 0x003C2DBF */

loc_003C48B0: ;
    goto loc_003C4908;

loc_003C48B2: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    MEM8(esi) = 0x18;
    MEM8(esi + 1) = 5;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, 0x003C48D0u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C48D0: ;
    MEM8(esi) = 0x28;
    MEM8(esi + 1) = 0x41;
    MEM32(esi + 8) = 0x3C4A14;
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(edi + 0x3C);
    MEM32(esi + 0x10) = eax;
    eax = edi + 0x38;
    MEM32(esi + 0x18) = eax;
    eax = ZX8(MEM8(edi + 7));
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1D) = 1;
    MEM8(esi + 0x1E) = 0;
    PUSH32(esp, 0x003C4908u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4908: ;
    POP32(esp, esi);

loc_003C4909: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C490E
 * Original: 0x003C490E - 0x003C4969 (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C490E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C490E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003C491Au); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C491A: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4929; /* je: equal / zero */

loc_003C4921: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C4927u); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4927: ;
    goto loc_003C4965;

loc_003C4929: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C493F; /* jl: less (signed <) */

loc_003C4933: ;
    PUSH32(esp, esi);
    MEM8(eax + 6) = 0;
    PUSH32(esp, 0x003C493Du); RECOMP_ABI_CALL(0x003C4591u, sub_003C4591); /* call 0x003C4591 */

loc_003C493D: ;
    goto loc_003C4965;

loc_003C493F: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C4956; /* jbe: below or equal (unsigned <=) */

loc_003C4948: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(eax) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x003C4954u); RECOMP_ABI_CALL(0x003C2DBFu, sub_003C2DBF); /* call 0x003C2DBF */

loc_003C4954: ;
    goto loc_003C4965;

loc_003C4956: ;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edx + 0x14) = 4;
    PUSH32(esp, 0x003C4965u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4965: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4969
 * Original: 0x003C4969 - 0x003C49C4 (91 bytes, 31 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4969(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4969: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003C4975u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4975: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4984; /* je: equal / zero */

loc_003C497C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C4982u); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4982: ;
    goto loc_003C49C0;

loc_003C4984: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C49B6; /* jge: greater or equal (signed >=) */

loc_003C498E: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C49A5; /* jbe: below or equal (unsigned <=) */

loc_003C4997: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(eax) = LO8(ecx);
    ecx = esi;
    PUSH32(esp, 0x003C49A3u); RECOMP_ABI_CALL(0x003C2DBFu, sub_003C2DBF); /* call 0x003C2DBF */

loc_003C49A3: ;
    goto loc_003C49C0;

loc_003C49A5: ;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(edx + 0x14) = 4;
    PUSH32(esp, 0x003C49B4u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C49B4: ;
    goto loc_003C49C0;

loc_003C49B6: ;
    PUSH32(esp, esi);
    MEM8(eax + 6) = 0;
    PUSH32(esp, 0x003C49C0u); RECOMP_ABI_CALL(0x003C4C0Bu, sub_003C4C0B); /* call 0x003C4C0B */

loc_003C49C0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C49C4
 * Original: 0x003C49C4 - 0x003C4A14 (80 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C49C4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C49C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C49D2u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C49D2: ;
    esi = eax;
    MEM8(esi) = MEM8(esi) | 2;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + -4) = LO8(ebx);

loc_003C49DD: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C49F4; /* je: equal / zero */

loc_003C49E2: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C49EDu); RECOMP_ABI_CALL(0x003C2D48u, sub_003C2D48); /* call 0x003C2D48 */

loc_003C49ED: ;
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, ~LO8(eax));
    MEM8(esi + 5) = MEM8(esi + 5) & LO8(eax);

loc_003C49F4: ;
    ebx = ebx << 1;
    MEM8(ebp + -4) = MEM8(ebp + -4) + 1;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebp + -4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C49DD; /* jbe: below or equal (unsigned <=) */

loc_003C4A01: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 8 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003C4A10; /* je: equal / zero */

loc_003C4A08: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4A10u); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4A10: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C4A14
 * Original: 0x003C4A14 - 0x003C4AE0 (204 bytes, 68 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4A14(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4A14: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x003C4A21u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4A21: ;
    esi = eax;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4A35; /* je: equal / zero */

loc_003C4A2A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C4A30u); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4A30: ;
    goto loc_003C4ADB;

loc_003C4A35: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C4A7F; /* jl: less (signed <) */

loc_003C4A41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5DCF38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x5DCF38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C4A5A; /* jne: not equal / not zero */

loc_003C4A49: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCEF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C4A54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4A54: ;
    MEM32(0x5DCF38) = ebx;

loc_003C4A5A: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C4A62u); RECOMP_ABI_CALL(0x003C4487u, sub_003C4487); /* call 0x003C4487 */

loc_003C4A62: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 2));
    SET_LO8(eax, 1);
    PUSH32(esp, edi);
    MEM8(esi + 6) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & MEM8(esi + 0x38));
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x003C4A7Du); RECOMP_ABI_CALL(0x003C4C0Bu, sub_003C4C0B); /* call 0x003C4C0B */

loc_003C4A7D: ;
    goto loc_003C4ADA;

loc_003C4A7F: ;
    MEM8(esi + 6) = MEM8(esi + 6) + 1;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C4A96; /* jbe: below or equal (unsigned <=) */

loc_003C4A88: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(esi) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x003C4A94u); RECOMP_ABI_CALL(0x003C2DBFu, sub_003C2DBF); /* call 0x003C2DBF */

loc_003C4A94: ;
    goto loc_003C4ADA;

loc_003C4A96: ;
    MEM8(eax) = 0x30;
    MEM8(eax + 1) = 0x40;
    MEM32(eax + 8) = 0x3C487D;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM8(eax + 0x1C) = LO8(ebx);
    MEM8(eax + 0x1D) = LO8(ebx);
    MEM8(eax + 0x1E) = LO8(ebx);
    MEM8(eax + 0x28) = 2;
    MEM8(eax + 0x29) = 1;
    MEM16(eax + 0x2A) = LO16(ebx);
    SET_LO16(ecx, ZX8(MEM8(esi + 1)));
    MEM16(eax + 0x2C) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM16(eax + 0x2E) = LO16(ebx);
    PUSH32(esp, 0x003C4ADAu); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4ADA: ;
    POP32(esp, ebx);

loc_003C4ADB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4AE0
 * Original: 0x003C4AE0 - 0x003C4BA0 (192 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4AE0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, 0x003C4AECu); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4AEC: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4AFE; /* je: equal / zero */

loc_003C4AF3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C4AF9u); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4AF9: ;
    goto loc_003C4B9C;

loc_003C4AFE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C4B32; /* jge: greater or equal (signed >=) */

loc_003C4B0A: ;
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C4B21; /* jbe: below or equal (unsigned <=) */

loc_003C4B13: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(eax) = LO8(ecx);
    ecx = edi;
    PUSH32(esp, 0x003C4B1Fu); RECOMP_ABI_CALL(0x003C2DBFu, sub_003C2DBF); /* call 0x003C2DBF */

loc_003C4B1F: ;
    goto loc_003C4B9B;

loc_003C4B21: ;
    MEM32(esi + 0x14) = 4;
    PUSH32(esp, esi);

loc_003C4B29: ;
    ecx = edi;
    PUSH32(esp, 0x003C4B30u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4B30: ;
    goto loc_003C4B9B;

loc_003C4B32: ;
    SET_LO16(ecx, MEM16(eax + 0x3A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 6) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_003C4B47; /* je: equal / zero */

loc_003C4B3E: ;
    esi = 0; /* xor self */
    SET_LO16(ecx, LO16(ecx) & 0xFFFE);
    goto loc_003C4B54;

loc_003C4B47: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C4B95; /* je: equal / zero */

loc_003C4B4C: ;
    esi = 0; /* xor self */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);

loc_003C4B54: ;
    MEM16(eax + 0x3A) = LO16(ecx);
    ecx = eax + 8;
    MEM8(ecx) = 0x30;
    MEM8(eax + 9) = 0x40;
    MEM32(eax + 0x10) = 0x3C4969;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x24) = LO8(edx);
    MEM8(eax + 0x25) = LO8(edx);
    MEM8(eax + 0x26) = LO8(edx);
    MEM8(eax + 0x30) = 0x20;
    MEM8(eax + 0x31) = 1;
    MEM16(eax + 0x32) = LO16(esi);
    MEM16(eax + 0x34) = LO16(edx);
    MEM16(eax + 0x36) = LO16(edx);
    PUSH32(esp, ecx);
    goto loc_003C4B29;

loc_003C4B95: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C4B9Bu); RECOMP_ABI_CALL(0x003C4C0Bu, sub_003C4C0B); /* call 0x003C4C0B */

loc_003C4B9B: ;
    POP32(esp, esi);

loc_003C4B9C: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4BA0
 * Original: 0x003C4BA0 - 0x003C4C0B (107 bytes, 33 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003C4BACu); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4BAC: ;
    SET_LO8(ecx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 2) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C4BEB; /* jne: not equal / not zero */

loc_003C4BB4: ;
    ecx = MEM32(eax + 0x3C);
    MEM32(eax + 0x18) = ecx;
    ecx = eax + 0x38;
    MEM32(eax + 0x20) = ecx;
    ecx = ZX8(MEM8(eax + 7));
    MEM8(eax + 3) = 0;
    MEM8(eax + 8) = 0x28;
    MEM8(eax + 9) = 0x41;
    MEM32(eax + 0x10) = 0x3C4A14;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax + 0x24) = 2;
    MEM8(eax + 0x25) = 1;
    MEM8(eax + 0x26) = 0;
    goto loc_003C4BFC;

loc_003C4BEB: ;
    edx = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 3) = LO8(ecx);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(edx + 0x2C) = LO16(ecx);

loc_003C4BFC: ;
    eax = eax + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C4C07u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4C07: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4C0B
 * Original: 0x003C4C0B - 0x003C4CDE (211 bytes, 74 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C4C0B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4C0B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4C1Bu); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4C1B: ;
    SET_LO8(ebx, MEM8(eax + 4));
    ecx = 0; /* xor self */
    SET_LO8(edx, 1);
    MEM8(eax + 3) = LO8(ecx);
    MEM8(ebp + 0xB) = LO8(ebx);

loc_003C4C28: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C4C3C; /* jne: not equal / not zero */

loc_003C4C2D: ;
    MEM8(eax + 3) = MEM8(eax + 3) + 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(eax + 3));
    SET_LO8(edx, LO8(edx) << 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C4C28; /* jbe: below or equal (unsigned <=) */

loc_003C4C3A: ;
    goto loc_003C4C44;

loc_003C4C3C: ;
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(edx, LO8(edx) & MEM8(eax + 4));
    MEM8(eax + 4) = LO8(edx);

loc_003C4C44: ;
    SET_LO8(ebx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 2) (8-bit) */
    MEM8(eax + 0x26) = LO8(ecx);
    MEM8(eax + 0x24) = 2;
    MEM32(eax + 0x14) = edi;
    esi = eax + 8;
    if (CMP_BE(_fa, _fb)) goto loc_003C4C87; /* jbe: below or equal (unsigned <=) */

loc_003C4C59: ;
    edx = MEM32(eax + 0x3C);
    MEM32(eax + 0x18) = edx;
    edx = eax + 0x38;
    MEM32(eax + 0x20) = edx;
    edx = ZX8(MEM8(eax + 7));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esi) = 0x28;
    MEM8(eax + 9) = 0x41;
    MEM32(eax + 0x10) = 0x3C4A14;
    MEM32(eax + 0x1C) = edx;
    MEM8(eax + 0x25) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4C85u); RECOMP_ABI_CALL(0x003C4487u, sub_003C4487); /* call 0x003C4487 */

loc_003C4C85: ;
    goto loc_003C4CCF;

loc_003C4C87: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    edx = eax + 0x38;
    PUSH32(esp, 4);
    MEM32(eax + 0x20) = edx;
    POP32(esp, edx);
    MEM16(eax + 0x32) = LO16(ecx);
    MEM8(eax + 0x31) = LO8(ecx);
    MEM8(eax + 0x25) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 9) = 0x40;
    MEM8(esi) = 0x30;
    MEM16(eax + 0x36) = LO16(edx);
    MEM32(eax + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003C4CBC; /* jne: not equal / not zero */

loc_003C4CAF: ;
    MEM32(eax + 0x10) = 0x3C4AE0;
    MEM8(eax + 0x30) = 0xA0;
    goto loc_003C4CCB;

loc_003C4CBC: ;
    MEM32(eax + 0x10) = 0x3C490E;
    MEM8(eax + 0x30) = 0xA3;
    SET_LO16(ecx, ZX8(LO8(ebx)));

loc_003C4CCB: ;
    MEM16(eax + 0x34) = LO16(ecx);

loc_003C4CCF: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4CD7u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4CD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C4CDE
 * Original: 0x003C4CDE - 0x003C4D0E (48 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4CDE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4CDE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    PUSH32(esp, 0x003C4CEAu); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4CEA: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003C4CF7; /* je: equal / zero */

loc_003C4CF0: ;
    PUSH32(esp, 0x003C4CF5u); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4CF5: ;
    goto loc_003C4D0A;

loc_003C4CF7: ;
    _fa = (uint32_t)(MEM16(eax + 0x3A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x3A), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4D05; /* je: equal / zero */

loc_003C4CFE: ;
    PUSH32(esp, 0x003C4D03u); RECOMP_ABI_CALL(0x003C4591u, sub_003C4591); /* call 0x003C4591 */

loc_003C4D03: ;
    goto loc_003C4D0A;

loc_003C4D05: ;
    PUSH32(esp, 0x003C4D0Au); RECOMP_ABI_CALL(0x003C4C0Bu, sub_003C4C0B); /* call 0x003C4C0B */

loc_003C4D0A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4D0E
 * Original: 0x003C4D0E - 0x003C4D8E (128 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4D0E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4D0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x003C4D1Cu); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4D1C: ;
    esi = eax;
    MEM8(esi + 0x3A) = MEM8(esi + 0x3A) & 0xFE;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 3));
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ebx, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    ecx = edi;
    PUSH32(esp, 0x003C4D3Au); RECOMP_ABI_CALL(0x003C2980u, sub_003C2980); /* call 0x003C2980 */

loc_003C4D3A: ;
    SET_LO16(edx, ZX8(MEM8(esi + 3)));
    MEM8(esi + 5) = MEM8(esi + 5) | LO8(ebx);
    ecx = 0; /* xor self */
    eax = esi + 8;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x24) = LO8(ecx);
    MEM8(esi + 0x25) = LO8(ecx);
    MEM8(esi + 0x26) = LO8(ecx);
    MEM16(esi + 0x36) = LO16(ecx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x3C4CDE;
    MEM32(esi + 0x14) = edi;
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 1;
    MEM16(esi + 0x32) = 0x10;
    MEM16(esi + 0x34) = LO16(edx);
    PUSH32(esp, 0x003C4D88u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4D88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4D8E
 * Original: 0x003C4D8E - 0x003C4E39 (171 bytes, 54 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4D8E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4D8E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = edi;
    PUSH32(esp, 0x003C4D9Cu); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4D9C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCEF0);
    esi = eax;
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C4DA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4DA9: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C4DBC; /* jge: greater or equal (signed >=) */

loc_003C4DB4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C4DBAu); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4DBA: ;
    goto loc_003C4E33;

loc_003C4DBC: ;
    SET_LO8(eax, MEM8(0x5DCE8A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    MEM8(esi + 2) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_003C4DCC; /* jbe: below or equal (unsigned <=) */

loc_003C4DC8: ;
    MEM8(esi + 2) = 7;

loc_003C4DCC: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x003C4DD3u); RECOMP_ABI_CALL(0x003C452Eu, sub_003C452E); /* call 0x003C452E */

loc_003C4DD3: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(0x5DCF38) = esi;
    PUSH32(esp, 0x003C4DE1u); RECOMP_ABI_CALL(0x003C4487u, sub_003C4487); /* call 0x003C4487 */

loc_003C4DE1: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003C4DE9u); RECOMP_ABI_CALL(0x003C2F9Du, sub_003C2F9D); /* call 0x003C2F9D */

loc_003C4DE9: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esi + 3) = 1;
    MEM8(eax) = 0x30;
    MEM8(esi + 9) = 0x40;
    MEM32(esi + 0x10) = 0x3C4BA0;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x26) = LO8(ebx);
    MEM8(esi + 0x30) = 0x23;
    MEM8(esi + 0x31) = 3;
    MEM16(esi + 0x32) = 8;
    MEM16(esi + 0x34) = 1;
    MEM16(esi + 0x36) = LO16(ebx);
    PUSH32(esp, 0x003C4E33u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4E33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4E39
 * Original: 0x003C4E39 - 0x003C4EB5 (124 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C4E39(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4E39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5DCEF0);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C4E45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4E45: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C4E5B; /* jge: greater or equal (signed >=) */

loc_003C4E50: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003C4E59u); RECOMP_ABI_CALL(0x003C484Bu, sub_003C484B); /* call 0x003C484B */

loc_003C4E59: ;
    goto loc_003C4EB1;

loc_003C4E5B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x3C4D8E;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = 0x5DCE88;
    MEM32(esi + 0x14) = ecx;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1D) = 1;
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 0x28) = 0xA0;
    MEM8(esi + 0x29) = 6;
    MEM16(esi + 0x2A) = 0x2900;
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(ecx);
    PUSH32(esp, 0x003C4EA8u); RECOMP_ABI_CALL(0x003C452Eu, sub_003C452E); /* call 0x003C452E */

loc_003C4EA8: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003C4EB0u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4EB0: ;
    POP32(esp, edi);

loc_003C4EB1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C4EB5
 * Original: 0x003C4EB5 - 0x003C4FDB (294 bytes, 90 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C4EB5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C4EB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4EC3u); RECOMP_ABI_CALL(0x003C16D9u, sub_003C16D9); /* call 0x003C16D9 */

loc_003C4EC3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5DCEF0);
    edi = eax;
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C4ED0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C4ED0: ;
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C4FCB; /* jl: less (signed <) */

loc_003C4EDE: ;
    SET_LO16(ecx, MEM16(0x5DCE8A));
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x30 (16-bit) */
    eax = 0x5DCE88;
    if (CMP_A(_fa, _fb)) goto loc_003C4FCB; /* ja: above (unsigned >) */

loc_003C4EF6: ;
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ecx (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_003C4FCB; /* jb: below (unsigned <) */

loc_003C4F05: ;
    SET_LO8(eax, MEM8(eax));
    ecx = ZX8(LO8(eax));
    edx = edx + ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C4FCB; /* je: equal / zero */

loc_003C4F14: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C4FCB; /* jae: above or equal (unsigned >=) */

loc_003C4F1D: ;
    eax = edx + 0x5DCE88;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C4F05; /* jne: not equal / not zero */

loc_003C4F29: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 4 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C4F38; /* ja: above (unsigned >) */

loc_003C4F30: ;
    SET_LO8(ecx, MEM8(eax + 4));
    MEM8(edi + 7) = LO8(ecx);
    goto loc_003C4F3C;

loc_003C4F38: ;
    MEM8(edi + 7) = 4;

loc_003C4F3C: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(edi + 1) = LO8(ecx);
    MEM8(esi) = 0x20;
    MEM8(esi + 1) = 2;
    MEM32(esi + 8) = ebx;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 0x15) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 3));
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, LO8(eax) & 3);
    MEM8(esi + 0x16) = LO8(eax);
    MEM8(esi + 0x17) = 0x10;
    SET_LO16(eax, ZX8(MEM8(edi + 7)));
    PUSH32(esp, esi);
    MEM16(esi + 0x1C) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4F70u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4F70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003C4FCB; /* jl: less (signed <) */

loc_003C4F74: ;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 0x3C) = eax;
    edi = MEM32(ebp + 0xC);
    MEM8(esi) = 0x30;
    MEM8(esi + 1) = 0x40;
    MEM32(esi + 8) = 0x3C4E39;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = 9;
    SET_LO16(eax, ZX8(MEM8(0x5DCE8D)));
    PUSH32(esp, ebx);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4FC1u); RECOMP_ABI_CALL(0x003C452Eu, sub_003C452E); /* call 0x003C452E */

loc_003C4FC1: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4FC9u); RECOMP_ABI_CALL(0x003C1A8Eu, sub_003C1A8E); /* call 0x003C1A8E */

loc_003C4FC9: ;
    goto loc_003C4FD4;

loc_003C4FCB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C4FD4u); RECOMP_ABI_CALL(0x003C4829u, sub_003C4829); /* call 0x003C4829 */

loc_003C4FD4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C50BD
 * Original: 0x003C50BD - 0x003C514C (143 bytes, 56 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C50BD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C50BD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x460), 0 (8-bit) */
    ebp = edx;
    SET_LO8(ebx, 1);
    if (CMP_BE(_fa, _fb)) goto loc_003C5147; /* jbe: below or equal (unsigned <=) */

loc_003C50D0: ;
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, edi);

loc_003C50D5: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5132; /* je: equal / zero */

loc_003C50DF: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebp + 2));
    ecx = ecx & eax;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5114; /* je: equal / zero */

loc_003C50EC: ;
    ecx = esi + 0x461;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5104; /* je: equal / zero */

loc_003C50F8: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C5102u); RECOMP_ABI_CALL(0x003C2E85u, sub_003C2E85); /* call 0x003C2E85 */

loc_003C5102: ;
    goto loc_003C5108;

loc_003C5104: ;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(ecx) = LO8(eax);

loc_003C5108: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C5112u); RECOMP_ABI_CALL(0x003C2B55u, sub_003C2B55); /* call 0x003C2B55 */

loc_003C5112: ;
    goto loc_003C5132;

loc_003C5114: ;
    edi = esi + 0x461;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5132; /* je: equal / zero */

loc_003C5120: ;
    PUSH32(esp, MEM32(esp + 0x10));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    PUSH32(esp, esi);
    MEM8(edi) = LO8(ecx);
    PUSH32(esp, 0x003C5132u); RECOMP_ABI_CALL(0x003C2E85u, sub_003C2E85); /* call 0x003C2E85 */

loc_003C5132: ;
    MEM8(esp + 0x10) = MEM8(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) << 1);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x460) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C50D5; /* jb: below (unsigned <) */

loc_003C5146: ;
    POP32(esp, edi);

loc_003C5147: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C514C
 * Original: 0x003C514C - 0x003C5199 (77 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C514C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003C514C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0x470) = ecx;
    ecx = MEM32(ebp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(eax + 0x474) = ecx;
    ecx = MEM32(eax);
    MEM16(ebp + 8) = 0x10;
    esi = MEM32(ebp + 8);
    MEM32(ecx + edx * 4 + 0x50) = esi;
    esi = eax + 0x4A0;
    PUSH32(esp, esi);
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, edx);
    ecx = 0xFFF0BDC0u;
    PUSH32(esp, ecx);
    eax = eax + 0x478;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CE8); PUSH32(esp, 0x003C5194u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C5194: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C5199
 * Original: 0x003C5199 - 0x003C51B6 (29 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C5199(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003C5199: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    MEM16(ebp + -4) = 1;
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx * 4 + 0x50) = edx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C51B6
 * Original: 0x003C51B6 - 0x003C51E1 (43 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C51B6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C51B6: ;
    ecx = MEM32(esp + 8);
    eax = ecx + 0x470;
    edx = MEM32(eax);
    ecx = ecx + 0x474;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_003C51DD; /* je: equal / zero */

loc_003C51CF: ;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(ecx) = MEM32(ecx) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000600u);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x003C51DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C51DD: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C51E1
 * Original: 0x003C51E1 - 0x003C52A0 (191 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C51E1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C51E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    edx = ZX8(MEM8(esi + 0x460));
    ecx = eax + 0x54;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    edi = ebp + -8;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(ebp + -12) = 1;
    if (CMP_BE(_fa & _fb, 0)) goto loc_003C5292; /* jbe: below or equal (unsigned <=) */

loc_003C520E: ;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = edx;
    PUSH32(esp, ebx);

loc_003C5215: ;
    edi = MEM32(ecx);
    MEM32(ebp + -4) = edi;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C525F; /* je: equal / zero */

loc_003C5220: ;
    ecx = MEM32(esi + 0x474);
    ebx = esi + 0x470;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -24) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003C525F; /* je: equal / zero */

loc_003C5238: ;
    eax = esi + 0x478;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D60); PUSH32(esp, 0x003C5245u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C5245: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(ebx) = MEM32(ebx) & 0;
    MEM32(esi + 0x474) = MEM32(esi + 0x474) & 0;
    edi = edi & 0x200;
    edi = edi << 0xF;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebp + -28); PUSH32(esp, 0x003C525Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C525F: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5276; /* je: equal / zero */

loc_003C5265: ;
    eax = MEM32(ebp + -12);
    MEM16(ebp + -8) = MEM16(ebp + -8) | LO16(eax);
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5276; /* je: equal / zero */

loc_003C5272: ;
    MEM16(ebp + -6) = MEM16(ebp + -6) | LO16(eax);

loc_003C5276: ;
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = MEM32(ebp + -12) << 1;
    MEM32(ecx) = eax;
    ecx = ecx + 4;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = ecx;
    if ((_fa != 0)) goto loc_003C5215; /* jne: not equal / not zero */

loc_003C5291: ;
    POP32(esp, ebx);

loc_003C5292: ;
    edx = ebp + -8;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C529Cu); RECOMP_ABI_CALL(0x003C50BDu, sub_003C50BD); /* call 0x003C50BD */

loc_003C529C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C52A0
 * Original: 0x003C52A0 - 0x003C52BD (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C52A0(void)
{

loc_003C52A0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    MEM8(eax + 0x1F) = 0xFF;
    ecx = MEM32(0x5DCFCC);
    MEM32(eax + 0x14) = ecx;
    MEM32(0x5DCFCC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C52BD
 * Original: 0x003C52BD - 0x003C52FA (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C52BD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C52BD: ;
    _fa = (uint32_t)(MEM8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x11), 0 (8-bit) */
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003C52D1; /* jne: not equal / not zero */

loc_003C52C6: ;
    esi = ecx + 0x40C;
    eax = eax + 0x20;
    goto loc_003C52DA;

loc_003C52D1: ;
    esi = ecx + 0x410;
    eax = eax + 0x28;

loc_003C52DA: ;
    ecx = MEM32(esi);
    MEM32(edx + 0x18) = ecx;
    MEM32(esi) = edx;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_003C52EE; /* jne: not equal / not zero */

loc_003C52E9: ;
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & ecx;
    goto loc_003C52F4;

loc_003C52EE: ;
    ecx = MEM32(ecx + 0x14);
    MEM32(edx + 0xC) = ecx;

loc_003C52F4: ;
    ecx = MEM32(edx + 0x14);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003C52FA
 * Original: 0x003C52FA - 0x003C534A (80 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C52FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C52FA: ;
    _fa = (uint32_t)(MEM8(edx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x11), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003C530F; /* jne: not equal / not zero */

loc_003C5302: ;
    esi = ecx + 0x40C;
    ecx = MEM32(ecx);
    ecx = ecx + 0x20;
    goto loc_003C531A;

loc_003C530F: ;
    esi = ecx + 0x410;
    ecx = MEM32(ecx);
    ecx = ecx + 0x28;

loc_003C531A: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */

loc_003C531E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C532B; /* je: equal / zero */

loc_003C5322: ;
    edi = eax;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C531E; /* jne: not equal / not zero */

loc_003C532B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C533D; /* je: equal / zero */

loc_003C532F: ;
    ecx = MEM32(eax + 0x18);
    MEM32(edi + 0x18) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edi + 0xC) = eax;
    goto loc_003C5347;

loc_003C533D: ;
    edx = MEM32(eax + 0x18);
    MEM32(esi) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx) = eax;

loc_003C5347: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C534A
 * Original: 0x003C534A - 0x003C5360 (22 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C534A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C534A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003C535F; /* jbe: below or equal (unsigned <=) */

loc_003C5350: ;
    PUSH32(esp, esi);

loc_003C5351: ;
    esi = edx;
    esi = esi & 1;
    edx = edx >> 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + eax * 2;
    if ((_fa != 0)) goto loc_003C5351; /* jne: not equal / not zero */

loc_003C535E: ;
    POP32(esp, esi);

loc_003C535F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C5360
 * Original: 0x003C5360 - 0x003C53D7 (119 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C5360(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C5360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (CMP_B(_fa, _fb)) goto loc_003C5388; /* jb: below (unsigned <) */

loc_003C5372: ;
    edx = ZX8(LO8(ecx));
    PUSH32(esp, 5);
    edx = edx - 0x20;
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5380u); RECOMP_ABI_CALL(0x003C534Au, sub_003C534A); /* call 0x003C534A */

loc_003C5380: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    goto loc_003C53D1;

loc_003C5388: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) << 1);
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ecx));
    MEM8(ebp + -4) = LO8(eax);
    MEM8(ebp + 0xB) = 0;
    SET_LO8(ebx, LO8(ebx) << 1);

loc_003C539A: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    eax = eax + esi + 0xC;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C53B8; /* jne: not equal / not zero */

loc_003C53AA: ;
    PUSH32(esp, MEM32(ebp + -4));
    edx = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C53B6u); RECOMP_ABI_CALL(0x003C5360u, sub_003C5360); /* call 0x003C5360 */

loc_003C53B6: ;
    goto loc_003C53BE;

loc_003C53B8: ;
    eax = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edi;

loc_003C53BE: ;
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003C53D0; /* je: equal / zero */

loc_003C53C7: ;
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) + 1;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C539A; /* jb: below (unsigned <) */

loc_003C53D0: ;
    POP32(esp, ebx);

loc_003C53D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C53D7
 * Original: 0x003C53D7 - 0x003C55B3 (476 bytes, 172 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C53D7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C53D7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 3 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003C543B; /* jne: not equal / not zero */

loc_003C53E8: ;
    SET_LO8(eax, 0x20);
    _fa = (uint32_t)(MEM8(esi + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x13), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C53F8; /* jae: above or equal (unsigned >=) */

loc_003C53EF: ;
    SET_LO8(edx, MEM8(esi + 0x13));

loc_003C53F2: ;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C53F2; /* ja: above (unsigned >) */

loc_003C53F8: ;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) << 1);
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    edi = 0x2EE0;
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_003C5447; /* ja: above (unsigned >) */

loc_003C540A: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    edx = eax + ecx + 0x10;

loc_003C5414: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + -2));
    SET_LO16(eax, LO16(eax) + MEM16(edx + 2));
    SET_LO16(eax, LO16(eax) + MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C542E; /* jae: above or equal (unsigned >=) */

loc_003C5426: ;
    edi = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(ebp + -5) = LO8(eax);

loc_003C542E: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) + 1;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x10;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C5414; /* jbe: below or equal (unsigned <=) */

loc_003C5439: ;
    goto loc_003C5447;

loc_003C543B: ;
    SET_LO16(edi, MEM16(ecx + 0x10));
    SET_LO16(edi, LO16(edi) + MEM16(ecx + 0xE));
    MEM8(ebp + -5) = 0;

loc_003C5447: ;
    SET_LO16(eax, MEM16(esi + 0x22));
    edi = ZX16(LO16(edi));
    edx = ZX16(LO16(eax));
    edx = edx + edi;
    edi = ZX16(MEM16(ecx + 0x414));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C5468; /* jle: less or equal (signed <=) */

loc_003C545E: ;
    eax = 0x80000800u;
    goto loc_003C55AE;

loc_003C5468: ;
    SET_LO8(edx, MEM8(ebp + -5));
    edi = ZX8(LO8(edx));
    edi = edi << 4;
    edi = edi + ecx + 0xC;
    MEM8(esi + 0x12) = LO8(edx);
    MEM16(edi + 2) = MEM16(edi + 2) + LO16(eax);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C5487; /* jne: not equal / not zero */

loc_003C5480: ;
    SET_LO8(eax, 1);
    MEM8(ebp + -1) = LO8(eax);
    goto loc_003C5498;

loc_003C5487: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    MEM8(ebp + -1) = LO8(eax);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C54D8; /* ja: above (unsigned >) */

loc_003C5498: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C54CA; /* ja: above (unsigned >) */

loc_003C549D: ;
    edx = ZX8(MEM8(ebp + -1));
    edx = edx << 4;
    edx = edx + ecx + 0x12;
    MEM32(ebp + -16) = edx;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) - MEM8(ebp + -1));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -16);

loc_003C54BB: ;
    SET_LO16(ebx, MEM16(esi + 0x22));
    MEM16(edx) = MEM16(edx) + LO16(ebx);
    edx = edx + 0x10;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C54BB; /* jne: not equal / not zero */

loc_003C54CA: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) << 1;
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C5498; /* jbe: below or equal (unsigned <=) */

loc_003C54D5: ;
    SET_LO8(edx, MEM8(ebp + -5));

loc_003C54D8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    MEM8(ebp + -1) = LO8(edx);
    if (CMP_BE(_fa, _fb)) goto loc_003C5541; /* jbe: below or equal (unsigned <=) */

loc_003C54E0: ;
    SET_LO8(eax, MEM8(ebp + -1));
    edx = ZX8(MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) ^ 1);
    eax = ZX8(LO8(eax));
    edx = edx << 4;
    edx = edx + ecx + 0xC;
    eax = eax << 4;
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(edx + 4));
    SET_LO16(edx, MEM16(edx + 2));
    eax = eax + ecx + 0xC;
    MEM16(ebp + -12) = LO16(edx);
    edx = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(eax + 2));
    edx = edx + eax;
    eax = ZX16(MEM16(ebp + -12));
    MEM32(ebp + -16) = ebx;
    ebx = ZX16(LO16(ebx));
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C5541; /* jle: less or equal (signed <=) */

loc_003C5522: ;
    SET_LO8(eax, MEM8(ebp + -1));
    ebx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    SET_LO8(eax, LO8(eax) >> 1);
    edx = edx + ebx;
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ebx + ecx + 0x10) = LO16(edx);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_003C54E0; /* ja: above (unsigned >) */

loc_003C5541: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C5553; /* jne: not equal / not zero */

loc_003C5547: ;
    SET_LO16(eax, MEM16(ecx + 0x20));
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x1E));
    MEM16(ecx + 0x10) = LO16(eax);

loc_003C5553: ;
    eax = MEM32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C5592; /* jne: not equal / not zero */

loc_003C555C: ;
    SET_LO8(eax, MEM8(ebp + -5));
    goto loc_003C5565;

loc_003C5561: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5573; /* je: equal / zero */

loc_003C5565: ;
    SET_LO8(eax, LO8(eax) >> 1);
    ebx = ZX8(LO8(eax));
    ebx = ebx << 4;
    _fa = (uint32_t)(MEM32(ebx + ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5561; /* je: equal / zero */

loc_003C5573: ;
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    eax = MEM32(eax + ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5587; /* je: equal / zero */

loc_003C5581: ;
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = eax;

loc_003C5587: ;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(esi + 0x18) = edx;
    goto loc_003C55A1;

loc_003C5592: ;
    MEM32(esi + 0x18) = eax;
    MEM32(edi + 8) = esi;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = eax;

loc_003C55A1: ;
    PUSH32(esp, MEM32(ebp + -5));
    edx = MEM32(esi + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C55ACu); RECOMP_ABI_CALL(0x003C5360u, sub_003C5360); /* call 0x003C5360 */

loc_003C55AC: ;
    eax = 0; /* xor self */

loc_003C55AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C55B3
 * Original: 0x003C55B3 - 0x003C572C (377 bytes, 138 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C55B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C55B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    SET_LO16(eax, MEM16(edx + 0x22));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x12));
    MEM16(ebp + -16) = LO16(eax);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    eax = eax << 4;
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax + esi + 0xC;
    eax = MEM32(edi + 8);
    MEM32(ebp + -20) = edx;
    MEM8(ebp + -12) = LO8(ebx);

loc_003C55E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C55EE; /* je: equal / zero */

loc_003C55E4: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C55E0; /* jne: not equal / not zero */

loc_003C55EE: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C5629; /* jne: not equal / not zero */

loc_003C55F5: ;
    ecx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(edi + 0xC) = ecx;
    MEM32(ebp + -8) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_003C5631; /* je: equal / zero */

loc_003C5604: ;
    SET_LO8(edx, LO8(ebx));
    goto loc_003C560C;

loc_003C5608: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C561B; /* je: equal / zero */

loc_003C560C: ;
    SET_LO8(edx, LO8(edx) >> 1);
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    _fa = (uint32_t)(MEM32(ecx + esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5608; /* je: equal / zero */

loc_003C561B: ;
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C562E; /* je: equal / zero */

loc_003C5629: ;
    edx = MEM32(ecx + 0x14);
    goto loc_003C5631;

loc_003C562E: ;
    edx = MEM32(ebp + -8);

loc_003C5631: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(eax + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_003C564A; /* jne: not equal / not zero */

loc_003C563B: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    MEM32(edi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5648u); RECOMP_ABI_CALL(0x003C5360u, sub_003C5360); /* call 0x003C5360 */

loc_003C5648: ;
    goto loc_003C5650;

loc_003C564A: ;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0xC) = edx;

loc_003C5650: ;
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(edi + 2) = MEM16(edi + 2) - LO16(eax);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C5723; /* jne: not equal / not zero */

loc_003C5660: ;
    SET_LO8(eax, 1);
    SET_LO8(ecx, LO8(eax));

loc_003C5664: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003C5690; /* ja: above (unsigned >) */

loc_003C5668: ;
    edx = ZX8(LO8(ecx));
    edx = edx << 4;
    edi = edx + esi + 0x12;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(edx));
    MEM32(ebp + -4) = edx;

loc_003C567E: ;
    edx = MEM32(ebp + -20);
    SET_LO16(edx, MEM16(edx + 0x22));
    MEM16(edi) = MEM16(edi) - LO16(edx);
    edi = edi + 0x10;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C567E; /* jne: not equal / not zero */

loc_003C5690: ;
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x40 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C5664; /* jbe: below or equal (unsigned <=) */

loc_003C569A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C5710; /* jbe: below or equal (unsigned <=) */

loc_003C569F: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) ^ 1);
    ecx = ZX8(LO8(edx));
    ecx = ecx << 4;
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    edi = edi + ecx;
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    MEM32(ebp + -4) = edi;
    ecx = ecx + esi + 0xC;
    edi = ZX16(MEM16(ecx + 4));
    ecx = ZX16(MEM16(ecx + 2));
    SET_LO8(eax, LO8(ebx));
    edi = edi + ecx;
    SET_LO8(eax, LO8(eax) >> 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C56EA; /* jg: greater (signed >) */

loc_003C56D8: ;
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    ecx = ZX16(MEM16(ecx + esi + 0x10));
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C570D; /* je: equal / zero */

loc_003C56E8: ;
    SET_LO8(ebx, LO8(edx));

loc_003C56EA: ;
    ecx = ZX8(LO8(ebx));
    ecx = ecx << 4;
    ecx = ecx + esi + 0xC;
    SET_LO16(edx, MEM16(ecx + 4));
    SET_LO16(edx, LO16(edx) + MEM16(ecx + 2));
    ecx = ZX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    MEM16(ecx + esi + 0x10) = LO16(edx);
    SET_LO8(ebx, LO8(eax));
    if (CMP_A(_fa, _fb)) goto loc_003C569F; /* ja: above (unsigned >) */

loc_003C570D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */

loc_003C5710: ;
    if (CMP_NE(_fa, _fb)) goto loc_003C571E; /* jne: not equal / not zero */

loc_003C5712: ;
    SET_LO16(eax, MEM16(esi + 0x20));
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x1E));
    MEM16(esi + 0x10) = LO16(eax);

loc_003C571E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003C5723: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    goto loc_003C5690;

}

/**
 * sub_003C572C
 * Original: 0x003C572C - 0x003C57C2 (150 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C572C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C572C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    MEM32(0x5DCF4C) = MEM32(0x5DCF4C) + 1;
    _fa = (uint32_t)(MEM32(0x5DCF4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    edx = edx & eax;
    PUSH32(esp, edi);
    if ((edx == 0)) goto loc_003C57BB; /* je: equal / zero */

loc_003C5744: ;
    edi = 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C57BB; /* je: equal / zero */

loc_003C574D: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    MEM32(ecx + 0x14) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003C575D; /* je: equal / zero */

loc_003C5757: ;
    MEM32(ecx + 0xC) = eax;
    edx = edx & 0xFFFFFFFEu;

loc_003C575D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5791; /* je: equal / zero */

loc_003C5762: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    ebx = ZX16(MEM16(ebx + 0x80));
    edi = esi + 0x418;
    eax = MEM32(edi);
    ebx = ebx ^ eax;
    ebx = ebx & 0x8000;
    eax = eax - ebx;
    eax = eax + 0x10000;
    MEM32(edi) = eax;
    MEM32(ecx + 0xC) = 0x20;
    edx = edx & 0xFFFFFFDFu;
    POP32(esp, ebx);

loc_003C5791: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C57AE; /* je: equal / zero */

loc_003C5795: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x438) = edx;
    PUSH32(esp, 0);
    esi = esi + 0x440;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6D20); PUSH32(esp, 0x003C57ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C57AC: ;
    goto loc_003C57B7;

loc_003C57AE: ;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = 0x80000000u;

loc_003C57B7: ;
    SET_LO8(eax, 1);
    goto loc_003C57BD;

loc_003C57BB: ;
    SET_LO8(eax, 0); /* xor self */

loc_003C57BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C57C2
 * Original: 0x003C57C2 - 0x003C57E6 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C57C2(void)
{

loc_003C57C2: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x418);
    ecx = ZX16(MEM16(eax + 0x80));
    eax = ecx;
    eax = eax ^ edx;
    ecx = ecx & 0x7FFF;
    eax = eax & 0x8000;
    ecx = ecx | edx;
    eax = eax + ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003C57E6
 * Original: 0x003C57E6 - 0x003C58F9 (275 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C57E6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C57E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x418);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* TODO: cli  */
    eax = MEM32(ecx + 8);
    eax = ZX16(MEM16(eax + 0x80));
    ebx = MEM32(-25157620);
    /* TODO: sti  */
    esi = eax;
    eax = eax & 0x7FFF;
    esi = esi ^ edx;
    eax = eax | edx;
    esi = esi & 0x8000;
    esi = esi + eax;
    eax = esi;
    eax = eax - MEM32(ecx + 0x4D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_003C58F5; /* jb: below (unsigned <) */

loc_003C582B: ;
    edx = MEM32(ecx + 0x4D0);
    PUSH32(esp, edi);
    edi = esi + esi * 2;
    edi = edi << 4;
    edi = edi - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C5856; /* jne: not equal / not zero */

loc_003C583E: ;
    MEM32(ecx + 0x4D4) = MEM32(ecx + 0x4D4) & 0;
    MEM32(ecx + 0x4D0) = edi;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_003C58F4;

loc_003C5856: ;
    eax = edi;
    eax = eax - edx;
    if (((int32_t)eax >= 0)) goto loc_003C585F; /* jns: not sign (positive) */

loc_003C585C: ;
    eax = eax + 0x2F;

loc_003C585F: ;
    PUSH32(esp, 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = MEM32(ecx + 0x4D4);
    edx = eax;
    edx = edx - ebx;
    if ((edx != 0)) goto loc_003C5886; /* jne: not equal / not zero */

loc_003C5871: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C58F4; /* je: equal / zero */

loc_003C5875: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x61A8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C58F4; /* jbe: below or equal (unsigned <=) */

loc_003C587E: ;
    MEM32(ecx + 0x4D8) = esi;
    goto loc_003C58B0;

loc_003C5886: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(ecx + 0x4D4) = eax;
    MEM32(ecx + 0x4D8) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_003C583E; /* jg: greater (signed >) */

loc_003C5897: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFDu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C583E; /* jl: less (signed <) */

loc_003C589C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C58F4; /* je: equal / zero */

loc_003C58A0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003C58AA; /* jle: less or equal (signed <=) */

loc_003C58A4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003C58B0; /* jge: greater or equal (signed >=) */

loc_003C58A8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */

loc_003C58AA: ;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003C58F4; /* jge: greater or equal (signed >=) */

loc_003C58AC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_003C58F4; /* jg: greater (signed >) */

loc_003C58B0: ;
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edx;
    eax = 0x3FFF;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003C58CF; /* jle: less or equal (signed <=) */

loc_003C58C0: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2EE1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C58E2; /* jae: above or equal (unsigned >=) */

loc_003C58CA: ;
    esi = edx + 1;
    goto loc_003C58DC;

loc_003C58CF: ;
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2ED1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2ED1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C58E2; /* jbe: below or equal (unsigned <=) */

loc_003C58D9: ;
    esi = edx + -1;

loc_003C58DC: ;
    esi = esi ^ edx;
    esi = esi & eax;
    edx = edx ^ esi;

loc_003C58E2: ;
    eax = edx;
    eax = ~eax;
    eax = eax ^ edx;
    eax = eax & 0x7FFFFFFF;
    edx = ~edx;
    eax = eax ^ edx;
    MEM32(ecx + 0x34) = eax;

loc_003C58F4: ;
    POP32(esp, edi);

loc_003C58F5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C58F9
 * Original: 0x003C58F9 - 0x003C5975 (124 bytes, 48 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C58F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C58F9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = edx;
    MEM8(esi + 0x27) = MEM8(esi + 0x27) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003C591C; /* je: equal / zero */

loc_003C590E: ;
    ecx = ZX16(MEM16(edi + 0x20));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x003C591Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C591C: ;
    _fa = (uint32_t)(MEM8(edi + 0x22)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x22), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5965; /* je: equal / zero */

loc_003C5922: ;
    eax = MEM32(ebx + 0x42C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5965; /* je: equal / zero */

loc_003C592E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C593B; /* je: equal / zero */

loc_003C5932: ;
    ecx = eax;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C592E; /* jne: not equal / not zero */

loc_003C593B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5965; /* je: equal / zero */

loc_003C593F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C594E; /* jne: not equal / not zero */

loc_003C5943: ;
    ecx = MEM32(eax + 0x24);
    MEM32(ebx + 0x42C) = ecx;
    goto loc_003C5954;

loc_003C594E: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;

loc_003C5954: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) & 0;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C5965; /* jne: not equal / not zero */

loc_003C595D: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;

loc_003C5965: ;
    MEM8(edi + 0x22) = MEM8(edi + 0x22) | 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C596Fu); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C596F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C5975
 * Original: 0x003C5975 - 0x003C59A7 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5975(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C5975: ;
    eax = ZX8(MEM8(edx + 0x11));
    eax = eax - 0;
    if ((eax == 0)) goto loc_003C599A; /* je: equal / zero */

loc_003C597E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C598E; /* je: equal / zero */

loc_003C5982: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C59A6; /* jne: not equal / not zero */

loc_003C5985: ;
    MEM16(edx + 0x24) = MEM16(edx + 0x24) - 1;
    _fa = (uint32_t)(MEM16(edx + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_003C693A(); return; /* tail jmp 0x003C693A */

loc_003C598E: ;
    MEM16(0x5DCFE6) = MEM16(0x5DCFE6) + 1;
    _fa = (uint32_t)(MEM16(0x5DCFE6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_003C698D(); return; /* tail jmp 0x003C698D */

loc_003C599A: ;
    MEM16(0x5DCFE2) = MEM16(0x5DCFE2) + 1;
    _fa = (uint32_t)(MEM16(0x5DCFE2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_003C69DA(); return; /* tail jmp 0x003C69DA */

loc_003C59A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C59A7
 * Original: 0x003C59A7 - 0x003C5A9B (244 bytes, 87 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C59A7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C59A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -16) = ebx;
    MEM8(ebp + -1) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_003C5A16; /* jne: not equal / not zero */

loc_003C59CA: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5A16; /* je: equal / zero */

loc_003C59D0: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5A05; /* je: equal / zero */

loc_003C59D7: ;
    ecx = MEM32(edx + 0xC);
    esi = 0xFFF;
    eax = eax & esi;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003C59F5; /* jl: less (signed <) */

loc_003C59EA: ;
    eax = ZX8(MEM8(edx + 0x1D));
    eax = eax - ecx;
    eax = eax + MEM32(ebp + -12);
    goto loc_003C5A02;

loc_003C59F5: ;
    esi = ZX8(MEM8(edx + 0x1D));
    esi = esi - ecx;
    eax = esi + eax + -4096;

loc_003C5A02: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003C5A09;

loc_003C5A05: ;
    eax = ZX8(MEM8(edx + 0x1D));

loc_003C5A09: ;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax;
    MEM32(ebx + 4) = MEM32(ebx + 4) & 0;
    MEM8(ebp + -1) = 0;
    goto loc_003C5A2F;

loc_003C5A16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C5A22; /* jne: not equal / not zero */

loc_003C5A1B: ;
    MEM32(ebx + 4) = 0xC000000Fu;

loc_003C5A22: ;
    eax = MEM32(edx);
    eax = eax >> 0x1C;
    eax = eax | 0xC0000000u;
    MEM32(ebx + 4) = eax;

loc_003C5A2F: ;
    esi = MEM32(edi + 8);
    esi = esi & 0xFFFFFFF0u;

loc_003C5A35: ;
    SET_LO8(ebx, MEM8(edx + 0x1C));
    PUSH32(esp, edx);
    SET_LO8(ebx, LO8(ebx) & 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5A41u); RECOMP_ABI_CALL(0x003C52A0u, sub_003C52A0); /* call 0x003C52A0 */

loc_003C5A41: ;
    ecx = MEM32(ebp + -8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5A4Bu); RECOMP_ABI_CALL(0x003C5975u, sub_003C5975); /* call 0x003C5975 */

loc_003C5A4B: ;
    eax = MEM32(0x5DCFC0);
    edx = eax + esi;
    _fa = (uint32_t)(MEM8(edx + 0x1E)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x1E), 2 (8-bit) */
    esi = MEM32(edx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003C5A62; /* jne: not equal / not zero */

loc_003C5A5C: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5A66; /* je: equal / zero */

loc_003C5A62: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5A35; /* je: equal / zero */

loc_003C5A66: ;
    eax = MEM32(edx + 0x10);
    eax = eax ^ MEM32(edi + 8);
    eax = eax & 0xF;
    eax = eax ^ MEM32(edx + 0x10);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(edi + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003C5A86; /* je: equal / zero */

loc_003C5A79: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5A86u); RECOMP_ABI_CALL(0x003C58F9u, sub_003C58F9); /* call 0x003C58F9 */

loc_003C5A86: ;
    _fa = (uint32_t)(MEM8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5A92; /* je: equal / zero */

loc_003C5A8C: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C5A96; /* jne: not equal / not zero */

loc_003C5A92: ;
    MEM32(edi + 8) = MEM32(edi + 8) & 0xFFFFFFFEu;

loc_003C5A96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C5A9B
 * Original: 0x003C5A9B - 0x003C5B47 (172 bytes, 64 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C5A9B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C5A9B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM8(esi + 0x1E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1E), 1 (8-bit) */
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003C5AD0; /* jne: not equal / not zero */

loc_003C5AB6: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x5DCFC0);
    eax = eax + ecx + -7;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5AC9u); RECOMP_ABI_CALL(0x003C52A0u, sub_003C52A0); /* call 0x003C52A0 */

loc_003C5AC9: ;
    MEM16(0x5DCFE2) = MEM16(0x5DCFE2) + 1;
    _fa = (uint32_t)(MEM16(0x5DCFE2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003C5AD0: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 3), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5AE2; /* je: equal / zero */

loc_003C5AD6: ;
    ecx = MEM32(ebp + -4);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5AE0u); RECOMP_ABI_CALL(0x003C59A7u, sub_003C59A7); /* call 0x003C59A7 */

loc_003C5AE0: ;
    goto loc_003C5B43;

loc_003C5AE2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003C5B10; /* je: equal / zero */

loc_003C5AEA: ;
    ecx = MEM32(esi + 0xC);
    edx = 0xFFF;
    eax = eax & edx;
    ebx = eax;
    eax = ZX8(MEM8(esi + 0x1D));
    ecx = ecx & edx;
    eax = eax - ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C5B06; /* jl: less (signed <) */

loc_003C5B02: ;
    eax = eax + ebx;
    goto loc_003C5B0D;

loc_003C5B06: ;
    eax = eax + ebx + -4096;

loc_003C5B0D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003C5B14;

loc_003C5B10: ;
    eax = ZX8(MEM8(esi + 0x1D));

loc_003C5B14: ;
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + eax;
    SET_LO8(ebx, MEM8(esi + 0x1C));
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(ebx) & 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5B23u); RECOMP_ABI_CALL(0x003C52A0u, sub_003C52A0); /* call 0x003C52A0 */

loc_003C5B23: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5B2Eu); RECOMP_ABI_CALL(0x003C5975u, sub_003C5975); /* call 0x003C5975 */

loc_003C5B2E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003C5B43; /* je: equal / zero */

loc_003C5B33: ;
    edx = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5B43u); RECOMP_ABI_CALL(0x003C58F9u, sub_003C58F9); /* call 0x003C58F9 */

loc_003C5B43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C5B47
 * Original: 0x003C5B47 - 0x003C5C49 (258 bytes, 87 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C5B47(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C5B47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = edx;
    ebx = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x42C), edx (32-bit) */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C5C38; /* je: equal / zero */

loc_003C5B6A: ;
    PUSH32(esp, esi);
    goto loc_003C5B70;

loc_003C5B6D: ;
    edi = MEM32(ebp + -20);

loc_003C5B70: ;
    ecx = MEM32(ebx + 0x42C);
    eax = MEM32(ecx + 0x24);
    MEM32(ebx + 0x42C) = eax;
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C5B92; /* jae: above or equal (unsigned >=) */

loc_003C5B87: ;
    MEM32(ecx + 0x24) = edx;
    MEM32(ebp + -4) = ecx;
    goto loc_003C5C27;

loc_003C5B92: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5BA4; /* je: equal / zero */

loc_003C5B99: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0xBF);
    MEM32(esi + 0x1C) = edi;
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_003C5B87;

loc_003C5BA4: ;
    eax = MEM32(esi + 8);
    edi = MEM32(0x5DCFC0);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -24) = eax;
    eax = eax & 0xFFFFFFF0u;
    edx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x18) (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C5BDA; /* je: equal / zero */

loc_003C5BC2: ;
    ebx = MEM32(esi + 4);

loc_003C5BC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5BD7; /* je: equal / zero */

loc_003C5BC9: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(edx + 8);
    edx = edi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C5BC5; /* jne: not equal / not zero */

loc_003C5BD7: ;
    ebx = MEM32(ebp + -8);

loc_003C5BDA: ;
    eax = MEM32(edx + 8);
    eax = eax ^ MEM32(ebp + -24);
    ecx = ebx;
    eax = eax & 0xF;
    eax = eax ^ MEM32(edx + 8);
    MEM32(esi + 8) = eax;
    MEM8(edx + 3) = MEM8(edx + 3) | 0xF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5BF4u); RECOMP_ABI_CALL(0x003C5A9Bu, sub_003C5A9B); /* call 0x003C5A9B */

loc_003C5BF4: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5C1A; /* je: equal / zero */

loc_003C5BFB: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(0x5DCFC0);
    ecx = ecx & 0xFFFFFFF0u;
    MEM32(edx + eax + 8) = ecx;
    eax = MEM32(esi + 8);
    eax = eax ^ MEM32(ebp + -16);
    eax = eax & 0xF;
    eax = eax ^ MEM32(ebp + -16);
    MEM32(esi + 8) = eax;

loc_003C5C1A: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C5C27; /* jne: not equal / not zero */

loc_003C5C1F: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;

loc_003C5C27: ;
    _fa = (uint32_t)(MEM32(ebx + 0x42C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x42C), 0 (32-bit) */
    edx = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_003C5B6D; /* jne: not equal / not zero */

loc_003C5C37: ;
    POP32(esp, esi);

loc_003C5C38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    POP32(esp, edi);
    MEM32(ebx + 0x42C) = edx;
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C5C49
 * Original: 0x003C5C49 - 0x003C5C9F (86 bytes, 35 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5C49(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C5C49: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    edi = ecx;
    SET_LO8(ebx, 0); /* xor self */

loc_003C5C52: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx & 0xFFFFFFF0u;
    if ((ecx == 0)) goto loc_003C5C9B; /* je: equal / zero */

loc_003C5C5C: ;
    edx = MEM32(0x5DCFC0);
    edx = edx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5C85; /* je: equal / zero */

loc_003C5C69: ;
    eax = MEM32(edx + 8);
    MEM8(edx + 3) = MEM8(edx + 3) | 0xF0;
    eax = eax ^ MEM32(esi + 8);
    ecx = edi;
    eax = eax & 0xF;
    eax = eax ^ MEM32(edx + 8);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x003C5C83u); RECOMP_ABI_CALL(0x003C5A9Bu, sub_003C5A9B); /* call 0x003C5A9B */

loc_003C5C83: ;
    goto loc_003C5C97;

loc_003C5C85: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    eax = eax & 0xF;
    PUSH32(esp, edx);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x003C5C95u); RECOMP_ABI_CALL(0x003C52A0u, sub_003C52A0); /* call 0x003C52A0 */

loc_003C5C95: ;
    SET_LO8(ebx, 1);

loc_003C5C97: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5C52; /* je: equal / zero */

loc_003C5C9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C5C9F
 * Original: 0x003C5C9F - 0x003C5D26 (135 bytes, 50 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5C9F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C5C9F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebx + 0x430)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x430), ebp (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C5D15; /* je: equal / zero */

loc_003C5CB2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003C5CB4: ;
    edi = MEM32(ebx + 0x430);
    eax = MEM32(edi + 0x24);
    MEM32(ebx + 0x430) = eax;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C5CD2; /* jae: above or equal (unsigned >=) */

loc_003C5CCB: ;
    MEM32(edi + 0x14) = ebp;
    ebp = edi;
    goto loc_003C5D0A;

loc_003C5CD2: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5CE6; /* je: equal / zero */

loc_003C5CD9: ;
    ecx = edx + 1;
    SET_LO8(eax, LO8(eax) & 0xBF);
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_003C5CCB;

loc_003C5CE6: ;
    edx = esi;
    ecx = ebx;
    PUSH32(esp, 0x003C5CEFu); RECOMP_ABI_CALL(0x003C5C49u, sub_003C5C49); /* call 0x003C5C49 */

loc_003C5CEF: ;
    MEM8(esi + 0x20) = MEM8(esi + 0x20) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x20)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C5CFC; /* jne: not equal / not zero */

loc_003C5CF4: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xDF;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;

loc_003C5CFC: ;
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C5D06u); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C5D06: ;
    edx = MEM32(esp + 0x10);

loc_003C5D0A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x430)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x430), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C5CB4; /* jne: not equal / not zero */

loc_003C5D13: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C5D15: ;
    eax = 0; /* xor self */
    MEM32(ebx + 0x430) = ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C5D26
 * Original: 0x003C5D26 - 0x003C5E00 (218 bytes, 75 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C5D26(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C5D26: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebx + 0x434)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x434), ecx (32-bit) */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C5DF0; /* je: equal / zero */

loc_003C5D43: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003C5D45: ;
    esi = MEM32(ebx + 0x434);
    eax = MEM32(esi + 0x14);
    MEM32(ebx + 0x434) = eax;
    edi = MEM32(esi + 0x10);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C5D67; /* jae: above or equal (unsigned >=) */

loc_003C5D5F: ;
    MEM32(esi + 0x14) = ecx;
    MEM32(ebp + -4) = esi;
    goto loc_003C5DDE;

loc_003C5D67: ;
    SET_LO8(eax, MEM8(edi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5D75; /* je: equal / zero */

loc_003C5D6E: ;
    SET_LO8(eax, LO8(eax) & 0xBF);
    MEM8(edi + 0x10) = LO8(eax);
    goto loc_003C5D5F;

loc_003C5D75: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x4A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x4A (8-bit) */
    ecx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003C5D86; /* jne: not equal / not zero */

loc_003C5D7D: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5D84u); RECOMP_ABI_CALL(0x003C6119u, sub_003C6119); /* call 0x003C6119 */

loc_003C5D84: ;
    goto loc_003C5DDE;

loc_003C5D86: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5D8Du); RECOMP_ABI_CALL(0x003C5C49u, sub_003C5C49); /* call 0x003C5C49 */

loc_003C5D8D: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5DC6; /* je: equal / zero */

loc_003C5D94: ;
    ecx = MEM32(edi);
    MEM32(ebp + -12) = ecx;
    ecx = ecx >> 7;
    eax = 0; /* xor self */
    ecx = ecx & 0xF;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    ecx = MEM32(ebp + -12);
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C5DB8; /* jne: not equal / not zero */

loc_003C5DB5: ;
    eax = eax << 0x10;

loc_003C5DB8: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5DC2; /* je: equal / zero */

loc_003C5DBE: ;
    MEM32(edx) = MEM32(edx) | eax;
    goto loc_003C5DC6;

loc_003C5DC2: ;
    eax = ~eax;
    MEM32(edx) = MEM32(edx) & eax;

loc_003C5DC6: ;
    eax = MEM32(0x5DCFC8);
    MEM32(edi + 0x18) = eax;
    MEM32(0x5DCFC8) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5DDEu); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C5DDE: ;
    _fa = (uint32_t)(MEM32(ebx + 0x434)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x434), 0 (32-bit) */
    ecx = MEM32(ebp + -4);
    if (CMP_NE(_fa, _fb)) goto loc_003C5D45; /* jne: not equal / not zero */

loc_003C5DEE: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C5DF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebx + 0x434) = ecx;
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C5E00
 * Original: 0x003C5E00 - 0x003C5F16 (278 bytes, 96 insns)
 * Category: game_input
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C5E00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C5E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(esi);
    eax = esi + 0x438;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    edi = 0; /* xor self */
    ecx = esi;
    MEM8(ebp + 0xF) = 0;
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5E27u); RECOMP_ABI_CALL(0x003C57E6u, sub_003C57E6); /* call 0x003C57E6 */

loc_003C5E27: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5E84; /* je: equal / zero */

loc_003C5E2D: ;
    ecx = MEM32(esi + 8);
    ecx = ecx + 0x84;
    eax = MEM32(ecx);
    eax = eax & 0xFFFFFFF0u;
    MEM32(ecx) = edi;
    if ((eax == 0)) goto loc_003C5E70; /* je: equal / zero */

loc_003C5E3F: ;
    ecx = MEM32(0x5DCFC0);
    ecx = ecx + eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx + 8) = edi;
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003C5E3F; /* jne: not equal / not zero */

loc_003C5E53: ;
    edx = edi;
    _fa = (uint32_t)(MEM8(edx + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 2), 1 (8-bit) */
    edi = MEM32(edi + 8);
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_003C5E67; /* je: equal / zero */

loc_003C5E60: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5E65u); RECOMP_ABI_CALL(0x003C6482u, sub_003C6482); /* call 0x003C6482 */

loc_003C5E65: ;
    goto loc_003C5E6C;

loc_003C5E67: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5E6Cu); RECOMP_ABI_CALL(0x003C5A9Bu, sub_003C5A9B); /* call 0x003C5A9B */

loc_003C5E6C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C5E53; /* jne: not equal / not zero */

loc_003C5E70: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFDu;
    MEM32(ebx + 0xC) = 2;
    eax = MEM32(esi);
    MEM32(eax + 8) = 6;

loc_003C5E84: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    PUSH32(esp, 4);
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003C5E97; /* je: equal / zero */

loc_003C5E8D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFBu;
    MEM32(ebx + 0xC) = edi;
    MEM32(ebx + 0x14) = edi;

loc_003C5E97: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5E9Eu); RECOMP_ABI_CALL(0x003C57C2u, sub_003C57C2); /* call 0x003C57C2 */

loc_003C5E9E: ;
    edx = eax;
    ecx = esi;
    MEM32(ebp + -8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5EAAu); RECOMP_ABI_CALL(0x003C5B47u, sub_003C5B47); /* call 0x003C5B47 */

loc_003C5EAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5EB2; /* je: equal / zero */

loc_003C5EAE: ;
    MEM8(ebp + 0xF) = 1;

loc_003C5EB2: ;
    edx = MEM32(ebp + -8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5EBCu); RECOMP_ABI_CALL(0x003C5C9Fu, sub_003C5C9F); /* call 0x003C5C9F */

loc_003C5EBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5EC4; /* je: equal / zero */

loc_003C5EC0: ;
    MEM8(ebp + 0xF) = 1;

loc_003C5EC4: ;
    edx = MEM32(ebp + -8);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5ECEu); RECOMP_ABI_CALL(0x003C5D26u, sub_003C5D26); /* call 0x003C5D26 */

loc_003C5ECE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5ED6; /* je: equal / zero */

loc_003C5ED2: ;
    MEM8(ebp + 0xF) = 1;

loc_003C5ED6: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C5EE6; /* je: equal / zero */

loc_003C5EDC: ;
    eax = MEM32(esi);
    MEM32(eax + 0xC) = edi;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = edi;

loc_003C5EE6: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5EFE; /* je: equal / zero */

loc_003C5EEC: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5EF3u); RECOMP_ABI_CALL(0x003C51E1u, sub_003C51E1); /* call 0x003C51E1 */

loc_003C5EF3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFBFu;
    MEM32(ebx + 0xC) = 0x40;

loc_003C5EFE: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5F08; /* je: equal / zero */

loc_003C5F05: ;
    MEM32(ebx + 0xC) = eax;

loc_003C5F08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x10) = 0x80000000u;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C5F16
 * Original: 0x003C5F16 - 0x003C5F28 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C5F16(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C5F16: ;
    eax = MEM32(0x5DCFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C5F27; /* je: equal / zero */

loc_003C5F1F: ;
    ecx = MEM32(eax);
    MEM32(0x5DCFE8) = ecx;

loc_003C5F27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C5F28
 * Original: 0x003C5F28 - 0x003C60D5 (429 bytes, 148 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C5F28(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C5F28: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x14;
    eax = MEM32(0x5DCFEC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = edx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C5F43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C5F43: ;
    MEM8(ebp + -2) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5F4Bu); RECOMP_ABI_CALL(0x003C5F16u, sub_003C5F16); /* call 0x003C5F16 */

loc_003C5F4B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(ebp + -12) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_003C5F5E; /* jne: not equal / not zero */

loc_003C5F54: ;
    edi = 0x80000100u;
    goto loc_003C60C3;

loc_003C5F5E: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + -8);
    esi = esi << 6;
    eax = 0; /* xor self */
    ecx = esi + 0x30;
    edx = ecx;
    ecx = ecx >> 2;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + -12);
    esi = esi + eax;
    MEM32(esi + 0x2C) = eax;
    eax = esi;
    eax = eax - MEM32(0x5DCFC0);
    MEM8(esi + 0x11) = 1;
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    MEM8(esi + 0x13) = 1;
    SET_LO16(eax, MEM16(ebx + 0x16));
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C5FA3u); RECOMP_ABI_CALL(0x003C1CC3u, sub_003C1CC3); /* call 0x003C1CC3 */

loc_003C5FA3: ;
    edx = MEM32(ebp + -8);
    MEM16(esi + 0x22) = LO16(eax);
    MEM8(esi + 0x24) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 0x18));
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x10) = LO8(eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x14));
    PUSH32(esp, 0);
    eax = eax ^ MEM32(esi);
    eax = eax & 0x7F;
    MEM32(esi) = MEM32(esi) ^ eax;
    eax = ZX8(MEM8(ebx + 0x15));
    ecx = MEM32(esi);
    eax = eax << 7;
    eax = eax ^ ecx;
    eax = eax & 0x780;
    eax = eax ^ ecx;
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM8(ebx + 0x15)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x15), 0x80 (8-bit) */
    POP32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax & 0xFFFFC7FFu;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 3;
    ecx = ecx | 0x18;
    ecx = ecx << 0xB;
    ecx = ecx | eax;
    MEM32(esi) = ecx;
    eax = ZX16(MEM16(ebx + 0x16));
    eax = eax << 0x10;
    eax = eax ^ ecx;
    eax = eax & 0x7FF0000;
    eax = eax ^ ecx;
    ecx = MEM32(esi + 8);
    MEM32(esi) = eax;
    eax = MEM32(esi + 0x2C);
    eax = eax - MEM32(0x5DCFC0);
    ecx = ecx ^ eax;
    ecx = ecx & 0xF;
    ecx = ecx ^ eax;
    MEM32(esi + 8) = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esi + 4) = eax;
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_BE(_fa & _fb, 0)) goto loc_003C6083; /* jbe: below or equal (unsigned <=) */

loc_003C6026: ;
    eax = 0; /* xor self */

loc_003C6028: ;
    edx = MEM32(esi + 0x2C);
    eax = eax << 6;
    edi = eax + edx;
    MEM32(ebp + -16) = edi;
    edi = edi - MEM32(0x5DCFC0);
    edx = MEM32(ebp + -16);
    edi = edi + 0x40;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx + 0x2D) = LO8(ecx);
    edx = MEM32(esi + 0x2C);
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM8(eax + edx + 0x2C) = LO8(ecx);
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x20) = esi;
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x28) = MEM32(eax + edx + 0x28) & 0;
    edx = MEM32(esi + 0x2C);
    MEM32(eax + edx + 0x24) = MEM32(eax + edx + 0x24) & 0;
    edx = MEM32(esi + 0x2C);
    edx = edx + eax;
    MEM8(edx + 2) = MEM8(edx + 2) | 1;
    edx = MEM32(esi + 0x2C);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + edx + 8) = edi;
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    MEM8(ebp + -1) = LO8(ecx);
    if (CMP_B(_fa, _fb)) goto loc_003C6028; /* jb: below (unsigned <) */

loc_003C6083: ;
    edx = MEM32(esi + 0x2C);
    eax = ZX8(LO8(ecx));
    eax = eax << 6;
    MEM32(eax + edx + -56) = MEM32(eax + edx + -56) & 0;
    eax = MEM32(esi + 0x2C);
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x2D) = LO8(ecx);
    ecx = MEM32(ebp + -20);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C60A3u); RECOMP_ABI_CALL(0x003C53D7u, sub_003C53D7); /* call 0x003C53D7 */

loc_003C60A3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003C60AE; /* jl: less (signed <) */

loc_003C60A9: ;
    MEM32(ebx + 0x10) = esi;
    goto loc_003C60C2;

loc_003C60AE: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    ecx = MEM32(0x5DCFE8);
    eax = MEM32(ebp + -12);
    MEM32(eax) = ecx;
    MEM32(0x5DCFE8) = eax;

loc_003C60C2: ;
    POP32(esp, esi);

loc_003C60C3: ;
    SET_LO8(ecx, MEM8(ebp + -2));
    MEM32(ebx + 4) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C60CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C60CF: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C60D5
 * Original: 0x003C60D5 - 0x003C6119 (68 bytes, 27 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C60D5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C60D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    ebp = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C60E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C60E6: ;
    edx = ebp;
    ecx = edi;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x003C60F1u); RECOMP_ABI_CALL(0x003C55B3u, sub_003C55B3); /* call 0x003C55B3 */

loc_003C60F1: ;
    edx = ebp;
    ecx = edi;
    PUSH32(esp, 0x003C60FAu); RECOMP_ABI_CALL(0x003C40D9u, sub_003C40D9); /* call 0x003C40D9 */

loc_003C60FA: ;
    eax = edi + 0x434;
    ecx = MEM32(eax);
    MEM32(esi + 0x14) = ecx;
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C610Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C610F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x40000000;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C6119
 * Original: 0x003C6119 - 0x003C61A2 (137 bytes, 52 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6119(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6119: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x25));
    ebx = ZX8(MEM8(esi + 0x26));
    ecx = ZX8(LO8(eax));
    ebx = ebx - ecx;
    ecx = ZX8(MEM8(esi + 0x24));
    ebx = ebx + ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C617B; /* je: equal / zero */

loc_003C6137: ;
    PUSH32(esp, edi);

loc_003C6138: ;
    ecx = ZX8(MEM8(esi + 0x24));
    eax = ebx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(esi + 0x25) = MEM8(esi + 0x25) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebx = edx;
    edi = ebx;
    edi = edi << 6;
    edi = edi + MEM32(esi + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(edi + 4));
    { uint32_t _icall_target = MEM32(0x3C6DA4); PUSH32(esp, 0x003C615Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C615B: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 4);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFF000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C6174; /* je: equal / zero */

loc_003C616B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6DA4); PUSH32(esp, 0x003C6174u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6174: ;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x25), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C6138; /* jne: not equal / not zero */

loc_003C617A: ;
    POP32(esp, edi);

loc_003C617B: ;
    eax = ZX8(MEM8(esi + 0x24));
    MEM8(esi + 0x25) = MEM8(esi + 0x25) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 6;
    esi = esi - eax;
    eax = MEM32(0x5DCFE8);
    MEM32(esi) = eax;
    MEM32(0x5DCFE8) = esi;
    MEM32(ebp + 4) = MEM32(ebp + 4) & 0;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003C619Eu); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C619E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C61A2
 * Original: 0x003C61A2 - 0x003C6309 (359 bytes, 130 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C61A2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C61A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -32) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C61C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C61C2: ;
    SET_LO8(ecx, MEM8(edi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi + 0x25) (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003C61D9; /* jne: not equal / not zero */

loc_003C61CD: ;
    MEM32(ebp + -20) = 0xC0000D00u;
    goto loc_003C62EE;

loc_003C61D9: ;
    eax = ZX8(MEM8(edi + 0x26));
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx << 6;
    ebx = ebx + MEM32(edi + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ZX8(LO8(ecx));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esi + 0x18);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -28) = esi;
    MEM8(edi + 0x26) = LO8(edx);
    eax = MEM32(esi + 0x18);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(esi + 0x1C);
    MEM32(ebx + 0x28) = eax;
    eax = MEM32(ebp + -16);
    MEM32(ebx + 0x20) = edi;
    eax = ZX8(MEM8(eax + 0x14));
    eax = eax << 0x15;
    eax = eax ^ MEM32(ebx);
    eax = eax & 0xE00000;
    MEM32(ebx) = MEM32(ebx) ^ eax;
    ecx = MEM32(esi);
    eax = MEM32(ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx << 0x18;
    ecx = ecx ^ eax;
    ecx = ecx & 0x7000000;
    ecx = ecx ^ eax;
    MEM32(ebx) = ecx;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFF;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003C626B; /* jbe: below or equal (unsigned <=) */

loc_003C6240: ;
    ecx = esi + 8;
    MEM32(ebp + -8) = ecx;
    ecx = ebx + 0x10;

loc_003C6249: ;
    edx = eax;
    SET_LO16(edx, LO16(edx) | 0xE000);
    MEM16(ecx) = LO16(edx);
    edx = MEM32(ebp + -8);
    edx = ZX16(MEM16(edx));
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    eax = eax + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + -12);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003C6249; /* jb: below (unsigned <) */

loc_003C626B: ;
    eax = eax - MEM32(ebp + -24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    MEM32(ebp + -24) = eax;
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x003C627Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C627D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 4));
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x003C6286u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6286: ;
    ecx = MEM32(ebp + -24);
    MEM32(ebx + 4) = eax;
    eax = MEM32(esi + 4);
    eax = eax + ecx + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x003C629Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C629A: ;
    MEM32(ebx + 0xC) = eax;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C62B3; /* je: equal / zero */

loc_003C62A3: ;
    esi = ebx + 0x10;
    edi = ebx + 0x30;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esi = MEM32(ebp + -28);
    edi = MEM32(ebp + -32);

loc_003C62B3: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C62D9; /* je: equal / zero */

loc_003C62B9: ;
    ecx = MEM32(ebp + -36);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C62C1u); RECOMP_ABI_CALL(0x003C57C2u, sub_003C57C2); /* call 0x003C57C2 */

loc_003C62C1: ;
    ecx = MEM32(edi + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003C62CF; /* jle: less or equal (signed <=) */

loc_003C62CD: ;
    eax = ecx;

loc_003C62CF: ;
    MEM16(ebx) = LO16(eax);
    ecx = MEM32(esi);
    ecx = ecx + eax;
    MEM32(edi + 0x28) = ecx;

loc_003C62D9: ;
    MEM8(edi + 0x25) = MEM8(edi + 0x25) + 1;
    _fa = (uint32_t)(MEM8(edi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(edi + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x24) (8-bit) */
    esi = MEM32(ebp + -16);
    if (CMP_EQ(_fa, _fb)) goto loc_003C62ED; /* je: equal / zero */

loc_003C62E7: ;
    eax = MEM32(ebx + 8);
    MEM32(edi + 4) = eax;

loc_003C62ED: ;
    POP32(esp, ebx);

loc_003C62EE: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C62F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C62F7: ;
    edi = MEM32(ebp + -20);
    PUSH32(esp, esi);
    MEM32(esi + 4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6303u); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C6303: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C6309
 * Original: 0x003C6309 - 0x003C6428 (287 bytes, 98 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C6309(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6309: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(0x3C6CF0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x003C6329u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6329: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003C633C; /* je: equal / zero */

loc_003C6332: ;
    esi = 0xC0000E00u;
    goto loc_003C6408;

loc_003C633C: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6344u); RECOMP_ABI_CALL(0x003C57C2u, sub_003C57C2); /* call 0x003C57C2 */

loc_003C6344: ;
    SET_LO8(edx, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C6386; /* je: equal / zero */

loc_003C634C: ;
    SET_LO8(edx, LO8(edx) & 0xFB);
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), eax (32-bit) */
    MEM8(esi + 0x10) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_003C637E; /* jne: not equal / not zero */

loc_003C6357: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C6360u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6360: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) | 0xFFFFFFFFu;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + -24) = 0xFFFFD8F0u;
    { uint32_t _icall_target = MEM32(0x3C6CB0); PUSH32(esp, 0x003C6379u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6379: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x003C637Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C637B: ;
    MEM8(ebp + -1) = LO8(eax);

loc_003C637E: ;
    ecx = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6386u); RECOMP_ABI_CALL(0x003C57C2u, sub_003C57C2); /* call 0x003C57C2 */

loc_003C6386: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C639B; /* je: equal / zero */

loc_003C638C: ;
    SET_LO8(ecx, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x25) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C639B; /* je: equal / zero */

loc_003C6394: ;
    esi = 0xC0001000u;
    goto loc_003C6408;

loc_003C639B: ;
    _fa = (uint32_t)(MEM8(edi + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x18), 1 (8-bit) */
    ecx = eax + 1;
    if (TEST_NZ(_fa, _fb)) goto loc_003C63B6; /* jne: not equal / not zero */

loc_003C63A4: ;
    edx = MEM32(edi + 0x14);
    eax = edx;
    eax = eax - ecx;
    if (((int32_t)eax < 0)) goto loc_003C6421; /* js: sign (negative) */

loc_003C63AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C6421; /* jg: greater (signed >) */

loc_003C63B4: ;
    ecx = edx;

loc_003C63B6: ;
    SET_LO8(edx, MEM8(esi + 0x24));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) - MEM8(esi + 0x25));
    edi = ZX8(LO8(edx));
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x26));
    eax = ZX8(LO8(eax));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MEM32(esi + 0x2C);

loc_003C63CD: ;
    edx = ZX8(LO8(edx));
    eax = edx;
    eax = eax << 6;
    MEM16(edi + eax) = LO16(ecx);
    edi = MEM32(esi + 0x2C);
    eax = ZX8(MEM8(edi + eax + 3));
    ebx = ZX8(MEM8(esi + 0x24));
    eax = eax & 7;
    ecx = ecx + eax + 1;
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x26) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C63CD; /* jne: not equal / not zero */

loc_003C63F7: ;
    MEM8(esi + 1) = MEM8(esi + 1) & 0xBF;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 2;
    edi = MEM32(ebp + -12);
    MEM32(esi + 0x28) = ecx;
    esi = MEM32(ebp + -16);

loc_003C6408: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C6411u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6411: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C641Au); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C641A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003C6421: ;
    esi = 0xC0000B00u;
    goto loc_003C6408;

}

/**
 * sub_003C6428
 * Original: 0x003C6428 - 0x003C6482 (90 bytes, 37 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6428(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C6428: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    esi = MEM32(edi + 0x10);
    ebx = ecx;
    ebp = 0; /* xor self */
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C643Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C643C: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003C6462; /* je: equal / zero */

loc_003C6446: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0x40;
    ecx = ebx;
    PUSH32(esp, 0x003C6451u); RECOMP_ABI_CALL(0x003C57C2u, sub_003C57C2); /* call 0x003C57C2 */

loc_003C6451: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(esi + 0x10) = LO8(eax);
    goto loc_003C6467;

loc_003C6462: ;
    ebp = 0xC0000F00u;

loc_003C6467: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C6471u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6471: ;
    PUSH32(esp, edi);
    MEM32(edi + 4) = ebp;
    PUSH32(esp, 0x003C647Au); RECOMP_ABI_CALL(0x003C1CAFu, sub_003C1CAF); /* call 0x003C1CAF */

loc_003C647A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C6482
 * Original: 0x003C6482 - 0x003C6572 (240 bytes, 97 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C6482(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6482: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = edx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    edx = MEM32(ebx + 0x20);
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    esi = eax;
    esi = esi >> 0x1C;
    MEM32(ebp + -44) = esi;
    eax = eax >> 0x18;
    eax = eax & 7;
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebx + 0x28);
    esi = ebx + 0x10;
    MEM32(ebp + -8) = esi;
    edi = ebp + -36;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebx + 0x24);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(edx + 0x2C);
    MEM32(ebp + -20) = eax;
    eax = ZX8(MEM8(ebx + 0x2D));
    esi = ebx;
    esi = esi - MEM32(0x5DCFC0);
    eax = eax << 6;
    MEM32(eax + edi + 8) = esi;
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x10), 1 (8-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_003C6529; /* je: equal / zero */

loc_003C64E3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C64E8u); RECOMP_ABI_CALL(0x003C57C2u, sub_003C57C2); /* call 0x003C57C2 */

loc_003C64E8: ;
    ecx = MEM32(ebp + -4);
    esi = eax;
    eax = MEM32(ecx + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    edx = edx - esi;
    if (((int32_t)edx < 0)) goto loc_003C64F9; /* js: sign (negative) */

loc_003C64F7: ;
    esi = eax;

loc_003C64F9: ;
    edi = MEM32(ebp + -8);
    MEM16(ebx) = LO16(esi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 3));
    eax = eax & 7;
    eax = eax + esi + 1;
    MEM32(ecx + 0x28) = eax;
    esi = ebx + 0x30;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ZX8(MEM8(ecx + 0x26));
    esi = ZX8(MEM8(ecx + 0x24));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = MEM32(ebp + -12);
    MEM8(ecx + 0x26) = LO8(edx);
    goto loc_003C6560;

loc_003C6529: ;
    edi = MEM32(0x3C6DA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 4));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x003C6536u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6536: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 4);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFF000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C654B; /* je: equal / zero */

loc_003C6546: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x003C654Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C654B: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(ecx + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x24) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM8(ecx + 0x25) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003C6563; /* je: equal / zero */

loc_003C6560: ;
    MEM32(ecx + 4) = esi;

loc_003C6563: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -16));
    eax = ebp + -44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + -20); PUSH32(esp, 0x003C656Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C656D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C6572
 * Original: 0x003C6572 - 0x003C6592 (32 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6572(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6572: ;
    eax = MEM32(0x5DCFCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C6584; /* je: equal / zero */

loc_003C657B: ;
    ecx = MEM32(eax + 0x14);
    MEM32(0x5DCFCC) = ecx;

loc_003C6584: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 2) = MEM8(eax + 2) & 0xFE;
    MEM8(eax + 0x1F) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C6592
 * Original: 0x003C6592 - 0x003C65B1 (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6592(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6592: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(MEM16(0x5DCFE2)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5DCFE2), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C65A4; /* jae: above or equal (unsigned >=) */

loc_003C65A0: ;
    eax = 0; /* xor self */
    goto loc_003C65AE;

loc_003C65A4: ;
    MEM16(0x5DCFE2) = MEM16(0x5DCFE2) - LO16(eax);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C65AE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C65B1
 * Original: 0x003C65B1 - 0x003C65D0 (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C65B1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C65B1: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(MEM16(0x5DCFE6)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5DCFE6), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C65C3; /* jae: above or equal (unsigned >=) */

loc_003C65BF: ;
    eax = 0; /* xor self */
    goto loc_003C65CD;

loc_003C65C3: ;
    MEM16(0x5DCFE6) = MEM16(0x5DCFE6) - LO16(eax);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C65CD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C65D0
 * Original: 0x003C65D0 - 0x003C6602 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C65D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C65D0: ;
    PUSH32(esp, edi);
    edi = edx;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + 2));
    eax = 0; /* xor self */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C65F7; /* je: equal / zero */

loc_003C65E6: ;
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, esi);
    esi = ZX16(LO16(edx));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C65F7; /* je: equal / zero */

loc_003C65F6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C65F7: ;
    _fa = (uint32_t)(MEM8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x11), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003C6601; /* jne: not equal / not zero */

loc_003C65FE: ;
    eax = eax + 3;

loc_003C6601: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C6602
 * Original: 0x003C6602 - 0x003C663C (58 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6602(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6602: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    edi = edx;
    { uint32_t _icall_target = MEM32(0x3C6D6C); PUSH32(esp, 0x003C6611u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6611: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFF;
    edx = 0x1000;
    edx = edx - ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    ebx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C662E; /* jbe: below or equal (unsigned <=) */

loc_003C662C: ;
    MEM32(ecx) = ebx;

loc_003C662E: ;
    edx = MEM32(ecx);
    MEM32(edi) = MEM32(edi) - edx;
    ecx = MEM32(ecx);
    MEM32(esi) = MEM32(esi) + ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C663C
 * Original: 0x003C663C - 0x003C693A (766 bytes, 247 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C663C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C663C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = edx;
    SET_LO16(eax, MEM16(ebx + 2));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -32) = ecx;
    SET_LO8(ecx, MEM8(ecx + 0x45C));
    MEM8(ebp + -24) = LO8(ecx);
    eax = eax & 0x7FF;
    MEM32(ebp + -40) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(ebp + -16) = eax;
    eax = 0; /* xor self */
    MEM8(ebx + 0x26) = MEM8(ebx + 0x26) - 1;
    _fa = (uint32_t)(MEM8(ebx + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx + 0x27) = MEM8(ebx + 0x27) + 1;
    _fa = (uint32_t)(MEM8(ebx + 0x27)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, MEM16(edi + 0x22));
    SET_LO16(ecx, LO16(ecx) & 0xFFFD);
    SET_LO16(ecx, LO16(ecx) | 4);
    MEM16(edi + 0x22) = LO16(ecx);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -20) = eax;
    MEM8(ebp + 0xB) = LO8(eax);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C66A2; /* je: equal / zero */

loc_003C6699: ;
    eax = MEM32(0x5DCFC0);
    esi = esi + eax;
    goto loc_003C66BB;

loc_003C66A2: ;
    PUSH32(esp, MEM32(ebp + -24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C66AAu); RECOMP_ABI_CALL(0x003C6572u, sub_003C6572); /* call 0x003C6572 */

loc_003C66AA: ;
    esi = eax;
    eax = MEM32(esi + 0x10);
    eax = eax ^ MEM32(ebx + 8);
    eax = eax & 0xF;
    eax = eax ^ MEM32(esi + 0x10);
    MEM32(ebx + 8) = eax;

loc_003C66BB: ;
    _fa = (uint32_t)(MEM8(ebx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x11), 0 (8-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003C672A; /* jne: not equal / not zero */

loc_003C66C4: ;
    eax = 0; /* xor self */
    SET_LO8(eax, 0xFE);
    SET_LO8(eax, LO8(eax) - MEM8(ebp + -24));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C66D1u); RECOMP_ABI_CALL(0x003C6572u, sub_003C6572); /* call 0x003C6572 */

loc_003C66D1: ;
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(eax) = ecx;
    ecx = MEM32(edi + 0x2C);
    MEM32(ebp + -36) = eax;
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C66E7u); RECOMP_ABI_CALL(0x003C6572u, sub_003C6572); /* call 0x003C6572 */

loc_003C66E7: ;
    esi = eax;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    ecx = ecx & 0x3FFFF;
    ecx = ecx | 0xE2E00000u;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -36);
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 0x10);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0x10);
    ecx = ecx + 7;
    MEM8(ebp + 0xB) = 2;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ebx;
    MEM8(eax + 0x1C) = 0;
    MEM8(eax + 0x1E) = 1;
    MEM8(eax + 0x1D) = 0;
    MEM32(eax + 0x18) = edi;

loc_003C672A: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6746; /* je: equal / zero */

loc_003C6730: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(edi + 0x18));
    { uint32_t _icall_target = MEM32(0x3C6D68); PUSH32(esp, 0x003C673Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C673E: ;
    eax = MEM32(edi + 0x18);
    MEM32(ebp + -36) = eax;
    goto loc_003C674A;

loc_003C6746: ;
    MEM8(edi + 0x1C) = 1;

loc_003C674A: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6865; /* je: equal / zero */

loc_003C6754: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    edx = ebp + -16;
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6763u); RECOMP_ABI_CALL(0x003C6602u, sub_003C6602); /* call 0x003C6602 */

loc_003C6763: ;
    MEM32(ebp + -4) = eax;

loc_003C6766: ;
    edx = MEM32(ebp + -20);
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -40);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003C6787; /* jae: above or equal (unsigned >=) */

loc_003C6775: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C683F; /* je: equal / zero */

loc_003C677D: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C683F; /* jne: not equal / not zero */

loc_003C6787: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C67AF; /* je: equal / zero */

loc_003C678D: ;
    ecx = ecx - MEM32(ebp + -12);
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_003C679C; /* jae: above or equal (unsigned >=) */

loc_003C679A: ;
    ecx = edx;

loc_003C679C: ;
    SET_LO8(eax, MEM8(ebp + -12));
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    edx = edx - ecx;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM8(esi + 0x1D) = LO8(eax);
    goto loc_003C67CD;

loc_003C67AF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = MEM32(ebp + -4);
    MEM32(esi + 4) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_003C67C5; /* jae: above or equal (unsigned >=) */

loc_003C67B9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + edx;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    MEM8(esi + 0x1D) = LO8(edx);
    goto loc_003C67D0;

loc_003C67C5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    MEM8(esi + 0x1D) = LO8(ecx);
    edx = edx - ecx;

loc_003C67CD: ;
    MEM32(ebp + -20) = edx;

loc_003C67D0: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(esi);
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) ^ 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    eax = ZX8(MEM8(ebp + 0xB));
    PUSH32(esp, MEM32(ebp + -24));
    ecx = ecx & 0xFFBFFFF;
    ecx = ecx | 0xE0000000u;
    eax = eax << 0x18;
    eax = eax ^ ecx;
    eax = eax & 0x3000000;
    eax = eax ^ ecx;
    MEM32(esi) = ecx;
    eax = eax | 0xE00000;
    ecx = 0; /* xor self */
    MEM32(esi) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = 0;
    MEM8(esi + 0x1E) = 0;
    SET_LO8(ecx, MEM8(edi + 0x1C));
    eax = eax & 0xF3E7FFFFu;
    MEM32(esi + 0x18) = edi;
    MEM32(ebp + -8) = esi;
    ecx = ecx & 3;
    ecx = ecx << 0x13;
    ecx = ecx | eax;
    MEM32(esi) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C682Fu); RECOMP_ABI_CALL(0x003C6572u, sub_003C6572); /* call 0x003C6572 */

loc_003C682F: ;
    ecx = MEM32(ebp + -8);
    esi = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 8) = eax;
    goto loc_003C6766;

loc_003C683F: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003C6754; /* jne: not equal / not zero */

loc_003C6852: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6865; /* je: equal / zero */

loc_003C6858: ;
    _fa = (uint32_t)(MEM8(edi + 0x1D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1D), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6865; /* je: equal / zero */

loc_003C685E: ;
    eax = MEM32(ebp + -8);
    MEM8(eax + 2) = MEM8(eax + 2) | 4;

loc_003C6865: ;
    _fa = (uint32_t)(MEM8(ebx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C68D5; /* jne: not equal / not zero */

loc_003C686B: ;
    MEM8(esi + 2) = MEM8(esi + 2) & 0xFB;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x1C), 2 (8-bit) */
    PUSH32(esp, MEM32(ebp + -24));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -8) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 0x13;
    eax = eax ^ ecx;
    eax = eax & 0x180000;
    eax = eax ^ ecx;
    ecx = 0; /* xor self */
    MEM32(esi) = eax;
    SET_LO8(ecx, MEM8(edi + 0x1E));
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    eax = eax & 0x1FFFFF;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x1C) = 2;
    MEM8(esi + 0x1E) = 2;
    ecx = ecx & 7;
    ecx = ecx | 0xFFFFFF18u;
    ecx = ecx << 0x15;
    ecx = ecx | eax;
    MEM32(esi) = ecx;
    MEM32(esi + 0x18) = edi;
    MEM8(esi + 0x1D) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C68C8u); RECOMP_ABI_CALL(0x003C6572u, sub_003C6572); /* call 0x003C6572 */

loc_003C68C8: ;
    ecx = MEM32(ebp + -8);
    esi = eax;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 8) = eax;
    goto loc_003C68ED;

loc_003C68D5: ;
    ecx = ZX8(MEM8(edi + 0x1E));
    eax = MEM32(ebp + -8);
    ecx = ecx << 0x15;
    ecx = ecx ^ MEM32(eax);
    MEM8(eax + 0x1C) = 2;
    ecx = ecx & 0xE00000;
    MEM32(eax) = MEM32(eax) ^ ecx;

loc_003C68ED: ;
    MEM8(esi + 0x1E) = 3;
    SET_LO16(eax, MEM16(edi + 0x14));
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0;
    MEM16(edi + 0x20) = LO16(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x20), 0 (8-bit) */
    eax = MEM32(esi + 0x10);
    MEM32(ebx + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003C690D; /* jne: not equal / not zero */

loc_003C6909: ;
    MEM8(ebx + 1) = MEM8(ebx + 1) & 0xBF;

loc_003C690D: ;
    SET_LO8(ebx, MEM8(ebx + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003C6922; /* jne: not equal / not zero */

loc_003C6914: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    MEM32(eax + 8) = 2;
    goto loc_003C6933;

loc_003C6922: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C6933; /* jne: not equal / not zero */

loc_003C6927: ;
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    MEM32(eax + 8) = 4;

loc_003C6933: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C693A
 * Original: 0x003C693A - 0x003C698D (83 bytes, 34 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C693A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C693A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C698A; /* je: equal / zero */

loc_003C694A: ;
    PUSH32(esp, ebx);

loc_003C694B: ;
    eax = MEM32(esi + 0x28);
    SET_LO16(edx, MEM16(esi + 0x24));
    ebx = ZX16(MEM16(eax + 0x20));
    ecx = ZX16(LO16(edx));
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C6989; /* jg: greater (signed >) */

loc_003C6960: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esi + 0x28) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003C696D; /* jne: not equal / not zero */

loc_003C696A: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & ecx;

loc_003C696D: ;
    SET_LO16(ecx, MEM16(eax + 0x20));
    SET_LO16(ecx, LO16(ecx) + LO16(edx));
    MEM16(esi + 0x24) = LO16(ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6983u); RECOMP_ABI_CALL(0x003C663Cu, sub_003C663C); /* call 0x003C663C */

loc_003C6983: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C694B; /* jne: not equal / not zero */

loc_003C6989: ;
    POP32(esp, ebx);

loc_003C698A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003C698D
 * Original: 0x003C698D - 0x003C69DA (77 bytes, 26 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C698D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C698D: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x424), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C69D8; /* je: equal / zero */

loc_003C6999: ;
    PUSH32(esp, edi);

loc_003C699A: ;
    edi = MEM32(esi + 0x424);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C69ACu); RECOMP_ABI_CALL(0x003C65B1u, sub_003C65B1); /* call 0x003C65B1 */

loc_003C69AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C69D7; /* je: equal / zero */

loc_003C69B0: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x424) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003C69C3; /* jne: not equal / not zero */

loc_003C69BD: ;
    MEM32(esi + 0x428) = MEM32(esi + 0x428) & eax;

loc_003C69C3: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003C69CEu); RECOMP_ABI_CALL(0x003C663Cu, sub_003C663C); /* call 0x003C663C */

loc_003C69CE: ;
    _fa = (uint32_t)(MEM32(esi + 0x424)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x424), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C699A; /* jne: not equal / not zero */

loc_003C69D7: ;
    POP32(esp, edi);

loc_003C69D8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C69DA
 * Original: 0x003C69DA - 0x003C6A27 (77 bytes, 26 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C69DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C69DA: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x41C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6A25; /* je: equal / zero */

loc_003C69E6: ;
    PUSH32(esp, edi);

loc_003C69E7: ;
    edi = MEM32(esi + 0x41C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C69F9u); RECOMP_ABI_CALL(0x003C6592u, sub_003C6592); /* call 0x003C6592 */

loc_003C69F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C6A24; /* je: equal / zero */

loc_003C69FD: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x41C) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003C6A10; /* jne: not equal / not zero */

loc_003C6A0A: ;
    MEM32(esi + 0x420) = MEM32(esi + 0x420) & eax;

loc_003C6A10: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003C6A1Bu); RECOMP_ABI_CALL(0x003C663Cu, sub_003C663C); /* call 0x003C663C */

loc_003C6A1B: ;
    _fa = (uint32_t)(MEM32(esi + 0x41C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x41C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C69E7; /* jne: not equal / not zero */

loc_003C6A24: ;
    POP32(esp, edi);

loc_003C6A25: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C6A27
 * Original: 0x003C6A27 - 0x003C6A5A (51 bytes, 17 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6A27(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6A27: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax + 0x20)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x20), 3 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C6A39; /* jbe: below or equal (unsigned <=) */

loc_003C6A32: ;
    eax = 0x80000500u;
    goto loc_003C6A57;

loc_003C6A39: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C6A46; /* je: equal / zero */

loc_003C6A41: ;
    MEM32(esi + 0x24) = eax;
    goto loc_003C6A49;

loc_003C6A46: ;
    MEM32(edx + 0x28) = eax;

loc_003C6A49: ;
    MEM32(edx + 0x2C) = eax;
    PUSH32(esp, 0x003C6A51u); RECOMP_ABI_CALL(0x003C693Au, sub_003C693A); /* call 0x003C693A */

loc_003C6A51: ;
    eax = 0x40000000;
    POP32(esp, esi);

loc_003C6A57: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C6A5A
 * Original: 0x003C6A5A - 0x003C6A96 (60 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6A5A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6A5A: ;
    SET_LO16(eax, MEM16(edx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x5DCFE4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x5DCFE4) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C6A6D; /* jbe: below or equal (unsigned <=) */

loc_003C6A67: ;
    eax = 0x80000500u;
    esp += 4; return; /* ret */

loc_003C6A6D: ;
    eax = ecx + 0x424;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6A83; /* je: equal / zero */

loc_003C6A78: ;
    eax = MEM32(ecx + 0x428);
    MEM32(eax + 0x24) = edx;
    goto loc_003C6A85;

loc_003C6A83: ;
    MEM32(eax) = edx;

loc_003C6A85: ;
    MEM32(ecx + 0x428) = edx;
    PUSH32(esp, 0x003C6A90u); RECOMP_ABI_CALL(0x003C698Du, sub_003C698D); /* call 0x003C698D */

loc_003C6A90: ;
    eax = 0x40000000;
    esp += 4; return; /* ret */

}

/**
 * sub_003C6A96
 * Original: 0x003C6A96 - 0x003C6AD2 (60 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C6A96(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6A96: ;
    SET_LO16(eax, MEM16(edx + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x5DCFE0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x5DCFE0) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003C6AA9; /* jbe: below or equal (unsigned <=) */

loc_003C6AA3: ;
    eax = 0x80000500u;
    esp += 4; return; /* ret */

loc_003C6AA9: ;
    eax = ecx + 0x41C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C6ABF; /* je: equal / zero */

loc_003C6AB4: ;
    eax = MEM32(ecx + 0x420);
    MEM32(eax + 0x24) = edx;
    goto loc_003C6AC1;

loc_003C6ABF: ;
    MEM32(eax) = edx;

loc_003C6AC1: ;
    MEM32(ecx + 0x420) = edx;
    PUSH32(esp, 0x003C6ACCu); RECOMP_ABI_CALL(0x003C69DAu, sub_003C69DA); /* call 0x003C69DA */

loc_003C6ACC: ;
    eax = 0x40000000;
    esp += 4; return; /* ret */

}

/**
 * sub_003C6AD2
 * Original: 0x003C6AD2 - 0x003C6B58 (134 bytes, 53 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C6AD2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C6AD2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebx = ecx;
    edx = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6AE9u); RECOMP_ABI_CALL(0x003C65D0u, sub_003C65D0); /* call 0x003C65D0 */

loc_003C6AE9: ;
    MEM16(esi + 0x20) = LO16(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x003C6AF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6AF3: ;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) + 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    MEM8(ebp + -1) = LO8(eax);
    MEM16(esi + 0x22) = 2;
    eax = ZX8(MEM8(edi + 0x11));
    eax = eax - 0;
    if ((eax == 0)) goto loc_003C6B31; /* je: equal / zero */

loc_003C6B0C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C6B26; /* je: equal / zero */

loc_003C6B10: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003C6B1A; /* je: equal / zero */

loc_003C6B13: ;
    ebx = 0x80000600u;
    goto loc_003C6B40;

loc_003C6B1A: ;
    PUSH32(esp, esi);
    edx = edi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6B24u); RECOMP_ABI_CALL(0x003C6A27u, sub_003C6A27); /* call 0x003C6A27 */

loc_003C6B24: ;
    goto loc_003C6B3A;

loc_003C6B26: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6B2Fu); RECOMP_ABI_CALL(0x003C6A5Au, sub_003C6A5A); /* call 0x003C6A5A */

loc_003C6B2F: ;
    goto loc_003C6B3A;

loc_003C6B31: ;
    edx = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003C6B3Au); RECOMP_ABI_CALL(0x003C6A96u, sub_003C6A96); /* call 0x003C6A96 */

loc_003C6B3A: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003C6B48; /* jge: greater or equal (signed >=) */

loc_003C6B40: ;
    MEM16(esi + 0x22) = MEM16(esi + 0x22) & 0;
    MEM8(edi + 0x26) = MEM8(edi + 0x26) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x26)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_003C6B48: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x003C6B51u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003C6B51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_006F62B8
 * Original: 0x006F62B8 - 0x006F62C7 (15 bytes, 8 insns)
 * CC: cdecl, 1009 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_006F62B8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_006F62B8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    PUSH32(esp, 0 /* seg:es */);
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    if (_cf) (void)0; /* goto loc_006F62C3 - dead code, label not in function */ /* jb: below (unsigned <) */

loc_006F62C2: ;
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    esp += 4042; return; /* ret 4038 */

}
