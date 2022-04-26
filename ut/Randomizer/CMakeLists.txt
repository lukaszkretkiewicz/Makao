add_subdirectory(mock)
set(
    TEST_SOURCES
    RandomizerTests.cpp
)
set(
    MODULE_NAME randomizer_test_lib
)

add_library(${MODULE_NAME} ${TEST_SOURCES})
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Randomizer)
# target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/ut/Deck/mock/include)

target_link_libraries(${MODULE_NAME} randomizer_lib)