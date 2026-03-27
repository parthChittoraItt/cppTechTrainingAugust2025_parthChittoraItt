#include<iostream>
#include<sstream>
#include "menuFunction.h"
#include "matrix.h"
#include "matrixInputOutput.h"
#include "constants.h"

void inputMatrix(matrix &matrix) {
    for (long rowIterator = 0; rowIterator < matrix.row; rowIterator++)
        for (long colIterator = 0; colIterator < matrix.col; colIterator++) {
            std::cout<<enterValue<<rowIterator<<invertedSquareBrackets<<colIterator<<closedSquareBracket<<std::endl;
            double val = inputDouble();
            matrix.value[rowIterator][colIterator] = val;
        }
}

void inputMatrixValues(matrix &matrix1, matrix &matrix2)
{
    std::cout << enterValueMatrix1;
    inputMatrix(matrix1);
    std::cout << enterValueMatrix2;
    inputMatrix(matrix2);
}
