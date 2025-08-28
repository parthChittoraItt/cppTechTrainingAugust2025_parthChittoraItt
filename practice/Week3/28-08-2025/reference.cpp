#include <iostream>
int changeValue(int &a)
{
    a = 10;
    return a;
}
int main()
{
    int c = 100;
    std::cout << c << std::endl;
    changeValue(c);
    std::cout << c << std::endl;
    return 0;
}