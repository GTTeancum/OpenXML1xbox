#include "raven_script_strings.h"
#include <stdio.h>
#include <string.h>

static unsigned bounded_length(const char *text) {
    unsigned n=0;
    if(!text)return 128;
    while(n<128 && text[n])++n;
    return n;
}
int raven_script_concat(char output[128], const char *left, const char *right) {
    unsigned a=bounded_length(left), b=bounded_length(right);
    output[0]=0;
    /* XML2 000E9920: strlen(left)+strlen(right) must be strictly below 128. */
    if(a+b>=128)return 0;
    memcpy(output,left,a);memcpy(output+a,right,b+1);
    return 1;
}
int raven_script_concat_int(char output[128], const char *left, int32_t right) {
    unsigned a=bounded_length(left);
    output[0]=0;
    /* XML2 000E99B0 reserves sign+10 decimal digits before formatting. */
    if(a+11>=128)return 0;
    memcpy(output,left,a);
    return snprintf(output+a,128-a,"%d",(int)right)>0;
}
int raven_script_vector_int(char output[128], int32_t x, int32_t y, int32_t z) {
    /* XML2 000E9A30 uses the verified literal at 0049FF64: "%i %i %i".
     * Three signed 32-bit values and separators fit within 36 bytes. */
    int count=snprintf(output,128,"%i %i %i",(int)x,(int)y,(int)z);
    return count>0&&count<128;
}
