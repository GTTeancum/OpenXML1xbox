/* XML2 CAttachedPowerup+44 owns spend_damage capacity. XML1's 64-byte
 * active slot has no spare equivalent: keep one bounded record per pool slot,
 * keyed by the full generation, definition and holder. Never edit shared data. */
typedef struct damage_reserve_state {
    uint32_t live,owner,definition,target;
    int remaining;
} damage_reserve_state;
static damage_reserve_state damage_reserves[128];
void raven_xml1_damage_reserve_reset(void) {memset(damage_reserves,0,sizeof damage_reserves);}
static void damage_reserve_retire(uint32_t owner) {
    damage_reserve_state *s=&damage_reserves[owner&127];
    if(s->live&&s->owner==owner)memset(s,0,sizeof *s);
}
typedef struct reserve_abi {
    uint32_t r[9];int top,cmp;unsigned cc;double fp[8];
} reserve_abi;
static reserve_abi reserve_save(void) {
    reserve_abi s={{g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp},g_fp_top,g_fp_cmp,g_fp_cc,{0}};
    memcpy(s.fp,g_fp_stack,sizeof s.fp);return s;
}
static void reserve_restore(const reserve_abi *s) {
    check_stack(s->r[7]);
    if(g_fp_top!=s->top){fputs("[DAMAGE RESERVE] FPU imbalance\n",stderr);_Exit(4);}
    g_eax=s->r[0];g_ebx=s->r[1];g_ecx=s->r[2];g_edx=s->r[3];
    g_esi=s->r[4];g_edi=s->r[5];g_ebp=s->r[6];g_esp=s->r[7];g_seh_ebp=s->r[8];
    g_fp_cmp=s->cmp;g_fp_cc=s->cc;memcpy(g_fp_stack,s->fp,sizeof s->fp);
}
void raven_xml1_damage_reserve_refresh(uint32_t instance) {
    uint32_t owner;
    if(raven_xml1_active_powerup_identity(read_guest,NULL,0x4833C0,instance,&owner)!=RAVEN_FOUND)return;
    const reserve_abi abi=reserve_save();
    const uint32_t definition=MEM32(instance+0x2C),target=MEM32(instance+0x1C);
    float endpoints[2];
    raven_lookup status=raven_rating_damage_reserve(read_guest,raven_xml1_guest_entity_valid,
        raven_xml1_guest_talent_actor,NULL,definition,0x4833C0,owner,MEM32(0x4D7300),
        MEM32(0x498D90),0,NULL,endpoints);
    damage_reserve_state *s=&damage_reserves[owner&127];
    if(status==RAVEN_MISSING){damage_reserve_retire(owner);reserve_restore(&abi);return;}
    int16_t lower,upper;
    if(status!=RAVEN_FOUND||!raven_xml1_imported_damage_short(endpoints[0],&lower)||
       !raven_xml1_imported_damage_short(endpoints[1],&upper)) {
        fputs("[DAMAGE RESERVE] Invalid capacity operand\n",stderr);_Exit(4);
    }
    PUSH32(g_esp,(uint32_t)(int32_t)upper);PUSH32(g_esp,(uint32_t)(int32_t)lower);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x001233C0u,sub_001233C0);g_esp+=8;
    const int sampled=(int32_t)g_eax;
    uint32_t current;
    if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,owner,&current)==RAVEN_FOUND&&
       current==instance&&MEM32(current+0x2C)==definition&&MEM32(current+0x1C)==target) {
        if(!s->live||s->owner!=owner||s->definition!=definition||s->target!=target)
            *s=(damage_reserve_state){1,owner,definition,target,0};
        /* Native1468A9..1468BB refreshes to max(old capacity,new sample).
         * Do not refill on every hit or replace the owner's generation. */
        if(sampled>s->remaining)s->remaining=sampled;
    }
    reserve_restore(&abi);
}
static void damage_reserve_remove(uint32_t actor,uint32_t instance) {
    g_ecx=actor;PUSH32(g_esp,instance);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x0002AF30u,sub_0002AF30);
}
static void damage_reserve_apply(uint32_t actor,uint32_t record,int pending) {
    if(actor<0x10000u||actor>0x07FFFC00u||record<0x10000u||record>0x07FFFF9Cu)return;
    const int16_t native_amount=SMEM16(record+8);
    const double damage=pending?native_amount:raven_native_damage_amount(record,native_amount);
    if(!(damage>0)||!isfinite(damage))return;
    uint32_t handles[128];unsigned count=0;
    if(raven_xml1_actor_powerups(read_guest,NULL,0x4833C0,actor,handles,&count)!=RAVEN_FOUND)return;
    const reserve_abi abi=reserve_save();const uint32_t target=MEM32(actor+0x1C);
    for(unsigned i=0;i<count;++i) {
        uint32_t instance;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,handles[i],&instance)!=RAVEN_FOUND)continue;
        damage_reserve_state *s=&damage_reserves[handles[i]&127];
        const uint32_t definition=MEM32(instance+0x2C),source=MEM32(instance+0x18);
        if(!s->live||s->owner!=handles[i]||s->definition!=definition||s->target!=target||
           MEM32(instance+0x1C)!=target)continue;
        if(source!=MEM32(0x498D90)&&raven_xml1_guest_entity_valid(NULL,source)<=0)continue;
        const raven_lookup eligible=raven_rating_damage_reserve(read_guest,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,NULL,definition,0x4833C0,handles[i],MEM32(0x4D7300),
            MEM32(0x498D90),record,rating_scope,NULL);
        if(eligible==RAVEN_INVALID){fputs("[DAMAGE RESERVE] Invalid hit scope\n",stderr);_Exit(4);}
        if(eligible!=RAVEN_FOUND)continue;
        g_ecx=definition+4;PUSH32(g_esp,record);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00094F00u,sub_00094F00);
        if(!(g_eax&255))continue;
        // The native query returns the first eligible attachment. A zero
        // capacity does not silently select a different stacked reserve.
        if(s->remaining>0) {
            double rest=damage-s->remaining;
            /* Retail4614F removes only when the hit exceeds capacity. An
             * exact spend leaves a zero-capacity attachment until normal expiry. */
            const int exhausted=rest>0;
            if(rest<0)rest=0;
            s->remaining=exhausted?0:(int)floor(s->remaining-damage+0.5);
            int16_t delivered;
            if(!raven_xml1_imported_damage_short((float)rest,&delivered)) {
                fputs("[DAMAGE RESERVE] Invalid remaining hit\n",stderr);_Exit(4);
            }
            MEM16(record+8)=(uint16_t)delivered;
            if(!pending)raven_native_damage_set(0x46373,record,rest,native_amount);
            if(exhausted) {
                // Clear before deactivation: native callbacks can recurse,
                // unlink another attachment or recycle this very slot.
                damage_reserve_retire(handles[i]);
                damage_reserve_remove(actor,instance);
            }
        }
        break;
    }
    reserve_restore(&abi);
}

