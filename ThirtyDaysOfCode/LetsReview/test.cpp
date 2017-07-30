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

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
