#ifndef IBANK_H
#define IBANK_H

#include "IAdmin.h"
#include "ICustomer.h"
#include "IAccount.h"
#include <vector>
#include <string>
class IBank
{
public:
    virtual void addCustomer(ICustomer *customer) = 0;
    virtual void addAccount(IAccount *account) = 0;
    virtual ICustomer *findCustomer(std::string &name) = 0;
    virtual IAccount *findAccount(long accountNumber) = 0;
    virtual bool processAdminChoice(int adminChoice) = 0;
    virtual bool removeCustomer(ICustomer *customer) = 0;
    virtual bool removeAccount(IAccount *account) = 0;
    virtual bool runCustomerSession(std::string customerName, std::string customerPassword) = 0;
    virtual bool runAdminSession(std::string adminName, std::string adminPassword) = 0;
    virtual ~IBank() = default;
};
#endif
