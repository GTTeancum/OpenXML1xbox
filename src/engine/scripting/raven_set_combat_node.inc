/* Missing XML2 CCESetCombatNode, traced at F9140/FA110/109C40/109C70.
 * This selects native XML1 transitions; it does not write actor state directly. */
#define SET_NODE_TABLE (handler_table+1540u)
static void set_node_parse(void) {
    uint32_t sp=g_esp,event=g_ecx,key=MEM32(sp+4),value=MEM32(sp+8);
    const char *name=(const char*)XBOX_PTR(key);
    if(!_stricmp(name,"combatnode"))AREA_CALL(event+0x10,0x27EF0,value);
    else if(!_stricmp(name,"animenum")||!_stricmp(name,"nonhumanoidanimenum")) {
        uint32_t out=event+(!_stricmp(name,"animenum")?0x14:0x18);
        MEM32(out)=UINT32_MAX;
        AREA_CDECL(0x369D0,value,out); /* Existing XML1 symbolic animation bank. */
    } else {
        unsigned mask=!_stricmp(name,"fromsponsor")?1:
            !_stricmp(name,"forcerestart")?2:!_stricmp(name,"forcesamerestart")?4:0;
        if(!mask){sub_000E3FB0();return;}
        int enabled=value&&!_stricmp((const char*)XBOX_PTR(value),"true");
        MEM8(event+0x1C)=(MEM8(event+0x1C)&~mask)|(enabled?mask:0);
    }
    g_eax=1;g_esp=sp+12;
}
static void set_node_copy(void) {
    uint32_t sp=g_esp,event=g_ecx,source=MEM32(sp+4);
    AREA_CALL(event,0xCEE80,source);
    if(source&&MEM32(source)==SET_NODE_TABLE) {
        /* Interned names share the native process-lifetime string ownership. */
        memcpy((void*)XBOX_PTR(event+0x10),(const void*)XBOX_PTR(source+0x10),12);
        MEM8(event+0x1C)=(MEM8(event+0x1C)&~7u)|(MEM8(source+0x1C)&7u);
    }
    g_esp=sp+8;
}
static int32_t set_node_animation(uint32_t event,uint32_t actor) {
    uint32_t definition=MEM32(actor+0x2D8);
    /* Reuse the already-imported CharacterDef flag (filterhumanoid); XML2's
     * +2AE bit7 is not an XML1 field. No per-character/skeleton-name rule. */
    if(definition&&(MEM8(definition+XML1_CHARACTER_COMBAT_FLAGS)&XML1_CHARACTER_NONHUMANOID_SKELETON)
        &&MEM32(event+0x18)!=UINT32_MAX)return (int32_t)MEM32(event+0x18);
    return (int32_t)MEM32(event+0x14);
}
static void set_node_execute(void) {
    uint32_t sp=g_esp,event=g_ecx,actor=MEM32(sp+4),sponsor=MEM32(sp+8);
    if(!actor||!sponsor)goto done;
    int32_t animation=set_node_animation(event,actor);
    unsigned flags=MEM8(event+0x1C);
    /* fromsponsor chooses only the lookup bank. Transition always affects actor. */
    uint32_t node=AREA_CALL((flags&1)?sponsor:actor,0x38210,event+0x10);
    if(!node)goto done;
    if(!(flags&4)&&node==MEM32(actor+0x2F4)&&
       (animation==-1||animation==(int16_t)MEM16(actor+0x39C)))goto done;
    if(flags&2) {
        AREA_CALL(actor,0x3B100,node,1);
        if(animation!=-1)AREA_CALL(actor,0x40350,(uint32_t)animation,1,area_float(1),area_float(.8f),0);
    } else {
        /* Native eligibility, interruption, node ownership and start callbacks. */
        AREA_CALL(actor,0x40DF0,node,(uint32_t)animation,area_float(-1),0,0,0);
    }
done:g_esp=sp+12;
}
static int set_node_construct(uint32_t event,uint32_t name) {
    if(!name||_stricmp((const char*)XBOX_PTR(name),"ce_set_combat_node"))return 0;
    if(!handler_table)xml1_bishop_register();
    MEM32(event)=SET_NODE_TABLE;MEM32(event+4)=MEM32(event+8)=0;
    MEM8(event+0xC)=MEM8(event+0xD)=0;MEM8(event+0xE)&=0xF0;
    MEM32(event+0x10)=0;MEM32(event+0x14)=MEM32(event+0x18)=UINT32_MAX;
    MEM8(event+0x1C)&=~7u;return 1;
}

