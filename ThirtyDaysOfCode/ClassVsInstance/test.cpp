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

TEST_F(PersonTest,testValidAge) {
    Person person(1);
    ASSERT_EQ(1,person.getAge());
}

TEST_F(PersonTest,testYearPassesWithNegativeAge) {
    Person person(-5);
    ASSERT_EQ(0,person.getAge());
    person.yearPasses();
    ASSERT_EQ(1,person.getAge());
}

TEST_F(PersonTest,testYearPassesWithValidAge) {
    Person person(1);
    ASSERT_EQ(1,person.getAge());
    person.yearPasses();
    ASSERT_EQ(2,person.getAge());
}

TEST_F(PersonTest,testAmIOldNegativeAge) {
    Person person(-5);
    ASSERT_EQ(0,person.getAge());
    ASSERT_EQ("You are young.\n",person.amIOld());
}

TEST_F(PersonTest,testAmIOldValidAge) {
    Person person(1);
    ASSERT_EQ(1,person.getAge());
    ASSERT_EQ("You are young.\n",person.amIOld());
}

TEST_F(PersonTest,testAmIOldWith12and13) {
    Person person(12);
    ASSERT_EQ(12,person.getAge());
    ASSERT_EQ("You are young.\n",person.amIOld());
    person.yearPasses();
    ASSERT_EQ(13,person.getAge());
    ASSERT_EQ("You are a teenager.\n",person.amIOld());
}

TEST_F(PersonTest,testAmIOldWith17and18) {
    Person person(17);
    ASSERT_EQ(17,person.getAge());
    ASSERT_EQ("You are a teenager.\n",person.amIOld());
    person.yearPasses();
    ASSERT_EQ(18,person.getAge());
    ASSERT_EQ("You are old.\n",person.amIOld());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
