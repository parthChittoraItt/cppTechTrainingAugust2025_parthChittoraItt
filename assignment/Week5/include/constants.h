#ifndef CONSTANTS_H
#define CONSTANTS_H
static std::string welcomeMenu = "\n===== Welcome to the Bank =====\n1. Admin Login\n2. Customer Login\n3. Exit\nEnter choice: ";
static std::string adminMenu = "\n===== Admin Menu =====\n1. Open Account\n2. Close Account\n3. Create Customer\n4. Delete Customer\n5. View Customers\n6. Logout\nEnter choice: ";
static std::string customerMenu = "\n===== Customer Menu =====\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Mini Statement\n5. Bank Statement\n6. Logout\nEnter choice: ";
static std::string inputUserName = "Enter Username: ";
static std::string inputPassword = "Enter Password: ";
static std::string inputAccountNumber = "Enter account number: ";
static std::string invalidCredentials = "Invalid credentials.\n";
static std::string invalidChoice = "Invalid choice.\n";
static std::string invalidPassword = "Invalid password.\n";
static std::string adminLogout = "\nExiting Admin Session!!\n";
static std::string customerLogout = "\nExiting Customer Session\n";
static std::string customerNotFound =  "Customer not found.\n";
static std::string customerDeleted =  "Customer deleted.\n";
static std::string miniStatementHeader = "===== Mini Statement =====\n";
static std::string customerHeader = "===== Customers =====\n";
static std::string bankHeader = "===== Bank Statement =====\n";
static std::string setPin = "Set PIN: ";
static std::string inputPin = "Enter PIN: ";
static std::string deposited = "Deposited: " ;
static std::string withdrew = "Withdrew: " ;
static std::string amountToDeposit = "Enter amount to deposit: ";
static std::string amountToWithdraw = "Enter amount to withdraw: ";
static std::string newBalance = "New Balance : ";
static std::string insufficientBalance = "Insufficient Balance\n";
static std::string currentBalance = "Current Balance : ";
static std::string nextLine = "\n";
static std::string inputCustomerName = "Enter customer name : " ;
static std::string accountCreation = "Account created with number ";
static std::string accountClosed = "Account closed.\n";
static std::string accountNotFound = "Account not found.\n";
static std::string customerCreated = "Customer created.\n";
static std::string customerExist = "Customer already exists.\n";

#endif
