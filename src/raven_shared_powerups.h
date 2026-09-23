#pragma once
#include "xmlb.h"
#include <map>
#include <string>

namespace raven {
// Shared powerups are authored resources, not hardcoded character exceptions.
// Keep every field and child in order for the native definition loader.
class SharedPowerups {
public:
    explicit SharedPowerups(const std::vector<xml1::XmlNode>& roots);
    const xml1::XmlNode* find(const std::string& tag) const;
    size_t size() const { return entries_.size(); }
private:
    std::map<std::string,xml1::XmlNode> entries_;
};
}
