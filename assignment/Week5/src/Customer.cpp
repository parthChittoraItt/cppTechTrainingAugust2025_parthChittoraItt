#include "Utility.h"

Customer::Customer(std::string customerName, std::string customerPassword) : User(customerName, customerPassword) {}

IAccount *Customer::getAccount(long accountNumber, int pin)
{
    for (int accountIterator = 0; accountIterator < accounts.size(); accountIterator++)
    {
        if (accounts[accountIterator]->accountNumber == accountNumber && accounts[accountIterator]->pin == pin)
            return accounts[accountIterator];
    }
    return nullptr;
}

double Customer::depositMoney(long accountNumber, int pin, double amount)
{
    IAccount *account = getAccount(accountNumber, pin);
    if (!account)
        return -1;
    account->balance += amount;
    account->transactionHistory.push_back(deposited + std::to_string(amount));
    return account->balance;
}

double Customer::withdrawMoney(long accountNumber, int pin, double amount)
{
    IAccount *account = getAccount(accountNumber, pin);
    if (!account)
        return -1;
    if (account->balance < amount)
        return -2;
    account->balance -= amount;
    account->transactionHistory.push_back(withdrew + std::to_string(amount));
    return account->balance;
}

double Customer::checkBalance(long accountNumber, int pin)
{
    IAccount *account = getAccount(accountNumber, pin);
    if (account)
    {
        return account->balance;
    }
    return -1;
}

std::vector<std::string> Customer::fetchMiniStatement(long accountNumber, int pin)
{
    IAccount *account = getAccount(accountNumber, pin);
    if (!account)
        return std::vector<std::string>();
    int transactionSize = account->transactionHistory.size();
    std::vector<std::string> miniStatement;
    for (int stringIterator = std::max(0, transactionSize - 5); stringIterator < transactionSize; stringIterator++)
    {
        miniStatement.push_back(account->transactionHistory[stringIterator]);
    }
    return miniStatement;
}

std::vector<std::string> Customer::fetchBankStatement(long accountNumber, int pin)
{
    IAccount *account = getAccount(accountNumber, pin);
    if (!account)
        return std::vector<std::string>();
    return account->transactionHistory;
}

void Customer::displayMenu()
{
    std::cout << customerMenu;
}
bool Customer::processDepositRequest(long accountNumber, int pin)
{
    double amount;
    std::cout << amountToDeposit;
    amount = inputDouble();
    double balance = depositMoney(accountNumber, pin, amount);
    if (balance != -1)
        std::cout << newBalance << std::to_string(balance) << nextLine;
    else
    {
        std::cout << invalidCredentials;
        return false;
    }
    return true;
}

bool Customer::processWithdrawRequest(long accountNumber, int pin)
{
    double amount;
    std::cout << amountToWithdraw;
    amount = inputDouble();
    double balance = withdrawMoney(accountNumber, pin, amount);
    if (balance == -1)
        std::cout << invalidCredentials;
    else if (balance == -2)
        std::cout << insufficientBalance;
    else
        std::cout << newBalance << std::to_string(balance) << nextLine;
    return true;
}

bool Customer::showBalance(long accountNumber, int pin)
{
    double balance = checkBalance(accountNumber, pin);
    if (balance != -1)
        std::cout << currentBalance << balance << nextLine;
    else
        std::cout << invalidCredentials;
    return true;
}

bool Customer::showMiniStatement(long accountNumber, int pin)
{
    std::vector<std::string> miniStatement = fetchMiniStatement(accountNumber, pin);
    if (miniStatement.empty())
        std::cout << invalidCredentials;
    else
    {
        std::cout << miniStatementHeader;
        for (int i = 0; i < miniStatement.size(); i++)
        {
            std::cout << miniStatement[i] << nextLine;
        }
    }
    return true;
}

bool Customer::showBankStatement(long accountNumber, int pin)
{
    std::vector<std::string> bankStatement = fetchBankStatement(accountNumber, pin);
    if (bankStatement.empty())
        std::cout << invalidCredentials;
    else
    {
        std::cout << bankHeader;
        for (int i = 0; i < bankStatement.size(); i++)
        {
            std::cout << bankStatement[i] << nextLine;
        }
    }
    return true;
}

bool Customer::processMenu(int customerChoice, long accountNumber, int pin)
{
    switch (customerChoice)
    {
    case 1:
        processDepositRequest(accountNumber, pin);
        break;
    case 2:
        processWithdrawRequest(accountNumber, pin);
        break;
    case 3:
        showBalance(accountNumber, pin);
        break;
    case 4:
        showMiniStatement(accountNumber, pin);
        break;
    case 5:
        showBankStatement(accountNumber, pin);
        break;
    case 6:
        break;
    default:
        std::cout << invalidChoice;
        return false;
    }

    return true;
}
