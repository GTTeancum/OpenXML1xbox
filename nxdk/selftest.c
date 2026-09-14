#include <windows.h>
#include <string.h>
#include "port.h"
#include "recomp_funcs.h"
_Static_assert(sizeof(void*)==4,"NXDK must be 32-bit");
typedef struct DpcTest {KEVENT done;uint32_t args[3];volatile uint32_t result;} DpcTest;
static void NTAPI dpc_test(PKDPC dpc,void *context,void *arg1,void *arg2)
{
    (void)dpc;(void)arg1;(void)arg2;
    DpcTest *test=context;
    test->result=port_call_interrupt(0x11040,test->args,3);
    KeSetEvent(&test->done,0,FALSE);
}
static DWORD WINAPI tls_test(void *unused)
{
    (void)unused;
    if(g_eax) return 1;
    port_init_thread(65536);port_init_guest_tls(148);
    g_eax=0x24681357; Sleep(5);
    int result=g_eax!=0x24681357;
    port_cleanup_thread();
    return result || g_eax || g_esp || g_fs_base;
}
int port_selftest(void)
{
    /* Execute an actual XML1 copy routine through generated dispatch. */
    unsigned char src[35],dst[35];
    for(unsigned i=0;i<sizeof(src);++i)src[i]=(unsigned char)(i*13+7);
    memset(dst,0,sizeof(dst));
    uint32_t sp=g_esp;g_esi=0x12345678;g_edi=0x87654321;g_ebx=0x11223344;
    MEM32(g_esp-=4)=sizeof(src);MEM32(g_esp-=4)=(uint32_t)(uintptr_t)src;
    MEM32(g_esp-=4)=(uint32_t)(uintptr_t)dst;MEM32(g_esp-=4)=0;
    recomp_func_t fn=recomp_lookup(0x00011040);
    if(!fn)return 0;
    fn();
    if(memcmp(src,dst,sizeof(src)) || g_eax!=(uint32_t)(uintptr_t)dst || g_esp!=sp-12 || g_esi!=0x12345678 || g_edi!=0x87654321 || g_ebx!=0x11223344) return 0;
    g_esp=sp;port_log("PASS XML1 generated memcpy, tail bytes, dispatch and ABI\n");
    if(recomp_fist(2.5,0x037f,32)!=2 || recomp_fist(3.5,0x037f,32)!=4 || recomp_fist(-1.25,0x077f,32)!=-2)return 0;
    port_log("PASS x87 rounding helpers\n");
    if(log2(8.0)!=3.0 || exp2(-3.0)!=0.125 || fabs(exp2(log2(1.125))-1.125)>1e-14 || !isinf(log2(0.0)) || !isnan(log2(-1.0)))return 0;
    port_log("PASS native log2/exp2, round-trip, zero and domain behavior\n");
    g_eax=0x13572468;
    HANDLE thread=CreateThread(NULL,65536,tls_test,NULL,0,NULL);if(!thread)return 0;
    WaitForSingleObject(thread,INFINITE);DWORD result=1;GetExitCodeThread(thread,&result);CloseHandle(thread);
    if(result || g_eax!=0x13572468)return 0;
    port_log("PASS native thread-local guest register isolation\n");
    /* Exercise the actual guest kernel wrappers, including nested saves. */
    KFLOATING_SAVE save1,save2;
    recomp_func_t save=recomp_lookup_kernel(0xfe000000u+142*4),restore=recomp_lookup_kernel(0xfe000000u+139*4);
    if(!save||!restore)return 0;
    g_fp_control_word=0x077f;g_fp_top=3;g_fp_cmp=5;g_fp_cc=0x4000;
    for(unsigned i=0;i<8;++i){g_fp_stack[i]=i+0.25;port_registers()->mm[i]=0x1234567800000000ull+i;memset(port_registers()->xmm[i],0x30+i,16);}
    PortRegisterBank expected=*port_registers();
    MEM32(g_esp-=4)=(uint32_t)(uintptr_t)&save1;MEM32(g_esp-=4)=0;save();
    if(g_eax||g_esp!=sp||g_fp_control_word!=0x037f||g_fp_top)return 0;
    g_fp_stack[0]=-42.5;
    MEM32(g_esp-=4)=(uint32_t)(uintptr_t)&save2;MEM32(g_esp-=4)=0;save();
    g_fp_stack[0]=1234;
    MEM32(g_esp-=4)=(uint32_t)(uintptr_t)&save2;MEM32(g_esp-=4)=0;restore();
    if(g_eax||g_esp!=sp||g_fp_stack[0]!=-42.5)return 0;
    MEM32(g_esp-=4)=(uint32_t)(uintptr_t)&save1;MEM32(g_esp-=4)=0;restore();
    if(g_eax||g_esp!=sp||g_fp_control_word!=0x077f||g_fp_top!=3||g_fp_cmp!=5||g_fp_cc!=0x4000||memcmp(port_registers()->fp,expected.fp,sizeof(expected.fp))||memcmp(port_registers()->mm,expected.mm,sizeof(expected.mm))||memcmp(port_registers()->xmm,expected.xmm,sizeof(expected.xmm)))return 0;
    g_fp_control_word=0x037f;g_fp_top=g_fp_cmp=g_fp_cc=0;g_eax=0x13572468;
    port_log("PASS nested guest FPU save/restore, x87/MMX/SSE register payloads\n");
    memset(dst,0,sizeof(dst));
    KDPC dpc;KTIMER timer;DpcTest test={0};
    test.args[0]=(uint32_t)(uintptr_t)dst;test.args[1]=(uint32_t)(uintptr_t)src;test.args[2]=sizeof(src);
    KeInitializeEvent(&test.done,NotificationEvent,FALSE);
    KeInitializeDpc(&dpc,dpc_test,&test);KeInitializeTimerEx(&timer,NotificationTimer);
    /* Delayed timer permits the callback to run over the kernel idle thread. */
    KeSetTimer(&timer,(LARGE_INTEGER){.QuadPart=-100000},&dpc);
    NTSTATUS wait=KeWaitForSingleObject(&test.done,Executive,KernelMode,FALSE,&(LARGE_INTEGER){.QuadPart=-50000000});
    if(wait || test.result!=test.args[0] || memcmp(dst,src,sizeof(dst)) || g_eax!=0x13572468 || g_esp!=sp)return 0;
    port_log("PASS native timer/DPC enters generated XML1 and preserves interrupted registers\n");
    g_eax=g_ecx=g_edx=g_ebx=g_esi=g_edi=0;return 1;
}
