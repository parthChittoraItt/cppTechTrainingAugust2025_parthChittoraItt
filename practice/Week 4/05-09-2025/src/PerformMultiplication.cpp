#include <iostream>
#include "matrix.h"
#include "constants.h"
#include "performMultiplication.h"

bool PerformMultiplication::canMultiply(Matrix &matrix1, Matrix &matrix2)
{
    return matrix1.getColumns() == matrix2.getRows();
}

void PerformMultiplication::execute(Matrix &matrix1, Matrix &matrix2)
{
    if (canMultiply(matrix1, matrix2))
    {
        std::cout << inputForMatrix1;
        matrix1.inputMatrixValues();
        std::cout << inputForMatrix2;
        matrix2.inputMatrixValues();
        
        std::cout << onMultiplying;
        (matrix1 * matrix2).printMatrix();
    }
    else
    {
        std::cout << multiplicationDimensionMismatch;
    }
}
