#include "Utility.h"

void Utility::inputAccountCredentials(long &accountNumber, int &pin)
{
    std::cout << inputAccountNumber;
    accountNumber = inputLong();
    std::cout << inputPin;
    pin = inputInt();
}

void Utility::inputUserCredentials(std::string &userName, std::string &password)
{
    std::cout << inputUserName;
    userName = inputString();
    std::cout << inputPassword;
    password = inputString();
}
