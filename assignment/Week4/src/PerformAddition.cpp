
#include <iostream>
#include "matrix.h"
#include "constants.h"
#include "performAddition.h"

bool PerformAddition::canAdd(Matrix &matrix1, Matrix &matrix2)
{
    return matrix1.getRows() == matrix2.getRows() || matrix1.getColumns() == matrix2.getColumns();
}

void PerformAddition::execute(Matrix &matrix1, Matrix &matrix2)
{
    if (canAdd(matrix1, matrix2))
    {
        std::cout << inputForMatrix1;
        matrix1.inputMatrixValues();
        std::cout << inputForMatrix2;
        matrix2.inputMatrixValues();
        
        std::cout << onAdding;
        (matrix1 + matrix2).printMatrix();
    }
    else
        std::cout << additionDimensionMismatch;
}
