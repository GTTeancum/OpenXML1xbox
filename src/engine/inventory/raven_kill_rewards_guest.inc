/* XML2 44E10 grants cache74/76 to context+8 only on first victim death.
 * XML1 owns that transition at45EA4. This adapter stores no extra death state
 * and changes neither stock XP/drop eligibility nor save data. */
void raven_xml1_combat_kill_rewards(uint32_t context) {
    if(context<0x10000u||context>0x07ffff00u)return;
    uint32_t actor=MEM32(context+8);
    if(actor<0x10000u||actor>0x07fff800u)return; /* environmental kill */
    const uint32_t saved[]={g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_ebp,g_esp,g_seh_ebp};
    const int top=g_fp_top,cmp=g_fp_cmp;const unsigned cc=g_fp_cc;
    double floats[8];memcpy(floats,g_fp_stack,sizeof floats);
    uint32_t handles[128];unsigned count=0;float rewards[2]={0,0};
    const char* names[]={"health_per_kill","energy_per_kill"};
    if(raven_xml1_actor_powerups(read_guest,NULL,0x4833c0,actor,handles,&count)==RAVEN_FOUND) {
        for(unsigned n=0;n<count;++n) {
            uint32_t instance;
            if(raven_xml1_active_powerup(read_guest,NULL,0x4833c0,handles[n],&instance)!=RAVEN_FOUND)continue;
            uint32_t definition=MEM32(instance+0x2c);
            for(unsigned kind=0;kind<2;++kind) {
                float value=0;
                raven_lookup status=raven_rating_kill_reward(read_guest,raven_xml1_guest_entity_valid,
                    raven_xml1_guest_talent_actor,NULL,definition,0x4833c0,handles[n],
                    MEM32(0x4d7300),MEM32(0x498d90),names[kind],context+0xc,rating_scope,&value);
                if(status==RAVEN_INVALID){fputs("[KILL REWARD] Invalid affecter context\n",stderr);_Exit(4);}
                if(status==RAVEN_FOUND)rewards[kind]+=value;
            }
        }
    }
    for(unsigned kind=0;kind<2;++kind)if(rewards[kind]!=0&&isfinite(rewards[kind])) {
        /* Keep player-visible whole points, with a nonzero authored reward
         * remaining nonzero. Native setters retain XML1's maximum caps. */
        float value=rewards[kind];
        value=value>0?(float)fmax(1,floor(value+0.5)):(float)fmin(-1,ceil(value-0.5));
        if(kind) {
            g_ecx=actor;PUSH32(g_esp,0);RECOMP_ABI_CALL(0x0002E8C0u,sub_0002E8C0);
            value+=(float)g_fp_stack[g_fp_top];g_fp_top=(g_fp_top+1u)&7u;
        } else value+=MEMF(actor+0x240);
        uint32_t bits;memcpy(&bits,&value,4);
        g_ecx=actor;PUSH32(g_esp,bits);PUSH32(g_esp,0);
        if(kind)RECOMP_ABI_CALL(0x0002E5F0u,sub_0002E5F0);
        else RECOMP_ABI_CALL(0x0002E5B0u,sub_0002E5B0);
        check_stack(saved[7]);
    }
    if(g_fp_top!=top){fputs("[KILL REWARD] FPU imbalance\n",stderr);_Exit(4);}
    memcpy(g_fp_stack,floats,sizeof floats);g_fp_cmp=cmp;g_fp_cc=cc;
    g_eax=saved[0];g_ebx=saved[1];g_ecx=saved[2];g_edx=saved[3];
    g_esi=saved[4];g_edi=saved[5];g_ebp=saved[6];g_esp=saved[7];g_seh_ebp=saved[8];
}
