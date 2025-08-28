#include<iostream>

int main(){
int *p = new int;
int arr[2] = {1,2};
char * a = "hello";
int * nptr = NULL;

std::cout<<a<<std::endl;
std::cout<<*(a+1)<<std::endl;

*(a+1)='p';
// std::cout<<a<<std::endl;
*p=10;
std::cout<<p<<std::endl;
delete p;
std::cout<<p<<std::endl;
*p=100;
std::cout<<p<<std::endl;
std::cout<<*p<<std::endl;
std::cout<<arr[3]<<std::endl;
std::cout<<*nptr<<std::endl;
return 0;
}