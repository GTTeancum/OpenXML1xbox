#pragma once
/* No runtime compiler or extra DLL: a VS1.1 passthrough retains homogeneous
 * clipping for the CPU-executed NV2A result. Device lifetime owns this shader. */
static DWORD program_vertex_shader(IDirect3DDevice8 *device) {
    static DWORD handle;
    if(handle)return handle;
    const DWORD declaration[]={D3DVSD_STREAM(0),
        D3DVSD_REG(0,D3DVSDT_FLOAT4),D3DVSD_REG(1,D3DVSDT_FLOAT4),
        D3DVSD_REG(2,D3DVSDT_FLOAT4),D3DVSD_REG(3,D3DVSDT_FLOAT4),
        D3DVSD_REG(4,D3DVSDT_FLOAT4),D3DVSD_REG(5,D3DVSDT_FLOAT4),
        D3DVSD_REG(6,D3DVSDT_FLOAT4),D3DVSD_REG(7,D3DVSDT_FLOAT2),D3DVSD_END()};
    std::vector<DWORD> code={D3DVS_VERSION(1,1)};
    auto mov=[&](unsigned type,unsigned dest,unsigned source,DWORD mask,DWORD swizzle) {
        code.push_back(D3DSIO_MOV);
        code.push_back(0x80000000u|type|mask|dest);
        code.push_back(0x80000000u|D3DSPR_INPUT|swizzle|source);
    };
    mov(D3DSPR_RASTOUT,0,0,D3DSP_WRITEMASK_ALL,D3DSP_NOSWIZZLE);
    mov(D3DSPR_ATTROUT,0,1,D3DSP_WRITEMASK_ALL,D3DSP_NOSWIZZLE);
    mov(D3DSPR_ATTROUT,1,2,D3DSP_WRITEMASK_ALL,D3DSP_NOSWIZZLE);
    for(unsigned i=0;i<4;++i)mov(D3DSPR_TEXCRDOUT,i,i+3,D3DSP_WRITEMASK_ALL,D3DSP_NOSWIZZLE);
    mov(D3DSPR_RASTOUT,1,7,D3DSP_WRITEMASK_0,0); // Fog scalar, v7.x.
    mov(D3DSPR_RASTOUT,2,7,D3DSP_WRITEMASK_0,0x00550000u); // Point size, v7.y.
    code.push_back(D3DSIO_END);
    checked(device->CreateVertexShader(declaration,code.data(),&handle,0));
    return handle;
}
