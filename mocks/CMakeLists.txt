add_library(RuntimeErrorStub STATIC RuntimeErrorStub.c)
target_include_directories(RuntimeErrorStub PUBLIC ${CMAKE_SOURCE_DIR}/include)
