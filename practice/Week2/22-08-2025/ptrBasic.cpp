#include <iostream>


int main() {
    int x = 5;        
    int* ptr = &x;      

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of ptr  " << ptr << std::endl;
    std::cout << "Value at the ptr points to: " << *ptr << std::endl;
    *ptr = 92350;
    std::cout << "Value of x: " << x << std::endl;
    return 0;
}
