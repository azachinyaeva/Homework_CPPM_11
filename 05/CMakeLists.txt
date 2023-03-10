cmake_minimum_required(VERSION 3.1)
project(Figure)
set (CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library (DynamicFigure SHARED Triangle.cpp Square.cpp RightTriangle.cpp Rectangle.cpp Rhombus.cpp Quadrangle.cpp Parallelogram.cpp IsoscelesTriangle.cpp EquilateralTriangle.cpp Figure.cpp Triangle.h Square.h RightTriangle.h Rectangle.h Rhombus.h Quadrangle.h Parallelogram.h IsoscelesTriangle.h EquilateralTriangle.h Figure.h)
add_executable(Figure_project Figure_2.cpp)
target_link_libraries(Figure_project DynamicFigure)		

