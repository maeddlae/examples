#include "gtest/gtest.h"
#include "FooTest.cpp"
#include "CExampleTest.cpp"
#include "test_cexample.cpp"

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
