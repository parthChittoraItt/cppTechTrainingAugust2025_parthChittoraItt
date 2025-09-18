#include <iostream>
#include <fstream>

int main()
{
    std::ofstream fout("random1.txt",std::ios::app);

    // fout.open("output.txt", std::ios::out); // default mode
    // fout.open("output.txt", std::ios::app);
   
    if (fout.is_open())
    {
        std::string s;
        getline(std::cin, s);
        fout << s;
    }
    else{
        std::cout<<"File not found.\n";
    }

    fout.close();
    return 0;
}