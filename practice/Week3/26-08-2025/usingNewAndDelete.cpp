#include<iostream>
int main(){
int a;
int *p;
p=new int;
*p=10;
std::cout<<p<<std::endl;
delete p;
p = new int[20];
int arr[]= {1,2,4,24,24,566,24,353,6326};
p=arr;
std::cout<<p<<std::endl;
std::cout<<arr<<std::endl;
delete[] p;
return 0;
}