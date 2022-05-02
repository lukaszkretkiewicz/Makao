# General cmake
get_filename_component(PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)
get_filename_component(FOLDER_NAME ${PARENT_DIR} NAME)

set(MODULE_NAME ${FOLDER_NAME}_mock)

file(GLOB SOURCES CONFIGURE_DEPENDS "include/*.hpp" "src/*.cpp")

add_library(${MODULE_NAME} ${SOURCES})

target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/${FOLDER_NAME})
target_link_libraries(${MODULE_NAME} PUBLIC ${FOLDER_NAME}_lib gtest gtest_main gmock)

set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)
# Additional libraries to insert manualy