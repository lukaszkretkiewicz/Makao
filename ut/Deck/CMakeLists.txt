add_subdirectory(mock)
set(
    TEST_SOURCES
    DeckTests.cpp
)
set(
    MODULE_NAME deck_test_lib
)

add_library(${MODULE_NAME} ${TEST_SOURCES})
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Deck)
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/ut/Player/mock/include)

target_link_libraries(${MODULE_NAME} deck_lib player_mock)