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

TEST_F(SolutionTest,testEmptyGetPhoneBook) {
    Solution solution;
    std::map<std::string,int> phoneBook;
    phoneBook = solution.getPhoneBook();
    ASSERT_EQ(true,phoneBook.empty());
}

TEST_F(SolutionTest,testOneEntryGetPhoneBookIsNotEmpty) {
    Solution solution;
    std::map<std::string,int> phoneBook;
    solution.setPhoneBook("sam", 99912222);
    phoneBook = solution.getPhoneBook();
    ASSERT_EQ(false,phoneBook.empty());
}

TEST_F(SolutionTest,testEmptyMapNotFoundEntySearchPhonebook) {
    Solution solution;
    std::map<std::string,int> phoneBook;
    phoneBook = solution.getPhoneBook();
    ASSERT_EQ(true,phoneBook.empty());
    ASSERT_EQ("Not found\n", solution.searchPhoneBook("sam"));
}

TEST_F(SolutionTest,testPopulatedMapNotFoundEntySearchPhonebook) {
    Solution solution;
    std::map<std::string,int> phoneBook;
    solution.setPhoneBook("sam", 99912222);
    phoneBook = solution.getPhoneBook();
    ASSERT_EQ(false,phoneBook.empty());
    ASSERT_EQ("Not found\n", solution.searchPhoneBook("invalid"));
}

TEST_F(SolutionTest,testPopulatedMapValidEntrySearchPhonebook) {
    Solution solution;
    std::map<std::string,int> phoneBook;
    solution.setPhoneBook("sam", 99912222);
    phoneBook = solution.getPhoneBook();
    ASSERT_EQ(false,phoneBook.empty());
    ASSERT_EQ("sam=99912222\n", solution.searchPhoneBook("sam"));
}

TEST_F(SolutionTest,testPopulatedMapiMultipleValidEntrySearchPhonebook) {
    Solution solution;
    std::map<std::string,int> phoneBook;
    solution.setPhoneBook("sam", 99912222);
    solution.setPhoneBook("tom", 11122222);
    solution.setPhoneBook("harry", 12299933);
    phoneBook = solution.getPhoneBook();
    ASSERT_EQ(false,phoneBook.empty());
    ASSERT_EQ("sam=99912222\n", solution.searchPhoneBook("sam"));
    ASSERT_EQ("tom=11122222\n", solution.searchPhoneBook("tom"));
    ASSERT_EQ("harry=12299933\n", solution.searchPhoneBook("harry"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
