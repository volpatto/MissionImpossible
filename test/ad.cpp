#include "AutoDiffCpp/ad.hpp"

#include <gtest/gtest.h>
#include <vector>

using namespace AutoDiffCpp;

TEST(AD, basic)
{
  AD<double> x1(1), x2(2);

  EXPECT_EQ(x1.index(), 0);
  EXPECT_EQ(x1.value(), 1);

  EXPECT_EQ(x2.index(), 1);
  EXPECT_EQ(x2.value(), 2);
}