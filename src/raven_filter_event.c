#include "raven_filter_event.h"
void raven_filter_event_init(raven_filter_event *event) {
    /* Original constructor10A0E0: no tags, danger255, any team, no filters. */
    event->pass_tag=event->fail_tag=event->flags=0;
    event->max_danger=255;event->team_filter=32;
}
uint8_t raven_filter_event_tag(const raven_filter_event *event,const raven_filter_target *target) {
    /* F6BD0 common predicate runs for both dispatch paths. Team IDs29/30
     * are XML2 semantic values supplied by the adapter, not XML1 class IDs. */
    int pass=(event->team_filter==32||event->team_filter==target->team)&&
        (!(event->flags&16)||!target->skirmish);
    if(target->character_path) {
        /* F6AB0: filteractor belongs to the non-character path only. */
        if(event->flags&8)pass=0;
        if((event->flags&1)&&target->is_boss)pass=0;
        if((event->flags&2)&&target->is_nonhumanoid)pass=0;
        /* F6B33's x87 comparison rejects strictly greater danger; equality
         * and unordered values pass this check. Do not use !(danger<=max). */
        if(target->danger>(float)event->max_danger)pass=0;
    } else if((event->flags&4)&&!target->is_actor)pass=0;
    return pass?event->pass_tag:event->fail_tag;
}

static int ascii_equal(const char *a,const char *b) {
    for(;;++a,++b) {
        unsigned x=(unsigned char)*a,y=(unsigned char)*b;
        if(x>='A'&&x<='Z')x+='a'-'A';
        if(y>='A'&&y<='Z')y+='a'-'A';
        if(x!=y)return 0;
        if(!x)return 1;
    }
}
static uint8_t decimal_byte(const char *value) {
    /* Original atoi result is narrowed to AL. Unsigned arithmetic preserves
     * that low byte without host signed-overflow or locale dependencies. */
    while(*value==' '||(*value>='\t'&&*value<='\r'))++value;
    int negative=*value=='-';
    if(*value=='-'||*value=='+')++value;
    uint32_t result=0;
    while(*value>='0'&&*value<='9')result=result*10+(unsigned)(*value++-'0');
    return (uint8_t)(negative?0u-result:result);
}
int raven_filter_event_parse(raven_filter_event *event,const char *key,const char *value) {
    /* XML2 F6860: return zero only for fields belonging to the native base
     * event parser. The adapter must delegate those; never swallow them. */
    static const char *const booleans[]={"noboss","filterhumanoid","filteractor","noactor"};
    for(unsigned i=0;i<4;++i)if(ascii_equal(key,booleans[i])) {
        unsigned mask=1u<<i;
        event->flags=(uint8_t)((event->flags&~mask)|(ascii_equal(value,"true")?mask:0));
        return 1;
    }
    if(ascii_equal(key,"passtag"))event->pass_tag=decimal_byte(value);
    else if(ascii_equal(key,"failtag"))event->fail_tag=decimal_byte(value);
    else if(ascii_equal(key,"maxdangerrating"))event->max_danger=decimal_byte(value);
    else if(ascii_equal(key,"team_filter")) {
        if(ascii_equal(value,"hero"))event->team_filter=29;
        else if(ascii_equal(value,"enemy"))event->team_filter=30;
        /* Unknown values are acknowledged and retain the previous team. */
    } else if(ascii_equal(key,"noskirmish")) {
        /* Presence sets the flag even for an explicit false value. */
        event->flags|=16;
    } else return 0;
    return 1;
}

void raven_filter_event_copy(raven_filter_event *destination,const raven_filter_event *source) {
    /* XML2 10A18C..10A1EB. Do not copy the whole object: owner, vtable and
     * reserved flag bits belong to the destination's native lifetime. */
    destination->pass_tag=source->pass_tag;
    destination->fail_tag=source->fail_tag;
    destination->max_danger=source->max_danger;
    destination->team_filter=source->team_filter;
    destination->flags=(uint8_t)((destination->flags&0xe0)|(source->flags&0x1f));
}

uint32_t raven_filter_event_xml1_team(uint32_t native_team) {
    /* XML1 26E60 returns neutral/hero/enemy/third team as 26/27/28/29;
     * XML2 294E0 uses 28/29/30/31. Both apply charm before returning.
     * Never read XML2's bit29..31 or charm bit3 from an XML1 entity. */
    return native_team+2;
}

int raven_character_filter_parse(volatile uint8_t *flags,const char *key,const char *value) {
    /* XML2 CA93A..CA97A: exact boolean spelling (case-insensitive), not atoi.
     * XML1's appended combat byte stores this at bit0 instead of XML2 +2AE/7.
     * Preserve other combat flags for independently ported properties. */
    if(!ascii_equal(key,"nonhumanoidskeleton"))return 0;
    *flags=(uint8_t)((*flags&~1u)|(ascii_equal(value,"true")?1u:0u));
    return 1;
}

int raven_filter_xml1_character(raven_guest_read read,void *context,uint32_t actor,raven_filter_target *target) {
    uint8_t pointer[4],flag;
    float danger;
    if(!read||!target||!actor||actor>UINT32_MAX-0x2dbu||
       !read(context,actor+0x2d8,pointer,4))return 0;
    uint32_t definition=(uint32_t)pointer[0]|((uint32_t)pointer[1]<<8)|
        ((uint32_t)pointer[2]<<16)|((uint32_t)pointer[3]<<24);
    /* Same actor definition pointer as native 801F0. Danger belongs to the
     * parsed CharacterDef, not the actor's current health or threat estimate.
     * +487 is the appended combat byte owned by character_limits.h. */
    if(!definition||definition>UINT32_MAX-0x487u||
       !read(context,definition+0x478,&danger,4)||
       !read(context,definition+0x487,&flag,1))return 0;
    target->danger=danger;
    target->is_nonhumanoid=!!(flag&1);
    return 1;
}

static int filter_word(raven_guest_read read,void *context,uint32_t address,uint32_t *value) {
    uint8_t b[4];
    if(!read(context,address,b,4))return 0;
    *value=(uint32_t)b[0]|((uint32_t)b[1]<<8)|((uint32_t)b[2]<<16)|((uint32_t)b[3]<<24);
    return 1;
}
int raven_filter_xml1_default_target(raven_guest_read read,void *context,uint32_t actor,raven_filter_target *target) {
    uint8_t initialized,multiplayer;
    uint32_t selected,handle;
    if(!read||!target||!actor||actor>UINT32_MAX-0x1fu)return 0;
    /* XML1 8A600 initializes CMultiplayer at 4A01A0, guarded by 4A01C8.
     * Its +54 virtual (8A320) reads instance+10 bit0. The event adapter must
     * perform native initialization first; a read-only view cannot do so. */
    if(!read(context,0x4a01c8,&initialized,1)||!(initialized&1)||
       !read(context,0x4a01b0,&multiplayer,1)||
       !filter_word(read,context,(multiplayer&1)?0x498d90:0x4858ac,&selected)||
       !filter_word(read,context,actor+0x1c,&handle))return 0;
    /* XML1 setDefaultTarget 9DAD0 -> 2F280 owns 4858AC. XML2 B4C60 ->
     * 2C380 owns 58BDFC. F6AB0 compares handles even for a null sentinel. */
    target->is_boss=handle==selected;
    return 1;
}