/* Called within the registry fixture's existing native lookup environment. */
static int set_node_fixture(uint32_t pool,uint32_t actor,uint32_t sponsor,
    uint32_t container,uint32_t methods,uint32_t node) {
    uint32_t event=pool+0xB000,clone=event+64,text=event+128,definition=pool+0xC000;
    uint32_t sp=g_esp;unsigned fp=g_fp_top;int failed=0;
    memset((void*)XBOX_PTR(event),0,256);memset((void*)XBOX_PTR(definition),0,XML1_CHARACTER_BYTES);
    strcpy((char*)XBOX_PTR(text),"ce_set_combat_node");
    if(!xml1_lightning_event_construct(event,text)||MEM32(event)!=SET_NODE_TABLE||
       MEM32(event+0x14)!=UINT32_MAX||MEM32(event+0x18)!=UINT32_MAX)failed=1;
    strcpy((char*)XBOX_PTR(text),"combatnode");
    strcpy((char*)XBOX_PTR(text+32),"set_node_fixture_move");
    AREA_VCALL(event,16,text,text+32);
    if(!MEM32(event+0x10)||!(g_eax&255))failed=2;
    const char *keys[]={"fromsponsor","forcerestart","forcesamerestart"};
    for(unsigned i=0;i<3;++i) {
        strcpy((char*)XBOX_PTR(text),keys[i]);strcpy((char*)XBOX_PTR(text+32),"TRUE");
        AREA_VCALL(event,16,text,text+32);
        if(!(MEM8(event+0x1C)&(1u<<i)))failed=3;
        strcpy((char*)XBOX_PTR(text+32),"false");AREA_VCALL(event,16,text,text+32);
        if(MEM8(event+0x1C)&(1u<<i))failed=4;
    }
    MEM32(event+0x14)=17;MEM32(event+0x18)=29;MEM8(event+0x1C)=5;
    MEM32(actor+0x2D8)=definition;
    if(set_node_animation(event,actor)!=17)failed=5;
    MEM8(definition+XML1_CHARACTER_COMBAT_FLAGS)=XML1_CHARACTER_NONHUMANOID_SKELETON;
    if(set_node_animation(event,actor)!=29)failed=6;
    MEM32(event+0x18)=UINT32_MAX;if(set_node_animation(event,actor)!=17)failed=7;
    strcpy((char*)XBOX_PTR(text),"ce_set_combat_node");set_node_construct(clone,text);
    AREA_VCALL(clone,24,event);
    if(MEM32(clone+0x10)!=MEM32(event+0x10)||MEM32(clone+0x14)!=17||MEM8(clone+0x1C)!=5)failed=8;
    MEM32(event+0x14)=31;if(MEM32(clone+0x14)!=17)failed=9;
    MEM32(event)=0x3D5B48;AREA_VCALL(clone,24,event);
    if(MEM32(clone+0x14)!=17)failed=10;
    MEM32(event)=SET_NODE_TABLE;

    /* Native 38210/ED6E0 lookup and eligibility dispatch, followed by the
     * event's no-restart gate. Capture only bank lookup at its virtual boundary. */
    MEM32(actor+0x2DC)=MEM32(sponsor+0x2DC)=container;
    MEM32(container)=methods;MEM32(methods+0x14)=dispatch_fixture.token;
    MEM32(node)=methods+0x100;MEM32(methods+0x108)=dispatch_fixture.token+4;
    dispatch_fixture.atom=MEM32(event+0x10);dispatch_fixture.node=node;
    MEM32(actor+0x2F4)=node;MEM32(event+0x14)=UINT32_MAX;MEM8(event+0x1C)=0;
    dispatch_fixture.failed=0;unsigned before=dispatch_fixture.lookups;
    AREA_VCALL(event,4,actor,sponsor);
    if(dispatch_fixture.lookups!=before+1||dispatch_fixture.failed)failed=11;
    MEM8(event+0x1C)=1;dispatch_fixture.actor=sponsor;
    AREA_VCALL(event,4,actor,sponsor);
    if(dispatch_fixture.lookups!=before+2||dispatch_fixture.failed)failed=12;
    dispatch_fixture.actor=actor;MEM8(event+0x1C)=0;
    MEM32(event+0x14)=17;MEM16(actor+0x39C)=17;AREA_VCALL(event,4,actor,sponsor);
    if(dispatch_fixture.lookups!=before+3)failed=13;
    dispatch_fixture.node=0;AREA_VCALL(event,4,actor,sponsor);
    AREA_VCALL(event,4,0,sponsor);AREA_VCALL(event,4,actor,0);
    if(dispatch_fixture.lookups!=before+4||dispatch_fixture.failed||g_esp!=sp||g_fp_top!=fp)failed=14;
    strcpy((char*)XBOX_PTR(text),"ce_set_combat_node");set_node_construct(event,text);
    if(MEM32(event+0x10)||MEM32(event+0x14)!=UINT32_MAX||(MEM8(event+0x1C)&7))failed=15;
    if(failed)fprintf(stderr,"FAIL set-combat-node contracts %d\n",failed);
    else puts("PASS set-combat-node factory/parser, native name lookup, sponsor selection, skeleton animation policy, clone/reuse and no-restart gates; active transitions not exercised");
    return failed;
}
