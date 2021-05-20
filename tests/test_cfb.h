#ifndef TEST_CFB_H
#define TEST_CFB_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(checkForBoard,poz){
    ASSERT_EQ(checkForBoard(2,4),1);
    ASSERT_EQ(checkForBoard(1,1),1);
    ASSERT_EQ(checkForBoard(7,7),1);
    ASSERT_EQ(checkForBoard(3,5),1);
    ASSERT_EQ(checkForBoard(6,8),1);
    ASSERT_EQ(checkForBoard(1,3),1);
    ASSERT_EQ(checkForBoard(7,5),1);
}

TEST(checkForBoard,neg){
    ASSERT_EQ(checkForBoard(1,0),0);
    ASSERT_EQ(checkForBoard(3,4),0);
    ASSERT_EQ(checkForBoard(2,5),0);
    ASSERT_EQ(checkForBoard(6,7),0);
    ASSERT_EQ(checkForBoard(1,4),0);
    ASSERT_EQ(checkForBoard(0,5),0);
    ASSERT_EQ(checkForBoard(1,6),0);
}
#endif // TEST_CFB_H
