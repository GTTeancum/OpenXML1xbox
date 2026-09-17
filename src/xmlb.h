#pragma once
#include <cstdint>
#include <string>
#include <vector>
namespace xml1 {
using BinaryXml = std::vector<unsigned char>;
// Raven 0x11b1/version 1: absolute LE offsets, sibling/child links, string pairs.
BinaryXml compile_xmlb(const std::string& text);
std::string decode_xmlb(const void *bytes, unsigned length);
bool xml_text_extension(const std::string& extension);
}
