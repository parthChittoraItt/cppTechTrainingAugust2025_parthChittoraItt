#include<iostream>
using namespace std;
int main(){
cout<<"Enter the number of strings to input :";
    int count;
    cin >> count;
    while(count--){
        string s;
        getline(cin, s);
        cout<<s<<endl;
    }
    cout<< "When we use cin.ignore()"<<endl;
    cout<<"Enter the number of strings to input :";
    int count2;
    cin >> count2;
    cin.ignore(); // To ignore the newline character left in the buffer
    while(count2--){
        string s;
        getline(cin, s);
        cout<<s<<endl;
    }
  return 0;
}
