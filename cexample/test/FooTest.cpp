#include "gtest/gtest.h"
#include "Foo.h"

class FooTest : public ::testing::Test
{
protected:
	Foo foo;

public:
	void SetUp()
	{

	}

	void TearDown()
	{

	}
};

TEST_F(FooTest, Foo)
{
	ASSERT_TRUE(foo.foo());
}
