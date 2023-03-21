cmake_minimum_required(VERSION 3.24)
project(C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C__ main.cpp utils/greet.cpp Rectangle.cpp Rectangle.h TextBox.cpp TextBox.h SmartPointer.cpp SmartPointer.h Length.cpp Length.h Point.cpp Point.h Array.cpp Array.h Widget.cpp Widget.h Shape.cpp Shape.h Square.cpp Square.h FileReader.cpp FileReader.h FileWriter.cpp FileWriter.h FileIO.cpp FileIO.h)
