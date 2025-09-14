#ifndef IACCOUNT_H
#define IACCOUNT_H
#include <string>
#include <vector>
class IAccount
{
public:
    long accountNumber;
    double balance;
    std::string customerName;
    int pin;
    std::vector<std::string> transactionHistory;
    virtual ~IAccount() = default;
};

#endif
