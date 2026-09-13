#include "fair_gate.h"
#include <stdio.h>
static xml1_fair_gate gate;
static unsigned order[16],count;
static DWORD WINAPI worker(void *arg) {
    unsigned id=(unsigned)(uintptr_t)arg;
    xml1_fair_enter(&gate); order[count++]=id; xml1_fair_leave(&gate);
    return 0;
}
int main(void) {
    HANDLE threads[16]; xml1_fair_enter(&gate);
    for(unsigned i=0;i<16;++i) {
        threads[i]=CreateThread(NULL,0,worker,(void *)(uintptr_t)i,0,NULL);
        if(!threads[i]) return 1;
        ULONGLONG start=GetTickCount64();
        while(InterlockedCompareExchange(&gate.next,0,0)!=(LONG)(i+2)) {
            if(GetTickCount64()-start>5000) return 2;
            Sleep(1);
        }
    }
    xml1_fair_leave(&gate);
    if(WaitForMultipleObjects(16,threads,TRUE,5000)!=WAIT_OBJECT_0) return 3;
    for(unsigned i=0;i<16;++i) { CloseHandle(threads[i]); if(order[i]!=i) return 4; }
    if(count!=16) return 5;
    /* Unsigned ticket identity remains valid through 32-bit rollover. */
    gate.next=gate.serving=(LONG)0xfffffffeu;
    for(unsigned i=0;i<4;++i) { if(xml1_fair_enter(&gate)!=0xfffffffeu+i) return 6; xml1_fair_leave(&gate); }
    puts("PASS: 16 queued process-local callers execute FIFO; ticket rollover preserves ordering");
    return 0;
}
