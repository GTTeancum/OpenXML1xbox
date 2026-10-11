/* Missing actSilent command: XML2 B8EB0/298F0/299A0/2AAD8.
 * Silent state belongs to one action invocation, not a shared actor flag. */
typedef struct silent_action_scope {uint32_t target,handle;} silent_action_scope;
static __declspec(thread) silent_action_scope silent_action;
static uint32_t silent_callback_block;
static uint32_t silent_fixture_code,silent_fixture_calls,silent_fixture_failed;
static void silent_fixture_action(void) {
    ++silent_fixture_calls;
    if(MEM32(g_esp+4)||!xml1_script_take_silent(g_ecx)||xml1_script_take_silent(g_ecx))silent_fixture_failed=1;
    g_esp+=8;
}
extern uint32_t xbox_HeapAlloc(uint32_t size,uint32_t alignment);
static void silent_callback_initialize(void) {
    MEM32(silent_callback_block)=silent_callback_block+8;
    MEM32(silent_callback_block+4)=0x26D00;
    MEM32(silent_callback_block+12)=silent_callback_block;
}
int xml1_script_action_silent(uint32_t target) {
    return target&&silent_action.target==target&&silent_action.handle==MEM32(target+0x1C);
}
int xml1_script_take_silent(uint32_t target) {
    int silent=xml1_script_action_silent(target);
    /* Capture once at the native action-body entry. Ordinary actions invoked
     * recursively by its scripts must not inherit this action's silence. */
    if(silent)silent_action=(silent_action_scope){0,0};
    return silent;
}
static void silent_callback(void) {
    uint32_t target=MEM32(g_esp+4);
    silent_action_scope previous=silent_action;
    silent_action=(silent_action_scope){target,target?MEM32(target+0x1C):0};
    /* Native callback owns activator handle resolution, pending-action flag
     * clearing and the derived action virtual. Its caller owns target life. */
    sub_00027510();
    silent_action=previous;
}
uint32_t xml1_script_silent_schedule(uint32_t target,uint32_t original) {
    if(original!=0x44B9F8||!xml1_script_action_silent(target))return original;
    if(!silent_callback_block) {
        silent_callback_block=xbox_HeapAlloc(32,16);
        if(!silent_callback_block)extension_failure("silent callback allocation");
        silent_callback_initialize();
    }
    /* 27480 asks virtual+4 for the four-byte payload and copies it into its
     * queue record. The singleton descriptor outlives all queued callbacks;
     * later scheduling cannot change an already-copied activator handle. */
    MEM32(silent_callback_block+16)=MEM32(original+4);
    return silent_callback_block+12;
}
static void silent_action_target(uint32_t target,uint32_t activator) {
    if(!entity_has_type(target,0x48D8FC))return;
    uint32_t sp=g_esp;
    silent_action_scope previous=silent_action;
    silent_action=(silent_action_scope){target,MEM32(target+0x1C)};
    g_ecx=target;PUSH32(g_esp,activator);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(MEM32(MEM32(target)+0xB0),sp);
    silent_action=previous;
    if(g_esp!=sp)extension_failure("silent action ABI");
}
static void act_silent(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    uint32_t selector=argument(args,0,0x14),name=argument(args,1,0x14);
    uint32_t activator=resolve_entity(name);
    if(!entity_has_type(activator,0x48D8FC))activator=0;
    PUSH32(g_esp,selector);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0009FF10u,sub_0009FF10);g_esp+=4;
    if(g_esp!=sp)extension_failure("silent selection ABI");
    /* Snapshot generation-bearing identities before callbacks can replace
     * the native shared selector buffer or destroy later selected entities. */
    uint32_t handles[512];unsigned count=g_eax;
    if(count>512)extension_failure("silent selection capacity");
    for(unsigned i=0;i<count;++i) {
        uint32_t target=MEM32(0x4C25F8+4*i);handles[i]=target?MEM32(target+0x1C):0;
    }
    uint32_t activator_handle=activator?MEM32(activator+0x1C):0;
    for(unsigned i=0;i<count;++i) {
        uint32_t target,current=0;
        g_esp-=4;MEM32(g_esp)=handles[i];g_ecx=g_esp;PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);target=g_eax;g_esp+=4;
        if(activator_handle) {
            g_esp-=4;MEM32(g_esp)=activator_handle;g_ecx=g_esp;PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0006BF80u,sub_0006BF80);current=g_eax;g_esp+=4;
        }
        silent_action_target(target,current);
    }
    g_eax=0;g_esp=sp+4;
}
static int silent_action_fixture(uint32_t pool) {
    uint32_t target=pool+0x5000,record=target+0x100,sp=g_esp;
    uint32_t old_block=silent_callback_block,old_payload=MEM32(0x44B9FC);
    silent_action_scope previous=silent_action;unsigned fp=g_fp_top;int failed=0;
    silent_callback_block=target+0x200;silent_callback_initialize();
    MEM32(target+0x1C)=0x12340001;
    silent_action=(silent_action_scope){target,MEM32(target+0x1C)};
    if(!xml1_script_action_silent(target)||xml1_script_action_silent(target+64))failed=1;
    ++MEM32(target+0x1C);
    if(xml1_script_action_silent(target))failed=2;
    --MEM32(target+0x1C);
    MEM32(0x44B9FC)=0x45670002;
    uint32_t callback=xml1_script_silent_schedule(target,0x44B9F8);
    if(callback!=silent_callback_block+12||xml1_script_silent_schedule(target,0x44BA00)!=0x44BA00)failed=3;
    g_ecx=record;PUSH32(g_esp,callback);PUSH32(g_esp,MEM32(target+0x1C));PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x00027480u,sub_00027480);
    if(MEM32(record)!=0x12340001||MEM32(record+4)!=callback||MEM32(record+8)!=0x45670002)failed=4;
    MEM32(0x44B9FC)=0x77770003;
    xml1_script_silent_schedule(target,0x44B9F8);
    if(MEM32(record+8)!=0x45670002||MEM32(callback+4)!=0x77770003)failed=5;
    if(!xml1_script_take_silent(target)||xml1_script_take_silent(target)||
       xml1_script_silent_schedule(target,0x44B9F8)!=0x44B9F8)failed=6;
    /* Execute the queued adapter through the original callback and native
     * handle resolver; substitute only the final action virtual boundary. */
    uint32_t methods=target+0x300;
    MEM32(target)=methods;MEM32(record+8)=0;MEM8(target+0xC8)=0xA5;
    const uint32_t manager_fields[]={0x4E7044,0x4DB2B8,0x4DB2B8+0x185C,0x4DB2B8+0x1018};
    uint32_t manager_saved[4];
    for(unsigned i=0;i<4;++i)manager_saved[i]=MEM32(manager_fields[i]);
    MEM32(0x4E7044)=1;MEM32(0x4DB2B8)=0x3D4B7C;
    MEM32(0x4DB2B8+0x185C)=511;MEM32(0x4DB2B8+0x1018)&=~1u;
    silent_fixture_code=target+0x500;silent_fixture_calls=silent_fixture_failed=0;
    MEM32(methods+0xCC)=silent_fixture_code;
    g_ecx=callback;PUSH32(g_esp,record+8);PUSH32(g_esp,target);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(silent_callback_block+8,sp);
    for(unsigned i=0;i<4;++i)MEM32(manager_fields[i])=manager_saved[i];
    if(silent_fixture_calls!=1||silent_fixture_failed||MEM8(target+0xC8)!=0x25||xml1_script_action_silent(target))failed=8;
    /* Exercise native queue ownership and reset, not just the record copy.
     * XML1 resets CScheduler on lifecycle paths6F488/80972; reset must drop
     * an added callback exactly as it drops an ordinary delayed action. */
    uint32_t scheduler=pool+0x6000;
    memset((void*)XBOX_PTR(scheduler),0,0x7120);MEM32(scheduler)=0x3D349C;
    g_ecx=scheduler+4;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A9F60u,sub_000A9F60);
    g_ecx=scheduler;PUSH32(g_esp,0x41200000);PUSH32(g_esp,record);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x000AA000u,sub_000AA000);
    if(!MEM32(scheduler+4+0x5110)||!MEM32(scheduler+4+0x7118))failed=9;
    g_ecx=scheduler;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x000A9FB0u,sub_000A9FB0);
    if(MEM32(scheduler+4+0x5110)||MEM32(scheduler+4+0x7118)||silent_fixture_calls!=1)failed=10;
    silent_fixture_code=0;
    if(g_esp!=sp||g_fp_top!=fp)failed=7;
    silent_action=previous;silent_callback_block=old_block;MEM32(0x44B9FC)=old_payload;
    if(failed)fprintf(stderr,"FAIL silent-action scheduling %d\n",failed);
    else puts("PASS silent action: generation identity, one-use capture, ordinary callback preservation, native queued payload copy/delivery/reset and pending-flag cleanup; actual sound playback not tested");
    return failed;
}
