#include "raven_xml2_powerup_view.h"
#include <string.h>
#include <math.h>
static int word(raven_guest_read read,void *context,uint32_t at,uint32_t *out) {
    unsigned char bytes[4];
    if(at>UINT32_MAX-3u)return 0;
    if(!read(context,at,bytes,4))return 0;
    *out=(uint32_t)bytes[0]|((uint32_t)bytes[1]<<8)|((uint32_t)bytes[2]<<16)|((uint32_t)bytes[3]<<24);
    return 1;
}
static unsigned fold_ascii(unsigned c){return c>='A'&&c<='Z'?c+32:c;}
static raven_lookup value_endpoint(raven_guest_read read,void *context,uint32_t tree,uint32_t key,float *out) {
    uint32_t node;unsigned char visited[400]={0};
    if(!word(read,context,tree+4,&node))return RAVEN_INVALID;
    while(node!=0x3fffffffu) {
        uint32_t node_key,bits;
        if(node>=400||visited[node])return RAVEN_INVALID;
        visited[node]=1;
        uint32_t base=tree+node*16;
        if(!word(read,context,base+0x18,&node_key))return RAVEN_INVALID;
        if(node_key==key) {
            if(!word(read,context,tree+0x1f98+node*4,&bits))return RAVEN_INVALID;
            memcpy(out,&bits,4);return RAVEN_FOUND;
        }
        // E4D60 compares packed keys UNSIGNED, including negative contexts.
        if(!word(read,context,base+(key<node_key?0x10:0x14),&node))return RAVEN_INVALID;
    }
    return RAVEN_MISSING;
}
raven_lookup raven_xml2_talent_value_read(raven_guest_read read,void *context,
    uint32_t provider,int16_t actor_context,uint16_t native_id,float output[2]) {
    uint32_t vtable;
    if(!read||!output||!provider||provider>UINT32_MAX-0x52b8u||!native_id||(native_id&0x8000))return RAVEN_INVALID;
    if(!word(read,context,provider,&vtable)||vtable!=0x49e410)return RAVEN_INVALID;
    // D0A70 sign-extends stats +28E BEFORE the add and shift. Unsigned
    // arithmetic preserves x86 low-dword wrap without signed C overflow.
    uint32_t key=(((uint32_t)native_id<<15)+(uint32_t)(int32_t)actor_context)*2u;
    float pair[2];
    raven_lookup status=value_endpoint(read,context,provider+0x2cdc,key,&pair[0]);
    if(status!=RAVEN_FOUND)return status;
    pair[1]=pair[0];
    status=value_endpoint(read,context,provider+0x2cdc,key+1,&pair[1]);
    if(status==RAVEN_INVALID)return status;
    // D0950 copies lower first, replacing upper only on a successful hit.
    for(unsigned i=0;i<2;++i)if(!(pair[i]>=-1.0e29f)||!isfinite(pair[i]))pair[i]=0;
    output[0]=pair[0];output[1]=pair[1];return RAVEN_FOUND;
}
raven_lookup raven_xml2_talent_value_id(raven_guest_read read,void *context,
    uint32_t provider,const char *name,uint16_t *id) {
    uint32_t vtable,node;unsigned length=0;unsigned char visited[300]={0};
    if(!read||!provider||!name||!id||provider>UINT32_MAX-0x2cd8u)return RAVEN_INVALID;
    while(length<20&&name[length]) {
        if((unsigned char)name[length]<33||(unsigned char)name[length]>=127)return RAVEN_INVALID;
        ++length;
    }
    if(!length||length>=20||name[0]=='%')return RAVEN_INVALID;
    if(!word(read,context,provider,&vtable)||vtable!=0x49e410||
       !word(read,context,provider+8,&node))return RAVEN_INVALID;
    // D1060 caps registration at 300 entries. D0BF0 traverses the
    // case-insensitive tree at provider+4, with 32-byte node stride.
    while(node!=0x3fffffffu) {
        unsigned char key[20];
        if(node>=300||visited[node])return RAVEN_INVALID;
        visited[node]=1;
        const uint32_t base=provider+4+node*32;
        if(!read(context,base+0x18,key,20))return RAVEN_INVALID;
        unsigned key_length=0;
        while(key_length<20&&key[key_length]) {
            if(key[key_length]<33||key[key_length]>=127)return RAVEN_INVALID;
            ++key_length;
        }
        if(!key_length||key_length>=20)return RAVEN_INVALID;
        int comparison=0;
        for(unsigned i=0;i<=length||i<=key_length;++i) {
            unsigned left=i<length?fold_ascii((unsigned char)name[i]):0;
            unsigned right=i<key_length?fold_ascii(key[i]):0;
            if(left!=right){comparison=left<right?-1:1;break;}
            if(!left)break;
        }
        if(!comparison) {
            unsigned char value[2];
            if(!read(context,provider+0x2a80+node*2,value,2))return RAVEN_INVALID;
            uint16_t native_id=(uint16_t)((unsigned)value[0]|((unsigned)value[1]<<8));
            if(!native_id)return RAVEN_MISSING;
            if(native_id&0x8000)return RAVEN_INVALID;
            *id=native_id;return RAVEN_FOUND;
        }
        if(!word(read,context,base+(comparison<0?0x10:0x14),&node))return RAVEN_INVALID;
    }
    return RAVEN_MISSING;
}
static raven_lookup inline_object(raven_guest_read read,void *context,uint32_t pool,uint32_t handle,
    uint32_t expected,uint32_t count,uint32_t stride,uint32_t mask_offset,
    uint32_t generation_offset,uint32_t occupied_offset,uint32_t *address) {
    uint32_t vtable,mask,generation,occupied;
    if(!read)return RAVEN_INVALID;
    if(!pool)return RAVEN_MISSING;
    if(pool>UINT32_MAX-mask_offset-4u||!word(read,context,pool,&vtable)||vtable!=expected)return RAVEN_INVALID;
    if(!word(read,context,pool+mask_offset,&mask))return RAVEN_INVALID;
    const uint32_t slot=handle&mask;
    if(slot>=count)return RAVEN_MISSING;
    if(!word(read,context,pool+generation_offset+slot*4,&generation))return RAVEN_INVALID;
    if(generation!=handle)return RAVEN_MISSING;
    if(!word(read,context,pool+occupied_offset+(slot>>5)*4,&occupied))return RAVEN_INVALID;
    if(!(occupied&(1u<<(slot&31))))return RAVEN_MISSING;
    *address=pool+4+slot*stride;return RAVEN_FOUND;
}
raven_lookup raven_xml2_powerup_definition_read(raven_guest_read read,void *context,
    uint32_t pool,uint32_t handle,raven_xml2_powerup_definition *output) {
    raven_xml2_powerup_definition result;uint32_t vtable,getter;
    if(!output)return RAVEN_INVALID;
    // CPowerupPool 157F80/157FD0: 256 inline objects, 0x88 bytes each.
    raven_lookup status=inline_object(read,context,pool,handle,0x4a7d6c,256,0x88,
        0x9058,0x8c58,0x8c34,&result.address);
    if(status!=RAVEN_FOUND)return status;
    if(!word(read,context,result.address,&vtable)||!vtable||vtable>UINT32_MAX-0x7cu||
       !word(read,context,vtable+0x78,&getter)||getter!=0x147c20)return RAVEN_INVALID;
    // Virtual +78 returns the head affecter handle pair at +C/+10.
    if(!word(read,context,result.address+0xc,&result.affecter_handle)||
       !word(read,context,result.address+0x10,&result.affecter_pool))return RAVEN_INVALID;
    *output=result;return RAVEN_FOUND;
}
raven_lookup raven_xml2_affecter_node_read(raven_guest_read read,void *context,
    uint32_t pool,uint32_t handle,raven_xml2_affecter_node *output) {
    raven_xml2_affecter_node result={0};uint32_t vtable,bits;
    unsigned char fields[3],flag;
    if(!output)return RAVEN_INVALID;
    // CAffecter pool 144890/1448E0: 384 inline 0x24-byte objects.
    raven_lookup status=inline_object(read,context,pool,handle,0x4a6a58,384,0x24,
        0x4278,0x3c78,0x3c44,&result.address);
    if(status!=RAVEN_FOUND)return status;
    if(!word(read,context,result.address,&vtable)||vtable!=0x4a6a6c||
       !read(context,result.address+0x10,fields,3)||!read(context,result.address+0xc,&flag,1))return RAVEN_INVALID;
    result.attribute=fields[0];result.mode=fields[1];result.sharing=fields[2]&3;
    result.is_reference=flag&1;
    if(!word(read,context,result.address+4,&bits))return RAVEN_INVALID;
    if(result.is_reference)result.native_value_id=(uint16_t)bits;
    else {
        memcpy(&result.literal[0],&bits,4);
        if(!word(read,context,result.address+8,&bits))return RAVEN_INVALID;
        memcpy(&result.literal[1],&bits,4);
    }
    if(!word(read,context,result.address+0x14,&result.scope_handle)||
       !word(read,context,result.address+0x18,&result.scope_pool)||
       !word(read,context,result.address+0x1c,&result.next_handle)||
       !word(read,context,result.address+0x20,&result.next_pool))return RAVEN_INVALID;
    // native_value_id belongs to the guest registry, NOT TalentBindings IDs.
    *output=result;return RAVEN_FOUND;
}
raven_lookup raven_xml2_powerup_scope_read(raven_guest_read read,void *context,
    uint32_t pool,uint32_t handle,raven_xml2_powerup_scope *output) {
    raven_xml2_powerup_scope result={0};uint32_t vtable,packed;
    if(!output)return RAVEN_INVALID;
    // Provider methods add four before accessing the inline pool metadata.
    raven_lookup status=inline_object(read,context,pool,handle,0x4a9b94,128,0x1c,
        0x1238,0x1038,0x1024,&result.address);
    if(status!=RAVEN_FOUND)return status;
    if(!word(read,context,result.address,&vtable)||vtable!=0x4a9bac||
       !word(read,context,result.address+4,&result.character_symbol)||
       !word(read,context,result.address+8,&result.node_symbol)||
       !word(read,context,result.address+0xc,&result.damage_mask)||
       !word(read,context,result.address+0x10,&result.attack_mask)||
       !word(read,context,result.address+0x14,&packed)||
       !read(context,result.address+0x18,&result.flags,1))return RAVEN_INVALID;
    result.race=(uint16_t)packed;result.talent=(uint16_t)(packed>>16);
    *output=result;return RAVEN_FOUND;
}
raven_lookup raven_xml2_powerup_scope_matches(raven_guest_read read,void *context,
    const raven_xml2_powerup_scope *scope,uint32_t query,
    raven_xml2_scope_actor_match race_match,raven_xml2_scope_actor_match character_match) {
    uint32_t damage,attack,node,actor;unsigned char talent[2],flags;
    if(!scope)return RAVEN_INVALID;
    // 159F50's unrestricted flag returns before touching the query.
    if(scope->flags&4)return RAVEN_FOUND;
    if(!read||!query||query>UINT32_MAX-0x3cu)return RAVEN_INVALID;
    if(!word(read,context,query+0x10,&damage)||!word(read,context,query+0xc,&attack)||
       !word(read,context,query+0x20,&node)||!read(context,query+0x2c,talent,2))return RAVEN_INVALID;
    int matches=(!scope->damage_mask||(scope->damage_mask&damage))&&
        (!scope->attack_mask||(scope->attack_mask&(1u<<(attack&31))))&&
        (!(scope->flags&0x20)||scope->node_symbol==node)&&
        (scope->talent==0xffff||scope->talent==((unsigned)talent[0]|((unsigned)talent[1]<<8)));
    if(scope->flags&3) {
        if(!read(context,query+0x35,&flags,1))return RAVEN_INVALID;
        if((scope->flags&1)&&!(flags&4))matches=0;
        if((scope->flags&2)&&(flags&4))matches=0;
    }
    // Native ANDs every predicate; a failed damage test does not bypass actor
    // selectors. Keep failures observable instead of silently treating them as false.
    if(scope->flags&0x18) {
        if(!word(read,context,query+0x38,&actor))return RAVEN_INVALID;
        if(scope->flags&0x10) {
            if(!race_match)return RAVEN_INVALID;
            raven_lookup status=race_match(context,actor,scope->race);
            if(status==RAVEN_INVALID)return status;
            if(status!=RAVEN_FOUND)matches=0;
        }
        if(scope->flags&8) {
            if(!character_match)return RAVEN_INVALID;
            raven_lookup status=character_match(context,actor,scope->character_symbol);
            if(status==RAVEN_INVALID)return status;
            if(status!=RAVEN_FOUND)matches=0;
        }
    }
    return matches?RAVEN_FOUND:RAVEN_MISSING;
}
raven_lookup raven_xml2_attached_powerup_node(raven_guest_read read,void *context,
    uint32_t pool,uint32_t handle,raven_xml2_powerup_node *output) {
    uint32_t vtable,mask,generation,occupied;
    if(!read||!output)return RAVEN_INVALID;
    if(!pool)return RAVEN_MISSING;
    if(pool>UINT32_MAX-0x383cu||!word(read,context,pool,&vtable)||vtable!=0x4a6be8u)return RAVEN_INVALID;
    if(!word(read,context,pool+0x3838,&mask))return RAVEN_INVALID;
    const uint32_t slot=handle&mask;
    if(slot>=128)return RAVEN_MISSING;
    if(!word(read,context,pool+0x3638+slot*4,&generation))return RAVEN_INVALID;
    if(generation!=handle)return RAVEN_MISSING;
    if(!word(read,context,pool+0x3624+(slot>>5)*4,&occupied))return RAVEN_INVALID;
    if(!(occupied&(1u<<(slot&31))))return RAVEN_MISSING;
    raven_xml2_powerup_node result;
    result.address=pool+4+slot*0x68;
    if(!word(read,context,result.address,&vtable)||vtable!=0x4a6af4u)return RAVEN_INVALID;
    // +4/+8 is virtual +4C's next handle/pool pair. +20/+24 is
    // virtual +64's definition pair; retain both identities, not a raw cast.
    if(!word(read,context,result.address+4,&result.next_handle)||
       !word(read,context,result.address+8,&result.next_pool)||
       !word(read,context,result.address+0x20,&result.definition_handle)||
       !word(read,context,result.address+0x24,&result.definition_pool))return RAVEN_INVALID;
    *output=result;return RAVEN_FOUND;
}
raven_lookup raven_xml2_entity_handle(raven_guest_read read,void *context,
    uint32_t manager,uint32_t handle,uint32_t *entity) {
    uint32_t vtable,mask,generation,occupied,pointer;
    if(!read||!entity||!manager||manager>UINT32_MAX-0xc40u)return RAVEN_INVALID;
    if(!word(read,context,manager,&vtable)||vtable!=0x0049EF3Cu)return RAVEN_INVALID;
    if(!handle)return RAVEN_MISSING; // D5E10's explicit null handle branch.
    // D5DB0 adjusts this by four before D5DC0. Offsets below include it.
    if(!word(read,context,manager+0xc3c,&mask))return RAVEN_INVALID;
    const uint32_t slot=handle&mask;
    if(slot>=256)return RAVEN_MISSING;
    if(!word(read,context,manager+0x83c+slot*4,&generation))return RAVEN_INVALID;
    if(generation!=handle)return RAVEN_MISSING;
    if(!word(read,context,manager+0x818+(slot>>5)*4,&occupied))return RAVEN_INVALID;
    if(!(occupied&(1u<<(slot&31))))return RAVEN_MISSING;
    if(!word(read,context,manager+4+slot*4,&pointer))return RAVEN_INVALID;
    *entity=pointer;
    return RAVEN_FOUND;
}
static raven_lookup actor_member(raven_guest_read read,void *context,uint32_t entity,uint32_t type) {
    uint32_t vtable,getter,info,bitmap;
    unsigned char code[6];
    if(!word(read,context,entity,&vtable)||!vtable||
       !word(read,context,vtable,&getter)||!getter||getter>UINT32_MAX-6u||
       !read(context,getter,code,6))return RAVEN_INVALID;
    // CActor::classInfo at 30DD0 is MOV EAX,58BDC8 / RET. Derived class
    // accessors use their own immediate; check code, not a roster/vtable list.
    if(code[0]!=0xb8||code[5]!=0xc3)return RAVEN_INVALID;
    info=(uint32_t)code[1]|((uint32_t)code[2]<<8)|((uint32_t)code[3]<<16)|((uint32_t)code[4]<<24);
    const uint32_t offset=0x14u+((type+0x24u)>>5)*4u;
    if(!info||info>UINT32_MAX-offset||!word(read,context,info+offset,&bitmap))return RAVEN_INVALID;
    return (bitmap&(1u<<((type+0x24u)&31)))?RAVEN_FOUND:RAVEN_MISSING;
}
raven_lookup raven_xml2_scope_actor(raven_guest_read read,void *context,uint32_t manager,
    uint32_t handle,uint32_t source_type,uint32_t actor_type,uint32_t *actor) {
    uint32_t entity;unsigned char flags;
    if(!read||!actor||source_type>UINT32_MAX-0x24u||actor_type>UINT32_MAX-0x24u)return RAVEN_INVALID;
    raven_lookup status=raven_xml2_entity_handle(read,context,manager,handle,&entity);
    if(status!=RAVEN_FOUND)return status;
    if(!entity)return RAVEN_MISSING;
    if(entity>UINT32_MAX-0x259u)return RAVEN_INVALID;
    status=actor_member(read,context,entity,source_type);
    if(status!=RAVEN_FOUND)return status;
    if(!read(context,entity+0x258,&flags,1))return RAVEN_INVALID;
    if(!(flags&1)) {
        // Unlike 14F940, this second cast uses the other global type index.
        status=actor_member(read,context,entity,actor_type);
        if(status!=RAVEN_FOUND)return status;
    }
    *actor=entity;return RAVEN_FOUND;
}
raven_lookup raven_xml2_scope_race(raven_guest_read read,void *context,uint32_t manager,
    uint32_t handle,uint32_t source_type,uint32_t actor_type,uint16_t race) {
    uint32_t actor,stats;unsigned char bits[2];
    raven_lookup status=raven_xml2_scope_actor(read,context,manager,handle,source_type,actor_type,&actor);
    if(status!=RAVEN_FOUND)return status;
    if(actor>UINT32_MAX-0x360u||!word(read,context,actor+0x35c,&stats)||!stats||
       stats>UINT32_MAX-0x4cau||!read(context,stats+0x4c8,bits,2))return RAVEN_INVALID;
    // C6E30 shifts a dword using CL, then ANDs only DX with the race word.
    // Indices 16..31 therefore cannot match; 32 wraps back to bit zero.
    uint32_t mask=(uint32_t)bits[0]|((uint32_t)bits[1]<<8);
    return (mask&(1u<<(race&31)))?RAVEN_FOUND:RAVEN_MISSING;
}
raven_lookup raven_xml2_scope_character(raven_guest_read read,void *context,uint32_t manager,
    uint32_t handle,uint32_t source_type,uint32_t actor_type,
    uint32_t string_pool,uint32_t locale_state,uint32_t symbol) {
    uint32_t actor,stats,text=0,offset;
    raven_lookup status=raven_xml2_scope_actor(read,context,manager,handle,source_type,actor_type,&actor);
    if(status!=RAVEN_FOUND)return status;
    if(locale_state)return RAVEN_INVALID;
    if(actor>UINT32_MAX-0x360u||!word(read,context,actor+0x35c,&stats)||!stats||
       stats>UINT32_MAX-0x150u)return RAVEN_INVALID;
    if(symbol) {
        // 209520 initializes 4096 offset entries. 15A120 ignores the high
        // byte of a nonzero symbol; symbol zero instead selects literal "".
        uint32_t index=symbol&0xffffffu;
        if(index>=4096||!string_pool||string_pool>UINT32_MAX-0x4008u||
           !word(read,context,string_pool+4+index*4,&offset)||
           offset>UINT32_MAX-string_pool-0x4008u)return RAVEN_INVALID;
        text=string_pool+0x4008+offset;
    }
    uint32_t name=stats+0x150;
    // Bound malformed strings without reading host pointers. C-locale native
    // 3DCF90 folds ASCII uppercase only; high bytes compare unchanged.
    for(unsigned i=0;i<4096;++i) {
        unsigned char a,b=0;
        if(name>UINT32_MAX-i||!read(context,name+i,&a,1))return RAVEN_INVALID;
        if(symbol&&(text>UINT32_MAX-i||!read(context,text+i,&b,1)))return RAVEN_INVALID;
        if(fold_ascii(a)!=fold_ascii(b))return RAVEN_MISSING;
        if(!a)return RAVEN_FOUND;
    }
    return RAVEN_INVALID;
}
typedef struct scope_guest {
    raven_guest_read read;void *context;const raven_xml2_scope_runtime *runtime;
} scope_guest;
static int scope_read(void *context,uint32_t at,void *out,size_t n) {
    scope_guest *g=(scope_guest*)context;return g->read(g->context,at,out,n);
}
static raven_lookup scope_race(void *context,uint32_t handle,uint32_t race) {
    scope_guest *g=(scope_guest*)context;const raven_xml2_scope_runtime *r=g->runtime;
    return raven_xml2_scope_race(g->read,g->context,r->manager,handle,r->source_type,r->actor_type,(uint16_t)race);
}
static raven_lookup scope_character(void *context,uint32_t handle,uint32_t symbol) {
    scope_guest *g=(scope_guest*)context;const raven_xml2_scope_runtime *r=g->runtime;
    return raven_xml2_scope_character(g->read,g->context,r->manager,handle,r->source_type,r->actor_type,
        r->string_pool,r->locale_state,symbol);
}
raven_lookup raven_xml2_powerup_scope_guest_matches(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,const raven_xml2_powerup_scope *scope,uint32_t query) {
    if(!read||!runtime)return RAVEN_INVALID;
    scope_guest g={read,context,runtime};
    return raven_xml2_powerup_scope_matches(scope_read,&g,scope,query,scope_race,scope_character);
}
raven_lookup raven_xml2_affecter_eligible(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,const raven_xml2_affecter_node *affecter,
    uint32_t query,int sharing_enabled,int owner_matches) {
    raven_xml2_powerup_scope scope;
    if(!affecter)return RAVEN_INVALID;
    raven_lookup status=raven_xml2_powerup_scope_read(read,context,
        affecter->scope_pool,affecter->scope_handle,&scope);
    if(status==RAVEN_INVALID)return status;
    if(status==RAVEN_MISSING||(scope.flags&4))return RAVEN_FOUND;
    if(sharing_enabled&&((affecter->sharing==1&&!owner_matches)||
       (affecter->sharing==2&&owner_matches)))return RAVEN_MISSING;
    status=raven_xml2_powerup_scope_guest_matches(read,context,runtime,&scope,query);
    if(status==RAVEN_INVALID)return status;
    if(affecter->attribute==8)return status==RAVEN_FOUND?RAVEN_MISSING:RAVEN_FOUND;
    return status;
}
raven_lookup raven_xml2_affecter_value(raven_guest_read read,void *context,
    uint32_t provider,uint32_t actor_type,uint32_t actor,
    const raven_xml2_affecter_node *affecter,float inherited,float output[2]) {
    if(!affecter||!output)return RAVEN_INVALID;
    // Nonzero includes unordered (NaN), matching 1446C0's FUCOM branch.
    // -0 follows evaluation. Do not sanitize inherited or literal floats.
    if(inherited!=0) {output[0]=inherited;output[1]=inherited;return RAVEN_FOUND;}
    if(!affecter->is_reference) {
        output[0]=affecter->literal[0];output[1]=affecter->literal[1];return RAVEN_FOUND;
    }
    int16_t id;
    raven_lookup status=raven_xml2_affecter_context(read,context,actor,actor_type,&id);
    if(status==RAVEN_INVALID)return status;
    if(status==RAVEN_MISSING) {output[0]=0;output[1]=0;return RAVEN_FOUND;}
    return raven_xml2_talent_value_read(read,context,provider,id,affecter->native_value_id,output);
}
raven_lookup raven_xml2_affecter_evaluate(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,uint32_t provider,uint32_t actor,
    const raven_xml2_affecter_node *affecter,uint32_t query,
    int sharing_enabled,int owner_matches,float inherited,float output[2]) {
    if(!runtime||!output)return RAVEN_INVALID;
    raven_lookup status=raven_xml2_affecter_eligible(read,context,runtime,affecter,query,sharing_enabled,owner_matches);
    if(status!=RAVEN_FOUND)return status;
    return raven_xml2_affecter_value(read,context,provider,runtime->actor_type,actor,affecter,inherited,output);
}
raven_lookup raven_xml2_powerup_sharing(raven_guest_read read,void *context,
    uint32_t attached,int *sharing_enabled,int *owner_matches) {
    uint32_t vtable,pool,handle,getter,bits;unsigned char flags;
    raven_xml2_powerup_definition definition;float amount;
    if(!read||!sharing_enabled||!owner_matches||!attached||attached>UINT32_MAX-0x65u||
       !word(read,context,attached,&vtable)||vtable!=0x4a6af4||
       !read(context,attached+0x64,&flags,1)||!word(read,context,attached+0x20,&handle)||
       !word(read,context,attached+0x24,&pool))return RAVEN_INVALID;
    raven_lookup status=raven_xml2_powerup_definition_read(read,context,pool,handle,&definition);
    if(status==RAVEN_INVALID)return status;
    int enabled=0;
    if(status==RAVEN_FOUND) {
        if(!word(read,context,definition.address,&vtable)||vtable>UINT32_MAX-0xa4u||
           !word(read,context,vtable+0xa0,&getter)||getter!=0x146d20||
           !word(read,context,definition.address+0x3c,&bits))return RAVEN_INVALID;
        memcpy(&amount,&bits,4);enabled=amount>0; // unordered/zero/negative all false
    }
    *sharing_enabled=enabled;*owner_matches=!(flags&1);return RAVEN_FOUND;
}
raven_lookup raven_xml2_query_affecter_eligible(raven_guest_read read,void *context,
    const raven_xml2_scope_runtime *runtime,uint32_t attached,
    const raven_xml2_affecter_node *affecter,uint32_t query) {
    if(!affecter)return RAVEN_INVALID;
    if(!query) {
        raven_xml2_powerup_scope scope;
        raven_lookup status=raven_xml2_powerup_scope_read(read,context,affecter->scope_pool,affecter->scope_handle,&scope);
        if(status==RAVEN_INVALID)return status;
        return status==RAVEN_FOUND&&(scope.flags&0x20)?RAVEN_MISSING:RAVEN_FOUND;
    }
    int enabled,owner;
    raven_lookup status=raven_xml2_powerup_sharing(read,context,attached,&enabled,&owner);
    if(status!=RAVEN_FOUND)return status;
    return raven_xml2_affecter_eligible(read,context,runtime,affecter,query,enabled,owner);
}
raven_lookup raven_xml2_entity_actor(raven_guest_read read,void *context,
    uint32_t entity,uint32_t actor_type,uint32_t *actor) {
    unsigned char flags;
    if(!read||!actor||actor_type>UINT32_MAX-0x24u)return RAVEN_INVALID;
    if(!entity)return RAVEN_MISSING;
    if(entity>UINT32_MAX-0x259u)return RAVEN_INVALID;
    raven_lookup member=actor_member(read,context,entity,actor_type);
    if(member!=RAVEN_FOUND)return member;
    if(!read(context,entity+0x258,&flags,1))return RAVEN_INVALID;
    // 14F940 tests the class bitmap BEFORE the actor flag. The flag alone
    // is not sufficient proof of type; without it native repeats the cast.
    if(!(flags&1)) {
        member=actor_member(read,context,entity,actor_type);
        if(member!=RAVEN_FOUND)return member;
    }
    *actor=entity;
    return RAVEN_FOUND;
}
raven_lookup raven_xml2_affecter_context(raven_guest_read read,void *context,
    uint32_t actor,uint32_t affecter_actor_type,int16_t *talent_context) {
    unsigned char flags,bytes[2];uint32_t stats;
    if(!read||!talent_context||affecter_actor_type>UINT32_MAX-0x24u)return RAVEN_INVALID;
    if(!actor)return RAVEN_MISSING;
    if(actor>UINT32_MAX-0x360u||!read(context,actor+0x258,&flags,1))return RAVEN_INVALID;
    // Unlike 14F940, 1446C0 accepts the flag before querying the bitmap.
    if(!(flags&1)) {
        raven_lookup member=actor_member(read,context,actor,affecter_actor_type);
        if(member!=RAVEN_FOUND)return member;
    }
    if(!word(read,context,actor+0x35c,&stats))return RAVEN_INVALID;
    if(!stats)return RAVEN_MISSING;
    if(stats>UINT32_MAX-0x290u||!read(context,stats+0x28e,bytes,2))return RAVEN_INVALID;
    const uint32_t raw=(uint32_t)bytes[0]|((uint32_t)bytes[1]<<8);
    *talent_context=(int16_t)(raw<32768u?(int32_t)raw:(int32_t)raw-65536);
    return RAVEN_FOUND;
}
raven_lookup raven_xml2_attached_powerup_context(raven_guest_read read,
    raven_handle_valid valid,raven_handle_actor resolve,void *context,
    uint32_t powerup,uint32_t queried_actor,uint32_t sentinel,
    raven_xml2_powerup_context *output) {
    uint32_t vtable,primary,secondary,bits;
    if(!read||!valid||!resolve||!output||!powerup||powerup>UINT32_MAX-0x40u)return RAVEN_INVALID;
    if(!word(read,context,powerup,&vtable)||vtable!=0x004A6AF4u)return RAVEN_INVALID;
    if(!word(read,context,powerup+0x18,&primary))return RAVEN_INVALID;
    // Virtual +48 (146F00): sentinel is eligible even when null/invalid.
    int primary_valid=0;
    if(primary) {primary_valid=valid(context,primary);if(primary_valid<0)return RAVEN_INVALID;}
    if(primary!=sentinel&&!primary_valid)return RAVEN_MISSING;
    raven_xml2_powerup_context result={queried_actor,0};
    // 15E100 first valid handle wins; failure of its actor cast does not
    // permit another fallback. Re-read on every query, never cache handles.
    uint32_t selected=primary_valid?primary:0;
    if(!selected) {
        if(!word(read,context,powerup+0x1c,&secondary))return RAVEN_INVALID;
        if(secondary) {
            int secondary_valid=valid(context,secondary);
            if(secondary_valid<0)return RAVEN_INVALID;
            if(secondary_valid)selected=secondary;
        }
    }
    if(selected) {
        uint32_t actor=0;
        raven_lookup status=resolve(context,selected,&actor);
        if(status==RAVEN_INVALID)return RAVEN_INVALID;
        result.actor=status==RAVEN_FOUND?actor:0;
    }
    // Virtual +6C (146D20) supplies this float to CAffecter evaluation.
    if(!word(read,context,powerup+0x3c,&bits))return RAVEN_INVALID;
    memcpy(&result.inherited,&bits,4);
    *output=result;
    return RAVEN_FOUND;
}
typedef struct guest_context {
    raven_guest_read read;
    void *context;
    uint32_t manager,actor_type;
} guest_context;
static int guest_read(void *opaque,uint32_t at,void *out,size_t n) {
    guest_context *g=(guest_context*)opaque;return g->read(g->context,at,out,n);
}
static int guest_valid(void *opaque,uint32_t handle) {
    guest_context *g=(guest_context*)opaque;uint32_t entity;
    return raven_xml2_entity_handle(g->read,g->context,g->manager,handle,&entity);
}
static raven_lookup guest_actor(void *opaque,uint32_t handle,uint32_t *actor) {
    guest_context *g=(guest_context*)opaque;uint32_t entity;
    raven_lookup found=raven_xml2_entity_handle(g->read,g->context,g->manager,handle,&entity);
    if(found!=RAVEN_FOUND)return found;
    return raven_xml2_entity_actor(g->read,g->context,entity,g->actor_type,actor);
}
raven_lookup raven_xml2_powerup_guest_context(raven_guest_read read,void *context,
    uint32_t manager,uint32_t actor_type,uint32_t sentinel,uint32_t powerup,
    uint32_t queried_actor,raven_xml2_powerup_context *output) {
    if(!read)return RAVEN_INVALID;
    guest_context guest={read,context,manager,actor_type};
    return raven_xml2_attached_powerup_context(guest_read,guest_valid,guest_actor,&guest,
        powerup,queried_actor,sentinel,output);
}
