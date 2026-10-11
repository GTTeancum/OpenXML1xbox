#include "engine/powers/raven_power_bindings_guest.h"
/* Native resource half of the missing huge transformation. No resource pointer
 * survives a callback or reload; actor generation and snapshot revision do. */
static uint32_t (*transform_call)(uint32_t,uint32_t,unsigned,const uint32_t*,int)=spawner_call;
static int (*transform_live)(uint32_t,uint32_t)=actor_scale_entity_identity;
static uint64_t transform_capture_resource(uint32_t actor,uint32_t handle) {
    if(!transform_live(actor,handle))return 0;
    raven_actor_transform_snapshot prior;
    if(raven_actor_transform_read(actor,handle,&prior,NULL,0))return prior.revision;
    uint32_t slot=3,slots=transform_call(actor,0x2e290,0,NULL,0);
    uint32_t resource=transform_call(slots,0xed320,1,&slot,0);
    if(!resource)return 0;
    uint32_t category=transform_call(resource,MEM32(MEM32(resource)+4),0,NULL,0);
    uint32_t name_ref=transform_call(resource,MEM32(MEM32(resource)+0x24),0,NULL,0);
    uint32_t key=MEM32(name_ref),index=key&0xffffffu;
    if(!key||index>=4096)return 0;
    /* CFightStyle v24=EAD60 exposes its handle_str<3>. This is the native
     * third string pool, not the action-script pool or interpreter strings. */
    uint32_t strings=transform_call(0,0x199d50,0,NULL,0);
    if(strings<0x10000||strings>0x08000000u-0x4008)return 0;
    uint32_t offset=MEM32(strings+4+index*4);
    if(offset>=0x08000000u-strings-0x4008)return 0;
    uint32_t text=strings+0x4008+offset;
    const char *name=(const char*)XBOX_PTR(text);
    if(!*name||!memchr(name,0,0x08000000u-text)||!transform_live(actor,handle))return 0;
    return raven_actor_transform_capture(actor,handle,category,name);
}
static int transform_restore_resource(uint32_t actor,uint32_t handle,uint64_t revision) {
    raven_actor_transform_snapshot saved,current;
    if(!transform_live(actor,handle)||!raven_actor_transform_read(actor,handle,&saved,NULL,0)||
       saved.revision!=revision||saved.name_bytes>UINT32_MAX)return 0;
    uint32_t name=xbox_HeapAlloc((uint32_t)saved.name_bytes,16);
    if(!name)return 0;
    int restored=0;
    if(!raven_actor_transform_read(actor,handle,&saved,(char*)XBOX_PTR(name),saved.name_bytes)||
       saved.revision!=revision)goto done;
    uint32_t manager=transform_call(0,0xe9e50,0,NULL,0);
    uint32_t args[]={saved.category,name,0};
    uint32_t resource=transform_call(manager,MEM32(MEM32(manager)+0x1c),3,args,0);
    if(!resource||!transform_live(actor,handle)||
       !raven_actor_transform_read(actor,handle,&current,NULL,0)||current.revision!=revision)goto done;
    uint32_t slots=transform_call(actor,0x2e290,0,NULL,0);
    if(!transform_live(actor,handle))goto done;
    /* ED380 only assigns the native slot. The combat resource manager owns
     * the returned object; never free it or invent reference-count operations.
     * Retain the snapshot until the caller also restores animation/state. */
    uint32_t assign[]={3,resource};
    transform_call(slots,0xed380,2,assign,0);restored=1;
 done:
    xbox_HeapFree(name);return restored;
}

/* XML1 308F1..3090F loads an animation set through the actor's model and
 * its animation controller. The caller supplies a native-formatted resource
 * path; XML2 resource category numbers are not portable to this interface.
 * Check identity after callbacks before dereferencing actor-owned objects. */
