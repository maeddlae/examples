/*
 * test_anotherc.cpp
 *
 *  Created on: 22 Feb 2018
 *      Author: Mathias Bucher
 */


#include "gtest/gtest.h"
#include "fff/fff.h"
#include "anotherc.h"

//FAKE_VALUE_FUNC(int, add, int, int);
//FAKE_VALUE_FUNC(int, foo);


TEST(anotherc, mac)
{
	ASSERT_EQ(9,mac(1,2,3));
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
