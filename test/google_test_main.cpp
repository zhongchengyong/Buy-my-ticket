//
// Created by 钟乘永 on 2018/2/25.
//

#include "google_test_main.h"

TEST(TEST1, CASE1) {
    bool neg = (-1 < 0) ^(-2 < 0);
    EXPECT_EQ(1, 1);
}

TEST(UT, CASE1){
    MyTest test;
    test.test();
}