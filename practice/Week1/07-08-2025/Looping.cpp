#include<iostream>
using namespace std;
int main(){
    cout<<"Pattern 1 using for loop :"<<endl;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j<= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    cout<<"Printing pattern through while loop :"<<endl;
    int i = 5;
    while(i>=1){
        int j =1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    cout<<"Testing dowhile loop :"<<endl;
    int k =1;
    do
    {
       cout<<k<<endl;
    } while (k<1);
    
    
}