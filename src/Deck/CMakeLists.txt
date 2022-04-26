set(
    DECK_HEADERS
    IDeck.hpp
    Deck.hpp
    Card.hpp
)

set(
    DECK_SOURCES
    Deck.cpp
)

set(
    MODULE_NAME deck_lib
)

add_library(${MODULE_NAME} ${DECK_HEADERS} ${DECK_SOURCES})

target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Randomizer)
target_link_libraries(${MODULE_NAME} PUBLIC randomizer_lib)
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)
