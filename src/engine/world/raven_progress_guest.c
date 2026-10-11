#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/world/raven_progress_guest.h"
#include "engine/world/raven_progress_extension.h"
#include "engine/world/raven_progress_stream.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/inventory/raven_stash_stream_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* XML1 8C980 owns this singleton. Do not attach state to arbitrary objects
 * that happen to reuse one of its methods, nor write into native padding.
 * Native construction initializes the adjunct before any script access. */
#define PROGRESS_OWNER 0x004A0210u
static raven_progress_extension progress;
static void progress_require_owner(void) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0008C980u,sub_0008C980);
    if(g_esp!=sp || g_eax!=PROGRESS_OWNER) {
        fprintf(stderr,"[PROGRESS ERROR] Singleton access ABI\n");_Exit(4);
    }
    g_eax=ax;g_ecx=cx;g_edx=dx;
}
int xml1_progress_hard_unlocked(void) {
    progress_require_owner();
    return progress.hard_unlocked!=0;
}
void xml1_progress_unlock_hard(void) {
    progress_require_owner();
    /* XML2 AE310/9E7B0 sets the progress flag; saving belongs to the normal
     * save/options lifecycle, not an implicit write from this command. */
    raven_progress_extension_set_hard(&progress,1);
}
void xml1_progress_campaign_completed(uint32_t owner,unsigned completed) {
    /* XML2 credits1BD838 marks completion, then1BD847..1BD85B unlocks hard
     * only after a normal-difficulty campaign. XML1 already owns completion
     * and its notifications: add only the missing persistent unlock. Do not
     * clear earned unlocks on reset or require a false-to-true flag transition
     * (an earlier easy completion can leave the native completion bit set). */
    if(owner==PROGRESS_OWNER && (completed&1u) && xml1_campaign_difficulty()==1)
        raven_progress_extension_set_hard(&progress,1);
}
void xml1_progress_construct(uint32_t owner) {
    if (owner == PROGRESS_OWNER) raven_progress_extension_init(&progress);
}
void xml1_progress_snapshot(uint32_t owner, unsigned groups) {
    if (owner == PROGRESS_OWNER) raven_progress_extension_snapshot(&progress, groups);
}
void xml1_progress_restore(uint32_t owner, unsigned groups) {
    if (owner == PROGRESS_OWNER) raven_progress_extension_restore(&progress, groups);
}
void xml1_progress_merge(uint32_t owner, unsigned groups) {
    if (owner == PROGRESS_OWNER) raven_progress_extension_merge(&progress, groups);
}

static size_t progress_stream_room(uint32_t stream, uint32_t* cursor) {
    const uint32_t limit=0x2fc00;
    if(stream<0x10000 || stream>0x08000000-limit-4) {
        fprintf(stderr,"[PROGRESS ERROR] Invalid stream address\n"); _Exit(4);
    }
    *cursor=MEM32(stream+limit);
    if(*cursor<stream || *cursor-stream>=limit) {
        fprintf(stderr,"[PROGRESS ERROR] Invalid stream cursor\n"); _Exit(4);
    }
    return limit-(*cursor-stream);
}
void xml1_progress_campaign_save(uint32_t stream) {
    uint32_t cursor; size_t room=progress_stream_room(stream,&cursor),written=0;
    /* Native 6E7E0 uses a strict less-than bound. Keep one byte beyond this
     * adjunct; the later native subsystems retain their own capacity checks. */
    if(!raven_progress_section_write((void*)XBOX_PTR(cursor),room-1,progress.hard_unlocked,&written)) {
        fprintf(stderr,"[PROGRESS ERROR] No room for progress extension\n"); _Exit(4);
    }
    MEM32(stream+0x2fc00)=cursor+(uint32_t)written;
    xml1_campaign_extra_save(stream);
    /* Inventory singleton7F850 returns499820. Native campaign save has already
     * written that inventory before entering this progress stream boundary. */
    xml1_stash_stream_save(0x499820u,stream);
}
void xml1_progress_campaign_load(uint32_t owner,uint32_t stream) {
    uint32_t cursor; size_t room=progress_stream_room(stream,&cursor);
    const void* source=(const void*)XBOX_PTR(cursor);
    int unlocked=0;
    if(raven_progress_section_present(source,room)) {
        if(!raven_progress_section_read(source,room,&unlocked)) {
            fprintf(stderr,"[PROGRESS ERROR] Invalid progress extension\n"); _Exit(4);
        }
        MEM32(stream+0x2fc00)=cursor+RAVEN_PROGRESS_SECTION_BYTES;
    }
    /* Legacy records explicitly load no additional progress. Native callers
     * snapshot/merge earned progress when appropriate; never merge here. */
    if(owner==PROGRESS_OWNER)raven_progress_extension_set_hard(&progress,unlocked);
    xml1_campaign_extra_load(stream);
    xml1_stash_stream_load(0x499820u,stream);
}

