/*
 * test_anotherc.cpp
 *
 *  Created on: 22 Feb 2018
 *      Author: Mathias Bucher
 */


#include "gtest/gtest.h"
#include "fff/fff.h"
#include "anotherc.h"

DEFINE_FFF_GLOBALS

FAKE_VALUE_FUNC(int, add, int, int);

class Test_anotherc : public ::testing::Test
{
public:
	void SetUp()
	{

	}

	void TearDown()
	{
		RESET_FAKE(add);

		FFF_RESET_HISTORY();
	}
};

TEST_F(Test_anotherc, mac)
{
	add_fake.return_val = 4;
	ASSERT_EQ(mac(1,2,3), 12);
    ASSERT_EQ(add_fake.call_count, 1);
	ASSERT_EQ(add_fake.arg0_val, 1);
	ASSERT_EQ(add_fake.arg1_val, 2);
}

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

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
