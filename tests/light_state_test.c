#include "light_state.h"
#include <stdio.h>
#define REQUIRE(x) do {if(!(x)) {fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);return 1;}}while(0)
int main(void) {
    xml1_light_state state={0}; uint32_t values[32][26], mask;
    for(unsigned i=0;i<200;++i) {
        xml1_light *light=xml1_light_find(&state,i*1000u);
        REQUIRE(light); light->value[1]=i;
    }
    xml1_light *a=xml1_light_find(&state,199000); a->enabled=1;
    REQUIRE(xml1_light_snapshot(&state,values,&mask) && mask==1 && values[0][1]==199);
    a->enabled=0; xml1_light_find(&state,33000)->enabled=1;
    REQUIRE(xml1_light_snapshot(&state,values,&mask) && mask==1 && values[0][1]==33);
    a->enabled=1;
    REQUIRE(xml1_light_snapshot(&state,values,&mask) && mask==3 && values[1][1]==199);
    xml1_light *last=xml1_light_find(&state,UINT32_MAX);
    REQUIRE(last && last->value[0]==3 && last->value[18]==0x3F800000 && last->value[4]==0);
    for(unsigned i=0;i<33;++i) xml1_light_find(&state,i*1000u)->enabled=1;
    REQUIRE(!xml1_light_snapshot(&state,values,&mask));
    free(state.entries);
    puts("PASS: sparse light IDs retain definitions, remap active slots, create defaults, and reject active overflow");
    return 0;
}
