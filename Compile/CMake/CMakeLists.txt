cmake_minimum_required(VERSION 3.0)

project(main_cmake)

include_directories(include)
add_executable(main_cmake main.cpp src/sum.cpp)