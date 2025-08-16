#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

bool validDigit(char ch)
{
    return (ch >= '0' && ch <= '9');
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

bool parseSign(const char *s, int &i)
{
    bool isPositive = true;
    if (s[i] == '-')
    {
        isPositive = false;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }
    return isPositive;
}

double parseIntegerPart(const char *s, int &i)
{
    double result = 0.0;
    while (validDigit(s[i]))
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return result;
}

double parseFractionPart(const char *s, int &i)
{
    if (s[i] != '.')
        return 0;
    i++;
    double result = 0;
    double divisor = 10;
    while (validDigit(s[i]))
    {
        result += (s[i] - '0') / divisor;
        divisor *= 10;
        i++;
    }
    return result;
}

double parseExponent(const char *s, int &i)
{
    if (s[i] != 'e' && s[i] != 'E')
        return 1;
    i++;
    bool isPositive = true;
    if (s[i] == '-')
    {
        isPositive = false;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }
    int exponent = 0;
    while (validDigit(s[i]))
    {
        exponent = exponent * 10 + (s[i] - '0');
        i++;
    }
    return isPositive ? pow(10, exponent) : 1 / pow(10, exponent);
}

double atofn(const char *s)
{
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    bool isPositive = parseSign(s, i);
    double integerPart = parseIntegerPart(s, i);
    double fractionPart = parseFractionPart(s, i);
    double base = integerPart + fractionPart;
    double exponent = parseExponent(s, i);
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
