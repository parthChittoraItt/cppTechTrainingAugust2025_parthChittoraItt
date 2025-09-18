#include <bits/stdc++.h>
using namespace std;

class CustomExcept
{
private:
    string message;

public:
    CustomExcept(const string &msg)
    {
        this->message = msg;
    }
    const char *what() const
    {
        return message.c_str();
    }
};

int main()
{
    try
    {
        throw CustomExcept("This is a custom exception!");
    }
    catch (const CustomExcept &e)
    {
        cout << e.what();
    }
    return 0;
}