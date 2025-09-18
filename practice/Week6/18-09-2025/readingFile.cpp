#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin;
    fin.open("output.txt");
    std::string s;
    fin >> s;  // Return hello only
    // getline(fin, s); // Return Hello world
    std::cout << "The file contains : " << s;
    fin.close();
    return 0;
}