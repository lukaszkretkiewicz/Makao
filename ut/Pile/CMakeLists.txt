add_subdirectory(mock)
set(
    TEST_SOURCES
    PileTests.cpp
)
set(
    MODULE_NAME pile_test_lib
)

add_library(${MODULE_NAME} ${TEST_SOURCES})
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Pile)
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/ut/Deck/mock/include)

# target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Deck)
# target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Player)
# target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Helper)


target_link_libraries(${MODULE_NAME} deck_mock pile_lib )