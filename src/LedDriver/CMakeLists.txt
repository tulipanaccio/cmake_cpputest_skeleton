add_library(LedDriver STATIC LedDriver.c)
target_include_directories(LedDriver PUBLIC ${CMAKE_SOURCE_DIR}/include/LedDriver)