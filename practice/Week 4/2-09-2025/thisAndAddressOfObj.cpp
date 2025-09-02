#include <iostream>
class A{
    public : 
    int a =10;
    int b=1090;
    long c =19434928;
    void printAddressOfObj(){
        std::cout<<this<<std::endl;
    }
};
int main()
{
    A *obj = new A;
    std::cout<<"Address of object obj is : "<<obj<<std::endl;
    obj->printAddressOfObj();
    // so this points to the address of the object 
    std::cout<<"size of object is : "<< sizeof(obj)<<std::endl;
    std::cout<<"Address of variable a "<<&(obj->a)<<std::endl;
    std::cout<<"Address of variable b "<<&(obj->b)<<std::endl;
    std::cout<<"Address of variable c "<<&(obj->c)<<std::endl;
    return 0;
}
