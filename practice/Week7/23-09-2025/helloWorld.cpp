#include<iostream>
#include <gtest/gtest.h>

TEST (Test1 , SubTest1){
    ASSERT_FALSE(1==2);
    std::cout<<"Hello!";
}
TEST (Test2, SubTest2){
    ASSERT_TRUE(1==1);
}
TEST (Test3, Subtest3){
    ASSERT_FALSE(1==1);
    // std::cout<<"Hello World";
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
