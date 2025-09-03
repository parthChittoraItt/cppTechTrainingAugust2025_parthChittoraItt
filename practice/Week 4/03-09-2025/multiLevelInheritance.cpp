#include <iostream>
class Animal
{
private:
    int weight;
    char *color;
    int tailLength;

public:
    void setWeight(int w)
    {
        this->weight = w;
    }
    int getWeight(){
        return this->weight;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "Barking." << std::endl;
    }
};
class Pug : public Dog
{
public:
    bool hungry;
};
int main()
{
    Pug p1;
    p1.setWeight(12);
    p1.bark();
    std::cout<<p1.getWeight()<<std::endl;
     return 0;
}