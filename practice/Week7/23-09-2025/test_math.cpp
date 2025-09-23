#include <gtest/gtest.h>
#include "sum.h"

TEST(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(sum(2, 3), 5);
}

TEST(AdditionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(sum(-2, -3), -5);
}

