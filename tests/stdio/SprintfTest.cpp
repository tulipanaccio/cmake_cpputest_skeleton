extern "C"
{
    #include <stdio.h>
}

// #includes for things with C++ linkage

#include "CppUTest/TestHarness.h"

TEST_GROUP(sprintf)
{
    // Define data accessible to test group members here.
    void setup()
    {
        // Initialization steps are executed before each TEST
    }
    void teardown()
    {
        // clean up steps are executed after each TEST
    }
};

// Many test cases like this can be defined in the test file.
TEST(sprintf, NoFormatOperations)
{
    char output[5] = "";

    LONGS_EQUAL(3, sprintf(output, "hey"));
    STRCMP_EQUAL("hey", output);
}