#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "IAccount.h"
#include <string>
#include <vector>
class Account : public IAccount
{
public:
    Account(long accountNumber, std::string customerName, int pinCode)
    {
        this->accountNumber = accountNumber;
        this->customerName = customerName;
        this->pin = pinCode;
    }
};
#endif
