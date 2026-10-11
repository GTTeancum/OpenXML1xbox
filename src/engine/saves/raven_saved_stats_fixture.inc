/* Bounded adapter-contract fixture. Native dispatch, inventory decode and
 * cleanup execute; character data and UI terminals are fixture substitutes. */
#include "game/xml1/character_limits.h"
static uint32_t saved_stats_fixture_code,saved_stats_fixture_stream;
static unsigned saved_stats_fixture_calls,saved_stats_fixture_failed;
static uint32_t saved_stats_release_owner,saved_stats_release_buffer,saved_stats_heap;
static unsigned saved_stats_releases;
static unsigned saved_stats_cleanup_calls,saved_stats_startup_calls,saved_stats_startup_case;
static uint32_t saved_stats_popup;
static unsigned saved_stats_prepare_calls;
static uint32_t saved_stats_fixture_allocate(unsigned bytes) {return xbox_HeapAlloc(bytes,16);}
static void saved_stats_fixture_prepare(void) {
    if(g_ecx!=MEM32(0x48d59c)||saved_stats_prepare_calls++>=2)
        saved_stats_fixture_failed=1;
    g_esp+=4;
}
static void saved_stats_fixture_close(void) {
    if(g_ecx!=saved_stats_popup||MEM32(saved_stats_release_owner+0xd4)||
       MEM32(saved_stats_release_owner+0xe0)||saved_stats_cleanup_calls++)
        saved_stats_fixture_failed=1;
    g_esp+=4;
}
static void saved_stats_fixture_startup(void) {
    if(g_ecx!=0x5016f0||MEM32(g_esp+4)!=0x3d2df8||
       saved_stats_cleanup_calls!=1||saved_stats_releases||
       (MEM8(saved_stats_release_owner+0xde)&2)||saved_stats_startup_calls++)
        saved_stats_fixture_failed=1;
    if(saved_stats_startup_case==2)xml1_saved_stats_after_reset();
    g_eax=1;g_esp+=8;
}
static void saved_stats_fixture_category(void) {
    if(g_ecx!=0x5024d0||MEM32(g_esp+4)!=15)saved_stats_fixture_failed=1;
    g_eax=15;g_esp+=8;
}
static void saved_stats_fixture_heap(void) {
    if(g_ecx!=0x5024d4)saved_stats_fixture_failed=1;
    g_eax=saved_stats_heap;g_esp+=4;
}
static void saved_stats_fixture_release(void) {
    uint32_t buffer=MEM32(g_esp+4);
    if(g_ecx!=saved_stats_heap||buffer!=saved_stats_release_buffer||
       MEM32(saved_stats_release_owner+0xe0)||saved_stats_releases++)
        saved_stats_fixture_failed=1;
    /* Reentry must observe the detached request, not release a second time. */
    xml1_saved_stats_cancel(saved_stats_release_owner);
    xbox_HeapFree(buffer);
    g_eax=0x123;g_ecx=0x456;g_edx=0x789;g_esp+=8;
}
static void saved_stats_fixture_characters(void) {
    uint32_t stream=MEM32(g_esp+4);
    if(stream!=saved_stats_fixture_stream||saved_stats_fixture_calls||
       MEM32(stream+0x2fc00)!=stream+1478) saved_stats_fixture_failed=1;
    ++saved_stats_fixture_calls;
    MEM32(stream+0x2fc00)+=73; /* A deliberately variable-size character section. */
    g_eax=0x123;g_ecx=0x456;g_edx=0x789;g_esp+=8;
}
static void saved_stats_fixture_inventory(void) {
    uint32_t stream=MEM32(g_esp+4);
    if(stream!=saved_stats_fixture_stream||saved_stats_fixture_calls!=1||
       MEM32(stream+0x2fc00)!=stream+1478+73) saved_stats_fixture_failed=1;
    ++saved_stats_fixture_calls;
    MEM32(stream+0x2fc00)+=91;
    g_eax=0xabc;g_ecx=0xdef;g_edx=0xaaa;g_esp+=8;
}
static void saved_stats_fixture_marker(uint32_t stream,unsigned offset,const char* name) {
    unsigned char* p=(unsigned char*)XBOX_PTR(stream+offset);
    memset(p,'*',52);p[0]=p[51]='\n';memcpy(p+1,name,strlen(name)+1);
}
static int saved_stats_fixture(uint32_t pool) {
    const uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx;
    const int fp=g_fp_top;
    const uint32_t character_owner=MEM32(0x48d59c),inventory_flag=MEM32(0x49b288);
    const uint32_t inventory_table=MEM32(0x499820);
    const uint32_t table=pool+0x100,inventory_methods=pool+0x200;
    uint32_t stream=xbox_HeapAlloc(0x2fc80,16);
    if(!stream)extension_failure("saved-stats fixture allocation");
    memset((void*)XBOX_PTR(stream),0xa5,0x2fc80);
    memset((void*)XBOX_PTR(pool),0,0x400);
    saved_stats_fixture_stream=stream;saved_stats_fixture_code=pool+0x300;
    saved_stats_fixture_calls=saved_stats_fixture_failed=0;
    MEM32(pool)=table;MEM32(table+0x9c)=saved_stats_fixture_code;
    MEM32(inventory_methods+4)=saved_stats_fixture_code+4;
    MEM32(0x48d59c)=pool;MEM32(0x499820)=inventory_methods;
    MEM32(0x49b288)=inventory_flag|1;
    MEM32(stream+0x2fc00)=stream;
    int failed=xml1_saved_stats_read(stream)!=0||saved_stats_fixture_calls||
        MEM32(stream+0x2fc00)!=stream;
    saved_stats_fixture_marker(stream,0,"[SAVEGAMEBEGIN: fixture]");
    saved_stats_fixture_marker(stream,1112,"[DANGERROOM: COURSES]");
    saved_stats_fixture_marker(stream,1364,"[DANGERROOM: GRADES]");
    saved_stats_fixture_marker(stream,1424,"[DANGERROOM: CREDITS]");
    g_eax=0x13579;g_ecx=0x24680;g_edx=0xabcde;
    if(!xml1_saved_stats_read(stream)||saved_stats_fixture_calls!=2||saved_stats_fixture_failed||
       MEM32(stream+0x2fc00)!=stream+1478+73+91||g_esp!=sp||g_fp_top!=fp||
       g_eax!=0x13579||g_ecx!=0x24680||g_edx!=0xabcde)failed=1;
    /* The adapter borrows the stream and stops after inventory. Neither the
     * skipped story bytes nor the following sections are rewritten. */
    if(MEM8(stream+60)!=0xa5||MEM8(stream+2000)!=0xa5)failed=1;
    if(xml1_saved_stats_read(stream)||saved_stats_fixture_calls!=2)failed=1;
    if(xml1_saved_stats_read(0)||xml1_saved_stats_read(0xffffffff))failed=1;
    {
        /* Keep the variable-length character stand-in but use XML1's actual
         * inventory deserializer. Save/restore its static owner completely. */
        unsigned char inventory[0x1920],expected[649];
        memcpy(inventory,(void*)XBOX_PTR(0x499820),sizeof(inventory));
        for(unsigned i=0;i<160;++i) {
            expected[i*2]=(unsigned char)(i+1);
            expected[i*2+1]=(unsigned char)(i&1);
            expected[320+i*2]=(unsigned char)(255-i);
            expected[321+i*2]=(unsigned char)((i+1)&1);
            MEM8(0x499820+0x24+i*0x24)=0xa5;
        }
        expected[640]=1;
        const uint32_t currency=123456,stored_currency=654321;
        memcpy(expected+641,&currency,4);memcpy(expected+645,&stored_currency,4);
        memcpy((void*)XBOX_PTR(stream+1478+73),expected,sizeof(expected));
        MEM32(inventory_methods+4)=0x0007e6e0;
        MEM32(stream+0x2fc00)=stream;saved_stats_fixture_calls=0;
        if(!xml1_saved_stats_read(stream)||saved_stats_fixture_calls!=1||
           saved_stats_fixture_failed||MEM32(stream+0x2fc00)!=stream+1478+73+649||
           memcmp((void*)XBOX_PTR(0x499820+0x1698),expected,320)||
           memcmp((void*)XBOX_PTR(0x499820+0x17d8),expected+320,320)||
           MEM8(0x499820+0x1918)!=1||MEM32(0x499820+0x1690)!=currency||
           MEM32(0x499820+0x191c)!=stored_currency||g_esp!=sp||g_fp_top!=fp)failed=1;
        for(unsigned i=0;i<160;++i)
            if(MEM8(0x499820+0x20+i*0x24)!=expected[i*2]||
               MEM8(0x499820+0x24+i*0x24)!=(0xa5|((i&1)<<4)))failed=1;
        memcpy((void*)XBOX_PTR(0x499820),inventory,sizeof(inventory));
        MEM32(inventory_methods+4)=saved_stats_fixture_code+4;
    }
    /* Exercise ownership separately from the substituted deserializers. This
     * first buffer remains borrowed; separate buffers below exercise123550. */
    uint32_t owner=pool+0x400,other=pool+0xc00;
    memset((void*)XBOX_PTR(owner),0,0x1000);
    MEM32(owner+0xd4)=4;
    if(xml1_saved_stats_arm(owner))failed=1; /* Never hijack save mode. */
    MEM32(owner+0xd4)=3;MEM32(owner+0xe0)=stream;
    if(xml1_saved_stats_arm(owner))failed=1; /* Reject an existing buffer. */
    MEM32(owner+0xe0)=0;MEM32(other+0xd4)=3;
    if(!xml1_saved_stats_arm(owner)||xml1_saved_stats_arm(other))failed=1;
    MEM32(owner+0xe0)=stream;MEM32(other+0xe0)=0x123456;
    if(xml1_saved_stats_detach(other)||MEM32(other+0xe0)!=0x123456||
       MEM32(owner+0xe0)!=stream)failed=1;
    if(xml1_saved_stats_detach(owner)!=stream||MEM32(owner+0xe0)||
       xml1_saved_stats_detach(owner))failed=1; /* Exactly one transfer. */
    if(!xml1_saved_stats_arm(owner))failed=1;
    xml1_saved_stats_cancel(owner); /* Before a read / after native read failure. */
    if(!xml1_saved_stats_arm(owner))failed=1;
    xml1_saved_stats_cancel(owner);
    if(xml1_saved_stats_arm(0)||xml1_saved_stats_arm(0xffffffff))failed=1;
    {
        /* Run the real manager/header/snapshot reader on a valid empty
         * definition set. Preparation callbacks are substituted; all48 native
         * snapshot records and the following inventory bytes are decoded. */
        unsigned char inventory[0x1920];
        memcpy(inventory,(void*)XBOX_PTR(0x499820),sizeof(inventory));
        uint32_t manager=xbox_HeapAlloc(XML1_MANAGER_BYTES,16);
        if(!manager)extension_failure("saved-stats native manager");
        if(!xml1_character_talent_map_fixture_allocator(saved_stats_fixture_allocate))
            extension_failure("saved-stats fixture found active maps");
        memset((void*)XBOX_PTR(manager),0,XML1_MANAGER_BYTES);
        MEM32(manager)=table;MEM32(0x48d59c)=manager;
        MEM32(manager+0x8534+XML1_MANAGER_DELTA)=1;
        MEM32(table+0x9c)=0x56f10;
        MEM32(table+0xb0)=MEM32(table+0x30)=saved_stats_fixture_code+28;
        MEM32(inventory_methods+4)=0x7e6e0;
        uint32_t cursor=stream+1478;
        memset((void*)XBOX_PTR(cursor),0,4096);
        memcpy((void*)XBOX_PTR(cursor),"XML1CHR",8);
        MEM16(cursor+8)=1;MEM16(cursor+10)=48;MEM16(cursor+12)=XML1_SNAPSHOT_COUNT;
        cursor+=48;
        saved_stats_fixture_marker(stream,cursor-stream,"[CHARACTERSUNLOCKED]");cursor+=52+260;
        saved_stats_fixture_marker(stream,cursor-stream,"[CHARACTERSRESTORE]");cursor+=52;
        MEM8(cursor++)=1;
        for(unsigned i=0;i<XML1_SNAPSHOT_COUNT;++i) {
            uint32_t state=manager+XML1_MANAGER_OFFSET(0xba98)+i*0x1e4;
            g_ecx=state;PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00048EF0u,sub_00048EF0);
            /* Nonzero snapshot state proves the reader copies actual records. */
            MEM32(cursor)=1000+i;cursor+=46; /* 44 state bytes, two empty counts. */
        }
        MEM32(cursor+641)=43210;cursor+=649;
        MEM32(stream+0x2fc00)=stream;saved_stats_prepare_calls=0;
        if(!xml1_saved_stats_read(stream)||saved_stats_prepare_calls!=2||
           saved_stats_fixture_failed||MEM32(stream+0x2fc00)!=cursor||
           MEM32(0x499820+0x1690)!=43210||g_esp!=sp||g_fp_top!=fp)failed=1;
        for(unsigned i=0;i<XML1_SNAPSHOT_COUNT;++i) {
            uint32_t state=manager+XML1_MANAGER_OFFSET(0xba98)+i*0x1e4;
            if(MEM32(state+4)!=1000+i)failed=1;
            g_ecx=state;PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x00048F90u,sub_00048F90);
        }
        if(!xml1_character_talent_map_fixture_allocator(NULL))failed=1;
        MEM32(0x48d59c)=pool;MEM32(table+0x9c)=saved_stats_fixture_code;
        MEM32(inventory_methods+4)=saved_stats_fixture_code+4;
        memcpy((void*)XBOX_PTR(0x499820),inventory,sizeof(inventory));
        xbox_HeapFree(manager);
    }
    {
        /* Native singleton and mode setter; only constructor initialization is
         * bypassed on the private static fixture. No picker UI is ticked. */
        unsigned char save_owner[0x77c];
        memcpy(save_owner,(void*)XBOX_PTR(0x4c9288),sizeof(save_owner));
        memset((void*)XBOX_PTR(0x4c9288),0,sizeof(save_owner));
        MEM32(0x4c9a00)=1;MEM32(0x4c9288)=0x3d2d9c;
        MEM32(0x4c9288+0xd4)=4;
        if(xml1_saved_stats_begin()||MEM32(0x4c9288+0xd4)!=4)failed=1;
        MEM32(0x4c9288+0xd4)=0;MEM32(0x4c9288+0xe0)=0x123456;
        if(xml1_saved_stats_begin()||MEM32(0x4c9288+0xe0)!=0x123456)failed=1;
        MEM32(0x4c9288+0xe0)=0;
        g_eax=0x13579;g_ecx=0x24680;g_edx=0xabcde;
        if(!xml1_saved_stats_begin()||MEM32(0x4c9288+0xd4)!=3||
           MEM32(0x4c9288+0xd8)||MEM8(0x4c9288+0xdd)!=0xff||
           g_esp!=sp||g_eax!=0x13579||g_ecx!=0x24680||g_edx!=0xabcde||
           xml1_saved_stats_begin())failed=1;
        xml1_saved_stats_cancel(0x4c9288);
        MEM32(0x4c9288+0xd4)=0;
        PUSH32(g_esp,0);PUSH32(g_esp,0);xml1_saved_stats_script();
        if(g_esp!=sp-4||g_eax||MEM32(0x4c9288+0xd4)!=3)failed=1;
        g_esp+=4;xml1_saved_stats_cancel(0x4c9288);
        memcpy((void*)XBOX_PTR(0x4c9288),save_owner,sizeof(save_owner));
    }
    {
        /* Execute native123550, its singleton, category lookup/tree and heap
         * dispatch. Only the terminal fixture allocator is substituted. */
        unsigned char memory_manager[0x3ac];
        memcpy(memory_manager,(void*)XBOX_PTR(0x5024d0),sizeof(memory_manager));
        memset((void*)XBOX_PTR(0x5024d0),0,sizeof(memory_manager));
        MEM32(0x502878)=1;
        uint32_t methods=pool+0x1400,heap_methods=pool+0x1500;
        saved_stats_heap=pool+0x1600;
        memset((void*)XBOX_PTR(methods),0,0x204);
        MEM32(0x5024d0)=methods;MEM32(methods+0x28)=saved_stats_fixture_code+8;
        MEM32(0x5024d4)=methods;MEM32(methods+4)=saved_stats_fixture_code+12;
        MEM32(0x5024d0+0x184)=15; /* Tree root0 category15 -> heap index0. */
        MEM32(saved_stats_heap)=heap_methods;
        MEM32(heap_methods+0xfc)=saved_stats_fixture_code+16;
        saved_stats_release_owner=owner;saved_stats_releases=0;
        saved_stats_release_buffer=xbox_HeapAlloc(0x2fc78,16);
        if(!saved_stats_release_buffer)extension_failure("saved-stats disposal allocation");
        if(!xml1_saved_stats_arm(owner))failed=1;
        MEM32(owner+0xe0)=saved_stats_release_buffer;
        g_eax=0x13579;g_ecx=0x24680;g_edx=0xabcde;
        xml1_saved_stats_cancel(owner);
        if(saved_stats_releases!=1||saved_stats_fixture_failed||g_esp!=sp||
           g_fp_top!=fp||g_eax!=0x13579||g_ecx!=0x24680||g_edx!=0xabcde)failed=1;
        xml1_saved_stats_cancel(owner);
        if(saved_stats_releases!=1)failed=1;
        saved_stats_releases=0;
        saved_stats_release_buffer=xbox_HeapAlloc(0x2fc78,16);
        if(!saved_stats_release_buffer)extension_failure("saved-stats replacement allocation");
        if(!xml1_saved_stats_arm(owner))failed=1;
        MEM32(owner+0xe0)=saved_stats_release_buffer;
        g_ecx=owner;PUSH32(g_esp,4);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000A5230u,sub_000A5230);
        if(saved_stats_releases!=1||saved_stats_fixture_failed||g_esp!=sp||
           g_fp_top!=fp||MEM32(owner+0xd4)!=4||MEM32(owner+0xe0)||
           MEM32(owner+0xd8)||MEM8(owner+0xdd)!=0xff)failed=1;
        /* With the request gone, the same native setter must not dispose an
         * unrelated save operation's allocation or alter native return ABI. */
        MEM32(owner+0xe0)=0x123456;
        g_ecx=owner;PUSH32(g_esp,3);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x000A5230u,sub_000A5230);
        if(saved_stats_releases!=1||g_esp!=sp||MEM32(owner+0xd4)!=3||
           MEM32(owner+0xe0)!=0x123456||(g_eax&0xff)!=1)failed=1;
        MEM32(owner+0xe0)=0;
        {
            uint32_t popup_saved=MEM32(0x577670),console_flag=MEM32(0x501d5c);
            uint32_t console_table=MEM32(0x5016f0);
            uint32_t manager=xbox_HeapAlloc(XML1_MANAGER_BYTES,16);
            if(!manager)extension_failure("saved-stats fixture manager");
            memset((void*)XBOX_PTR(manager),0,XML1_MANAGER_BYTES);
            MEM32(manager)=table;MEM32(0x48d59c)=manager;
            saved_stats_popup=pool+0x1700;
            MEM32(saved_stats_popup)=pool+0x1800;
            MEM32(pool+0x1854)=saved_stats_fixture_code+20;
            MEM32(0x577670)=saved_stats_popup;
            MEM32(0x501d5c)=console_flag|1;
            MEM32(0x5016f0)=pool+0x1900;
            MEM32(pool+0x1914)=saved_stats_fixture_code+24;
            for(unsigned scenario=0;scenario<3;++scenario) {
                saved_stats_startup_case=scenario;
                saved_stats_cleanup_calls=saved_stats_startup_calls=saved_stats_releases=0;
                saved_stats_fixture_calls=0;
                saved_stats_release_buffer=xbox_HeapAlloc(0x2fc80,16);
                if(!saved_stats_release_buffer)extension_failure("saved-stats completion buffer");
                memcpy((void*)XBOX_PTR(saved_stats_release_buffer),(void*)XBOX_PTR(stream),0x2fc80);
                saved_stats_fixture_stream=saved_stats_release_buffer;
                MEM32(saved_stats_release_buffer+0x2fc00)=saved_stats_release_buffer;
                if(!scenario)MEM8(saved_stats_release_buffer)=0; /* Rejected prefix. */
                MEM8(manager+XML1_MANAGER_OFFSET(0xdac4))=1;
                MEM32(owner+0xd4)=3;MEM32(owner+0xe0)=0;
                MEM8(owner+0xde)=0x12;
                if(!xml1_saved_stats_arm(owner))failed=1;
                MEM32(owner+0xe0)=saved_stats_release_buffer;
                /* Native A5420 entry, including its generated import hook. */
                g_ecx=owner;PUSH32(g_esp,0);
                RECOMP_ABI_CALL(0x000A5420u,sub_000A5420);
                if(g_esp!=sp||g_fp_top!=fp||saved_stats_fixture_failed||
                   saved_stats_cleanup_calls!=1||saved_stats_startup_calls!=(scenario!=0)||
                   saved_stats_releases!=1||MEM32(owner+0xe0)||MEM32(owner+0xd4)||
                   (MEM8(owner+0xde)&0x12)||saved_stats_fixture_calls!=(scenario==2?2:0)||
                   MEM8(manager+XML1_MANAGER_OFFSET(0xdac4))!=(scenario==2?0:1))failed=1;
                xml1_saved_stats_after_reset(); /* No latent buffer after completion. */
                if(saved_stats_releases!=1||xml1_saved_stats_complete(owner))failed=1;
            }
            MEM32(0x577670)=popup_saved;MEM32(0x501d5c)=console_flag;
            MEM32(0x5016f0)=console_table;MEM32(0x48d59c)=pool;
            xbox_HeapFree(manager);saved_stats_fixture_stream=stream;
        }
        memcpy((void*)XBOX_PTR(0x5024d0),memory_manager,sizeof(memory_manager));
        saved_stats_release_buffer=saved_stats_release_owner=saved_stats_heap=0;
    }
    MEM32(0x48d59c)=character_owner;MEM32(0x499820)=inventory_table;
    MEM32(0x49b288)=inventory_flag;
    saved_stats_fixture_code=saved_stats_fixture_stream=0;
    xbox_HeapFree(stream);
    g_eax=ax;g_ecx=cx;g_edx=dx;
    puts(failed?"FAIL saved-stats adapter contract":
        "PASS saved-stats adapter: native header/48 empty snapshots/inventory, entry, completion, rejection, ownership and ABI; preparation/allocator/UI terminals substituted, populated campaign and mission not tested");
    return failed;
}
