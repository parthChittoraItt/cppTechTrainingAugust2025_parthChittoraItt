#include <iostream>
#include "matrix.h"
#include "performAddition.h"
#include "performMultiplication.h"
#include "processChoice.h"
#include "constants.h"

void ProcessChoice::processChoice(long &choice)
{
    Matrix matrix1, matrix2;

    std::cout << inputForMatrix1;
    matrix1.inputMatrixDimensions();

    std::cout << inputForMatrix2;
    matrix2.inputMatrixDimensions();

    if (choice == 1)
    {
        PerformAddition addObj;
        addObj.execute(matrix1, matrix2);
    }
    else if (choice == 2)
    {
        PerformMultiplication mulObj;
        mulObj.execute(matrix1, matrix2);
    }
}
