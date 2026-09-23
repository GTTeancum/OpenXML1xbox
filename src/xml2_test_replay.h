#pragma once
#include "xml2_test_pad.h"
#include <stdlib.h>
/* Diagnostic input only, inside the XML2 process. No OS input APIs.
 * Schedule format: native_frame ID ACTION[+ACTION...] FRAME_COUNT.
 * Replay ends at EOF and hands control back to the existing command file.
 * XML2_TEST_REPLAY_CANCEL optionally names a marker file. Creating it abandons
 * the remaining schedule permanently for this process. This lets the harness
 * recover from game-state divergence without delivering stale movement. */
static int xml2_test_replay(unsigned frame,char *out,size_t capacity) {
    struct ReplayRow { unsigned frame;char command[128]; };
    static struct ReplayRow rows[1024];
    static unsigned count,index;
    static int initialized;
    static const char *cancel_path;
    if(!initialized) {
        initialized=1;
        const char *path=getenv("XML2_TEST_REPLAY");
        if(!path||!*path)return -1;
        cancel_path=getenv("XML2_TEST_REPLAY_CANCEL");
        FILE *file=fopen(path,"rb");
        if(!file){fprintf(stderr,"[FATAL INPUT] cannot open replay\n");_exit(4);}
        char line[256];unsigned previous_id=0,previous_end=0;
        while(fgets(line,sizeof(line),file)) {
            unsigned at=0,id=0,duration=0;int offset=0;XBOX_GAMEPAD pad;
            if(count==1024||sscanf(line,"%u %n",&at,&offset)!=1||offset<=0||
               strlen(line+offset)>=sizeof(rows[0].command)||
               xml2_test_pad_command(line+offset,&id,&pad,&duration)!=1||
               !at||at<previous_end||id<=previous_id||at>0xffffffffu-duration) {
                fclose(file);fprintf(stderr,"[FATAL INPUT] invalid replay row %u\n",count+1);_exit(4);
            }
            rows[count].frame=at;strcpy(rows[count].command,line+offset);++count;
            previous_id=id;previous_end=at+duration;
        }
        if(ferror(file)){fclose(file);fprintf(stderr,"[FATAL INPUT] replay read failed\n");_exit(4);}
        fclose(file);
        fprintf(stderr,"[INPUT REPLAY] loaded %u commands\n",count);
    }
    if(index==count)return -1;
    if(cancel_path&&*cancel_path) {
        FILE *cancel=fopen(cancel_path,"rb");
        if(cancel) {
            fclose(cancel);
            fprintf(stderr,"[INPUT REPLAY] cancelled at frame %u; discarded %u commands\n",frame,count-index);
            index=count;return -1;
        }
    }
    if(frame<rows[index].frame)return 0;
    if(frame!=rows[index].frame||strlen(rows[index].command)+1>capacity) {
        fprintf(stderr,"[FATAL INPUT] replay missed frame %u at %u\n",rows[index].frame,frame);_exit(4);
    }
    strcpy(out,rows[index++].command);return 1;
}
