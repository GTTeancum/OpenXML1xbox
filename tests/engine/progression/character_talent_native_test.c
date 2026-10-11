/* Execute the migrated generated methods, not a second C implementation of
 * their decisions. Only tree lookup, talent lookup and declared maximum are
 * fixture dependencies. Full transactions/refunds and save integration remain
 * separate acceptance checks. This fixture never loads player save files. */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static uint32_t memory[0x10000 / 4];
static uint32_t eax, ebx, ecx, edx, esi, edi, esp, g_ebp, g_seh_ebp;
#define XBOX_FS_BASE 0x100u
#define g_esp esp
#define XBOX_PTR(a) ((uint8_t*)memory+(uint32_t)(a))
/* This arithmetic/transaction fixture supplies an inline one-record map.
 * Ownership and 254-entry traversal are exercised by the separate native
 * character-map fixture, using the actual owner and allocator methods. */
static uint32_t xml1_character_talent_map_resolve(uint32_t p) { return p; }
static int xml1_character_talent_map_contains(uint32_t p) { (void)p; return 0; }
static void xml1_character_talent_map_retire(uint32_t p) { (void)p; }
#define MEM8(a) (((uint8_t *)memory)[(uint32_t)(a)])
#define MEM16(a) (*(uint16_t *)((uint8_t *)memory + (uint32_t)(a)))
#define MEM32(a) (*(uint32_t *)((uint8_t *)memory + (uint32_t)(a)))
#define LO8(r) ((r) & 255u)
#define LO16(r) ((r) & 65535u)
#define SET_LO16(r,v) ((r) = ((r) & 0xffff0000u) | ((uint32_t)(v) & 65535u))
#define SET_LO8(r,v) ((r) = ((r) & 0xffffff00u) | ((uint32_t)(v) & 255u))
#define ZX8(v) ((uint32_t)(uint8_t)(v))
#define PUSH32(s,v) do { uint32_t push_value_ = (v); (s) -= 4; MEM32(s) = push_value_; } while (0)
#define POP32(s,r) do { (r) = MEM32(s); (s) += 4; } while (0)
#define CMP_EQ(a,b) ((a)==(b))
#define CMP_NE(a,b) ((a)!=(b))
#define CMP_L(a,b) ((a)<(b))
#define CMP_LE(a,b) ((a)<=(b))
#define CMP_GE(a,b) ((a)>=(b))
#define CMP_BE(a,b) ((a)<=(b))
#define CMP_AE(a,b) ((a)>=(b))
#define CMP_G(a,b) ((a)>(b))
#define CMP_B(a,b) ((a)<(b))
#define TEST_NZ(a,b) (((a)&(b))!=0)
#define TEST_S(a,b) (((a)&(b))<0)
#define TEST_Z(a,b) (((a)&(b))==0)
#define RECOMP_ABI_CALL(address,fn) fn()
#include "engine/progression/character_talent_guest.h"

