#include "XMLParser.h"

std::vector<std::string> XMLParser::parse(std::string &filename)
{
    std::vector<std::string> xmlOutput;
    tinyxml2::XMLDocument documentObject;
    try
    {
        if (documentObject.LoadFile(filename.c_str()) != tinyxml2::XML_SUCCESS)
        {
            xmlOutput.push_back(failedXmlLoading);
            return xmlOutput;
        }
        xmlOutput.push_back(xmlParsedData);
        std::vector<std::string> xmlEntries = fetchXmlEntries(documentObject.RootElement());
        xmlOutput.insert(xmlOutput.end(), xmlEntries.begin(), xmlEntries.end());
    }
     catch ( std::exception &exception) {
        xmlOutput.push_back(xmlParseError);
        xmlOutput.push_back( exception.what());
    }
    return xmlOutput;
}

std::vector<std::string> XMLParser::fetchXmlEntries(tinyxml2::XMLElement *element)
{
    std::vector<std::string> entries;
    if (!element)
        return entries;
    std::string line = element->Name();
    if (element->GetText())
    {
        line += colon;
        line += element->GetText();
    }
    entries.push_back(line);
    for (tinyxml2::XMLElement *child = element->FirstChildElement();child != nullptr;child = child->NextSiblingElement())
    {
        std::vector<std::string> childXmlOutput = fetchXmlEntries(child);
        entries.insert(entries.end(), childXmlOutput.begin(), childXmlOutput.end());
    }
    return entries;
}
