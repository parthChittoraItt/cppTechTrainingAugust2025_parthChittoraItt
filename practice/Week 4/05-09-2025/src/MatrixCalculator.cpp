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
            ProcessChoice::processChoice(choice);
        }
        else if (choice != 3)
        {
            std::cout << invalidChoice;
        }
    } while (choice != 3);
}
