#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "raven_operand_trace.h"
#include "raven_xml1_talent_view.h"
#include "raven_actor_talent_probe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int trace_enabled(void) {
    static int enabled=-1;
    if(enabled<0) {const char *p=getenv("XML1_TRACE_RAVEN_OPERANDS");enabled=p&&!strcmp(p,"1");}
    return enabled;
}
static int read_native(void *context,uint32_t address,void *out,size_t size) {
    (void)context;
    /* Diagnostic only: live native objects in XML1's low guest RAM. The
     * portable view accepts a reader, not an unchecked host pointer. */
    if(address<0x10000u||(uint64_t)address+size>0x08000000ull)return 0;
    memcpy(out,(const void*)XBOX_PTR(address),size);return 1;
}
static uint32_t blast_area_event,blast_area_owner;
static uint32_t blast_attack_event,blast_attack_owner;
static uint32_t blast_queued_actors[64];
static unsigned blast_queued_count;
void xml1_raven_trace_blast_area_begin(uint32_t event,uint32_t owner) {
    if(!trace_enabled()||!getenv("XML1_TRACE_BLAST"))return;
    blast_area_event=event;blast_area_owner=owner;
}
void xml1_raven_trace_blast_area_candidate(uint32_t source,uint32_t candidate,uint32_t center) {
    static unsigned count;
    float candidate_xyz[3]={0},center_xyz[3]={0};
    if(!blast_area_event||count>=512)return;
    ++count;
    if(candidate)read_native(NULL,candidate+0x20,candidate_xyz,sizeof(candidate_xyz));
    if(center)read_native(NULL,center,center_xyz,sizeof(center_xyz));
    fprintf(stderr,"[RAVEN BLAST AREA] event=%08X owner=%08X source=%08X candidate=%08X candidate_xyz=%.3f,%.3f,%.3f center_xyz=%.3f,%.3f,%.3f\n",
        blast_area_event,blast_area_owner,source,candidate,
        candidate_xyz[0],candidate_xyz[1],candidate_xyz[2],
        center_xyz[0],center_xyz[1],center_xyz[2]);
}
void xml1_raven_trace_blast_area_call(uint32_t candidate,uint32_t argument,uint32_t scalar) {
    static unsigned count;
    uint32_t vtable=0,method=0;
    unsigned char bytes[16]={0};
    if(!blast_area_event||count>=128)return;
    ++count;
    if(candidate&&read_native(NULL,candidate,&vtable,4)&&vtable)
        read_native(NULL,vtable+0x194,&method,4);
    if(argument)read_native(NULL,argument,bytes,sizeof(bytes));
    fprintf(stderr,"[RAVEN BLAST AREA CALL] event=%08X candidate=%08X method=%08X argument=%08X scalar_bits=%08X argument_bytes=",
        blast_area_event,candidate,method,argument,scalar);
    for(unsigned i=0;i<sizeof(bytes);++i)fprintf(stderr,"%02X",bytes[i]);
    fputc('\n',stderr);
}
void xml1_raven_trace_blast_area_result(uint32_t candidate,uint32_t argument,int stage) {
    static unsigned count;
    uint32_t pending=0,global=0;
    int16_t amount=0;
    if(!blast_area_event||count>=128)return;
    ++count;
    if(stage==1&&candidate&&blast_queued_count<64) {
        unsigned i;
        for(i=0;i<blast_queued_count;++i)
            if(blast_queued_actors[i]==candidate)break;
        if(i==blast_queued_count)blast_queued_actors[blast_queued_count++]=candidate;
    }
    if(candidate)read_native(NULL,candidate+0x2A4,&pending,4);
    if(argument)read_native(NULL,argument+8,&amount,2);
    read_native(NULL,0x4C0A48,&global,4);
    fprintf(stderr,"[RAVEN BLAST AREA RESULT] event=%08X stage=%d candidate=%08X argument=%08X amount=%d pending=%08X global=%08X\n",
        blast_area_event,stage,candidate,argument,(int)amount,pending,global);
}
void xml1_raven_trace_blast_delivery(uint32_t actor,uint32_t timer,int stage) {
    static unsigned count;
    uint32_t pending=0;
    float health=0,timer_value=0;
    unsigned i;
    if(!trace_enabled()||!getenv("XML1_TRACE_BLAST")||count>=128)return;
    for(i=0;i<blast_queued_count;++i)
        if(blast_queued_actors[i]==actor)break;
    if(i==blast_queued_count)return;
    ++count;
    read_native(NULL,actor+0x2A4,&pending,4);
    read_native(NULL,actor+0x240,&health,4);
    if(timer)read_native(NULL,timer+4,&timer_value,4);
    fprintf(stderr,"[RAVEN BLAST DELIVERY] stage=%d actor=%08X pending=%08X health=%.3f timer=%08X timer_value=%.6f\n",
        stage,actor,pending,health,timer,timer_value);
}
void xml1_raven_trace_blast_area_end(void) {
    blast_area_event=0;blast_area_owner=0;
}
void xml1_raven_trace_blast_attack_begin(uint32_t event,uint32_t owner) {
    if(!trace_enabled()||!getenv("XML1_TRACE_BLAST"))return;
    blast_attack_event=event;blast_attack_owner=owner;
}
void xml1_raven_trace_blast_attack_dispatch(uint32_t actor,uint32_t attack_id,uint32_t manager) {
    static unsigned count;
    uint32_t vtable=0,target=0;
    /* Historical diagnostic name. This is the post-radius actor-manager
     * call, not the deferred health-delivery path. Do not treat its ID gate
     * as proof of damage or recipient eligibility. */
    if(!blast_attack_event||count>=128)return;
    ++count;
    if(manager&&read_native(NULL,manager,&vtable,4)&&vtable)
        read_native(NULL,vtable+0x30,&target,4);
    fprintf(stderr,"[RAVEN BLAST ATTACK] event=%08X owner=%08X actor=%08X attack_id=%08X manager=%08X target=%08X\n",
        blast_attack_event,blast_attack_owner,actor,attack_id,manager,target);
}
void xml1_raven_trace_blast_attack_gate(uint32_t attack_id,uint32_t result) {
    static unsigned count;
    if(!blast_attack_event||count>=128)return;
    ++count;
    fprintf(stderr,"[RAVEN BLAST ATTACK GATE] event=%08X owner=%08X attack_id=%08X accepted=%u result=%08X\n",
        blast_attack_event,blast_attack_owner,attack_id,result&255,result);
}
void xml1_raven_trace_blast_attack_end(void) {
    blast_attack_event=0;blast_attack_owner=0;
}
void xml1_raven_trace_blast(uint32_t stage,uint32_t event,uint32_t owner,uint32_t candidate,uint32_t position,uint32_t selected) {
    static unsigned count;
    float owner_xyz[3]={0}, candidate_xyz[3]={0}, aim_xyz[3]={0};
    float radius=0;
    uint32_t definition=0,field14=0;
    int16_t field24=0;
    if(!trace_enabled()||!getenv("XML1_TRACE_BLAST")||count>=256)return;
    ++count;
    if(owner)read_native(NULL,owner+0x20,owner_xyz,sizeof(owner_xyz));
    if(candidate)read_native(NULL,candidate+0x20,candidate_xyz,sizeof(candidate_xyz));
    if(position)read_native(NULL,position,aim_xyz,sizeof(aim_xyz));
    if(event)read_native(NULL,event+0x18,&radius,sizeof(radius));
    if(event&&read_native(NULL,event+0x14,&definition,sizeof(definition))&&definition) {
        read_native(NULL,definition+0x24,&field24,sizeof(field24));
        read_native(NULL,definition+0x14,&field14,sizeof(field14));
    }
    /* Observe the original XML1 enemy iterator and final aim point. This
     * trace never substitutes a target or changes its combat path. */
    fprintf(stderr,"[RAVEN BLAST] stage=%u event=%08X owner=%08X candidate=%08X enemy_index=%d selected=%u radius=%.3f definition=%08X field24=%d field14=%08X owner_xyz=%.3f,%.3f,%.3f candidate_xyz=%.3f,%.3f,%.3f aim_xyz=%.3f,%.3f,%.3f\n",
        stage,event,owner,candidate,event?(int)SMEM16(event+0x20):-1,selected,
        radius,definition,(int)field24,field14,
        owner_xyz[0],owner_xyz[1],owner_xyz[2],
        candidate_xyz[0],candidate_xyz[1],candidate_xyz[2],
        aim_xyz[0],aim_xyz[1],aim_xyz[2]);
}
void xml1_raven_trace_damage(uint32_t stage,uint32_t event,uint32_t actor,uint32_t record) {
    static unsigned counts[4];
    unsigned char bytes[16];
    if(!trace_enabled()||stage>=4||counts[stage]>=128)return;
    if(!read_native(NULL,record,bytes,sizeof(bytes)))return;
    ++counts[stage];
    /* Read-only correlation across record construction, modifiers and the
     * attack-manager entry. Pointer identity is evidence, not ownership:
     * these records may live on a reused native stack. Never retain bindings
     * on their addresses without tracing their complete lifetime. */
    fprintf(stderr,"[RAVEN DAMAGE RECORD] stage=%u event=%08X actor=%08X record=%08X damage=%d bytes=",
        stage,event,actor,record,(int)(int16_t)(bytes[8]|((unsigned)bytes[9]<<8)));
    for(unsigned i=0;i<sizeof(bytes);++i)fprintf(stderr,"%02X",bytes[i]);
    fprintf(stderr," victim_tags=%u,%u\n",MEM8(record+0x55),MEM8(record+0x56));
    if(stage==0&&getenv("XML1_TRACE_ATTACK_POSE")) {
        float pose[6];
        // XML1 setOrigin/setAngles own adjacent position/angle vectors;
        // diagnostics borrow them only at an actual attack construction.
        if(read_native(NULL,actor+0x20,pose,sizeof(pose)))
            fprintf(stderr,"[RAVEN ATTACK POSE] actor=%08X xyz=%g,%g,%g angles=%g,%g,%g\n",
                actor,pose[0],pose[1],pose[2],pose[3],pose[4],pose[5]);
    }
}
void xml1_raven_trace_hit(uint32_t stage,uint32_t source,uint32_t recipient,uint32_t record,uint32_t copy,uint32_t before_bits) {
    static unsigned counts[2];
    static unsigned limit;
    uint32_t vtable=0,target=0;
    int16_t damage=0,copied_damage=0;
    float before=0,current=0;
    if(!trace_enabled()||stage>=2)return;
    if(!limit) {
        const char *setting=getenv("XML1_TRACE_DAMAGE_HIT_LIMIT");
        char *end=NULL;
        unsigned long requested=setting?strtoul(setting,&end,10):0;
        /* Large area attacks also hit scenery. Keep the default bounded,
         * but let a private diagnostic run retain later enemy hits rather
         * than silently exhausting its evidence on world objects. */
        limit=setting&&end!=setting&&!*end&&requested>0&&requested<=100000
            ?(unsigned)requested:128;
    }
    if(counts[stage]>=limit)return;
    if(!read_native(NULL,recipient+0x240,&current,sizeof(current))||
       !read_native(NULL,recipient,&vtable,sizeof(vtable))||
       !read_native(NULL,vtable+0xA8,&target,sizeof(target))||
       !read_native(NULL,record+8,&damage,sizeof(damage))||
       !read_native(NULL,copy+8,&copied_damage,sizeof(copied_damage)))return;
    ++counts[stage];
    memcpy(&before,&before_bits,sizeof(before));
    /* 0005C954 copies the per-hit record into this stack frame before the
     * recipient's +A8 callback. 0005C96D saves +240, and 0005C9A4 compares
     * it after that callback. Observe both copies and the actual target;
     * never infer record ownership or health loss from attack input alone. */
    fprintf(stderr,"[RAVEN DAMAGE HIT] stage=%u source=%08X recipient=%08X record=%08X copy=%08X target=%08X damage=%d copied_damage=%d before=%.9g current=%.9g victim_tags=%u,%u copied_tags=%u,%u\n",
        stage,source,recipient,record,copy,target,(int)damage,(int)copied_damage,
        (double)before,(double)current,MEM8(record+0x55),MEM8(record+0x56),MEM8(copy+0x55),MEM8(copy+0x56));
}
void xml1_raven_trace_hit_gate(uint32_t recipient,uint32_t record) {
    static unsigned count;
    uint32_t attack=0,previous=0;int16_t damage=0;
    if(!trace_enabled()||!getenv("XML1_TRACE_HIT_GATE")||count>=4096)return;
    if(!read_native(NULL,recipient+0x204,&previous,4)||
       !read_native(NULL,record+0x44,&attack,4)||
       !read_native(NULL,record+8,&damage,2))return;
    ++count;
    /* Native 5C698..5C6A9 rejects a repeated nonzero attack ID before
     * invoking the recipient hit callback. Observe; never bypass it. */
    fprintf(stderr,"[RAVEN HIT GATE] recipient=%08X record=%08X damage=%d attack=%08X previous=%08X duplicate=%d\n",
        recipient,record,(int)damage,attack,previous,attack!=0&&attack==previous);
}
void xml1_raven_trace_copy(uint32_t destination,uint32_t source,int attack) {
    static unsigned count;
    if(!trace_enabled()||count++>=4000||!destination||!source)return;
    /* CFC80 reaches these boundaries only after successful independent
     * action/attack RTTI checks. Observe the exact adjusted source pointer.
     * This hook makes no guest calls and changes no emulated registers. */
    fprintf(stderr,"[RAVEN EVENT COPY] field=%s source=%08X destination=%08X source_type=%08X destination_type=%08X",
        attack?"damage":"energy",source,destination,MEM32(source),MEM32(destination));
    if(attack)fprintf(stderr," source_data=%08X destination_data=%08X",MEM32(source+0x14),MEM32(destination+0x14));
    else fprintf(stderr," source_energy=%d",(int)SMEM16(source+0x10));
    fputc('\n',stderr);
}
void xml1_raven_trace_lifetime(uint32_t event,int kind) {
    static unsigned count;
    if(!trace_enabled()||count++>=12000||!event)return;
    /* Constructors run before initialization, so never read their old
     * vtable or members. Identity alone is enough to test hook coverage. */
    fprintf(stderr,"[RAVEN EVENT LIFETIME] event=%08X operation=%s class=%s\n",
        event,kind<2?"begin":"retire",kind==0||kind==2?"action":"attack");
}
static void text_at(uint32_t address,char text[128]) {
    unsigned i=0;
    if(address) for(;i<127;++i) {text[i]=(char)MEM8(address+i);if(!text[i])return;}
    text[i]=0;
}
void xml1_raven_trace_prototype(uint32_t manager,uint32_t name,uint32_t result,uint32_t caller) {
    static unsigned count;
    char text[128];
    if(!trace_enabled()||count>=4000)return;
    text_at(name,text);
    /* ECF70 returns a native prototype; no clone or operand is changed.
     * The sound lookup distinguishes skipped trigger ingestion from a
     * present trigger whose shared ce_sound prototype was unavailable. */
    if(_stricmp(text,"beam")&&_stricmp(text,"bishop_beam_fx")&&
       _stricmp(text,"fire1_dmg_lh")&&_stricmp(text,"sound")&&
       _stricmp(text,"gun_fire_rad_exp"))return;
    ++count;
    fprintf(stderr,"[RAVEN PROTOTYPE] manager=%08X name=%s result=%08X caller=%08X\n",
        manager,text,result,caller);
}
void xml1_raven_trace_prototype_slot(uint32_t manager,uint32_t name,uint32_t index,uint32_t caller) {
    static unsigned count;
    char label[128];
    uint32_t pool,handle,mask,slot,stored,bit;
    if(!trace_enabled()||count>=4000)return;
    text_at(name,label);
    if(_stricmp(label,"sound"))return;
    ++count;
    pool=manager+0x247C;
    handle=MEM32(manager+index*0x44+0xF70);
    mask=MEM32(pool+0xD00C);
    slot=handle&mask;
    stored=MEM32(pool+slot*4+0xC3DC);
    bit=MEM32(pool+(slot>>5)*4+0xC374)&(1u<<(slot&31));
    fprintf(stderr,"[RAVEN PROTOTYPE SLOT] manager=%08X name=%s index=%u handle=%08X mask=%08X slot=%u stored=%08X active=%u caller=%08X\n",
        manager,label,index,handle,mask,slot,stored,bit!=0,caller);
    xml1_raven_trace_prototype_map(manager,name,0,caller,1);
}
void xml1_raven_trace_prototype_map(uint32_t manager,uint32_t name,uint32_t copied,uint32_t caller,int found) {
    static unsigned count;
    char label[128],key[128],candidate[128],entry_one[128];
    unsigned i,matching=0,entry=0;
    if(!trace_enabled()||count>=1000)return;
    text_at(name,label);
    if(_stricmp(label,"sound"))return;
    ++count;
    if(copied)text_at(copied,key);else key[0]=0;
    for(i=0;i<89;++i) {
        text_at(manager+i*0x2C+0x18,candidate);
        if(!_stricmp(candidate,"sound")){++matching;entry=i;}
    }
    text_at(manager+0x44,entry_one);
    fprintf(stderr,"[RAVEN PROTOTYPE MAP] manager=%08X name=%s copied=%s root=%08X entries=%u entry1=%s map_sound_count=%u map_sound_index=%u caller=%08X found=%d\n",
        manager,label,key,MEM32(manager+4),MEM32(manager+8),entry_one,matching,entry,caller,found);
}
void xml1_raven_trace_parse(uint32_t event,uint32_t field,uint32_t value) {
    static unsigned count;
    char key[128],text[128];
    if(!trace_enabled()||count>=1000)return;
    text_at(field,key);
    if(_stricmp(key,"damage")&&_stricmp(key,"powerusage"))return;
    text_at(value,text);++count;
    fprintf(stderr,"[RAVEN OPERAND PARSE] event=%08X vtable=%08X field=%s value=%s\n",
            event,event?MEM32(event):0,key,text);
}
void xml1_raven_trace_apply(uint32_t event,uint32_t actor,int attack) {
    static unsigned count;
    if(!trace_enabled()||count>=400||!event||!actor)return;
    ++count;
    /* These reads are from the native CCEAction/CCEAtk call boundary, not
     * guessed members in a host replacement. Do not mutate shared event data
     * to resolve a per-actor talent. The trace establishes real call context. */
    fprintf(stderr,"[RAVEN OPERAND APPLY] kind=%s event=%08X vtable=%08X actor=%08X actor_vtable=%08X energy=%d",
            attack?"attack":"action",event,MEM32(event),actor,MEM32(actor),(int)SMEM16(event+0x10));
    if(attack) {
        uint32_t data=MEM32(event+0x14);
        fprintf(stderr," attack_data=%08X damage=%d,%d",data,data?(int)SMEM16(data):0,data?(int)SMEM16(data+2):0);
    }
    fputc('\n',stderr);
    if(attack) {
        /* Native 00046000 -> 000801F0 -> 00040DB0 reaches the keyed
         * rank map through actor+0x2D8, then component+4. Log the owner
         * alongside the getter trace; do not treat the attack component
         * at actor+0x2F4 as character stats. */
        uint32_t component=MEM32(actor+0x2D8);
        fprintf(stderr,"[RAVEN RANK OWNER] actor=%08X component=%08X stats=%08X\n",
                actor,component,component?component+4:0);
        raven_probe_actor_talent(read_native,NULL,MEM32(0x4D7300),actor);
    }
}
void xml1_raven_trace_rank(uint32_t stats,uint32_t key,uint32_t index) {
    static unsigned count;
    static struct {uint32_t stats,key,packed,index;} seen[512];
    unsigned i,id;
    uint32_t packed=0,entry=0;
    if(!trace_enabled()||count>=1000||!stats||!key)return;
    id=MEM8(key);
    if(index!=0x3FFFFFFFu) {
        entry=stats+0x30+index*4+0x168;
        packed=MEM8(entry)|((uint32_t)MEM8(entry+1)<<8)|((uint32_t)MEM8(entry+2)<<16);
    }
    /* UI requirement polling otherwise spends the entire log budget before
     * gameplay. Emit changes, retaining distinct actors and native key IDs. */
    for(i=0;i<512;++i) {
        if(seen[i].stats==stats&&seen[i].key==id) {
            if(seen[i].packed==packed&&seen[i].index==index)return;
            break;
        }
        if(!seen[i].stats)break;
    }
    if(i==512)i=count%512;
    seen[i].stats=stats;seen[i].key=id;seen[i].packed=packed;seen[i].index=index;
    ++count;
    {
        uint8_t rank=255;
        raven_lookup result=raven_xml1_talent_rank(read_native,NULL,stats,(uint8_t)id,&rank);
        int matches=index==0x3FFFFFFFu?result==RAVEN_MISSING:
            result==RAVEN_FOUND&&rank==(packed&15);
        fprintf(stderr,"[RAVEN RANK VIEW %s] stats=%08X key=%u rank=%u\n",matches?"PASS":"FAIL",stats,id,rank);
    }
    /* 000B3BE0 compares a single unsigned byte, not a string or hash.
     * The low nibble at +0x168 is the native getter result; the high
     * nibble has its own getter (00048270) and refund/reset consumers.
     * It cannot be borrowed to widen ranks without migrating those uses. */
    if(index==0x3FFFFFFFu) {
        fprintf(stderr,"[RAVEN RANK GET] stats=%08X key=%u missing=1\n",stats,(unsigned)MEM8(key));
    } else {
        fprintf(stderr,"[RAVEN RANK GET] stats=%08X key=%u index=%u packed=%02X,%02X,%02X rank=%u\n",
                stats,(unsigned)MEM8(key),index,(unsigned)MEM8(entry),
                (unsigned)MEM8(entry+1),(unsigned)MEM8(entry+2),(unsigned)(MEM8(entry)&15));
    }
}
void xml1_raven_trace_projectile(unsigned event,unsigned actor,unsigned manager) {
    static unsigned count;
    if(!trace_enabled()||count++>=128)return;
    uint32_t descriptor=MEM32(event+0x18);
    fprintf(stderr,"[RAVEN PROJECTILE] event=%08X actor=%08X descriptor=%08X count=%u spawn=%08X\n",
        event,actor,descriptor,descriptor?MEM8(descriptor+0x20):0,MEM32(MEM32(manager)+0x24));
}
void xml1_raven_trace_talent_name(uint32_t system,uint32_t name,unsigned expected) {
    static unsigned char seen[256];
    char text[128];uint8_t id=255;raven_lookup result;
    if(!trace_enabled()||expected>=256||seen[expected])return;
    text_at(name,text);
    result=raven_xml1_talent_id(read_native,NULL,system,text,&id);
    fprintf(stderr,"[RAVEN NAME VIEW %s] name=%s native=%u view=%u\n",
            result==RAVEN_FOUND&&id==expected?"PASS":"FAIL",text,expected,id);
    seen[expected]=1;
}
