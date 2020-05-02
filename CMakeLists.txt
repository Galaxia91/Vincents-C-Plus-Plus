PROJECT(hello CXX)
cmake_minimum_required(VERSION 3.0)

find_package(Curses REQUIRED)

add_executable(Vin Hello.cpp)
target_link_libraries(Vin ${CURSES_LIBRARIES})

c:\tools\cygwin\bin