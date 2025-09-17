#include <iostream>
#include <exception>
int main()
{
    int a = 10;
    try
    {
        int *p = new int[1000000000000];
        std::cout << "Memory allocation is succesfull.";
        delete[] p;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception occured due to very large array size.";
    }
    return 0;
}