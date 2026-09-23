#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "fair_gate.h"
#define RECOMP_TLS __declspec(thread)
static unsigned frames;
static void fatal(const char *message) { fprintf(stderr,"%s\n",message); exit(1); }
#include "xml2-transport-test.inc"

static HANDLE attempted,completed;
static unsigned draw_count,packet_words;
static DWORD WINAPI submit(void *unused) {
    (void)unused;
    SetEvent(attempted);
    lock_transport("test-submit");
    if(draw_count!=1||packet_words!=4)fatal("Submission observed a partial draw");
    draw_count=packet_words=0;
    unlock_transport();
    SetEvent(completed);
    return 0;
}
int main(void) {
    attempted=CreateEvent(NULL,TRUE,FALSE,NULL);
    completed=CreateEvent(NULL,TRUE,FALSE,NULL);
    if(!attempted||!completed)fatal("Cannot create test events");
    lock_transport("test-draw");
    packet_words=2; // Draw construction has not published its count yet.
    HANDLE thread=CreateThread(NULL,0,submit,NULL,0,NULL);
    if(!thread||WaitForSingleObject(attempted,2000)!=WAIT_OBJECT_0)fatal("Submit thread did not start");
    if(WaitForSingleObject(completed,50)!=WAIT_TIMEOUT)fatal("Partial draw escaped its lock");
    lock_transport("test-nested-fence");
    if(transport_depth!=2)fatal("Nested ownership was lost");
    unlock_transport();
    if(WaitForSingleObject(completed,50)!=WAIT_TIMEOUT)fatal("Nested release unlocked outer draw");
    packet_words=4;draw_count=1;
    unlock_transport();
    if(WaitForSingleObject(completed,2000)!=WAIT_OBJECT_0||
       WaitForSingleObject(thread,2000)!=WAIT_OBJECT_0)fatal("Completed draw was not submitted");
    if(draw_count||packet_words||transport_depth)fatal("Submission did not retire cleanly");
    CloseHandle(thread);CloseHandle(completed);CloseHandle(attempted);
    puts("PASS actual XML2 transport: partial draw exclusion, nested fence ownership, completed submission");
    return 0;
}
