#include <iostream>
#include "matrix.h"
#include "constants.h"
#include "matrixCalculator.h"
#include "inputHandler.h"
#include "utility.h"
#include "matrixOperation.h"

bool MatrixCalculator::canAdd(Matrix &matrix1, Matrix &matrix2)
{
    return matrix1.getRows() == matrix2.getRows() && matrix1.getColumns() == matrix2.getColumns();
}

bool MatrixCalculator::canMultiply(Matrix &matrix1, Matrix &matrix2)
{
    return matrix1.getColumns() == matrix2.getRows();
}

void inputMatrices(Matrix &matrix1, Matrix &matrix2)
{
    std::cout << inputForMatrix1;
    InputHandler::inputMatrixValues(matrix1);
    std::cout << inputForMatrix2;
    InputHandler::inputMatrixValues(matrix2);
}

Matrix MatrixCalculator::calculate(long &choice, Matrix &matrix1, Matrix &matrix2)
{
    MatrixOperation obj;
    Matrix result;
    if (choice == 1)
    {
        if (canAdd(matrix1, matrix2))
        {
            inputMatrices(matrix1, matrix2);
            result = obj.performAddition(matrix1, matrix2);
            std::cout << onAdding;
        }
    }
    else if (choice == 2)
    {
        if (canMultiply(matrix1, matrix2))
        {
            inputMatrices(matrix1, matrix2);
            result = obj.performMultiplication(matrix1, matrix2);
            std::cout << onMultiplying;
        }
    }
    return result;
}
