#include <sstream>
#include <iostream>
#include "menuFn.h"

void printMenu()
{
    std::cout << "1. Add Matrices\n";
    std::cout << "2. Multiply Matrices\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
}

long getLong()
{
    std::string inputLong;
    long longNum = 0;
    bool isValidPositiveLong = false;
    do
    {
        std::getline(std::cin, inputLong);
        std::stringstream ss(inputLong);
        ss >> longNum;
        if (!ss.fail() && ss.eof() && longNum >= 0)
        {
            isValidPositiveLong = true;
        }
        else
        {
            std::cout << "Please enter a positive number : ";
        }
    } while (!isValidPositiveLong);
    return longNum;
}

double getDouble()
{
    std::string inputDouble;
    double doubleNum;
    bool isValidDouble = false;
    do
    {
        std::getline(std::cin, inputDouble);
        std::stringstream ss(inputDouble);
        ss >> doubleNum;
        if (!ss.fail() && ss.eof())
        {
            isValidDouble = true;
        }
        else
        {
            std::cout << "Please enter a number only: ";
        }
    } while (!isValidDouble);
    return doubleNum;
}

void getDimensions(long& rowsCnt, long& colsCnt)
{
    std::cout << "Enter number of rows: ";
    rowsCnt = getLong();
    std::cout << "Enter number of columns: ";
    colsCnt = getLong();
}
