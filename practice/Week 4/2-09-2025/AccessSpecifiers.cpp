#include <iostream>
class A
{
    int a = 10;
    void printA(){
        std::cout<<a<<std::endl;
    }

private:
    int b = 12;
    void printB()
    {
        std::cout << b << std::endl;
    }

public:
    int c = 12;
    void printC()
    {
        std::cout << c << std::endl;
    }
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }

protected:
    int d = 1234;
    void printD()
    {
        std::cout << d << std::endl;
    }
};
class B : public A
{
      public :
    // printA();
        // printB();
        int squareA(){
            return getA()*getA();
        }
        int squareC(){
            return c*c;
        }
        void printDThroughB(){
            printD();
        }
    
};
int main(){
    B obj;
    std::cout<<obj.getA()<<std::endl;;
    std::cout<< obj.getB()<<std::endl;;
    std::cout<<obj.squareA()<<std::endl;
    std::cout<<obj.squareC()<<std::endl;
    obj.printDThroughB();
    // obj.printD();
    // obj.printB();
    // obj.printA();
    return 0;
}
