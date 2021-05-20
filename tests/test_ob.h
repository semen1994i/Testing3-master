#ifndef TEST_OB_H
#define TEST_OB_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>
TEST(outBoard,poz){
    ASSERT_EQ(outBoard(2,5),1);
    ASSERT_EQ(outBoard(0,4),1);
    ASSERT_EQ(outBoard(2,2),1);
    ASSERT_EQ(outBoard(7,7),1);
    ASSERT_EQ(outBoard(0,0),1);
    ASSERT_EQ(outBoard(2,4),1);
    ASSERT_EQ(outBoard(7,1),1);
    ASSERT_EQ(outBoard(5,0),1);
    ASSERT_EQ(outBoard(5,1),1);
}

TEST(outBoard,neg){
    ASSERT_EQ(outBoard(22,5),0);
    ASSERT_EQ(outBoard(2,55),0);
    ASSERT_EQ(outBoard(-1,5),0);
    ASSERT_EQ(outBoard(12,6),0);
    ASSERT_EQ(outBoard(2,-1),0);
    ASSERT_EQ(outBoard(10,5),0);
    ASSERT_EQ(outBoard(8,1),0);
    ASSERT_EQ(outBoard(-1,-100),0);
    ASSERT_EQ(outBoard(2,8),0);

}
#endif // TEST_OB_H
