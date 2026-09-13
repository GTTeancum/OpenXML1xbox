/* Execute the generated InsertFence/BlockOnTime and production native bridge.
 * Only the renderer acknowledgement is replaced by a controlled pipe peer. */
#include "../src/guest_graphics_live.c"
#define RECOMP_GENERATED_CODE
#include "recomp_types.h"
#include <setjmp.h>

RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp;
ptrdiff_t g_xbox_mem_offset;
size_t xbox_GetMappedSize(void) { return 64u*1024*1024; }
void xml1_input_test_frame(uint32_t frame) { (void)frame; }
void xml1_graphics_observe(uint32_t va) { xml1_graphics_live_observe(va); }

static jmp_buf old_wait;
static const uint32_t device_va=0x36CB00,completion_va=0x8007E000,tag_va=0xFD400B10;
static volatile LONG requests;
static DWORD WINAPI renderer_peer(void *parameter) {
    HANDLE peer=(HANDLE)parameter;
    for(DWORD ack=1;;++ack) {
        unsigned char command[12]; DWORD bytes=0,received=0;
        while(received<12) {
            if(!ReadFile(peer,command+received,12-received,&bytes,NULL) || !bytes) {
                if(!received) { CloseHandle(peer); return 0; }
                ExitProcess(79);
            }
            received+=bytes;
        }
        if(memcmp(command,"XMLDX8F6\0\0\0\0",12)) ExitProcess(80);
        uint32_t before=MEM32(completion_va),tag=MEM32(tag_va);
        /* Until this peer acknowledges, the real bridge must not publish the
         * newly issued fence or its NV2A tag, even while the caller is waiting. */
        Sleep(3);
        if(MEM32(completion_va)!=before || MEM32(tag_va)!=tag) ExitProcess(81);
        InterlockedIncrement(&requests);
        if(!WriteFile(peer,&ack,4,&bytes,NULL) || bytes!=4) ExitProcess(82);
    }
    CloseHandle(peer); return 0;
}

void sub_00360090(void) { longjmp(old_wait,2); }
void sub_0035FC00(void) { g_esp+=4; } /* Real native submit occurs in observer. */
void sub_0035F9D0(void) { longjmp(old_wait,1); }
void sub_0035FB50(void) { longjmp(old_wait,3); }
void sub_0035F860(void) { longjmp(old_wait,4); }
void sub_0035FBD0(void) { longjmp(old_wait,5); }
#undef RECOMP_ICALL_SAFE
#define RECOMP_ICALL_SAFE(target,stack) longjmp(old_wait,6)
#include "fence-wait-fixture.inc"

