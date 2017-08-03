#include "gtest/gtest.h"
#include "solution.h"

class SolutionTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
        }

        virtual void TearDown() {
        }
};

TEST_F(SolutionTest,testEmptyTip) {
    Solution solution;
    const int* testArray = new int[0];
    ASSERT_EQ("\n",solution.formatResult(0,testArray));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

