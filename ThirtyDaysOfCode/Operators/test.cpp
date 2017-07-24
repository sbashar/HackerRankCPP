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

TEST_F(SolutionTest,testEmptyTip) {
    Solution solution;
    ASSERT_DOUBLE_EQ(0.0,solution.tip(0.0,0));
}

TEST_F(SolutionTest,testValidTip) {
    Solution solution;
    ASSERT_DOUBLE_EQ(2.4,solution.tip(12,20));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
