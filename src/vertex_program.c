#include "vertex_program.h"
#include "nv2a_vsh_emulator.h"
#include <string.h>
#include <math.h>

void xml1_vertex_program_destroy(xml1_vertex_program *program) {
    nv2a_vsh_program_destroy(&program->decoded);memset(program,0,sizeof(*program));
}
int xml1_vertex_program_decode(xml1_vertex_program *out,const uint32_t *commands,size_t words) {
    uint32_t code[136*4];size_t count=0;
    memset(out,0,sizeof(*out));
    for(size_t at=0;at<words;) {
        uint32_t command=commands[at++];size_t n=(command>>18)&0x7ff;
        if((command&0xe003ffffu)!=0xb00||!n||n%4||n>32||n>words-at||n>136*4-count)return 0;
        memcpy(code+count,commands+at,n*4);at+=n;count+=n;
    }
    if(!count||nv2a_vsh_parse_program(&out->decoded,code,(unsigned)count/4)!=NV2AVPR_SUCCESS)return 0;
    out->steps=(unsigned)count/4;
    for(unsigned i=0;i<out->steps;++i) {
        Nv2aVshStep *step=&out->decoded.steps[i];
        /* ARL has an implicit A0.x destination on NV2A. The pinned decoder
         * represents that with mask zero, while its executor applies masks
         * literally. Normalize at this boundary or every bone reads C[0]. */
        if(step->mac.opcode==NV2AOP_ARL)step->mac.outputs[0].writemask=NV2AWM_X;
        if(step->is_final!=(i+1==out->steps))goto invalid;
        const Nv2aVshOperation *ops[2]={&step->mac,&step->ilu};
        for(unsigned j=0;j<2;++j) {
            const Nv2aVshOperation *op=ops[j];if(!op->opcode)continue;
            for(unsigned k=0;k<3;++k) {
                const Nv2aVshInput *in=&op->inputs[k];
                if(in->type==NV2ART_INPUT) {if(in->index>=16)goto invalid;out->inputs|=1u<<in->index;}
                else if(in->type==NV2ART_TEMPORARY) {if(in->index>12)goto invalid;}
                else if(in->type==NV2ART_CONTEXT) {if(in->index>=192)goto invalid;}
                else if(in->type!=NV2ART_NONE)goto invalid;
            }
            for(unsigned k=0;k<2;++k) {
                const Nv2aVshOutput *dest=&op->outputs[k];
                if(dest->type==NV2ART_TEMPORARY) {if(dest->index>=12)goto invalid;}
                else if(dest->type==NV2ART_OUTPUT) {
                    if(dest->index>=13||dest->index==1||dest->index==2||dest->index==7||dest->index==8)goto invalid;
                } else if(dest->type!=NV2ART_NONE&&dest->type!=NV2ART_ADDRESS)goto invalid;
            }
        }
    }
    return 1;
invalid:xml1_vertex_program_destroy(out);return 0;
}
int xml1_vertex_program_run(const xml1_vertex_program *program,const float inputs[16][4],
    const float constants[192][4],const float offset[4],const float scale[4],xml1_program_vertex *out) {
    float outputs[13][4]={{0}},temps[12][4]={{0}},address[4]={0};
    for(unsigned i=0;i<13;++i)outputs[i][3]=1;
    /* The decoder rejects constant writes, so the immutable per-draw snapshot
     * can be shared by vertices without copying its 3 KiB for every invocation. */
    Nv2aVshExecutionState state={(float*)inputs,(float*)outputs,(float*)temps,(float*)constants,address,0};
    for(unsigned i=0;i<program->steps;++i) {
        const Nv2aVshStep *step=&program->decoded.steps[i];
        const Nv2aVshOperation *ops[2]={&step->mac,&step->ilu};
        for(unsigned j=0;j<2;++j)if(ops[j]->opcode)for(unsigned k=0;k<3;++k) {
            const Nv2aVshInput *in=&ops[j]->inputs[k];
            if(in->type==NV2ART_CONTEXT&&in->is_relative) {
                double index=in->index+(double)address[0];
                if(!isfinite(index)||index<0||index>=192)return 0;
            }
        }
        nv2a_vsh_emu_apply(&state,step);
    }
    /* NV2A shaders emit window coordinates; Windows VS1.1 emits homogeneous
     * clip coordinates. Undo the native viewport transform, including its
     * Y inversion and 24-bit depth scale, before Windows applies its viewport.
     * Keep W: XYZRHW would lose near-plane clipping for crossing triangles. */
    for(unsigned i=0;i<3;++i) {
        if(!isfinite(scale[i])||scale[i]==0)return 0;
        out->position[i]=(outputs[0][i]-offset[i])/scale[i]*outputs[0][3];
        if(!isfinite(out->position[i]))return 0;
    }
    out->position[3]=outputs[0][3];if(!isfinite(out->position[3]))return 0;
    memcpy(out->diffuse,outputs[3],16);memcpy(out->specular,outputs[4],16);
    memcpy(out->texture,outputs[9],64);out->fog=outputs[5][0];out->point=outputs[6][0];
    return 1;
}
