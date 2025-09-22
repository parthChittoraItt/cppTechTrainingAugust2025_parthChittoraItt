#include <iostream>
#include <fstream>
#include <string>
 std::fstream file;
void fun(std::string &filename)
{
    file.open(filename, std::ios::in | std::ios::out);
    file << "Hello, World!\n";
    file.seekp(6, std::ios::beg);
    std::cout << "Pointer: " << file.tellp() << std::endl;
}
void fun1(std::string &filename)
{
    file.open(filename);
    std::cout << "Pointer: " << file.tellp() << std::endl;
    file.seekg(0, std::ios::beg);
}

int main()
{
    std::string filename = "test.txt";
    fun(filename);
    fun1(filename);
    file.close();
    return 0;
}
