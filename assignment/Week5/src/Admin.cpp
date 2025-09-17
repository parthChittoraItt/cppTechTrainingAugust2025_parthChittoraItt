#include "Utility.h"

Admin::Admin(std::string adminName, std::string adminPassword) : User(adminName, adminPassword) {}

ICustomer *Admin::createCustomer(std::string customerName, std::string customerPassword)
{
    ICustomer *newCustomer = new Customer(customerName, customerPassword);
    return newCustomer;
}

IAccount *Admin::openAccount(std::string customerName, int pin)
{
    static long accountCounter = 1000;
    IAccount *newAccount = new Account(accountCounter++, customerName, pin);
    return newAccount;
}

void Admin::displayMenu()
{
    std::cout << adminMenu;
}
