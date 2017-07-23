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


TEST_F(SolutionTest,testEmptyInt) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_EQ(4,solution.calculate(0));
}

TEST_F(SolutionTest,testEmptyDouble) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_DOUBLE_EQ(4.0,solution.calculate(0.0));
}

TEST_F(SolutionTest,testEmptyString) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_EQ("HackerRank ",solution.calculate(""));
}

TEST_F(SolutionTest,testValidInteger) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_EQ(16,solution.calculate(12));
}

TEST_F(SolutionTest,testValidDouble) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_DOUBLE_EQ(8.0,solution.calculate(4.0));
}

TEST_F(SolutionTest,testValidString) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_EQ("HackerRank is the best place to learn and practice coding!",solution.calculate("is the best place to learn and practice coding!"));
}

TEST_F(SolutionTest,testFormattedDouble) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_EQ("8.0",solution.formattedDouble(4.02));
}

TEST_F(SolutionTest,testFormattedInt) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_EQ("16",solution.formattedInt(12));
}

TEST_F(SolutionTest,testFormattedResult) {
    Solution solution(4, 4.0, "HackerRank ");
    ASSERT_EQ("16\n8.0\nHackerRank is the best place to learn and practice coding!\n",solution.formattedResult(12,4.0,"is the best place to learn and practice coding!"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