static void (*options_fixture_terminal)(int reading);
static uint32_t active_options_write;
uint32_t xml1_progress_options_disposition(uint32_t buffer) {
    /* XML1's fixed-size writer used OPEN_ALWAYS. Our optional adjunct can
     * shrink on a later write: recreate only the adapted payload's file, or
     * the native reader's EOF check would reject its stale trailing bytes.
     * XAPI19E34B maps CREATE_ALWAYS(2) to FILE_OVERWRITE_IF(5). */
    return active_options_write && buffer==active_options_write ? 2u : 4u;
}
int xml1_progress_options_io(int reading) {
    const uint32_t entry=g_esp,owner=g_ecx;
    const uint32_t buffer=MEM32(entry+12),size_arg=MEM32(entry+8),device=MEM32(entry+4);
    if(buffer!=PROGRESS_OWNER+4)return 0;
    if(reading && (size_arg<0x10000 || size_arg>0x07fffffcu))return 0;
    if((reading?MEM32(size_arg):size_arg)!=0x194)return 0;
    /* MemoryCard50/54 synchronously signs/writes or verifies/reads the payload.
     * Give it a temporary enlarged record, not the live owner's adjacent
     * snapshot storage. Its original prefix, signature, EOF and error handling
     * remain native. Recursive entry bypasses this adapter by buffer identity. */
    g_esp-=0x1c0;
    const uint32_t frame=g_esp,payload=frame+16;
    const uint32_t capacity=0x194+RAVEN_PROGRESS_SECTION_BYTES;
    memset((void*)XBOX_PTR(payload),0,capacity);
    size_t appended=0;
    if(!reading) {
        memcpy((void*)XBOX_PTR(payload),(const void*)XBOX_PTR(buffer),0x194);
        if(!raven_progress_section_write((void*)XBOX_PTR(payload+0x194),RAVEN_PROGRESS_SECTION_BYTES,
                                         progress.hard_unlocked,&appended))_Exit(4);
    }
    MEM32(frame)=capacity;
    PUSH32(g_esp,payload);
    PUSH32(g_esp,reading?frame:0x194+(uint32_t)appended);
    PUSH32(g_esp,device);PUSH32(g_esp,0);
    g_ecx=owner;
    const uint32_t previous_write=active_options_write;
    if(!reading)active_options_write=payload;
    if(options_fixture_terminal)options_fixture_terminal(reading);
    else if(reading) { RECOMP_ABI_CALL(0x00120090u,sub_00120090); }
    else { RECOMP_ABI_CALL(0x0011FE10u,sub_0011FE10); }
    active_options_write=previous_write;
    if(g_esp!=frame) { fprintf(stderr,"[PROGRESS ERROR] Options I/O ABI\n"); _Exit(4); }
    if(reading && (g_eax&0xff)) {
        const uint32_t actual=MEM32(frame);
        int unlocked=0;
        int valid=actual==0x194;
        if(actual==capacity)
            valid=raven_progress_section_read((const void*)XBOX_PTR(payload+0x194),RAVEN_PROGRESS_SECTION_BYTES,&unlocked);
        if(valid) {
            memcpy((void*)XBOX_PTR(buffer),(const void*)XBOX_PTR(payload),0x194);
            raven_progress_extension_set_hard(&progress,unlocked);
            MEM32(size_arg)=0x194; /* caller owns only the original-sized record */
        } else {
            g_eax&=0xffffff00u;
            fprintf(stderr,"[PROGRESS ERROR] Rejected options progress payload\n");
        }
    }
    g_esp=entry+16; /* original thiscall RET 12, including return address */
    return 1;
}

