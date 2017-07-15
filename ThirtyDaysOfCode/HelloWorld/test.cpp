#include "gtest/gtest.h"
#include "solution.h"

class SolutionTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
        }

        virtual void TearDown() {
            // Code here will be called immediately after each test
            // (right before the destructor).
        }
};


TEST_F(SolutionTest,testEmptyInput) {
    Solution solution;
    ASSERT_EQ("Hello, World.\n",solution.printResult(""));
}

TEST_F(SolutionTest,testValidInput) {
    Solution solution;
    ASSERT_EQ("Hello, World.\nWelcome to 30 Days of Code!",solution.printResult("Welcome to 30 Days of Code!"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
