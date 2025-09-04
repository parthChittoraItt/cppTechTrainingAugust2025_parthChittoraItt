#include <iostream>

class Employee
{public:
   std::string designation;
   int salary;
   int yearOfJoining;
    Employee()
    {
        std::cout << "An employee object is created." << std::endl;
    }
    Employee(std::string designation,int salary,int yearOfJoining){
        this->designation=designation;
        this->salary=salary;
        this->yearOfJoining=yearOfJoining;
    }
    void printEmployeeDetails(int id){
        std::cout<<"Employee "<<id<<" details : \n";
        std::cout<<this->designation<<std::endl;
        std::cout<<this->salary<<std::endl;
        std::cout<<this->yearOfJoining<<std::endl;
    }
    
};
int main()
{
    Employee emp1("Trainee",15000,2025);
    Employee emp2(emp1); //Inbuilt copy constructor called 
    emp1.printEmployeeDetails(1);
    emp2.printEmployeeDetails(2);
    return 0;
}