#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <iostream>
#include <sstream>
#include "constants.h"
bool isValidInput(std::string &input, long &value);
bool isValidInput(std::string &input, double &value);
bool isValidInput(std::string &input, int &value);
long inputLong();
double inputDouble();
int inputInt();
std::string inputString();
#endif
