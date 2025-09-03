
#include "utils.h"
#include <iostream>
void processChoice(long &choice)
{
    matrix matrix1, matrix2, result;
    inputMatrixDimensions(matrix1, matrix2);
    assignMemory(matrix1);
    assignMemory(matrix2);
    if (choice == 1)
    {
        if (canAdd(matrix1, matrix2))
        {
            performAddition(matrix1, matrix2, result);
        }
        else
        {
            std::cout << additionDimensionMismatch;
        }
    }
    else if (choice == 2)
    {
        if (canMultiply(matrix1, matrix2))
        {
            performMultiplication(matrix1, matrix2, result);
        }
        else
        {
            std::cout << multiplicationDimensionMismatch;
        }
    }
    freeMemory(matrix1);
    freeMemory(matrix2);
}