#include "pch.h"

extern "C" {
#include "../../msvc-gtest-codecov-test/utils/math.c"
}

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(Plus, Maths) { EXPECT_EQ(MathPlus(1, 1), 2); }