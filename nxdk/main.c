#include <windows.h>
#include <hal/video.h>
#include "port.h"
#include "recomp_funcs.h"

int main(void)
{
    XVideoSetMode(640,480,32,REFRESH_DEFAULT);
    port_screen("XML1 NXDK - native 32-bit port");
    port_log("ABI pointers=%u image=%p\n",(unsigned)sizeof(void*),(void*)&main);
    if(!port_load_xbe("D:\\guest.xbe")) nxdk_port_fail("load guest.xbe",__FILE__,__LINE__);
    port_init_thread(1024*1024);
    port_init_callbacks();
    if(!port_selftest()) nxdk_port_fail("generated code selftest",__FILE__,__LINE__);
    port_screen("Generated code tests passed");
    port_patch_imports();
    port_screen("Entering recompiled XML1 startup");
    uint32_t sp=g_esp;
    MEM32(g_esp-=4)=0;
    recomp_func_t entry=recomp_lookup(port_entry);
    if(!entry) nxdk_port_fail("entry not generated",__FILE__,__LINE__);
    entry();
    port_log("ENTRY returned eax=%08lx sp=%08lx expected=%08lx\n",(unsigned long)g_eax,(unsigned long)g_esp,(unsigned long)sp);
    port_screen("XML1 entry returned; see serial log");
    for(;;) Sleep(1000);
}
