#include <iostream>
int sum(int &a, int &b)
{
    return a + b;
}
int main()
{
    int x = 10;
    int a = 3;
    int b = 2;
    x = sum(a, b);
    std::cout << "Value of x : "<< x << std::endl;
    return 0;
}