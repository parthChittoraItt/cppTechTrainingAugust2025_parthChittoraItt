#include "matrixMemoryMgmt.h"
#include "menuFn.h"
#include <iostream>

double** getMatrixMemory(long rows, long cols) {
    double** matrix = new double*[rows];
    for (long i = 0; i < rows; i++)
        matrix[i] = new double[cols];
    return matrix;
}

void freeMatrixMemory(double** matrix, long rows) {
    for (long i = 0; i < rows; ++i)
        delete[] matrix[i];
    delete[] matrix;
}

