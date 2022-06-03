add_subdirectory(Randomizer)
add_subdirectory(Deck)
add_subdirectory(Player)
add_subdirectory(Pile)
add_subdirectory(Game)

set(
    SOURCES
    Randomizer/RandomizerTests.cpp
    Deck/DeckTests.cpp
    Pile/PileTests.cpp 
    Player/PlayerTests.cpp
    Game/GameTests.cpp )

add_executable(${PROJECT_NAME}_test main.cpp ${SOURCES})

set(
    TEST_LIBS
    Randomizer_test
    Deck_test
    Pile_test
    Player_test
    Game_test
)

target_link_libraries(${PROJECT_NAME}_test ${TEST_LIBS} gtest gtest_main gmock sfml-window sfml-graphics sfml-network sfml-system)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)

enable_testing()
add_test(NAME ${PROJECT_NAME}_tests COMMAND ${PROJECT_NAME}_test)