#include "gtest/gtest.h"
#include "person.h"

class PersonTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
        }

        virtual void TearDown() {
            // Code here will be called immediately after each test
            // (right before the destructor).
        }
};

TEST_F(PersonTest,testNegativeAge) {
    Person person(-5);
    ASSERT_EQ(0,person.getAge());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
