#include "motionpath_name.h"
#include <assert.h>
#include <stdio.h>
int main(void) {
    char name[128]="haarp/int/camera";
    assert(xml1_motionpath_name(name,sizeof(name)));
    assert(!strcmp(name,"haarp/int/camera.igb"));
    assert(xml1_motionpath_name(name,sizeof(name)));
    assert(!strcmp(name,"haarp/int/camera.igb"));
    strcpy(name,"haarp/int/CAMERA.IGB");
    assert(xml1_motionpath_name(name,sizeof(name)));
    assert(!strcmp(name,"haarp/int/CAMERA.IGB"));
    memset(name,'x',123);name[123]=0;
    assert(xml1_motionpath_name(name,sizeof(name)) && strlen(name)==127);
    memset(name,'x',124);name[124]=0;
    assert(!xml1_motionpath_name(name,sizeof(name)) && name[124]==0);
    memset(name,'x',sizeof(name));
    assert(!xml1_motionpath_name(name,sizeof(name)));
    name[0]=0;assert(!xml1_motionpath_name(name,sizeof(name)));
    puts("PASS motionpath extension, legacy spelling and native buffer boundaries");
    return 0;
}
