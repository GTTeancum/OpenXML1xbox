/* Absent XML2 B8B20: reset named sound references, then use native entity
 * destruction. Do not globally mute audio or replace killing with damage. */
static void silent_kill_sound_reset(uint32_t reference) {
    const uint32_t sp=g_esp;
    char name[256];
    g_ecx=reference;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0006DE80u,sub_0006DE80);
    /* This XML1 reader returns its just-retired stack buffer, unlike XML2's
     * interned string. Copy before any further guest call overwrites it. */
    unsigned i;
    for(i=0;i<sizeof(name);++i) {
        name[i]=(char)MEM8(g_eax+i);if(!name[i])break;
    }
    if(i==sizeof(name))extension_failure("silent kill sound name bound");
    if(g_esp!=sp)extension_failure("silent kill sound read ABI");
    g_ecx=reference;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0006E220u,sub_0006E220);
    if(g_esp!=sp)extension_failure("silent kill sound release ABI");
    g_esp-=256;uint32_t text=g_esp;
    memcpy((void*)XBOX_PTR(text),name,i+1);
    g_ecx=reference;PUSH32(g_esp,text);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0006E0A0u,sub_0006E0A0);
    if(g_esp!=text)extension_failure("silent kill sound assignment ABI");
    g_esp=sp;
}
static void silent_kill_entity(uint32_t entity) {
    if(!entity_has_type(entity,0x48d8fc))return; /* CEntity */
    if(entity_has_type(entity,0x48338c))silent_kill_sound_reset(entity+0x70);
    if(entity_has_type(entity,0x4c0a60))silent_kill_sound_reset(entity+0x260);
    uint32_t sp=g_esp,target=MEM32(MEM32(entity)+8);
    g_ecx=entity;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(target,sp);
    if(g_esp!=sp)extension_failure("silent kill destruction ABI");
    /* Destruction may invalidate entity immediately; never read it again. */
}
static void silent_kill_selection(uint32_t selection,int32_t count) {
    if(count<=0)return;
    if(count>512)extension_failure("silent kill selection capacity");
    uint32_t handles[512],sp=g_esp;
    for(int32_t i=0;i<count;++i) {
        uint32_t entity=MEM32(selection+(uint32_t)i*4);
        handles[i]=entity?MEM32(entity+0x1c):0;
    }
    /* Destruction scripts can reuse the global selector or retire another
     * selected entity. Keep identities, not borrowed pointers, across calls. */
    for(int32_t i=0;i<count;++i) {
        g_esp-=4;MEM32(g_esp)=handles[i];g_ecx=g_esp;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);
        uint32_t entity=g_eax;g_esp+=4;
        if(g_esp!=sp)extension_failure("silent kill handle ABI");
        silent_kill_entity(entity);
    }
}
static void kill_entity_silent(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    uint32_t selector=argument(args,0,0x14);
    PUSH32(g_esp,selector);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0009FF10u,sub_0009FF10);g_esp+=4;
    if(g_esp!=sp)extension_failure("silent kill selector ABI");
    silent_kill_selection(0x4c25f8,(int32_t)g_eax);
    g_eax=0;g_esp=sp+4;
}

/* Test endpoints replace only name registration and terminal destruction,
 * never the native sound pool, reference lifetime or handle resolver. */
