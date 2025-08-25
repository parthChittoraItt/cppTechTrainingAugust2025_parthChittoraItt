#include<iostream>
int main(){
int x =5;
int *p = &x;
std::cout<<"Address at p (basically of a):"<< p<<std::endl;
std::cout<<"Address of p :"<< &p<<std::endl;
std::cout<<"value at p: "<<*p<<std::endl;
int **q = &p;
std::cout<<"Address at q:"<< q<<std::endl;
std::cout<<"value in q :"<<*q<<std::endl;
std::cout<<"Printing the value at address stored in q :"<<**q<<std::endl;
**q = *p+2;
std::cout<<x<<std::endl;
return 0;
}