#include <iostream>

int main()
{
    int a = 9;
    int *p =&a;
    std::cout<<"Address of a :"<<p<<std::endl;
    std::cout<<"Address of a :"<<&a<<std::endl;
    std::cout<<"Value at p i.e a"<<*p<<std::endl;
    std::cout<<"value of a :"<<a<<std::endl;
    std::cout<<"Address of p"<<&p<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;
    int b =12;
    *p = b;
    std::cout<<p<<std::endl;
    std::cout<<&b<<std::endl;
    std::cout<<*p<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<&p<<std::endl;
    std::cout<<"-----------------------------"<<std::endl;

    std::cout<<p<<std::endl;
    std::cout<<p+1<<std::endl;
    std::cout<<&p<<std::endl;
    std::cout<<&p+1<<std::endl;
    std::cout<<sizeof(p)<<std::endl;
     return 0;
}