/**
 * \file   test_cppexample.cpp
 * \author Mathias Bucher
 * \date   24 Feb 2018
 *
 * Simple example cpp test without mocks.
 */

#include "gtest/gtest.h"
#include "cppexample.h"
/**
 * Tests CppExample class
 */
class Test_CppExample : public ::testing::Test
{
protected:
	CppExample cpp; ///< make object of your class here
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
 * Test example
 * @param Test_CppExample Test class which contains SetUp and TearDown.
 * Is also test group name.
 * @param getTrue Test case name.
 */
TEST_F(Test_CppExample, getTrue)
{
	ASSERT_TRUE(cpp.getTrue());
}
