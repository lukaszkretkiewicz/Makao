add_subdirectory(Randomizer)
add_subdirectory(Deck)
add_subdirectory(Player)
add_subdirectory(Pile)

set(
    SOURCES
    Randomizer/RandomizerTests.cpp
    Deck/DeckTests.cpp
    Pile/PileTests.cpp 
    Player/PlayerTests.cpp )

add_executable(${PROJECT_NAME}_test main.cpp ${SOURCES})

set(
    TEST_LIBS
    Randomizer_test
    Deck_test
    Pile_test
    Player_test
)

target_link_libraries(${PROJECT_NAME}_test ${TEST_LIBS} gtest gtest_main gmock)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)

enable_testing()
add_test(NAME ${PROJECT_NAME}_tests COMMAND ${PROJECT_NAME}_test)