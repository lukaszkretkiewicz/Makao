set(
    DECK_HEADERS
    Deck.hpp
    Card.hpp
)

set(
    DECK_SOURCES
)

add_library(deck_lib ${DECK_HEADERS} ${DECK_SOURCES})
set_target_properties(deck_lib PROPERTIES LINKER_LANGUAGE CXX)
