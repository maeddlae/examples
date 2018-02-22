#include "gtest/gtest.h"
#include "test_cexample.cpp"
#include "test_cppexample.cpp"

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
