#include<iostream>
#include "matrixAdditionMultiplicationLogic.h"
#include "matrixInputOutput.h"
#include "checkMatrixOperationValidity.h"
#include "matrixMemoryMgmt.h"
#include "performAdditionMultiplication.h"

void performAddition(double **matrix1, double **matrix2, long rowsMatrix1, long rowsMatrix2, long colsMatrix1, long colsMatrix2)
{
    if (canAdd(rowsMatrix1, colsMatrix1, rowsMatrix2, colsMatrix2))
    {
        double **sum = addMatrices(matrix1, matrix2, rowsMatrix1, colsMatrix1);
        std::cout << "\nOn adding : \n";
        printMatrix(sum, rowsMatrix1, colsMatrix1);
        freeMatrixMemory(sum, rowsMatrix1);
    }
    else
    {
        std::cout << "\nAddition not possible due to dimension mismatch.\n";
    }
}
void performMultiplication(double **matrix1, double **matrix2, long rowsMatrix1, long rowsMatrix2, long colsMatrix1, long colsMatrix2)
{
    if (canMultiply(colsMatrix1, rowsMatrix2))
    {
        double **product = multiplyMatrices(matrix1, matrix2, rowsMatrix1, colsMatrix1, colsMatrix2);
        std::cout << "\nOn multiplying:\n";
        printMatrix(product, rowsMatrix1, colsMatrix2);
        freeMatrixMemory(product, rowsMatrix1);
    }
    else
    {
        std::cout << "\nMultiplication not possible.\n";
    }
}