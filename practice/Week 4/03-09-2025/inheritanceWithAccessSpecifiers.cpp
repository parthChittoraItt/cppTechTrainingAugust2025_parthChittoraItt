#include <iostream>

class Human
{
private:
    int age;
    int weight;
    int height;

public:
    int x =100;
    int getAge()
    {
        return this->age;
    }
    int getWeight()
    {
        return this->weight;
    }
    int getHeight()
    {
        return this->height;
    }
};
 class Male : public Human{
    public : 
    char* name;
    void printAge(){
        std::cout<<getAge()+x<<std::endl;
    }
    void sleep(int hour){
        std::cout<<"Sleeping for "<<hour<<"hour. "<<std::endl;
    }
 };
int main()
{
    Male m1;
    std::cout<<m1.x<<std::endl;
    return 0;
}