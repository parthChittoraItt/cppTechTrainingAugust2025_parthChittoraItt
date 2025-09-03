#include <iostream>
class Base
{
public:
    void printMessage()
    {
        std::cout << "Hello from base \n";
    }

    int l = 10;
    int b = 40;

    void printL()
    {
        std::cout << l << std::endl;
    }
    void printB()
    {
        std::cout << b << std::endl;
    }
};

class Derived :  Base
{
public:
    int printArea()
    {
        return l * b;
    }
    int printPerimeter()
    {
        return 2 * (l + b);
    }

};
class Derived1: public Base{
    int printSq(){
        return l*l;
    }
};
int main()
{
    Derived obj;
    Derived1 obj1;
    obj1.printMessage();
    // obj.printMessage(); //Giving error because we have not publically inherited the base in the derived 
    std::cout<<obj.printArea()<<std::endl;;
    std::cout<<obj.printPerimeter()<<std::endl;
    return 0;
}