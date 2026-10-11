/* Missing getNearestMonsterSpawner, XML2 B6790. Reuse XML1's spatial
 * query, generation handles, sorting and pending-action test. No new
 * spawner implementation or character-specific lookup table belongs here. */
static uint32_t spawner_callback_block;
static uint32_t spawner_call(uint32_t receiver,uint32_t code,unsigned count,
                             const uint32_t *arguments,int cdecl_call) {
    uint32_t sp=g_esp;
    for(unsigned i=count;i;--i)PUSH32(g_esp,arguments[i-1]);
    g_ecx=receiver;PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(code,sp);
    if(cdecl_call)g_esp+=count*4;
    if(g_esp!=sp)extension_failure("nearest spawner call ABI");
    return g_eax;
}
static void spawner_distance(void) {
    uint32_t sp=g_esp,metric=g_ecx,entity=MEM32(sp+4);
    g_esp-=12;uint32_t temporary=g_esp;
    uint32_t point=spawner_call(entity,MEM32(MEM32(entity)+0x24),1,&temporary,0);
    /* XML2 B93D0, mask3: use entity's native center, rank in the XY plane.
     * Sphere membership remains the native scene query's responsibility. */
    double x=(double)MEMF(point)-MEMF(metric+4);
    double y=(double)MEMF(point+4)-MEMF(metric+8);
    g_fp_top=(g_fp_top-1)&7;g_fp_stack[g_fp_top]=x*x+y*y;
    g_esp=sp+8;
}
static void spawner_initialize(void) {
    if(spawner_callback_block)return;
    spawner_callback_block=xbox_HeapAlloc(8,4);
    if(!spawner_callback_block)extension_failure("nearest spawner comparator allocation");
    MEM32(spawner_callback_block)=spawner_callback_block+4;
}
static uint32_t nearest_spawner(uint32_t source,float radius) {
    if(!source)return 0;
    spawner_initialize();
    if(!spawner_call(0,0xA2AE0,0,NULL,0))return 0;
    uint32_t sp=g_esp,answer=0;g_esp-=32;uint32_t frame=g_esp;
    memset((void*)XBOX_PTR(frame),0,32);
    /* 356AB0 registers this CMonsterSpawnerEntity class descriptor. It is
     * a native class object, not the integer RTTI ID used by type tests. */
    uint32_t arguments[4]={0x49ECAC,frame+4,0,0};
    spawner_call(frame,0xA2A70,2,arguments,0);
    uint32_t query=MEM32(frame);
    if(radius==0) {uint32_t bits=0x4CBEBC20;memcpy(&radius,&bits,4);}
    arguments[0]=source+0x20;memcpy(&arguments[1],&radius,4);
    spawner_call(query,MEM32(MEM32(query)+0x68),4,arguments,0);
    MEM32(frame+8)=spawner_callback_block;
    MEMF(frame+12)=MEMF(source+0x20);MEMF(frame+16)=MEMF(source+0x24);
    arguments[0]=query;arguments[1]=frame+8;
    uint32_t results=spawner_call(0,0xA2B10,2,arguments,1);
    if(results) {
        unsigned count=spawner_call(results,MEM32(MEM32(results)),0,NULL,0);
        for(unsigned i=0;i<count;++i) {
            uint32_t entity=spawner_call(results,MEM32(MEM32(results)+4),1,&i,0);
            if(!entity)continue;
            if(entity_has_type(entity,0x48338C)) {
                uint32_t delay=0;
                if(spawner_call(entity,0x27410,1,&delay,0)&255)continue;
            }
            answer=MEM32(entity+0x1c);break;
        }
        spawner_call(0,0xA2B70,1,&results,1);
    }
    /* Query/list slots are borrowed. Release both before the interpreter
     * allocates a result, and never return a borrowed entity pointer. */
    spawner_call(frame,0xA2AC0,0,NULL,0);g_esp=sp;return answer;
}
static void get_nearest_spawner(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    uint32_t selector=argument(args,0,0x14);
    /* Retail descriptor says "ai", but B67CF calls the numeric float getter.
     * Preserve the descriptor and its native conversion instead of changing
     * the script-visible argument declaration to suit the implementation. */
    float radius=float_argument(args,1);
    return_integer(nearest_spawner(resolve_entity(selector),radius),sp);
}

/* The fixture supplies scene membership only. Native query/list allocation,
 * entity lookup, center virtual, sorting, action filtering and cleanup run. */
