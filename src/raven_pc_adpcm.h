#pragma once
#include <cstddef>
#include <cstdint>
#include <vector>

namespace raven {
// PC ZSND format 106 mono: continuous codes, no Xbox block headers.
// Every sample file begins with predictor/index zero; state does not cross
// sample-file boundaries. Output is signed PCM16 at the bank's sample rate.
std::vector<int16_t> decode_pc_adpcm(const uint8_t* bytes, size_t count);
}
