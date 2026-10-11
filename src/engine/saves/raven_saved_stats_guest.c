#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/saves/raven_saved_stats_guest.h"
#include "engine/saves/raven_saved_stats_stream.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "game/xml1/character_limits.h"
#include <stdio.h>
#include <stdlib.h>

static void check_stack(uint32_t expected) {
    if(g_esp != expected) {
        fputs("[SAVED STATS ERROR] Native loader ABI\n",stderr);
        _Exit(4);
    }
}
static uint32_t pending_owner, startup_stream;
int xml1_saved_stats_begin(void) {
    if(pending_owner||startup_stream)return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A81F0u,sub_000A81F0);check_stack(sp);
    uint32_t owner=g_eax;int accepted=0;
    /* Reuse the normal local file picker, enumeration and read error handling.
     * XML2's numeric mode5 is NOT portable: XML1 reserves that for options.
     * Refuse to replace an already active user operation or retained buffer. */
    if(!MEM32(owner+0xd4)&&!MEM32(owner+0xe0)) {
        uint32_t target=MEM32(MEM32(owner)+0x10);
        g_ecx=owner;PUSH32(g_esp,3);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,sp);check_stack(sp);
        accepted=xml1_saved_stats_arm(owner);
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
    return accepted;
}
void xml1_saved_stats_script(void) {
    uint32_t sp=g_esp;
    /* XML2 AE0F0 has no arguments and returns the null script result. */
    if(!xml1_saved_stats_begin())
        fputs("[SAVED STATS] Import not started: save operation busy\n",stderr);
    g_eax=0;g_esp=sp+4;
}
int xml1_saved_stats_arm(uint32_t owner) {
    if(pending_owner || startup_stream || owner < 0x10000 || owner > 0x08000000-0x778 ||
       MEM32(owner+0xd4)!=3 || MEM32(owner+0xe0)) return 0;
    pending_owner=owner;
    return 1;
}
uint32_t xml1_saved_stats_detach(uint32_t owner) {
    if(!owner || owner!=pending_owner) return 0;
    /* A5380 itself does not dispose a successfully read buffer. Clear both
     * ownership records BEFORE releasing it, including reentrant aborts and
     * replacement through A5230. Failed native reads already clear +E0. */
    pending_owner=0;
    uint32_t stream=MEM32(owner+0xe0);
    MEM32(owner+0xe0)=0;
    return stream;
}
static void release_stream(uint32_t stream) {
    if(!stream)return;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    /* Pair the native save allocation123530 with its native release123550,
     * rather than assuming that a guest allocation is a host heap pointer. */
    PUSH32(g_esp,stream);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00123550u,sub_00123550);
    g_esp+=4;check_stack(sp);
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
void xml1_saved_stats_cancel(uint32_t owner) {
    release_stream(xml1_saved_stats_detach(owner));
}
static int stream_offset(uint32_t stream,size_t *offset) {
    return stream>=0x10000 && stream<=0x08000000-0x2fc00-0x80 &&
        MEM32(stream+0x2fc00)==stream &&
        raven_saved_stats_character_offset((const void*)XBOX_PTR(stream),0x2fc00,offset);
}
void xml1_saved_stats_after_reset(void) {
    xml1_campaign_startup_after_reset();
    if(!startup_stream)return;
    /* The native command is synchronous (11C680 -> registered newgame).
     * Import AFTER18CF90 resets the campaign, BEFORE18D118 begins Alison.
     * Clearing ownership first also prevents a nested startup from reusing it. */
    uint32_t stream=startup_stream;startup_stream=0;
    if(!xml1_saved_stats_read(stream)) {
        release_stream(stream);
        fputs("[SAVED STATS ERROR] Startup stream changed after admission\n",stderr);
        _Exit(4);
    }
    /* beginmission alison calls Characters::RestoreSnapshot at18DAED.
     * Its existing validity flag must be clear so the imported live records
     * become the new baseline instead of restoring the source save snapshot.
     * This reuses XML1's snapshot protocol; no new character serialization. */
    uint32_t manager=MEM32(0x48d59c);
    MEM8(manager+XML1_MANAGER_OFFSET(0xdac4))=0;
    release_stream(stream);
}
int xml1_saved_stats_complete(uint32_t owner) {
    if(!owner||owner!=pending_owner)return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    uint32_t stream=MEM32(owner+0xe0);size_t offset;
    int accepted=stream_offset(stream,&offset);
    stream=xml1_saved_stats_detach(owner);
    /* This request supplies its own newgame continuation. Avoid the native
     * cleanup flag2 scheduling another reset after importing the records. */
    MEM8(owner+0xde)&=(uint8_t)~2u;
    g_ecx=owner;PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000A5380u,sub_000A5380);check_stack(sp);
    if(accepted && xml1_campaign_startup_begin()) {
        startup_stream=stream;
        PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0011CD90u,sub_0011CD90);check_stack(sp);
        uint32_t target=MEM32(MEM32(g_eax)+0x14);
        g_ecx=g_eax;PUSH32(g_esp,0x003d2df8u);PUSH32(g_esp,0);
        RECOMP_ICALL_SAFE(target,sp);check_stack(sp);
        xml1_campaign_startup_end();
        /* If no registered command ran, retain neither the buffer nor a latent
         * import that could affect a later unrelated new-game operation. */
        if(startup_stream) {
            stream=startup_stream;startup_stream=0;release_stream(stream);
            fputs("[SAVED STATS ERROR] Native startup did not consume import\n",stderr);
        }
    } else {
        release_stream(stream);
        fputs(accepted?"[SAVED STATS ERROR] Another startup owns the pending difficulty\n":
                       "[SAVED STATS ERROR] Rejected decoded save prefix\n",stderr);
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
    return 1;
}
int xml1_saved_stats_read(uint32_t stream) {
    enum { payload_bytes = 0x2fc00 };
    size_t character_offset;
    /* A5420 owns the allocation until its load callback returns. In particular,
     * never retain this pointer across the following123550 buffer release.
     * Reject before the native loaders mutate state. Their own existing
     * character-version/identity checks remain authoritative after admission. */
    if(!stream_offset(stream,&character_offset))
        return 0;
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    MEM32(stream + payload_bytes)=stream+(uint32_t)character_offset;

    /* Same manager and virtual loader as XML1's full campaign load7065A..70664.
     * This keeps expanded rosters, saved talent identities, selected powers,
     * snapshots and vitality in their existing native/generated load path. */
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00056E90u,sub_00056E90);check_stack(sp);
    uint32_t manager=g_eax,target=MEM32(MEM32(manager)+0x9c);
    g_ecx=manager;PUSH32(g_esp,stream);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,sp);check_stack(sp);

    /* Character loading advances the native cursor through its variable-length
     * section. Inventory immediately follows (7066A..70674); do not calculate
     * its offset from a fixed roster size or duplicate its record decoder. */
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0007F850u,sub_0007F850);check_stack(sp);
    manager=g_eax;target=MEM32(MEM32(manager)+4);
    g_ecx=manager;PUSH32(g_esp,stream);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(target,sp);check_stack(sp);

    /* Deliberately stop before mission/map/python/extraction-state loaders.
     * The frontend completion path must perform its own post-import routing;
     * this function neither frees the borrowed stream nor replaces the game. */
    g_eax=ax;g_ecx=cx;g_edx=dx;
    return 1;
}
