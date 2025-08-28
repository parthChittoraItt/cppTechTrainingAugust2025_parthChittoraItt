#include<iostream>
int& print(){
    int count = 8;
    int &a = count;
    return a;
}
int main(){
    int a = 8;
    int &b = a;
    std::cout<<&b<<"\n";
    std::cout<<&a<<"\n";
    std::cout<<"Reference value is: "<<print()<<"\n";

return 0;
}