#define STATS 0x1000u
#define RECORD (STATS + 0x198u)
#define STACK 0xe000u
#define CHECK(test) do { if (!(test)) { \
    fprintf(stderr, "FAIL line %u: %s\n", (unsigned)__LINE__, #test); exit(1); \
} } while (0)
static unsigned maximum = 63, missing = 0;
static unsigned refund_calls, refund_expected_rank;
static uint8_t save_wire[2048];
static unsigned save_cursor, save_length;
static void sub_0006E7E0(void) {
    unsigned source = MEM32(esp + 4), length = MEM32(esp + 8);
    CHECK(ecx == 0x5000 && save_cursor + length <= sizeof(save_wire));
    memcpy(save_wire + save_cursor, (uint8_t *)memory + source, length);
    save_cursor += length; save_length = save_cursor; esp += 12;
}
static void sub_0006E830(void) {
    unsigned target = MEM32(esp + 4), length = MEM32(esp + 8);
    CHECK(ecx == 0x5000 && save_cursor + length <= save_length);
    memcpy((uint8_t *)memory + target, save_wire + save_cursor, length);
    save_cursor += length; esp += 12;
}
static void sub_00049040(void) {
    /* Empty previous snapshot: reference release is outside this fixture. */
    MEM32(ecx + 4) = 0x3fffffff; esp += 8;
}
static void sub_0013C900(void) { esp += 4; }
static void sub_000476E0(void) { MEM32(ecx + 0x40) = 0; esp += 4; }
static void sub_000479D0(void) { esp += 4; }
static void xml1_raven_trace_rank(uint32_t stats, uint32_t talent, uint32_t node) {
    CHECK(stats == STATS && talent == 0x2000);
    CHECK(node == (missing ? 0x3fffffffu : 0));
}
static void sub_000B3BE0(void) {
    CHECK(ecx == STATS + 0x30);
    eax = missing ? 0x3fffffff : 0;
    esp += 12; /* return address plus two tree arguments */
}
static void sub_000B5980(void) { eax = 0x3000; esp += 4; }
static void sub_000C9B50(void) {
    CHECK(ecx == STATS + 0x3c);
    eax = 0; missing = 0; esp += 4;
}
static void sub_00125DA0(void) { esp += 12; }
static void sub_001260E0(void) { eax = 0x6100; esp += 8; }
static void sub_00125890(void) { esp += 4; }
static void sub_00199EE0(void) { eax = ecx; esp += 4; }
static void sub_001994F0(void) {
    CHECK(ecx == STATS + 0x30 && MEM32(esp + 4) == STATS + 0x34);
    MEM32(STATS + 0x34) = 0;
    esp += 8;
}
static void sub_00171BB0(void) { eax = 0; esp += 8; }
static void sub_000EA8E0(void) {
    CHECK(ecx == STATS + 0x30);
    eax = 0x3fffffff; esp += 8;
}
static void talent_lookup(uint32_t target, uint32_t before) {
    if (target == 0x1234) {
        CHECK(ecx == 0x3000);
        eax = 0x3200;
        esp += 8;
    } else if (target == 0x5678) {
        CHECK(target == 0x5678 && ecx == 0x3200);
        eax = maximum;
        esp += 4;
    } else if (target == 0x789a) {
        CHECK(ecx == 0x3000); /* Loaded talent reference acquisition. */
        esp += 8;
    } else if (target == 0x89ab || target == 0x9abc) {
        CHECK(ecx == 0x3000);
        eax = target == 0x89ab ? 1 : 42; /* Existing definition / its ID. */
        esp += 8;
    } else {
        unsigned rank = MEM32(esp + 4), result = MEM32(esp + 8);
        CHECK(target == 0x6789 && ecx == 0x3200);
        CHECK(rank == refund_expected_rank);
        --refund_expected_rank; ++refund_calls;
        MEM32(result) = 1 + rank % 3;
        esp += 12;
    }
    CHECK(esp == before);
}
#define RECOMP_ICALL_SAFE(target,before) talent_lookup(target,before)

#include "native-rank-methods.inc"

static unsigned call(void (*method)(void), unsigned value, unsigned arguments) {
    esp = STACK; ecx = STATS;
    ebx = 0x11111111; esi = 0x22222222; edi = 0x33333333;
    g_ebp = g_seh_ebp = 0x44444444;
    if (arguments == 2) PUSH32(esp, value);
    if (arguments) PUSH32(esp, arguments == 3 ? value : 0x2000); /* scalar or talent ID pointer */
    PUSH32(esp, 0xabcdef);
    method();
    CHECK(esp == STACK);
    CHECK(ebx == 0x11111111 && esi == 0x22222222 && edi == 0x33333333);
    return LO8(eax);
}
static unsigned get(unsigned field) {
    return xml1_talent_record_get(MEM32(RECORD), field);
}
static void set(unsigned field, unsigned value) {
    xml1_talent_guest_set(RECORD, field, value);
}

