#include <iostream>
#include <sstream>
#include <dlfcn.h>

typedef double (*calc_fn)(double, double);

struct calculatorFunctions
{
    calc_fn addTwoNumbers;
    calc_fn subtractTwoNumbers;
    calc_fn multiplyTwoNumbers;
    calc_fn divideTwoNumbers;
};
void printMenu()
{
    std::cout << "\n1. Perform addition." << std::endl;
    std::cout << "2. Perform subtraction." << std::endl;
    std::cout << "3. Perform multiplication." << std::endl;
    std::cout << "4. Perform division." << std::endl;
    std::cout << "5. Exit." << std::endl;
    std::cout << "Enter choice: ";
}
int getUserChoice()
{
    std::string choiceStr;
    std::getline(std::cin, choiceStr);
    std::stringstream ss(choiceStr);
    int number;
    ss >> number;
    return (!ss.fail() && ss.eof()) ? number : 0;
}
double getNumber()
{
    double inputNumber;
    std::string inputStr;
    while (true)
    {
        std::getline(std::cin, inputStr);
        std::stringstream ss(inputStr);
        ss >> inputNumber;
        if (!ss.fail() && ss.eof())
        {
            return inputNumber;
        }
        std::cout << "Please enter a number.\n";
    }
}
void loadLibrary(const char *libPath, void *&handle, calculatorFunctions &structForFunctions)
{
    handle = dlopen(libPath, RTLD_LAZY);
    structForFunctions.addTwoNumbers = (calc_fn)dlsym(handle, "addTwoNumbers");
    structForFunctions.subtractTwoNumbers = (calc_fn)dlsym(handle, "subtractTwoNumbers");
    structForFunctions.multiplyTwoNumbers = (calc_fn)dlsym(handle, "multiplyTwoNumbers");
    structForFunctions.divideTwoNumbers = (calc_fn)dlsym(handle, "divideTwoNumbers");
}
int main()
{
    void *handle = nullptr;
    calculatorFunctions structForFunctions;
    loadLibrary("/home/parthchittora/Desktop/cppTechTrainingAugust2025_parthChittoraItt/assignment/Week2/Implicit_Linking/build/libcalculator.so", handle, structForFunctions);
    int choice;
    while (choice != 5)
    {
        printMenu();
        choice = getUserChoice();
        if (choice > 0 && choice < 5)
        {
            std::cout << "Enter first number : ";
            double num1 = getNumber();
            std::cout << "Enter second number : ";
            double num2 = getNumber();
            if (choice == 1)
            {
                std::cout << "On addition: " << structForFunctions.addTwoNumbers(num1, num2) << std::endl;
            }
            else if (choice == 2)
            {
                std::cout << "On subtraction: " << structForFunctions.subtractTwoNumbers(num1, num2) << std::endl;
            }
            else if (choice == 3)
            {
                std::cout << "On multiplication: " << structForFunctions.multiplyTwoNumbers(num1, num2) << std::endl;
            }
            else
            {
                if (num2 == 0)
                {
                    std::cout << "Division by zero is invalid." << std::endl;
                    return 1;
                }
                std::cout << "On division: " << structForFunctions.divideTwoNumbers(num1, num2) << std::endl;
            }
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            std::cout << "Enter a valid choice." << std::endl;
        }
    }
    dlclose(handle);
    return 0;
}