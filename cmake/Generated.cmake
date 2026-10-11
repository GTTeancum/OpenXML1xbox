# Normal builds consume committed guest source. XBE regeneration is a separate
# maintainer workflow and is not a prerequisite for compiling the game.
set(XML1_RECOMP_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/game" CACHE PATH
    "Complete guest source tree (committed by default)")
file(GLOB_RECURSE XML1_GENERATED_INPUTS CONFIGURE_DEPENDS
    "${XML1_RECOMP_SOURCE_DIR}/*.c"
    "${XML1_RECOMP_SOURCE_DIR}/*.h")
list(APPEND XML1_GENERATED_INPUTS
    "${CMAKE_CURRENT_SOURCE_DIR}/scripts/recomp_source.py"
    "${CMAKE_CURRENT_SOURCE_DIR}/config/symbols/xml1.json")
