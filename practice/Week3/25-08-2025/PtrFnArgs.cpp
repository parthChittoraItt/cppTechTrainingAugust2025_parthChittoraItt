#include<iostream>
void inc(int* a){
    *a = *a+10;
}
int main(){
int c= 13;
std::cout<<c<<std::endl;
inc(&c);
std::cout<<c<<std::endl;
return 0;
}