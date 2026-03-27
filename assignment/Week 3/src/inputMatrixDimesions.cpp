#include "inputMatrixDimension.h"
#include "matrix.h"
#include "matrixInputOutput.h"
#include <iostream>
#include "constants.h"
void inputDimensions( matrix &matrix)
{
    std::cout << enterRow;
    matrix.row = inputLong();
    std::cout << enterCol;
    matrix.col = inputLong();
}

void inputMatrixDimensions(matrix &matrix1, matrix &matrix2)
{
    std::cout << inputForMatrix1;
    inputDimensions(matrix1);
    std::cout << inputForMatrix2;
    inputDimensions(matrix2);
}