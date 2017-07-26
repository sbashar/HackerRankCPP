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

TEST_F(SolutionTest,testInputNumberIsOdd) {
    Solution solution;
    ASSERT_EQ("Weird",solution.calculate(1));
}

TEST_F(SolutionTest,testInputNumberIsEven) {
    Solution solution;
    ASSERT_EQ("Not Weird",solution.calculate(2));
}

TEST_F(SolutionTest,testInputNumberIsAboveFive) {
    Solution solution;
    ASSERT_EQ("Weird",solution.calculate(6));
}

TEST_F(SolutionTest,testInputNumberIsAboveTwenty) {
    Solution solution;
    ASSERT_EQ("Weird",solution.calculate(20));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
