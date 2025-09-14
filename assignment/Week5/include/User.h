#ifndef USER_H
#define USER_H

#include <string>

class User
{
protected:
    std::string username;
    std::string password;

public:
    User(std::string userName = "", std::string userPassword = "") : username(userName), password(userPassword) {}
    std::string getUsername() { return username; }
    std::string getPassword() { return password; }
    void setPassword(std::string userPassword) { password = userPassword; }
    virtual void displayMenu() = 0;
};

#endif
