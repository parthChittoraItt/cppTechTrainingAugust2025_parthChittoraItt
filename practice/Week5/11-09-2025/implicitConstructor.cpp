#include <iostream>

class PhoneNumber
{
private:
    long number;

public:
    PhoneNumber(long n) : number(n)
    {
        std::cout << "Implicit constructor called." << std::endl;
    }

    void dial() const
    {
        std::cout << "Dialing: " << number << std::endl;
    }
};

void makeCall(PhoneNumber p)
{
    p.dial();
}

int main()
{
    PhoneNumber home = 1234567890;
    makeCall(home);
    makeCall(9876543210);
}
