#include <iostream>
class CustomException : public std::runtime_error{
    public : 
    CustomException(const std::string &message): std::runtime_error(message){}
};
int main()
{
    
    try {
        throw CustomException("This is a custom exception derived from the runtime_error exception \n");
    }
    catch (CustomException& e){
        std::cout<<e.what();
    }
    return 0;
}