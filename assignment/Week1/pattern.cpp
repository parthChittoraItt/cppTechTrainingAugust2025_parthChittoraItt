#include <iostream>
#include <sstream>
#include <string>
#define ll long long
ll stringToInt(const std::string &input, bool &success)
{
    std::stringstream ss(input);
    ll number;
    ss >> number;
    if (!ss.fail() && ss.eof())
    {
        success = true;
        return number;
    }
    else
    {
        success = false;
        return 0;
    }
}
void printAlternateBits(ll n)
{
    short bit = 1;
    for (int i = 0; i < n; i++)
    {
        std::cout << bit;
        bit = bit ^ 1;
    }
}
void printSpaces(ll count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << " ";
    }
}
void printUpperPortion(ll count, ll totalRowsToPrint)
{
    for (ll row = 0; row <= count; row++)
    {
        if (count % 2 == 1)
        {
            printAlternateBits(row + 1);
            printSpaces(2 * (count - row));
            printAlternateBits(row + 1);
            std::cout << std::endl;
        }
        else if (count % 2 == 0)
        {
            if (row == count)
            {
                printAlternateBits(totalRowsToPrint);
            }
            else
            {
                printAlternateBits(row + 1);
                printSpaces(2 * (count - row) - 1);
                printAlternateBits(row + 1);
            }
            std::cout << std::endl;
        }
    }
}
void printLowerPortion(ll count, ll totalRowsToPrint)
{
    for (ll row = count + 1; row < totalRowsToPrint; row++)
    {
        if (count % 2 == 1)
        {
            printAlternateBits(totalRowsToPrint - row);
            printSpaces(2 * (row - count));
            printAlternateBits(totalRowsToPrint - row);
            std::cout << std::endl;
        }
        else if (count % 2 == 0)
        {
            printAlternateBits(totalRowsToPrint - row);
            printSpaces(2 * (row - count) - 1);
            printAlternateBits(totalRowsToPrint - row);
            std::cout << std::endl;
        }
    }
}
void printPattern()
{
    ll count{};
    bool success;
    std::cout << "Enter the value of count (Positive Integer): ";
    std::string st;
    std::getline(std::cin, st);
    count = stringToInt(st, success);
    if (!success)
    {
        std::cout << "Enter integer values only." << std::endl;
        return;
    }
    if (count < 0)
    {
        std::cout << "Please enter a positive integer." << std::endl;
        return;
    }
    ll totalRowsToPrint = count * 2 + 1;
    printUpperPortion(count, totalRowsToPrint);
    printLowerPortion(count, totalRowsToPrint);
}
void printMenu()
{
    std::cout << "\n1. Print Pattern" << std::endl;
    std::cout << "2. Exit" << std::endl;
    std::cout << "Enter choice :";
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

int main()
{
    while (true)
    {
        printMenu();
        int choice = getUserChoice();
        if (choice == 1)
        {
            printPattern();
        }
        else if (choice == 2)
        {
            break;
        }
        else
            std::cout << "Enter a valid choice." << std::endl;
    }
    return 0;
}