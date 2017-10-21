//unittest.cpp
#include <iostream>
#include "gtest/gtest.h"
#include "sum.h" // this is your header file
TEST(SumTest, EqualTest){
  std::cout << "Starting 2+2 test";
  EXPECT_EQ(4, sum(2, 2));
  EXPECT_EQ(10, sum(6, 4)) << "6 and 4 not added  correctly";
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

