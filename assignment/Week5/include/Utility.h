#include "IAdmin.h"
#include "ICustomer.h"
#include "IAccount.h"
#include "IBank.h"
#include "Customer.h"
#include "Account.h"
#include "Admin.h"
#include "Bank.h"
#include "inputHandler.h"
#include "constants.h"
#include <string>
#include <iostream>

class Utility
{
public:
    static void inputAccountCredentials(long &accountNumber, int &pin);
    static void inputUserCredentials(std::string &userName, std::string &password);
};
