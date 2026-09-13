// Diagnostic replay of actual XML1 submissions. No host input or desktop capture.
#include <cstdint>
#include <vector>
#include <stdexcept>

static void checked(HRESULT hr) {
    if (FAILED(hr)) {
        std::fprintf(stderr, "D3D8 replay HRESULT %08lx\n", (unsigned long)hr);
        throw std::runtime_error("D3D8 call failed");
    }
}
static DWORD blend(DWORD v) {
    if (v <= 1) return v + 1;
    if (v >= 0x300 && v <= 0x308) return v - 0x300 + 3;
    throw std::runtime_error("Unsupported Xbox blend");
}
static void capture_backbuffer(IDirect3DDevice8* device, const char* path) {
    IDirect3DSurface8* surface = nullptr;
    checked(device->GetBackBuffer(0, D3DBACKBUFFER_TYPE_MONO, &surface));
    D3DSURFACE_DESC desc = {};
    checked(surface->GetDesc(&desc));
    if (desc.Format != D3DFMT_X8R8G8B8 && desc.Format != D3DFMT_A8R8G8B8)
        throw std::runtime_error("Unsupported capture format");
    D3DLOCKED_RECT lock = {};
    checked(surface->LockRect(&lock, nullptr, D3DLOCK_READONLY));
    FILE* file = std::fopen(path, "wb");
    if (!file) throw std::runtime_error("Cannot open capture");
    BITMAPFILEHEADER header = {};
    BITMAPINFOHEADER info = {};
    const DWORD pitch = (desc.Width * 3 + 3) & ~3u;
    header.bfType = 0x4d42;
    header.bfOffBits = sizeof(header) + sizeof(info);
    header.bfSize = header.bfOffBits + pitch * desc.Height;
    info.biSize = sizeof(info); info.biWidth = desc.Width;
    info.biHeight = -(LONG)desc.Height; info.biPlanes = 1; info.biBitCount = 24;
    info.biSizeImage = pitch * desc.Height;
    std::fwrite(&header, sizeof(header), 1, file);
    std::fwrite(&info, sizeof(info), 1, file);
    std::vector<unsigned char> row(pitch);
    for (DWORD y=0; y<desc.Height; ++y) {
        const auto* source = (const unsigned char*)lock.pBits + y*lock.Pitch;
        for (DWORD x=0; x<desc.Width; ++x) std::memcpy(row.data()+x*3, source+x*4, 3);
        if (std::fwrite(row.data(), pitch, 1, file) != 1) throw std::runtime_error("Capture write failed");
    }
    std::fclose(file); checked(surface->UnlockRect()); surface->Release();
    std::printf("Own DX8 backbuffer saved: %s\n", path);
}
static void replay(IDirect3DDevice8* device, const char* path, const char* capture) {
    FILE* file = std::fopen(path, "rb");
    if (!file) throw std::runtime_error("Cannot open replay");
    auto read = [&](void* dst, size_t bytes) {
        if (std::fread(dst,1,bytes,file) != bytes) throw std::runtime_error("Truncated replay");
    };
    char magic[8]; read(magic,8);
    if (std::memcmp(magic,"XMLDX8R1",8)) throw std::runtime_error("Invalid replay version");
    uint32_t count; read(&count,4);
    if (!count || count>10000) throw std::runtime_error("Invalid draw count");
    checked(device->Clear(0,nullptr,D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER|D3DCLEAR_STENCIL,0,1.0f,0));
    checked(device->BeginScene());
    for (uint32_t n=0;n<count;++n) {
        uint32_t header[3],rs[168],ts[128];
        D3DVIEWPORT8 viewport; D3DMATRIX matrices[3];
        read(header,sizeof(header)); read(&viewport,sizeof(viewport));
        read(matrices,sizeof(matrices)); read(rs,sizeof(rs)); read(ts,sizeof(ts));
        auto width=header[0],height=header[1],vertices=header[2];
        if (!width||!height||width>4096||height>4096||vertices<3||vertices>1000000)
            throw std::runtime_error("Invalid replay geometry");
        size_t texBytes=((width+3)/4)*((height+3)/4)*16;
        std::vector<unsigned char> tex(texBytes), vb(vertices*24);
        read(tex.data(),tex.size()); read(vb.data(),vb.size());
        IDirect3DTexture8* texture=nullptr;
        checked(device->CreateTexture(width,height,1,0,D3DFMT_DXT3,D3DPOOL_MANAGED,&texture));
        D3DLOCKED_RECT lock={}; checked(texture->LockRect(0,&lock,nullptr,0));
        for (unsigned y=0;y<(height+3)/4;++y)
            std::memcpy((char*)lock.pBits+y*lock.Pitch,tex.data()+y*((width+3)/4)*16,((width+3)/4)*16);
        checked(texture->UnlockRect(0));
        checked(device->SetViewport(&viewport));
        checked(device->SetTransform(D3DTS_WORLD,&matrices[0]));
        checked(device->SetTransform(D3DTS_VIEW,&matrices[1]));
        checked(device->SetTransform(D3DTS_PROJECTION,&matrices[2]));
        checked(device->SetVertexShader(0x142)); checked(device->SetPixelShader(0));
        auto state=[&](D3DRENDERSTATETYPE type,DWORD value){ checked(device->SetRenderState(type,value)); };
        state(D3DRS_LIGHTING,rs[102]); state(D3DRS_SPECULARENABLE,rs[103]);
        state(D3DRS_FOGENABLE,rs[92]); state(D3DRS_ZENABLE,rs[143]);
        state(D3DRS_ZWRITEENABLE,rs[64]); state(D3DRS_ZFUNC,rs[57]-0x200+1);
        state(D3DRS_ALPHABLENDENABLE,rs[59]); state(D3DRS_ALPHATESTENABLE,rs[60]);
        state(D3DRS_ALPHAFUNC,rs[58]-0x200+1); state(D3DRS_ALPHAREF,rs[61]);
        state(D3DRS_SRCBLEND,blend(rs[62])); state(D3DRS_DESTBLEND,blend(rs[63]));
        if (rs[147] || rs[144] || rs[139]!=0x1B02 || rs[74]!=0x8006)
            throw std::runtime_error("Unsupported replay culling/stencil/fill/blend mode");
        state(D3DRS_CULLMODE,D3DCULL_NONE); state(D3DRS_STENCILENABLE,FALSE);
        state(D3DRS_BLENDOP,D3DBLENDOP_ADD);
        state(D3DRS_COLORWRITEENABLE, ((rs[67]&0x10000)?1:0)|((rs[67]&0x100)?2:0)|((rs[67]&1)?4:0)|((rs[67]&0x1000000)?8:0));
        const D3DTEXTURESTAGESTATETYPE mapping[22]={D3DTSS_ADDRESSU,D3DTSS_ADDRESSV,D3DTSS_ADDRESSW,
            D3DTSS_MAGFILTER,D3DTSS_MINFILTER,D3DTSS_MIPFILTER,D3DTSS_MIPMAPLODBIAS,
            D3DTSS_MAXMIPLEVEL,D3DTSS_MAXANISOTROPY,(D3DTEXTURESTAGESTATETYPE)0,
            (D3DTEXTURESTAGESTATETYPE)0,(D3DTEXTURESTAGESTATETYPE)0,
            D3DTSS_COLOROP,D3DTSS_COLORARG0,D3DTSS_COLORARG1,D3DTSS_COLORARG2,
            D3DTSS_ALPHAOP,D3DTSS_ALPHAARG0,D3DTSS_ALPHAARG1,D3DTSS_ALPHAARG2,
            D3DTSS_RESULTARG,D3DTSS_TEXTURETRANSFORMFLAGS};
        for (unsigned stage=0;stage<4;++stage) {
            for (unsigned t=0;t<22;++t) if (mapping[t])
                checked(device->SetTextureStageState(stage,mapping[t],ts[stage*32+t]));
            checked(device->SetTextureStageState(stage,D3DTSS_TEXCOORDINDEX,ts[stage*32+28]));
            checked(device->SetTexture(stage,stage?nullptr:texture));
        }
        checked(device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP,vertices-2,vb.data(),24));
        texture->Release();
        std::printf("Replayed game draw %u: %u vertices, %ux%u DXT3\n",n+1,vertices,width,height);
    }
    std::fclose(file); checked(device->EndScene());
    capture_backbuffer(device,capture);
}
