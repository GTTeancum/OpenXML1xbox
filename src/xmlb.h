#pragma once
#include <cstdint>
#include <string>
#include <vector>
#include <utility>
namespace xml1 {
using BinaryXml = std::vector<unsigned char>;
// Preserve sibling order and repeated Raven attributes for engine consumers.
struct XmlNode {
    std::string name;
    std::vector<std::pair<std::string,std::string>> attrs;
    std::vector<XmlNode> children;
};
// Raven 0x11b1/version 1: absolute LE offsets, sibling/child links, string pairs.
BinaryXml compile_xmlb(const std::string& text);
std::string decode_xmlb(const void *bytes, unsigned length);
std::vector<XmlNode> parse_xmlb(const void *bytes, unsigned length);
bool xml_text_extension(const std::string& extension);
}
