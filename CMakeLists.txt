cmake_minimum_required(VERSION 3.17)
project(C__Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__Project main.cpp )
add_executable(first first.c)
add_executable(second second.cpp)
add_executable(demo CSAPP/demo1.c)