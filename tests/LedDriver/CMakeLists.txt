target_sources(AllTests
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/LedDriverTest.cpp)
target_link_libraries(AllTests LedDriver)