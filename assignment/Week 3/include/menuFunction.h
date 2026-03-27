#include "matrix.h"
#include <string>
#ifndef MENUFN_H
#define MENUFN_H
void printMenu();
void printMatrix(matrix &matrix);
bool isValidPositiveLong(std::string &input, long &value);
long inputLong();
bool isValidDouble(std::string &input, double &value);
double inputDouble();
#endif
