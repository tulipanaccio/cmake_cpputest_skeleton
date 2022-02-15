cmake_minimum_required(VERSION 3.13)
project(Skeleton C CXX)

include(cmake/AddCppUTest.cmake)

add_subdirectory(src)

add_subdirectory(tests)