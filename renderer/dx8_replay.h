// Diagnostic replay of actual XML1 submissions. No host input or desktop capture.
#include <cstdint>
#include <vector>
#include <stdexcept>
#include "../src/dx8_packet.h"

static void checked(HRESULT hr) {
    if (FAILED(hr)) {
        std::fprintf(stderr, "D3D8 replay HRESULT %08lx\n", (unsigned long)hr);
        throw std::runtime_error("D3D8 call failed");
    }
}
static D3DFORMAT replay_format(uint32_t format) {
    switch(format) {
        case 0:return D3DFMT_L8;
        case 6:return D3DFMT_A8R8G8B8;
        case 14:return D3DFMT_DXT3;
        case 25:return D3DFMT_A8;
        default:throw std::runtime_error("Unsupported texture format");
    }
}
static IDirect3DTexture8* read_texture(IDirect3DDevice8* device,FILE* file,unsigned width,unsigned height,uint32_t packed) {
    if(!xml1_texture_bytes(width,height,packed)) throw std::runtime_error("Invalid texture mip chain");
    unsigned format=packed&255,levels=xml1_texture_levels(packed);
    IDirect3DTexture8* texture=nullptr;
    checked(device->CreateTexture(width,height,levels,0,replay_format(format),D3DPOOL_MANAGED,&texture));
    for(unsigned level=0;level<levels;++level) {
        unsigned rows=format==14?(height+3)/4:height;
        unsigned row_bytes=format==14?((width+3)/4)*16:width*(format==6?4:1);
        std::vector<unsigned char> pixels((size_t)rows*row_bytes);
        if(std::fread(pixels.data(),1,pixels.size(),file)!=pixels.size()) throw std::runtime_error("Truncated texture mip chain");
        D3DLOCKED_RECT lock={}; checked(texture->LockRect(level,&lock,nullptr,0));
        for(unsigned y=0;y<rows;++y) std::memcpy((char*)lock.pBits+y*lock.Pitch,pixels.data()+y*row_bytes,row_bytes);
        checked(texture->UnlockRect(level));
        width=width>1?width/2:1; height=height>1?height/2:1;
    }
    return texture;
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
static void complete_rendering(IDirect3DDevice8* device) {
    IDirect3DSurface8* surface=nullptr;
    checked(device->GetBackBuffer(0,D3DBACKBUFFER_TYPE_MONO,&surface));
    D3DLOCKED_RECT lock={};
    HRESULT hr=surface->LockRect(&lock,nullptr,D3DLOCK_READONLY);
    if (SUCCEEDED(hr)) hr=surface->UnlockRect();
    surface->Release(); checked(hr);
}
static void wait_native_vblank(IDirect3DDevice8* device) {
        D3DRASTER_STATUS raster={};
        ULONGLONG started=GetTickCount64();
        bool active=false;
        for(;;) {
            checked(device->GetRasterStatus(&raster));
            if(!raster.InVBlank) active=true;
            if(active && raster.InVBlank) break;
            if(GetTickCount64()-started>1000) throw std::runtime_error("Native DX8 vertical blank timeout");
            SwitchToThread();
        }
        static unsigned waits;
        if(++waits<=3) std::printf("Native DX8 vertical blank observed (%llu ms)\n",GetTickCount64()-started);
}
static bool replay_stream(IDirect3DDevice8* device, FILE* file, const char* capture, bool live=false) {
    auto read = [&](void* dst, size_t bytes) {
        if (std::fread(dst,1,bytes,file) != bytes) throw std::runtime_error("Truncated replay");
    };
    char magic[8]; read(magic,8);
    static bool frame_open=false;
    if(!std::memcmp(magic,"XMLDX8V1",8)) {
        wait_native_vblank(device);
        return false;
    }
    if(!std::memcmp(magic,"XMLDX8C4",8)) {
        uint32_t clear[5]; read(clear,sizeof(clear));
        if((clear[0]&~0xF3u)||((clear[0]&0xF0)!=0&&(clear[0]&0xF0)!=0xF0)||clear[4]>4096)
            throw std::runtime_error("Unsupported clear command");
        std::vector<D3DRECT> rects(clear[4]);
        if(clear[4]) read(rects.data(),rects.size()*sizeof(D3DRECT));
        if(!frame_open) checked(device->Clear(0,nullptr,D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER|D3DCLEAR_STENCIL,0,1.0f,0));
        frame_open=true;
        DWORD flags=((clear[0]&0xF0)?D3DCLEAR_TARGET:0)|((clear[0]&1)?D3DCLEAR_ZBUFFER:0)|((clear[0]&2)?D3DCLEAR_STENCIL:0);
        float depth; std::memcpy(&depth,&clear[2],4);
        checked(device->Clear(clear[4],clear[4]?rects.data():nullptr,flags,clear[1],depth,clear[3]));
        complete_rendering(device);
        return false;
    }
    const bool version6=magic[7]=='6';
    const bool version5=magic[7]=='5'||version6;
    const bool version4=magic[7]=='4'||version5;
    const bool version3=magic[7]=='3'||version4;
    const bool version2=magic[7]=='2'||version3;
    const bool flush=!std::memcmp(magic,"XMLDX8F",7);
    if ((!flush && std::memcmp(magic,"XMLDX8R",7)) || (!version2 && magic[7]!='1')) throw std::runtime_error("Invalid replay version");
    uint32_t count; read(&count,4);
    /* Every preceding clear/draw batch completes before its acknowledgement.
     * An empty flush submits no work, so that completion already covers it. */
    if (flush && !count) return false;
    if ((!live && !count) || count>10000) throw std::runtime_error("Invalid draw count");
    if (!frame_open) checked(device->Clear(0,nullptr,D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER|D3DCLEAR_STENCIL,0,1.0f,0));
    frame_open=true;
    checked(device->BeginScene());
    for (uint32_t n=0;n<count;++n) {
        uint32_t header[6]={0,0,0,14,0x142,6},rs[168],ts[128];
        D3DVIEWPORT8 viewport; D3DMATRIX matrices[3];
        read(header,version5?sizeof(header):version2?20:12); read(&viewport,sizeof(viewport));
        read(matrices,sizeof(matrices)); read(rs,sizeof(rs)); read(ts,sizeof(ts));
        D3DMATERIAL8 material={}; uint32_t light_mask=0; D3DLIGHT8 lights[32]={};
        if(version3) {
            static_assert(sizeof(material)==68 && sizeof(D3DLIGHT8)==104,"DX8 lighting wire layout");
            read(&material,sizeof(material)); read(&light_mask,4);
            for(unsigned i=0;i<32;++i) if(light_mask&(1u<<i)) read(&lights[i],sizeof(D3DLIGHT8));
        }
        uint32_t second_header[3]={}; D3DMATRIX texture_matrices[2]={};
        if(version4) { read(second_header,sizeof(second_header)); read(texture_matrices,sizeof(texture_matrices)); }
        auto width=header[0],height=header[1],vertices=header[2];
        if (!width||!height||width>4096||height>4096||vertices<3||vertices>1000000)
            throw std::runtime_error("Invalid replay geometry");
        if(!xml1_fvf_stride(header[4])||(!version6&&(header[3]>255||second_header[2]>255)))
            throw std::runtime_error("Unsupported replay format");
        const unsigned stride=xml1_fvf_stride(header[4]);
        if((header[5]!=5&&header[5]!=6&&header[5]!=7)||(header[5]==5&&vertices%3)) throw std::runtime_error("Unsupported primitive type");
        IDirect3DTexture8* texture=read_texture(device,file,width,height,header[3]);
        IDirect3DTexture8* second_texture=second_header[0]?read_texture(device,file,second_header[0],second_header[1],second_header[2]):nullptr;
        std::vector<unsigned char> vb(vertices*stride); read(vb.data(),vb.size());
        checked(device->SetViewport(&viewport));
        checked(device->SetTransform(D3DTS_WORLD,&matrices[0]));
        checked(device->SetTransform(D3DTS_VIEW,&matrices[1]));
        checked(device->SetTransform(D3DTS_PROJECTION,&matrices[2]));
        if(version4) for(unsigned i=0;i<2;++i) checked(device->SetTransform((D3DTRANSFORMSTATETYPE)(D3DTS_TEXTURE0+i),&texture_matrices[i]));
        checked(device->SetVertexShader(header[4])); checked(device->SetPixelShader(0));
        auto state=[&](D3DRENDERSTATETYPE type,DWORD value){ checked(device->SetRenderState(type,value)); };
        state(D3DRS_LIGHTING,rs[102]); state(D3DRS_SPECULARENABLE,rs[103]);
        if(version3) {
            if(rs[137]||rs[141]) throw std::runtime_error("Unsupported vertex blend or two-sided lighting");
            checked(device->SetMaterial(&material));
            for(unsigned i=0;i<32;++i) {
                if(light_mask&(1u<<i)) checked(device->SetLight(i,&lights[i]));
                checked(device->LightEnable(i,(light_mask&(1u<<i))!=0));
            }
            state(D3DRS_LOCALVIEWER,rs[104]); state(D3DRS_COLORVERTEX,rs[105]);
            state(D3DRS_SPECULARMATERIALSOURCE,rs[110]); state(D3DRS_DIFFUSEMATERIALSOURCE,rs[111]);
            state(D3DRS_AMBIENTMATERIALSOURCE,rs[112]); state(D3DRS_EMISSIVEMATERIALSOURCE,rs[113]);
            state(D3DRS_AMBIENT,rs[115]); state(D3DRS_NORMALIZENORMALS,rs[142]);
        }
        state(D3DRS_FOGENABLE,rs[92]); state(D3DRS_ZENABLE,rs[143]);
        state(D3DRS_ZWRITEENABLE,rs[64]); state(D3DRS_ZFUNC,rs[57]-0x200+1);
        state(D3DRS_ALPHABLENDENABLE,rs[59]); state(D3DRS_ALPHATESTENABLE,rs[60]);
        state(D3DRS_ALPHAFUNC,rs[58]-0x200+1); state(D3DRS_ALPHAREF,rs[61]);
        state(D3DRS_SRCBLEND,blend(rs[62])); state(D3DRS_DESTBLEND,blend(rs[63]));
        if ((rs[147]!=0 && rs[147]!=0x900 && rs[147]!=0x901) || rs[144] || rs[139]!=0x1B02 || rs[74]!=0x8006) {
            std::fprintf(stderr,"Unsupported states: cull=%08X stencil=%08X fill=%08X blend=%08X\n",rs[147],rs[144],rs[139],rs[74]);
            throw std::runtime_error("Unsupported replay culling/stencil/fill/blend mode");
        }
        state(D3DRS_CULLMODE,rs[147]==0?D3DCULL_NONE:rs[147]==0x900?D3DCULL_CW:D3DCULL_CCW);
        state(D3DRS_STENCILENABLE,FALSE);
        state(D3DRS_BLENDOP,D3DBLENDOP_ADD);
        state(D3DRS_COLORWRITEENABLE, ((rs[67]&0x10000)?1:0)|((rs[67]&0x100)?2:0)|((rs[67]&1)?4:0)|((rs[67]&0x1000000)?8:0));
        if(version4) state(D3DRS_TEXTUREFACTOR,rs[148]);
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
            checked(device->SetTexture(stage,stage==0?texture:stage==1?second_texture:nullptr));
        }
        checked(device->DrawPrimitiveUP(header[5]==5?D3DPT_TRIANGLELIST:header[5]==6?D3DPT_TRIANGLESTRIP:D3DPT_TRIANGLEFAN,
            header[5]==5?vertices/3:vertices-2,vb.data(),stride));
        texture->Release();
        if(second_texture) second_texture->Release();
        if (!live) std::printf("Replayed game draw %u: %u vertices, %ux%u format %u\n",n+1,vertices,width,height,header[3]);
    }
    checked(device->EndScene());
    if (flush) { complete_rendering(device); return false; }
    if (capture) capture_backbuffer(device,capture);
    else complete_rendering(device);
    if (live) checked(device->Present(nullptr,nullptr,nullptr,nullptr));
    frame_open=false;
    return true;
}
static void replay(IDirect3DDevice8* device, const char* path, const char* capture) {
    FILE* file = std::fopen(path,"rb");
    if (!file) throw std::runtime_error("Cannot open replay");
    try {
        bool last_presented=false;
        for (;;) {
            int next=std::fgetc(file);
            if (next==EOF) break;
            std::ungetc(next,file);
            last_presented=replay_stream(device,file,capture);
        }
        if (!last_presented) throw std::runtime_error("Replay ended without a complete frame");
    }
    catch (...) { std::fclose(file); throw; }
    std::fclose(file);
}
