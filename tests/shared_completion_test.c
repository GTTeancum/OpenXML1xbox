#include "shared_completion.h"
#include <stdio.h>
static xml1_shared_completion completion;
static HANDLE release_event;
static volatile LONG produced,returned;
static void produce(void) {
    InterlockedIncrement(&produced);
    if(WaitForSingleObject(release_event,5000)!=WAIT_OBJECT_0) ExitProcess(7);
}
static DWORD WINAPI wait_completion(void *unused) {
    (void)unused;
    xml1_wait_shared_completion(&completion,produce);
    InterlockedIncrement(&returned);return 0;
}
int main(void) {
    release_event=CreateEventW(NULL,TRUE,FALSE,NULL);if(!release_event)return 1;
    completion.generation=0xfffffffeu;
    for(unsigned batch=0;batch<3;++batch) {
        HANDLE threads[8];ResetEvent(release_event);
        for(unsigned i=0;i<8;++i) {threads[i]=CreateThread(NULL,0,wait_completion,NULL,0,NULL);if(!threads[i])return 2;}
        ULONGLONG start=GetTickCount64();
        for(;;) {
            AcquireSRWLockExclusive(&completion.lock);unsigned waiting=completion.waiting;ReleaseSRWLockExclusive(&completion.lock);
            if(waiting==7)break;
            if(GetTickCount64()-start>3000)return 3;
            Sleep(1);
        }
        if(produced!=(LONG)batch+1||returned!=(LONG)batch*8)return 4;
        SetEvent(release_event);
        if(WaitForMultipleObjects(8,threads,TRUE,3000)!=WAIT_OBJECT_0)return 5;
        for(unsigned i=0;i<8;++i)CloseHandle(threads[i]);
        if(returned!=(LONG)(batch+1)*8||completion.generation!=0xffffffffu+batch)return 6;
    }
    CloseHandle(release_event);
    puts("PASS: each of three batches shares one real completion across eight callers, including generation rollover");
    return 0;
}
