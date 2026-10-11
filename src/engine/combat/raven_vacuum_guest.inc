/* CPUVacuum153280: this layer owns query/physics integration. The attached
 * powerup layer supplies owner-generation validation and originating-node
 * contact dispatch. No query result pointer survives a nested game call.
 * Guest registers are scratch, as for the native calls made by this layer. */
static int vacuum_entities_live(uint32_t holder,uint32_t source,uint32_t holder_handle,
    uint32_t source_handle,void* context,int (*live)(void*)) {
    return live(context)&&area_resolve(holder_handle)==holder&&
        area_resolve(source_handle)==source;
}
static void vacuum_targets(uint32_t holder,uint32_t source,void* context,
    int (*live)(void*),void (*contact)(void*,uint32_t,uint32_t),const uint32_t* handles,unsigned count) {
    const uint32_t holder_handle=MEM32(holder+0x1C),source_handle=MEM32(source+0x1C);
    float centre[3];
    for(unsigned i=0;i<count;++i) {
        if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))break;
        uint32_t target=area_resolve(handles[i]);
        if(!target||target==holder||!has_type(target,0x485878)||MEM8(target+0x2C3)>1)continue;
        /* The native nonactor branch requires definition+60 bit1, cleared
         * by159810 and not exposed by Vacuum's base parser. Do not enable
         * prop destruction by borrowing Magnetic Grasp's implementation. */
        float now=raven_xml1_guest_game_time();
        if(now-MEMF(target+0x410)<3)continue;
        float position[3],current[3],velocity[3],distance;
        area_center(holder,centre);
        if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))break;
        if(area_resolve(handles[i])!=target)continue;
        area_center(target,position);
        if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))break;
        if(area_resolve(handles[i])!=target)continue;
        for(unsigned j=0;j<3;++j)current[j]=MEMF(target+0x100+4*j);
        float ground=MEMF(target+0x28)+MEMF(target+0x140)-MEMF(target+0x1E4);
        if(!raven_vacuum_motion(centre,position,current,ground,&distance,velocity))continue;
        if(distance<60) {
            /*153230 pushes source then target: event virtual4(target,source).
             * The holder is not either argument merely because it owns the
             * sphere. The callback must revalidate its originating node. */
            contact(context,target,source);continue;
        }
        area_velocity(target,velocity);
        if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))break;
        if(area_resolve(handles[i])!=target)continue;
        /*1535DE/16B3C0 converts velocity to angles;32F60 uses only yaw and
         * calls virtual2C with (0,0,yaw). Normalization doesn't alter yaw. */
        double yaw=(velocity[0]==0&&velocity[1]==0)?0:atan2(velocity[1],velocity[0]);
        if(yaw<0)yaw+=6.2831853071795864769;
        uint32_t sp=g_esp;g_esp-=16;uint32_t frame=g_esp;
        MEMF(frame)=0;MEMF(frame+4)=0;MEMF(frame+8)=(float)yaw;
        AREA_VCALL(target,0x2C,frame);g_esp=sp;
        if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))break;
        if(area_resolve(handles[i])!=target)continue;
        uint32_t style=area_call0(target,0x2E290);
        uint32_t next=style?AREA_CALL(style,0xED6E0,0x4F3390,0):0;
        if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))break;
        if(area_resolve(handles[i])!=target||!next||next==MEM32(target+0x2F4))continue;
        g_esp-=4;MEM32(g_esp)=0;AREA_CALL(target,0x27260,g_esp);g_esp=sp;
        if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))break;
        if(area_resolve(handles[i])!=target)continue;
        /* Stop may replace/unload the style: reacquire the named move. */
        style=area_call0(target,0x2E290);
        next=style?AREA_CALL(style,0xED6E0,0x4F3390,0):0;
        if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))break;
        if(area_resolve(handles[i])!=target||!next)continue;
        AREA_CALL(target,0x3B100,next,1);
        if(vacuum_entities_live(holder,source,holder_handle,source_handle,context,live)&&
           area_resolve(handles[i])==target)MEMF(target+0x388)=0;
    }
}
void xml1_vacuum_update(uint32_t holder,uint32_t source,void* context,
    int (*live)(void*),void (*contact)(void*,uint32_t,uint32_t)) {
    if(!holder||!source||!live||!contact||!live(context))return;
    if(!has_type(holder,0x485878)||!has_type(source,0x485878))return;
    const uint32_t holder_handle=MEM32(holder+0x1C),source_handle=MEM32(source+0x1C);
    float centre[3];area_center(holder,centre);
    if(!vacuum_entities_live(holder,source,holder_handle,source_handle,context,live))return;
    uint32_t handles[512];
    /* XML2 builds the sphere from the holder, but5DD80 filters using source.
     * Keep the established magnetic query's same-actor wrapper unchanged. */
    unsigned count=area_query_from(holder,source,centre,144,1,1,handles);
    vacuum_targets(holder,source,context,live,contact,handles,count);
}
static struct {uint32_t token,target,source;unsigned contacts,rotations;int live,failed;} vacuum_actor_test;
static int vacuum_actor_test_live(void* context){(void)context;return vacuum_actor_test.live;}
static void vacuum_actor_test_contact(void* context,uint32_t target,uint32_t source) {
    (void)context;
    if(target!=vacuum_actor_test.target||source!=vacuum_actor_test.source)vacuum_actor_test.failed=1;
    ++vacuum_actor_test.contacts;vacuum_actor_test.live=0;
}
static void vacuum_actor_test_rotation(void) {
    uint32_t vector=MEM32(g_esp+4);
    if(g_ecx!=vacuum_actor_test.target||MEMF(vector)!=0||MEMF(vector+4)!=0)vacuum_actor_test.failed=1;
    memcpy((void*)XBOX_PTR(g_ecx+0x2C),(void*)XBOX_PTR(vector),12);
    ++vacuum_actor_test.rotations;g_esp+=8;
}
static int vacuum_actor_fixture(void) {
    const uint32_t manager=0x4DB2B8;
    uint8_t* saved=malloc(0x1900);uint32_t base=xbox_HeapAlloc(0x1800,16);
    if(!saved||!base){free(saved);if(base)xbox_HeapFree(base);return 1;}
    memcpy(saved,(void*)XBOX_PTR(manager),0x1900);
    const uint32_t globals[]={0x4E7044,0x485878,0x48588C,0x49954C,0x498E88,0x498E88+0x39C,0x4F3390};
    uint32_t values[7];for(unsigned i=0;i<7;++i)values[i]=MEM32(globals[i]);
    uint32_t sp=g_esp;unsigned fp=g_fp_top;int failed=0;
    memset((void*)XBOX_PTR(base),0,0x1800);
    uint32_t holder=base,source=base+0x600,target=base+0xC00,table=base+0x1200;
    memcpy((void*)XBOX_PTR(table),(void*)XBOX_PTR(0x3C9204),0x300);
    /* Fixture RTTI getter returns the private actor record, whose +18 has
     * actor bit33. The copied physical vtable is not itself CActor RTTI. */
    MEM32(table)=0x2E6B0;
    MEM32(0x4E7044)=1;MEM32(manager)=0x3D4B7C;MEM32(manager+0x185C)=511;MEM32(manager+0x1018)=7;
    MEM32(0x485878)=0;MEM32(0x48588C)|=2;
    MEM32(0x49954C)=1;MEM32(0x498E88)=0x3CCD14;MEMF(0x498E88+0x39C)=25;
    /* Empty style: test native lookup's missing-reaction behavior, not a
     * substitute animation. Rotation is the sole scene/model terminal. */
    MEM32(0x4F3390)=0;
    vacuum_actor_test.token=base+0x1600;vacuum_actor_test.target=target;vacuum_actor_test.source=source;
    vacuum_actor_test.live=1;vacuum_actor_test.contacts=vacuum_actor_test.rotations=0;vacuum_actor_test.failed=0;
    MEM32(table+0x2C)=vacuum_actor_test.token;
    for(unsigned i=0;i<3;++i){uint32_t actor=base+0x600*i;MEM32(actor)=table;MEM32(actor+4)=32;
        MEM32(actor+0x18)=2;MEM32(actor+0x1C)=0x400+i;MEM32(manager+4+4*i)=actor;MEM32(manager+0x105C+4*i)=0x400+i;}
    MEMF(target+0x38)=MEMF(target+0x44)=100;MEMF(target+0x28)=40;
    uint32_t handles[]={0x400,0x402,0x602};
    vacuum_targets(holder,source,NULL,vacuum_actor_test_live,vacuum_actor_test_contact,handles,3);
    if(MEMF(target+0x100)!=-150||MEMF(target+0x104)!=0||MEMF(target+0x108)!=0||
       fabsf(MEMF(target+0x34)-3.14159265f)>.0001f||vacuum_actor_test.rotations!=1||vacuum_actor_test.contacts)failed=1;
    MEMF(target+0x410)=23;
    vacuum_targets(holder,source,NULL,vacuum_actor_test_live,vacuum_actor_test_contact,handles,3);
    if(MEMF(target+0x100)!=-150||vacuum_actor_test.rotations!=1)failed=2;
    MEMF(target+0x410)=0;MEM8(target+0x2C3)=2;
    vacuum_targets(holder,source,NULL,vacuum_actor_test_live,vacuum_actor_test_contact,handles,3);
    if(vacuum_actor_test.rotations!=1)failed=3;
    MEM8(target+0x2C3)=0;MEMF(target+0x38)=MEMF(target+0x44)=20;
    uint32_t close_handles[]={0x402,0x402};
    vacuum_targets(holder,source,NULL,vacuum_actor_test_live,vacuum_actor_test_contact,close_handles,2);
    if(vacuum_actor_test.contacts!=1||MEMF(target+0x100)!=-150)failed=4;
    if(vacuum_actor_test.failed||g_esp!=sp||g_fp_top!=fp)failed=5;
    if(failed)fprintf(stderr,"[VACUUM TARGET] stage=%d velocity=(%g,%g,%g) yaw=%g rotations=%u contacts=%u ABI=%d/%d\n",
        failed,(double)MEMF(target+0x100),(double)MEMF(target+0x104),(double)MEMF(target+0x108),
        (double)MEMF(target+0x34),vacuum_actor_test.rotations,vacuum_actor_test.contacts,g_esp==sp,g_fp_top==fp);
    memset(&vacuum_actor_test,0,sizeof(vacuum_actor_test));
    memcpy((void*)XBOX_PTR(manager),saved,0x1900);for(unsigned i=0;i<7;++i)MEM32(globals[i])=values[i];
    free(saved);xbox_HeapFree(base);
    printf("%s Vacuum target snapshot: native velocity/clock/handle resolution, facing, cooldown, mass, self/stale exclusion, contact and retirement; rotation terminal substituted, missing reaction style\n",failed?"FAIL":"PASS");
    return failed;
}
