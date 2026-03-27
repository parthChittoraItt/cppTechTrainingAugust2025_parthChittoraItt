#include <iostream>
#include "menuFunction.h"
#include "matrix.h"
#include <sstream>
#include <string>
#include "constants.h"

void printMenu()
{
    std::cout << choice1;
    std::cout << choice2;
    std::cout << choice3;
    std::cout << enterChoice;
}

void printMatrix(matrix &matrix) {
    for (long rowIterator = 0; rowIterator < matrix.row; rowIterator++) {
        for (long colIterator = 0; colIterator < matrix.col; colIterator++)
            std::cout << matrix.value[rowIterator][colIterator] << oneSpace ;
        std::cout << newLine;
    }
}

