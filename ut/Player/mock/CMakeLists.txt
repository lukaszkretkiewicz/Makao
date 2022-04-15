set(MODULE_NAME player_mock)

set(HEADERS include/PlayerMock.hpp)

# set(SOURCES src/PlayerMock.cpp)

add_library(${MODULE_NAME} ${HEADERS})

target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Player)

target_link_libraries(${MODULE_NAME} PUBLIC player_lib gtest gtest_main gmock)
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)