#include<iostream>
using namespace std;
int global = 78;
int main(){
    
    int integerVariable = 10;
    float floatVariable = 101.101f;
    double doubleVar = 12.1234456;
    char charVariable = 'P';
    bool booleanVar = true;
    short int shortVar = 5;
    long longVariable = 987654321;
    const float pi = 3.142857f;

    double sum = integerVariable+doubleVar;
    int intDoubleValue = (int)doubleVar;

    cout<<"Integer Value : "<<integerVariable<<endl;
    cout<<"Float Value : "<<floatVariable<<endl;
    cout<<"Double Value : "<<doubleVar<<endl;
    cout<<"Char Value : "<<charVariable<<endl;
    cout<<"Boolean Value : "<<booleanVar<<endl;
    cout<<"Short Value : "<<shortVar<<endl;
    cout<<"Long Value : "<<longVariable<<endl;
    cout<<"Area : "<<pi*4*4<<endl;
    cout<<"Sum of diff data type :"<<sum<<endl;
    cout<<"Casted value of double to int :"<<intDoubleValue<<endl;
    cout<<"Global variable value : "<< global<<endl;

    return 0;

}