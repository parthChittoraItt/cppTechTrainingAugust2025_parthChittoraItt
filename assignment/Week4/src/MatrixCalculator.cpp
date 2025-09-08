#include <iostream>
#include "inputChoice.h"
#include "printMenu.h"
#include "processChoice.h"
#include "constants.h"
#include "matrixCalculator.h"

void MatrixCalculator::run()
{
    do
    {
        PrintMenu::printMenu();
        choice = InputChoice::inputLong();

        if (choice == 1 || choice == 2)
        {
            Matrix matrix1, matrix2;

            std::cout << inputForMatrix1;
            matrix1.inputMatrixDimensions();

            std::cout << inputForMatrix2;
            matrix2.inputMatrixDimensions();
            
            ProcessChoice::processChoice(choice,matrix1, matrix2);
        }
        else if (choice != 3)
        {
            std::cout << invalidChoice;
        }
    } while (choice != 3);
}
