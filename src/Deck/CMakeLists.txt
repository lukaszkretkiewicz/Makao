# General cmake
get_filename_component(FOLDER_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set(MODULE_NAME ${FOLDER_NAME}_lib)

file(GLOB SOURCES CONFIGURE_DEPENDS "*.hpp" "*.cpp")

add_library(${MODULE_NAME} ${SOURCES})

set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)
# Additional libraries to include/link manualy
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/Randomizer ${CMAKE_SOURCE_DIR}/src/GuiAdapter)
target_link_libraries(${MODULE_NAME} PUBLIC Randomizer_lib)
