add_subdirectory(Randomizer)
add_subdirectory(Deck)
add_subdirectory(Pile)
add_subdirectory(Player)
add_subdirectory(Helper)
add_subdirectory(Game)
add_subdirectory(GuiAdapter)
add_subdirectory(Visitor)

add_executable(${PROJECT_NAME}_exe main.cpp ${CMAKE_SOURCE_DIR}/src/Player)
target_include_directories(${PROJECT_NAME}_exe PUBLIC Game ${CMAKE_SOURCE_DIR}/src/Player)
target_link_libraries(
    ${PROJECT_NAME}_exe 
    Deck_lib
    Pile_lib
    Randomizer_lib
    Player_lib
    Helper_lib
    Game_lib
    GuiAdapter_lib
    sfml-window sfml-graphics sfml-network sfml-system
    )
