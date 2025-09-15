#include "Utility.h"

Bank::Bank(IAdmin &admin) : admin(admin) {}

bool Bank::createAccount()
{
    std::string customerName, customerPassword;
    Utility::inputUserCredentials(customerName, customerPassword);
    int pin;
    std::cout << setPin;
    pin = inputInt();
    ICustomer *customer = findCustomer(customerName);
    if (!customer)
    {
        customer = admin.createCustomer(customerName, customerPassword);
        addCustomer(customer);
    }
    IAccount *account = admin.openAccount(customerName, pin);
    addAccount(account);
    customer->addAccount(account);
    std::cout << accountCreation << account->accountNumber << nextLine;
    return true;
}

bool Bank::closeExistingAccount()
{
    long accountNumber;
    std::cout << inputAccountNumber;
    accountNumber = inputLong();
    IAccount *account = findAccount(accountNumber);
    if (account)
    {
        removeAccount(account);
        delete account;
        std::cout << accountClosed;
    }
    else
    {
        std::cout << accountNotFound;
    }
    return true;
}

bool Bank::registerNewCustomer()
{
    std::string userName, userPassword;
    Utility::inputUserCredentials(userName, userPassword);
    if (findCustomer(userName) && findCustomer(userName)->getPassword() == userPassword)
    {
        std::cout << customerExist;
        return false;
    }
    else
    {
        ICustomer *customer = admin.createCustomer(userName, userPassword);
        addCustomer(customer);
        std::cout << customerCreated;
    }
    return true;
}

bool Bank::removeExistingCustomer()
{
    std::string customerName;
    std::cout << inputCustomerName;
    customerName = inputString();
    ICustomer *customer = findCustomer(customerName);
    if (customer)
    {
        removeCustomer(customer);
        delete customer;
        std::cout << customerDeleted;
        return true;
    }
    else
    {
        std::cout << customerNotFound;
    }
    return false;
}

bool Bank::listAllCustomers()
{
    std::cout << customerHeader;
    for (int customerIterator = 0; customerIterator < customers.size(); customerIterator++)
    {
        std::cout << customers[customerIterator]->getUsername() << nextLine;
    }
    return true;
}

bool Bank::removeCustomer(ICustomer *customer)
{
    for (int customerIterator = 0; customerIterator < customers.size(); customerIterator++)
    {
        if (customers[customerIterator] == customer)
        {
            customers.erase(customers.begin() + customerIterator);
            return true;
        }
    }
    return false;
}

bool Bank::removeAccount(IAccount* account)
{
    for (int accountIterator = 0; accountIterator < accounts.size(); accountIterator++)
    {
        if (accounts[accountIterator] == account)
        {
            accounts.erase(accounts.begin() + accountIterator);
            return true;
        }
    }
    return false;
}

ICustomer *Bank::findCustomer(std::string &name)
{
    for (int customerIterator = 0; customerIterator < customers.size(); customerIterator++)
    {
        if (customers[customerIterator]->getUsername() == name)
            return customers[customerIterator];
    }
    return nullptr;
}

IAccount* Bank::findAccount(long accountNumber)
{
    for (int accountIterator = 0; accountIterator < accounts.size(); accountIterator++)
    {
        if (accounts[accountIterator]->accountNumber == accountNumber)
            return accounts[accountIterator];
    }
    return nullptr;
}

bool Bank::processAdminChoice(int adminChoice)
{
    switch (adminChoice)
    {
    case 1:
        createAccount();
        break;
    case 2:
        closeExistingAccount();
        break;
    case 3:
        registerNewCustomer();
        break;
    case 4:
        removeExistingCustomer();
        break;
    case 5:
        listAllCustomers();
        break;
    case 6:
        break;
    default:
        std::cout << invalidChoice;
        return false;
    }
    return true;
}

bool Bank::runAdminSession(std::string userName, std::string password)
{
    int adminChoice;
    if (userName == admin.getUsername() && password == admin.getPassword())
    {
        do
        {
            admin.displayMenu();
            adminChoice = inputInt();
            processAdminChoice(adminChoice);
        } while (adminChoice != 6);
    }
    else
    {
        std::cout << invalidCredentials;
    }
    return true;
}

bool Bank::runCustomerSession(std::string customerName, std::string customerPassword)
{
    int customerChoice;
    ICustomer *customer = findCustomer(customerName);
    if (customer && customer->getPassword() == customerPassword)
    {
        long accNo;
        int pin;
        Utility::inputAccountCredentials(accNo, pin);
        IAccount *account = customer->getAccount(accNo, pin);
        if (!account)
        {
            std::cout << invalidCredentials;
            return false;
        }
        do
        {
            customer->displayMenu();
            customerChoice = inputInt();
            customer->processMenu(customerChoice, accNo, pin);
        } while (customerChoice != 6);
    }
    if (customer && customer->getPassword() != customerPassword)
    {
        std::cout << invalidPassword;
    }
    else
    {
        std::cout << customerNotFound;
    }
    return true;
}

Bank::~Bank()
{
    for (int customerIterator = 0; customerIterator < customers.size(); customerIterator++)
    {
        delete customers[customerIterator];
    }
    customers.clear();
    for (int accountIterator = 0; accountIterator < accounts.size(); accountIterator++)
    {
        delete accounts[accountIterator];
    }
    accounts.clear();
}
