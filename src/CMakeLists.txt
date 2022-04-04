add_subdirectory(Deck)
add_subdirectory(Pile)
add_executable(${PROJECT_NAME}_exe main.cpp)
target_link_libraries(
    ${PROJECT_NAME}_exe 
    deck_lib
    pile_lib)
