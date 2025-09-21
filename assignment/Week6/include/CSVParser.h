#ifndef CSVPARSER_H
#define CSVPARSER_H

#include <string>
#include "IParser.h"
#include "constants.h"
#include "rapidcsv.h"

class CSVParser : public IParser {
public:
    std::vector<std::string> parse( std::string &filename);
};

#endif 
