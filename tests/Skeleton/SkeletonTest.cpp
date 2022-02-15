extern "C"
{
    // #includes for things with C linkage
}

// #includes for things with C++ linkage

#include "CppUTest/TestHarness.h"

TEST_GROUP(GroupName)
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
TEST(GroupName, TestCaseName)
{
    /*
    * The test case contains:
    *     test specifica initialization
    *     operations on the code under test
    *     test specific condition checks
    */
}