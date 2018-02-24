/**
 * \file   test_anotherc.cpp
 * \author Mathias Bucher
 * \date   22 Feb 2018
 * \brief  Two examples of C tests with mock.
 */

#include "gtest/gtest.h"
#include "fff/fff.h"
#include "anotherc.h"

DEFINE_FFF_GLOBALS

FAKE_VALUE_FUNC(int, add, int, int);

class Test_anotherc : public ::testing::Test
{
public:
	/**
	 * \brief Is called before each test
	 */
	void SetUp()
	{

	}

	/**
	 * \brief Is called after each test
	 */
	void TearDown()
	{
		// reset fakes: must be done for each fake
		RESET_FAKE(add);

		// reset fake history is needed in order to check call history
		FFF_RESET_HISTORY();
	}
};

/**
 * \brief Test example of a method which calls mock once.
 * \param Test_anotherc Test class which contains SetUp and TearDown.
 * Is also test group name.
 * \param mac Test case name.
 */
TEST_F(Test_anotherc, mac)
{
	add_fake.return_val = 4;
	ASSERT_EQ(mac(1,2,3), 12);
    ASSERT_EQ(add_fake.call_count, 1);
	ASSERT_EQ(add_fake.arg0_val, 1);
	ASSERT_EQ(add_fake.arg1_val, 2);
}

/**
 * \brief Test example of a method which calls mock twice.
 * \param Test_anotherc Test class which contains SetUp and TearDown.
 * Is also test group name.
 * \param mac Test case name.
 */
TEST_F(Test_anotherc, mac2)
{
	int add_return_vals[2] = { 3, 4};
	SET_RETURN_SEQ(add, add_return_vals, 2);

	ASSERT_EQ(mac2(1,2,3), 12);

	ASSERT_EQ(add_fake.arg0_history[0],1);
	ASSERT_EQ(add_fake.arg1_history[0],2);
	ASSERT_EQ(add_fake.arg0_history[1],1);
	ASSERT_EQ(add_fake.arg1_history[1],3);
}

/**
 * \brief main method for calling tests in this file.
 */
int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
