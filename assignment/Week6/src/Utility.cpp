#include "Utility.h"

std::string Utility::getExtension(std::string &filename)
{
    long pos = -1;
    pos = filename.rfind(dotSymbol);
    if (pos == -1)
        return emptyString;
    return filename.substr(pos + 1);
}

IParser *Utility::createParser(std::string &extension)
{
    if (extension == csv)
        return new CSVParser();
    else if (extension == json)
        return new JSONParser();
    else if (extension == xml)
        return new XMLParser();
    return 0;
}
void Utility::printResult(std::vector<std::string> result)
{
    for (int vectorIterator = 0; vectorIterator < result.size(); vectorIterator++)
    {
        std::cout << result[vectorIterator] << std::endl;
    }
}
