#pragma once
#ifdef __cplusplus
#include "engine/progression/raven_talent_binding.h"
#include "engine/powers/raven_power_bindings.h"
#include <filesystem>
namespace raven {
// Character resources only. Never substitute XML2's shared_talents for XML1's.
std::shared_ptr<const TalentBindings> load_imported_talents(
    const std::filesystem::path& root,const std::string& language);
std::shared_ptr<const TalentBindings> imported_talents();
// Mutate only on the game thread, together with native character state.
std::shared_ptr<PowerBindings> imported_power_bindings();
}
extern "C" {
#endif
int raven_imported_talents_init(const char *root,const char *language,char *error,unsigned size);
int raven_imported_talents_active(void);
#ifdef __cplusplus
}
#endif
