set(
    PILE_HEADERS
    Pile.hpp
)

# set(
#     PILE_SOURCES
# )

add_library(pile_lib ${PILE_HEADERS} )
target_include_directories(pile_lib PUBLIC ${CMAKE_SOURCE_DIR}/src/Deck)
target_link_libraries(pile_lib PUBLIC deck_lib)
set_target_properties(pile_lib PROPERTIES LINKER_LANGUAGE CXX)