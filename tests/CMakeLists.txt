add_executable(AllTests AllTests.cpp)
include_directories(AllTests ${CMAKE_BINARY_DIR}/cpputest/include)
include_directories(AllTests ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(AllTests ${CPPUTEST_LIBRARY} ${CPPUTEST_EXT_LIBRARY})

add_subdirectory(stdio)
add_subdirectory(LedDriver)

add_custom_target(AllTests_run ALL
    COMMAND AllTests
    COMMENT "Run all the tests"
    )