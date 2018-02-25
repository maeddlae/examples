/**
 * @file   test_fibonacci.cpp
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Test Fibonacci class
 */
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "mocks/mock_MyMath.cpp"
using ::testing::Exactly;
using ::testing::Return;
using ::testing::InSequence;

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
TEST_F(Test_Fibonacci, getNext_once)
{
	MockMyMath mymath_mock;
	Fibonacci fb(&mymath_mock);

	EXPECT_CALL(mymath_mock, myadd(1,1))
	.Times(Exactly(1))
	.WillOnce(Return(2));

	ASSERT_EQ(fb.getNext(),2);
}

/**
 * Test getNext method with multiple calls
 * @param Test_Fibonacci Test class which contains SetUp and TearDown.
 * Is also test group name.
 * @param getNext Test case name.
 */
TEST_F(Test_Fibonacci, getNext_multiple)
{
	InSequence dummy;
	MockMyMath mymath_mock;
	Fibonacci fb(&mymath_mock);

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
