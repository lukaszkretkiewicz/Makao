add_subdirectory(Deck)
add_subdirectory(Pile)
add_subdirectory(Player)
add_subdirectory(Helper)

add_executable(${PROJECT_NAME}_exe main.cpp)
target_link_libraries(
    ${PROJECT_NAME}_exe 
    deck_lib
    pile_lib
    player_lib
    helper_lib)
