#include <iostream>
class Animal
{
public:
    void walkAnimal()
    {
        std::cout << "Walking on 4 legs." << std::endl;
    }
};
class Human
{
public:
    void walkHuman()
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
    obj.walkAnimal();
    obj.walkHuman();
    return 0;
}