static int transform_load_animation(uint32_t actor,uint32_t handle,uint32_t slot,uint32_t path) {
    if(!path||!transform_live(actor,handle))return 0;
    uint32_t reference=transform_call(actor,MEM32(MEM32(actor)+0x180),0,NULL,0);
    if(!transform_live(actor,handle)||!reference)return 0;
    uint32_t model=MEM32(reference);
    if(!model)return 0;
    uint32_t controller=transform_call(model,MEM32(MEM32(model)+0x14),0,NULL,0);
    if(!transform_live(actor,handle)||!controller)return 0;
    uint32_t args[]={slot,path};
    uint32_t loaded=transform_call(controller,MEM32(MEM32(controller)+0x2c),2,args,0);
    /* XML1 30B6F tests AL before rebuilding the animation cache at36570.
     * A live actor alone cannot establish that the requested set loaded. */
    return (loaded&255u)&&transform_live(actor,handle);
}

static int transform_current(uint32_t actor,uint32_t handle,uint64_t revision) {
    raven_actor_transform_snapshot current;
    return transform_live(actor,handle)&&
        raven_actor_transform_read(actor,handle,&current,NULL,0)&&current.revision==revision;
}
/* 0 leaves XML1's binding path intact; 1 supplies the temporary form's
 * slot (including explicitly empty); -1 aborts a retired/replaced lookup. */
int xml1_transform_power_name(uint32_t actor,unsigned action,char output[20]) {
    if(!actor||!output||action<5||action>8)return 0;
    uint32_t handle=MEM32(actor+0x1c);raven_actor_transform_snapshot snapshot;
    if(!raven_actor_transform_read(actor,handle,&snapshot,NULL,0)||!snapshot.active)return 0;
    char character[64];
    if(!raven_actor_transform_character(actor,handle,character,sizeof(character)))return -1;
    uint32_t sp=g_esp,ax=g_eax,cx=g_ecx,dx=g_edx,si=g_esi,di=g_edi,bx=g_ebx,bp=g_ebp,seh=g_seh_ebp;
    int fp=g_fp_top,result=-1;
    g_esp-=64;uint32_t text=g_esp;memcpy((void*)XBOX_PTR(text),character,strlen(character)+1);
    if(!transform_current(actor,handle,snapshot.revision))goto done;
    uint32_t manager=transform_call(0,0x56e90,0,NULL,0);
    if(!manager||!transform_current(actor,handle,snapshot.revision))goto done;
    uint32_t definition=transform_call(manager,MEM32(MEM32(manager)+0x40),1,&text,0);
    if(!definition||!transform_current(actor,handle,snapshot.revision))goto done;
    /* Missing/empty temporary slots must not expose the original hero's
     * powers against the replacement powerstyle. XML2's definition defaults
     * are empty. Resolve metadata at use time, never retain a def pointer. */
    output[0]=0;raven_transform_definition_get(definition,action-5,output);result=1;
 done:
    if(g_esp!=sp-64||g_fp_top!=fp)extension_failure("transformation power lookup ABI");
    g_esp=sp;g_eax=ax;g_ecx=cx;g_edx=dx;g_esi=si;g_edi=di;g_ebx=bx;g_ebp=bp;g_seh_ebp=seh;
    return result;
}
/* Restoration uses the native resource/animation/node interfaces, never copies
 * an old combat-node pointer across a reload. Keep the snapshot until every
 * callback returns to this same transformation, so retries retain its name. */
static int transform_restore(uint32_t actor,uint32_t handle,uint64_t revision) {
    if(!transform_restore_resource(actor,handle,revision)||!transform_current(actor,handle,revision))return 0;
    /* The restored powerstyle is now assigned. Stop resolving temporary
     * powers before native animation/node callbacks can request a new move.
     * Keep the original resource snapshot if a later callback prevents finish. */
    revision=raven_actor_transform_deactivate(actor,handle,revision);
    if(!revision)return 0;
    transform_call(actor,0x30890,0,NULL,0); /* Default sets + native animation-cache rebuild. */
    if(!transform_current(actor,handle,revision))return 0;
    uint32_t playback[]={0,1,0x3f800000u,0,0};
    transform_call(actor,0x40350,5,playback,0);
    if(!transform_current(actor,handle,revision))return 0;
    uint32_t idle_name=0x4f32a8;
    uint32_t node=transform_call(actor,0x38210,1,&idle_name,0);
    if(!transform_current(actor,handle,revision))return 0;
    if(node) {
        uint32_t transition[]={node,1};
        transform_call(actor,0x3b100,2,transition,0);
        if(!transform_current(actor,handle,revision))return 0;
    }
    return raven_actor_transform_forget(actor,handle,revision);
}

