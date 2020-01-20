cmake_minimum_required(VERSION 3.0)
project(2048_unitest)

set(CMAKE_CXX_FLAGS "-std=c++11")

include_directories(${CMAKE_SOURCE_DIR}/../src)
include_directories(${CMAKE_SOURCE_DIR}/../third_party/gtest/include)

link_directories(${CMAKE_SOURCE_DIR}/../third_party/gtest/lib64)

set(THIRD_LIB libgtest.a pthread)

add_executable(TEST_2DPOS ./test_2dpos.cpp ${CMAKE_SOURCE_DIR}/../src/2048.cpp ${CMAKE_SOURCE_DIR}/../src/2D_pos.cpp)
target_link_libraries(TEST_2DPOS ${THIRD_LIB})