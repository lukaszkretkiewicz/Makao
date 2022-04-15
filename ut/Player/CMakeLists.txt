add_subdirectory(mock)
set(
    TEST_SOURCES
    PlayerTests.cpp
)
set(
    MODULE_NAME player_test_lib
)

add_library(${MODULE_NAME} ${TEST_SOURCES})
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Player)
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/ut/Deck/mock/include)

target_link_libraries(${MODULE_NAME} player_lib deck_mock)