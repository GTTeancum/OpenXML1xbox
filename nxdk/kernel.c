#include <windows.h>
#include <string.h>
#include "port.h"
#include "recomp_types.h"
#define ARG(n) MEM32(g_esp+4u*(n))
#define ARG64(n) ((uint64_t)ARG(n)|((uint64_t)ARG((n)+1)<<32))
typedef struct PortThread {uint32_t start,context1,context2,system,tls;} PortThread;
static DWORD WINAPI guest_thread(void *opaque)
{
    PortThread thread=*(PortThread*)opaque;free(opaque);
    port_init_thread(1024*1024);
    port_init_guest_tls(thread.tls);
    port_log("GUEST THREAD start=%08lx system=%08lx contexts=%08lx,%08lx tls=%lu\n",(unsigned long)thread.start,(unsigned long)thread.system,(unsigned long)thread.context1,(unsigned long)thread.context2,(unsigned long)thread.tls);
    recomp_func_t fn=recomp_lookup(thread.system?thread.system:thread.start);
    if(!fn)recomp_icall_fail_log(thread.system?thread.system:thread.start);
    MEM32(g_esp-=4)=thread.context1;
    if(thread.system) MEM32(g_esp-=4)=thread.start;
    MEM32(g_esp-=4)=0;fn();uint32_t result=g_eax;port_cleanup_thread();return result;
}
static void bridge_create_thread(void)
{
    /* Xbox PsCreateSystemThreadEx: 10 stack arguments, the final one is SystemRoutine. */
    PortThread *t=malloc(sizeof(*t));
    if(!t) {g_eax=0xc0000017u;g_esp+=44;return;}
    *t=(PortThread){ARG(6),ARG(7),0,ARG(10),ARG(4)};
    DWORD id=0;
    HANDLE h=CreateThread(NULL,1024*1024,guest_thread,t,ARG(8)?CREATE_SUSPENDED:0,&id);
    if(!h) {free(t);g_eax=0xc000009au;}
    else {if(ARG(1))MEM32(ARG(1))=(uint32_t)(uintptr_t)h;if(ARG(5))MEM32(ARG(5))=id;g_eax=0;}
    port_log("PsCreateSystemThreadEx -> %08lx\n",(unsigned long)g_eax);g_esp+=44;
}
static void bridge_exit_thread(void) {uint32_t result=ARG(1);port_log("GUEST THREAD EXIT %08lx\n",(unsigned long)result);port_cleanup_thread();ExitThread(result);}
static void bridge_load_section(void){g_eax=port_section_control(ARG(1),1);g_esp+=8;}
static void bridge_unload_section(void){g_eax=port_section_control(ARG(1),0);g_esp+=8;}
typedef struct ShutdownBridge {HAL_SHUTDOWN_REGISTRATION native;uint32_t guest,callback;} ShutdownBridge;
static ShutdownBridge shutdown_slots[16];
static void NTAPI shutdown_callback(PHAL_SHUTDOWN_REGISTRATION registration)
{
    ShutdownBridge *slot=(ShutdownBridge*)registration;
    port_call_guest(slot->callback,&slot->guest,1);
}
static void bridge_shutdown_notification(void)
{
    uint32_t guest=ARG(1);int add=ARG(2)!=0;ShutdownBridge *slot=NULL;
    for(unsigned i=0;i<16;++i)if(shutdown_slots[i].guest==guest){slot=&shutdown_slots[i];break;}
    if(!slot && add)for(unsigned i=0;i<16;++i)if(!shutdown_slots[i].guest){slot=&shutdown_slots[i];break;}
    if(!slot)nxdk_port_fail("shutdown registration missing/full",__FILE__,__LINE__);
    if(add){slot->guest=guest;slot->callback=MEM32(guest);slot->native.NotificationRoutine=shutdown_callback;slot->native.Priority=(LONG)MEM32(guest+4);}
    HalRegisterShutdownNotification(&slot->native,add);
    if(!add)slot->guest=0;
    port_log("SHUTDOWN callback registration %08lx add=%d\n",(unsigned long)guest,add);g_esp+=12;
}
typedef struct DpcBridge {uint32_t guest,callback;} DpcBridge;
static DpcBridge dpc_slots[64];
static void NTAPI dpc_callback(PKDPC dpc,void *context,void *arg1,void *arg2)
{
    uint32_t guest=(uint32_t)(uintptr_t)dpc;
    for(unsigned i=0;i<64;++i)if(dpc_slots[i].guest==guest) {
        uint32_t args[]={guest,(uint32_t)(uintptr_t)context,(uint32_t)(uintptr_t)arg1,(uint32_t)(uintptr_t)arg2};
        port_call_interrupt(dpc_slots[i].callback,args,4);return;
    }
    __asm__ volatile("int3");
}
static void bridge_initialize_dpc(void)
{
    uint32_t guest=ARG(1);DpcBridge *slot=NULL;
    for(unsigned i=0;i<64;++i)if(dpc_slots[i].guest==guest){slot=&dpc_slots[i];break;}
    if(!slot)for(unsigned i=0;i<64;++i)if(!dpc_slots[i].guest){slot=&dpc_slots[i];break;}
    if(!slot)nxdk_port_fail("DPC bridge table full",__FILE__,__LINE__);
    slot->guest=guest;slot->callback=ARG(2);
    KeInitializeDpc((PKDPC)(uintptr_t)guest,dpc_callback,(void*)(uintptr_t)ARG(3));
    port_log("DPC initialized guest=%08lx callback=%08lx\n",(unsigned long)guest,(unsigned long)slot->callback);g_esp+=16;
}
static void bridge_lower_irql(void){KfLowerIrql((KIRQL)g_ecx);MEM8(g_fs_base+0x24)=KeGetCurrentIrql();g_esp+=4;}
static void bridge_raise_irql(void){g_eax=KfRaiseIrql((KIRQL)g_ecx);MEM8(g_fs_base+0x24)=KeGetCurrentIrql();g_esp+=4;}
static void bridge_raise_dpc(void){g_eax=KeRaiseIrqlToDpcLevel();MEM8(g_fs_base+0x24)=DISPATCH_LEVEL;g_esp+=4;}
typedef struct InterruptBridge {uint32_t guest,callback;} InterruptBridge;
static InterruptBridge interrupt_slots[16];
static BOOLEAN NTAPI interrupt_callback(PKINTERRUPT interrupt,void *context)
{
    uint32_t guest=(uint32_t)(uintptr_t)interrupt;
    for(unsigned i=0;i<16;++i)if(interrupt_slots[i].guest==guest) {
        uint32_t args[]={guest,(uint32_t)(uintptr_t)context};
        return (BOOLEAN)port_call_interrupt(interrupt_slots[i].callback,args,2);
    }
    return FALSE;
}
static void bridge_initialize_interrupt(void)
{
    uint32_t guest=ARG(1);InterruptBridge *slot=NULL;
    for(unsigned i=0;i<16;++i)if(interrupt_slots[i].guest==guest){slot=&interrupt_slots[i];break;}
    if(!slot)for(unsigned i=0;i<16;++i)if(!interrupt_slots[i].guest){slot=&interrupt_slots[i];break;}
    if(!slot)nxdk_port_fail("interrupt bridge table full",__FILE__,__LINE__);
    slot->guest=guest;slot->callback=ARG(2);
    KeInitializeInterrupt((PKINTERRUPT)(uintptr_t)guest,interrupt_callback,(void*)(uintptr_t)ARG(3),ARG(4),(KIRQL)ARG(5),(KINTERRUPT_MODE)ARG(6),(BOOLEAN)ARG(7));
    port_log("IRQ initialized guest=%08lx callback=%08lx vector=%lx level=%u\n",(unsigned long)guest,(unsigned long)slot->callback,(unsigned long)ARG(4),(unsigned)(KIRQL)ARG(5));g_esp+=32;
}
typedef struct SyncBridge {uint32_t callback,context;} SyncBridge;
static BOOLEAN NTAPI synchronize_callback(void *opaque)
{
    SyncBridge *bridge=opaque;return (BOOLEAN)port_call_interrupt(bridge->callback,&bridge->context,1);
}
static void bridge_synchronize(void)
{
    SyncBridge bridge={ARG(2),ARG(3)};
    g_eax=KeSynchronizeExecution((PKINTERRUPT)(uintptr_t)ARG(1),synchronize_callback,&bridge);g_esp+=16;
}
typedef struct FloatBridge {volatile LONG used;uint32_t guest;PortRegisterBank *owner;PortRegisterBank saved;} FloatBridge;
static FloatBridge float_slots[32];
static void bridge_save_float(void)
{
    uint32_t guest=ARG(1);FloatBridge *slot=NULL;unsigned index;
    for(index=0;index<32;++index)if(InterlockedCompareExchange(&float_slots[index].used,1,0)==0){slot=&float_slots[index];break;}
    if(!slot){g_eax=0xc000009au;g_esp+=8;return;}
    slot->guest=guest;slot->owner=port_registers();slot->saved=*port_registers();
    KFLOATING_SAVE *save=(KFLOATING_SAVE*)port_guest_pointer(guest);memset(save,0,sizeof(*save));
    save->ControlWord=g_fp_control_word;save->StatusWord=g_fp_cc|((g_fp_top&7)<<11);save->Spare1=0x58460000u|index;
    g_fp_control_word=0x037f;g_fp_top=g_fp_cmp=g_fp_cc=0;
    g_eax=0;g_esp+=8;
}
static void bridge_restore_float(void)
{
    uint32_t guest=ARG(1);KFLOATING_SAVE *save=(KFLOATING_SAVE*)port_guest_pointer(guest);
    unsigned index=save->Spare1&0xffff;
    if((save->Spare1&0xffff0000u)!=0x58460000u||index>=32||!float_slots[index].used||float_slots[index].guest!=guest||float_slots[index].owner!=port_registers())nxdk_port_fail("invalid guest floating-point restore",__FILE__,__LINE__);
    PortRegisterBank *saved=&float_slots[index].saved,*current=port_registers();
    memcpy(current->fp,saved->fp,sizeof(current->fp));memcpy(current->mm,saved->mm,sizeof(current->mm));memcpy(current->xmm,saved->xmm,sizeof(current->xmm));
    current->words[10]=saved->words[10];current->words[11]=saved->words[11];current->words[13]=saved->words[13];current->words[14]=saved->words[14];
    InterlockedExchange(&float_slots[index].used,0);g_eax=0;g_esp+=8;
}
#include "native_imports.inc"
typedef struct Import {uint32_t address,ordinal;const char *name;} Import;
static const Import imports[]={
#include "imports.inc"
};
void port_patch_imports(void)
{
    for(unsigned i=0;i<sizeof(imports)/sizeof(imports[0]);++i) {
        const Import *p=&imports[i];uint32_t value=native_data(p->ordinal);
        if(!value)value=0xfe000000u+p->ordinal*4;
        MEM32(p->address)=value;
    }
    port_log("Kernel: %u imports bound\n",(unsigned)(sizeof(imports)/sizeof(imports[0])));
}
recomp_func_t recomp_lookup_kernel(uint32_t va)
{
    if(va<0xfe000000u || va>=0xfe001000u || (va&3))return NULL;
    unsigned ordinal=(va-0xfe000000u)/4;
    static uint32_t counts[1024];
    if(++counts[ordinal]<=4)port_log("KERNEL %u sp=%08lx count=%lu\n",ordinal,(unsigned long)g_esp,(unsigned long)counts[ordinal]);
    return native_function(ordinal);
}
