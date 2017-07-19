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
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_EQ(4,solution.calculateInteger(0));
    ASSERT_DOUBLE_EQ(4.0,solution.calculateDouble(0));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
