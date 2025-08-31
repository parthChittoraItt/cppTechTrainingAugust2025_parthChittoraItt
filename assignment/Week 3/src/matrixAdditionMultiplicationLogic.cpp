#include "matrixAdditionMultiplicationLogic.h"
#include "matrixMemoryMgmt.h"

double **addMatrices(double **matrix1, double **matrix2, long rows, long cols)
{
    double **result = getMatrixMemory(rows, cols);
    for (long rowIterator = 0; rowIterator < rows; rowIterator++)
        for (long colIterator = 0; colIterator < cols; colIterator++)
            result[rowIterator][colIterator] = matrix1[rowIterator][colIterator] + matrix2[rowIterator][colIterator];
    return result;
}

double **multiplyMatrices(double **matrix1, double **matrix2, long rowsMatrix1, long colsMatrix1, long colsMatrix2)
{
    double **result = getMatrixMemory(rowsMatrix1, colsMatrix2);
    for (long mat1row = 0; mat1row < rowsMatrix1; mat1row++)
    {
        for (long mat2col = 0; mat2col < colsMatrix2; mat2col++)
        {
            for (long commonDimension = 0; commonDimension < colsMatrix1; commonDimension++)
                result[mat1row][mat2col] += matrix1[mat1row][commonDimension] * matrix2[commonDimension][mat2col];
        }
    }
    return result;
}
