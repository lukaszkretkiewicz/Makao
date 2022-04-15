set(MODULE_NAME deck_mock)

set(HEADERS include/DeckMock.hpp)

# set(SOURCES src/DeckMock.cpp)

add_library(${MODULE_NAME} ${HEADERS})

target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Deck)

target_link_libraries(${MODULE_NAME} PUBLIC deck_lib gtest gtest_main gmock)
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)