static uint32_t silent_kill_fixture_code,silent_kill_fixture_names,silent_kill_fixture_deaths;
static uint32_t silent_kill_fixture_mutate,silent_kill_fixture_selection;
static void silent_kill_fixture_register(void) {
    ++silent_kill_fixture_names;g_eax=0;g_esp+=8;
}
static void silent_kill_fixture_destroy(void) {
    ++silent_kill_fixture_deaths;
    if(silent_kill_fixture_mutate) {
        MEM32(silent_kill_fixture_selection+4)=0;
        if(silent_kill_fixture_mutate>1)
            MEM32(0x4db2b8+0x1064)=0x602; /* retire/reuse the second entity */
    }
    g_esp+=4;
}
extern void xbox_HeapFree(uint32_t address);
static int silent_kill_fixture(uint32_t base) {
    uint32_t sp=g_esp,sound_pool=xbox_HeapAlloc(0x354dc,16);
    if(!sound_pool)extension_failure("silent kill fixture allocation");
    uint32_t entity=base,other=base+0x400,methods=base+0x800,text=base+0x900;
    uint32_t registration=base+0xb00,selection=base+0xc00;
    const uint32_t globals[]={0x498dac,0x4c2a9c,0x4c2a10,0x48d8fc,0x48338c,0x4c0a60,
        0x4e7044,0x4db2b8,0x4db2b8+0x185c,0x4db2b8+0x1018,
        0x4db2b8+0x1060,0x4db2b8+0x1064,0x4db2b8+8,0x4db2b8+12};
    uint32_t saved[sizeof(globals)/sizeof(globals[0])];
    for(unsigned i=0;i<sizeof(globals)/sizeof(globals[0]);++i)saved[i]=MEM32(globals[i]);
    int fp=g_fp_top,failed=0;
    memset((void*)XBOX_PTR(base),0,0x1000);memset((void*)XBOX_PTR(sound_pool),0,0x354dc);
    g_ecx=sound_pool;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0006DD50u,sub_0006DD50);
    MEM32(0x498dac)=sound_pool;
    silent_kill_fixture_code=base+0xd00;silent_kill_fixture_names=silent_kill_fixture_deaths=0;
    silent_kill_fixture_mutate=0;silent_kill_fixture_selection=selection;
    MEM32(0x4c2a9c)=1;MEM32(0x4c2a10)=registration;
    MEM32(registration+0xc)=silent_kill_fixture_code;
    MEM32(0x48d8fc)=0;MEM32(0x48338c)=1;MEM32(0x4c0a60)=2;
    MEM32(entity)=methods;MEM32(methods)=0x2e6b0;MEM32(methods+8)=silent_kill_fixture_code+4;
    MEM32(entity+0x18)=14;MEM32(entity+0x1c)=0x401;
    const char *names[]={"test/action_sound","test/physical_sound"};
    const uint32_t offsets[]={0x70,0x260};uint32_t original[2];
    for(unsigned i=0;i<2;++i) {
        strcpy((char*)XBOX_PTR(text),names[i]);g_ecx=entity+offsets[i];
        PUSH32(g_esp,text);PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0006E0A0u,sub_0006E0A0);
        original[i]=MEM32(entity+offsets[i]);
    }
    uint32_t live=MEM32(sound_pool+0x348d0);
    silent_kill_entity(0);MEM32(entity+0x18)=0;silent_kill_entity(entity);
    if(silent_kill_fixture_deaths||silent_kill_fixture_names!=2)failed=1;
    MEM32(entity+0x18)=14;silent_kill_entity(entity);
    if(silent_kill_fixture_deaths!=1||silent_kill_fixture_names!=4||MEM32(sound_pool+0x348d0)!=live)failed=2;
    for(unsigned i=0;i<2;++i) {
        uint32_t handle=MEM32(entity+offsets[i]);
        uint32_t record=sound_pool+(handle&MEM32(sound_pool+0x354d4))*0x114;
        if(!handle||handle==original[i]||strcmp((char*)XBOX_PTR(record+8),names[i]))failed=3;
    }
    MEM32(other)=methods;MEM32(other+0x18)=2;MEM32(other+0x1c)=0x402;
    MEM32(0x4e7044)=1;MEM32(0x4db2b8)=0x3d4b7c;MEM32(0x4db2b8+0x185c)=511;
    MEM32(0x4db2b8+0x1018)|=6;MEM32(0x4db2b8+0x1060)=0x401;MEM32(0x4db2b8+0x1064)=0x402;
    MEM32(0x4db2b8+8)=entity;MEM32(0x4db2b8+12)=other;
    MEM32(selection)=entity;MEM32(selection+4)=other;
    silent_kill_fixture_mutate=1;silent_kill_fixture_deaths=0;
    silent_kill_selection(selection,2);
    if(silent_kill_fixture_deaths!=2)failed=4; /* both snapshot identities survive */
    MEM32(selection)=entity;MEM32(selection+4)=other;
    silent_kill_fixture_mutate=2;silent_kill_fixture_deaths=0;
    silent_kill_selection(selection,2);
    if(silent_kill_fixture_deaths!=1||g_esp!=sp||g_fp_top!=fp)failed=4;
    for(unsigned i=0;i<2;++i){g_ecx=entity+offsets[i];PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0006E220u,sub_0006E220);}
    if(MEM32(sound_pool+0x348d0))failed=5;
    silent_kill_fixture_code=silent_kill_fixture_mutate=0;
    for(unsigned i=0;i<sizeof(globals)/sizeof(globals[0]);++i)MEM32(globals[i])=saved[i];
    xbox_HeapFree(sound_pool);
    if(failed)fprintf(stderr,"FAIL silent kill fixture %d\n",failed);
    else puts("PASS silent kill: native sound pool/reset/name preservation, reference balance, RTTI, destruction dispatch, nested selection mutation, generation rejection and ABI; audible playback not tested");
    return failed;
}
