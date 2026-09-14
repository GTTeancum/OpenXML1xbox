#include <windows.h>
#include <string.h>
#include "port.h"
#include "recomp_funcs.h"
_Static_assert(sizeof(void*)==4,"NXDK must be 32-bit");
static void jump_nested(uint32_t outer,uint32_t value)
{
    uint32_t inner[16]={0};
    if(setjmp(*recomp_setjmp_slot((uint32_t)(uintptr_t)inner)))nxdk_port_fail("unexpected inner longjmp",__FILE__,__LINE__);
    g_ebx=g_esi=g_edi=g_ebp=g_seh_ebp=0xdeadbeef;g_esp-=64;
    recomp_guest_longjmp(outer,value);
}
static int jump_test(uint32_t value)
{
    uint32_t buffer[16]={0};uint32_t before=g_esp;
    g_ebx=0x11223344;g_esi=0x55667788;g_edi=0x87654321;g_ebp=g_seh_ebp=0x24681357;
    MEM32(g_esp-=4)=(uint32_t)(uintptr_t)buffer;
    int result=setjmp(*recomp_setjmp_slot((uint32_t)(uintptr_t)buffer));
    if(!result){
        MEM32(g_esp-=4)=0;recomp_lookup(0x344b18)();
        jump_nested((uint32_t)(uintptr_t)buffer,value);
    }
    int pass=result==(value?(int)value:1)&&g_esp==before-4&&g_ebx==0x11223344&&g_esi==0x55667788&&g_edi==0x87654321&&g_ebp==0x24681357&&g_seh_ebp==0x24681357;
    g_esp=before;g_ebp=g_seh_ebp=0;return pass;
}
static uint32_t section_call(unsigned ordinal,uint32_t section)
{
    uint32_t sp=g_esp;MEM32(g_esp-=4)=section;MEM32(g_esp-=4)=0;
    recomp_lookup_kernel(0xfe000000u+ordinal*4)();
    if(g_esp!=sp)nxdk_port_fail("section wrapper stack imbalance",__FILE__,__LINE__);
    return g_eax;
}
static int section_test(void)
{
    uint32_t section=MEM32(0x10120)+(MEM32(0x1011c)-1)*56;
    uint32_t va=MEM32(section+4),head=MEM32(section+28),tail=MEM32(section+32);
    uint16_t head0=MEM16(head),tail0=MEM16(tail);uint8_t original=MEM8(va);
    if((MEM32(section)&2)||MEM32(section+24))return 0;
    if(section_call(327,section)||MEM32(section+24)!=1)return 0;
    MEM8(va)=original^0x5a;
    if(section_call(327,section)||MEM32(section+24)!=2||MEM8(va)!=(original^0x5a))return 0;
    if(section_call(328,section)||MEM32(section+24)!=1)return 0;
    if(section_call(328,section)||MEM32(section+24)||MEM16(head)!=head0||MEM16(tail)!=tail0)return 0;
    if(section_call(327,section)||MEM8(va)!=original)return 0;
    if(section_call(328,section)||section_call(328,section)!=0xc000000d)return 0;
    return section_call(327,section+1)==0xc0000008;
}
static int cpuid_test(void)
{
    uint8_t vendor[12],brand[48],features[48];
    memcpy(vendor,port_guest_pointer(0x5bbcc0),sizeof(vendor));
    memcpy(brand,port_guest_pointer(0x5bbe5c),sizeof(brand));
    memcpy(features,port_guest_pointer(0x5bc59c),sizeof(features));
    uint32_t a=0,b,c=0,d;__asm__ volatile("cpuid":"+a"(a),"=b"(b),"+c"(c),"=d"(d));
    uint32_t expected[]={b,d,c},max_basic=a;a=1;c=0;
    __asm__ volatile("cpuid":"+a"(a),"=b"(b),"+c"(c),"=d"(d));
    uint32_t signature=a,feature_bits=d;a=0x80000000u;c=0;
    __asm__ volatile("cpuid":"+a"(a),"=b"(b),"+c"(c),"=d"(d));
    /* The retail routine returns the unsupported extended-leaf result on
       Pentium III, rather than normalizing that early return to TRUE. */
    uint32_t expected_result=!max_basic||a>=0x80000001u?1:a;
    uint32_t result=port_call_guest(0x1f0f70,NULL,0);
    int pass=result==expected_result&&!memcmp(port_guest_pointer(0x5bbcc0),expected,12)&&MEM32(0x5bc59c)==feature_bits&&MEM32(0x5bc5a4)==signature;
    if(!pass)port_log("CPUID mismatch result=%lx/%lx sig=%lx/%lx features=%lx/%lx\n",(unsigned long)result,(unsigned long)expected_result,(unsigned long)MEM32(0x5bc5a4),(unsigned long)signature,(unsigned long)MEM32(0x5bc59c),(unsigned long)feature_bits);
    memcpy(port_guest_pointer(0x5bbcc0),vendor,sizeof(vendor));
    memcpy(port_guest_pointer(0x5bbe5c),brand,sizeof(brand));
    memcpy(port_guest_pointer(0x5bc59c),features,sizeof(features));
    return pass;
}
static int skinning_test(void)
{
    float positions[2][4]={{1,2,3,1},{-2,4,.5f,1}};
    float weights[6]={.25f,.5f,.25f,.1f,.3f,.6f};
    uint8_t indices[6]={0,1,2,2,0,1};
    float palette[3][16]={{1,0,0,0,0,1,0,0,0,0,1,0,10,0,0,1},
                          {2,0,0,0,0,2,0,0,0,0,2,0,0,20,0,1},
                          {.5f,0,0,0,0,.5f,0,0,0,0,.5f,0,-1,-2,-3,1}};
    float output[2][5];for(unsigned i=0;i<10;++i)((float*)output)[i]=12345;
    uint32_t args[]={(uint32_t)(uintptr_t)positions,2,(uint32_t)(uintptr_t)weights,(uint32_t)(uintptr_t)indices,3,(uint32_t)(uintptr_t)palette,(uint32_t)(uintptr_t)output,sizeof(output[0])};
    port_call_guest(0x240570,args,8);
    for(unsigned v=0;v<2;++v){
        for(unsigned xyz=0;xyz<3;++xyz){
            double expected=0;
            for(unsigned influence=0;influence<3;++influence){
                float *matrix=palette[indices[v*3+influence]];
                double transformed=matrix[12+xyz];
                for(unsigned axis=0;axis<3;++axis)transformed+=positions[v][axis]*matrix[axis*4+xyz];
                expected+=transformed*weights[v*3+influence];
            }
            if(fabs(output[v][xyz]-expected)>0.00001){port_log("SKIN mismatch vertex=%u axis=%u actual=%f expected=%f\n",v,xyz,output[v][xyz],expected);return 0;}
        }
        if(output[v][3]!=12345||output[v][4]!=12345)return 0;
    }
    return 1;
}
static int identity_test(void)
{
    uint32_t native_address=*(volatile uint32_t*)(uintptr_t)0x10118;
    const uint8_t *native=(const uint8_t*)(uintptr_t)native_address;
    const uint8_t *original=port_guest_pointer(MEM32(0x10118));
    return !memcmp(native+8,original+8,4)&&!memcmp(native+0x5c,original+0x5c,64)&&!memcmp(native+0xa4,original+0xa4,12)&&!memcmp(native+0xb0,original+0xb0,288);
}

