#include <iostream>
#include <vector>
#include <string>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

void fill_vector(std::vector<int>& vec, int count) {
    for (int i = 0; i < count; ++i) {
        vec.push_back(i * i);
    }
}

void print_vector(const std::vector<int>& vec) {
    std::cout << "Vector contents: ";
    for (int val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int buggy_function(int a, int b) {
    int result = 0;
    int* ptr = nullptr;

    if (b == 0) {
        *ptr = 42; 
    } else {
        result = a / b;
    }

    return result;
}

int main() {
    std::cout << "Starting program..." << std::endl;

    int n = 5;
    int fact = factorial(n);
    std::cout << "Factorial of " << n << " is " << fact << std::endl;

    std::vector<int> data;
    fill_vector(data, 10);
    print_vector(data);

    int a = 10;
    int b = 0;
    int res = buggy_function(a, b);
    std::cout << "Result: " << res << std::endl;

    std::cout << "Program finished." << std::endl;
    return 0;
}