static unsigned char options_fixture_bytes[0x1a4];
static uint32_t options_fixture_size;
static int options_fixture_failure,options_fixture_bad;
static void progress_options_fixture_terminal(int reading) {
    uint32_t buffer=MEM32(g_esp+12),size_arg=MEM32(g_esp+8);
    uint32_t entry=g_esp;
    if(xml1_progress_options_io(reading) || g_esp!=entry)options_fixture_bad=1;
    if(xml1_progress_options_disposition(buffer)!=(reading?4u:2u) ||
       xml1_progress_options_disposition(PROGRESS_OWNER+4)!=4u)options_fixture_bad=1;
    if(buffer==PROGRESS_OWNER+4 || MEM32(g_esp+4)!=2 || g_ecx!=0x502888u)options_fixture_bad=1;
    /* This is the only file terminal substitute; it must see the adapter's
     * temporary buffer and its capacity, never the native owner storage. */
    if(reading) {
        if(MEM32(size_arg)!=sizeof(options_fixture_bytes))options_fixture_bad=1;
        memcpy((void*)XBOX_PTR(buffer),options_fixture_bytes,options_fixture_size);
        MEM32(size_arg)=options_fixture_size;
    } else {
        if(size_arg>sizeof(options_fixture_bytes)) { options_fixture_bad=1;size_arg=0; }
        memcpy(options_fixture_bytes,(const void*)XBOX_PTR(buffer),size_arg);
        options_fixture_size=size_arg;
    }
    g_eax=options_fixture_failure?0:1;g_esp+=16;
}
static int progress_options_fixture(uint32_t pool) {
    const uint32_t sp=g_esp;
    unsigned char original[0x194];
    memcpy(original,(const void*)XBOX_PTR(PROGRESS_OWNER+4),sizeof(original));
    options_fixture_bad=0;options_fixture_failure=0;
    options_fixture_terminal=progress_options_fixture_terminal;
    for(unsigned unlocked=0;unlocked<2;++unlocked) {
        progress.hard_unlocked=(uint8_t)unlocked;
        g_ecx=0x502888u;PUSH32(g_esp,PROGRESS_OWNER+4);PUSH32(g_esp,0x194);PUSH32(g_esp,2);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0011FE10u,sub_0011FE10);
        if(g_esp!=sp || !(g_eax&0xff) || options_fixture_size!=0x194+16*unlocked ||
           memcmp(options_fixture_bytes,original,sizeof(original)))options_fixture_bad=1;
        memset((void*)XBOX_PTR(PROGRESS_OWNER+4),0x5a,0x194);
        progress.hard_unlocked=(uint8_t)!unlocked;MEM32(pool)=0x194;
        g_ecx=0x502888u;PUSH32(g_esp,PROGRESS_OWNER+4);PUSH32(g_esp,pool);PUSH32(g_esp,2);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00120090u,sub_00120090);
        if(g_esp!=sp || !(g_eax&0xff) || MEM32(pool)!=0x194 || progress.hard_unlocked!=unlocked ||
           memcmp((const void*)XBOX_PTR(PROGRESS_OWNER+4),original,sizeof(original)))options_fixture_bad=1;
    }
    /* Corrupt extension, unexpected short record and terminal I/O failure
     * must all leave native bytes, added progress and caller length intact. */
    for(unsigned invalid=0;invalid<3;++invalid) {
        options_fixture_size=sizeof(options_fixture_bytes);
        size_t written;
        raven_progress_section_write(options_fixture_bytes+0x194,16,1,&written);
        if(invalid==0)options_fixture_bytes[0x194+8]=2;
        if(invalid==1)options_fixture_size=0x193;
        options_fixture_failure=invalid==2;
        progress.hard_unlocked=0;MEM32(pool)=0x194;
        memset((void*)XBOX_PTR(PROGRESS_OWNER+4),0x6b,0x194);
        g_ecx=0x502888u;PUSH32(g_esp,PROGRESS_OWNER+4);PUSH32(g_esp,pool);PUSH32(g_esp,2);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00120090u,sub_00120090);
        if(g_esp!=sp || (g_eax&0xff) || MEM32(pool)!=0x194 || progress.hard_unlocked)options_fixture_bad=1;
        for(unsigned i=0;i<0x194;++i)if(MEM8(PROGRESS_OWNER+4+i)!=0x6b)options_fixture_bad=1;
    }
    options_fixture_failure=1;
    progress.hard_unlocked=1;
    g_ecx=0x502888u;PUSH32(g_esp,PROGRESS_OWNER+4);PUSH32(g_esp,0x194);PUSH32(g_esp,2);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0011FE10u,sub_0011FE10);
    if(g_esp!=sp || (g_eax&0xff) || !progress.hard_unlocked)options_fixture_bad=1;
    options_fixture_terminal=NULL;options_fixture_failure=0;
    if(xml1_progress_options_disposition(0)!=4u)options_fixture_bad=1;
    memcpy((void*)XBOX_PTR(PROGRESS_OWNER+4),original,sizeof(original));
    return options_fixture_bad;
}

