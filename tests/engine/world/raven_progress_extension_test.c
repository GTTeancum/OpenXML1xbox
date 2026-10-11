#include "engine/world/raven_progress_extension.h"
#include "engine/world/raven_progress_stream.h"
#include <stdio.h>

static int failures;
#define CHECK(expr) do { if (!(expr)) { fprintf(stderr, "line %d: %s\n", __LINE__, #expr); ++failures; } } while (0)

int main(void) {
    raven_progress_extension state = {1, 1};
    raven_progress_extension_init(&state);
    CHECK(!state.hard_unlocked && !state.snapshot_hard_unlocked);
    for (unsigned live = 0; live < 2; ++live) {
        for (unsigned saved = 0; saved < 2; ++saved) {
            for (unsigned groups = 0; groups < 4; ++groups) {
                state.hard_unlocked = (uint8_t)live;
                state.snapshot_hard_unlocked = (uint8_t)saved;
                raven_progress_extension_snapshot(&state, groups);
                CHECK(state.hard_unlocked == live);
                CHECK(state.snapshot_hard_unlocked == ((groups & 1) ? live : saved));

                state.hard_unlocked = (uint8_t)live;
                state.snapshot_hard_unlocked = (uint8_t)saved;
                raven_progress_extension_restore(&state, groups);
                CHECK(state.hard_unlocked == ((groups & 1) ? saved : live));
                CHECK(state.snapshot_hard_unlocked == saved);

                state.hard_unlocked = (uint8_t)live;
                state.snapshot_hard_unlocked = (uint8_t)saved;
                raven_progress_extension_merge(&state, groups);
                CHECK(state.hard_unlocked == ((groups & 1) ? (live | saved) : live));
                CHECK(state.snapshot_hard_unlocked == saved);
            }
        }
    }
    raven_progress_extension_init(&state);
    raven_progress_extension_set_hard(&state, -1);
    CHECK(state.hard_unlocked == 1 && !state.snapshot_hard_unlocked);
    raven_progress_extension_snapshot(&state, 1);
    raven_progress_extension_set_hard(&state, 0);
    raven_progress_extension_merge(&state, 1);
    CHECK(state.hard_unlocked == 1); /* previously earned unlock survives merge */
    raven_progress_extension_init(&state);
    raven_progress_extension_snapshot(&state, 1);
    raven_progress_extension_set_hard(&state, 5);
    raven_progress_extension_restore(&state, 1);
    CHECK(!state.hard_unlocked); /* exact restore is distinct from merge */
    {
        unsigned char record[20],before[20];size_t written;int unlocked;
        memset(record,0xa5,sizeof(record));memcpy(before,record,sizeof(record));
        written=99;CHECK(raven_progress_section_write(record,sizeof(record),0,&written));
        CHECK(written==0 && !memcmp(record,before,sizeof(record)));
        for(size_t n=0;n<16;++n) {
            written=99;CHECK(!raven_progress_section_write(record,n,1,&written));
            CHECK(written==99 && !memcmp(record,before,sizeof(record)));
        }
        CHECK(raven_progress_section_write(record,sizeof(record),1,&written));
        CHECK(written==16 && record[16]==0xa5);
        unlocked=0;CHECK(raven_progress_section_read(record,16,&unlocked) && unlocked==1);
        for(size_t n=0;n<16;++n) {
            unlocked=7;CHECK(!raven_progress_section_read(record,n,&unlocked) && unlocked==7);
        }
        memcpy(before,record,sizeof(record));
        for(size_t i=0;i<16;++i) {
            record[i]^=0x80;unlocked=7;
            CHECK(!raven_progress_section_read(record,16,&unlocked) && unlocked==7);
            memcpy(record,before,sizeof(record));
        }
        record[12]=0;CHECK(raven_progress_section_read(record,16,&unlocked) && !unlocked);
        CHECK(!raven_progress_section_present(NULL,20));
        CHECK(!raven_progress_section_write(NULL,16,1,&written));
        CHECK(!raven_progress_section_read(NULL,16,&unlocked));
    }
    if (failures) return 1;
    puts("PASS: additional progress lifecycle and extension codec; disk I/O not tested");
    return 0;
}
