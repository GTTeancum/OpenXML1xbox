#include "engine/inventory/raven_stash_menu_guest.h"

/* XML2 AD5C0 queues its menu only from gameplay with no active frontend.
 * XML1's current-menu getter is slot54 (1839B0), not XML2's slot80;
 * the existing gameplay gate is slot6C (154190), not XML2's slot90.
 * Keep XML1's gate unchanged rather than importing its sequel's policy. */
static uint32_t (*stash_open_call)(uint32_t,uint32_t,unsigned,const uint32_t*,int)=spawner_call;
static void stash_menu_script(void) {
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top;
    uint32_t frontend=stash_open_call(0,0x183d20,0,NULL,0);
    uint32_t name=stash_open_call(frontend,MEM32(MEM32(frontend)+0x54),0,NULL,0);
    if(!name||!MEM8(name)) {
        uint32_t game=stash_open_call(0,0x158860,0,NULL,0);
        if(stash_open_call(game,MEM32(MEM32(game)+0x6c),0,NULL,0)&255) {
            uint32_t manager=stash_open_call(0,0x11cd90,0,NULL,0);
            g_esp-=32;uint32_t text=g_esp;
            strcpy((char*)XBOX_PTR(text),"openmenu stash");
            /* Native 11C9D0 copies into its bounded, owned queue. Never retain
             * this stack pointer or open a menu reentrantly from Python. */
            stash_open_call(manager,MEM32(MEM32(manager)+0x18),1,&text,0);
            g_esp+=32;
        }
    }
    if(g_esp!=saved[7]||g_fp_top!=fp)extension_failure("stash script ABI");
    g_eax=0;g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7]+4;g_seh_ebp=saved[8];
}

static uint32_t stash_open_fixture_frontend,stash_open_fixture_game,stash_open_fixture_manager;
static unsigned stash_open_fixture_allowed,stash_open_fixture_gates;
static uint32_t stash_open_fixture_call(uint32_t receiver,uint32_t code,unsigned count,const uint32_t* args,int cdecl_call) {
    if(code==0x183d20)return stash_open_fixture_frontend;
    if(code==0x158860)return stash_open_fixture_game;
    if(code==0x11cd90)return stash_open_fixture_manager;
    if(code==0x154190) {
        if(receiver!=stash_open_fixture_game||count)extension_failure("stash gameplay gate contract");
        ++stash_open_fixture_gates;return stash_open_fixture_allowed;
    }
    return spawner_call(receiver,code,count,args,cdecl_call);
}
static int stash_open_script_fixture(void (*command)(void)) {
    uint32_t arena=xbox_HeapAlloc(0x1200,16),sp=g_esp;int fp=g_fp_top,failed=0;
    if(!arena)extension_failure("stash script fixture allocation");
    memset((void*)XBOX_PTR(arena),0,0x1200);
    stash_open_fixture_frontend=arena;stash_open_fixture_game=arena+0xa00;
    stash_open_fixture_manager=arena+0xb00;
    MEM32(arena)=0x3e00c4;MEM32(arena+0xa00)=0x3dd7b4;
    spawner_call(arena+0xb00,0x11cd10,0,NULL,0);
    stash_open_call=stash_open_fixture_call;stash_open_fixture_gates=0;
    for(unsigned i=0;i<5;++i) {
        /* Occupied frontend, denied gameplay, two allowed requests, full queue.
         * The getter and owned command queue execute actual native code. */
        MEM8(arena+0x9cc)=i==0?'x':0;stash_open_fixture_allowed=i!=1;
        PUSH32(g_esp,0);command();
        if(g_eax||g_esp!=sp||g_fp_top!=fp||
           MEM32(arena+0xb00+0x460)!=(i<2?0:i==2?1:2)||
           stash_open_fixture_gates!=i)failed=1;
    }
    /* Both queue slots own independent copies after the script stack expires. */
    if(strcmp((const char*)XBOX_PTR(arena+0xb00+0x338),"openmenu stash")||
       strcmp((const char*)XBOX_PTR(arena+0xb00+0x3c0),"openmenu stash"))failed=1;
    stash_open_call=spawner_call;xbox_HeapFree(arena);
    fprintf(stderr,"[STASH SCRIPT] %s registered callback, native menu getter/owned queue, occupied/denied/allowed/full cases and stack/FPU; gameplay-state terminal substituted\n",failed?"FAIL":"PASS");
    return failed;
}

