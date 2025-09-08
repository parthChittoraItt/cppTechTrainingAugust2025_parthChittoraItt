#include <iostream>
#include "matrix.h"
#include "performAddition.h"
#include "performMultiplication.h"
#include "processChoice.h"
#include "constants.h"

void ProcessChoice::processChoice(long &choice,Matrix& matrix1, Matrix& matrix2)
{
    MatrixOperation* operation = nullptr;

    if (choice == 1)
    {
        operation = new PerformAddition();
    }
    else if (choice == 2)
    {
        operation = new PerformMultiplication();
    }
    if(operation){
        operation->execute(matrix1,matrix2);
        delete operation;
    }
}
