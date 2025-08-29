#include <iostream>
int changeValue(int *a)
{
    *a = 10;
    return *a;
}
int changeVal(int &a)
{
    a = 100;
    return a;
}
int main()
{
    int b = 10;
    int *a = &b;
    int &c = b;
    return 0;
}