static unsigned stash_item_quantity(uint32_t inventory,unsigned item) {
    if(item>=160||item>=MEM8(inventory+0x1688))return 0;
    uint32_t record=spawner_call(inventory,0x7e270,1,&item,0);
    if(!record||MEM32(record+0xc)!=1)return 0;
    char* name=stash_item_name(record);if(!name)return 0;
    unsigned quantity=0;uint64_t revision;
    (void)raven_stash_read(inventory,name,&quantity,&revision);free(name);return quantity;
}
int xml1_stash_menu_stock(uint32_t menu,uint32_t inventory,unsigned item) {
    if(!raven_stash_menu_enabled(menu))return -1;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top,result=stash_item_quantity(inventory,item)!=0;
    if(g_esp!=saved[7]||g_fp_top!=fp)extension_failure("stash stock query ABI");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return result;
}
static int stash_withdraw_enabled(uint32_t inventory,unsigned item) {
    if(!stash_item_quantity(inventory,item))return 0;
    unsigned quantity=(uint8_t)spawner_call(inventory,0x7e430,1,&item,0);
    unsigned maximum=(uint8_t)spawner_call(inventory,0x7e4a0,1,&item,0);
    return quantity<maximum&&(uint16_t)spawner_call(inventory,0x7e290,0,NULL,0)<20;
}
static void stash_list_eligibility(uint32_t inventory,uint32_t list) {
        int32_t count=(int32_t)spawner_call(list,0x177980,0,NULL,0);
        for(int32_t row=0;row<count;++row) {
            uint32_t index=(uint32_t)row,item=spawner_call(list,0x177d90,1,&index,0);
            uint32_t args[]={index,stash_withdraw_enabled(inventory,item)};
            spawner_call(list,0x1782f0,2,args,0);
        }
}
int xml1_stash_menu_eligibility(uint32_t menu) {
    if(!raven_stash_menu_enabled(menu))return 0;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top;
    uint32_t name=0x3df9f8; // Authored native control name: for_sale.
    uint32_t control=spawner_call(menu,0x162660,1,&name,0);
    uint32_t cast_args[]={control,0,0x457e0c,0x458028,0};
    uint32_t list=spawner_call(0,0x34238d,5,cast_args,1);
    if(list) {
        uint32_t inventory=spawner_call(0,0x7f850,0,NULL,0);
        stash_list_eligibility(inventory,list);
        spawner_call(list,MEM32(MEM32(list)+0x64),0,NULL,0);
    }
    if(g_esp!=saved[7]||g_fp_top!=fp)extension_failure("stash eligibility ABI");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return 1;
}
static void stash_menu_text(uint32_t menu,const char* name,const char* text) {
    uint32_t entry=g_esp;g_esp-=256;
    strcpy((char*)XBOX_PTR(g_esp),name);strcpy((char*)XBOX_PTR(g_esp+128),text);
    uint32_t args[]={menu,g_esp,0x3d2c44,g_esp+128}; // Native "%s" format.
    spawner_call(0,0x1627b0,4,args,1);g_esp=entry;
}
int xml1_stash_menu_labels(uint32_t menu,uint32_t control_name,int stock_side) {
    if(!raven_stash_menu_enabled(menu))return 0;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top;
    uint32_t inventory=spawner_call(0,0x7f850,0,NULL,0);
    char text[64];snprintf(text,sizeof text,"%u / 60",raven_stash_total(inventory));
    stash_menu_text(menu,"money_title","Stash Capacity");stash_menu_text(menu,"money_value",text);
    stash_menu_text(menu,"sell_title","Stored Items");stash_menu_text(menu,"inventory_title","Carried Items");
    if(control_name) {
        uint32_t control=spawner_call(menu,0x162660,1,&control_name,0);
        uint32_t cast_args[]={control,0,0x457e0c,0x458028,0};
        uint32_t list=spawner_call(0,0x34238d,5,cast_args,1);
        int valid=0;unsigned item=160;
        int32_t count=list?(int32_t)spawner_call(list,0x177980,0,NULL,0):0;
        if(count>0) {
            uint32_t selection=spawner_call(list,0x1778f0,0,NULL,0);
            /* Native 177D90 returns zero for an out-of-range selection, which
             * is also a valid item ID. Validate the index before resolving it. */
            int32_t row=selection<(uint32_t)count?
                (int32_t)spawner_call(list,0x177d90,1,&selection,0):-1;
            if(row>=0) {
                if(stock_side){item=(unsigned)row;valid=item<160;}
                else {
                    unsigned count=MEM32(0x5765c0);
                    if(count<=256&&(unsigned)row<count){item=MEM8(0x575da0+(unsigned)row*8);valid=item<160;}
                }
            }
        }
        if(valid)snprintf(text,sizeof text,"%u",stash_item_quantity(inventory,item));else text[0]=0;
        // Replace only pricing controls after native descriptions/icons have
        // populated. Native fonts, geometry and item descriptions are retained.
        stash_menu_text(menu,"item_cost_title",valid?"Stored":"");
        stash_menu_text(menu,"item_cost_value",text);
    }
    if(g_esp!=saved[7]||g_fp_top!=fp)extension_failure("stash labels ABI");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return 1;
}
static int stash_menu_transfer(uint32_t inventory,int32_t row,int stock_side) {
    if(row<0)return 0; // Native shop's negative IDs buy services, never items.
    if(stock_side)return xml1_stash_shared_transfer(inventory,(unsigned)row,0);
    // Native17B5C0 builds up to256 rows of (item byte, optional character).
    // Read the live row only after validating the native pool's count.
    unsigned count=MEM32(0x575da0+0x820);
    if(count>256||(unsigned)row>=count)return 0;
    uint32_t entry=0x575da0+(unsigned)row*8;
    unsigned item=MEM8(entry);uint32_t character=MEM32(entry+4);
    return character?xml1_stash_equipped_deposit(inventory,character,item):
                     xml1_stash_shared_transfer(inventory,item,1);
}
int xml1_stash_menu_action(uint32_t menu,int32_t row,int stock_side) {
    if(!raven_stash_menu_enabled(menu))return -1;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top;
    uint32_t inventory=spawner_call(0,0x7f850,0,NULL,0);
    int result=stash_menu_transfer(inventory,row,stock_side!=0);
    if(g_esp!=saved[7]||g_fp_top!=fp)extension_failure("stash menu action ABI");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return result;
}

