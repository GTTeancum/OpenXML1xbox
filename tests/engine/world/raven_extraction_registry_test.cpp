#include "engine/world/raven_extraction_registry.h"
#include "engine/world/raven_extraction_owner.h"
#include <cstdio>
#include <stdexcept>
#include <algorithm>

static void require(bool value) { if (!value) throw std::runtime_error("Extraction registry check failed"); }
static raven::ExtractionRegistry load(const std::string& text) {
    auto bytes = xml1::compile_xmlb(text);
    return raven::ExtractionRegistry(xml1::parse_xmlb(bytes.data(), (unsigned)bytes.size()));
}
int main() {
    try {
        auto original = load("<zoneinfo><zone name='stock' savename='Stock'/><zone name='Town\\Hub' extraction='true'/><zone name='locked' extraction='false'/></zoneinfo>");
        require(original.size() == 1 && original.identity("stock").empty());
        require(original.identity("locked").empty() && original.identity("unknown").empty());
        auto key = original.identity("town\\hub");
        require(!key.empty() && key == original.identity("TOWN\\HUB"));
        require(original.identity("town/hub").empty());
        auto reordered = load("<zoneinfo><zone name='new' extraction='true'/><zone name='TOWN\\HUB' extraction='TRUE' savename='Localized'/></zoneinfo>");
        require(reordered.identity("town\\hub") == key);
        require(reordered.identity("new") != key);
        require(!original.is_unlocked("town\\hub"));
        require(!original.unlock("unknown") && original.unlock("TOWN\\HUB"));
        auto saved = original.save();
        reordered.restore(saved.data(), saved.size());
        require(reordered.is_unlocked("town\\hub") && !reordered.is_unlocked("new"));
        // Temporarily removed mod definitions retain their state without exposing
        // undeclared travel destinations. Reintroducing the definition restores it.
        auto absent = load("<zoneinfo/>");
        absent.restore(saved.data(), saved.size());
        require(!absent.is_unlocked("town\\hub") && !absent.unlock("town\\hub"));
        require(absent.save() == saved);
        original.restore(nullptr, 0);
        require(!original.is_unlocked("town\\hub"));
        original.restore(saved.data(), saved.size());
        require(original.is_unlocked("town\\hub"));
        auto reject = [&](const xml1::BinaryXml& corrupt) {
            bool rejected = false;
            // Use a non-null pointer even for an empty corrupt payload: nullptr/0
            // is the explicit legacy/new-campaign reset operation.
            const unsigned char dummy = 0;
            try { original.restore(corrupt.empty() ? &dummy : corrupt.data(), corrupt.size()); }
            catch (const std::runtime_error&) { rejected = true; }
            require(rejected && original.save() == saved);
        };
        for (size_t n=0; n<saved.size(); ++n)
            reject(xml1::BinaryXml(saved.begin(), saved.begin()+n));
        auto corrupt = saved; corrupt[0] = '?'; reject(corrupt);
        corrupt = saved; corrupt[8] = 255; reject(corrupt);
        corrupt = saved; corrupt[12] = 255; reject(corrupt);
        corrupt = saved; corrupt[16] = 0; reject(corrupt);
        corrupt = saved; corrupt[16] = 'T'; reject(corrupt);
        corrupt = saved; corrupt.push_back(0); reject(corrupt);
        corrupt = saved; corrupt[8] = 2;
        corrupt.insert(corrupt.end(), saved.begin()+12, saved.end()); reject(corrupt);
        xml1::BinaryXml marker(52, '*');
        const std::string label = "[SAVEGAMEEND: fixture]";
        marker[0] = marker[51] = '\n';
        std::copy(label.begin(), label.end(), marker.begin()+1);
        marker[label.size()+1] = 0;
        const size_t frame_bytes = saved.size()+12;
        xml1::BinaryXml frame(frame_bytes+53, 0xA5);
        const auto sentinel = frame;
        // One byte too little for the retail writer's strict capacity check.
        bool full = false;
        try { original.write_campaign_section(frame.data(), frame.size()-1); }
        catch (const std::runtime_error&) { full = true; }
        require(full && frame == sentinel);
        require(original.write_campaign_section(frame.data(), frame.size()) == frame_bytes);
        require(std::equal(frame.begin()+frame_bytes, frame.end(), sentinel.begin()+frame_bytes));
        std::copy(marker.begin(), marker.end(), frame.begin()+frame_bytes);
        require(reordered.read_campaign_section(frame.data(), frame.size()) == frame_bytes);
        require(reordered.save() == saved);
        auto reject_frame = [&](const xml1::BinaryXml& input, size_t bytes) {
            bool rejected = false;
            try { reordered.read_campaign_section(input.data(), bytes); }
            catch (const std::runtime_error&) { rejected = true; }
            require(rejected && reordered.save() == saved);
        };
        for (size_t n=0; n<frame_bytes+52; ++n) reject_frame(frame, n);
        corrupt = frame; corrupt[8] = 255; reject_frame(corrupt, corrupt.size());
        corrupt = frame; corrupt[frame_bytes+1] = '?'; reject_frame(corrupt, corrupt.size());
        corrupt = frame; corrupt[frame_bytes+51] = 0; reject_frame(corrupt, corrupt.size());
        corrupt = frame; corrupt[12] = '?'; reject_frame(corrupt, corrupt.size());
        require(reordered.read_campaign_section(marker.data(), marker.size()) == 0);
        require(!reordered.is_unlocked("town\\hub"));
        auto untouched = frame;
        require(reordered.write_campaign_section(frame.data(), frame.size()) == 0 && frame == untouched);
        // A campaign can load before zoneinfo is parsed. Unknown saved names
        // must survive until the native parser publishes the current resource.
        raven_extraction_reset();
        require(raven_extraction_definitions(nullptr, 0));
        size_t consumed = 777;
        require(raven_extraction_load(frame.data(), frame.size(), &consumed) && consumed == frame_bytes);
        require(raven_extraction_unlocked("town\\hub") == 0);
        char borrowed_name[] = "Town\\Hub";
        const char* definitions[] = {borrowed_name};
        require(raven_extraction_definitions(definitions, 1));
        borrowed_name[0] = '?';
        require(raven_extraction_unlocked("town\\hub") == 1);
        const char* duplicate[] = {"Town\\Hub", "TOWN\\HUB"};
        require(!raven_extraction_definitions(duplicate, 2));
        require(raven_extraction_unlocked("town\\hub") == 1);
        require(raven_extraction_definitions(nullptr, 0));
        require(raven_extraction_unlocked("town\\hub") == 0);
        const char* restored[] = {"Town\\Hub", "new"};
        require(raven_extraction_definitions(restored, 2));
        require(raven_extraction_unlocked("town\\hub") == 1);
        require(raven_extraction_unlock("unknown") == 0);
        char town_name[] = "Town\\Hub";
        raven_extraction_point travel[] = {{"field",2,0},{town_name,2,1},{"LaterTown",2,1},{"ActThree",3,1}};
        require(raven_extraction_points(travel,4));
        town_name[0]='?'; // Metadata must outlive the parser's borrowed strings.
        char destination[64];
        require(raven_extraction_town_center(2,destination,sizeof(destination))==1);
        require(std::string(destination)=="Town\\Hub");
        require(raven_extraction_unlocked("town\\hub")==1);
        require(raven_extraction_town_center(3,destination,sizeof(destination))==1);
        require(std::string(destination)=="ActThree");
        require(raven_extraction_town_center(1,destination,sizeof(destination))==0 && !destination[0]);
        destination[0]='!';
        require(raven_extraction_town_center(2,destination,1)==-1 && destination[0]=='!');
        const raven_extraction_point duplicate_travel[]={{"Same",1,1},{"SAME",2,1}};
        require(!raven_extraction_points(duplicate_travel,2));
        require(raven_extraction_town_center(2,destination,sizeof(destination))==1);
        require(std::string(destination)=="Town\\Hub");
        require(raven_extraction_definitions(restored,2));
        require(raven_extraction_unlock("new") == 1);
        raven_extraction_reset();
        require(!raven_extraction_unlocked("town\\hub") && !raven_extraction_unlocked("new"));
        require(raven_extraction_unlock("new") == 1); // Reset retains definitions.
        require(raven_extraction_load(marker.data(), marker.size(), &consumed) && !consumed);
        require(!raven_extraction_unlocked("new"));
        // Construct from temporary parsed resources: no borrowed node pointers.
        require(original.identity("town\\hub") == key);
        std::string expanded = "<zoneinfo>";
        for (int i=0; i<300; ++i) expanded += "<zone name='zone" + std::to_string(i) + "' extraction='true'/>";
        auto large = load(expanded + "</zoneinfo>");
        require(large.size() == 300 && !large.identity("zone299").empty());
        for (int i=0; i<300; ++i) require(large.unlock("zone" + std::to_string(i)));
        auto expanded_save = large.save();
        large.restore(nullptr, 0);
        large.restore(expanded_save.data(), expanded_save.size());
        for (int i=0; i<300; ++i) require(large.is_unlocked("zone" + std::to_string(i)));
        for (const auto* invalid : {
            "<zoneinfo><zone extraction='true'/></zoneinfo>",
            "<zoneinfo><zone name='A' extraction='true'/><zone name='a' extraction='true'/></zoneinfo>"}) {
            bool rejected = false;
            try { auto unused = load(invalid); } catch (const std::runtime_error&) { rejected = true; }
            require(rejected);
        }
        puts("PASS extraction metadata/state/campaign framing: stable identities, stock exclusion, reordered/localized definitions, absent-mod retention, 300 zones, legacy reset, transactional malformed/truncated rejection, native marker boundary and strict capacity reservation; runtime hooks pending");
        return 0;
    } catch (const std::exception& error) { fprintf(stderr, "%s\n", error.what()); return 1; }
}
