cmake_minimum_required(VERSION 3.24)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ main.cpp utils/greet.cpp Rectangle.cpp Rectangle.h TextBox.cpp TextBox.h)
