cmake_minimum_required(VERSION 3.10)
project(CppTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(test
        tests/test.cpp
        include/test/test.hpp)
target_include_directories(test PUBLIC include/test)