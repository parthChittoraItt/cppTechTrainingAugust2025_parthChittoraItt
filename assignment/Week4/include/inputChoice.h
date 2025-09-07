#ifndef INPUTCHOICE_H
#define INPUTCHOICE_H
#include <iostream>
class InputChoice
{
private:
    static bool isValidPositiveLong(std::string &input, long &value);
    static bool isValidDouble(std::string &input, double &value);

public:
    static long inputLong();
    static double inputDouble();
};
#endif