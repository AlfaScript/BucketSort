cmake_minimum_required(VERSION 3.15)
project(BucketSort)

set(CMAKE_CXX_STANDARD 14)

add_executable(BucketSort main.cpp bucketsort.cpp)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(BucketSort_utests unit_tests.cpp bucketsort.cpp)
target_link_libraries(BucketSort_utests gtest gtest_main)