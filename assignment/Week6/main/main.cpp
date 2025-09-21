#include <iostream>
#include "Utility.h"
#include "inputHandler.h"

int main()
{
    std::string filename;
    int userChoice;
    do
    {
        std::cout << inputChoice;
        userChoice = inputInt();
        if (userChoice == 1)
        {
            std::cout << filepathInput;
            std::getline(std::cin, filename);
            std::string extension = Utility::getExtension(filename);
            IParser *parser = Utility::createParser(extension);
            if (parser)
            {
                std::vector<std::string> result = parser->parse(filename);
                Utility::printResult(result);
            }
            else
            {
                std::cout << unsupportedExtension;
            }
            delete parser;
        }
        else if (userChoice != 2)
        {
            std::cout << invalidChoice;
        }
    } while (userChoice != 2);
    return 0;
}
