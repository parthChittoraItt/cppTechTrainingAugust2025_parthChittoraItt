#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <string>
#include "IParser.h"
#include <json.hpp>
#include "constants.h"

class JSONParser : public IParser
{
public:
    std::vector<std::string> parse(std::string &filename);

private:
    std::vector<std::string> fetchJsonEntries(nlohmann::json &jsonObject);
};

#endif