void raven_xml1_combat_damage_reserve(uint32_t actor,uint32_t record) {
    damage_reserve_apply(actor,record,0);
}

/* XML2 45F75/45F86 queries def_dodge in both modes, then45F8F multiplies
 * the additive chance by the scale product. This is a separate incoming
 * cancellation, not XML1's reflected-hit path. Only an authored new operand
 * enters this adapter; stock actors must not consume an extra random draw. */
static void damage_dodge_feedback(uint32_t holder) {
    const uint32_t sp=g_esp;
    PUSH32(g_esp,0);RECOMP_ABI_CALL(0x00158860u,sub_00158860);check_stack(sp);
    const uint32_t hud=g_eax;
    uint32_t actor;
    if(raven_xml1_guest_entity_actor(NULL,holder,&actor)!=RAVEN_FOUND)return;
    g_esp-=64;const uint32_t frame=g_esp;
    memset((void*)XBOX_PTR(frame),0,64);
    // XML1 has no XML2 localization token169. This new label is English,
    // like the other added HUD notices; never reinterpret an existing ID.
    strcpy((char*)XBOX_PTR(frame),"Dodge");
    uint32_t method=MEM32(MEM32(actor)+0x24);g_ecx=actor;
    PUSH32(g_esp,frame+24);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,frame);check_stack(frame);
    const uint32_t position=g_eax;
    float point[3];for(unsigned i=0;i<3;++i)point[i]=MEMF(position+4*i);
    point[2]+=30.0f;
    for(unsigned i=0;i<3;++i){MEMF(frame+24+4*i)=point[i];MEMF(frame+40+4*i)=0.9f;}
    // Native156E20 copies text (20-byte bounded), position, RGB and duration
    // into its owned16-entry queue. None of these scratch pointers escapes.
    method=MEM32(MEM32(hud)+0x30);g_ecx=hud;
    PUSH32(g_esp,0x3F000000u);PUSH32(g_esp,frame+40);
    PUSH32(g_esp,frame+24);PUSH32(g_esp,frame);PUSH32(g_esp,0);
    RECOMP_ICALL_SAFE(method,frame);check_stack(frame);g_esp=sp;
}
static int damage_dodge_apply(uint32_t actor,uint32_t context) {
    if((int32_t)MEM32(context+0x94)<=0)return 0;
    uint32_t handles[128];unsigned count=0;
    if(raven_xml1_actor_powerups(read_guest,NULL,0x4833C0,actor,handles,&count)!=RAVEN_FOUND)return 0;
    float amount=0,scale=1;int found=0;
    for(unsigned i=0;i<count;++i) {
        uint32_t instance;
        if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,handles[i],&instance)!=RAVEN_FOUND)continue;
        const uint32_t definition=MEM32(instance+0x2C),source=MEM32(instance+0x18);
        if(MEM32(instance+0x1C)!=MEM32(actor+0x1C)||
           (source!=MEM32(0x498D90)&&raven_xml1_guest_entity_valid(NULL,source)<=0))continue;
        float add=0,multiply=1;
        const raven_lookup a=raven_rating_add(read_guest,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,NULL,definition,0x4833C0,handles[i],MEM32(0x4D7300),
            MEM32(0x498D90),"def_dodge",context+0xC,rating_scope,&add);
        const raven_lookup m=raven_rating_scale(read_guest,raven_xml1_guest_entity_valid,
            raven_xml1_guest_talent_actor,NULL,definition,0x4833C0,handles[i],MEM32(0x4D7300),
            MEM32(0x498D90),"def_dodge",context+0xC,rating_scope,&multiply);
        if(a==RAVEN_INVALID||m==RAVEN_INVALID) {
            fputs("[DODGE] Invalid probability operand\n",stderr);_Exit(4);
        }
        if(a!=RAVEN_FOUND&&m!=RAVEN_FOUND)continue;
        g_ecx=definition+4;PUSH32(g_esp,context+0xC);PUSH32(g_esp,0);
        RECOMP_ABI_CALL(0x00094F00u,sub_00094F00);
        if(!(g_eax&255))continue;
        if(a==RAVEN_FOUND)amount+=add;
        if(m==RAVEN_FOUND)scale*=multiply;
        found=1;
    }
    const float chance=amount*scale;
    if(!isfinite(chance)){fputs("[DODGE] Nonfinite probability\n",stderr);_Exit(4);}
    if(!found||!(chance>0))return 0;
    // Reuse XML1's simulation RNG. No host RNG, extra retained state or
    // character-specific thresholds. Native XML2 compares draw < chance.
    PUSH32(g_esp,0x3F800000u);PUSH32(g_esp,0);PUSH32(g_esp,0);
    RECOMP_ABI_CALL(0x001233A0u,sub_001233A0);g_esp+=8;
    const float draw=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1u)&7u;
    if(draw<chance){MEM32(context+0x94)=0;return 1;}
    return 0;
}

