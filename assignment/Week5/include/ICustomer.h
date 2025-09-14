#ifndef ICUSTOMER_H
#define ICUSTOMER_H
#include "User.h"
#include "IAccount.h"
#include <string>
#include <vector>
class ICustomer : public virtual User
{
public:
    
    virtual void addAccount(IAccount *account) = 0;
    virtual IAccount *getAccount(long accountNumber, int pin) = 0;
    virtual double depositMoney(long accountNumber, int pin, double amount) = 0;
    virtual double withdrawMoney(long accountNumber, int pin, double amount) = 0;
    virtual double checkBalance(long accountNumber, int pin) = 0;
    virtual std::vector<std::string> fetchMiniStatement(long accountNumber, int pin) = 0;
    virtual std::vector<std::string> fetchBankStatement(long accountNumber, int pin) = 0;
    virtual bool processMenu(int choice, long accountNumber, int pin) = 0;
    virtual std::vector<IAccount *> &getAccounts() = 0;
    virtual ~ICustomer() = default;
};
#endif
