/* XML2 recall7C9E0/loadextraction201940, adapted to XML1's asynchronous
 * CMap loader. Only owned data crosses the load; actors are resolved anew. */
typedef struct recall_travel_request {
    enum raven_recall_action kind;
    char destination[64];
    float position[3];
} recall_travel_request;
static recall_travel_request recall_pending;
static void set_recall_active(void) {
    uint32_t sp=g_esp,value=argument(MEM32(sp+4),0,0x14);
    xml1_recall_state state;xml1_campaign_recall_get(&state);
    /* XML2 AD9D0 accepts a string, comparing only case-insensitive true.
     * This flag gates portal requests; direct recallZone travel is separate. */
    state.enabled=value&&!_stricmp((const char*)XBOX_PTR(value),"true");
    if(!xml1_campaign_recall_set(&state))extension_failure("recall enabled state");
    g_eax=0;g_esp=sp+4;
}
static int recall_enabled_script_fixture(void (*command)(void)) {
    uint32_t data=xbox_HeapAlloc(128,16),sp=g_esp;int fp=g_fp_top,failed=0;
    if(!data)extension_failure("recall enabled fixture allocation");
    memset((void*)XBOX_PTR(data),0,128);
    MEM32(data)=data+40;MEM32(data+0x1c)=1;
    MEM32(data+40)=0x3d5980;MEM32(data+44)=data+64;
    xml1_recall_state old;xml1_campaign_recall_get(&old);
    const char* values[]={"true","TRUE","TrUe","false","1",""};
    for(unsigned i=0;i<6;++i) {
        xml1_recall_state state={"act3field",{1,2,3},i>=3,42};
        xml1_campaign_recall_set(&state);strcpy((char*)XBOX_PTR(data+64),values[i]);
        PUSH32(g_esp,data);PUSH32(g_esp,0);command();
        xml1_campaign_recall_get(&state);
        if(g_eax||g_esp!=sp-4||g_fp_top!=fp||state.enabled!=(i<3)||
           state.cooldown!=42||strcmp(state.zone,"act3field")||
           state.position[0]!=1||state.position[1]!=2||state.position[2]!=3)failed=1;
        g_esp=sp;
    }
    xml1_campaign_recall_set(&old);xbox_HeapFree(data);
    if(failed)fputs("FAIL registered setRecallActive\n",stderr);
    else puts("PASS registered setRecallActive: native string getter, true/case/false/numeric/empty, retained zone/position/cooldown and script ABI");
    return failed;
}
/* Test seam at native terminal calls only; production uses the shared ABI
 * adapter. The native interpreter/scene fixtures validate those owners. */
