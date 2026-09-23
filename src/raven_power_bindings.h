#pragma once
#include "xmlb.h"
#include <array>
#include <map>
#include <string>

namespace raven {
// XML2 C7AC0/C7B50: four per-character bindings. These are host metadata;
// never overlay XML2's larger character layout onto an XML1 stats object.
class PowerBindings {
public:
    explicit PowerBindings(const std::vector<xml1::XmlNode>& roots);
    const std::string* resolve(const std::string& character, unsigned action,
        bool default_chain) const;
private:
    std::map<std::string, std::array<std::string, 4>> entries;
};
}
