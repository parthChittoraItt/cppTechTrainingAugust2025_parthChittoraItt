#include <iostream>


class A
{
public:
    A()
    {
        std::cout << "Constructor of A\n";
    }
    void show()
    {
        std::cout << "Function show() from A\n";
    }
};

class B : virtual public A
{
public:
    B()
    {
        std::cout << "Constructor of B\n";
    }
};

class C : virtual public A
{
public:
    C()
    {
        std::cout << "Constructor of C\n";
    }
};

class D : public B, public C
{
public:
    D()
    {
        std::cout << "Constructor of D\n";
    }
};

int main()
{

    D obj;
    obj.show();

    return 0;
}
