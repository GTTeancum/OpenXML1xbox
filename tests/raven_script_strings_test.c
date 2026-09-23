#include "raven_script_strings.h"
#include <stdio.h>
#include <string.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"Failed line %d: %s\n",__LINE__,#x);return 1;}}while(0)
int main(void) {
    char out[128],long_text[129];
    CHECK(raven_script_vector_int(out,1,-2,3)&&!strcmp(out,"1 -2 3"));
    CHECK(raven_script_vector_int(out,0,0,0)&&!strcmp(out,"0 0 0"));
    CHECK(raven_script_vector_int(out,INT32_MIN,INT32_MAX,INT32_MIN)&&
          !strcmp(out,"-2147483648 2147483647 -2147483648"));
    CHECK(raven_script_concat(out,"hero/","sunfire") && !strcmp(out,"hero/sunfire"));
    CHECK(raven_script_concat(out,"","") && !out[0]);
    CHECK(raven_script_concat_int(out,"skin_",INT32_MIN) && !strcmp(out,"skin_-2147483648"));
    CHECK(raven_script_concat_int(out,"",INT32_MAX) && !strcmp(out,"2147483647"));
    memset(long_text,'x',128);long_text[128]=0;
    CHECK(!raven_script_concat(out,long_text,""));
    long_text[127]=0;
    CHECK(raven_script_concat(out,long_text,"") && strlen(out)==127);
    CHECK(!raven_script_concat(out,long_text,"x"));
    long_text[117]=0;
    CHECK(!raven_script_concat_int(out,long_text,0));
    long_text[116]=0;
    CHECK(raven_script_concat_int(out,long_text,0) && strlen(out)==117);
    puts("PASS XML2 script concatenation semantics and boundaries");return 0;
}
