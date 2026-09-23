#include "raven_harming_settings.h"
uint8_t raven_xml1_harming_trait_flags(uint8_t previous,uint8_t definition_flags) {
    return (uint8_t)((previous&0xFEu)|((definition_flags&2u)?0u:1u));
}
static int equal(const char *a,const char *b) {
    for(;;++a,++b) {
        unsigned x=(unsigned char)*a,y=(unsigned char)*b;
        if(x>='A'&&x<='Z')x+=32;
        if(y>='A'&&y<='Z')y+=32;
        if(x!=y)return 0;
        if(!x)return 1;
    }
}
void raven_harming_settings_init(raven_harming_settings *s) {
    /* Original 158F90: APS3, tint enabled, trait scaling disabled. */
    s->attacks_per_second=3;s->flags=1;
}
int raven_harming_settings_parse(raven_harming_settings *s,const char *key,const char *value) {
    if(!s||!key||!value)return 0;
    if(equal(key,"attacks_per_second")) {
        while(*value==' '||(*value>='\t'&&*value<='\r'))++value;
        int negative=*value=='-';
        if(*value=='-'||*value=='+')++value;
        uint32_t result=0;
        while(*value>='0'&&*value<='9')result=result*10+(unsigned)(*value++-'0');
        /* Native atoi narrowed to AL; zero retains its 0.33f timer policy. */
        s->attacks_per_second=(uint8_t)(negative?0u-result:result);
        return 1;
    }
    unsigned bit=equal(key,"use_tint")?1u:equal(key,"use_trait_scale")?2u:0;
    if(!bit)return 0;
    s->flags=(uint8_t)((s->flags&~bit)|(equal(value,"true")?bit:0));
    return 1;
}
