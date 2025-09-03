#include "utils.h"
#include <iostream>

void performMatrixOperation()
{
    long choice;
    do
    {
        printMenu();
        choice = inputLong();
        if (choice == 1 || choice == 2)
        {
            processChoice(choice);
        }
        else if (choice != 3)
        {
            std::cout << invalidChoice;
        }
    } while (choice != 3);
}