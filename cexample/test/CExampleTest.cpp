#include "gtest/gtest.h"
#include "cexample.h"

class CExampleTest : public ::testing::Test
{
	void SetUp()
	{

	}

	void TearDown()
	{

	}
};

TEST_F(CExampleTest, add)
{
	ASSERT_EQ(add(2,4), 6);
}
