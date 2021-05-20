#ifndef TEST_CM_H
#define TEST_CM_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(checkMove,poz){
    int gb[8][8] = {
                    {-1, 0, 2, 0, 0, 0, 0, 0},
                    { 0, 0, 0, 0,-1, 0, 0, 0},
                    { 0, 0, 0, 0, 0, 0, 1, 0},
                    { 0, 0,-1, 0, 0, 1, 0, 0},
                    { 0, 0, 0, 1, 0, 0, 0, 0},
                    { 0, 0, 0, 0, 0, 0, 0,-2},
                    { 0, 0, 0,-1, 0, 0, 0, 0},
                    {-2, 0, 1, 0, 0, 0, 0, 0}
                   };
    ASSERT_EQ(checkMove(2,3,3,4,gb),0);
    ASSERT_EQ(checkMove(0,7,7,0,gb),1);
    ASSERT_EQ(checkMove(2,3,3,4,gb),1);
    ASSERT_EQ(checkMove(0,0,1,1,gb),1);
    ASSERT_EQ(checkMove(7,5,4,2,gb),1);
}
TEST(checkMove,neg){
    int gb[8][8] = {
                    {-1, 0, 2, 0, 0, 0, 0, 0},
                    { 0, 0, 0, 0,-1, 0, 0, 0},
                    { 0, 0, 0, 0, 0, 0, 1, 0},
                    { 0, 0,-1, 0, 0, 1, 0, 0},
                    { 0, 0, 0, 1, 0, 0, 0, 0},
                    { 0, 0, 0, 0, 0, 0, 0,-2},
                    { 0, 0, 0,-1, 0, 0, 0, 0},
                    {-2, 0, 1, 0, 0, 0, 0, 0}
                   };
    ASSERT_EQ(checkMove(2,3,3,4,gb),0);
    ASSERT_EQ(checkMove(0,7,5,0,gb),0);
    ASSERT_EQ(checkMove(2,3,3,6,gb),0);
    ASSERT_EQ(checkMove(0,2,1,2,gb),0);
    ASSERT_EQ(checkMove(1,7,7,2,gb),0);
}


TEST(checkMove,t3){

    int gb[8][8] = {

                    {-1, 0, 2, 0, 0, 0, 0, 0},

                    { 0, 0, 0, 0,-1, 0, 0, 0},

                    { 0, 0, 0, 0, 0, 0, 1, 0},

                    { 0, 0,-1, 0, 0, 1, 0, 0},

                    { 0, 0, 0, 1, 0, 0, 0, 0},

                    { 0, 0, 0, 0, 0, 0, 0,-2},

                    { 0,-1, 0,-1, 0, 0, 0, 0},

                    {-2, 0, 1, 0, 0, 0, 0, 0}

                   };

    ASSERT_EQ(checkMove(0,7,2,5,gb),1);
    ASSERT_EQ(gb[6][1],0);

}

TEST(checkMove,t5){

    int gb[8][8] = {

                    {-1, 0, 2, 0, 0, 0, 0, 0},

                    { 0, 0, 0, 0,-1, 0, 0, 0},

                    { 0, 0, 0, 0, 0, 0, 1, 0},

                    { 0, 0, 0, 0, 0, 1, 0, 0},

                    { 0, 0, 0,-2, 0, 0, 0, 0},

                    { 0, 0, 0, 0, 0, 0, 0,-2},

                    { 0,-1, 0,-1, 0, 0, 0, 0},

                    {-2, 0, 1, 0, 0, 0, 0, 0}

                   };

    ASSERT_EQ(checkMove(3,4,1,2,gb),1);
    ASSERT_EQ(checkMove(3,4,5,2,gb),1);
    ASSERT_EQ(checkMove(3,4,5,6,gb),1);
    ASSERT_EQ(checkMove(3,4,1,6,gb),1);

}

TEST(checkMove,t4){

    int gb[8][8] = {

                    {-1, 0, 2, 0, 0, 0, 0, 0},

                    { 0, 0, 0, 0,-1, 0, 0, 0},

                    { 0,-1, 0, 0, 0, 1, 1, 0},

                    { 0, 0,-1, 0, 1, 1, 0, 0},

                    { 0, 0, 0, 2, 0, 0, 0, 0},

                    { 0, 0, 0, 0,-1, 0, 0,-2},

                    { 0,-1, 0,-1, 0,-1, 0, 0},

                    { 0, 0, 1, 0, 0, 0, 0, 0}

                   };

    ASSERT_EQ(checkMove(3,4,0,1,gb),0);
    ASSERT_EQ(checkMove(3,4,5,2,gb),0);
    ASSERT_EQ(checkMove(3,4,6,7,gb),0);
    ASSERT_EQ(checkMove(3,4,0,7,gb),1);
    ASSERT_EQ(gb[6][1],0);
    

}
#endif // TEST_CM_H
