#include "raven_bishop_drain.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct selection { unsigned calls; uint32_t node; unsigned action; } selection;
static uint32_t choose(void *context, unsigned action) {
    selection *s = (selection *)context;
    ++s->calls;
    s->action=action;
    return s->node;
}
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x); return 1; } } while (0)
int main(void) {
    raven_bishop_contact_history history={11,1};
    CHECK(raven_bishop_record_contact(&history,22,2));
    CHECK(history.handle==22 && history.time==2);
    CHECK(!raven_bishop_record_contact(&history,33,2));
    CHECK(!raven_bishop_record_contact(&history,44,1));
    CHECK(!raven_bishop_record_contact(&history,55,NAN));
    CHECK(history.handle==22 && history.time==2);
    CHECK(raven_bishop_record_contact(&history,0,3));
    CHECK(history.handle==0 && history.time==3);
    CHECK(!raven_bishop_record_contact(NULL,22,2));
    /* Contact classification is supplied by the future guest adapter. Check
     * fallback causes, stale-pending clearing, and one-shot dispatch here. */
    const raven_bishop_contact cases[] = {
        {2,1,17,1,1,0}, {2,1,17,1,0,1}, {2,1,17,1,1,1},
        {2,1,17,1,0,0}, {2,1,17,0,1,0}, {2,1,0,1,1,0},
        {1,1,17,1,1,0}, {0,1,17,1,1,0},
        {NAN,1,17,1,1,0}, {2,NAN,17,1,1,0}
    };
    for (unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);++i) {
        for (unsigned present=0;present<2;++present) {
            selection s={0,present?0x123400u:0};
            uint32_t pending=0xABCDEFu;
            int accepted=raven_bishop_drain_decide(&cases[i],choose,&s,&pending);
            CHECK(s.calls==(i<3?1u:0u));
            CHECK(s.action==(i<3?24u:0u));
            CHECK(accepted==(i<3 && present));
            CHECK(pending==(i<3?s.node:0xABCDEFu));
        }
    }
    selection s={0,123}; uint32_t pending=456;
    CHECK(!raven_bishop_drain_decide(NULL,choose,&s,&pending));
    CHECK(!raven_bishop_drain_decide(&cases[0],NULL,&s,&pending));
    CHECK(!raven_bishop_drain_decide(&cases[0],choose,&s,NULL));
    CHECK(!s.calls && pending==456);
    puts("PASS Bishop drain decision: contact gates, follow-up dispatch, failed-lookup clearing; guest wiring not covered");
    return 0;
}
