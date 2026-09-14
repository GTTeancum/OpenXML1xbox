#pragma once
/* State belongs to this one native device. Keep the exact game values; avoid
 * calling D3D8 again when another draw supplies an identical state. */
static uint64_t state_requests,state_calls;
static bool state_cache_enabled() {
    static const bool enabled=std::getenv("XML1_DX8_NO_STATE_CACHE")==nullptr;
    return enabled;
}
static void cached_render_state(IDirect3DDevice8* device,D3DRENDERSTATETYPE type,DWORD value) {
    static DWORD values[256]={};static bool known[256]={};unsigned index=(unsigned)type;
    if(index>=256) throw std::runtime_error("Render state exceeds cache");
    ++state_requests;
    if(state_cache_enabled() && known[index] && values[index]==value) return;
    checked(device->SetRenderState(type,value));values[index]=value;known[index]=true;++state_calls;
}
static void cached_texture_state(IDirect3DDevice8* device,unsigned stage,D3DTEXTURESTAGESTATETYPE type,DWORD value) {
    static DWORD values[4][32]={};static bool known[4][32]={};unsigned index=(unsigned)type;
    if(stage>=4 || index>=32) throw std::runtime_error("Texture state exceeds cache");
    ++state_requests;
    if(state_cache_enabled() && known[stage][index] && values[stage][index]==value) return;
    checked(device->SetTextureStageState(stage,type,value));values[stage][index]=value;known[stage][index]=true;++state_calls;
}
static void cached_light(IDirect3DDevice8* device,unsigned index,const D3DLIGHT8 *light) {
    static D3DLIGHT8 values[32]={};static bool known[32]={};
    if(index>=32) throw std::runtime_error("Light exceeds cache");
    ++state_requests;
    if(state_cache_enabled() && known[index] && !std::memcmp(&values[index],light,sizeof(*light))) return;
    checked(device->SetLight(index,light));values[index]=*light;known[index]=true;++state_calls;
}
static void cached_light_enable(IDirect3DDevice8* device,unsigned index,bool enabled) {
    static bool values[32]={},known[32]={};
    if(index>=32) throw std::runtime_error("Light enable exceeds cache");
    ++state_requests;
    if(state_cache_enabled() && known[index] && values[index]==enabled) return;
    checked(device->LightEnable(index,enabled));values[index]=enabled;known[index]=true;++state_calls;
}

static void cached_viewport(IDirect3DDevice8* device,const D3DVIEWPORT8* value) {
    static D3DVIEWPORT8 previous={}; static bool known=false;
    ++state_requests;
    if(state_cache_enabled() && known && !std::memcmp(&previous,value,sizeof(*value))) return;
    checked(device->SetViewport(value)); previous=*value;known=true;++state_calls;
}
static void cached_transform(IDirect3DDevice8* device,D3DTRANSFORMSTATETYPE type,const D3DMATRIX* value) {
    static D3DMATRIX previous[512]={}; static bool known[512]={};
    unsigned index=(unsigned)type;
    if(index>=512) throw std::runtime_error("Transform exceeds cache");
    ++state_requests;
    if(state_cache_enabled() && known[index] && !std::memcmp(&previous[index],value,sizeof(*value))) return;
    checked(device->SetTransform(type,value));previous[index]=*value;known[index]=true;++state_calls;
}
static void cached_material(IDirect3DDevice8* device,const D3DMATERIAL8* value) {
    static D3DMATERIAL8 previous={}; static bool known=false;
    ++state_requests;
    if(state_cache_enabled() && known && !std::memcmp(&previous,value,sizeof(*value))) return;
    checked(device->SetMaterial(value));previous=*value;known=true;++state_calls;
}
static void cached_shader(IDirect3DDevice8* device,DWORD value,bool pixel) {
    static DWORD previous[2]={}; static bool known[2]={};
    unsigned index=pixel?1:0; ++state_requests;
    if(state_cache_enabled() && known[index] && previous[index]==value) return;
    checked(pixel?device->SetPixelShader(value):device->SetVertexShader(value));
    previous[index]=value;known[index]=true;++state_calls;
}
