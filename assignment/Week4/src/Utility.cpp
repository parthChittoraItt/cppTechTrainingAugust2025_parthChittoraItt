#include <iostream>
#include "constants.h"
#include"utility.h"
#include"matrix.h"
#include "inputHandler.h"

void Utility::printMenu()
{
    std::cout << choice1;
    std::cout << choice2;
    std::cout << choice3;
    std::cout << enterChoice;
}

void Utility::printMatrix(Matrix& matrix)
{
    for (long rowIterator = 0; rowIterator < matrix.getRows(); rowIterator++)
    {
        for (long colIterator = 0; colIterator < matrix.getColumns(); colIterator++)
            std::cout << matrix.getValue()[rowIterator][colIterator] << oneSpace;
        std::cout << std::endl;
    }
}

