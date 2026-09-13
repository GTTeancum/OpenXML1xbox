#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdlib.h>
void *recomp_lookup(ULONG address) { (void)address; return NULL; }
void *recomp_lookup_manual(ULONG address) { (void)address; return NULL; }
static HANDLE attempted, acquired;
static volatile LONG active;
static unsigned count;
static DWORD WINAPI contender(void *unused) {
    SetEvent(attempted);
    KIRQL old=xbox_KeRaiseIrqlToDpcLevel();
    if(old!=0) abort();
    SetEvent(acquired);
    xbox_KfLowerIrql(old);
    for(unsigned i=0;i<1000;++i) {
        old=xbox_KfRaiseIrql(2);
        if(InterlockedIncrement(&active)!=1) abort();
        unsigned value=count;
        if(xbox_KfRaiseIrql(5)!=2) abort();
        SwitchToThread();
        xbox_KfLowerIrql(2);
        if(xbox_KeGetCurrentIrql()!=2) abort();
        count=value+1;
        if(InterlockedDecrement(&active)!=0) abort();
        xbox_KfLowerIrql(old);
    }
    return 0;
}
int main(void) {
    attempted=CreateEvent(NULL,TRUE,FALSE,NULL);
    acquired=CreateEvent(NULL,TRUE,FALSE,NULL);
    if(!attempted||!acquired) return 1;
    if(xbox_KfRaiseIrql(1)!=0 || xbox_KeRaiseIrqlToDpcLevel()!=1) return 2;
    HANDLE threads[4];
    threads[0]=CreateThread(NULL,0,contender,NULL,0,NULL);
    if(!threads[0]||WaitForSingleObject(attempted,5000)!=WAIT_OBJECT_0) return 3;
    if(WaitForSingleObject(acquired,100)!=WAIT_TIMEOUT) return 4;
    if(xbox_KfRaiseIrql(5)!=2) return 5;
    xbox_KfLowerIrql(2);
    if(WaitForSingleObject(acquired,100)!=WAIT_TIMEOUT) return 6;
    xbox_KfLowerIrql(1);
    if(WaitForSingleObject(acquired,5000)!=WAIT_OBJECT_0) return 7;
    xbox_KfLowerIrql(0);
    for(unsigned i=1;i<4;++i) if(!(threads[i]=CreateThread(NULL,0,contender,NULL,0,NULL))) return 8;
    if(WaitForMultipleObjects(4,threads,TRUE,15000)!=WAIT_OBJECT_0) return 9;
    if(count!=4000||active||xbox_KeGetCurrentIrql()!=0) return 10;
    for(unsigned i=0;i<4;++i) CloseHandle(threads[i]);
    CloseHandle(attempted);CloseHandle(acquired);
    puts("PASS: raised IRQL regions exclude competing host threads, survive nested raises, and release below DISPATCH_LEVEL");
    return 0;
}
