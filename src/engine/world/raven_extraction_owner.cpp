#include "engine/world/raven_extraction_owner.h"
#include "engine/world/raven_extraction_registry.h"
#include <mutex>
#include <cstdio>
#include <stdexcept>

namespace {
struct Owner {
    std::mutex mutex;
    raven::ExtractionRegistry registry{std::vector<xml1::XmlNode>{{"zoneinfo", {}, {}}}};
};
Owner& owner() { static Owner value; return value; }
int failure(const std::exception& error) {
    std::fprintf(stderr, "[EXTRACTION ERROR] %s\n", error.what()); return 0;
}
}
extern "C" int raven_extraction_definitions(const char* const* names, size_t count) {
    try {
        if (count && !names) throw std::runtime_error("Missing extraction definitions");
        std::vector<raven_extraction_point> points;
        for (size_t i=0; i<count; ++i) points.push_back({names[i], 1, 0});
        return raven_extraction_points(points.data(), points.size());
    } catch (const std::exception& error) { return failure(error); }
}
extern "C" int raven_extraction_points(const raven_extraction_point* points, size_t count) {
    try {
        if (count && !points) throw std::runtime_error("Missing extraction definitions");
        xml1::XmlNode root{"zoneinfo", {}, {}};
        for (size_t i=0; i<count; ++i) {
            if (!points[i].name) throw std::runtime_error("Missing extraction zone name");
            root.children.push_back({"zone", {{"name", points[i].name}, {"extraction", "true"}}, {}});
        }
        raven::ExtractionRegistry next({root});
        for (size_t i=0; i<count; ++i)
            next.travel_metadata(points[i].name, points[i].act, points[i].town_center != 0);
        auto& state = owner(); std::lock_guard<std::mutex> lock(state.mutex);
        auto saved = state.registry.save();
        next.restore(saved.data(), saved.size());
        // Zone metadata reparses on transitions; that is not a new campaign.
        // Publish only after all definitions and retained state validate.
        state.registry = std::move(next);
        return 1;
    } catch (const std::exception& error) { return failure(error); }
}
extern "C" int raven_extraction_town_center(unsigned char act, char* output, size_t capacity) {
    try {
        if (!output || !capacity) throw std::runtime_error("Missing extraction destination output");
        auto& state = owner(); std::lock_guard<std::mutex> lock(state.mutex);
        const auto name = state.registry.town_center(act);
        if (name.size() >= capacity) throw std::runtime_error("Extraction destination output too small");
        name.copy(output, name.size()); output[name.size()] = 0;
        return name.empty() ? 0 : 1;
    } catch (const std::exception& error) { failure(error); return -1; }
}
extern "C" void raven_extraction_reset(void) {
    auto& state = owner(); std::lock_guard<std::mutex> lock(state.mutex);
    state.registry.restore(nullptr, 0);
}
extern "C" int raven_extraction_has_town_center(unsigned char act) {
    auto& state = owner(); std::lock_guard<std::mutex> lock(state.mutex);
    return !state.registry.town_center(act).empty();
}
extern "C" int raven_extraction_unlock(const char* zone) {
    try {
        if (!zone) throw std::runtime_error("Missing extraction zone");
        auto& state = owner(); std::lock_guard<std::mutex> lock(state.mutex);
        return state.registry.unlock(zone) ? 1 : 0;
    } catch (const std::exception& error) { failure(error); return -1; }
}
extern "C" int raven_extraction_unlocked(const char* zone) {
    try {
        if (!zone) throw std::runtime_error("Missing extraction zone");
        auto& state = owner(); std::lock_guard<std::mutex> lock(state.mutex);
        return state.registry.is_unlocked(zone) ? 1 : 0;
    } catch (const std::exception& error) { failure(error); return -1; }
}
extern "C" int raven_extraction_save(void* destination, size_t capacity, size_t* written) {
    try {
        if (!written) throw std::runtime_error("Missing extraction save result");
        auto& state = owner(); std::lock_guard<std::mutex> lock(state.mutex);
        *written = state.registry.write_campaign_section(destination, capacity);
        return 1;
    } catch (const std::exception& error) { return failure(error); }
}
extern "C" int raven_extraction_load(const void* source, size_t available, size_t* consumed) {
    try {
        if (!consumed) throw std::runtime_error("Missing extraction load result");
        auto& state = owner(); std::lock_guard<std::mutex> lock(state.mutex);
        *consumed = state.registry.read_campaign_section(source, available);
        return 1;
    } catch (const std::exception& error) { return failure(error); }
}
