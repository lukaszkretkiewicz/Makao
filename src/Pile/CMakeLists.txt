set(
    PILE_HEADERS
    Pile.hpp
    IPile.hpp
)

set(
    MODULE_NAME pile_lib
)

add_library(${MODULE_NAME} ${PILE_HEADERS} )
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Deck)
target_link_libraries(${MODULE_NAME} PUBLIC deck_lib)
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)