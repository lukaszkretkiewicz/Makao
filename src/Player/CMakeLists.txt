set(
    HEADERS
    Player.hpp
    IPlayer.hpp
)

set(
    MODULE_NAME player_lib
)

add_library(${MODULE_NAME} ${HEADERS} )
target_include_directories(${MODULE_NAME} PUBLIC deck_lib)
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)