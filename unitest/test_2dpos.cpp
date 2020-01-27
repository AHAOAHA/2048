/******************************************************************
 * Copyright(C) 2020-2020. All right reserved.
 * 
 * Filename: test_2dpos.cpp
 * Author: ahaoozhang
 * Date: 2020-01-20 15:47:54 (星期一)
 * Describe: 
 ******************************************************************/
#include <gtest/gtest.h>
#include <vector>
#include "2048.h"

using namespace std;

TEST(TESTDEMO, TASK) {

    Game_2048 g;
    g.init(4,4);
    Pos pos;
    ASSERT_FALSE(g.is_outof_range(pos.right()));
    ASSERT_FALSE(g.is_outof_range(Pos(1, 0)));
    ASSERT_FALSE(g.is_outof_range(Pos(2, 0)));
    ASSERT_FALSE(g.is_outof_range(Pos(3, 0)));
    ASSERT_FALSE(g.is_outof_range(Pos(0, 1)));
    ASSERT_FALSE(g.is_outof_range(Pos(1, 1)));
    ASSERT_FALSE(g.is_outof_range(Pos(2, 1)));
    ASSERT_FALSE(g.is_outof_range(Pos(3, 1)));
    ASSERT_FALSE(g.is_outof_range(Pos(0, 2)));
    ASSERT_FALSE(g.is_outof_range(Pos(1, 2)));
    ASSERT_FALSE(g.is_outof_range(Pos(2, 2)));
    ASSERT_FALSE(g.is_outof_range(Pos(3, 2)));
    ASSERT_FALSE(g.is_outof_range(Pos(0, 3)));
    ASSERT_FALSE(g.is_outof_range(Pos(1, 3)));
    ASSERT_FALSE(g.is_outof_range(Pos(2, 3)));
    ASSERT_FALSE(g.is_outof_range(Pos(3, 3)));
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}