static uint32_t (*recall_native_call)(uint32_t,uint32_t,unsigned,const uint32_t*,int)=spawner_call;
static void recall_native_remove_portals(void) {
    uint32_t sp=g_esp;g_esp-=16;uint32_t text=g_esp;
    memcpy((void*)XBOX_PTR(text),"blinkportal",12);
    /* Reuse XML1's named entity selector and remove operation (A0690).
     * Removal callbacks may rewrite the shared selector or remove another
     * match. Snapshot generation handles before the first such callback. */
    int32_t count=(int32_t)recall_native_call(0,0x9FF10,1,&text,1);
    if(count>512)extension_failure("recall portal selection capacity");
    uint32_t handles[512];
    for(int32_t i=0;i<count;++i) {
        uint32_t entity=MEM32(0x4c25f8+(uint32_t)i*4);
        handles[i]=entity?MEM32(entity+0x1c):0;
    }
    for(int32_t i=0;i<count;++i) {
        MEM32(text+12)=handles[i];
        uint32_t entity=recall_native_call(text+12,0x6BF80,0,NULL,0);
        if(entity) {
            uint32_t args[3]={0,0,0};
            recall_native_call(entity,MEM32(MEM32(entity)+0xb4),3,args,0);
        }
    }
    g_esp=sp;
}
static uint32_t recall_native_create_portal(const float position[3],const float rotation[3]) {
    uint32_t sp=g_esp;g_esp-=40;uint32_t frame=g_esp;
    memcpy((void*)XBOX_PTR(frame),"blinkportal",12);
    memcpy((void*)XBOX_PTR(frame+16),position,12);
    memcpy((void*)XBOX_PTR(frame+28),rotation,12);
    /* XML1 spawn9D100 calls68060(template,name,position,rotation,flags),
     * cdecl, returning a scene-owned entity. Use that factory (including
     * authored class selection, initialization and registration), not a
     * hand-built entity. XML2's portal uses the same template and name.
     * The result is borrowed: retain only its generation-bearing handle. */
    uint32_t args[5]={frame,frame,frame+16,frame+28,0};
    uint32_t entity=recall_native_call(0,0x68060,5,args,1);
    uint32_t handle=entity?MEM32(entity+0x1c):0;
    g_esp=sp;return handle;
}
static void recall_native_portal_sound(void) {
    uint32_t sp=g_esp;g_esp-=32;uint32_t text=g_esp;
    strcpy((char*)XBOX_PTR(text),"zone_shared/special/blink_spawn");
    /* Native XML1 sound9FA00 owns lookup151EF0 v34 and playback v58.
     * XML2 requests a non-positional sound and uses the manager's invalid
     * handle sentinel. Missing authored audio must not become playback0. */
    uint32_t manager=recall_native_call(0,0x151EF0,0,NULL,0);
    uint32_t args[3]={text,0,0};
    uint32_t sound=recall_native_call(manager,MEM32(MEM32(manager)+0x34),3,args,0);
    if(sound!=MEM32(0x3dd050)) {
        manager=recall_native_call(0,0x151EF0,0,NULL,0);
        recall_native_call(manager,MEM32(MEM32(manager)+0x58),1,&sound,0);
    }
    g_esp=sp;
}
static void recall_native_ground_portal(uint32_t handle) {
    if(!handle)return;
    uint32_t sp=g_esp;g_esp-=28;uint32_t frame=g_esp;MEM32(frame)=handle;
    uint32_t entity=recall_native_call(frame,0x6BF80,0,NULL,0);
    if(entity) {
        /* XML2 A3C50's existing XML1 interface is8FFB0 (8F170 v8).
         * Copy the position before callbacks; the queried entity can retire.
         * Re-resolve the generation handle before its native spatial setter. */
        memcpy((void*)XBOX_PTR(frame+4),(void*)XBOX_PTR(entity+0x20),12);
        uint32_t ground=recall_native_call(0,0x8F170,0,NULL,0);
        uint32_t args[4]={frame+4,frame+16,1,1};
        if(ground&&(recall_native_call(ground,MEM32(MEM32(ground)+8),4,args,0)&0xff)) {
            entity=recall_native_call(frame,0x6BF80,0,NULL,0);
            if(entity) {
                uint32_t output=frame+16;
                recall_native_call(entity,MEM32(MEM32(entity)+0x1c),1,&output,0);
            }
        }
    }
    g_esp=sp;
}
void xml1_recall_cancel(void) { memset(&recall_pending,0,sizeof recall_pending); }
static void recall_native_load(const char* destination) {
    uint32_t sp=g_esp;g_esp-=68;uint32_t text=g_esp;
    strcpy((char*)XBOX_PTR(text),destination);MEM8(text+64)=0;
    uint32_t map=recall_native_call(0,0x80C80,0,NULL,0),empty=text+64;
    /* Existing loadZone interface9A9DF: clear requested arrival selector,
     * then request the destination. Native defaults still place the party
     * before the recall-specific post-load placement runs. */
    recall_native_call(map,MEM32(MEM32(map)+0x68),1,&empty,0);
    recall_native_call(map,MEM32(MEM32(map)+0x3c),1,&text,0);g_esp=sp;
}
static void (*recall_load_destination)(const char*)=recall_native_load;
static int recall_request_travel(uint32_t actor) {
    char town[64];
    int found=raven_extraction_town_center((unsigned char)xml1_campaign_current_act(),town,sizeof town);
    if(found<=0)return 0;
    xml1_recall_state state;xml1_campaign_recall_get(&state);
    const char* current=(const char*)XBOX_PTR(extraction_zone(0));
    recall_travel_request next={0};
    next.kind=raven_recall_plan(current,town,state.zone,actor!=0);
    if(next.kind==RAVEN_RECALL_NONE)return 0;
    if(next.kind==RAVEN_RECALL_RETURN) {
        strcpy(next.destination,state.zone);memcpy(next.position,state.position,sizeof next.position);
        memset(state.zone,0,sizeof state.zone);strcpy(state.zone,"none");
    } else {
        /* The persisted native return-zone field is32 bytes. Reject an
         * unrepresentable name rather than silently returning elsewhere. */
        if(!memchr(current,0,sizeof state.zone)) {
            fprintf(stderr,"[RECALL] Return zone exceeds saved field; travel not requested\n");return 0;
        }
        strcpy(next.destination,town);memset(state.zone,0,sizeof state.zone);
        strcpy(state.zone,current);memcpy(state.position,(void*)XBOX_PTR(actor+0x20),sizeof state.position);
    }
    if(!xml1_campaign_recall_set(&state))extension_failure("recall travel state");
    /* Native destination selection cancels any older pending recall. Publish
     * this packet after that call returns, ahead of asynchronous loading. */
    recall_load_destination(next.destination);recall_pending=next;return 1;
}
static int recall_native_portal_transform(float position[3],float rotation[3]) {
    uint32_t sp=g_esp;g_esp-=24;uint32_t party=g_esp;
    recall_native_call(party,0x322B0,0,NULL,0);
    uint32_t game=recall_native_call(0,0x72CF0,0,NULL,0),args[3]={party,0xffffffffu,0};
    recall_native_call(game,MEM32(MEM32(game)+0xe0),3,args,0);
    unsigned count=MEM32(party+20);int found=0;
    if(count>5)extension_failure("recall portal party capacity");
    for(unsigned i=0;i<count;++i) {
        uint32_t actor=recall_native_call(party+i*4,0x6BF80,0,NULL,0);
        if(!entity_has_type(actor,0x485878)||!(MEMF(actor+0x240)>0)||
           (MEM8(actor+0x334)&1))continue;
        /* XML2 selects the first live non-AI party actor. XML1 owns the
         * health and AI-control fields; do not import XML2 object offsets.
         * Own both vectors before removal/spawn callbacks can retire it.
         * XML2 16B430, distance490E00: forward30 with pitch and yaw in radians. */
        memcpy(position,(void*)XBOX_PTR(actor+0x20),12);
        memcpy(rotation,(void*)XBOX_PTR(actor+0x2c),12);
        float pitch=rotation[1],yaw=rotation[2];
        position[0]+=30.0f*cosf(yaw)*cosf(pitch);
        position[1]+=30.0f*sinf(yaw)*cosf(pitch);
        position[2]-=30.0f*sinf(pitch);
        found=1;break;
    }
    g_esp=sp;return found;
}
static int (*recall_portal_transform)(float*,float*)=recall_native_portal_transform;
static void (*recall_remove_portals)(void)=recall_native_remove_portals;
static uint32_t (*recall_create_portal)(const float*,const float*)=recall_native_create_portal;
static void (*recall_portal_sound)(void)=recall_native_portal_sound;
static void (*recall_ground_portal)(uint32_t)=recall_native_ground_portal;
static int recall_request_portal(void) {
    char town[64]={0};
    raven_extraction_town_center((unsigned char)xml1_campaign_current_act(),town,sizeof town);
    xml1_recall_state state;xml1_campaign_recall_get(&state);
    enum raven_portal_request request=raven_recall_portal_request(
        (const char*)XBOX_PTR(extraction_zone(0)),town,state.enabled,state.cooldown,1);
    if(request==RAVEN_PORTAL_RETURN)return recall_request_travel(0);
    if(request==RAVEN_PORTAL_DENIED)return 0;
    float position[3],rotation[3];
    if(!recall_portal_transform(position,rotation))return 0;
    recall_remove_portals();
    uint32_t handle=recall_create_portal(position,rotation);
    if(handle) {recall_portal_sound();recall_ground_portal(handle);}
    /* XML2 starts300 simulation seconds after attempting creation, even
     * when the template is unavailable. Read state again so callbacks'
     * changes to enabled/return location are not overwritten. */
    xml1_campaign_recall_get(&state);state.cooldown=300;
    if(!xml1_campaign_recall_set(&state))extension_failure("recall portal cooldown");
    return handle!=0;
}
static int (*recall_gameplay_request)(void)=recall_request_portal;
int xml1_missing_gameplay_command(uint32_t token) {
    /* Only on native map miss11C715. The parser owns manager+46C's token
     * and separators/queue. Existing commands always dispatch first. */
    if(!token||strcmp((const char*)XBOX_PTR(token),"spawnblinkportal"))return 0;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    int fp=g_fp_top;recall_gameplay_request();
    if(g_esp!=saved[7]||g_fp_top!=fp)extension_failure("recall gameplay dispatch ABI");
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
    return 1;
}
static void recall_native_place(const float position[3],const float rotation[3]) {
    uint32_t sp=g_esp;g_esp-=48;uint32_t frame=g_esp;
    recall_native_call(frame,0x322B0,0,NULL,0);
    uint32_t game=recall_native_call(0,0x72CF0,0,NULL,0),args[3]={frame,0xffffffffu,0};
    recall_native_call(game,MEM32(MEM32(game)+0xe0),3,args,0);
    unsigned count=MEM32(frame+0x14);
    if(count>5)extension_failure("recall native party capacity");
    static const float offset[4][3]={{40,0,10},{0,40,10},{-40,0,10},{0,-40,10}};
    static const float heading[4]={0,1.57f,3.14f,4.71f};
    /* XML2 supplies four playable-party offsets. Leave any fifth XML1
     * collection entry at its existing native placement rather than reading
     * past that formation table. Its role is not inferred from its index. */
    for(unsigned i=0;i<count&&i<4;++i) {
        uint32_t actor=recall_native_call(frame+i*4,0x6BF80,0,NULL,0);
        if(!entity_has_type(actor,0x485878))continue;
        for(unsigned j=0;j<3;++j) {
            MEMF(frame+24+j*4)=position[j]+offset[i][j];
            MEMF(frame+36+j*4)=rotation[j]+(j==2?heading[i]:0);
        }
        args[0]=frame+24;args[1]=frame+36;
        /* Native actor virtual34 updates cached rotation and delegates the
         * position/spatial update. Do not write the actor transform directly. */
        recall_native_call(actor,MEM32(MEM32(actor)+0x34),2,args,0);
        /* Existing XML1 ground-placement routine (34940), corresponding to
         * the post-transform native call in XML2 loadextraction201DC6. */
        recall_native_call(actor,0x34940,0,NULL,0);
    }
    g_esp=sp;
}
static void (*recall_place_party)(const float*,const float*)=recall_native_place;
static uint32_t (*recall_arrival_anchor)(float*,float*)=recall_find_anchor;
static void recall_native_activate(uint32_t handle) {
    uint32_t sp=g_esp;g_esp-=4;uint32_t reference=g_esp;MEM32(reference)=handle;
    uint32_t action=recall_native_call(reference,0x6BF80,0,NULL,0);
    if(action) {
        /* Native action interfaces differ by slot: activation E4 remains
         * E4, while XML2's timed action C8 is XML1 C0. No raw flag edits. */
        recall_native_call(action,MEM32(MEM32(action)+0xe4),0,NULL,0);
        uint32_t args[3]={action,0x3d4ccccd,0};
        recall_native_call(action,MEM32(MEM32(action)+0xc0),3,args,0);
    }
    g_esp=sp;
}
static void (*recall_activate_anchor)(uint32_t)=recall_native_activate;
static void recall_zone(void) {
    uint32_t sp=g_esp;recall_request_travel(recall_context_entity());
    g_eax=0;g_esp=sp+4;
}
void xml1_recall_arrive(uint32_t map) {
    if(map!=0x49b2f0||recall_pending.kind==RAVEN_RECALL_NONE)return;
    uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    recall_travel_request request=recall_pending;xml1_recall_cancel();
    /* 82A77 follows native party placement and persistent-player recovery,
     * before native camera initialization. Consume once, even on mismatch. */
    if(raven_recall_equal((const char*)XBOX_PTR(map+0x1e0),request.destination)) {
        float position[3],rotation[3]={0,0,0};int available=1;
        if(request.kind==RAVEN_RECALL_RETURN)memcpy(position,request.position,sizeof position);
        else {
            uint32_t anchor=recall_arrival_anchor(position,rotation);
            available=anchor!=0;
            if(anchor)recall_activate_anchor(anchor);
        }
        if(available)recall_place_party(position,rotation);
        else fprintf(stderr,"[RECALL] Destination has no authored blinkportal action\n");
    }
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
}
static unsigned recall_fixture_loads,recall_fixture_places,recall_fixture_activations;
static uint32_t recall_contract_actors;
static unsigned recall_contract_moves,recall_contract_grounds,recall_contract_actions,recall_contract_loads;
static int recall_contract_sparse;
static unsigned recall_contract_creations;
static unsigned recall_contract_ground_queries,recall_contract_ground_sets;
static int recall_contract_ground_mode,recall_contract_retired;
static unsigned recall_contract_sound_lookups,recall_contract_sound_plays;
static int recall_contract_sound_missing;
static unsigned recall_contract_removals,recall_contract_removed_mask;
static uint32_t recall_contract_call(uint32_t receiver,uint32_t code,unsigned count,const uint32_t* args,int cdecl_call) {
    if(code==0x9FF10) {
        if(receiver||!cdecl_call||count!=1||strcmp((const char*)XBOX_PTR(args[0]),"blinkportal"))
            extension_failure("recall portal removal selector");
        for(unsigned i=0;i<3;++i)MEM32(0x4c25f8+i*4)=recall_contract_actors+i*0x100;
        return 3;
    }
    if(code==0x68060) {
        if(receiver||!cdecl_call||count!=5||args[4]||
           strcmp((const char*)XBOX_PTR(args[0]),"blinkportal")||
           strcmp((const char*)XBOX_PTR(args[1]),"blinkportal"))
            extension_failure("recall portal factory ABI/name/template");
        for(unsigned i=0;i<3;++i)
            if(MEMF(args[2]+i*4)!=(float)(10*(i+1))||
               MEMF(args[3]+i*4)!=(float)(i+1))
                extension_failure("recall portal factory transform");
        ++recall_contract_creations;
        return recall_contract_sparse?0:recall_contract_actors;
    }
    if(cdecl_call)extension_failure("recall native thiscall contract");
    if(code==0x72CF0)return 0x498e88;
    if(code==0x72470) {
        if(count!=3||args[1]!=0xffffffffu||args[2])extension_failure("recall party selector");
        for(unsigned i=0;i<5;++i)MEM32(args[0]+i*4)=0x400+i;
        MEM32(args[0]+20)=5;return args[0];
    }
    if(code==0x6BF80) {
        uint32_t handle=MEM32(receiver);
        if(recall_contract_retired)return 0;
        if(handle<0x400||handle>0x404)return 0;
        if(recall_contract_removed_mask&(1u<<(handle-0x400)))return 0;
        if(recall_contract_sparse&&handle==0x403)return 0;
        return recall_contract_actors+(handle-0x400)*0x100;
    }
    if(code==0x27850) {
        unsigned i=(receiver-recall_contract_actors)/0x100;
        if(count!=3||args[0]||args[1]||args[2]||i>2||i==1)
            extension_failure("recall portal removal arguments/lifetime");
        ++recall_contract_removals;
        recall_contract_removed_mask|=(1u<<i);
        if(i==0) {
            recall_contract_removed_mask|=2; /* Callback retires another match. */
            MEM32(0x4c25f8+8)=0; /* And replaces shared selection scratch. */
        }
        return 0;
    }
    if(code==0x8F170)return recall_contract_actors+0x800;
    if(code==0x151EF0)return recall_contract_actors+0x800;
    /* Synthetic fixture terminal IDs, not native XBE addresses. */
    if(code==0xf0010001) {
        if(count!=3||args[1]||args[2]||
           strcmp((const char*)XBOX_PTR(args[0]),"zone_shared/special/blink_spawn"))
            extension_failure("recall portal sound lookup");
        ++recall_contract_sound_lookups;
        return recall_contract_sound_missing?MEM32(0x3dd050):0x123456;
    }
    if(code==0xf0010002) {
        if(count!=1||args[0]!=0x123456)extension_failure("recall portal sound play");
        ++recall_contract_sound_plays;return 0;
    }
    if(code==0x8FFB0) {
        if(count!=4||args[2]!=1||args[3]!=1||MEMF(args[0])!=10||
           MEMF(args[0]+4)!=20||MEMF(args[0]+8)!=30)
            extension_failure("recall portal ground query");
        ++recall_contract_ground_queries;
        MEMF(args[1])=10;MEMF(args[1]+4)=20;MEMF(args[1]+8)=5;
        if(recall_contract_ground_mode==2)recall_contract_retired=1;
        /* A bool is returned in AL, not all of EAX. */
        return recall_contract_ground_mode==1?0xdead0000:0xdead0001;
    }
    if(code==0x66CA0) {
        if(count!=1||recall_contract_retired||MEMF(args[0])!=10||
           MEMF(args[0]+4)!=20||MEMF(args[0]+8)!=5)
            extension_failure("recall portal ground placement");
        ++recall_contract_ground_sets;return 0;
    }
    if(code==0x2E4D0) {
        unsigned index=(receiver-recall_contract_actors)/0x100;
        static const float expected[4][3]={{50,20,40},{10,60,40},{-30,20,40},{10,-20,40}};
        static const float angle[4]={3,4.57f,6.14f,7.71f};
        if(count!=2||index>=4)extension_failure("recall movement receiver/count");
        for(unsigned j=0;j<3;++j)
            if(MEMF(args[0]+4*j)!=expected[index][j])extension_failure("recall formation position");
        if(MEMF(args[1])!=1||MEMF(args[1]+4)!=2||fabsf(MEMF(args[1]+8)-angle[index])>.00001f)
            extension_failure("recall formation orientation");
        ++recall_contract_moves;return 0;
    }
    if(code==0x34940) {
        if(count||recall_contract_moves!=recall_contract_grounds+1)extension_failure("recall ground-call order");
        ++recall_contract_grounds;return 0;
    }
    if(code==0x270D0) {
        if(count||recall_contract_actions)extension_failure("recall action activation order");
        ++recall_contract_actions;return 0;
    }
    if(code==0x27A60) {
        if(count!=3||args[0]!=receiver||args[1]!=0x3d4ccccd||args[2]||recall_contract_actions!=1)
            extension_failure("recall timed action ABI");
        ++recall_contract_actions;return 0;
    }
    if(code==0x804B0) {
        if(count!=1||strcmp((const char*)XBOX_PTR(args[0]),"contracttown"))extension_failure("recall native load destination");
        ++recall_contract_loads;return 0;
    }
    return spawner_call(receiver,code,count,args,cdecl_call);
}
static int recall_native_contract_fixture(void) {
    uint32_t block=xbox_HeapAlloc(0x900,16),sp=g_esp;
    if(!block)extension_failure("recall native contract allocation");
    memset((void*)XBOX_PTR(block),0,0x900);
    uint32_t old_game=MEM32(0x498e88),old_type=MEM32(0x485878);
    char arrival[64];memcpy(arrival,(void*)XBOX_PTR(0x49b2f0+0xa0),64);
    MEM32(0x498e88)=0x3ccd14;MEM32(0x485878)=0;
    uint32_t table=block+0x600;
    memcpy((void*)XBOX_PTR(table),(void*)XBOX_PTR(0x3cf23c),0x200);MEM32(table)=0x2e6b0;
    for(unsigned i=0;i<5;++i){MEM32(block+i*0x100)=table;MEM32(block+i*0x100+0x18)=2;}
    recall_contract_actors=block;recall_contract_sparse=0;
    recall_contract_retired=0;
    recall_contract_removed_mask=0;
    recall_contract_moves=recall_contract_grounds=recall_contract_actions=recall_contract_loads=0;
    recall_native_call=recall_contract_call;
    float pos[3]={10,20,30},rot[3]={1,2,3};int fp=g_fp_top,failed=0;
    recall_native_place(pos,rot);
    if(recall_contract_moves!=4||recall_contract_grounds!=4)failed=1;
    recall_contract_sparse=1;MEM32(block+0x218)=0;
    recall_contract_moves=recall_contract_grounds=0;recall_native_place(pos,rot);
    if(recall_contract_moves!=2||recall_contract_grounds!=2)failed=2;
    MEM32(block)=0x3c8884;recall_native_activate(0x400);recall_native_activate(0);
    if(recall_contract_actions!=2)failed=3;
    recall_native_load("contracttown");
    if(recall_contract_loads!=1||MEM8(0x49b2f0+0xa0))failed=4;
    recall_contract_creations=0;recall_contract_sparse=0;
    MEM32(block+0x1c)=0x12300400;
    if(recall_native_create_portal(pos,rot)!=0x12300400)failed=6;
    recall_contract_sparse=1;
    if(recall_native_create_portal(pos,rot)||recall_contract_creations!=2)failed=7;
    MEM32(block+0x800)=0x3cfb54;
    memcpy((void*)XBOX_PTR(block+0x20),pos,12);
    recall_contract_ground_queries=recall_contract_ground_sets=0;
    recall_contract_ground_mode=0;recall_native_ground_portal(0x400);
    if(recall_contract_ground_queries!=1||recall_contract_ground_sets!=1)failed=8;
    recall_contract_ground_mode=1;recall_native_ground_portal(0x400);
    if(recall_contract_ground_queries!=2||recall_contract_ground_sets!=1)failed=9;
    recall_contract_ground_mode=2;recall_native_ground_portal(0x400);
    if(recall_contract_ground_queries!=3||recall_contract_ground_sets!=1)failed=10;
    recall_native_ground_portal(0x400);recall_native_ground_portal(0);
    if(recall_contract_ground_queries!=3||recall_contract_ground_sets!=1)failed=11;
    recall_contract_retired=0;
    MEM32(block+0x800)=block+0x810;
    MEM32(block+0x810+0x34)=0xf0010001;
    MEM32(block+0x810+0x58)=0xf0010002;
    recall_contract_sound_lookups=recall_contract_sound_plays=0;
    recall_contract_sound_missing=0;recall_native_portal_sound();
    recall_contract_sound_missing=1;recall_native_portal_sound();
    if(recall_contract_sound_lookups!=2||recall_contract_sound_plays!=1)failed=12;
    uint32_t selected[3];memcpy(selected,(void*)XBOX_PTR(0x4c25f8),sizeof selected);
    for(unsigned i=0;i<3;++i){MEM32(block+i*0x100)=0x3c8884;MEM32(block+i*0x100+0x1c)=0x400+i;}
    recall_contract_removals=0;recall_native_remove_portals();
    if(recall_contract_removals!=2||recall_contract_removed_mask!=7)failed=13;
    memcpy((void*)XBOX_PTR(0x4c25f8),selected,sizeof selected);recall_contract_removed_mask=0;
    if(g_esp!=sp||g_fp_top!=fp)failed=5;
    recall_native_call=spawner_call;MEM32(0x498e88)=old_game;MEM32(0x485878)=old_type;
    memcpy((void*)XBOX_PTR(0x49b2f0+0xa0),arrival,64);xbox_HeapFree(block);
    if(failed)fprintf(stderr,"FAIL recall native contracts %d\n",failed);
    else puts("PASS recall native contracts: party selector, four transforms, stale/nonactor skips, ground ordering, anchor activation/timed arguments, native arrival-string copy, portal factory arguments/handle/failure, ground hit/miss/retirement, sound lookup/play/missing and stack/FPU; world/party/factory/ground/audio terminals substituted");
    return failed;
}
static uint32_t recall_party_fixture_block;
static unsigned recall_party_fixture_count,recall_party_fixture_stale;
static uint32_t recall_party_fixture_call(uint32_t receiver,uint32_t code,unsigned count,const uint32_t* args,int cdecl_call) {
    if(code==0x72cf0)return 0x498e88;
    if(code==0x72470) {
        if(count!=3||args[1]!=0xffffffffu||args[2]||cdecl_call)extension_failure("portal party fixture ABI");
        for(unsigned i=0;i<recall_party_fixture_count;++i)MEM32(args[0]+i*4)=0x400+i;
        MEM32(args[0]+20)=recall_party_fixture_count;return args[0];
    }
    if(code==0x6bf80) {
        unsigned i=MEM32(receiver)-0x400;
        return i>=5||(recall_party_fixture_stale&(1u<<i))?0:recall_party_fixture_block+i*0x400;
    }
    return spawner_call(receiver,code,count,args,cdecl_call);
}
static int recall_party_fixture(void) {
    uint32_t block=xbox_HeapAlloc(0x1600,16),sp=g_esp;int fp=g_fp_top,failed=0;
    if(!block)extension_failure("portal party fixture allocation");
    memset((void*)XBOX_PTR(block),0,0x1600);recall_party_fixture_block=block;
    uint32_t old_game=MEM32(0x498e88),old_type=MEM32(0x485878);
    MEM32(0x498e88)=0x3ccd14;MEM32(0x485878)=0;
    memcpy((void*)XBOX_PTR(block+0x1400),(void*)XBOX_PTR(0x3cf23c),0x200);
    MEM32(block+0x1400)=0x2e6b0;
    for(unsigned i=0;i<5;++i) {
        uint32_t actor=block+i*0x400;MEM32(actor)=block+0x1400;
        MEM32(actor+0x18)=2;MEMF(actor+0x240)=100;
        MEMF(actor+0x20)=(float)(i*100);MEMF(actor+0x24)=10;MEMF(actor+0x28)=20;
    }
    recall_native_call=recall_party_fixture_call;
    recall_party_fixture_count=5;recall_party_fixture_stale=1;
    MEMF(block+0x400+0x240)=0;MEM8(block+0x800+0x334)=1;
    MEM32(block+0xc00+0x18)=0; /* stale, dead, AI and non-actor before valid fifth */
    float pos[3],rot[3];
    if(!recall_native_portal_transform(pos,rot)||pos[0]!=430||pos[1]!=10||pos[2]!=20)failed=1;
    MEMF(block+0x1000+0x30)=1.57079632679f;
    if(!recall_native_portal_transform(pos,rot)||fabsf(pos[0]-400)>.0001f||fabsf(pos[2]+10)>.0001f)failed=2;
    MEMF(block+0x1000+0x30)=0;MEMF(block+0x1000+0x34)=1.57079632679f;
    if(!recall_native_portal_transform(pos,rot)||fabsf(pos[0]-400)>.0001f||fabsf(pos[1]-40)>.0001f)failed=3;
    MEMF(block+0x1000+0x240)=0;
    if(recall_native_portal_transform(pos,rot))failed=4;
    recall_party_fixture_count=0;
    if(recall_native_portal_transform(pos,rot))failed=5;
    if(g_esp!=sp||g_fp_top!=fp)failed=6;
    recall_native_call=spawner_call;MEM32(0x498e88)=old_game;MEM32(0x485878)=old_type;
    xbox_HeapFree(block);
    if(failed)fprintf(stderr,"FAIL portal party transform %d\n",failed);
    else puts("PASS portal party transform: stale/dead/AI/nonactor exclusion, fifth member, yaw/pitch forward30, empty party and stack/FPU; party/resolution terminals substituted");
    return failed;
}
static float recall_fixture_position[3],recall_fixture_rotation[3];
static void recall_fixture_load(const char* destination) {
    ++recall_fixture_loads;xml1_recall_cancel();
    strcpy((char*)XBOX_PTR(0x49b2f0+0x1e0),destination);
}
static uint32_t recall_fixture_anchor(float* position,float* rotation) {
    for(unsigned i=0;i<3;++i){position[i]=(float)(10+i);rotation[i]=(float)(20+i);}
    return 0x400;
}
static void recall_fixture_place(const float* position,const float* rotation) {
    ++recall_fixture_places;memcpy(recall_fixture_position,position,12);
    memcpy(recall_fixture_rotation,rotation,12);g_eax=0xbad;
}
static void recall_fixture_activate(uint32_t handle) {
    if(handle!=0x400)extension_failure("recall fixture activation handle");
    ++recall_fixture_activations;
}
static unsigned recall_request_fixture_step;
static int recall_request_fixture_actor,recall_request_fixture_spawn;
static int recall_request_fixture_transform(float* pos,float* rot) {
    if(recall_request_fixture_step++)extension_failure("portal request transform order");
    for(unsigned i=0;i<3;++i){pos[i]=(float)i;rot[i]=(float)(i+3);}
    return recall_request_fixture_actor;
}
static void recall_request_fixture_remove(void) {
    if(recall_request_fixture_step++!=1)extension_failure("portal request remove order");
}
static uint32_t recall_request_fixture_create(const float* pos,const float* rot) {
    if(recall_request_fixture_step++!=2||pos[2]!=2||rot[2]!=5)extension_failure("portal request create order/transform");
    xml1_recall_state state;xml1_campaign_recall_get(&state);state.enabled=0;
    state.position[0]=456;xml1_campaign_recall_set(&state);
    return recall_request_fixture_spawn?0x400:0;
}
static void recall_request_fixture_sound(void) {
    if(recall_request_fixture_step++!=3)extension_failure("portal request sound order");
}
static void recall_request_fixture_ground(uint32_t handle) {
    if(recall_request_fixture_step++!=4||handle!=0x400)extension_failure("portal request ground order");
}
static int recall_request_fixture(void) {
    int failed=0;uint32_t sp=g_esp;int fp=g_fp_top;
    xml1_recall_state old_state;xml1_campaign_recall_get(&old_state);
    char old_zone[64];memcpy(old_zone,(void*)XBOX_PTR(0x49b2f0+0x1e0),64);
    recall_travel_request old_pending=recall_pending;
    recall_portal_transform=recall_request_fixture_transform;
    recall_remove_portals=recall_request_fixture_remove;recall_create_portal=recall_request_fixture_create;
    recall_portal_sound=recall_request_fixture_sound;recall_ground_portal=recall_request_fixture_ground;
    strcpy((char*)XBOX_PTR(0x49b2f0+0x1e0),"act3field");
    xml1_recall_state state={"none",{0,0,0},0,0};
    xml1_campaign_recall_set(&state);recall_request_fixture_step=0;
    if(recall_request_portal()||recall_request_fixture_step)failed=1;
    state.enabled=1;state.cooldown=1;xml1_campaign_recall_set(&state);
    if(recall_request_portal()||recall_request_fixture_step)failed=2;
    state.cooldown=0;xml1_campaign_recall_set(&state);recall_request_fixture_actor=0;
    if(recall_request_portal()||recall_request_fixture_step!=1)failed=3;
    xml1_campaign_recall_get(&state);if(state.cooldown)failed=4;
    recall_request_fixture_step=0;recall_request_fixture_actor=1;recall_request_fixture_spawn=0;
    if(recall_request_portal()||recall_request_fixture_step!=3)failed=5;
    xml1_campaign_recall_get(&state);
    if(state.cooldown!=300||state.enabled||state.position[0]!=456)failed=6;
    state.cooldown=0;state.enabled=1;xml1_campaign_recall_set(&state);
    recall_request_fixture_step=0;recall_request_fixture_spawn=1;
    if(!recall_request_portal()||recall_request_fixture_step!=5)failed=7;
    xml1_campaign_recall_get(&state);if(state.cooldown!=300||state.enabled)failed=8;
    strcpy((char*)XBOX_PTR(0x49b2f0+0x1e0),"act3town");
    strcpy(state.zone,"act3field");xml1_campaign_recall_set(&state);
    recall_request_fixture_step=0;
    if(!recall_request_portal()||recall_request_fixture_step||recall_pending.kind!=RAVEN_RECALL_RETURN)failed=9;
    if(g_esp!=sp||g_fp_top!=fp)failed=10;
    recall_portal_transform=recall_native_portal_transform;recall_remove_portals=recall_native_remove_portals;
    recall_create_portal=recall_native_create_portal;recall_portal_sound=recall_native_portal_sound;
    recall_ground_portal=recall_native_ground_portal;
    xml1_campaign_recall_set(&old_state);memcpy((void*)XBOX_PTR(0x49b2f0+0x1e0),old_zone,64);
    recall_pending=old_pending;
    if(failed)fprintf(stderr,"FAIL portal request orchestration %d\n",failed);
    else puts("PASS portal request orchestration: enabled/cooldown/actor gates, remove-create-sound-ground order, failed-spawn cooldown, preserved callback state and disabled/cooling hub return; scene/load terminals substituted");
    return failed;
}
static unsigned recall_dispatch_fixture_calls;
static int recall_dispatch_fixture_request(void) {
    ++recall_dispatch_fixture_calls;
    g_eax=0xbad;g_ecx=0xbad;g_edx=0xbad;g_esi=0xbad;g_edi=0xbad;
    return 0; /* Denied gameplay request still is a recognized command. */
}
static int recall_dispatch_fixture(void) {
    uint32_t manager=xbox_HeapAlloc(0x700,16),text=xbox_HeapAlloc(128,16),sp=g_esp;
    int fp=g_fp_top,failed=0;
    if(!manager||!text)extension_failure("recall command fixture allocation");
    memset((void*)XBOX_PTR(manager),0,0x700);
    spawner_call(manager,0x11CD10,0,NULL,0); /* Native empty map/queue. */
    recall_gameplay_request=recall_dispatch_fixture_request;recall_dispatch_fixture_calls=0;
    strcpy((char*)XBOX_PTR(text),"spawnblinkportal; spawnblinkportal");
    if(!(spawner_call(manager,0x11C680,1,&text,0)&255)||recall_dispatch_fixture_calls!=2)failed=1;
    strcpy((char*)XBOX_PTR(text),"unrecognized_recall_fixture");
    if((spawner_call(manager,0x11C680,1,&text,0)&255)||recall_dispatch_fixture_calls!=2)failed=2;
    strcpy((char*)XBOX_PTR(text),"spawnblinkportal");
    if(!(spawner_call(manager,0x11C9D0,1,&text,0)&255)||recall_dispatch_fixture_calls!=2)failed=3;
    uint32_t tick=0;spawner_call(manager,0x11C8E0,1,&tick,0);
    if(recall_dispatch_fixture_calls!=3||MEM32(manager+0x460))failed=4;
    if(g_esp!=sp||g_fp_top!=fp)failed=5;
    recall_gameplay_request=recall_request_portal;
    xbox_HeapFree(text);xbox_HeapFree(manager);
    if(failed)fprintf(stderr,"FAIL native portal command dispatch %d\n",failed);
    else puts("PASS native portal command dispatch: actual parser/map miss, separators, unknown rejection, deferred queue execution, denied request recognition and register/stack/FPU; gameplay request terminal substituted");
    return failed;
}
static int recall_travel_fixture(void) {
    /* Enclosing fixture owns/restores CMap, game/act and recall record.
     * Substitute loading/scene/placement terminals; decisions, ownership,
     * native current-zone getter and campaign-state access remain real. */
    uint32_t actor=xbox_HeapAlloc(64,16),sp=g_esp;int fp=g_fp_top,failed=0;
    if(!actor)extension_failure("recall travel actor allocation");
    recall_travel_request previous=recall_pending;
    if(recall_party_fixture())failed=12;
    if(recall_dispatch_fixture())failed=14;
    recall_load_destination=recall_fixture_load;recall_place_party=recall_fixture_place;
    recall_arrival_anchor=recall_fixture_anchor;recall_fixture_loads=recall_fixture_places=0;
    recall_activate_anchor=recall_fixture_activate;recall_fixture_activations=0;
    xml1_campaign_store_act(3);
    xml1_recall_state state={"none",{0,0,0},0,99};xml1_campaign_recall_set(&state);
    strcpy((char*)XBOX_PTR(0x49b2f0+0x1e0),"act3field");
    MEMF(actor+0x20)=1;MEMF(actor+0x24)=2;MEMF(actor+0x28)=3;
    if(!recall_request_travel(actor)||recall_fixture_loads!=1||
       strcmp(recall_pending.destination,"act3town"))failed=1;
    xml1_campaign_recall_get(&state);
    if(strcmp(state.zone,"act3field")||state.position[1]!=2||state.enabled||state.cooldown!=99)failed=2;
    MEMF(actor+0x24)=999; /* Pending state must not borrow departing actor. */
    xml1_recall_arrive(0);
    if(recall_fixture_places||recall_pending.kind!=RAVEN_RECALL_DEPART)failed=3;
    g_eax=123;xml1_recall_arrive(0x49b2f0);xml1_recall_arrive(0x49b2f0);
    if(recall_fixture_places!=1||recall_fixture_position[0]!=10||
       recall_fixture_rotation[2]!=22||g_eax!=123||recall_fixture_activations!=1)failed=4;
    if(!recall_request_travel(0)||recall_fixture_loads!=2)failed=5;
    xml1_campaign_recall_get(&state);
    if(strcmp(state.zone,"none"))failed=6;
    xml1_recall_arrive(0x49b2f0);
    if(recall_fixture_places!=2||recall_fixture_position[1]!=2||recall_fixture_rotation[2]!=0||
       recall_fixture_activations!=1)failed=7;
    strcpy((char*)XBOX_PTR(0x49b2f0+0x1e0),"act3town");
    if(recall_request_travel(actor)||recall_fixture_loads!=2)failed=8;
    strcpy((char*)XBOX_PTR(0x49b2f0+0x1e0),"act3field");
    recall_request_travel(actor);
    strcpy((char*)XBOX_PTR(0x49b2f0+0x1e0),"unrelated");xml1_recall_arrive(0x49b2f0);
    if(recall_fixture_places!=2||recall_pending.kind!=RAVEN_RECALL_NONE)failed=9;
    recall_pending.kind=RAVEN_RECALL_RETURN;xml1_recall_cancel();xml1_recall_arrive(0x49b2f0);
    if(recall_fixture_places!=2)failed=10;
    if(recall_request_fixture())failed=13;
    if(g_esp!=sp||g_fp_top!=fp)failed=11;
    recall_load_destination=recall_native_load;recall_place_party=recall_native_place;
    recall_arrival_anchor=recall_find_anchor;recall_pending=previous;xbox_HeapFree(actor);
    recall_activate_anchor=recall_native_activate;
    if(failed)fprintf(stderr,"FAIL recall travel orchestration %d\n",failed);
    else puts("PASS recall travel orchestration: departure/actorless return, owned state, hub no-op, independent portal gate, single-use/mismatched/cancelled arrival and register/stack/FPU; load and placement terminals substituted");
    return failed;
}
