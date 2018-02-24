/**
 * \file   run.cpp
 * \author Mathias Bucher
 * \date   22 Feb 2018
 *
 * Runs all tests which do not contain another main method.
 * Be sure that no other main method is included when building this file.
 */
#include "gtest/gtest.h"
#include "test_cexample.cpp"
#include "test_cppexample.cpp"
#include "test_mymath.cpp"
#include "test_fibonacci.cpp"

/**
 * Runs all tests
 */
int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


