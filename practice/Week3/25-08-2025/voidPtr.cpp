#include<iostream>
int main(){
int a = 1025;
int *p = &a;
std::cout<< p << " " << *p<<std::endl;
void * p0 = p;
std::cout<<p0;      //<<" "<<*p0; cant dereference a void ptr as it does not know how many bytes to read
                    // this is the same reason why we cant perform arithmetic operations on it .
return 0;
}