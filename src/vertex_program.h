#pragma once
#include <stddef.h>
#include <stdint.h>
#include "nv2a_vsh_disassembler.h"
/* Host clip coordinates preserve hardware clipping and perspective interpolation.
 * Rasterization remains on the genuine Windows D3D8 device. */
#define XML1_VERTEX_PROGRAM_WIRE 0x80000001u
typedef struct xml1_program_vertex {
    float position[4], diffuse[4], specular[4], texture[4][4], fog, point;
} xml1_program_vertex;
typedef struct xml1_vertex_program {
    Nv2aVshProgram decoded;
    unsigned steps, inputs;
} xml1_vertex_program;
int xml1_vertex_program_decode(xml1_vertex_program *out,const uint32_t *commands,size_t words);
void xml1_vertex_program_destroy(xml1_vertex_program *program);
int xml1_vertex_program_run(const xml1_vertex_program *program,const float inputs[16][4],
    const float constants[192][4],const float offset[4],const float scale[4],
    xml1_program_vertex *out);
