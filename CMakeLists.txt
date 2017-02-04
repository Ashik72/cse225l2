cmake_minimum_required(VERSION 3.3)
project(cse225l_02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Triangle.h Rect.h Rect.cpp Triangle.cpp)
add_executable(cse225l_02 ${SOURCE_FILES})