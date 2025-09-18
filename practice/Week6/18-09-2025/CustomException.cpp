#include <iostream>
#include <stdexcept>
class CustomException : public std::exception {
    public : 
      const char* what() const noexcept override {
        return "This is a custom exception!";
    }
};
int main()
{
try{
    throw CustomException();
}
catch(CustomException e){
    std::cout<<"Caught an exception but ...."<<e.what();
}
    return 0;
}