#include<iostream>
#include "menuFn.h"
#include "matrixInputOutput.h"

void getMatrix(double** matrix, long rows, long cols) {
    for (long rowIterator = 0; rowIterator < rows; rowIterator++)
        for (long colIterator = 0; colIterator < cols; colIterator++) {
            double val = getDouble();
            matrix[rowIterator][colIterator] = val;
        }
}

void printMatrix(double** matrix, long rows, long cols) {
    for (long rowIterator = 0; rowIterator < rows; rowIterator++) {
        for (long colIterator = 0; colIterator < cols; colIterator++)
            std::cout << matrix[rowIterator][colIterator] << " ";
        std::cout << "\n";
    }
}
