#include "engine/inventory/raven_stash_owner.h"
#include "engine/inventory/raven_stash_transfer_guest.h"

static char* stash_item_name(uint32_t record) {
    uint32_t handle=MEM32(record+4),index=handle&0xffffffu;
    if(!handle||index>=0x2000)return 0;
    uint32_t pool=spawner_call(0,0x199c10,0,NULL,0);
    uint64_t address=(uint64_t)pool+0x8008+MEM32(pool+4+index*4);
    if(address<0x10000||address>=0x08000000u)return 0;
    const char* source=(const char*)XBOX_PTR((uint32_t)address);
    const char* end=memchr(source,0,(size_t)(0x08000000u-address));
    if(!end||end==source)return 0;
    size_t length=(size_t)(end-source);
    char* name=malloc(length+1);if(!name)extension_failure("stash item-name allocation");
    memcpy(name,source,length+1);
    return name;
}

static int stash_shared_transfer(uint32_t inventory,unsigned item,int deposit) {
    if(inventory<0x10000||inventory>0x08000000u-0x1a70||item>=160||
       item>=MEM8(inventory+0x1688)||(deposit!=0&&deposit!=1))return 0;
    uint32_t record=spawner_call(inventory,0x7e270,1,&item,0);
    if(!record||MEM32(record+0xc)!=1)return 0;
    unsigned carried=(uint8_t)spawner_call(inventory,0x7e430,1,&item,0);
    unsigned maximum=(uint8_t)spawner_call(inventory,0x7e4a0,1,&item,0);
    if(carried>maximum||(deposit?!carried:carried>=maximum))return 0;
    // XML1's equipment capacity remains authoritative. Its native menu checks
    // inventory7E290 against20; a stash does not add carried inventory slots.
    if(!deposit&&(uint16_t)spawner_call(inventory,0x7e290,0,NULL,0)>=20)return 0;
    char* name=stash_item_name(record);if(!name)return 0;
    unsigned stored;uint64_t revision;
    int accepted=0;
    if(!raven_stash_read(inventory,name,&stored,&revision)||
       (deposit?raven_stash_total(inventory)>=60:!stored))goto done;
    uint32_t args[2]={item,deposit?carried-1:carried+1};
    // Native7E450 only changes the quantity byte and never invokes gameplay
    // callbacks. Preflight the exact authored maximum to avoid silent clamping.
    // Commit by revision; a rejected owner update restores the original count.
    if(!(spawner_call(inventory,0x7e450,2,args,0)&255u))goto done;
    if((uint8_t)spawner_call(inventory,0x7e430,1,&item,0)!=args[1])
        extension_failure("stash native quantity did not match preflight");
    accepted=raven_stash_commit(inventory,revision,name,deposit?stored+1:stored-1);
    if(!accepted) {
        args[1]=carried;
        if(!(spawner_call(inventory,0x7e450,2,args,0)&255u))
            extension_failure("stash quantity rollback failed");
    }
done:
    free(name);return accepted;
}
int xml1_stash_shared_transfer(uint32_t inventory,unsigned item,int deposit) {
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top,result=stash_shared_transfer(inventory,item,deposit);
    if(g_esp!=saved[7]||g_fp_top!=fp)extension_failure("stash transfer ABI");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return result;
}

