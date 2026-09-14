#ifndef XML1_SAVE_NAME_H
#define XML1_SAVE_NAME_H
/* Xbox slot names use "<localized prefix> <slot> <hours>:<minutes> - <map>".
   Parse the stored name, since the current language can differ from its writer. */
static unsigned xml1_save_slot_offset(const unsigned char *name, unsigned size) {
    unsigned length=0;
    while(length<size && name[length])++length;
    if(length==size)return 0;
    for(unsigned i=1;i<length;++i) {
        if(name[i-1]!=' ' || name[i]<'1' || name[i]>'9')continue;
        unsigned j=i;
        while(j<length && name[j]>='0' && name[j]<='9')++j;
        if(j>=length || name[j++]!=' ')continue;
        unsigned hours=j;
        while(j<length && name[j]>='0' && name[j]<='9')++j;
        if(j==hours || j+3>=length || name[j++]!=':')continue;
        if(name[j]<'0'||name[j]>'5'||name[j+1]<'0'||name[j+1]>'9'||name[j+2]!=' ')continue;
        return i;
    }
    return 0;
}
#endif
