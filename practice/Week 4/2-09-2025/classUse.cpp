#include <iostream>
class ClassA
{
public:
    int principal = 10;
    float rate = 1.3f;
    int time = 12;
};

int main()
{
    ClassA abc;
    float simple_interest = abc.principal * abc.rate * abc.time / 100;
    std::cout << abc.principal << std::endl;
    std::cout << abc.rate << std::endl;
    std::cout << abc.time << std::endl;
    std::cout << simple_interest << std::endl;
    return 0;
}