static uint32_t read_with_apc(HANDLE file,IO_STATUS_BLOCK *status,char *buffer,uint32_t context)
{
    LARGE_INTEGER offset={.QuadPart=0};uint32_t sp=g_esp;
    /* The generated memcpy is also a three-argument cdecl function. The
       kernel's reserved third APC argument is zero, so it returns Context
       without copying. The actual asynchronous read supplies the payload. */
    uint32_t args[]={(uint32_t)(uintptr_t)file,0,0x11040,context,(uint32_t)(uintptr_t)status,
                     (uint32_t)(uintptr_t)buffer,4,(uint32_t)(uintptr_t)&offset};
    for(unsigned i=8;i;--i)MEM32(g_esp-=4)=args[i-1];
    MEM32(g_esp-=4)=0;recomp_lookup_kernel(0xfe000000u+219*4)();
    if(g_esp!=sp)nxdk_port_fail("I/O wrapper stack imbalance",__FILE__,__LINE__);
    return g_eax;
}
static int io_apc_test(void)
{
    HANDLE file=CreateFileA("D:\\guest.xbe",GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_FLAG_OVERLAPPED,NULL);
    if(file==INVALID_HANDLE_VALUE){port_log("APC test open error %lu\n",(unsigned long)GetLastError());return 0;}
    IO_STATUS_BLOCK status={0};char buffer[4]={0};uint32_t marker=0x11223344;
    uint32_t context=(uint32_t)(uintptr_t)&marker,before=port_io_apc_completed;
    /* More failures than slots must not exhaust the bridge table. */
    for(unsigned i=0;i<80;++i){
        if(read_with_apc(INVALID_HANDLE_VALUE,&status,buffer,context)!=0xc0000008u){CloseHandle(file);return 0;}
    }
    uint32_t result=read_with_apc(file,&status,buffer,context);
    if((int32_t)result<0){port_log("APC test read status %08lx\n",(unsigned long)result);CloseHandle(file);return 0;}
    g_eax=0xabcdef12;uint32_t sp=g_esp;
    for(unsigned i=0;i<500&&port_io_apc_completed==before;++i)SleepEx(10,TRUE);
    int pass=port_io_apc_completed==before+1&&port_io_apc_result==context&&marker==0x11223344&&
             status.Status==0&&status.Information==4&&!memcmp(buffer,"XBEH",4)&&g_eax==0xabcdef12&&g_esp==sp;
    if(!pass)port_log("APC test completion=%lu status=%08lx bytes=%lu result=%lx marker=%lx\n",(unsigned long)(port_io_apc_completed-before),(unsigned long)status.Status,(unsigned long)status.Information,(unsigned long)port_io_apc_result,(unsigned long)marker);
    CloseHandle(file);return pass;
}
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
    if(!jump_test(7)||!jump_test(0))return 0;
    port_log("PASS generated CRT setjmp + native nested longjmp, stack/register restoration, zero-to-one result\n");
    if(!section_test())return 0;
    port_log("PASS guest XBE section references, reload from original data, shared-page counts and invalid-handle rejection\n");
    if(!cpuid_test())return 0;
    port_log("PASS generated CPU detection matches native CPUID vendor, signature and feature flags\n");
    if(!skinning_test())return 0;
    port_log("PASS generated SSE skinning: two vertices, three bone influences, output stride and guard values\n");
    if(!identity_test())return 0;
    port_log("PASS native/guest title identity and certificate metadata agree\n");
    if(!io_apc_test())return 0;
    port_log("PASS asynchronous native file read, generated-code APC, guest context preservation and failed-request cleanup\n");
    g_eax=0x13572468;
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
