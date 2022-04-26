set(MODULE_NAME randomizer_mock)

set(HEADERS include/RandomizerMock.hpp)

# set(SOURCES src/PlayerMock.cpp)

add_library(${MODULE_NAME} ${HEADERS})
target_include_directories(randomizer_mock PUBLIC ${CMAKE_SOURCE_DIR}/src/Randomizer)

target_link_libraries(${MODULE_NAME} PUBLIC randomizer_lib gtest gtest_main gmock)
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)