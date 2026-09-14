#include "save_name.h"
#include <stdio.h>
#include <string.h>
int main(void) {
    const char *names[]={"Game 2 00:15 - Central Park","Spiel 2 00:15 - Central Park","Partie 12 100:15 - Park","Options","Game 0 00:15 - Park","Game 2 bad","Game 2 00:99 - Park"};
    const unsigned expected[]={5,6,7,0,0,0,0};
    for(unsigned i=0;i<sizeof(expected)/sizeof(expected[0]);++i)
        if(xml1_save_slot_offset((const unsigned char*)names[i],(unsigned)strlen(names[i])+1)!=expected[i])return 1;
    if(xml1_save_slot_offset((const unsigned char*)names[0],4))return 2;
    puts("Save-name language and bounds checks passed");return 0;
}
