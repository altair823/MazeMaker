cmake_minimum_required(VERSION 3.19)
project(MazeMaker)

set(CMAKE_CXX_STANDARD 14)

add_executable(MazeMaker main.cpp Maze.cpp Maze.h Location.cpp Location.h declaration.h Eller.cpp Eller.h)
