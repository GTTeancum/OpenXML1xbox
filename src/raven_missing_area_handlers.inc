/* Missing XML2 area handlers. Addresses below are XML1 integration APIs;
 * XML2 FE8E0/FF160 and 1012B0/101D30 are the behavioral trace sources.
 * Never retain borrowed query entities across a combat-event callback. */
static uint32_t area_call(uint32_t object,uint32_t method,unsigned count,const uint32_t *args) {
    uint32_t sp=g_esp;
    for(unsigned i=count;i;--i)PUSH32(g_esp,args[i-1]);
    g_ecx=object;PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);
    if(g_esp!=sp){fprintf(stderr,"[AREA HANDLER ERROR] ABI %08X\n",method);_Exit(4);}
    return g_eax;
}
#define AREA_CALL(obj,fn,...) area_call((obj),(fn),sizeof((uint32_t[]){__VA_ARGS__})/4,(uint32_t[]){__VA_ARGS__})
#define AREA_VCALL(obj,slot,...) AREA_CALL((obj),MEM32(MEM32(obj)+(slot)),__VA_ARGS__)
static uint32_t area_call0(uint32_t object,uint32_t method) {return area_call(object,method,0,NULL);}
static uint32_t area_vcall0(uint32_t object,unsigned slot) {return area_call0(object,MEM32(MEM32(object)+slot));}
static uint32_t area_cdecl(uint32_t method,unsigned count,const uint32_t *args) {
    uint32_t sp=g_esp;
    for(unsigned i=count;i;--i)PUSH32(g_esp,args[i-1]);
    PUSH32(g_esp,0);RECOMP_ICALL_SAFE(method,sp);g_esp+=4*count;
    if(g_esp!=sp){fprintf(stderr,"[AREA HANDLER ERROR] cdecl %08X\n",method);_Exit(4);}
    return g_eax;
}
#define AREA_CDECL(fn,...) area_cdecl((fn),sizeof((uint32_t[]){__VA_ARGS__})/4,(uint32_t[]){__VA_ARGS__})
static uint32_t area_float(float value) {uint32_t bits;memcpy(&bits,&value,4);return bits;}
static void area_vector(uint32_t out,const float value[3]) {memcpy((void*)XBOX_PTR(out),value,12);}
static uint32_t area_resolve(uint32_t handle) {
    uint32_t sp=g_esp;g_esp-=4;MEM32(g_esp)=handle;
    uint32_t entity=area_call0(g_esp,0x6BF80);g_esp=sp;return entity;
}
static void area_center(uint32_t entity,float value[3]) {
    uint32_t sp=g_esp;g_esp-=12;AREA_VCALL(entity,0x24,g_esp);
    memcpy(value,(const void*)XBOX_PTR(g_esp),12);g_esp=sp;
}
static void area_facing(uint32_t entity,float value[3]) {
    uint32_t sp=g_esp;g_esp-=12;AREA_CDECL(0x1209C0,g_esp,entity+0x2C);
    memcpy(value,(const void*)XBOX_PTR(g_esp),12);g_esp=sp;
}
static void area_velocity(uint32_t entity,const float value[3]) {
    uint32_t sp=g_esp;g_esp-=12;area_vector(g_esp,value);
    AREA_CALL(entity,0x760D0,g_esp);g_esp=sp;
}
/* The native factory has three query slots. Its ally filter temporarily
 * borrows a second one. Return without disturbing another query when there
 * is insufficient capacity; the next simulation update can retry. */
