#include "Utility.h"
int main()
{
    IAdmin* admin = new Admin("admin","admin123");
    IBank* bank = new Bank(*admin);
    int loginChoice;
    std::string username, passsword;
    do
    {
        std::cout << welcomeMenu;
        loginChoice = inputLong();
        if (loginChoice == 1)
        {
            std::string adminName, adminPassword;
            Utility::inputUserCredentials(adminName, adminPassword);
            bool adminLogin = bank->runAdminSession(adminName, adminPassword);
            std::cout << adminLogout;
        }
        else if (loginChoice == 2)
        {
            std::string customerName, customerPassword;
            Utility::inputUserCredentials(customerName, customerPassword);
            bool customerLogin = bank->runCustomerSession(customerName, customerPassword);
            std::cout << customerLogout;
        }
        else if (loginChoice != 3)
        {
            std::cout << invalidChoice;
        }
    } while (loginChoice != 3);
    delete bank;
    delete admin;
    return 0;
}
