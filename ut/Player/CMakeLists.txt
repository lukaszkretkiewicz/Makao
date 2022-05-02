# General cmake
add_subdirectory(mock)

get_filename_component(FOLDER_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set(MODULE_NAME ${FOLDER_NAME}_test)

file(GLOB SOURCES CONFIGURE_DEPENDS "*.hpp" "*.cpp")

add_library(${MODULE_NAME} ${SOURCES})

target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/${FOLDER_NAME})

target_link_libraries(${MODULE_NAME} ${FOLDER_NAME}_lib)

# Additional libraries to insert manualy
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/ut/Deck/mock/include)

target_link_libraries(${MODULE_NAME} Deck_mock)