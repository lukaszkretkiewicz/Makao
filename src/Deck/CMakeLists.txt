set(
    DECK_HEADERS
    Deck.hpp
    Card.hpp
)

set(
    MODULE_NAME deck_lib
)

add_library(${MODULE_NAME} ${DECK_HEADERS} ${DECK_SOURCES})
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)
