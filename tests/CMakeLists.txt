add_executable(AllTests AllTests.cpp)
include_directories(AllTests ${CMAKE_BINARY_DIR}/cpputest/include)
target_link_libraries(AllTests ${CPPUTEST_LIBRARY} ${CPPUTEST_EXT_LIBRARY})
add_subdirectory(stdio)