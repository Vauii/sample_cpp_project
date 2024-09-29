#include <gtest/gtest.h>

#include "my_add.hpp"

TEST(Add, Simple)
{
    EXPECT_EQ(my_add(2, 400), 402);
    EXPECT_EQ(my_add(2, 400), my_add(400, 2));
    EXPECT_EQ(my_add(-1, 1), 0);
}