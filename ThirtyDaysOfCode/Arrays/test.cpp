#include "gtest/gtest.h"
#include "solution.h"

class SolutionTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
        }

        virtual void TearDown() {
        }
};

TEST_F(SolutionTest,testEmptyInputArray) {
    Solution solution;
    int* testArray = new int[0];
    ASSERT_EQ("\n",solution.formatResult(0,testArray));
}

TEST_F(SolutionTest,testOneInputArray) {
    Solution solution;
    int* testArray = new int[1];
    testArray[0] = 0;
    ASSERT_EQ("0\n",solution.formatResult(1,testArray));
}

TEST_F(SolutionTest,testTwoInputArray) {
    Solution solution;
    int* testArray = new int[2];
    testArray[0] = 0;
    testArray[1] = 1;
    ASSERT_EQ("1 0\n",solution.formatResult(2,testArray));
}

TEST_F(SolutionTest,tesMultipleInputArray) {
    Solution solution;
    int* testArray = new int[4];
    testArray[0] = 1;
    testArray[1] = 4;
    testArray[2] = 3;
    testArray[3] = 2;
    ASSERT_EQ("2 3 4 1\n",solution.formatResult(4,testArray));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
