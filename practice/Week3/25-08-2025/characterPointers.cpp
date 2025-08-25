#include<iostream>
void printString(char c[]){
    int i = 0 ; 
    while(c[i]!='\0'){
        std::cout<<c[i];
        i++;
    }
    std::cout<<std::endl;
}
void printString1(char c[]){
    while(*c!='\0'){
        std::cout<<*c;
        c++;
    }
    std::cout<<std::endl;
}
int main(){
char chString[30] ="Hello World";
printString1(chString);
printString(chString);
return 0;
}