#include<iostream>
using namespace std;
int sum(int , int);
int diff(int a,int b);
int mul(int , int);
double divide(double,double);
int mod(int,int);

int main(){
    cout<<"Enter the operation to be performed ('+','-','*','/') :";
    char op;
    cin>>op;
    int num1,num2;
    switch (op)
    {
    case '+' :
        cout<<"Enter fist num :";
        cin>>num1;
        cout<<"Enter second num :";
        cin>>num2;
        cout<<sum(num1,num2);
        break;
    case '-' :
        cout<<"Enter fist num :";
        cin>>num1;
        cout<<"Enter num to be deducted:from num1 :";
        cin>>num2;
        cout<<diff(num1,num2);
        break;
    case '/' :
        cout<<"Enter dividend :";
        cin>>num1;
        cout<<"Enter divisor :";
        cin>>num2;
        cout<<divide(num1,num2);
        break;
    case '%' :
        cout<<"Enter dividend :";
        cin>>num1;
        cout<<"Enter divisor :";
        cin>>num2;
        cout<<mod(num1,num2);
        break;
    
    default: cout<<"Invalid operation";
        break;
    }
    return 0;
}

int sum(int num1,int num2){
 return num1+num2;
}
int diff(int num1,int num2){
 return num1-num2;
}
int mul(int num1,int num2){
 return num1*num2;
}
double divide(double num1,double num2){
 return num1/num2;
}
int mod(int num1,int num2){
    return num1%num2;
}