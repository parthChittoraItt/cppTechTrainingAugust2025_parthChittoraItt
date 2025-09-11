#include <iostream>
#include "matrixCalculator.h"
#include "utility.h"
#include "inputHandler.h"
#include "constants.h"
#include "matrix.h"
int main()
{

    long choice;
    MatrixCalculator obj;

    do
    {
        Utility::printMenu();
        choice = InputHandler::inputLong();
        if (choice == 1 || choice == 2)
        {
            Matrix matrix1, matrix2,result;
            std::cout << inputForMatrix1;
            InputHandler::inputMatrixDimensions(matrix1);
            std::cout << inputForMatrix2;
            InputHandler::inputMatrixDimensions(matrix2);
            result = obj.calculate(choice, matrix1, matrix2);

            if(result.getValue()==nullptr){
                std::cout<<operationDimensionMismatch;
            }
            else{
                Utility::printMatrix(result);
            }
        }
        else if (choice != 3)
        {
            std::cout << invalidChoice;
        }
    } while (choice != 3);

    return 0;
}
