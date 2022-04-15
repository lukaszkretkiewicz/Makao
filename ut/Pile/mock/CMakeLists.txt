set(MODULE_NAME pile_mock)

set(HEADERS include/PileMock.hpp)

# set(SOURCES src/PileMock.cpp)

add_library(${MODULE_NAME} ${HEADERS})

target_include_directories(${MODULE_NAME} PRIVATE pile_interface)
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)