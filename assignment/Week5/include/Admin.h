#ifndef ADMIN_H
#define ADMIN_H
#include "IAdmin.h"
#include "Customer.h"
#include "Account.h"
#include <string>
class Admin : public IAdmin
{
public:
    Admin(std::string adminName = "", std::string adminPassword = "");
    ICustomer *createCustomer(std::string customerName, std::string customerPassword) override;
    IAccount *openAccount(std::string customerName, int pin) override;
    void displayMenu() override;
};
#endif
