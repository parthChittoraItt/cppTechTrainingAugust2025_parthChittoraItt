#include "CSVParser.h"

std::vector<std::string> CSVParser::parse(std::string &filename)
{
    std::vector<std::string> csvOutput;
    try
    {
        rapidcsv::Document documentObject(filename);
        int rowCount = documentObject.GetRowCount();
        int colCount = documentObject.GetColumnCount();

        csvOutput.push_back(csvParsedData);
        for (int rowIterator = 0; rowIterator < rowCount; rowIterator++)
        {
            std::string row;
            for (int colIterator = 0; colIterator < colCount; colIterator++)
            {
                row += documentObject.GetCell<std::string>(colIterator, rowIterator) + space;
            }
            csvOutput.push_back(row);
        }
    }
    catch (std::exception &exception)
    {
        csvOutput.push_back(csvParseError);
        csvOutput.push_back(exception.what());
    }
    return csvOutput;
}
