#include <iostream>
#include <fstream>
int main()
{
    std::ofstream fout;
    fout.open(("output.txt"));
    if(fout.is_open())
        fout<<"Hello World";
    fout.close();
    return 0;
}