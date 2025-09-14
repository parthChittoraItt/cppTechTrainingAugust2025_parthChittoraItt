#ifndef BANK_H
#define BANK_H
#include "IAdmin.h"
#include "ICustomer.h"
#include "IAccount.h"
#include "IBank.h"
#include <vector>
#include <string>
class Bank : public IBank
{

public:
    IAdmin &admin;
    std::vector<ICustomer *> customers;
    std::vector<IAccount *> accounts;

    Bank(IAdmin &admin);
    void addCustomer(ICustomer *customer) override { customers.push_back(customer); }
    void addAccount(IAccount *account) override { accounts.push_back(account); }
    ICustomer *findCustomer(std::string &customerName) override;
    IAccount *findAccount(long accountNumber) override;

    bool createAccount();
    bool closeExistingAccount();
    bool registerNewCustomer();
    bool removeExistingCustomer();
    bool listAllCustomers();

    bool processAdminChoice(int adminChoicee) override;
    bool removeCustomer(ICustomer *customer) override;
    bool removeAccount(IAccount *account) override;
    bool runCustomerSession(std::string customerName, std::string customerPassword) override;
    bool runAdminSession(std::string adminName, std::string adminPassword) override;
};
#endif
