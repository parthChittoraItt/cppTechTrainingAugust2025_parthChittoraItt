#include <iostream>
#include "matrixInputOutput.h"
#include "matrixMemoryMgmt.h"
#include "performAddition.h"
#include "matrix.h"
#include "constants.h"

void addMatrices(matrix &matrix1, matrix &matrix2, matrix &result)
{
    for (long rowIterator = 0; rowIterator < matrix1.row; rowIterator++)
    {
        for (long colIterator = 0; colIterator < matrix1.col; colIterator++)
        {
            result.value[rowIterator][colIterator] = matrix1.value[rowIterator][colIterator] + matrix2.value[rowIterator][colIterator];
        }
    }
}

void performAddition(matrix &matrix1, matrix &matrix2, matrix &result)
{
    inputMatrixValues(matrix1, matrix2);
    result.row = matrix1.row;
    result.col = matrix1.col;
    assignMemory(result);
    addMatrices(matrix1, matrix2, result);
    std::cout << onAdding;
    printMatrix(result);
    freeMemory(result);
}
