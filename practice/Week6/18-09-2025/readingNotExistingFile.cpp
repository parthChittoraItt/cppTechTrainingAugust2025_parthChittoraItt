#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin;
    fin.open("not.txt");
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            std::string s;
            getline(fin,s);
            std::cout<<s;
        }
    }
    else
    {
        std::cout << "File not found!!";
    }
    return 0;
}