#include <iostream>

class Animal
{
public:
    std::string name = "Animal";

    virtual void speak()
    {
        std::cout << "Animal speaks" << std::endl;
    }
};

class Dog : public Animal
{
public:
    std::string breed = "Labrador";

    void speak()
    {
        std::cout << "Dog barks" << std::endl;
    }
};
int main()
{
    Dog dog;
    dog.name = "Tommy";
    dog.breed = "Golden Retriever";

    Animal animal = dog;
    Animal *animal2 = &dog;
    std::cout << "Animal one : \n";
    std::cout << animal.name << std::endl;
    animal.speak();

    std::cout << "Animal two : \n";
    std::cout << animal2->name << std::endl;
    animal2->speak();

    // std::cout << animal2->breed; // Can not access element of dog

    return 0;
}
