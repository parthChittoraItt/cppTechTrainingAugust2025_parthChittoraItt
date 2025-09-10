#include <iostream>


class Base {
public:
    virtual ~Base() {
        std::cout << "Base Destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived Destructor\n";
    }
};

class Base1{
    public : 
    ~Base1(){
        std::cout<<"Base 1 destructor called\n"<<std::endl;
    }
};

class Derived1 : public Base1{
    ~Derived1(){
        std::cout<<"Derived 1 destructor called\n"<<std::endl;
    }
};
int main() {
    Base* ptr = new Derived();
    Base1* ptr1 = new Derived1();
    delete ptr;
    delete ptr1;  
    return 0;
}
