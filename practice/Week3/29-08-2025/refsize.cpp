#include <iostream>

int main() {
    int x = 42;
    int& ref = x;
    int* a;
    std::cout << "Size of reference: " << sizeof(ref) << std::endl;
    std::cout << "Size of ptr: " << sizeof(a) << std::endl;
    return 0;
}
