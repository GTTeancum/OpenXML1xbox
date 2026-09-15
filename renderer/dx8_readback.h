#pragma once

// D3D8 multisampled backbuffers cannot be locked. CopyRects resolves their
// samples into an ordinary image surface before a CPU read. A one-pixel copy
// provides the same ordered GPU-to-CPU synchronization without transferring
// an entire HD frame at every guest fence. No render state is changed here.
class Dx8Readback {
    IDirect3DSurface8 *image_ = nullptr, *fence_ = nullptr;
    D3DFORMAT format_ = D3DFMT_UNKNOWN;
    unsigned width_ = 0, height_ = 0;
public:
    Dx8Readback() = default;
    Dx8Readback(const Dx8Readback&) = delete;
    Dx8Readback& operator=(const Dx8Readback&) = delete;
    ~Dx8Readback() { clear(); }
    void clear() {
        if (image_) image_->Release();
        if (fence_) fence_->Release();
        image_ = fence_ = nullptr; format_ = D3DFMT_UNKNOWN;
        width_ = height_ = 0;
    }
    HRESULT surface(IDirect3DDevice8 *device, bool completion_only,
                    IDirect3DSurface8 **out) {
        *out = nullptr;
        IDirect3DSurface8 *backbuffer = nullptr;
        HRESULT hr = device->GetBackBuffer(0, D3DBACKBUFFER_TYPE_MONO, &backbuffer);
        if (FAILED(hr)) return hr;
        D3DSURFACE_DESC desc = {};
        hr = backbuffer->GetDesc(&desc);
        if (SUCCEEDED(hr) && desc.MultiSampleType == D3DMULTISAMPLE_NONE) {
            *out = backbuffer; return S_OK;
        }
        if (SUCCEEDED(hr)) {
            if (format_ != desc.Format || width_ != desc.Width || height_ != desc.Height) {
                clear(); format_ = desc.Format; width_ = desc.Width; height_ = desc.Height;
            }
            auto &target = completion_only ? fence_ : image_;
            if (!target) hr = device->CreateImageSurface(completion_only ? 1 : width_,
                completion_only ? 1 : height_, format_, &target);
            if (SUCCEEDED(hr)) {
                const RECT pixel = {0, 0, 1, 1};
                hr = device->CopyRects(backbuffer, completion_only ? &pixel : nullptr,
                    completion_only ? 1 : 0, target, nullptr);
                if (SUCCEEDED(hr)) { target->AddRef(); *out = target; }
            }
        }
        backbuffer->Release(); return hr;
    }
};
