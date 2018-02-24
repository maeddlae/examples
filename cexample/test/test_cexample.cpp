/**
 * \file   test_cexample.cpp
 * \author Mathias Bucher
 * \date   24 Feb 2018
 *
 * Simple example of a C unit test without mocks.
 */

#include "gtest/gtest.h"
#include "cexample.h"

/**
 * Test class for cexample
 */
class Test_cexample : public ::testing::Test
{
public:
	/**
	 * Is called before each test
	 */
	void SetUp()
	{

	}

	/**
	 * Is called after each test
	 */
	void TearDown()
	{

	}
};

/**
 * Test example of add method
 * @param Test_anotherc Test class which contains SetUp and TearDown.
 * Is also test group name.
 * @param mac Test case name.
 */
TEST_F(Test_cexample, add)
{
	ASSERT_EQ(add(2,3),5);
}
