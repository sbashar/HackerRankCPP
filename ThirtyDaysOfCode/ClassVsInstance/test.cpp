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

TEST_F(PersonTest,testEmptyTip) {
    Person person;
    ASSERT_DOUBLE_EQ(0.0,person.amountFromPercent(0.0,0));
}

TEST_F(PersonTest,testValidTip) {
    Person person;
    ASSERT_DOUBLE_EQ(2.4,person.amountFromPercent(12,20));
}

TEST_F(PersonTest,testNegativeTip) {
    Person person;
    ASSERT_DOUBLE_EQ(-2.4,person.amountFromPercent(12,-20));
}

TEST_F(PersonTest,testNegativeMealCostForTip) {
    Person person;
    ASSERT_DOUBLE_EQ(-2.4,person.amountFromPercent(-12,20));
}

TEST_F(PersonTest,testAllNegativeTip) {
    Person person;
    ASSERT_DOUBLE_EQ(2.4,person.amountFromPercent(-12,-20));
}

TEST_F(PersonTest,testEmptyTax) {
    Person person;
    ASSERT_DOUBLE_EQ(0.0,person.amountFromPercent(0.0,0));
}

TEST_F(PersonTest,testValidTax) {
    Person person;
    ASSERT_DOUBLE_EQ(0.96,person.amountFromPercent(12,8));
}

TEST_F(PersonTest,testNegativeTax) {
    Person person;
    ASSERT_DOUBLE_EQ(-0.96,person.amountFromPercent(12,-8));
}

TEST_F(PersonTest,testNegativeMealCostForTax) {
    Person person;
    ASSERT_DOUBLE_EQ(-0.96,person.amountFromPercent(-12,8));
}

TEST_F(PersonTest,testAllNegativeTax) {
    Person person;
    ASSERT_DOUBLE_EQ(0.96,person.amountFromPercent(-12,-8));
}

TEST_F(PersonTest,testEmptyTotalCost) {
    Person person;
    ASSERT_DOUBLE_EQ(0.0,person.totalCost(0.0,0,0));
}

TEST_F(PersonTest,testValidTotalCost) {
    Person person;
    ASSERT_DOUBLE_EQ(15.36,person.totalCost(12.00,20,8));
}

TEST_F(PersonTest,testNegativeTipTotalCost) {
    Person person;
    ASSERT_DOUBLE_EQ(10.56,person.totalCost(12.00,-20,8));
}

TEST_F(PersonTest,testNegativeTaxTotalCost) {
    Person person;
    ASSERT_DOUBLE_EQ(13.44,person.totalCost(12.00,20,-8));
}

TEST_F(PersonTest,testNegativeMealCostTotalCost) {
    Person person;
    ASSERT_DOUBLE_EQ(-15.36,person.totalCost(-12.00,20,8));
}

TEST_F(PersonTest,testiAllNegativeTotalCost) {
    Person person;
    ASSERT_DOUBLE_EQ(-8.64,person.totalCost(-12.00,-20,-8));
}

TEST_F(PersonTest,tesFormattedResult) {
    Person person;
    ASSERT_EQ("The total meal cost is 15 dollars.\n",person.formattedResult(12.00,20,8));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
