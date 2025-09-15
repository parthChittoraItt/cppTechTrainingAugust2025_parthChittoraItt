#ifndef IADMIN_H
#define IADMIN_H
#include "User.h"
#include "ICustomer.h"
#include "IAccount.h"
#include <string>
class IAdmin : public virtual User
{
public:
    virtual ICustomer *createCustomer(std::string customerName, std::string customerPassword) = 0;
    virtual IAccount *openAccount(std::string customerName, int pin) = 0;
    virtual ~IAdmin() {};
};
#endif
