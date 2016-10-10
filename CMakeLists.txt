cmake_minimum_required(VERSION 3.6)
project(getdigit2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(getdigit2 ${SOURCE_FILES})