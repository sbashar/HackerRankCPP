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

TEST_F(SolutionTest,testEmptyEvenStrinChar) {
    Solution solution;
    ASSERT_EQ("",solution.evenStringChar(""));
}

TEST_F(SolutionTest,testValidEvenStrinChar) {
    Solution solution;
    ASSERT_EQ("Hce",solution.evenStringChar("Hacker"));
    ASSERT_EQ("Rn",solution.evenStringChar("Rank"));
}

TEST_F(SolutionTest,testEmptyOddStrinChar) {
    Solution solution;
    ASSERT_EQ("",solution.oddStringChar(""));
}

TEST_F(SolutionTest,testValidOddStrinChar) {
    Solution solution;
    ASSERT_EQ("akr",solution.oddStringChar("Hacker"));
    ASSERT_EQ("ak",solution.oddStringChar("Rank"));
}

TEST_F(SolutionTest,testEmptyFormatResult) {
    Solution solution;
    ASSERT_EQ(" \n",solution.formatResult(""));
}

TEST_F(SolutionTest,testOneValidFormatResult) {
    Solution solution;
    ASSERT_EQ("Hce akr\n",solution.formatResult("Hacker"));
}

TEST_F(SolutionTest,testTwoValidFormatResult) {
    Solution solution;
    ASSERT_EQ("Hce akr\n",solution.formatResult("Hacker"));
    ASSERT_EQ("Rn ak\n",solution.formatResult("Rank"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
