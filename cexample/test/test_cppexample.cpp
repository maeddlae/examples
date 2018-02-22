/*
 * test_cppexample.cpp
 *
 *  Created on: 22 Feb 2018
 *      Author: Mathias Bucher
 */

#include "gtest/gtest.h"
#include "cppexample.h"

class Test_CppExample : public ::testing::Test
{
protected:
	CppExample cpp;

public:
	void SetUp()
	{

	}

	void TearDown()
	{

	}
};

TEST_F(Test_CppExample, getTrue)
{
	ASSERT_TRUE(cpp.getTrue());
}
