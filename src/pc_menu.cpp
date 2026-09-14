#include "pc_menu.h"
#include <string>
#include <cstring>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <stdexcept>
#include <windows.h>

// A PC UI extension for the player copy of the menu. Existing XML1 button artwork,
// focus models and controller navigation remain owned by the game's menu code.
extern "C" void xml1_extend_main_menu(char *xml, unsigned size) {
    if (!xml || size < 32 || xml[0] != '<') return;
    std::string menu(xml, size);
    if (menu.find("<MENU name=\"main\" igb=\"menu_main\"") != 0) return;
    if (menu.find("usecmd=\"quitapp\"") == std::string::npos) for (const char *name : {"button7_back", "button7_highlight", "button7"}) {
        std::string key = std::string("<item name=\"") + name + "\"";
        auto begin = menu.find(key), end = menu.find("/>", begin);
        if (begin == std::string::npos || end == std::string::npos) return;
        std::string item = menu.substr(begin, end + 2 - begin);
        // Only replace the original unused debug slot, leaving customized menus alone.
        auto debug = item.find(" debug=\"true\"");
        if (debug == std::string::npos) return;
        item.erase(debug, 13);
        if (std::strcmp(name, "button7") == 0) {
            auto cmd = item.find("usecmd=\"openmenu load\"");
            auto text = item.find("text=\"");
            if (cmd == std::string::npos || text == std::string::npos) return;
            item.replace(cmd, 22, "usecmd=\"quitapp\"");
            auto endtext = item.find('"', text + 6);
            item.replace(text + 6, endtext - text - 6, "Quit");
        }
        menu.replace(begin, end + 2 - begin, item);
    }
    // The unused eighth text anchor is below Quit and above the screen edge.
    // Put the accept prompt there; its original anchor overlaps button seven.
    auto prompt_begin = menu.find("<item name=\"button8\"");
    auto prompt_end = menu.find("/>", prompt_begin);
    if (prompt_begin == std::string::npos || prompt_end == std::string::npos) return;
    std::string prompt = menu.substr(prompt_begin, prompt_end + 2 - prompt_begin);
    if (prompt.find("debug=\"true\"") == std::string::npos) return;
    menu.replace(prompt_begin, prompt_end + 2 - prompt_begin,
        "<item name=\"button8\" style=\"STYLE_DESC\" text=\"$MENU_ACCEPT Select\" enabled=\"false\"/>");
    std::string old_prompt = "<item name=\"desctext1\" style=\"STYLE_DESC\"/>";
    auto old = menu.find(old_prompt);
    if (old == std::string::npos) return;
    menu.replace(old, old_prompt.size(), "<item name=\"desctext1\" style=\"STYLE_DESC\" hide=\"true\"/>");
    if (menu.size() > size) return;
    std::memcpy(xml, menu.data(), menu.size());
    xml[menu.size()] = 0;
    std::fprintf(stderr, "[PC MENU] Added native Quit button\n");
}

extern "C" int xml1_install_pc_menu(const char *root, char *error, unsigned error_size) {
    namespace fs = std::filesystem;
    try {
        fs::path base = fs::u8path(root);
        // Only a player installation can be updated, never the original extraction.
        if (!fs::exists(base / ".xml1-player-layout")) return 1;
        for (const char *language : {"eng", "fre", "ger"}) {
            fs::path path = base / "ui/menus" / (std::string("main.") + language);
            std::ifstream input(path, std::ios::binary);
            if (!input) throw std::runtime_error("Missing main-menu file: " + path.string());
            std::string original((std::istreambuf_iterator<char>(input)), {});
            input.close();
            std::string menu = original;
            xml1_extend_main_menu(menu.data(), (unsigned)menu.size());
            menu.resize(std::strlen(menu.c_str()));
            if (menu == original) continue;
            fs::path temp = path; temp += ".pc-menu-tmp";
            std::ofstream output(temp, std::ios::binary | std::ios::trunc);
            output.write(menu.data(), menu.size()); output.close();
            if (!output || !MoveFileExW(temp.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
                throw std::runtime_error("Cannot install Quit menu: " + path.string());
        }
        return 1;
    } catch (const std::exception &e) {
        if (error_size) std::snprintf(error, error_size, "%s", e.what());
        return 0;
    }
}
