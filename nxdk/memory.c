#include <windows.h>
#include <string.h>
#include "port.h"
#include "recomp_types.h"
uint8_t port_xbe_header[65536];
uint32_t port_entry;
static RECOMP_TLS ETHREAD guest_thread_shadow;
static RECOMP_TLS void *guest_tls;
static RECOMP_TLS void *guest_stack,*guest_tib;
static uint32_t section_table,section_count;
static CRITICAL_SECTION section_lock;
static void section_bytes(uint32_t address,uint32_t size,int clear,FILE *file,int *ok)
{
    while(size){
        uint32_t piece=size;
        if(address<0x20000&&piece>0x20000-address)piece=0x20000-address;
        void *dest=port_guest_pointer(address);
        if(clear)memset(dest,0,piece);
        else if(fread(dest,1,piece,file)!=piece){*ok=0;return;}
        address+=piece;size-=piece;
    }
}
uint32_t port_section_control(uint32_t address,int load)
{
    if(address<section_table||(address-section_table)%sizeof(XBE_SECTION_HEADER)||
       (address-section_table)/sizeof(XBE_SECTION_HEADER)>=section_count)return 0xc0000008u;
    PXBE_SECTION_HEADER section=port_guest_pointer(address);
    EnterCriticalSection(&section_lock);uint32_t status=0;
    if(load){
        if(section->SectionReferenceCount==0){
            FILE *file=fopen("D:\\guest.xbe","rb");int ok=file!=NULL;
            if(ok&&fseek(file,section->FileAddress,SEEK_SET))ok=0;
            if(ok){
                section_bytes(section->VirtualAddress,section->VirtualSize,1,NULL,&ok);
                section_bytes(section->VirtualAddress,section->FileSize,0,file,&ok);
            }
            if(file)fclose(file);
            if(!ok){status=0xc0000185u;goto done;}
            ++MEM16((uint32_t)(uintptr_t)section->HeadReferenceCount);
            ++MEM16((uint32_t)(uintptr_t)section->TailReferenceCount);
            port_patch_imports();
        }
        if(section->SectionReferenceCount==0x7fffffff){status=0xc000009au;goto done;}
        ++section->SectionReferenceCount;
    }else{
        if(section->SectionReferenceCount<=0){status=0xc000000du;goto done;}
        if(--section->SectionReferenceCount==0){
            --MEM16((uint32_t)(uintptr_t)section->HeadReferenceCount);
            --MEM16((uint32_t)(uintptr_t)section->TailReferenceCount);
            /* Keep the original address span committed. The C recomp owns
               this mapping; a subsequent load still restores original bytes
               and zeroes BSS. Physical page reclamation is a later option. */
        }
    }
done:
    port_log("SECTION %s index=%lu refs=%ld status=%08lx\n",load?"load":"unload",(unsigned long)((address-section_table)/sizeof(XBE_SECTION_HEADER)),section->SectionReferenceCount,(unsigned long)status);
    LeaveCriticalSection(&section_lock);return status;
}
void port_cleanup_thread(void)
{
    port_cleanup_io_apcs();
    if(guest_stack)VirtualFree(guest_stack,0,MEM_RELEASE);
    free(guest_tib);free(guest_tls);
    guest_stack=guest_tib=guest_tls=NULL;
    memset(&port_thread_register_bank,0,sizeof(port_thread_register_bank));
}
void *port_native_thread(uint32_t address)
{
    if(port_interrupt_register_bank)return (void*)(uintptr_t)address;
    return address==(uint32_t)(uintptr_t)&guest_thread_shadow ? KeGetCurrentThread() : (void*)(uintptr_t)address;
}
void port_init_guest_tls(uint32_t size)
{
    if(size>1024*1024)nxdk_port_fail("invalid guest TLS size",__FILE__,__LINE__);
    guest_tls=calloc(1,size?size:16);
    if(!guest_tls)nxdk_port_fail("guest TLS allocation",__FILE__,__LINE__);
    guest_thread_shadow.Tcb.TlsData=guest_tls;
    /* Xbox TLS indexes count backwards from the top of the reserved area. */
    MEM32(g_fs_base+4)=(uint32_t)(uintptr_t)guest_tls+size;
}
static uint32_t read32(const uint8_t *p) { uint32_t n;memcpy(&n,p,4);return n; }
void *port_guest_pointer(uint32_t address) { return address ? (void*)XBOX_PTR(address) : NULL; }
int port_load_xbe(const char *path)
{
    FILE *f=fopen(path,"rb");
    if(!f) {port_log("Cannot open %s\n",path);return 0;}
    if(fread(port_xbe_header,1,4096,f)!=4096 || memcmp(port_xbe_header,"XBEH",4)) {port_log("Invalid XBE header\n");fclose(f);return 0;}
    uint32_t base=read32(port_xbe_header+0x104), image=read32(port_xbe_header+0x10c);
    uint32_t count=read32(port_xbe_header+0x11c), sections=read32(port_xbe_header+0x120);
    port_entry=read32(port_xbe_header+0x128)^0xa8fc57abu;
    if(base!=0x10000 || count>64 || sections<base || sections-base+count*56>4096 || image>0xf00000) {port_log("Invalid XBE layout\n");fclose(f);return 0;}
    section_table=sections;section_count=count;InitializeCriticalSection(&section_lock);
    size_t size=((base+image+4095)&~4095u)-0x20000;
    void *mapped=VirtualAlloc((void*)0x20000,size,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    /* The loader reserves the entire XBE address span, including the gap below
       our high-linked native sections. Commit that existing reservation. */
    if(!mapped) mapped=VirtualAlloc((void*)0x20000,size,MEM_COMMIT,PAGE_READWRITE);
    port_log("MAP guest=%p error=%lu size=%08lx native=%p entry=%08lx\n",mapped,(unsigned long)GetLastError(),(unsigned long)size,(void*)&port_load_xbe,(unsigned long)port_entry);
    if(mapped!=(void*)0x20000) {fclose(f);return 0;}
    for(uint32_t i=0;i<count;++i) {
        uint8_t *s=port_xbe_header+sections-base+i*56;
        uint32_t flags=read32(s), va=read32(s+4), vs=read32(s+8), raw=read32(s+12), bytes=read32(s+16);
        if(va<0x11000 || (uint64_t)va+vs>base+image || bytes>vs) {fclose(f);return 0;}
        PXBE_SECTION_HEADER sh=(PXBE_SECTION_HEADER)s;
        uint32_t head=(uint32_t)(uintptr_t)sh->HeadReferenceCount,tail=(uint32_t)(uintptr_t)sh->TailReferenceCount;
        if(head<base||head+2>base+4096||tail<base||tail+2>base+4096){fclose(f);return 0;}
        sh->SectionReferenceCount=(flags&2)?1:0;
        if(sh->SectionReferenceCount){++MEM16(head);++MEM16(tail);}
        port_log("SECTION %lu va=%08lx size=%08lx raw=%08lx\n",(unsigned long)i,(unsigned long)va,(unsigned long)vs,(unsigned long)bytes);
        if(fseek(f,raw,SEEK_SET)) {fclose(f);return 0;}
        uint32_t at=va,left=bytes;
        while(left) {
            uint32_t piece=left;
            if(at<0x20000 && piece>0x20000-at)piece=0x20000-at;
            if(fread(port_guest_pointer(at),1,piece,f)!=piece) {fclose(f);return 0;}
            at+=piece;left-=piece;
        }
        if(flags&4) {if(!g_xbox_code_lo || va<g_xbox_code_lo)g_xbox_code_lo=va;if(va+vs>g_xbox_code_hi)g_xbox_code_hi=va+vs;}
    }
    fclose(f); return 1;
}
void port_init_thread(uint32_t bytes)
{
    void *stack=VirtualAlloc(NULL,bytes,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    void *tib=calloc(1,4096);
    if(!stack||!tib)nxdk_port_fail("thread memory",__FILE__,__LINE__);
    guest_stack=stack;guest_tib=tib;
    g_esp=(uint32_t)(uintptr_t)stack+bytes-16;
    g_fs_base=(uint32_t)(uintptr_t)tib;
    MEM32(g_fs_base)=0xffffffffu;
    MEM32(g_fs_base+0x18)=g_fs_base;
    MEM32(g_fs_base+0x1c)=g_fs_base;
    memcpy(&guest_thread_shadow,KeGetCurrentThread(),sizeof(guest_thread_shadow));
    guest_thread_shadow.Tcb.TlsData=NULL;
    MEM32(g_fs_base+0x28)=(uint32_t)(uintptr_t)&guest_thread_shadow;
    /* The debug-only startup extension reads PRCB+0x250. Provide its real
       optional pointer without exposing the native TLS area. */
    uint32_t native_prcb;__asm__ volatile("movl %%fs:0x20,%0":"=r"(native_prcb));
    MEM32(g_fs_base+0x20)=native_prcb;
    MEM8(g_fs_base+0x24)=KeGetCurrentIrql();
    g_fp_control_word=0x037f;
    port_log("THREAD stack=%p top=%08lx tib=%p tls=%p\n",stack,(unsigned long)g_esp,tib,(void*)&g_eax);
}
