#include "vertex_program.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#define CHECK(x) do {if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);return 1;}}while(0)
static Nv2aVshInput input(Nv2aVshRegisterType type,unsigned index) {
    Nv2aVshInput ret={0};ret.type=type;ret.index=index;
    for(unsigned i=0;i<4;++i)ret.swizzle[i]=(uint8_t)i;return ret;
}
int main(void) {
    float in[16][4]={{0}},constants[192][4]={{0}};
    float scale[4]={640,-360,16777215,0},offset[4]={640.53125f,360.53125f,0,0};
    /* A projected vertex passes through the full NV window-space epilogue.
     * Check the host wire keeps W rather than losing clipping with XYZRHW. */
    float clip[4]={-0.5f,0.25f,1.5f,2};
    for(unsigned i=0;i<3;++i)in[0][i]=clip[i]/clip[3]*scale[i]+offset[i];in[0][3]=clip[3];
    Nv2aVshStep step={0};step.is_final=1;step.mac.opcode=NV2AOP_MOV;
    step.mac.inputs[0]=input(NV2ART_INPUT,0);
    step.mac.outputs[0]=(Nv2aVshOutput){NV2ART_OUTPUT,0,NV2AWM_XYZW};
    xml1_vertex_program program={{&step},1,1};xml1_program_vertex out;
    CHECK(sizeof(out)==120);
    CHECK(xml1_vertex_program_run(&program,in,constants,offset,scale,&out));
    for(unsigned i=0;i<4;++i)CHECK(fabsf(out.position[i]-clip[i])<1e-6f);
    CHECK(out.diffuse[0]==0&&out.diffuse[3]==1&&out.texture[0][3]==1);
    // Missing/invalid perspective state must fail, never emit malformed vertices.
    scale[0]=0;CHECK(!xml1_vertex_program_run(&program,in,constants,offset,scale,&out));scale[0]=640;
    // Relative constant addressing is checked before calling the vendored CPU.
    Nv2aVshStep relative[2]={0};relative[0].mac.opcode=NV2AOP_ARL;
    relative[0].mac.inputs[0]=input(NV2ART_INPUT,1);
    relative[0].mac.outputs[0]=(Nv2aVshOutput){NV2ART_ADDRESS,0,NV2AWM_X};
    relative[1]=step;relative[1].mac.inputs[0]=input(NV2ART_CONTEXT,191);
    relative[1].mac.inputs[0].is_relative=1;
    program.decoded.steps=relative;program.steps=2;in[1][0]=3;
    CHECK(!xml1_vertex_program_run(&program,in,constants,offset,scale,&out));
    xml1_vertex_program decoded;
    // Synthesized NV program: ARL A0, v1.x; MOV oPos, c[102+A0].
    // Decode as well as execute: manually constructed operations miss the
    // decoder's implicit-address-write mask and hid the all-bone-zero bug.
    uint32_t address_program[]={0x200b00,
        0,(13u<<21)|(1u<<9),(2u<<26),0,
        0,(1u<<21)|(102u<<13)|0x1b,(3u<<26),(15u<<12)|(1u<<11)|3};
    CHECK(xml1_vertex_program_decode(&decoded,address_program,9));
    in[1][0]=2.5f;memcpy(constants[104],in[0],16);
    CHECK(xml1_vertex_program_run(&decoded,in,constants,offset,scale,&out));
    for(unsigned i=0;i<4;++i)CHECK(fabsf(out.position[i]-clip[i])<1e-6f);
    in[1][0]=90;CHECK(!xml1_vertex_program_run(&decoded,in,constants,offset,scale,&out));
    xml1_vertex_program_destroy(&decoded);
    uint32_t truncated[]={0x100b00,0,0};
    CHECK(!xml1_vertex_program_decode(&decoded,truncated,3));
    uint32_t wrong_method[]={0x100b80,0,0,0,0};
    CHECK(!xml1_vertex_program_decode(&decoded,wrong_method,5));
    puts("vertex-program-test: PASS");return 0;
}
