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

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
