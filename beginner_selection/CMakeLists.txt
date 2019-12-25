cmake_minimum_required(VERSION 2.8)
project(test_cmake CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(a.out a.cpp)
add_executable(c.out c.cpp)
add_executable(abc087b abc087b.cpp)
add_executable(abc083b abc083b.cpp)
add_executable(abc088b abc088b.cpp)
add_executable(abc085b abc085b.cpp)
