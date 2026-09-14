#include <windows.h>
#include <string.h>
#include "port.h"
#include "recomp_types.h"
#include <usbh_lib.h>
#include <xid_driver.h>
#include <usb/libusbohci/inc/hub.h>
#define GAMEPAD_TYPE 0x003bf474u
#define ARG(n) MEM32(g_esp+4u*(n))
typedef struct Pad {xid_dev_t *device;uint32_t handle,packet,feedback;uint8_t state[18];} Pad;
static Pad pads[4];
/* Debugger-controlled controller, confined to this executable's guest memory.
 * Disabled unless a harness explicitly writes the magic; never reads host input. */
volatile uint32_t port_testpad[6];
static Pad testpad;
#define TESTPAD_MAGIC 0x54535450u
static int test_enabled(void){return port_testpad[0]==TESTPAD_MAGIC;}
static void update_testpad(void)
{
    if(!test_enabled()){testpad.handle=0;return;}
    uint8_t state[18];
    for(unsigned i=0;i<18;++i)state[i]=((volatile uint8_t*)port_testpad)[4+i];
    if(!testpad.packet||memcmp(state,testpad.state,18)){memcpy(testpad.state,state,18);++testpad.packet;}
}
static uint32_t previous_mask,generation,last_poll;
static int initialized;
static void finish(unsigned words,uint32_t result){g_eax=result;g_esp+=4*(words+1);}
static unsigned physical_port(xid_dev_t *device)
{
    UDEV_T *u=device->iface->udev;
    int internal=(XboxHardwareInfo.Flags&XBOX_HW_FLAG_INTERNAL_USB_HUB)!=0;
    while(u) {
        UDEV_T *parent=u->parent?u->parent->iface->udev:NULL;
        if((internal&&parent&&!parent->parent)||(!internal&&!u->parent)) {
            static const unsigned map[]={4,2,3,0,1};
            return u->port_num<5?map[u->port_num]:4;
        }
        u=parent;
    }
    return 4;
}
static void input_report(UTR_T *transfer)
{
    xid_dev_t *device=transfer->context;Pad *pad=device?device->user_data:NULL;
    if(!pad||transfer->status<0)return;
    if(transfer->xfer_len>=20 && memcmp(pad->state,transfer->buff+2,18)) {
        memcpy(pad->state,transfer->buff+2,18);++pad->packet;
    }
    transfer->xfer_len=0;transfer->bIsTransferDone=0;usbh_int_xfer(transfer);
}
static void feedback_complete(UTR_T *transfer)
{
    xid_dev_t *device=transfer->context;Pad *pad=device?device->user_data:NULL;
    if(!pad||!pad->feedback)return;
    uint32_t feedback=pad->feedback;pad->feedback=0;
    MEM32(feedback)=transfer->status<0?31:0;
    if(MEM32(feedback+4))NtSetEvent((HANDLE)(uintptr_t)MEM32(feedback+4),NULL);
}
static void connected(xid_dev_t *device,int status)
{
    (void)status;if(device->xid_desc.bType!=XID_TYPE_GAMECONTROLLER)return;
    unsigned port=physical_port(device);if(port>=4)return;
    Pad *pad=&pads[port];memset(pad,0,sizeof(*pad));pad->device=device;pad->packet=1;device->user_data=pad;
    usbh_xid_read(device,0,input_report);
}
static void disconnected(xid_dev_t *device,int status)
{
    (void)status;Pad *pad=device->user_data;if(!pad)return;
    if(pad->feedback){MEM32(pad->feedback)=1167;if(MEM32(pad->feedback+4))NtSetEvent((HANDLE)(uintptr_t)MEM32(pad->feedback+4),NULL);}
    memset(pad,0,sizeof(*pad));device->user_data=NULL;
}
static uint32_t mask(void)
{
    if(initialized && GetTickCount()-last_poll>=16){last_poll=GetTickCount();usbh_pooling_hubs();}
    update_testpad();
    uint32_t result=test_enabled()?1:0;for(unsigned i=0;i<4;++i)if(pads[i].device)result|=1u<<i;return result;
}
static Pad *find(uint32_t handle)
{
    if(!handle)return NULL;mask();
    if(test_enabled()&&testpad.handle==handle)return &testpad;
    for(unsigned i=0;i<4;++i)if(pads[i].device&&pads[i].handle==handle)return &pads[i];return NULL;
}
void xml1_XInitDevices(void)
{
    if(!initialized){usbh_core_init();usbh_xid_init();usbh_install_xid_conn_callback(connected,disconnected);initialized=1;
        for(unsigned i=0;i<500;++i){usbh_pooling_hubs();Sleep(1);}}
    uint32_t current=mask();MEM32(GAMEPAD_TYPE)=current;MEM32(GAMEPAD_TYPE+4)=current;MEM32(GAMEPAD_TYPE+8)=0;
    port_log("Native USB/XID initialized mask=%lx\n",(unsigned long)current);finish(2,0);
}
void xml1_XGetDevices(void){uint32_t current=ARG(1)==GAMEPAD_TYPE?mask():0;previous_mask=current;finish(1,current);}
void xml1_XGetDeviceChanges(void)
{
    uint32_t current=ARG(1)==GAMEPAD_TYPE?mask():0,insert=current&~previous_mask,remove=previous_mask&~current;
    if(ARG(2))MEM32(ARG(2))=insert;if(ARG(3))MEM32(ARG(3))=remove;previous_mask=current;finish(3,(insert|remove)!=0);
}
void xml1_XInputOpen(void)
{
    unsigned port=ARG(2);uint32_t current=mask();
    if(ARG(1)!=GAMEPAD_TYPE||port>=4||ARG(3)||!(current&(1u<<port))){finish(4,0);return;}
    Pad *pad=port==0&&test_enabled()?&testpad:&pads[port];
    if(!pad->handle)pad->handle=0x58490000u|((++generation&0xfff)<<4)|(port+1);
    finish(4,pad->handle);
}
void xml1_XInputClose(void){Pad *pad=find(ARG(1));if(pad)pad->handle=0;finish(1,0);}
void xml1_XInputGetState(void)
{
    Pad *pad=find(ARG(1));uint32_t dest=ARG(2);
    if(!pad||!dest){finish(2,dest?1167:87);return;}
    KIRQL old=KeRaiseIrqlToDpcLevel();
    MEM32(dest)=pad->packet;memcpy(port_guest_pointer(dest+4),pad->state,18);MEM16(dest+22)=0;
    KfLowerIrql(old);finish(2,0);
}
void xml1_XInputSetState(void)
{
    Pad *pad=find(ARG(1));uint32_t feedback=ARG(2);
    if(!pad||!feedback){finish(2,feedback?1167:87);return;}
    if(pad==&testpad){MEM32(feedback)=0;if(MEM32(feedback+4))NtSetEvent((HANDLE)(uintptr_t)MEM32(feedback+4),NULL);finish(2,0);return;}
    if(pad->feedback){finish(2,170);return;}
    xid_gamepad_out report={0,sizeof(report),MEM16(feedback+66),MEM16(feedback+68)};
    pad->feedback=feedback;MEM32(feedback)=997;
    int status=usbh_xid_write(pad->device,0,(uint8_t*)&report,sizeof(report),feedback_complete);
    if(status<0){pad->feedback=0;MEM32(feedback)=31;finish(2,31);}else finish(2,997);
}
