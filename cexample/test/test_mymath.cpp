/**
 * @file   test_mymath.cpp
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Tests mymath.cpp
 */

#include "gtest/gtest.h"
#include "mymath.h"
/**
 * Tests class MyMath
 */
class Test_MyMath : public ::testing::Test
{
protected:
	MyMath mymath; ///< make object of your class here
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
 * Tests myadd method
 * @param Test_MyMath Test class which contains SetUp and TearDown.
 * Is also test group name.
 * @param myadd Test case name.
 */
TEST_F(Test_MyMath, myadd)
{
	ASSERT_EQ(mymath.myadd(3,4), 7);
}

/**
 * Tests mymul method
 * @param Test_MyMath Test class which contains SetUp and TearDown.
 * Is also test group name.
 * @param mymul Test case name.
 */
TEST_F(Test_MyMath, mymul)
{
	ASSERT_EQ(mymath.mymul(3,4), 12);
}
