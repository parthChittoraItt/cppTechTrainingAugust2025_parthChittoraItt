#include "JSONParser.h"
#include <fstream>

std::vector<std::string> JSONParser::parse(std::string &filename)
{
    std::vector<std::string> jsonOutput;
    std::ifstream fin(filename.c_str());
    if (!fin.is_open())
    {
        jsonOutput.push_back(failedJsonLoading);
        return jsonOutput;
    }
    nlohmann::json jsonObject;
    fin >> jsonObject;

    jsonOutput.push_back(jsonParsedData);
    std::vector<std::string> jsonEntries = fetchJsonEntries(jsonObject);
    jsonOutput.insert(jsonOutput.end(), jsonEntries.begin(), jsonEntries.end());
    return jsonOutput;
}

std::vector<std::string> JSONParser::fetchJsonEntries(nlohmann::json &jsonObject)
{
    std::vector<std::string> entries;
    if (jsonObject.is_object())
    {
        for (auto entry = jsonObject.begin(); entry != jsonObject.end(); entry++)
        {
            if (entry.value().is_primitive())
            {
                entries.push_back(entry.key() + colon + entry.value().dump());
            }
            else
            {
                entries.push_back(entry.key() + colon);
                std::vector<std::string> child = fetchJsonEntries(entry.value());
                entries.insert(entries.end(), child.begin(), child.end());
            }
        }
    }
    else if (jsonObject.is_array())
    {
        for (int entry = 0; entry < jsonObject.size(); entry++)
        {
            if (jsonObject[entry].is_primitive())
            {
                entries.push_back(jsonObject[entry].dump());
            }
            else
            {
                std::vector<std::string> child = fetchJsonEntries(jsonObject[entry]);
                entries.insert(entries.end(), child.begin(), child.end());
            }
        }
    }
    else
    {
        entries.push_back(jsonObject.dump());
    }
    return entries;
}
