#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"Number is even."<<endl;
    }
    else cout<<"Number is odd"<<endl;

    int day;
    cout<<"Enter a day number (1-7) :"<<endl;
    cin>>day;
    switch (day){
        case 1 : 
            cout<<"Sunday"<<endl;
            break;
        case 2: 
            cout<<"Monday"<<endl;
            break;
        case 3 : 
            cout<<"Tuesday"<<endl;
            break;
        case 4 : 
            cout<<"Wednesday"<<endl;
            break;
        case 5 : 
            cout<<"Thursday"<<endl;
            break;
        case 6 : 
            cout<<"Friday"<<endl;
            break;
        case 7 : 
            cout<<"Saturday"<<endl;
            break;
        default : cout<<"Enter a valid day number."<<endl;
    }
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    int max = (a>b)?a:b;
    cout<<"Greater number is:"<<max<<endl;
    return 0;
}