int xml1_progress_fixture(uint32_t pool) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    const raven_progress_extension saved_progress=progress;
    const uint32_t saved_initialized=MEM32(0x4A0540u);
    unsigned char saved_native[0x330];
    memcpy(saved_native, (const void*)XBOX_PTR(PROGRESS_OWNER), sizeof(saved_native));
    memset((void*)XBOX_PTR(PROGRESS_OWNER), 0, sizeof(saved_native));
    memcpy((void*)XBOX_PTR(pool), (const void*)XBOX_PTR(0x003CF9C4u), 0x9c);
    /* Native apply-options is the sole substituted callback: use an existing
     * no-argument getter with a balanced RET. This fixture exercises native
     * snapshot/copy/merge, not audio or renderer option application. */
    MEM32(pool+0x40)=0x000801F0u;
    MEM32(PROGRESS_OWNER)=pool;
    MEM32(0x4A0540u)=saved_initialized|1;
    MEM8(PROGRESS_OWNER+0x195)=2; /* existing campaign-complete flag */
    xml1_progress_construct(PROGRESS_OWNER);
    int failed=progress.hard_unlocked || progress.snapshot_hard_unlocked;
    if(xml1_progress_hard_unlocked())failed=1;
    xml1_progress_unlock_hard();xml1_progress_unlock_hard();
    if(!xml1_progress_hard_unlocked() || MEM8(PROGRESS_OWNER+0x195)!=2 || g_esp!=sp)failed=1;
    {
        uint32_t game_initialized=MEM32(0x49954c);
        /* Isolate singleton access from full world/CRT construction, as in
         * the campaign-state fixture. Its getter only needs this init bit. */
        MEM32(0x49954c)=game_initialized|1;
        int32_t prior_difficulty=xml1_campaign_difficulty();
        for(int32_t mode=0;mode<3;++mode) {
            xml1_campaign_set_difficulty(mode);
            progress.hard_unlocked=0;
            xml1_progress_campaign_completed(pool,1); /* unrelated owner */
            xml1_progress_campaign_completed(PROGRESS_OWNER,2); /* native stored bit is zero */
            if(progress.hard_unlocked)failed=1;
            /* Existing completion bit bypasses the native first-completion
             * popup; execute the real setter and installed hook, not UI. */
            MEM8(PROGRESS_OWNER+0x195)=2;
            g_ecx=PROGRESS_OWNER;PUSH32(g_esp,1);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0008C300u,sub_0008C300);
            if(g_esp!=sp || progress.hard_unlocked!=(mode==1) ||
               MEM8(PROGRESS_OWNER+0x195)!=2)failed=1;
            g_ecx=PROGRESS_OWNER;PUSH32(g_esp,0);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0008C300u,sub_0008C300);
            if(g_esp!=sp || progress.hard_unlocked!=(mode==1) ||
               MEM8(PROGRESS_OWNER+0x195)!=0)failed=1;
        }
        xml1_campaign_set_difficulty(prior_difficulty);
        MEM32(0x49954c)=game_initialized;
        MEM8(PROGRESS_OWNER+0x195)=2;
    }
    for (unsigned groups=0; groups<4; ++groups) {
        progress.hard_unlocked=1; progress.snapshot_hard_unlocked=0;
        g_ecx=PROGRESS_OWNER; PUSH32(g_esp,groups); PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0008C820u,sub_0008C820);
        if(g_esp!=sp || !progress.hard_unlocked || progress.snapshot_hard_unlocked!=(groups&1))failed=1;

        progress.hard_unlocked=0; progress.snapshot_hard_unlocked=1;
        g_ecx=PROGRESS_OWNER; PUSH32(g_esp,groups); PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0008C930u,sub_0008C930);
        if(g_esp!=sp || progress.hard_unlocked!=(groups&1) || !progress.snapshot_hard_unlocked)failed=1;

        progress.hard_unlocked=0; progress.snapshot_hard_unlocked=1;
        g_ecx=PROGRESS_OWNER; PUSH32(g_esp,groups); PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0008C5F0u,sub_0008C5F0);
        if(g_esp!=sp || progress.hard_unlocked!=(groups&1) || !progress.snapshot_hard_unlocked)failed=1;
        if(MEM8(PROGRESS_OWNER+0x195)!=2)failed=1;
    }
    progress.hard_unlocked=1; progress.snapshot_hard_unlocked=0;
    xml1_progress_construct(pool); xml1_progress_snapshot(pool,1);
    xml1_progress_restore(pool,1); xml1_progress_merge(pool,1);
    if(!progress.hard_unlocked || progress.snapshot_hard_unlocked)failed=1;
    {
        uint32_t stream=xbox_HeapAlloc(0x2fc80,16);
        if(!stream) { fprintf(stderr,"[PROGRESS ERROR] Fixture allocation\n"); _Exit(4); }
        for(unsigned unlocked=0;unlocked<2;++unlocked) {
            memset((void*)XBOX_PTR(stream),0xa5,0x2fc80);
            MEM32(stream+0x2fc00)=stream;
            progress.hard_unlocked=(uint8_t)unlocked;
            g_ecx=PROGRESS_OWNER;PUSH32(g_esp,stream);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0008C030u,sub_0008C030);
            uint32_t end=stream+0x194+(unlocked?RAVEN_PROGRESS_SECTION_BYTES:0);
            if(g_esp!=sp || MEM32(stream+0x2fc00)!=end || MEM32(end)!=0xa5a5a5a5u ||
               memcmp((const void*)XBOX_PTR(stream),(const void*)XBOX_PTR(PROGRESS_OWNER+4),0x194))failed=1;
            MEM32(stream+0x2fc00)=stream;
            progress.hard_unlocked=(uint8_t)!unlocked;
            g_ecx=PROGRESS_OWNER;PUSH32(g_esp,stream);PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0008C050u,sub_0008C050);
            if(g_esp!=sp || MEM32(stream+0x2fc00)!=end || progress.hard_unlocked!=unlocked ||
               MEM32(end)!=0xa5a5a5a5u || MEM8(PROGRESS_OWNER+0x195)!=2)failed=1;
        }
        xbox_HeapFree(stream);
    }
    if(progress_options_fixture(pool+0x100))failed=1;
    memcpy((void*)XBOX_PTR(PROGRESS_OWNER),saved_native,sizeof(saved_native));
    progress=saved_progress;
    MEM32(0x4A0540u)=saved_initialized;
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;
    fprintf(stderr,"[PROGRESS EXTENSION] %s native completion unlock, lifecycle, campaign streams, options adapters and ABI; first-completion popup untested, options-apply/file terminals substituted, disk I/O untested\n",failed?"FAIL":"PASS");
    return failed;
}
