#include<iostream>
class Animal{
    public : 
    void speak(){
        std::cout<<"Speaking"<<std::endl;
    }
};
class Dog : public Animal{

};
class Cat : public Animal{

};
int main(){
Cat c ;
Dog d ;
d.speak();
c.speak();
return 0;
}