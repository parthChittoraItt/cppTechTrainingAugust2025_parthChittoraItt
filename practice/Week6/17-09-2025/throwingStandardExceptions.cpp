#include<iostream>
#include <stdexcept>
#include <vector>
int main(){
// int arr[] = {1,2,3,4,5};     //Not possible as we are using normal c style arrays which do not throw an error for out of range 
// try{
//     int x = arr[3];
//     int y = arr[5];
// }
std::vector<int> data = {1,2,3,4,5};
try{
    int x = data.at(2);
    int y = data.at(10);
}
catch(std::out_of_range e){
    std::cout<<"Out of bound element.\n";
}
return 0;
}