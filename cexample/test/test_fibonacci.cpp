/**
 * @file   test_fibonacci.cpp
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Test Fibonacci class
 */
#include "gtest/gtest.h"
#include "fibonacci.h"

/**
 * Test Fibonacci class
 */
class Test_Fibonacci : public ::testing::Test
{
protected:

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
 * Test getNext method
 * @param Test_Fibonacci Test class which contains SetUp and TearDown.
 * Is also test group name.
 * @param getNext Test case name.
 */
TEST_F(Test_Fibonacci, getNext)
{
	Fibonacci fb;

	ASSERT_EQ(fb.getNext(),2);
	ASSERT_EQ(fb.getNext(),3);
	ASSERT_EQ(fb.getNext(),5);
	ASSERT_EQ(fb.getNext(),8);
}
