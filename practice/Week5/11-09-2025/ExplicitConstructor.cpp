#include <iostream>

class PhoneNumber {
private:
    long number;
public:
    explicit PhoneNumber(long n) : number(n) {
        std::cout << "Explicit constructor called." << std::endl;
    }

    void dial() const {
        std::cout << "Dialing safely: " << number << std::endl;
    }
};

void makeCall(PhoneNumber p) {
    p.dial();
}

int main() {
    // PhoneNumber home = 1234567890L; // Implicit conversion not possible.
    PhoneNumber home(1234567890);
// Explicitly type casting
    makeCall(static_cast<PhoneNumber>(9876543210));
    makeCall(PhoneNumber{5551234567});
}
