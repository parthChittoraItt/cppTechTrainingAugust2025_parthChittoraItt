#include <iostream>

int main()
{
    int x = 11133;
    int y = 2;
    try
    {
        if (x % 2 != 0)
        {
            throw -1;
            std::cout<<"The value of x is "<< x<<std::endl;
        }
        if (y % 2 == 0)
        {
            throw -2;
        }
    }
    catch (int e)
    {
        if (e == -1)
            std::cout << "Exception caught odd number.\n";
    }
    try
    {
        if (y % 2 == 0)
        {
            throw -2;
        }
    }
    catch (int e)
    {
        if (e == -2)
            std::cout << "Exception caught even number.\n";
    }
    // catch(int e){
    //     if(e==-1)
    //         std::cout<<"Exception caught odd number.\n"<<std::endl;

    //     if(e==-2)
    //         std::cout<<"Exception caught even number.\n"<<std::endl;

    // }

    return 0;
}