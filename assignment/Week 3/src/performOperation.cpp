#include "matrixInputOutput.h"
#include "matrixMemoryMgmt.h"
#include "menuFn.h"
#include "performAdditionMultiplication.h"
#include "performOperation.h"
#include <iostream>

void performMatrixOperation()
{
    long choice;
    long rowsMatrix1, rowsMatrix2, colsMatrix1, colsMatrix2;
    do
    {
        printMenu();
        choice = getLong();
        if (choice == 1 || choice == 2)
        {
            std::cout << "For Matrix 1:\n";
            getDimensions(rowsMatrix1, colsMatrix1);
            std::cout << "For Matrix 2:\n";
            getDimensions(rowsMatrix2, colsMatrix2);
            double **matrix1 = getMatrixMemory(rowsMatrix1, colsMatrix1);
            double **matrix2 = getMatrixMemory(rowsMatrix2, colsMatrix2);
            std::cout << "\nEnter values for Matrix 1:";
            getMatrix(matrix1, rowsMatrix1, colsMatrix1);
            std::cout << "\nEnter values for Matrix 2:";
            getMatrix(matrix2, rowsMatrix2, colsMatrix2);
            if (choice == 1)
            {
                performAddition(matrix1, matrix2, rowsMatrix1, rowsMatrix2, colsMatrix1, colsMatrix2);
            }
            else if (choice == 2)
            {
                performMultiplication(matrix1, matrix2, rowsMatrix1, rowsMatrix2, colsMatrix1, colsMatrix2);
            }
            freeMatrixMemory(matrix1, rowsMatrix1);
            freeMatrixMemory(matrix2, rowsMatrix2);
        }
        else if (choice != 3)
        {
            std::cout << "Invalid choice.\n";
        }
    } while (choice != 3);
}