/* Native XML1 context+94 holds the completed defensive damage before45609
 * publishes it to record+8 and computes reaction immunity/knockback. New
 * defenses belong here, not after native hit reactions at final health delivery. */
void raven_xml1_combat_defense_extensions(uint32_t context) {
    if(context<0x10000u||context>0x07FFFF50u)return;
    const uint32_t actor=MEM32(context),record=context+0xC;
    if(actor<0x10000u||actor>0x07FFFC00u)return;
    const reserve_abi abi=reserve_save();
    const uint32_t dodge_holder=MEM32(actor+0x1C);
    if(damage_dodge_apply(actor,context)) {
        damage_dodge_feedback(dodge_holder);
        reserve_restore(&abi);return;
    }
    const uint32_t holder=MEM32(actor+0x1C),before=MEM32(context+0x94);
    const uint16_t original=MEM16(record+8);
    MEM16(record+8)=MEM16(context+0x94);
    damage_reserve_apply(actor,record,1);
    if(MEM16(record+8)!=(uint16_t)before)MEM32(context+0x94)=(uint32_t)(int32_t)SMEM16(record+8);
    MEM16(record+8)=original;
    const float damage=(float)(int32_t)MEM32(context+0x94);
    uint32_t current_actor=0;
    if(damage>0&&raven_xml1_guest_entity_actor(NULL,holder,&current_actor)==RAVEN_FOUND&&current_actor==actor) {
        uint32_t handles[128];unsigned count=0;float factor=0;
        if(raven_xml1_actor_powerups(read_guest,NULL,0x4833C0,actor,handles,&count)==RAVEN_FOUND)
            for(unsigned i=0;i<count;++i) {
                uint32_t instance;float contribution;
                if(raven_xml1_active_powerup(read_guest,NULL,0x4833C0,handles[i],&instance)!=RAVEN_FOUND)continue;
                const raven_lookup status=raven_rating_energy_shield(read_guest,raven_xml1_guest_entity_valid,
                    raven_xml1_guest_talent_actor,NULL,MEM32(instance+0x2C),0x4833C0,handles[i],
                    MEM32(0x4D7300),MEM32(0x498D90),&contribution);
                if(status==RAVEN_INVALID){fputs("[ENERGY SHIELD] Invalid factor\n",stderr);_Exit(4);}
                if(status==RAVEN_FOUND)factor=contribution;
            }
        if(factor>0) {
            const float charge=factor*damage;
            if(!isfinite(charge)){fputs("[ENERGY SHIELD] Nonfinite charge\n",stderr);_Exit(4);}
            g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E8C0u,sub_0002E8C0);
            const float energy=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1u)&7u;
            float remaining=damage-energy;if(remaining<0)remaining=0;
            int16_t delivered;
            if(!raven_xml1_imported_damage_short(remaining,&delivered)) {
                fputs("[ENERGY SHIELD] Invalid health damage\n",stderr);_Exit(4);
            }
            MEM32(context+0x94)=(uint32_t)(int32_t)delivered;
            // Only the traced new shield suppresses these reactions; preserve
            // unblockable and XML1's other flags and ordinary energy-cost rules.
            if(!(MEM32(context+0x24)&0x20000000u))MEM32(context+0x24)&=0xFFFFEF87u;
            g_esp-=4;MEMF(g_esp)=charge;g_ecx=actor;PUSH32(g_esp,0);
            RECOMP_ABI_CALL(0x0003F410u,sub_0003F410);
        }
    }
    reserve_restore(&abi);
}
