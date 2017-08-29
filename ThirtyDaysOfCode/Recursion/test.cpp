#include "gtest/gtest.h"
#include "solution.h"

class SolutionTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
        }

        virtual void TearDown() {
        }
};

TEST_F(SolutionTest, test0Factorial) {

}

int main(int argc, char ** argv) {
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
