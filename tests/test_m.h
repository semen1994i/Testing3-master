#ifndef TEST_M_H
#define TEST_M_H

extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(move1,t1){
    int gameBoard[8][8] = {{-1, 0,-1, 0,-1, 0,-1, 0},
                           { 0,-1, 0,-1, 0,-1, 0,-1},
                           {-2, 0,-1, 0,-1, 0,-1, 0},
                           { 0, 0, 0, 0, 0, 0, 0, 0},
                           { 0, 0, 0, 0, 0, 0, 0, 0},
                           { 0, 1, 0, 1, 0, 1, 0, 1},
                           { 1, 0, 1, 0, 1, 0, 1, 0},
                           { 0, 1, 0, 1, 0, 1, 0, 1}
                          };
    move(0,2,2,4,gameBoard);
    move(7,5,6,4,gameBoard);
    EXPECT_EQ(gameBoard[2][0], 0);
    EXPECT_EQ(gameBoard[4][2], -2);
    EXPECT_EQ(gameBoard[5][7], 0);
    EXPECT_EQ(gameBoard[4][6], 1);
}

TEST(move2,t1){
    int gameBoard[8][8] = {{-1, 0,-1, 0,-1, 0,-1, 0},
                           { 0,-1, 0,-1, 0,-1, 0,-1},
                           {-2, 0,-1, 0,-1, 0,-1, 0},
                           { 0, 0, 0, 0, 0, 0, 0, 0},
                           { 0, 0, 0, 0, 0, 0, 0, 0},
                           { 0, 1, 0, 1, 0, 1, 0, 1},
                           { 1, 0, 1, 0, 1, 0, 1, 0},
                           { 0, 1, 0, 1, 0, 1, 0, 1}
                          };
    move(2,2,2,4,gameBoard);
    move(7,7,5,4,gameBoard);
    EXPECT_EQ(gameBoard[2][2], 0);
    EXPECT_EQ(gameBoard[4][2], -1);
    EXPECT_EQ(gameBoard[7][7], 0);
    EXPECT_EQ(gameBoard[4][5], 1);
}

TEST(move2,t2){
    int gameBoard[8][8] = {{-1, 0,-1, 0,-1, 0,-1, 0},
                           { 0,-1, 0,-1, 0,-1, 0,-1},
                           {-2, 0,-1, 0,-1, 0,-1, 0},
                           { 0, 0, 0, 0, 0, 0, 0, 0},
                           { 0, 0, 0, 0, 0, 0, 0, 0},
                           { 0, 1, 0, 1, 0, 1, 0, 1},
                           { 1, 0, 1, 0, 1, 0, 1, 0},
                           { 0, 1, 0, 1, 0, 1, 0, 1}
                          };
    move(4,2,7,4,gameBoard);
    move(7,5,5,6,gameBoard);
    EXPECT_EQ(gameBoard[2][4], 0);
    EXPECT_EQ(gameBoard[4][7], -1);
    EXPECT_EQ(gameBoard[5][7], 0);
    EXPECT_EQ(gameBoard[6][5], 1);
}
#endif // TEST_M_H