int main(void) {
    unsigned rank, pending, bonus;
    MEM32(0x3000) = 0x3100;
    MEM32(0x3114) = 0x1234;
    MEM32(0x3200) = 0x3300;
    MEM32(0x3304) = 0x5678;
    MEM32(0x3334) = 0x6789;
    MEM32(0x312c) = 0x789a;
    MEM32(0x313c) = 0x89ab;
    MEM32(0x311c) = 0x9abc;
    /* Every supported current rank, including the old nibble boundary. */
    for (rank = 0; rank <= 63; ++rank) {
        MEM32(RECORD) = 0;
        set(XML1_TALENT_BONUS, 2);
        set(XML1_TALENT_PENDING, 3);
        maximum = 63;
        call(sub_000487F0, rank, 2);
        CHECK(call(sub_00040DB0, 0, 1) == rank);
        CHECK(call(sub_00048270, 0, 1) == 3);
        CHECK(call(sub_000482B0, 0, 1) == 2);
        CHECK(call(sub_000480F0, rank, 2) == 1 && get(XML1_TALENT_LIMIT) == rank);
        CHECK(call(sub_000481A0, rank, 2) == 1 && get(XML1_TALENT_BASELINE) == rank);
        CHECK(get(XML1_TALENT_CURRENT) == rank && get(XML1_TALENT_PENDING) == 3 &&
              get(XML1_TALENT_BONUS) == 2);
        maximum = 20;
        call(sub_000487F0, rank, 2);
        CHECK(get(XML1_TALENT_CURRENT) == (rank > 20 ? 20 : rank));
    }
    /* The native setters reject current+pending+bonus beyond the declaration.
     * Test the full supported range of each participant, not only Bishop's 20. */
    maximum = 63;
    for (rank = 0; rank <= 63; ++rank) for (pending = 0; pending <= 63; ++pending) {
        MEM32(RECORD) = 0;
        set(XML1_TALENT_LIMIT, pending);
        maximum = rank;
        CHECK(call(sub_00048140, 0, 1) == (pending && pending < rank ? pending : rank));
    }
    maximum = 63;
    for (rank = 0; rank <= 63; ++rank) for (pending = 0; pending <= 63; ++pending)
        for (bonus = 0; bonus <= 63; ++bonus) {
            uint32_t before;
            unsigned accepted = rank + pending + bonus <= maximum;
            MEM32(RECORD) = 0;
            set(XML1_TALENT_CURRENT, rank);
            set(XML1_TALENT_BONUS, bonus);
            before = MEM32(RECORD);
            CHECK(call(sub_00048860, pending, 2) == accepted);
            CHECK(get(XML1_TALENT_CURRENT) == rank && get(XML1_TALENT_BONUS) == bonus);
            CHECK(accepted ? get(XML1_TALENT_PENDING) == pending : MEM32(RECORD) == before);
            set(XML1_TALENT_PENDING, pending);
            set(XML1_TALENT_BONUS, 0);
            before = MEM32(RECORD);
            CHECK(call(sub_000482F0, bonus, 2) == accepted);
            CHECK(get(XML1_TALENT_CURRENT) == rank && get(XML1_TALENT_PENDING) == pending);
            CHECK(accepted ? get(XML1_TALENT_BONUS) == bonus : MEM32(RECORD) == before);
        }
    /* Missing IDs must not access record 0, which holds a visible sentinel. */
    missing = 1;
    MEM32(RECORD) = 0x12345678;
    CHECK(call(sub_00040DB0, 0, 1) == 0);
    CHECK(call(sub_00048270, 0, 1) == 0);
    CHECK(call(sub_000482B0, 0, 1) == 0);
    CHECK(call(sub_000480F0, 20, 2) == 0);
    CHECK(call(sub_000481A0, 20, 2) == 0);
    CHECK(call(sub_000482F0, 20, 2) == 0);
    CHECK(call(sub_00048860, 20, 2) == 0);
    call(sub_000487F0, 20, 2);
    CHECK(MEM32(RECORD) == 0x12345678);
    /* Native copy is cdecl and must preserve the fourth byte and neighbors. */
    MEM32(0x4000) = 0x3abcdef0;
    MEM32(0x4100) = 0xa5a5a5a5;
    MEM32(0x4104) = 0xdeadbeef;
    esp = STACK;
    PUSH32(esp, 0x4000); PUSH32(esp, 0x4100); PUSH32(esp, 0xabcdef);
    sub_000476A0();
    CHECK(esp == STACK - 8 && MEM32(0x4100) == 0x3abcdef0 && MEM32(0x4104) == 0xdeadbeef);
    /* Insertion has a separate inlined copy, exercised with all five fields. */
    MEM32(RECORD) = 0;
    MEM32(STATS + 0x1d8) = 0;
    MEM8(0x2000) = 42;
    esp = STACK; ecx = STATS + 0x30;
    PUSH32(esp, 0x4000); PUSH32(esp, 0x2000); PUSH32(esp, 0xabcdef);
    sub_00048B40();
    CHECK(esp == STACK && MEM32(RECORD) == 0x3abcdef0);
    CHECK(MEM8(STATS + 0x48) == 42 && MEM32(STATS + 0x1d8) == 1);
    missing = 0;
    MEM32(STATS + 0x40) = 0x3fffffff; /* Single-node tree, no left child. */
    MEM32(STATS + 0x194) = 1;
    for (rank = 0; rank <= 63; ++rank) for (pending = 0; pending + rank <= 63; ++pending) {
        unsigned expected_points = 7, i;
        MEM32(RECORD) = 0;
        set(XML1_TALENT_CURRENT, rank);
        set(XML1_TALENT_PENDING, pending);
        set(XML1_TALENT_BASELINE, 17);
        MEM8(STATS + 0x2b) = 7;
        refund_calls = 0; refund_expected_rank = rank + pending - 1;
        for (i = rank; i < rank + pending; ++i) expected_points += 1 + i % 3;
        CHECK(call(sub_00048510, 0, 0) == (pending != 0));
        CHECK(get(XML1_TALENT_CURRENT) == rank && get(XML1_TALENT_PENDING) == 0);
        CHECK(get(XML1_TALENT_BASELINE) == 17 && refund_calls == pending);
        CHECK(MEM8(STATS + 0x2b) == expected_points);
        set(XML1_TALENT_PENDING, pending);
        CHECK(call(sub_00048950, 0, 0) == (pending != 0));
        CHECK(get(XML1_TALENT_CURRENT) == rank + pending && get(XML1_TALENT_PENDING) == 0);
        CHECK(get(XML1_TALENT_BASELINE) == 17);
    }
    MEM8(STATS + 0x2b) = 0;
    MEM8(STATS + 0x2c) = 0;
    for (pending = 0; pending <= 63; ++pending) {
        MEM32(RECORD) = 0;
        set(XML1_TALENT_PENDING, pending);
        CHECK(call(sub_00048480, 1, 3) == (pending != 0));
        CHECK(call(sub_00048480, 0, 3) == 0);
    }
    /* Commit retains the native lower-of-declaration/override behavior. */
    for (rank = 1; rank <= 63; ++rank) {
        MEM32(RECORD) = 0;
        set(XML1_TALENT_CURRENT, 15);
        set(XML1_TALENT_PENDING, 5);
        set(XML1_TALENT_LIMIT, rank);
        maximum = 20;
        call(sub_00048950, 0, 0);
        CHECK(get(XML1_TALENT_CURRENT) == (rank < 20 ? rank : 20));
        CHECK(get(XML1_TALENT_PENDING) == 0);
    }
    /* Execute complete native record serialization and deserialization. Check
     * the following field bytes too: wrong record widths would consume them. */
    MEM32(RECORD) = 0x12fc2054;
    MEM32(STATS + 0x34) = 0;
    MEM32(STATS + 0x40) = 0x3fffffff;
    MEM32(STATS + 0x194) = 1;
    MEM8(STATS + 0x48) = 42;
    MEM32(STATS + 0x1e0) = 2;
    MEM8(STATS + 0x1dc) = 5; MEM8(STATS + 0x1dd) = 6;
    save_cursor = save_length = 0;
    CHECK(xml1_talent_stream_begin(0x5000, 2));
    call(sub_00047F80, 0x5000, 3);
    CHECK(save_length == 53 && save_wire[44] == 1 && save_wire[45] == 42);
    CHECK(save_wire[46] == 0x54 && save_wire[49] == 0x12 && save_wire[50] == 2);
    MEM32(RECORD) = 0;
    save_cursor = 0;
    call(sub_00049280, 0x5000, 3);
    CHECK(save_cursor == 53 && MEM32(RECORD) == 0x12fc2054);
    CHECK(MEM32(STATS + 0x1e0) == 2 && MEM8(STATS + 0x1dc) == 5 && MEM8(STATS + 0x1dd) == 6);
    /* Existing v1 and retail records share the same three-byte representation. */
    memmove(save_wire + 49, save_wire + 50, 3);
    save_wire[46] = 0x21; save_wire[47] = 0x43; save_wire[48] = 0xf5;
    save_length = 52;
    for (rank = 0; rank <= 1; ++rank) {
        CHECK(xml1_talent_stream_begin(0x5000, rank));
        CHECK(xml1_talent_stream_record_bytes(0x5001) == 0);
        save_cursor = 0;
        call(sub_00049280, 0x5000, 3);
        for (pending = 0; pending < 5; ++pending) CHECK(get(pending) == pending + 1);
        CHECK(save_cursor == 52 && MEM8(STATS + 0x1dc) == 5 && MEM8(STATS + 0x1dd) == 6);
    }
    CHECK(!xml1_talent_stream_begin(0x5000, 3));
    CHECK(xml1_talent_stream_record_bytes(0x5000) == 0);
    /* Initialize from a talent declaration with deliberately dirty stack and
     * record bytes. Registration must clear every other expanded field. */
    maximum = 63;
    MEM32(0x6008) = 1; /* Native node type required by 00048D50. */
    for (rank = 0; rank <= 63; ++rank) {
        memset((uint8_t *)memory + STACK - 256, 0xa5, 256);
        MEM32(RECORD) = 0xffffffff;
        MEM32(STATS + 0x194) = 0;
        MEM32(STATS + 0x34) = 0x3fffffff;
        missing = 1;
        esp = STACK; ecx = STATS;
        PUSH32(esp, 0); PUSH32(esp, rank); PUSH32(esp, 0); PUSH32(esp, 0x6000); PUSH32(esp, 0xabcdef);
        sub_00048D50();
        CHECK(esp == STACK && get(XML1_TALENT_CURRENT) == rank);
        for (pending = 1; pending < 5; ++pending) CHECK(get(pending) == 0);
    }
    puts("PASS seventeen migrated native talent methods: initialization, progression, refunds, commit, copies, v2 saves, legacy record loads and ABI");
    return 0;
}
