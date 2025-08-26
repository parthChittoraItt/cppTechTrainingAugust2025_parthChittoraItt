#include <iostream>
int *add(int *a, int *b)
{
    int *c =new int;
    *c = *a + *b;
    return c;
}
int main()
{
    int a = 2, b = 4;
    int *ptr = add(&a, &b);
    std::cout << *ptr;
    return 0;
}