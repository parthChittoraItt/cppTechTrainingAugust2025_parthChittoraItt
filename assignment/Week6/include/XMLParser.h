#ifndef XMLPARSER_H
#define XMLPARSER_H

#include <vector>
#include <string>
#include "IParser.h"
#include "tinyxml2.h"
#include "constants.h"
class XMLParser : public IParser {
public:
    std::vector<std::string> parse( std::string &filename);

private:
    std::vector<std::string> fetchXmlEntries(tinyxml2::XMLElement *element);
    
};

#endif 