static unsigned area_query(uint32_t actor,const float center[3],float radius,
    int filter_allies,int grasp,uint32_t handles[512]) {
    uint32_t sp=g_esp;unsigned count=0;
    if(area_call0(0,0xA2AE0)<(filter_allies?2u:1u))return 0;
    g_esp-=64;uint32_t frame=g_esp;memset((void*)XBOX_PTR(frame),0,64);
    MEM32(frame+4)=MEM32(actor+0x1C);area_vector(frame+8,center);
    AREA_CALL(frame,0xA2A70,0x4C0A5C,frame+4);
    uint32_t query=MEM32(frame);
    AREA_VCALL(query,0x68,frame+8,area_float(radius),0,0);
    AREA_VCALL(query,0x40,1,1);
    if(grasp)AREA_VCALL(query,0x40,1,4);
    if(filter_allies)AREA_CDECL(0x59960,frame,actor);
    MEM32(frame+24)=0x3C898C;
    uint32_t results=AREA_CDECL(0xA2B10,query,frame+24);
    unsigned available=area_vcall0(results,0);
    for(unsigned i=0;i<available&&count<512;++i) {
        uint32_t entity=AREA_VCALL(results,4,i);
        if(entity)handles[count++]=MEM32(entity+0x1C);
    }
    AREA_CDECL(0xA2B70,results);area_call0(frame,0xA2AC0);g_esp=sp;
    return count;
}
typedef struct magnetic_input {uint32_t actor,handle;float magnitude;} magnetic_input;
static magnetic_input magnetic_inputs[512];
static void magnetic_capture(uint32_t actor,uint32_t input) {
    if(!actor)return;
    uint32_t handle=MEM32(actor+0x1C);magnetic_input *s=&magnetic_inputs[handle&511];
    *s=(magnetic_input){actor,handle,input?fminf(1.0f,MEMF(input+8)):1.0f};
}
static void magnetic_start(void) {magnetic_capture(MEM32(g_esp+4),MEM32(g_esp+8));sub_000E6D80();}
static void magnetic_decision(void) {magnetic_capture(MEM32(g_esp+4),MEM32(g_esp+8));sub_000E7460();}
static void magnetic_contact_event(uint32_t actor) {
    uint32_t node=MEM32(actor+0x2F4);
    if(!node)return;
    uint32_t event=AREA_VCALL(node,0x1C,100);
    if(event)AREA_VCALL(event,4,actor,actor);
}
static void magnetic_contact(void) {uint32_t sp=g_esp;magnetic_contact_event(MEM32(sp+4));g_esp=sp+12;}
static float magnetic_pull(const float owner[3],const float target[3],float height,
    float extent,int parent,float velocity[3]) {
    float x=owner[0]-target[0],y=owner[1]-target[1],distance=sqrtf(x*x+y*y);
    velocity[0]=distance?300*x/distance:0;velocity[1]=distance?300*y/distance:0;velocity[2]=0;
    if(height<fmaxf(24,extent)||parent) {
        float scale=fminf(fabsf(height*6),1);
        velocity[0]*=scale;velocity[1]*=scale;velocity[2]=300;
    }
    return distance;
}
static void magnetic_prop(uint32_t actor,uint32_t target,float distance,float velocity[3]) {
    uint32_t sp=g_esp;g_esp-=144;uint32_t frame=g_esp;
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] magnetic prop actor=%08X target=%08X distance=%.1f\n",actor,target,distance);
    if(distance<72) {
        /* XML2 rotates the pull around Z and retains a .2 inward component. */
        float x=velocity[0],y=velocity[1];velocity[0]=y+.2f*x;velocity[1]=-x+.2f*y;
    }
    velocity[0]=(velocity[0]+MEMF(target+0x100))*.5f;
    velocity[1]=(velocity[1]+MEMF(target+0x104))*.5f;area_velocity(target,velocity);
    AREA_VCALL(target,0xF0,area_float(-1),0);
    if(distance<48) {
        AREA_CALL(target,0x90EE0,0);MEM32(target+4)&=~4u;area_call0(target,0x66A90);
    }
    if(!(area_call0(target,0x74950)&255)) {
        MEM32(target+4)|=4;area_call0(target,0x66A90);AREA_CALL(target,0x90EE0,area_float(1));
        /* XML1's compact collision-hit record starts at +274, not XML2's
         * +2B4. 5CC00 expands it into the native 100-byte hit structure.
         * Keep XML1 integer damage and native world lifetime ownership. */
        MEM32(target+0x274)=MEM32(actor+0x1C);
        /* Original FE F5D uses CValues DMG3's lower endpoint: 3 in the
         * supplied XML2 values table. Keep native integer collision damage. */
        MEM16(target+0x294)=3;MEM16(target+0x296)=10;
        MEM8(target+0x2A0)=(MEM8(target+0x2A0)&~2u)|1;
        uint32_t combat=area_call0(0,0x59CE0);
        MEM32(target+0x29C)=area_vcall0(combat,0x1C);
        float a[3],b[3];area_center(actor,a);area_center(target,b);
        float x=a[0]-b[0],y=a[1]-b[1],len=sqrtf(x*x+y*y);
        float axis[3]={len?y/len:0,len?-x/len:-1,0};area_vector(frame,axis);
        /* Native angular-velocity API has three arguments (XML2 has four). */
        AREA_CALL(target,0x76420,area_float(3.14f),frame,0);
        raven_xml1_guest_damage_record(frame+16,MEM32(actor+0x1C),32767,0x80,0);
        MEM32(frame+16+0xC)=1;
        AREA_VCALL(target,0x194,frame+16,area_float(1.5f));
    }
    /* Native compact-record expiry; 5CBD0 reads record+18 = entity+28C. */
    MEMF(target+0x28C)=raven_xml1_guest_game_time()+(friendly_fire_enabled()?5.0f:1.0f);
    g_esp=sp;
}
static void magnetic_target(uint32_t actor,uint32_t target,const float origin[3]) {
    if(!target||!has_type(target,0x4C0A60)||MEM8(target+0x2C3)>1)return;
    uint32_t sp=g_esp;g_esp-=24;uint32_t frame=g_esp;
    float center[3],velocity[3];area_center(target,center);
    AREA_VCALL(target,0x28,frame);
    float extent=fmaxf(MEMF(frame),fmaxf(MEMF(frame+4),MEMF(frame+8)));
    /* Physics local bounds +138..14C; cached ground Z set by 752A0 at +1E4.
     * XML2 parent +BC corresponds to XML1's physical parent +C0. */
    float height=MEMF(target+0x28)+MEMF(target+0x140)-MEMF(target+0x1E4);
    float distance=magnetic_pull(origin,center,height,extent,area_resolve(MEM32(target+0xC0))!=0,velocity);
    if(has_type(target,0x485878)) {
        float now=raven_xml1_guest_game_time();
        if((now-MEMF(target+0x410)<2&&MEM32(target+0x41C)==MEM32(actor+0x1C))||
            (MEM8(target+0x54C)&0x40))goto done;
        if(distance<48){magnetic_contact_event(actor);goto done;}
        velocity[2]*=.5f;
        for(unsigned j=0;j<3;++j)velocity[j]=.5f*(velocity[j]+MEMF(target+0x100+4*j));
        area_velocity(target,velocity);
        float facing[3];area_facing(target,facing);
        float dot=velocity[0]*facing[0]+velocity[1]*facing[1]+velocity[2]*facing[2];
        uint32_t atom=dot>0?0x4F3390:0x4F32AC;
        uint32_t style=area_call0(target,0x2E290);
        uint32_t next=AREA_CALL(style,0xED6E0,atom,0);
        if(next&&next!=MEM32(target+0x2F4)) {
            MEM32(frame+16)=0;AREA_CALL(target,0x27260,frame+16);
            AREA_CALL(target,0x3B100,next,1);MEMF(target+0x388)=0;
        }
    } else magnetic_prop(actor,target,distance,velocity);
done:g_esp=sp;
}
static void magnetic_update(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);unsigned fp=g_fp_top;
    if(actor) {
        uint32_t handle=MEM32(actor+0x1C);magnetic_input *s=&magnetic_inputs[handle&511];
        float scale=s->actor==actor&&s->handle==handle?s->magnitude:1;
        float velocity[3],center[3];area_facing(actor,velocity);
        velocity[0]*=200*scale;velocity[1]*=200*scale;velocity[2]=MEMF(actor+0x108);
        area_velocity(actor,velocity);area_center(actor,center);
        uint32_t handles[512];unsigned count=area_query(actor,center,144,1,1,handles);
        if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] magnetic actor=%08X query_targets=%u\n",actor,count);
        for(unsigned i=0;i<count;++i) {
            uint32_t owner=area_resolve(handle);
            if(owner!=actor)break;
            magnetic_target(actor,area_resolve(handles[i]),center);
        }
    }
    if(g_esp!=sp||g_fp_top!=fp){fputs("[AREA HANDLER ERROR] magnetic update ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
/* CCELightningData does not exist in XML1. Use the native event pool and
 * base event parser/copy lifetime, with its two private properties attached.
 * Its vtable carries native base RTTI for safe native dynamic_cast queries. */
static uint32_t lightning_table;
static int area_read(void *context,uint32_t address,void *out,size_t size) {
    (void)context;if(address<0x10000u||(uint64_t)address+size>0x08000000ull)return 0;
    memcpy(out,(const void*)XBOX_PTR(address),size);return 1;
}
static void lightning_parse(void) {
    uint32_t sp=g_esp,event=g_ecx;
    const char *key=(const char*)XBOX_PTR(MEM32(sp+4));
    const char *value=(const char*)XBOX_PTR(MEM32(sp+8));
    if(!_stricmp(key,"numtargets"))raven_lightning_operand_set(event,value);
    else if(!_stricmp(key,"usebothhands"))MEM8(event+0x14)=!_stricmp(value,"true");
    else {sub_000E3FB0();return;}
    g_eax=1;g_esp=sp+12;
}
static void lightning_copy(void) {
    uint32_t sp=g_esp,event=g_ecx,source=MEM32(sp+4);
    AREA_CALL(event,0xCEE80,source);
    if(source&&MEM32(source)==lightning_table) {
        MEM8(event+0x14)=MEM8(source+0x14);
        raven_lightning_operand_copy(event,source);
    }
    g_esp=sp+8;
}
int xml1_lightning_event_construct(uint32_t event,uint32_t name) {
    if(!name||_stricmp((const char*)XBOX_PTR(name),"ce_lightning_data"))return 0;
    if(!handler_table)xml1_bishop_register();
    MEM32(event)=lightning_table;MEM32(event+4)=MEM32(event+8)=0;
    MEM8(event+0xC)=MEM8(event+0xD)=0;MEM8(event+0xE)&=0xF0;
    MEM8(event+0x14)=0;raven_lightning_operand_set(event,NULL);return 1;
}
typedef struct lightning_state {
    uint32_t actor,handle,node,targets[9];unsigned count;float previous;int fired;
} lightning_state;
static lightning_state lightning_states[512];
static lightning_state *lightning_get(uint32_t actor) {
    uint32_t handle=MEM32(actor+0x1C);lightning_state *s=&lightning_states[handle&511];
    if(s->actor!=actor||s->handle!=handle||s->node!=MEM32(actor+0x2F4))
        *s=(lightning_state){.actor=actor,.handle=handle,.node=MEM32(actor+0x2F4)};
    return s;
}
static int lightning_contains(const lightning_state *s,uint32_t handle) {
    for(unsigned i=0;i<s->count;++i)if(s->targets[i]==handle)return 1;return 0;
}
static int lightning_alive(uint32_t entity) {
    /* XML1's actual health is float +240 (2E5B0 clamps to max short +246). */
    return entity&&has_type(entity,0x4C0A60)&&MEMF(entity+0x240)>0;
}
static int lightning_in_cone(const float origin[3],const float facing[3],const float target[3]) {
    float delta[3],length=0,dot=0;
    for(unsigned i=0;i<3;++i){delta[i]=target[i]-(origin[i]+40*facing[i]);length+=delta[i]*delta[i];}
    length=sqrtf(length);if(!length)return 0;
    for(unsigned i=0;i<3;++i)dot+=delta[i]*facing[i]/length;
    return dot>=.7f;
}
static int lightning_first(uint32_t actor,uint32_t target) {
    /* XML2 100A60 requires a live model and a .7 forward cone displaced40.
     * This is not a line-of-sight ray; do not add an invented wall filter. */
    uint32_t slot=area_vcall0(actor,0x180);if(!slot||!MEM32(slot))return 0;
    float origin[3],facing[3],center[3];area_center(actor,origin);
    area_facing(actor,facing);area_center(target,center);
    return lightning_in_cone(origin,facing,center);
}
static uint32_t lightning_event(uint32_t actor,unsigned tag) {
    uint32_t node=MEM32(actor+0x2F4);return node?AREA_VCALL(node,0x1C,tag):0;
}
static int lightning_bone(uint32_t actor,const char *name,float point[3]) {
    uint32_t sp=g_esp;g_esp-=80;uint32_t frame=g_esp;
    memset((void*)XBOX_PTR(frame),0,80);strcpy((char*)XBOX_PTR(frame+32),name);
    uint32_t bone=AREA_CDECL(0x138870,frame+32,frame+24);
    int found=!!MEM8(frame+24);
    if(found){AREA_CALL(actor,0x2E9F0,bone,frame,frame+12);memcpy(point,(const void*)XBOX_PTR(frame),12);}
    g_esp=sp;return found;
}
static void lightning_beam(uint32_t resource,const float from[3],const float to[3]) {
    if(!resource)return;
    uint32_t sp=g_esp;g_esp-=24;uint32_t frame=g_esp;
    area_vector(frame,from);for(unsigned i=0;i<3;++i)MEMF(frame+12+4*i)=to[i]-from[i];
    uint32_t game=area_call0(0,0x72CF0),effects=area_vcall0(game,0xC);
    /* XML1 effect launch is +30 (seven args); XML2 +34's last float is
     * lifetime, while XML1 1BF90's last argument is an existing group ID.
     * Zero selects a transient emission, as in native 32EB9. */
    AREA_VCALL(effects,0x30,resource,frame,frame+12,0,0,0,0);
    g_esp=sp;
}
static void lightning_empty_endpoint(uint32_t actor,const float origin[3],float endpoint[3]) {
    float facing[3];area_facing(actor,facing);
    for(unsigned i=0;i<3;++i)endpoint[i]=origin[i]+240*facing[i];
    int filter=!friendly_fire_enabled();
    if(area_call0(0,0xA2AE0)<(filter?2u:1u))return;
    uint32_t sp=g_esp;g_esp-=80;uint32_t frame=g_esp;memset((void*)XBOX_PTR(frame),0,80);
    MEM32(frame+4)=MEM32(actor+0x1C);area_vector(frame+8,origin);area_vector(frame+20,endpoint);
    AREA_CALL(frame,0xA2A70,0x4C0A5C,frame+4);uint32_t query=MEM32(frame);
    if(filter)AREA_CDECL(0x59960,frame,actor);
    AREA_VCALL(query,0x40,1,1);AREA_VCALL(query,0x40,2,14);
    AREA_VCALL(query,0x74,frame+8,frame+20,frame+32,1);
    MEM32(frame+44)=0x3C898C;
    uint32_t results=AREA_CDECL(0xA2B10,query,frame+44);
    if(area_vcall0(results,0)||area_vcall0(query,0x28)) {
        AREA_VCALL(query,0x20,frame+48);
        uint32_t point=area_call0(frame+48,0xA07E0);
        if(point)memcpy(endpoint,(const void*)XBOX_PTR(point),12);
    }
    AREA_CDECL(0xA2B70,results);area_call0(frame,0xA2AC0);g_esp=sp;
}
static int lightning_due(lightning_state *s,float now,float fraction) {
    if(s->fired?now-s->previous<=.25f:fraction<.25f)return 0;
    s->previous=now;s->fired=1;return 1;
}
static void lightning_update(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4);unsigned fp=g_fp_top;
    if(!actor)goto done;
    lightning_state *s=lightning_get(actor);
    if(!lightning_due(s,raven_xml1_guest_game_time(),actor_animation_fraction(actor)))goto done;
    MEMF(actor+0x3F0)=s->previous;
    uint32_t owner=s->handle,node=s->node,data=lightning_event(actor,1);
    int maximum=2,both=0;
    if(data&&MEM32(data)==lightning_table) {
        maximum=raven_lightning_operand_count(area_read,MEM32(0x4D7300),data,actor);
        both=!!MEM8(data+0x14);
    }
    float center[3];area_center(actor,center);
    for(unsigned i=0;i<s->count;) {
        uint32_t target=area_resolve(s->targets[i]);
        if(!lightning_alive(target)||(!i&&!lightning_first(actor,target))) {
            if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] lightning prune actor=%08X handle=%08X reason=%s\n",actor,s->targets[i],lightning_alive(target)?"cone":"dead-or-missing");
            memmove(s->targets+i,s->targets+i+1,(s->count-i-1)*sizeof(uint32_t));--s->count;
        } else {area_center(target,center);++i;}
    }
    if(maximum>(int)s->count&&maximum<=9) {
        uint32_t preferred=MEM32(actor+0x338),entity=area_resolve(preferred),selected=0;
        if(entity&&!lightning_contains(s,preferred))selected=preferred;
        else {
            uint32_t handles[512];unsigned count=area_query(actor,center,200,!friendly_fire_enabled(),0,handles);
            float best_distance=INFINITY;int best_priority=2;
            for(unsigned i=0;i<count;++i) {
                uint32_t target=area_resolve(handles[i]);
                if(lightning_contains(s,handles[i])||!lightning_alive(target)||(!s->count&&!lightning_first(actor,target)))continue;
                int priority=has_type(target,0x485878)?0:1;
                float point[3];area_center(target,point);float distance=0;
                for(unsigned j=0;j<3;++j)distance+=(point[j]-center[j])*(point[j]-center[j]);
                if(priority<best_priority||(priority==best_priority&&distance<best_distance)) {
                    selected=handles[i];best_distance=distance;best_priority=priority;
                }
            }
        }
        if(selected)s->targets[s->count++]=selected;
    }
    uint32_t effect=lightning_event(actor,102),resource=0;
    /* Existing XML1 effect-file event is reused without changing its parser. */
    if(effect&&MEM32(effect)==0x3D6FA4)resource=MEM32(effect+0x1C);
    float right[3],left[3];area_center(actor,right);memcpy(left,right,12);
    lightning_bone(actor,"Bip01 R Hand",right);
    int left_valid=both&&lightning_bone(actor,"Bip01 L Hand",left);
    uint32_t targets[9],count=s->count;memcpy(targets,s->targets,count*4);
    if(handler_live_trace())fprintf(stderr,"[HANDLER DETAIL] lightning actor=%08X targets=%u maximum=%d effect=%08X\n",actor,count,maximum,resource);
    if(!count&&resource) {
        float origin[3],endpoint[3];area_center(actor,origin);lightning_empty_endpoint(actor,origin,endpoint);
        lightning_beam(resource,right,endpoint);if(left_valid)lightning_beam(resource,left,endpoint);
    }
    uint32_t previous=owner;
    for(unsigned i=0;i<count;++i) {
        if(area_resolve(owner)!=actor||MEM32(actor+0x2F4)!=node)break;
        uint32_t target=area_resolve(targets[i]),from=area_resolve(previous);
        if(!target||!from)continue;
        float start[3],end[3];area_center(from,start);area_center(target,end);
        if(!i)memcpy(start,right,12);
        AREA_VCALL(node,0x14,i?101:100,target,actor);
        /* Event delivery can destroy entities or switch the actor's move. */
        if(area_resolve(owner)!=actor||MEM32(actor+0x2F4)!=node)break;
        lightning_beam(resource,start,end);if(!i&&left_valid)lightning_beam(resource,left,end);
        previous=targets[i];
    }
done:
    if(g_esp!=sp||g_fp_top!=fp){fputs("[AREA HANDLER ERROR] lightning update ABI\n",stderr);_Exit(4);}
    g_esp=sp+8;
}
static void lightning_interrupt(void) {
    uint32_t actor=MEM32(g_esp+4);
    if(actor){lightning_state *s=&lightning_states[MEM32(actor+0x1C)&511];if(s->actor==actor)memset(s,0,sizeof(*s));}
    g_esp+=8;
}
static void lightning_decision(void) {
    uint32_t sp=g_esp,actor=MEM32(sp+4),input=MEM32(sp+8),self=g_ecx;
    int keep=assigned_power_input(actor,input,0);
    if(keep){uint32_t node=MEM32(actor+0x2F4);keep=!!(AREA_VCALL(node,0xC,actor)&255);}
    if(!keep&&actor){lightning_state *s=&lightning_states[MEM32(actor+0x1C)&511];if(s->actor==actor)memset(s,0,sizeof(*s));}
    g_ecx=self;sub_000E7460();
}
