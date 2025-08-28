#include<iostream>
int main(){
int* a = new int[1000];
int* ptr = new int;
*a =10;
*ptr =10;
std::cout<<*ptr<<std::endl;
std::cout<<a[0]<<std::endl;
std::cout<<a[1]<<std::endl;
delete a;
delete [] ptr;
std::cout<<*ptr<<std::endl;
std::cout<<a[0]<<std::endl;
std::cout<<a[1]<<std::endl;
return 0;
}