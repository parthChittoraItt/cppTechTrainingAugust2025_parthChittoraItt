#include <iostream>
int main()
{
    int x = 11133;
    int y = 2;
    try
    {
        if (y % 2 == 0)
        {
            throw; // it will also terminate the program
        }
    }
    catch (int e)
    {
        if (e == -1)
            std::cout << "Exception caught odd number.\n";
    }
    // try
    // {
        if (y % 2 == 0)
        {
            throw -2;  // a terminate fn is called which calls abort then since there is no matching catch
        }
    // }
    // catch (int e)
    // {
        // if (e == -2)
        //     std::cout << "Exception caught even number.\n";
    // }
    return 0;
}