cmake_minimum_required(VERSION 3.1)
project(Leaver)
set (CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library (DynamicLib SHARED Leaver.h Leaver.cpp)
add_executable(Leaver_Dynamic Source.cpp)
target_link_libraries(Leaver_Dynamic DynamicLib)