/* The adapter supplies native guest names. XML1's original CharacterManager
 * and animation replacement remain authoritative for categories and caches.
 * No per-hero logic, persistent resource pointer, or XML2 object offsets. */
static int transform_enable(uint32_t actor,uint32_t handle,uint32_t style,uint32_t character) {
    if(!style||!character||!transform_live(actor,handle))return 0;
    uint64_t revision=transform_capture_resource(actor,handle);
    raven_actor_transform_snapshot saved;
    if(!revision||!raven_actor_transform_read(actor,handle,&saved,NULL,0))return 0;
    if(saved.active)return 1; /* Preserve the first pre-transform snapshot. */
    uint32_t manager=transform_call(0,0x56e90,0,NULL,0);
    if(!manager||!transform_current(actor,handle,revision))return 0;
    uint32_t definition=transform_call(manager,MEM32(MEM32(manager)+0x40),1,&character,0);
    if(!transform_current(actor,handle,revision))return 0;
    /* 30AC0 assumes its requested CharacterDef exists. Reject a missing mod
     * declaration before entering that existing native routine. */
    if(!definition) {raven_actor_transform_forget(actor,handle,revision);return 0;}
    transform_call(actor,0x30890,0,NULL,0);
    if(!transform_current(actor,handle,revision))return 0;
    uint32_t loaded=transform_call(actor,0x30ac0,1,&character,0);
    if(!transform_current(actor,handle,revision))return 0;
    if(!(loaded&255u))goto rollback;
    uint32_t playback[]={0,1,0x3f800000u,0,0};
    transform_call(actor,0x40350,5,playback,0);
    if(!transform_current(actor,handle,revision))return 0;
    uint32_t idle_name=0x4f32a8;
    uint32_t node=transform_call(actor,0x38210,1,&idle_name,0);
    if(!transform_current(actor,handle,revision))return 0;
    if(node) {
        uint32_t transition[]={node,1};
        transform_call(actor,0x3b100,2,transition,0);
        if(!transform_current(actor,handle,revision))return 0;
    }
    manager=transform_call(0,0xe9e50,0,NULL,0);
    if(!manager||!transform_current(actor,handle,revision))return 0;
    uint32_t request[]={saved.category,style,0};
    uint32_t resource=transform_call(manager,MEM32(MEM32(manager)+0x1c),3,request,0);
    if(!transform_current(actor,handle,revision))return 0;
    if(!resource)goto rollback;
    uint32_t slots=transform_call(actor,0x2e290,0,NULL,0);
    if(!transform_current(actor,handle,revision))return 0;
    uint32_t assign[]={3,resource};
    transform_call(slots,0xed380,2,assign,0);
    return raven_actor_transform_activate(actor,handle,revision,(const char*)XBOX_PTR(character))!=0;
 rollback:
    /* Revert through the same checked path as disable; if reload fails, keep
     * the original snapshot for a retry rather than declaring success. */
    transform_restore(actor,handle,revision);return 0;
}

