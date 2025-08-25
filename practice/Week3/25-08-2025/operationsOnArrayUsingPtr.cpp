#include <iostream>
int getArraySum(int a[], int length)
{
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(a[0]) << std::endl;
    // int length = sizeof(a)/sizeof(a[0]); // here a is an pointer to an array int[]* a
    int sumOfArr = 0;
    for (int arrayIterator = 0; arrayIterator < length; arrayIterator++)
    {
        sumOfArr += a[arrayIterator];
    }
    return sumOfArr;
}
int main()
{
    int smplArr[] = {1, 2, 2, 45, 35, 25};
    std::cout<<smplArr<<std::endl;
    std::cout << sizeof(smplArr) << std::endl;
    std::cout << sizeof(smplArr[0]) << std::endl;
    int leng = sizeof(smplArr) / sizeof(smplArr[0]);
    std::cout << getArraySum(smplArr, leng) << std::endl;
    return 0;
}