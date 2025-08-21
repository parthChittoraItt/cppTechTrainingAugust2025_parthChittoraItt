
#include <iostream>
#include <sstream>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"

void printMenu()
{
    std::cout << "\n1. Perform addition." << std::endl;
    std::cout << "2. Perform subtraction." << std::endl;
    std::cout << "3. Perform multiplication." << std::endl;
    std::cout << "4. Perform division." << std::endl;
    std::cout << "5. Exit." << std::endl;
    std::cout << "Enter choice : ";
}
int getUserChoice()
{
    std::string choiceStr;
    std::getline(std::cin, choiceStr);
    bool checkInputValidity;
    std::stringstream ss(choiceStr);
    int number;
    ss >> number;
    checkInputValidity = (!ss.fail() && ss.eof());
    return checkInputValidity ? number : 0;
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
void performAddition(double num1, double num2)
{
    std::cout << "On adding : " << addTwoNumbers(num1, num2) << std::endl;
}
void performSubtraction(double num1, double num2)
{
    std::cout << "On subtraction : " << subtractTwoNumbers(num1, num2) << std::endl;
}
void performMultiplication(double num1, double num2)
{
    std::cout << "On multiplication : " << multiplyTwoNumbers(num1, num2) << std::endl;
}
void performDivision(double num1, double num2)
{
    if (num2 == 0)
    {
        std::cout << "Division by zero is invalid." << std::endl;
        return;
    }
    std::cout << "On division : " << divideTwoNumbers(num1, num2) << std::endl;
}

int main()
{
    while (true)
    {
        printMenu();
        int choice = getUserChoice();
        if (choice > 0 && choice < 5)
        {
            std::cout << "Enter first number : ";
            double num1 = getNumber();
            std::cout << "Enter second number : ";
            double num2 = getNumber();
            if (choice == 1)
            {
                performAddition(num1, num2);
            }
            else if (choice == 2)
            {
                performSubtraction(num1, num2);
            }
            else if (choice == 3)
            {
                performMultiplication(num1, num2);
            }
            else
            {
                performDivision(num1, num2);
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
    return 0;
}