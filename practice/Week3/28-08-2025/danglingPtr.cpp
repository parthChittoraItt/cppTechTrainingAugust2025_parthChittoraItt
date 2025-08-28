#include<iostream>
int main(){
int *ptr = new int;
int *ptr1 = ptr;
*ptr=10;
std::cout<<*ptr<<std::endl;
std::cout<<ptr1<<std::endl;
delete ptr;
std::cout<<ptr1<<std::endl;
std::cout<<*ptr<<std::endl;
delete ptr;
return 0;
}