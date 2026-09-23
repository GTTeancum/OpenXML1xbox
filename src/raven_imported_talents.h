#pragma once
#ifdef __cplusplus
#include "raven_talent_binding.h"
#include <filesystem>
namespace raven {
// Character resources only. Never substitute XML2's shared_talents for XML1's.
std::shared_ptr<const TalentBindings> load_imported_talents(
    const std::filesystem::path& root,const std::string& language);
std::shared_ptr<const TalentBindings> imported_talents();
}
extern "C" {
#endif
int raven_imported_talents_init(const char *root,const char *language,char *error,unsigned size);
int raven_imported_talents_active(void);
#ifdef __cplusplus
}
#endif