static int transform_actor_type(uint32_t actor){return entity_has_type(actor,0x485878);}
static int transform_set_actor(uint32_t actor,int enabled) {
    uint32_t handle=MEM32(actor+0x1c);
    if(!enabled) {
        raven_actor_transform_snapshot snapshot;
        if(!raven_actor_transform_read(actor,handle,&snapshot,NULL,0))return 1;
        return transform_restore(actor,handle,snapshot.revision);
    }
    uint32_t sp=g_esp;g_esp-=80;
    /* These are the retail command's resource arguments (XML2 13AEE1..13AEEB),
     * not a Bishop/Sunfire patch. Mod packages supply the named resources. */
    strcpy((char*)XBOX_PTR(g_esp),"data/powerstyles/ps_apocdummy");
    strcpy((char*)XBOX_PTR(g_esp+48),"apocdummy");
    int result=transform_enable(actor,handle,g_esp,g_esp+48);g_esp=sp;return result;
}
static uint32_t (*transform_resolve)(uint32_t)=resolve_entity;
static int (*transform_type)(uint32_t)=transform_actor_type;
static int (*transform_apply)(uint32_t,int)=transform_set_actor;
static void set_actor_huge(void) {
    uint32_t sp=g_esp,args=MEM32(sp+4);
    uint32_t selector=argument(args,0,0x14);
    uint32_t value=argument(args,1,0x14);
    int enabled=value&&!_stricmp((const char*)XBOX_PTR(value),"true");
    uint32_t actor=transform_resolve(selector);
    if(actor&&transform_type(actor)&&!transform_apply(actor,enabled))
        fprintf(stderr,"[TRANSFORM] setActorHuge could not complete for actor %08X\n",actor);
    g_eax=0;g_esp=sp+4;
}
static unsigned transform_script_mode,transform_script_calls,transform_script_expected;
static uint32_t transform_script_resolve(uint32_t name) {
    if(strcmp((const char*)XBOX_PTR(name),"_ACTIVATOR_"))extension_failure("huge selector argument");
    return transform_script_mode==1?0:0x123456;
}
static int transform_script_type(uint32_t actor){return actor==0x123456&&transform_script_mode!=2;}
static int transform_script_apply(uint32_t actor,int enabled) {
    if(actor!=0x123456||enabled!=(int)transform_script_expected)extension_failure("huge boolean dispatch");
    ++transform_script_calls;return 1;
}
static int transform_script_fixture(uint32_t pool,void (*command)(void)) {
    uint32_t sp=g_esp;int fp=g_fp_top,failed=0;
    memset((void*)XBOX_PTR(pool),0,256);
    MEM32(pool)=pool+40;MEM32(pool+4)=pool+56;MEM32(pool+0x1c)=2;
    MEM32(pool+40)=MEM32(pool+56)=0x3d5980;
    MEM32(pool+44)=pool+80;MEM32(pool+60)=pool+112;
    strcpy((char*)XBOX_PTR(pool+80),"_ACTIVATOR_");
    transform_resolve=transform_script_resolve;transform_type=transform_script_type;transform_apply=transform_script_apply;
    const char *values[]={"true","TRUE","TrUe","false","1",""};
    for(unsigned mode=0;mode<3;++mode)for(unsigned i=0;i<6;++i) {
        transform_script_mode=mode;transform_script_calls=0;transform_script_expected=i<3;
        strcpy((char*)XBOX_PTR(pool+112),values[i]);
        PUSH32(g_esp,pool);PUSH32(g_esp,0);command();
        if(g_eax||g_esp!=sp-4||MEM32(g_esp)!=pool||g_fp_top!=fp||transform_script_calls!=(mode==0))failed=1;
        g_esp=sp;
    }
    transform_resolve=resolve_entity;transform_type=transform_actor_type;transform_apply=transform_set_actor;
    fprintf(stderr,"[TRANSFORM SCRIPT] %s native string arguments, case-insensitive true, missing/nonactor exclusion and ABI; resolver/type/backend substituted\n",failed?"FAIL":"PASS");
    return failed;
}

