#include <iostream>

void counterFunction()
{
    static int count = 0;
    count++;
    std::cout << "Function called " << count << " times" << std::endl;
}

int main()
{
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}
