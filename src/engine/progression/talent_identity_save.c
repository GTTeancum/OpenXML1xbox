#include "engine/progression/talent_identity_save.h"
#include <string.h>

static size_t bounded_length(const char *s,size_t capacity) {
    size_t n=0;while(n<capacity&&s[n])++n;return n;
}
static int validate(const xml1_saved_talent_identity *entry) {
    const size_t n=bounded_length(entry->name,sizeof(entry->name));
    const size_t s=bounded_length(entry->source,sizeof(entry->source));
    const size_t q=bounded_length(entry->selector,sizeof(entry->selector));
    return entry->id&&entry->id!=255&&n&&n<32&&s&&s<32&&q&&q<64;
}
static int duplicate(const xml1_saved_talent_identity *entries,unsigned n) {
    for(unsigned i=0;i<n;++i)
        if(entries[i].id==entries[n].id||!strcmp(entries[i].name,entries[n].name))return 1;
    return 0;
}
size_t xml1_talent_identities_write(void *output,size_t capacity,
    const xml1_saved_talent_identity *entries,unsigned count) {
    if(!output||(!entries&&count)||count>XML1_SAVED_TALENT_LIMIT)return 0;
    size_t bytes=8;
    for(unsigned i=0;i<count;++i) {
        if(!validate(entries+i)||duplicate(entries,i))return 0;
        bytes+=4+strlen(entries[i].name)+strlen(entries[i].source)+strlen(entries[i].selector);
    }
    if(bytes>capacity)return 0;
    uint8_t *p=(uint8_t*)output;
    memcpy(p,"TLID",4);p[4]=1;p[5]=0;p[6]=(uint8_t)count;p[7]=0;p+=8;
    for(unsigned i=0;i<count;++i) {
        const char *strings[]={entries[i].name,entries[i].source,entries[i].selector};
        *p++=entries[i].id;
        for(unsigned j=0;j<3;++j)p[j]=(uint8_t)strlen(strings[j]);
        p+=3;
        for(unsigned j=0;j<3;++j){size_t length=strlen(strings[j]);memcpy(p,strings[j],length);p+=length;}
    }
    return bytes;
}
size_t xml1_talent_identities_read(const void *input,size_t size,
    xml1_saved_talent_identity *output,unsigned capacity,unsigned *count) {
    if(!input||!count||size<8)return 0;
    const uint8_t *p=(const uint8_t*)input;
    if(memcmp(p,"TLID",4)||p[4]!=1||p[5]||p[7])return 0;
    const unsigned n=p[6];
    if(n>XML1_SAVED_TALENT_LIMIT||n>capacity||(!output&&n))return 0;
    xml1_saved_talent_identity temporary[XML1_SAVED_TALENT_LIMIT];
    memset(temporary,0,sizeof(temporary));size_t at=8;
    for(unsigned i=0;i<n;++i) {
        if(size-at<4)return 0;
        const unsigned lengths[]={p[at+1],p[at+2],p[at+3]};
        temporary[i].id=p[at];at+=4;
        char *strings[]={temporary[i].name,temporary[i].source,temporary[i].selector};
        const unsigned limits[]={32,32,64};
        for(unsigned j=0;j<3;++j) {
            if(!lengths[j]||lengths[j]>=limits[j]||lengths[j]>size-at||memchr(p+at,0,lengths[j]))return 0;
            memcpy(strings[j],p+at,lengths[j]);at+=lengths[j];
        }
        if(!validate(temporary+i)||duplicate(temporary,i))return 0;
    }
    if(n)memcpy(output,temporary,n*sizeof(*output));*count=n;return at;
}
