#include <iostream>
void doubling(int a[], int length)
{
    for (int arrIterator = 0; arrIterator < length; arrIterator++)
    {
        a[arrIterator] = 2 * a[arrIterator];
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int length = sizeof(a) / sizeof(a[0]);
    doubling(a, length);
    for (int arrIterator = 0; arrIterator < length; arrIterator++)
    {
        std::cout << a[arrIterator];
    }
    return 0;
}