void xml1_stash_menu_parse(uint32_t menu,uint32_t node) {
    // Only the verified XML1 equipment-shop class understands these lists.
    // Other menu parsers and all ordinary shops keep their existing behavior.
    if(!menu||MEM32(menu)!=0x3dedcc)return;
    raven_stash_menu_set(menu,0);
    if(!node)return;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top;
    g_esp-=64;uint32_t key=g_esp,text=g_esp+32;
    memset((void*)XBOX_PTR(key),0,64);strcpy((char*)XBOX_PTR(text),"stash");
    uint32_t args[]={text,2};
    spawner_call(key,0x125da0,2,args,0);
    uint32_t value=spawner_call(node,0x1260e0,1,&key,0);
    spawner_call(key,0x125890,0,NULL,0);
    int enabled=0;
    if(value) {
        uint32_t string=spawner_call(value,0x199ee0,0,NULL,0);
        if(string>=0x10000&&string<=0x08000000u-5) {
            const char* s=(const char*)XBOX_PTR(string);
            enabled=(s[0]=='t'||s[0]=='T')&&(s[1]=='r'||s[1]=='R')&&
                    (s[2]=='u'||s[2]=='U')&&(s[3]=='e'||s[3]=='E')&&!s[4];
        }
    }
    raven_stash_menu_set(menu,enabled);
    if(g_esp!=key||g_fp_top!=fp)extension_failure("stash menu property ABI");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
}
static int stash_menu_rows_fixture(void) {
    uint32_t inventory=xbox_HeapAlloc(0x1a70,16),scratch=xbox_HeapAlloc(0x600,16);
    if(!inventory||!scratch)extension_failure("stash row fixture allocation");
    memset((void*)XBOX_PTR(inventory),0,0x1a70);memset((void*)XBOX_PTR(scratch),0,0x600);
    uint32_t menu=scratch,character=scratch+0x100,text=scratch+0x580;
    MEM32(inventory)=0x3ce064;MEM8(inventory+0x1688)=2;
    for(unsigned i=0;i<2;++i) {
        strcpy((char*)XBOX_PTR(text),i?"mod_gear_b":"mod_gear_a");
        spawner_call(inventory+8+i*0x24,0x13eb0,1,&text,0);
        MEM32(inventory+0x10+i*0x24)=1;MEM8(inventory+0x21+i*0x24)=10;
    }
    MEM8(inventory+0x20)=2;raven_stash_reset(inventory);
    unsigned char rows[16];memcpy(rows,(const void*)XBOX_PTR(0x575da0),16);
    uint32_t count=MEM32(0x5765c0);MEM32(0x5765c0)=2;
    MEM32(0x575da0)=0;MEM32(0x575da4)=0;
    MEM32(0x575da8)=1;MEM32(0x575dac)=character;
    uint32_t item=1;spawner_call(character+4,0x47b70,1,&item,0);
    int failed=xml1_stash_menu_stock(menu,inventory,0)!=-1||
        xml1_stash_menu_action(menu,0,1)!=-1||xml1_stash_menu_eligibility(menu)!=0;
    raven_stash_menu_set(menu,1);
    if(xml1_stash_menu_stock(menu,inventory,0)||!stash_menu_transfer(inventory,0,0)||
       xml1_stash_menu_stock(menu,inventory,0)!=1||!stash_withdraw_enabled(inventory,0))failed=1;
    MEM8(inventory+0x44)=19;
    if(stash_withdraw_enabled(inventory,0))failed=1;
    MEM8(inventory+0x44)=0;MEM8(inventory+0x21)=1;
    if(stash_withdraw_enabled(inventory,0))failed=1;
    MEM8(inventory+0x21)=10;
    if(!stash_menu_transfer(inventory,0,1)||xml1_stash_menu_stock(menu,inventory,0)||
       MEM8(inventory+0x20)!=2)failed=1;
    if(!stash_menu_transfer(inventory,1,0)||MEM32(character+4+0x1e0)||
       xml1_stash_menu_stock(menu,inventory,1)!=1)failed=1;
    /* Real native list backing: three row handles with IDs for one stored
     * item, one absent item and one shop service. Preserve the global pool. */
    unsigned char native_rows[3*0x50];
    memcpy(native_rows,(const void*)XBOX_PTR(0x573b48),sizeof native_rows);
    uint32_t list=scratch+0x380,indices=scratch+0x480;
    MEM32(list+0x84)=indices;MEM32(indices+0x64)=3;
    for(unsigned i=0;i<3;++i) {
        MEM8(indices+i)=(uint8_t)i;MEM8(0x573b48+i*0x50+0x4d)=0xa4;
        MEM32(0x573b48+i*0x50+0x40)=i==0?1:i==1?0:0xfffffffeu;
    }
    stash_list_eligibility(inventory,list);
    if(MEM8(0x573b95)!=0xa5||MEM8(0x573be5)!=0xa4||MEM8(0x573c35)!=0xa4)failed=1;
    MEM8(inventory+0x20)=20;stash_list_eligibility(inventory,list);
    if(MEM8(0x573b95)!=0xa4)failed=1;
    MEM8(inventory+0x20)=2;MEM8(inventory+0x45)=0;
    stash_list_eligibility(inventory,list);if(MEM8(0x573b95)!=0xa4)failed=1;
    MEM8(inventory+0x45)=10;stash_list_eligibility(inventory,list);
    if(MEM8(0x573b95)!=0xa5)failed=1;
    memcpy((void*)XBOX_PTR(0x573b48),native_rows,sizeof native_rows);
    if(stash_menu_transfer(inventory,-2,1)||stash_menu_transfer(inventory,2,0)||
       stash_menu_transfer(inventory,160,1))failed=1;
    MEM32(0x5765c0)=257;if(stash_menu_transfer(inventory,0,0))failed=1;
    memcpy((void*)XBOX_PTR(0x575da0),rows,16);MEM32(0x5765c0)=count;
    for(unsigned i=0;i<2;++i)spawner_call(inventory+8+i*0x24,0x13d370,0,NULL,0);
    raven_stash_menu_set(menu,0);raven_stash_forget(inventory);
    xbox_HeapFree(scratch);xbox_HeapFree(inventory);
    fprintf(stderr,"[STASH MENU ROWS] %s native row identities, shared/equipped routing, stock visibility, native list enabled flags/capacity, service/invalid row rejection and ordinary-shop pass-through; rendering untested\n",failed?"FAIL":"PASS");
    return failed;
}
static int stash_menu_controls_fixture(void) {
    uint32_t arena=xbox_HeapAlloc(0x3000,16),sp=g_esp;int fp=g_fp_top,failed=0;
    if(!arena)extension_failure("stash controls fixture allocation");
    memset((void*)XBOX_PTR(arena),0,0x3000);
    /* The unit harness has no boot-time Raven heap manager. Provide the
     * exact empty 199CD0 pool layout without replacing its interning code. */
    uint32_t previous_pool=MEM32(0x58f67c),private_pool=xbox_HeapAlloc(0x2c08,16);
    if(!private_pool)extension_failure("stash text pool fixture allocation");
    memset((void*)XBOX_PTR(private_pool),0,0x2c08);
    MEM32(private_pool+4)=1;MEM32(private_pool+0x1004)=2;MEM32(0x58f67c)=private_pool;
    /* Empty-list labels only query stash totals; avoid booting the inventory
     * resource loader in this isolated controls fixture. */
    uint32_t inventory_initialized=MEM32(0x49b288);MEM32(0x49b288)|=1;
    uint32_t menu=arena,map=menu+0x294,text=arena+0x2000,list=arena+0x1600;
    const char* names[]={"money_title","money_value","sell_title","inventory_title",
                         "item_cost_title","item_cost_value","for_sale"};
    uint32_t keys[7];MEM32(menu)=0x3dedcc;MEM32(map+4)=0;
    /* Populate the verified native name->control tree. Native text interning,
     * lookup, RTTI casts, formatting, storage and list refresh remain real. */
    for(unsigned i=0;i<7;++i) {
        uint32_t control=arena+0x1000+i*0x100;
        MEM32(control)=i==6?0x3df3e4:0x3dfbcc;
        strcpy((char*)XBOX_PTR(text),names[i]);
        spawner_call(control,0x17d790,1,&text,0);
        keys[i]=MEM32(control+0x74);MEM32(control+0x74)=0;
        MEM32(map+i*16+0x10)=MEM32(map+i*16+0x14)=0x3fffffff;
        MEM32(map+i*16+0x18)=keys[i];MEM32(map+0xa34+i*4)=control;
        if(i) {
            unsigned node=0;
            for(;;) {
                uint32_t link=map+node*16+((int32_t)keys[i]<(int32_t)keys[node]?0x10:0x14);
                if(MEM32(link)==0x3fffffff){MEM32(link)=i;break;}
                node=MEM32(link);
            }
        }
        if(spawner_call(menu,0x162660,1,&text,0)!=control)failed=1;
    }
    MEM32(list+0x84)=arena+0x1800;MEM16(list+0x7c)=5;
    raven_stash_menu_set(menu,1);
    strcpy((char*)XBOX_PTR(text),"for_sale");
    if(!xml1_stash_menu_labels(menu,text,1)||!xml1_stash_menu_eligibility(menu)||
       MEM16(list+0x7c)!=0xffff)failed=1;
    uint32_t inventory=spawner_call(0,0x7f850,0,NULL,0);
    char capacity[32];snprintf(capacity,sizeof capacity,"%u / 60",raven_stash_total(inventory));
    const char* expected[]={"Stash Capacity",capacity,"Stored Items","Carried Items","",""};
    uint32_t pool=spawner_call(0,0x199cd0,0,NULL,0);
    for(unsigned i=0;i<6;++i) {
        uint32_t handle=MEM32(arena+0x1000+i*0x100+0x74);
        const char* actual=handle?(const char*)XBOX_PTR(pool+0x1008+MEM32(pool+4+(handle&0xffffff)*4)):"";
        if(strcmp(actual,expected[i]))failed=1;
    }
    /* Join the previously separate row and controls checks through the real
     * singleton getter. Back up guest inventory/list storage and preserve any
     * preexisting stash owner/snapshots; this fixture owns only its named item. */
    unsigned char* inventory_backup=malloc(0x1a70);
    if(!inventory_backup)extension_failure("stash populated fixture allocation");
    memcpy(inventory_backup,(const void*)XBOX_PTR(inventory),0x1a70);
    unsigned char list_row[0x50],carried_row[8];
    memcpy(list_row,(const void*)XBOX_PTR(0x573b48),sizeof list_row);
    memcpy(carried_row,(const void*)XBOX_PTR(0x575da0),sizeof carried_row);
    uint32_t carried_count=MEM32(0x5765c0),item_name=arena+0x2100;
    const char* fixture_name="__stash_menu_controls_fixture";
    unsigned old_quantity=0;uint64_t revision=0;
    int had_owner=raven_stash_read(inventory,fixture_name,&old_quantity,&revision);
    if(!had_owner)raven_stash_reset(inventory);
    unsigned original_total=raven_stash_total(inventory);
    memset((void*)XBOX_PTR(inventory),0,0x1a70);
    // The singleton initialization flag is adjacent at inventory+1A68.
    // Keep this private fixture initialized when reentering the real getter.
    MEM32(0x49b288)|=1;
    MEM32(inventory)=0x3ce064;MEM8(inventory+0x1688)=1;
    strcpy((char*)XBOX_PTR(item_name),fixture_name);
    spawner_call(inventory+8,0x13eb0,1,&item_name,0);
    MEM32(inventory+0x10)=1;MEM8(inventory+0x20)=2;MEM8(inventory+0x21)=10;
    unsigned quantity=0;
    if(!raven_stash_read(inventory,fixture_name,&quantity,&revision)||
       !raven_stash_commit(inventory,revision,fixture_name,3))failed=1;
    MEM8(arena+0x1800)=0;MEM32(arena+0x1864)=1;MEM16(list+0x7c)=0;
    MEM32(0x573b48+0x40)=0;MEM8(0x573b48+0x4d)=0xa4;
    MEM32(0x575da0)=0;MEM32(0x575da4)=0;MEM32(0x5765c0)=1;
    for(unsigned pass=0;pass<3;++pass) {
        if(pass==1&&xml1_stash_menu_action(menu,0,1)!=1)failed=1;
        if(pass==2&&xml1_stash_menu_action(menu,0,0)!=1)failed=1;
        unsigned stored=pass==1?2:3,carried=pass==1?3:2;
        if(!xml1_stash_menu_labels(menu,text,pass!=2)||
           MEM8(inventory+0x20)!=carried)failed=1;
        snprintf(capacity,sizeof capacity,"%u / 60",original_total-old_quantity+stored);
        char stored_text[8];snprintf(stored_text,sizeof stored_text,"%u",stored);
        const char* populated[]={"Stash Capacity",capacity,"Stored Items","Carried Items","Stored",stored_text};
        for(unsigned i=0;i<6;++i) {
            uint32_t handle=MEM32(arena+0x1000+i*0x100+0x74);
            const char* actual=handle?(const char*)XBOX_PTR(pool+0x1008+MEM32(pool+4+(handle&0xffffff)*4)):"";
            if(strcmp(actual,populated[i])){fprintf(stderr,"[STASH POPULATED] pass=%u control=%u actual=%s expected=%s\n",pass,i,actual,populated[i]);failed=1;}
        }
    }
    for(unsigned invalid=0;invalid<2;++invalid) {
        MEM16(list+0x7c)=invalid?0xffff:9;
        if(!xml1_stash_menu_labels(menu,text,1))failed=1;
        for(unsigned i=4;i<6;++i) {
            uint32_t handle=MEM32(arena+0x1000+i*0x100+0x74);
            const char* actual=handle?(const char*)XBOX_PTR(pool+0x1008+MEM32(pool+4+(handle&0xffffff)*4)):"";
            if(*actual)failed=1;
        }
    }
    if(!raven_stash_read(inventory,fixture_name,&quantity,&revision)||
       !raven_stash_commit(inventory,revision,fixture_name,old_quantity))failed=1;
    if(!had_owner)raven_stash_forget(inventory);
    spawner_call(inventory+8,0x13d370,0,NULL,0);
    memcpy((void*)XBOX_PTR(inventory),inventory_backup,0x1a70);free(inventory_backup);
    memcpy((void*)XBOX_PTR(0x573b48),list_row,sizeof list_row);
    memcpy((void*)XBOX_PTR(0x575da0),carried_row,sizeof carried_row);MEM32(0x5765c0)=carried_count;
    /* Missing optional controls are harmless; ordinary shops bypass labels. */
    stash_menu_text(menu,"absent_stash_control","unused");
    raven_stash_menu_set(menu,0);
    if(xml1_stash_menu_labels(menu,text,1)||xml1_stash_menu_eligibility(menu))failed=1;
    if(g_esp!=sp||g_fp_top!=fp)failed=1;
    MEM32(0x58f67c)=previous_pool;xbox_HeapFree(private_pool);xbox_HeapFree(arena);
    MEM32(0x49b288)=inventory_initialized;
    fprintf(stderr,"[STASH CONTROLS] %s native name map/RTTI/formatting/text storage, populated labels, withdraw/deposit refresh, invalid selection, empty-list refresh, missing control and ordinary-shop bypass; rendering untested\n",failed?"FAIL":"PASS");
    return failed;
}
static int stash_menu_property_fixture(void) {
    uint32_t arena=xbox_HeapAlloc(0x1200,16);
    if(!arena)extension_failure("stash menu property fixture allocation");
    memset((void*)XBOX_PTR(arena),0,0x1200);
    uint32_t menu=arena,node=arena+0xf00,attr=node+0x60,text=node+0x100;
    MEM32(menu)=0x3dedcc;MEM32(node+0x54)=attr;
    strcpy((char*)XBOX_PTR(text),"stash");
    uint32_t args[]={text,2};spawner_call(attr+4,0x125da0,2,args,0);
    MEM32(attr+0x14)=text+16;MEM32(attr+0x1c)=1;MEM32(attr+0x28)=node+0x2c;
    const char* values[]={"true","TrUe","false","1","true_extra",""};int failed=0;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    for(unsigned i=0;i<6;++i) {
        strcpy((char*)XBOX_PTR(text+16),values[i]);
        xml1_stash_menu_parse(menu,node);
        if(raven_stash_menu_enabled(menu)!=(i<2))failed=1;
    }
    strcpy((char*)XBOX_PTR(text+16),"true");xml1_stash_menu_parse(menu,node);
    MEM32(node+0x54)=node+0x2c;xml1_stash_menu_parse(menu,node);
    if(raven_stash_menu_enabled(menu))failed=1;
    MEM32(node+0x54)=attr;MEM32(menu)=0x3de4ac;
    xml1_stash_menu_parse(menu,node);if(raven_stash_menu_enabled(menu))failed=1;
    MEM32(menu)=0x3dedcc;xml1_stash_menu_parse(menu,node);
    xml1_stash_menu_parse(menu,0);if(raven_stash_menu_enabled(menu))failed=1;
    uint32_t after[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    if(memcmp(saved,after,sizeof saved))failed=1;
    xml1_stash_menu_parse(menu,node);
    if(!raven_stash_menu_enabled(menu))failed=1;
    spawner_call(menu,0x172720,0,NULL,0);
    if(raven_stash_menu_enabled(menu)||MEM32(menu)!=0x3de4ac)failed=1;
    spawner_call(attr+4,0x125890,0,NULL,0);
    raven_stash_menu_set(menu,0);xbox_HeapFree(arena);
    if(stash_menu_rows_fixture())failed=1;
    if(stash_menu_controls_fixture())failed=1;
    fprintf(stderr,"[STASH MENU PROPERTY] %s native attribute/symbol lookup, authored true flag, missing/false reset, class isolation, native destructor retirement and registers; rendering untested\n",failed?"FAIL":"PASS");
    return failed;
}
