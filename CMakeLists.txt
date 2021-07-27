cmake_minimum_required(VERSION 3.19)
project(Maze)

set(CMAKE_CXX_STANDARD 20)

add_executable(Maze main.cpp Classes/Maze.cpp Classes/Maze.hpp)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Maze sfml-system sfml-window sfml-graphics sfml-audio sfml-network)