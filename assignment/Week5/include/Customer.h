#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "ICustomer.h"
#include "IAccount.h"
#include <string>
#include <vector>

class Customer : public ICustomer
{
private:
    std::vector<IAccount *> accounts;

public:
    Customer(std::string customerName = "", std::string pwd = "");
    void addAccount(IAccount *account) override { accounts.push_back(account); }
    IAccount *getAccount(long accountNumber, int pin) override;

    double depositMoney(long accountNumber, int pin, double amount) override;
    double withdrawMoney(long accountNumber, int pin, double amount) override;
    double checkBalance(long accountNumber, int pin) override;
    std::vector<std::string> fetchMiniStatement(long accountNumber, int pin) override;
    std::vector<std::string> fetchBankStatement(long accountNumber, int pin) override;

    bool showBankStatement(long accountNumber, int pin);
    bool processDepositRequest(long accountNumber, int pin);
    bool processWithdrawRequest(long accountNumber, int pin);
    bool showBalance(long accountNumber, int pin);
    bool showMiniStatement(long accountNumber, int pin);

    void displayMenu() override;
    bool processMenu(int customerChoice, long accountNumber, int pin) override;
    std::vector<IAccount *> &getAccounts() override { return accounts; }

    ~Customer();
};
#endif
