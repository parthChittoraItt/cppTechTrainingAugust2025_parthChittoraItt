#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <vector>
#include "IParser.h"
#include "CSVParser.h"
#include "JSONParser.h"
#include "XMLParser.h"
#include "constants.h"

class Utility {
public:
    static std::string getExtension( std::string &filename);
    static IParser* createParser( std::string &ext);
    static void printResult(std::vector<std::string> result);
};

#endif