static uint32_t spawner_fixture_code,spawner_fixture_mask;
static float spawner_fixture_radius;
static void spawner_fixture_begin(void) {
    if(MEM32(g_esp+4)!=0x49ECAC||MEM32(MEM32(g_esp+8)))
        extension_failure("spawner fixture class/exclusion");
    memset((void*)XBOX_PTR(g_ecx+8),0,64);g_esp+=12;
}
static void spawner_fixture_sphere(void) {
    spawner_fixture_radius=MEMF(g_esp+8);
    if(MEM32(g_esp+12)||MEM32(g_esp+16))extension_failure("spawner fixture sphere flags");
    MEM32(g_ecx+8)=spawner_fixture_mask;g_esp+=20;
}
static int nearest_spawner_fixture(uint32_t base) {
    const uint32_t pool=0x4C2AA8,manager=0x4DB2B8;
    uint8_t *saved_pool=(uint8_t*)malloc(0x3950),*saved_manager=(uint8_t*)malloc(0x1900);
    if(!saved_pool||!saved_manager)extension_failure("spawner fixture backup");
    memcpy(saved_pool,(void*)XBOX_PTR(pool),0x3950);
    memcpy(saved_manager,(void*)XBOX_PTR(manager),0x1900);
    uint32_t old_pool_flag=MEM32(0x4C63F8),old_manager_flag=MEM32(0x4E7044);
    uint32_t old_action_type=MEM32(0x48338C),old_block=spawner_callback_block,sp=g_esp;
    int fp=g_fp_top,failed=0;
    memset((void*)XBOX_PTR(base),0,0x1200);
    MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;
    MEM32(manager+0x185c)=511;MEM32(manager+0x1018)=7;
    MEM32(0x4C63F8)=1;spawner_call(pool,0xA2880,0,NULL,0);
    uint32_t methods=base+0xC00,query_methods=base+0xE00;
    memcpy((void*)XBOX_PTR(methods),(void*)XBOX_PTR(0x3CF23C),0x200);
    memcpy((void*)XBOX_PTR(query_methods),(void*)XBOX_PTR(0x3D29EC),0x80);
    spawner_fixture_code=base+0x1100;
    MEM32(query_methods+4)=spawner_fixture_code;MEM32(query_methods+0x68)=spawner_fixture_code+4;
    MEM32(pool)=query_methods;MEM32(0x48338C)=0;
    /* Native identity getter permits fixture-owned RTTI bits. */
    MEM32(methods)=0x2E6B0;
    for(unsigned i=0;i<3;++i) {
        uint32_t entity=base+i*0x300;
        MEM32(entity)=methods;MEM32(entity+0x18)=2;MEM32(entity+0x1c)=0x400+i;
        MEM32(manager+4+i*4)=entity;
        MEM32(manager+0x105c+i*4)=0x400+i;
        MEMF(entity+0x38)=MEMF(entity+0x44)=(float)(3-i);
        MEMF(entity+0x40)=MEMF(entity+0x4c)=1000.0f*(float)i;
    }
    spawner_callback_block=base+0x1120;MEM32(spawner_callback_block)=spawner_callback_block+4;
    uint32_t source=base+0x900;spawner_fixture_mask=7;
    if(nearest_spawner(source,50)!=0x402||spawner_fixture_radius!=50)failed=1;
    /* The nearest entity has a pending action; skip it via native27410. */
    MEM32(base+0x600+4)=1u<<19;
    if(nearest_spawner(source,0)!=0x401||spawner_fixture_radius!=100000000.0f)failed=2;
    MEM32(base+4)=MEM32(base+0x300+4)=1u<<19;
    if(nearest_spawner(source,5))failed=7;
    MEM32(base+4)=MEM32(base+0x300+4)=MEM32(base+0x600+4)=0;
    spawner_fixture_mask=0;
    if(nearest_spawner(source,5)||nearest_spawner(0,5))failed=3;
    for(unsigned i=0;i<3;++i)
        if(MEM8(pool+0x50+i*0x304)||MEM8(pool+0x1920+i*0x1014))failed=4;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x1920+i*0x1014)=1;
    if(nearest_spawner(source,5)||MEM8(pool+0x50))failed=8;
    for(unsigned i=0;i<3;++i)MEM8(pool+0x1920+i*0x1014)=0;
    spawner_fixture_mask=7;
    if(nearest_spawner(source,5)!=0x402)failed=9;
    /* Exhausted native query pools must not dereference a null slot. */
    for(unsigned i=0;i<3;++i)MEM8(pool+0x50+i*0x304)=1;
    if(nearest_spawner(source,5))failed=5;
    if(g_esp!=sp||g_fp_top!=fp)failed=6;
    spawner_callback_block=old_block;spawner_fixture_code=0;
    memcpy((void*)XBOX_PTR(pool),saved_pool,0x3950);
    memcpy((void*)XBOX_PTR(manager),saved_manager,0x1900);
    free(saved_pool);free(saved_manager);
    MEM32(0x4C63F8)=old_pool_flag;MEM32(0x4E7044)=old_manager_flag;MEM32(0x48338C)=old_action_type;
    if(failed)fprintf(stderr,"FAIL nearest spawner fixture %d\n",failed);
    else puts("PASS nearest spawner: native list/sort/entity center/action filter, XY ranking, empty/null/pool exhaustion, radius and slot/stack/FPU cleanup; scene membership substituted");
    return failed;
}
