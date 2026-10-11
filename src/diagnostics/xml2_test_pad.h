#pragma once
#include "xinput_xbox.h"
#include <stdio.h>
#include <string.h>
/* Process-local diagnostic protocol: ID ACTION[+ACTION...] [FRAME_COUNT].
 * No host input APIs. Every command has a bounded lifetime; missing/incomplete
 * files do not keep the last input held beyond its existing release frame. */
static int xml2_test_pad_command(const char *line,unsigned *id,XBOX_GAMEPAD *pad,unsigned *duration) {
    char actions[64],extra;
    unsigned frames=4,sequence=0;
    if(!strchr(line,'\n'))return 0;
    int fields=sscanf(line,"%u %63s %u %c",&sequence,actions,&frames,&extra);
    if(fields<2||fields>3||!sequence||!frames||frames>600)return -1;
    /* Reject a nonnumeric third field rather than treating it as omitted. */
    if(fields==2) {
        char ignored[64],tail;
        if(sscanf(line,"%u %63s %c",&sequence,ignored,&tail)!=2)return -1;
    }
    memset(pad,0,sizeof(*pad));
    char *action=actions;
    for(;;) {
        char *next=strchr(action,'+');if(next)*next=0;
        if(!strcmp(action,"a"))pad->bAnalogButtons[XBOX_BUTTON_A]=255;
        else if(!strcmp(action,"b"))pad->bAnalogButtons[XBOX_BUTTON_B]=255;
        else if(!strcmp(action,"x"))pad->bAnalogButtons[XBOX_BUTTON_X]=255;
        else if(!strcmp(action,"y"))pad->bAnalogButtons[XBOX_BUTTON_Y]=255;
        else if(!strcmp(action,"lt"))pad->bAnalogButtons[XBOX_BUTTON_LTRIGGER]=255;
        else if(!strcmp(action,"rt"))pad->bAnalogButtons[XBOX_BUTTON_RTRIGGER]=255;
        else if(!strcmp(action,"black"))pad->bAnalogButtons[XBOX_BUTTON_BLACK]=255;
        else if(!strcmp(action,"white"))pad->bAnalogButtons[XBOX_BUTTON_WHITE]=255;
        else if(!strcmp(action,"start"))pad->wButtons|=XBOX_GAMEPAD_START;
        else if(!strcmp(action,"back"))pad->wButtons|=XBOX_GAMEPAD_BACK;
        else if(!strcmp(action,"up"))pad->wButtons|=XBOX_GAMEPAD_DPAD_UP;
        else if(!strcmp(action,"down"))pad->wButtons|=XBOX_GAMEPAD_DPAD_DOWN;
        else if(!strcmp(action,"dleft"))pad->wButtons|=XBOX_GAMEPAD_DPAD_LEFT;
        else if(!strcmp(action,"dright"))pad->wButtons|=XBOX_GAMEPAD_DPAD_RIGHT;
        else if(!strcmp(action,"left"))pad->sThumbLX=-32767;
        else if(!strcmp(action,"right"))pad->sThumbLX=32767;
        else if(!strcmp(action,"move-up"))pad->sThumbLY=32767;
        else if(!strcmp(action,"move-down"))pad->sThumbLY=-32767;
        else if(strcmp(action,"release")||next||action!=actions)return -1;
        if(!next)break;
        action=next+1;
    }
    *id=sequence;*duration=frames;return 1;
}