static uint32_t transform_fixture_actor,transform_fixture_handle,transform_fixture_pool;
static unsigned transform_fixture_alive,transform_fixture_mode,transform_fixture_failed,transform_fixture_loads;
static unsigned transform_fixture_animation_calls,transform_fixture_restore_step;
static int transform_fixture_live(uint32_t actor,uint32_t handle) {
    return transform_fixture_alive&&actor==transform_fixture_actor&&handle==transform_fixture_handle;
}
static uint32_t transform_fixture_call(uint32_t receiver,uint32_t code,unsigned count,const uint32_t *args,int caller) {
    uint32_t pool=transform_fixture_pool;
    if(code==0x30890||code==0x40350||code==0x38210||code==0x3b100) {
        unsigned step=++transform_fixture_restore_step;
        if(receiver!=transform_fixture_actor||caller||
           (step==1&&(code!=0x30890||count))||
           (step==2&&(code!=0x40350||count!=5||args[0]||args[1]!=1||args[2]!=0x3f800000u||args[3]||args[4]))||
           (step==3&&(code!=0x38210||count!=1||args[0]!=0x4f32a8))||
           (step==4&&(code!=0x3b100||count!=2||args[0]!=pool+0x1200||args[1]!=1))||step>4)
            transform_fixture_failed=1;
        if(transform_fixture_mode==10+step)transform_fixture_alive=0;
        if(transform_fixture_mode==20+step) {
            raven_actor_transform_reset(transform_fixture_actor);
            raven_actor_transform_capture(transform_fixture_actor,transform_fixture_handle,12,"new_occupant_style");
        }
        return code==0x38210&&transform_fixture_mode!=30?pool+0x1200:0;
    }
    if(code==pool+0x910) {
        if(receiver!=transform_fixture_actor||count||caller)transform_fixture_failed=1;
        if(transform_fixture_mode==4)transform_fixture_alive=0;
        return pool+0xb00;
    }
    if(code==pool+0x914) {
        if(receiver!=pool+0xb10||count||caller)transform_fixture_failed=1;
        if(transform_fixture_mode==5)transform_fixture_alive=0;
        return transform_fixture_mode==6?0:pool+0xb20;
    }
    if(code==pool+0x918) {
        if(receiver!=pool+0xb20||count!=2||args[0]!=1||args[1]!=pool+0x5008||caller)
            transform_fixture_failed=1;
        ++transform_fixture_animation_calls;
        if(transform_fixture_mode==7)transform_fixture_alive=0;
        return transform_fixture_mode==8?0x100u:1u; /* Native result is AL. */
    }
    if(code==0x199d50)return pool+0x1000;
    if(code==0xe9e50)return pool+0x800;
    if(code==pool+0x900) {
        ++transform_fixture_loads;
        if(receiver!=pool+0x800||count!=3||args[0]!=12||args[2]||caller||
           strcmp((const char*)XBOX_PTR(args[1]),"data/powerstyles/original_mod"))transform_fixture_failed=1;
        if(transform_fixture_mode==1)return 0;
        if(transform_fixture_mode==2)transform_fixture_alive=0;
        if(transform_fixture_mode==3)raven_actor_transform_reset(transform_fixture_actor);
        return pool+0x500;
    }
    return spawner_call(receiver,code,count,args,caller);
}
static unsigned transform_enable_fixture_mode,transform_enable_fixture_calls;
static uint32_t transform_enable_fixture_call(uint32_t receiver,uint32_t code,unsigned count,const uint32_t *args,int caller) {
    uint32_t pool=transform_fixture_pool;
    ++transform_enable_fixture_calls;
    if(code==0x56e90)return pool+0x1800;
    if(code==pool+0x1910) {
        if(receiver!=pool+0x1800||count!=1||strcmp((const char*)XBOX_PTR(args[0]),"generic_transform_character")||caller)transform_fixture_failed=1;
        return transform_enable_fixture_mode==1?0:pool+0x2000;
    }
    if(code==0x30ac0) {
        if(receiver!=transform_fixture_actor||count!=1||args[0]!=pool+0x5100||caller)transform_fixture_failed=1;
        if(transform_enable_fixture_mode==4)transform_fixture_alive=0;
        if(transform_enable_fixture_mode==2) {transform_fixture_restore_step=0;return 0;}
        return 1;
    }
    if(code==pool+0x900&&!strcmp((const char*)XBOX_PTR(args[1]),"data/powerstyles/transform_fixture")) {
        if(receiver!=pool+0x800||count!=3||args[0]!=12||args[2]||caller)transform_fixture_failed=1;
        if(transform_enable_fixture_mode==3) {transform_fixture_restore_step=0;return 0;}
        return pool+0x600;
    }
    return transform_fixture_call(receiver,code,count,args,caller);
}
static int transform_resource_fixture(uint32_t pool) {
    uint32_t actor=pool,resource=pool+0x500,table=pool+0x700;
    uint32_t sp=g_esp;int fp=g_fp_top;
    memset((void*)XBOX_PTR(pool),0,0x6000);
    MEM32(actor+0x1c)=0x10001;MEM32(actor+0x2dc+12)=resource;MEM32(resource)=table;
    MEM32(table+4)=0xc9480;MEM32(table+0x24)=0xead60;
    MEM32(resource+4)=12;MEM32(resource+8)=1;
    MEM32(pool+0x1000+8)=0;
    strcpy((char*)XBOX_PTR(pool+0x5008),"data/powerstyles/original_mod");
    MEM32(pool+0x800)=pool+0xa00;MEM32(pool+0xa00+0x1c)=pool+0x900;
    transform_fixture_actor=actor;transform_fixture_handle=0x10001;transform_fixture_pool=pool;
    transform_fixture_failed=0;transform_fixture_alive=1;
    transform_call=transform_fixture_call;transform_live=transform_fixture_live;
    for(unsigned mode=0;mode<4;++mode) {
        raven_actor_transform_reset(actor);transform_fixture_alive=1;
        MEM32(actor+0x2dc+12)=resource;
        uint64_t revision=transform_capture_resource(actor,0x10001);
        if(!revision)transform_fixture_failed=1;
        MEM32(resource+4)=3;
        if(transform_capture_resource(actor,0x10001)!=revision)transform_fixture_failed=1;
        MEM32(resource+4)=12;
        MEM32(actor+0x2dc+12)=pool+0x600;
        transform_fixture_mode=mode;transform_fixture_loads=0;
        int restored=transform_restore_resource(actor,0x10001,revision);
        if(restored!=(mode==0)||transform_fixture_loads!=1||
           MEM32(actor+0x2dc+12)!=(mode==0?resource:pool+0x600)||g_esp!=sp||g_fp_top!=fp)
            transform_fixture_failed=1;
    }
    raven_actor_transform_reset(actor);transform_fixture_alive=1;
    MEM32(actor+0x2dc+12)=0;
    if(transform_capture_resource(actor,0x10001))transform_fixture_failed=1;
    MEM32(actor)=pool+0xc00;MEM32(pool+0xc00+0x180)=pool+0x910;
    MEM32(pool+0xb00)=pool+0xb10;MEM32(pool+0xb10)=pool+0xe00;
    MEM32(pool+0xe00+0x14)=pool+0x914;
    MEM32(pool+0xb20)=pool+0xf00;MEM32(pool+0xf00+0x2c)=pool+0x918;
    for(unsigned mode=0;mode<9;++mode) {
        transform_fixture_mode=mode;transform_fixture_alive=1;transform_fixture_animation_calls=0;
        MEM32(pool+0xb00)=mode==1?0:pool+0xb10;
        uint32_t path=mode==2?0:pool+0x5008;
        uint32_t handle=mode==3?0x20001:0x10001;
        int dispatched=transform_load_animation(actor,handle,1,path);
        if(dispatched!=(mode==0)||transform_fixture_animation_calls!=(mode==0||mode==7||mode==8)||
           g_esp!=sp||g_fp_top!=fp)transform_fixture_failed=1;
    }
    const unsigned restore_modes[]={0,1,11,12,13,14,21,22,23,24,30};
    for(unsigned i=0;i<sizeof(restore_modes)/sizeof(restore_modes[0]);++i) {
        unsigned mode=restore_modes[i];
        raven_actor_transform_reset(actor);transform_fixture_alive=1;
        MEM32(actor+0x2dc+12)=resource;
        uint64_t revision=transform_capture_resource(actor,0x10001);
        revision=raven_actor_transform_activate(actor,0x10001,revision,"fixture_form");
        if(!revision)transform_fixture_failed=1;
        transform_fixture_mode=mode;transform_fixture_restore_step=0;
        int restored=transform_restore(actor,0x10001,revision);
        unsigned expected=mode==0?4:mode==1?0:mode==30?3:mode%10;
        raven_actor_transform_snapshot remaining;
        int retained=raven_actor_transform_read(actor,0x10001,&remaining,NULL,0);
        if(restored!=(mode==0||mode==30)||transform_fixture_restore_step!=expected||
           retained==(mode==0||mode==30)||g_esp!=sp||g_fp_top!=fp)
            transform_fixture_failed=1;
        if(mode>=21&&mode<=24&&retained&&remaining.revision==revision)transform_fixture_failed=1;
    }
    raven_actor_transform_reset(actor);
    MEM32(pool+0x1800)=pool+0x1900;MEM32(pool+0x1900+0x40)=pool+0x1910;
    strcpy((char*)XBOX_PTR(pool+0x5100),"generic_transform_character");
    strcpy((char*)XBOX_PTR(pool+0x5200),"data/powerstyles/transform_fixture");
    transform_call=transform_enable_fixture_call;
    for(unsigned mode=0;mode<5;++mode) {
        raven_actor_transform_reset(actor);transform_fixture_alive=1;
        transform_enable_fixture_mode=mode;transform_fixture_mode=0;transform_fixture_restore_step=0;
        MEM32(actor+0x2dc+12)=resource;
        int enabled=transform_enable(actor,0x10001,pool+0x5200,pool+0x5100);
        raven_actor_transform_snapshot snapshot;
        int retained=raven_actor_transform_read(actor,0x10001,&snapshot,NULL,0);
        if(enabled!=(mode==0)||MEM32(actor+0x2dc+12)!=(mode==0?pool+0x600:resource)||
           retained!=(mode==0||mode==4)||g_esp!=sp||g_fp_top!=fp)transform_fixture_failed=1;
        if(mode==0) {
            unsigned calls=transform_enable_fixture_calls;
            if(!snapshot.active||!transform_enable(actor,0x10001,pool+0x5200,pool+0x5100)||
               transform_enable_fixture_calls!=calls)transform_fixture_failed=1;
            uint32_t old_menu=MEM32(0x577210);
            MEM32(0x577210)=0;MEM32(actor+0x330)=0;MEMF(actor+0x240)=100;
            for(unsigned direction=0;direction<4;++direction) {
                const unsigned action[]={12,16,17,11};
                if(xml1_raven_power_rotate_input(actor,0,1u<<7,1u<<action[direction])!=1)
                    transform_fixture_failed=1;
            }
            if(xml1_raven_power_rotate_input(actor,1,1u<<7,1u<<12)||
               xml1_raven_power_rotate_input(actor,0,0,1u<<12))transform_fixture_failed=1;
            MEMF(actor+0x240)=0;
            if(xml1_raven_power_rotate_input(actor,0,1u<<7,1u<<12))transform_fixture_failed=1;
            MEMF(actor+0x240)=100;MEM32(actor+0x1c)=0x20001;
            if(xml1_raven_power_rotate_input(actor,0,1u<<7,1u<<12))transform_fixture_failed=1;
            MEM32(actor+0x1c)=0x10001;MEM32(0x577210)=old_menu;
            char power[20]="sentinel";
            raven_transform_definition_set(pool+0x2000,0,"temporary_attack");
            if(xml1_transform_power_name(actor,5,power)!=1||strcmp(power,"temporary_attack")||
               xml1_transform_power_name(actor,1,power)!=0)transform_fixture_failed=1;
            if(xml1_transform_power_name(actor,6,power)!=1||*power)transform_fixture_failed=1;
            transform_enable_fixture_mode=1;
            if(xml1_transform_power_name(actor,5,power)!=-1)transform_fixture_failed=1;
            transform_enable_fixture_mode=0;raven_transform_definition_reset(pool+0x2000);
            transform_fixture_restore_step=0;
            if(!transform_restore(actor,0x10001,snapshot.revision)||MEM32(actor+0x2dc+12)!=resource)
                transform_fixture_failed=1;
        }
    }
    raven_actor_transform_reset(actor);
    transform_call=spawner_call;transform_live=actor_scale_entity_identity;
    fprintf(stderr,"[TRANSFORM RESOURCE] %s native slot/category/name access and assignment, repeated capture, failed reload, retirement/revision rejection and ABI; animation load-result/null models/retirement; restore sequencing/retry/reentrant revision protection; enable/disable/repeat/missing definition/failed animation and resource rollback; pool lookup/load, model/controller terminals and identity substituted\n",transform_fixture_failed?"FAIL":"PASS");
    return transform_fixture_failed;
}
