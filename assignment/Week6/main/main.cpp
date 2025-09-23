#include <iostream>
#include "Utility.h"
#include "inputHandler.h"

int main()
{
    std::string filename;
    int userChoice;
    do
    {
        std::vector<std::string> result;
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
                try
                {
                    result = parser->parse(filename);
                }
                catch (std::exception &exception)
                {
                    result.push_back(parsingError);
                    result.push_back(exception.what());
                }
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