static int stash_equipped_deposit(uint32_t inventory,uint32_t character,unsigned item) {
    if(inventory<0x10000||inventory>0x08000000u-0x1a70||item>=160||
       item>=MEM8(inventory+0x1688)||character<0x10000||character>0x08000000u-0x500||
       raven_stash_total(inventory)>=60)return 0;
    uint32_t record=spawner_call(inventory,0x7e270,1,&item,0);
    if(!record||MEM32(record+0xc)!=1)return 0;
    uint32_t stats=spawner_call(character,0x801f0,0,NULL,0);
    unsigned count=spawner_call(stats,0x47690,0,NULL,0),matches=0;
    if(count>3)return 0;
    for(unsigned i=0;i<count;++i)
        if((uint8_t)spawner_call(stats,0x47820,1,&i,0)==item)++matches;
    if(matches!=1)return 0;
    char* name=stash_item_name(record);if(!name)return 0;
    unsigned stored;uint64_t revision;int accepted=0;
    if(!raven_stash_read(inventory,name,&stored,&revision))goto done;
    // Match XML1's equipped shop transfer17CC50: native47E10 removes the
    // owned item and marks stats dirty (+2E bit0). Its sort479D0 has no game
    // callbacks. XML1 retains ownership of deferred stat/effect refresh; do
    // not introduce a second effect-removal system for this new menu mode.
    if(!(spawner_call(stats,0x47e10,1,&item,0)&255u))goto done;
    accepted=raven_stash_commit(inventory,revision,name,stored+1);
    if(!accepted&&!(spawner_call(stats,0x47b70,1,&item,0)&255u))
        extension_failure("stash equipped ownership rollback failed");
done:
    free(name);return accepted;
}
int xml1_stash_equipped_deposit(uint32_t inventory,uint32_t character,unsigned item) {
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top,result=stash_equipped_deposit(inventory,character,item);
    if(g_esp!=saved[7]||g_fp_top!=fp)extension_failure("stash equipped transfer ABI");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return result;
}
static int stash_shared_transfer_fixture(void) {
    uint32_t inventory=xbox_HeapAlloc(0x1a70,16),text=xbox_HeapAlloc(320,16);
    if(!inventory||!text)extension_failure("stash transfer fixture allocation");
    memset((void*)XBOX_PTR(inventory),0,0x1a70);
    MEM32(inventory)=0x3ce064;MEM8(inventory+0x1688)=3;
    memset((void*)XBOX_PTR(text),'x',300);MEM8(text+300)=0;
    for(unsigned i=0;i<3;++i) {
        uint32_t record=inventory+4+i*0x24;
        MEM8(text)=(uint8_t)('a'+i);
        spawner_call(record+4,0x13eb0,1,&text,0);
        MEM32(record+0xc)=i==2?0:1;MEM8(record+0x1d)=99;
    }
    MEM8(text)='a';
    MEM8(inventory+0x20)=2;MEM8(inventory+0x24)=0x90;MEM32(inventory+0x1690)=1234;
    raven_stash_reset(inventory);
    int failed=0;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    if(!xml1_stash_shared_transfer(inventory,0,1)||MEM8(inventory+0x20)!=1||raven_stash_total(inventory)!=1)failed=1;
    uint32_t after[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    if(memcmp(saved,after,sizeof saved))failed=1;
    if(!xml1_stash_shared_transfer(inventory,0,0)||MEM8(inventory+0x20)!=2||raven_stash_total(inventory))failed=1;
    if(xml1_stash_shared_transfer(inventory,0,0)||xml1_stash_shared_transfer(inventory,3,1)||
       xml1_stash_shared_transfer(inventory,256,1)||xml1_stash_shared_transfer(inventory,2,1))failed=1;
    if(!xml1_stash_shared_transfer(inventory,0,1))failed=1;
    MEM8(inventory+0x44)=19;
    if(xml1_stash_shared_transfer(inventory,0,0)||raven_stash_total(inventory)!=1)failed=1;
    MEM8(inventory+0x44)=0;MEM8(inventory+0x21)=1;
    if(xml1_stash_shared_transfer(inventory,0,0)||raven_stash_total(inventory)!=1)failed=1;
    MEM8(inventory+0x21)=99;
    unsigned qty;uint64_t revision;
    if(!raven_stash_read(inventory,"other_mod_item",&qty,&revision)||
       !raven_stash_commit(inventory,revision,"other_mod_item",59))failed=1;
    if(xml1_stash_shared_transfer(inventory,0,1)||MEM8(inventory+0x20)!=1||raven_stash_total(inventory)!=60)failed=1;
    // Simulate reordered definitions: withdrawal follows the authored name,
    // never the previous numeric ID, and updates only its new carried slot.
    uint32_t first=MEM32(inventory+8);MEM32(inventory+8)=MEM32(inventory+0x2c);
    MEM32(inventory+0x2c)=first;
    if(xml1_stash_shared_transfer(inventory,0,0)||!xml1_stash_shared_transfer(inventory,1,0)||
       MEM8(inventory+0x44)!=1||MEM8(inventory+0x20)!=1||raven_stash_total(inventory)!=59)failed=1;
    if(MEM8(inventory+0x24)!=0x90||MEM32(inventory+0x1690)!=1234)failed=1;
    uint32_t character=xbox_HeapAlloc(0x500,16);
    if(!character)extension_failure("stash equipped fixture allocation");
    memset((void*)XBOX_PTR(character),0,0x500);
    uint32_t stats=character+4;
    for(unsigned item=0;item<2;++item)
        if(!(spawner_call(stats,0x47b70,1,&item,0)&255u))failed=1;
    MEM8(stats+0x2e)=0x80;
    uint32_t regs[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    if(!xml1_stash_equipped_deposit(inventory,character,1)||raven_stash_total(inventory)!=60||
       MEM32(stats+0x1e0)!=1||MEM8(stats+0x2e)!=0x81)failed=1;
    uint32_t success_regs[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    if(memcmp(regs,success_regs,sizeof regs))failed=1;
    if(xml1_stash_equipped_deposit(inventory,character,0))failed=1;
    uint32_t unchanged[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    if(memcmp(regs,unchanged,sizeof regs)||MEM32(stats+0x1e0)!=1)failed=1;
    raven_stash_clear_live(inventory);
    if(xml1_stash_equipped_deposit(inventory,character,1)||
       xml1_stash_equipped_deposit(inventory,character,2)||
       !xml1_stash_equipped_deposit(inventory,character,0)||MEM32(stats+0x1e0)||
       raven_stash_total(inventory)!=1||MEM8(inventory+0x20)!=1||MEM8(inventory+0x44)!=1)failed=1;
    if(MEM8(inventory+0x24)!=0x90||MEM32(inventory+0x1690)!=1234)failed=1;
    xbox_HeapFree(character);
    for(unsigned i=0;i<3;++i)spawner_call(inventory+8+i*0x24,0x13d370,0,NULL,0);
    raven_stash_forget(inventory);xbox_HeapFree(text);xbox_HeapFree(inventory);
    fprintf(stderr,"[STASH SHARED TRANSFER] %s native interned300-byte names, shared/equipped ownership mutation, native dirty flag, capacity/authored limits, conservation, reordered IDs, credits/shop flags and register preservation; menu pending\n",failed?"FAIL":"PASS");
    return failed;
}
