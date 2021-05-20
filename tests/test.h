#ifndef TEST_H
#define TEST_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(checkOnDestroy,poz){

    int gB[8][8] = { {-1, 0,-1, 0,-1, 0,-1, 0},
                     { 0,-1, 0,-1, 0,-1, 0,-1},
                     {-2, 0,-1, 0,-1, 0,-1, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 1, 0, 1, 0, 1, 0, 1},
                     { 1, 0, 1, 0, 1, 0, 1, 0},
                     { 0, 1, 0, 1, 0, 1, 0, 1} };
    ASSERT_EQ(checkOnDestroy(1,1,gB),0);
    ASSERT_EQ(checkOnDestroy(5,1,gB),0);
    ASSERT_EQ(checkOnDestroy(2,2,gB),0);
    ASSERT_EQ(checkOnDestroy(6,6,gB),0);
    ASSERT_EQ(checkOnDestroy(5,7,gB),0);
}

TEST(checkOnDestroy,neg){
    int gB[8][8] = { {-1, 0,-1, 0,-1, 0,-1, 0},
                     { 0,-1, 0,-1, 0,-1, 0,-1},
                     {-2, 0,-1, 0,-1, 0,-1, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 1, 0, 1, 0, 1, 0, 1},
                     { 1, 0, 1, 0, 1, 0, 1, 0},
                     { 0, 1, 0, 1, 0, 1, 0, 1} };
    ASSERT_EQ(checkOnDestroy(0,1,gB),1);
    ASSERT_EQ(checkOnDestroy(2,4,gB),1);
    ASSERT_EQ(checkOnDestroy(1,6,gB),1);
    ASSERT_EQ(checkOnDestroy(3,4,gB),1);
    ASSERT_EQ(checkOnDestroy(6,5,gB),1);
}

#endif
