
#include <sstream>
#include <iostream>
#include "constants.h"
#include "inputHandler.h"
#include "matrix.h"

bool InputHandler::isValidInput(std::string &input, long &value)
{
    std::stringstream ss(input);
    ss >> value;
    return (!ss.fail() && ss.eof() && value > 0);
}

bool InputHandler::isValidInput(std::string &input, double &value)
{
    std::stringstream ss(input);
    ss >> value;
    return (!ss.fail() && ss.eof());
}

long InputHandler::inputLong()
{
    std::string input;
    long num;
    bool valid = false;
    do
    {
        std::getline(std::cin, input);
        if (isValidInput(input, num))
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

double InputHandler::inputDouble()
{
    std::string input;
    double num;
    bool valid = false;
    do
    {
        std::getline(std::cin, input);
        if (isValidInput(input, num))
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

void InputHandler::inputMatrixDimensions(Matrix &matrix)
{
    std::cout << enterRows;
    matrix.setRows(inputLong());
    std::cout << enterColumns;
    matrix.setColumns(inputLong());
    matrix.assignMemory();
}

void InputHandler::inputMatrixValues(Matrix &matrix)
{
    for (long rowIterator = 0; rowIterator < matrix.getRows(); rowIterator++)
    {
        for (long colIterator = 0; colIterator < matrix.getColumns(); colIterator++)
        {
            std::cout << enterValue << rowIterator << invertedSquareBrackets << colIterator << closedSquareBracket;
            matrix.getValue()[rowIterator][colIterator] = inputDouble();
        }
    }
}
