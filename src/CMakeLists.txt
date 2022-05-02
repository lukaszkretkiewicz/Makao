add_subdirectory(Randomizer)
add_subdirectory(Deck)
add_subdirectory(Pile)
add_subdirectory(Player)
add_subdirectory(Helper)

add_executable(${PROJECT_NAME}_exe main.cpp)
target_link_libraries(
    ${PROJECT_NAME}_exe 
    Deck_lib
    Pile_lib
    Randomizer_lib
    Player_lib
    Helper_lib
    )
