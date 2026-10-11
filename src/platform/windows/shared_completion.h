#pragma once
#include <windows.h>
/* Concurrent callers share the next real completion. A later caller starts a
 * new observation; the producer runs without holding the synchronization lock. */
typedef struct {
    SRWLOCK lock;
    CONDITION_VARIABLE changed;
    unsigned generation, waiting;
    int producing;
} xml1_shared_completion;
static void xml1_wait_shared_completion(xml1_shared_completion *state,void (*produce)(void)) {
    AcquireSRWLockExclusive(&state->lock);
    unsigned generation=state->generation;
    if(state->producing) {
        ++state->waiting;
        while(state->generation==generation)
            SleepConditionVariableSRW(&state->changed,&state->lock,INFINITE,0);
        --state->waiting;
    } else {
        state->producing=1;
        ReleaseSRWLockExclusive(&state->lock);
        produce();
        AcquireSRWLockExclusive(&state->lock);
        ++state->generation;
        state->producing=0;
        WakeAllConditionVariable(&state->changed);
    }
    ReleaseSRWLockExclusive(&state->lock);
}
