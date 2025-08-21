#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

bool validDigit(char inputcharacter)
{
    return (inputcharacter >= '0' && inputcharacter <= '9');
}

void printMenu()
{
    std::cout << "\n1. Use atof value." << std::endl;
    std::cout << "2. Exit." << std::endl;
    std::cout << "Enter choice: ";
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

bool parseSign(const char *s, int &charPointer)
{
    bool isPositive = true;
    if (s[charPointer] == '-')
    {
        isPositive = false;
        charPointer++;
    }
    else if (s[charPointer] == '+')
    {
        charPointer++;
    }
    return isPositive;
}

double parseIntegerPart(const char *s, int &charPointer)
{
    double result = 0.0;
    while (validDigit(s[charPointer]))
    {
        result = result * 10 + (s[charPointer] - '0');
        charPointer++;
    }
    return result;
}

double parseFractionPart(const char *s, int &charPointer)
{
    if (s[charPointer] != '.')
        return 0;
    charPointer++;
    double result = 0;
    double divisor = 10;
    while (validDigit(s[charPointer]))
    {
        result += (s[charPointer] - '0') / divisor;
        divisor *= 10;
        charPointer++;
    }
    return result;
}

double parseExponent(const char *s, int &charPointer)
{
    if (s[charPointer] != 'e' && s[charPointer] != 'E')
        return 1;
    charPointer++;
    bool isPositive = true;
    if (s[charPointer] == '-')
    {
        isPositive = false;
        charPointer++;
    }
    else if (s[charPointer] == '+')
    {
        charPointer++;
    }
    int exponent = 0;
    while (validDigit(s[charPointer]))
    {
        exponent = exponent * 10 + (s[charPointer] - '0');
        charPointer++;
    }
    return isPositive ? pow(10, exponent) : 1 / pow(10, exponent);
}

double atofn(const char *s)
{
    int charPointer = 0;
    while (s[charPointer] == ' ')
    {
        charPointer++;
    }
    bool isPositive = parseSign(s, charPointer);
    double integerPart = parseIntegerPart(s, charPointer);
    double fractionPart = parseFractionPart(s, charPointer);
    double base = integerPart + fractionPart;
    double exponent = parseExponent(s, charPointer);
    double result = base * exponent;
    return isPositive ? result : -result;
}
void processAtofnInput()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    const char *cstr = input.c_str();
    double result = atofn(cstr);
    std::cout << "Custom atofn value : " << result << std::endl;
    std::cout << "Built-in atof value: " << atof(cstr) << std::endl;
}

int main()
{
    while (true)
    {
        printMenu();
        int choice = getUserChoice();
        if (choice == 1)
        {
            processAtofnInput();
        }
        else if (choice == 2)
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
