#include "inputDataType.h"
#include "utils.h"
#include <iostream>
#include <string>
#include<sstream>

bool isValidPositiveLong(std::string &input, long &value)
{
    std::stringstream ss(input);
    ss >> value;
    return (!ss.fail() && ss.eof() && value > 0);
}

bool isValidDouble(std::string &input, double &value)
{
    std::stringstream ss(input);
    ss >> value;
    return (!ss.fail() && ss.eof());
}

long inputLong()
{
    std::string input;
    long num ;
    bool valid = false;
    do
    {
        std::getline(std::cin, input);
        if (isValidPositiveLong(input, num))
        {
            valid = true;
        }
        else
        {
            std::cout << positiveOnly;
        }
    } while (!valid);

    return num;
}


double inputDouble()
{
    std::string input;
    double num;
    bool valid = false;
    do
    {
        std::getline(std::cin, input);
        if (isValidDouble(input, num))
        {
            valid = true;
        }
        else
        {
            std::cout << numberOnly;
        }
    } while (!valid);
    return num;
}
