#include "performMultiplication.h"
#include "matrixMemoryMgmt.h"
#include "matrix.h"
#include "constants.h"
#include "matrixInputOutput.h"
#include <iostream>

void multiplyMatrices(matrix &matrix1, matrix &matrix2, matrix &result)
{
    for (long rowIterator = 0; rowIterator < matrix1.row; rowIterator++)
    {
        for (long colIterator = 0; colIterator < matrix2.col; colIterator++)
        {
            for (long commonColIterator = 0; commonColIterator < matrix1.col; commonColIterator++)
            {
                result.value[rowIterator][colIterator] += matrix1.value[rowIterator][commonColIterator] * matrix2.value[commonColIterator][colIterator];
            }
        }
    }
}

void performMultiplication(matrix &matrix1, matrix &matrix2, matrix &result)
{
    inputMatrixValues(matrix1, matrix2);
    result.row = matrix1.row;
    result.col = matrix2.col;
    assignMemory(result);
    multiplyMatrices(matrix1, matrix2, result);
    std::cout << onMultiplying;
    printMatrix(result);
    freeMemory(result);
}
