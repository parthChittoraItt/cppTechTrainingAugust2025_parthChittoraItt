#include "matrixMemoryMgmt.h"
#include "menuFunction.h"
#include"matrix.h"
#include <iostream>

void assignMemory(matrix &matrix) {
    matrix.value = new double*[matrix.row];
    for (long i = 0; i < matrix.row; i++)
        matrix.value[i] = new double[matrix.col];
}

void freeMemory(matrix &matrix) {
    for (long i = 0; i < matrix.row; ++i)
        delete[] matrix.value[i];
    delete[] matrix.value;
}

