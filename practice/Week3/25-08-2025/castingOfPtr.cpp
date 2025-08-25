#include <iostream>
int main()
{                 //             ....    bit1      bit0
    int a = 1025; // 00000000 00000000 00000100 00000001
    int *p = &a;
    std::cout << "Address in p: " << p << "value in p :" << *p << std::endl;
    std::cout<<p+1<<std::endl;
    std::cout<< p+3<< std::endl;
    char *p0;
    p0 = (char *)p;
    std::cout << "Address in p0: " << (void *)p0 << " value in *p0: " << (int)*p0 << std::endl;
    return 0;
}