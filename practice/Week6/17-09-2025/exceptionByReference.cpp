
#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("This is runtime exception");
    }

    catch (std::exception& e) {
        std::cout << "Caught: " << e.what();
    }

    return 0;
}