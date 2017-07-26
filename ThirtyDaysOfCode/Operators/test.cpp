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
    ASSERT_DOUBLE_EQ(0.0,solution.amountFromPercent(0.0,0));
}

TEST_F(SolutionTest,testValidTip) {
    Solution solution;
    ASSERT_DOUBLE_EQ(2.4,solution.amountFromPercent(12,20));
}

TEST_F(SolutionTest,testNegativeTip) {
    Solution solution;
    ASSERT_DOUBLE_EQ(-2.4,solution.amountFromPercent(12,-20));
}

TEST_F(SolutionTest,testNegativeMealCostForTip) {
    Solution solution;
    ASSERT_DOUBLE_EQ(-2.4,solution.amountFromPercent(-12,20));
}

TEST_F(SolutionTest,testAllNegativeTip) {
    Solution solution;
    ASSERT_DOUBLE_EQ(2.4,solution.amountFromPercent(-12,-20));
}

TEST_F(SolutionTest,testEmptyTax) {
    Solution solution;
    ASSERT_DOUBLE_EQ(0.0,solution.amountFromPercent(0.0,0));
}

TEST_F(SolutionTest,testValidTax) {
    Solution solution;
    ASSERT_DOUBLE_EQ(0.96,solution.amountFromPercent(12,8));
}

TEST_F(SolutionTest,testNegativeTax) {
    Solution solution;
    ASSERT_DOUBLE_EQ(-0.96,solution.amountFromPercent(12,-8));
}

TEST_F(SolutionTest,testNegativeMealCostForTax) {
    Solution solution;
    ASSERT_DOUBLE_EQ(-0.96,solution.amountFromPercent(-12,8));
}

TEST_F(SolutionTest,testAllNegativeTax) {
    Solution solution;
    ASSERT_DOUBLE_EQ(0.96,solution.amountFromPercent(-12,-8));
}

TEST_F(SolutionTest,testEmptyTotalCost) {
    Solution solution;
    ASSERT_DOUBLE_EQ(0.0,solution.totalCost(0.0,0,0));
}

TEST_F(SolutionTest,testValidTotalCost) {
    Solution solution;
    ASSERT_DOUBLE_EQ(15.36,solution.totalCost(12.00,20,8));
}

TEST_F(SolutionTest,testNegativeTipTotalCost) {
    Solution solution;
    ASSERT_DOUBLE_EQ(10.56,solution.totalCost(12.00,-20,8));
}

TEST_F(SolutionTest,testNegativeTaxTotalCost) {
    Solution solution;
    ASSERT_DOUBLE_EQ(13.44,solution.totalCost(12.00,20,-8));
}

TEST_F(SolutionTest,testNegativeMealCostTotalCost) {
    Solution solution;
    ASSERT_DOUBLE_EQ(-15.36,solution.totalCost(-12.00,20,8));
}

TEST_F(SolutionTest,testiAllNegativeTotalCost) {
    Solution solution;
    ASSERT_DOUBLE_EQ(-8.64,solution.totalCost(-12.00,-20,-8));
}

TEST_F(SolutionTest,tesFormattedResult) {
    Solution solution;
    ASSERT_EQ("The total meal cost is 15 dollars.\n",solution.formattedResult(12.00,20,8));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
