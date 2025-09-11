#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include <iostream>
#include "matrix.h"
class InputHandler
{
private:
    static bool isValidInput(std::string &input, long &value);
    static bool isValidInput(std::string &input, double &value);

public:
    static long inputLong();
    static double inputDouble();
    static void inputMatrixValues(Matrix &matrix);
    static void inputMatrixDimensions(Matrix &matrix);
};
#endif