cmake_minimum_required(VERSION 3.0)
project(2048)

set(CMAKE_CXX_FLAGS "-std=c++11")

aux_source_directory(./src SRC)

include_directories(./src)

add_executable(2048 ${SRC})