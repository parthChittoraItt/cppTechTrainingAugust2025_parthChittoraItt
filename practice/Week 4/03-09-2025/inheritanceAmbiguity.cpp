#include <iostream>
class Animal
{
public:
    void walk()
    {
        std::cout << "Walking on 4 legs." << std::endl;
    }
};
class Human
{
public:
    void walk()
    {
        std::cout << "Walking on two legs" << std::endl;
    }
};
class A : public Human, public Animal
{
};
int main()
{
    A obj;
    // obj.walk();
    obj.Human::walk();
    obj.Animal::walk();
    return 0;
}