cmake_minimum_required(VERSION 3.17)
project(Algorithom)

set(CMAKE_CXX_STANDARD 20)
include_directories(.)

add_executable(Algorithom main.cpp Basic/BitOperation/BitOperation.cpp Basic/BitOperation/BitOperation.h)