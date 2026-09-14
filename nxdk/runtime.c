#include <windows.h>
#include <hal/debug.h>
#include <hal/video.h>
#include <stdarg.h>
#include <string.h>
#include "port.h"
#include "recomp_types.h"

ptrdiff_t g_xbox_mem_offset;
uint32_t g_xbox_code_lo, g_xbox_code_hi;
RECOMP_TLS PortRegisterBank port_thread_register_bank;
PortRegisterBank *volatile port_interrupt_register_bank;
volatile uint32_t g_icall_trace[ICALL_TRACE_SIZE], g_icall_trace_idx;
volatile uint64_t g_icall_count;
uint32_t port_last_call;
static RECOMP_TLS jmp_buf jump_slots[32];
static RECOMP_TLS uint32_t jump_keys[32];
static RECOMP_TLS unsigned jump_count;
char port_log_buffer[65536];
volatile uint32_t port_log_length;

void port_log(const char *format, ...)
{
    char buffer[1024]; va_list args;
    va_start(args, format); vsnprintf(buffer,sizeof(buffer),format,args); va_end(args);
    size_t len=strlen(buffer);
    uint32_t flags;__asm__ volatile("pushfl; popl %0; cli":"=r"(flags)::"memory");
    if(port_log_length+len<sizeof(port_log_buffer)) {
        memcpy(port_log_buffer+port_log_length,buffer,len+1);
        port_log_length+=len;
    }
    __asm__ volatile("pushl %0; popfl"::"r"(flags):"memory","cc");
    __asm__ volatile("outb %0, %1" :: "a"((uint8_t)3), "Nd"((uint16_t)0x3fb));
    /* Also emit to COM1 where supported; the memory log is authoritative. */
    for (const char *p=buffer; *p; ++p) {
        __asm__ volatile("outb %0, %1" :: "a"((uint8_t)*p), "Nd"((uint16_t)0x3f8));
    }
    DbgPrint("%s",buffer);
}
void port_screen(const char *message) { debugPrint("%s\n",message); port_log("%s\n",message); }
_Noreturn void nxdk_port_fail(const char *reason,const char *file,int line)
{
    port_log("FAIL %s at %s:%d last=%08lx esp=%08lx eax=%08lx ecx=%08lx edx=%08lx\n",
             reason,file,line,(unsigned long)port_last_call,(unsigned long)g_esp,
             (unsigned long)g_eax,(unsigned long)g_ecx,(unsigned long)g_edx);
    for(unsigned i=0;i<ICALL_TRACE_SIZE;++i) port_log("ICALL %08lx\n",(unsigned long)g_icall_trace[(g_icall_trace_idx+i)&15]);
    /* Sleeping or taking video locks here would replace the first failure
       with a second kernel fault. Leave the memory log readable and halt. */
    if(KeGetCurrentIrql()>=DISPATCH_LEVEL)for(;;)__asm__ volatile("cli; hlt");
    debugPrint("STOP: %s\nlast call %08lx\n",reason,(unsigned long)port_last_call);
    for(;;) Sleep(1000);
}
void recomp_icall_fail_log(uint32_t va) { port_last_call=va; nxdk_port_fail("unresolved guest call",__FILE__,__LINE__); }
void recomp_icall_not_code_log(uint32_t va) { port_last_call=va; nxdk_port_fail("invalid guest call",__FILE__,__LINE__); }
void xml1_graphics_observe(uint32_t va) { port_last_call=va; }
void recomp_trace_enter(const char *n,uint32_t va) { port_last_call=va; }
void recomp_trace_exit(const char *n,uint32_t va) { (void)n; (void)va; }
void recomp_trace_esp(const char *n,const char *tag) { (void)n; (void)tag; }
uint64_t xbox_ReadTimeStampCounter(void) { uint32_t low,high; __asm__ volatile("rdtsc":"=a"(low),"=d"(high)); return ((uint64_t)high<<32)|low; }
void recomp_debug_service(uint32_t service,uint32_t arg)
{
    if(service==1 && arg) {
        uint16_t length=MEM16(arg); uint32_t buffer=MEM32(arg+4);
        port_log("GUEST: %.*s\n",(int)length,(const char*)XBOX_PTR(buffer));
    } else nxdk_port_fail("unsupported debug service",__FILE__,__LINE__);
}
jmp_buf *recomp_setjmp_slot(uint32_t va)
{
    if(port_interrupt_register_bank||!va)nxdk_port_fail("setjmp requires a normal guest thread and buffer",__FILE__,__LINE__);
    for(unsigned i=0;i<jump_count;++i)if(jump_keys[i]==va)return &jump_slots[i];
    if(jump_count==32)nxdk_port_fail("setjmp slot exhaustion",__FILE__,__LINE__);
    jump_keys[jump_count]=va;return &jump_slots[jump_count++];
}
int recomp_guest_longjmp(uint32_t va,uint32_t value)
{
    if(port_interrupt_register_bank)nxdk_port_fail("longjmp from interrupt context",__FILE__,__LINE__);
    for(unsigned i=jump_count;i;--i)if(jump_keys[i-1]==va){
        /* Follow the Xbox CRT jump-buffer layout. SEH cleanup requires the
           separate exception bridge; do not silently skip registered handlers. */
        if(MEM32(va+0x18)!=MEM32(g_fs_base))nxdk_port_fail("longjmp across SEH frames requires unwind bridge",__FILE__,__LINE__);
        g_ebp=g_seh_ebp=MEM32(va);g_ebx=MEM32(va+4);g_edi=MEM32(va+8);g_esi=MEM32(va+12);g_esp=MEM32(va+16)+4;
        jump_count=i;longjmp(jump_slots[i-1],value?(int)value:1);
    }
    nxdk_port_fail("longjmp without active native setjmp",__FILE__,__LINE__);
}
static void guest_memmove(void)
{
    uint32_t dest=MEM32(g_esp+4),src=MEM32(g_esp+8),size=MEM32(g_esp+12);
    memmove((void*)XBOX_PTR(dest),(const void*)XBOX_PTR(src),size);g_eax=dest;g_esp+=4;
}
void xml1_guest_memmove(void) { guest_memmove(); }
uint32_t port_call_guest(uint32_t address,const uint32_t *args,unsigned count)
{
    if(!g_fs_base || !g_esp || count>16)nxdk_port_fail("callback without guest context",__FILE__,__LINE__);
    uint32_t regs[]={g_eax,g_ecx,g_edx,g_esp,g_ebx,g_esi,g_edi,g_ebp,g_seh_ebp,port_last_call};
    double fp[8];memcpy(fp,g_fp_stack,sizeof(fp));
    int top=g_fp_top,cmp=g_fp_cmp,df=g_df;uint16_t cw=g_fp_control_word,cc=g_fp_cc;
    RecompXmm xmm[]={g_xmm0,g_xmm1,g_xmm2,g_xmm3,g_xmm4,g_xmm5,g_xmm6,g_xmm7};
    uint64_t mm[8];memcpy(mm,port_registers()->mm,sizeof(mm));
    for(unsigned i=count;i;--i)MEM32(g_esp-=4)=args[i-1];
    MEM32(g_esp-=4)=0;
    recomp_func_t fn=recomp_lookup(address);if(!fn)recomp_icall_fail_log(address);
    fn();uint32_t result=g_eax;
    if(g_esp!=regs[3] && g_esp!=regs[3]-4*count)nxdk_port_fail("callback stack imbalance",__FILE__,__LINE__);
    g_eax=regs[0];g_ecx=regs[1];g_edx=regs[2];g_esp=regs[3];g_ebx=regs[4];g_esi=regs[5];g_edi=regs[6];g_ebp=regs[7];g_seh_ebp=regs[8];port_last_call=regs[9];
    memcpy(g_fp_stack,fp,sizeof(fp));g_fp_top=top;g_fp_cmp=cmp;g_df=df;g_fp_control_word=cw;g_fp_cc=cc;
    g_xmm0=xmm[0];g_xmm1=xmm[1];g_xmm2=xmm[2];g_xmm3=xmm[3];g_xmm4=xmm[4];g_xmm5=xmm[5];g_xmm6=xmm[6];g_xmm7=xmm[7];
    memcpy(port_registers()->mm,mm,sizeof(mm));
    return result;
}
recomp_func_t recomp_lookup_manual(uint32_t va)
{
    if(va==0x00342AA0u) return guest_memmove;
    return NULL;
}
/* Desktop-only menu extensions are deliberately disabled; retail Xbox menu stays active. */
void xml1_pc_menu_command(const char *s) { (void)s; }
int xml1_pc_native_token(const char *s) { (void)s; return 0; }
void xml1_pc_native_item(unsigned item,const char *var) { (void)item;(void)var; }
int xml1_pc_native_value(unsigned item,char *buffer,unsigned size) { (void)item;(void)buffer;(void)size;return 0; }
void xml1_pc_native_closed(unsigned owner) { (void)owner; }
void xml1_pc_native_owner(unsigned item,unsigned owner) { (void)item;(void)owner; }
void xml1_pc_native_bounds(unsigned item,int x,int top,int width,int height) { (void)item;(void)x;(void)top;(void)width;(void)height; }
