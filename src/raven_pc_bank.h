#pragma once
#include <cstdint>
#include <vector>
namespace raven {
// Build a native-layout PCM view of a PC bank. Original resource is untouched.
std::vector<uint8_t> pc_bank_pcm_view(const std::vector<uint8_t>& input);
}