static int check_case(uint32_t latest,uint32_t completed,uint32_t target,unsigned expected_submits,int insert) {
    MEM32(0x36CAF8)=device_va;
    memset(guest(device_va,0x2000),0,0x2000);
    MEM32(device_va)=0x800000; MEM32(device_va+4)=0x810000;
    MEM32(device_va+0x2c)=latest; MEM32(device_va+0x30)=completion_va;
    MEM32(device_va+0x934)=0xFD000000;
    MEM32(completion_va)=completed; MEM32(tag_va)=0xA5000000|((completed<<2)&0x7c);
    g_esp=0xF7FC38;
    MEM32(g_esp)=0x3601C3; MEM32(g_esp+4)=target; MEM32(g_esp+8)=0x10;
    g_esi=0x11223344;g_edi=0x55667788;g_ebx=0x12345678;g_ebp=g_seh_ebp=0x87654321;
    LONG start_requests=requests;
    if(setjmp(old_wait)) {
        fprintf(stderr,"FAIL: reached Xbox hardware wait after native completion target=%08X complete=%08X\n",target,MEM32(completion_va));
        return 1;
    }
    RECOMP_ABI_CALL(0x35FDE0,sub_0035FDE0);
    if(g_esp!=0xF7FC44 || g_esi!=0x11223344 || g_edi!=0x55667788 || g_ebx!=0x12345678 ||
       g_ebp!=0x87654321 || g_seh_ebp!=0x87654321 ||
       requests-start_requests!=(LONG)expected_submits || MEM32(device_va+0x2c)!=latest+(insert?2:0) ||
       !xml1_graphics_fence_complete(device_va,target)) return 2;
    if(insert && (MEM32(0x80000c)!=target || MEM32(device_va)!=0x800020 ||
                  MEM32(device_va+0x64+((target>>1)&0x3f)*8)!=target)) return 3;
    return 0;
}
int main(void) {
    void *mapping=VirtualAlloc(NULL,(SIZE_T)0x100000000ULL,MEM_RESERVE,PAGE_NOACCESS);
    if(!mapping) return 10;
    g_xbox_mem_offset=(ptrdiff_t)mapping;
    if(!VirtualAlloc(mapping,0x1000000,MEM_COMMIT,PAGE_READWRITE) ||
       !VirtualAlloc((char*)mapping+completion_va,4096,MEM_COMMIT,PAGE_READWRITE) ||
       !VirtualAlloc((char*)mapping+(tag_va&~0xfffu),4096,MEM_COMMIT,PAGE_READWRITE)) return 11;
    char name[128];snprintf(name,sizeof(name),"\\\\.\\pipe\\XML1-fence-test-%lu",GetCurrentProcessId());
    pipe=CreateNamedPipeA(name,PIPE_ACCESS_DUPLEX,PIPE_TYPE_BYTE|PIPE_WAIT,1,4096,4096,0,NULL);
    HANDLE peer=CreateFileA(name,GENERIC_READ|GENERIC_WRITE,0,NULL,OPEN_EXISTING,0,NULL);
    if(pipe==INVALID_HANDLE_VALUE || peer==INVALID_HANDLE_VALUE) return 12;
    if(!ConnectNamedPipe(pipe,NULL) && GetLastError()!=ERROR_PIPE_CONNECTED) return 13;
    HANDLE thread=CreateThread(NULL,0,renderer_peer,peer,0,NULL);
    if(!thread)return 14;
    enabled=1;frames=1015;
    const uint32_t cases[][5]={
        {0x23EB,0x23E9,0x23EB,1,1}, /* Captured combat: wait on current fence. */
        {0x23EB,0x23E7,0x23E9,1,0}, /* Deferred issued fence. */
        {0x23ED,0x23EB,0x23E9,0,0}, /* Already complete. */
        {0xFFFFFFFF,0xFFFFFFFD,0xFFFFFFFF,1,1}, /* Insert wraps next counter. */
        {1,0xFFFFFFFB,0xFFFFFFFF,1,0}, /* Completion crosses wrap. */
        {3,1,0xFFFFFFFF,0,0}
    };
    for(unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);++i) {
        int result=check_case(cases[i][0],cases[i][1],cases[i][2],cases[i][3],cases[i][4]);
        if(result) { fprintf(stderr,"FAIL case=%u code=%d\n",i,result);return result; }
    }
    MEM32(device_va+0x2c)=0x23ED; MEM32(completion_va)=0x23E9;
    if(xml1_graphics_fence_complete(device_va,0x23EB)) return 20;
    MEM32(completion_va)=0x23EB; frames=0;
    if(xml1_graphics_fence_complete(device_va,0x23EB)) return 21;
    frames=1015;enabled=0;
    if(xml1_graphics_fence_complete(device_va,0x23EB)) return 22;
    CloseHandle(pipe);
    if(WaitForSingleObject(thread,3000)!=WAIT_OBJECT_0)return 23;
    CloseHandle(thread); VirtualFree(mapping,0,MEM_RELEASE);
    puts("PASS: generated fence issue/wait, native acknowledgement ordering, ABI, pending fences and counter wrap");
    return 0;
}
