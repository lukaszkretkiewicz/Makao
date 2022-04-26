set(
    HEADERS
    IRandomizer.hpp
    Randomizer.hpp
)

set(
    MODULE_NAME randomizer_lib
)

add_library(${MODULE_NAME} ${HEADERS} )
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Deck)
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)