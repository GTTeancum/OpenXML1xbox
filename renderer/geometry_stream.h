#pragma once
// A write-once range per draw: NOOVERWRITE never touches pending GPU data.
// Wrapping uses DISCARD so the driver can retain the old allocation until it
// finishes. All offsets are aligned to the current vertex stride/index size.
class GeometryStream {
    IDirect3DVertexBuffer8 *vb_=nullptr;
    IDirect3DIndexBuffer8 *ib_=nullptr;
    UINT vb_size_=0,ib_size_=0,vb_used_=0,ib_used_=0;
public:
    void clear() {if(vb_)vb_->Release();if(ib_)ib_->Release();vb_=nullptr;ib_=nullptr;vb_size_=ib_size_=vb_used_=ib_used_=0;}
    ~GeometryStream(){clear();}
    void draw(IDirect3DDevice8 *device,D3DPRIMITIVETYPE type,UINT primitives,
              const void *vertices,UINT count,UINT stride,const uint16_t *indices,UINT index_count) {
        const UINT bytes=count*stride;
        bool fresh=false;
        if(bytes>vb_size_) {
            if(vb_)vb_->Release();vb_=nullptr;vb_size_=std::max(4u*1024*1024,(bytes+65535u)&~65535u);
            checked(device->CreateVertexBuffer(vb_size_,D3DUSAGE_DYNAMIC|D3DUSAGE_WRITEONLY,0,D3DPOOL_DEFAULT,&vb_));vb_used_=0;fresh=true;
        }
        UINT offset=(vb_used_+stride-1)/stride*stride;
        if(offset>vb_size_-bytes){offset=0;fresh=true;}
        BYTE *out=nullptr;checked(vb_->Lock(offset,bytes,&out,fresh||!offset?D3DLOCK_DISCARD:D3DLOCK_NOOVERWRITE));
        std::memcpy(out,vertices,bytes);checked(vb_->Unlock());vb_used_=offset+bytes;
        checked(device->SetStreamSource(0,vb_,stride));
        if(index_count) {
            UINT index_bytes=index_count*2;bool fresh_indices=false;
            if(index_bytes>ib_size_) {
                if(ib_)ib_->Release();ib_=nullptr;ib_size_=std::max(1024u*1024,(index_bytes+65535u)&~65535u);
                checked(device->CreateIndexBuffer(ib_size_,D3DUSAGE_DYNAMIC|D3DUSAGE_WRITEONLY,D3DFMT_INDEX16,D3DPOOL_DEFAULT,&ib_));ib_used_=0;fresh_indices=true;
            }
            UINT index_offset=ib_used_;if(index_offset>ib_size_-index_bytes){index_offset=0;fresh_indices=true;}
            checked(ib_->Lock(index_offset,index_bytes,&out,fresh_indices||!index_offset?D3DLOCK_DISCARD:D3DLOCK_NOOVERWRITE));
            std::memcpy(out,indices,index_bytes);checked(ib_->Unlock());ib_used_=index_offset+index_bytes;
            checked(device->SetIndices(ib_,offset/stride));
            checked(device->DrawIndexedPrimitive(type,0,count,index_offset/2,primitives));
        } else checked(device->DrawPrimitive(type,offset/stride,primitives));
    }
};
