/**
 * @file   test_FibonacciWithPrivateObject.cpp
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Test FibonacciWithPrivateObject class
 */
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "mocks/mock_MyMath.cpp"
using ::testing::Exactly;
using ::testing::Return;
using ::testing::InSequence;

#include "Fibonacci.h"

/**
 * Test FibonacciWithPrivateObject class
 */
class Test_FibonacciWithPrivateObject : public ::testing::Test
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
 * @param Test_FibonacciWithPrivateObject Test class which contains SetUp and TearDown.
 * Is also test group name.
 * @param getNext Test case name.
 */
TEST_F(Test_FibonacciWithPrivateObject, getNext_once)
{
	MockMyMath mymath_mock;
	FibonacciWithPrivateObject fb(&mymath_mock);

	EXPECT_CALL(mymath_mock, myadd(1,1))
	.Times(Exactly(1))
	.WillOnce(Return(2));

	ASSERT_EQ(fb.getNext(),2);
}

/**
 * Test getNext method with multiple calls
 * @param Test_FibonacciWithPrivateObject Test class which contains SetUp and TearDown.
 * Is also test group name.
 * @param getNext Test case name.
 */
TEST_F(Test_FibonacciWithPrivateObject, getNext_multiple)
{
	InSequence dummy;
	MockMyMath mymath_mock;
	FibonacciWithPrivateObject fb(&mymath_mock);

	EXPECT_CALL(mymath_mock, myadd(1,1))
	.Times(Exactly(1))
	.WillOnce(Return(2));
	EXPECT_CALL(mymath_mock, myadd(2,1))
	.Times(Exactly(1))
	.WillOnce(Return(3));
	EXPECT_CALL(mymath_mock, myadd(3,2))
	.Times(Exactly(1))
	.WillOnce(Return(5));

	ASSERT_EQ(fb.getNext(),2);
	ASSERT_EQ(fb.getNext(),3);
	ASSERT_EQ(fb.getNext(),5);
}
