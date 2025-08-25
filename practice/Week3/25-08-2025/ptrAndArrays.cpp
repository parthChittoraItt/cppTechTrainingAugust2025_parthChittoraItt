#include<iostream>
int main(){
int a[] = {2,4,6,8,10};
int *p = &a[0];
int *p1 = a;
std::cout<<p<<std::endl;
std::cout<<p1<<std::endl;
std::cout<<a<<std::endl;
std::cout<<*p<<std::endl;
std::cout<<*p1<<std::endl;
std::cout<<*a<<std::endl;
std::cout<<&a[1]<<std::endl;
std::cout<<a+1<<std::endl;
std::cout<<a[1]<<std::endl;
std::cout<<*(a+1)<<std::endl;
std::cout<<"---------------------------------------------------"<<std::endl;
std::cout<<"Printing elements : "<<std::endl;
int length = sizeof(a)/sizeof(a[0]);
for(int i = 0 ; i<length;i++){
    std::cout<<*(a+i);
}
std::cout<<std::endl;
    
for(int i = 0 ; i<length;i++){
    std::cout<<a[i];
    
}
std::cout<<std::endl;
return 0;
}