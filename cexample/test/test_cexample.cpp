/*
 * test_cexample.cpp
 *
 *  Created on: 22 Feb 2018
 *      Author: Mathias Bucher
 */
#include "gtest/gtest.h"
#include "cexample.h"


TEST(cexample, add)
{
	ASSERT_EQ(add(2,4), 6);
}
