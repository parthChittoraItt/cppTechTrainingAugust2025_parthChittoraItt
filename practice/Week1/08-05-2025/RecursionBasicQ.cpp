#include<iostream>
using namespace std;
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int fiboNTerm(int n){
    if(n<=2) return 1;
    return fiboNTerm(n-2)+fiboNTerm(n-1);
}
int main(){
    cout<<"Enter num for factorial :";
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<"Nth fibonacci term is :"<<fiboNTerm(n);
  return 0;
}