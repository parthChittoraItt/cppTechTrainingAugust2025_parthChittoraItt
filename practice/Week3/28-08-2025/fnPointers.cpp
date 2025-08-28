#include<iostream>
int add(int a ,int b){
    return a+b;
}
void printH(){
    std::cout<<"Hello"<<std::endl;
}
int main(){
std::cout<<printH<<std::endl; // printH is basically pointing to the starting of the fn and since there is a fn it return bool true hence op is 1
printH();

return 0;
}