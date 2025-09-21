#ifndef IPARSER_H
#define IPARSER_H

#include <string>
#include <vector>

class IParser {
public:
    virtual std::vector<std::string> parse(std::string &filename) = 0;
};

#endif
