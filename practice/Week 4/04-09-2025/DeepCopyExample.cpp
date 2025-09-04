#include <iostream>
#include <string.h>
class Employee
{
public:
    char *designation;
    int salary;
    int yearOfJoining;
    Employee()
    {
        std::cout << "An employee object is created." << std::endl;
    }
    Employee(char designation[], int salary, int yearOfJoining)
    {

        this->designation = designation;
        this->salary = salary;
        this->yearOfJoining = yearOfJoining;
    }
    Employee(Employee &temp)
    {
        char *ch = new char[10];
        strcpy(ch, temp.designation);

        this->designation = ch;
        this->salary = temp.salary;
        this->yearOfJoining = temp.yearOfJoining;
    }
    void printEmployeeDetails(int id)
    {
        std::cout << "Employee " << id << " details : \n";
        std::cout << this->designation << std::endl;
        std::cout << this->salary << std::endl;
        std::cout << this->yearOfJoining << std::endl;
    }
};
int main()
{
    char name[10] = "Trainee";
    std::cout << sizeof(Employee) << std::endl;
    Employee emp1(name, 15000, 2025);
    Employee emp2(emp1);
    emp1.printEmployeeDetails(1);
    emp2.printEmployeeDetails(2);
    emp1.designation[0] = 'F';
    emp1.printEmployeeDetails(1);
    emp2.printEmployeeDetails(2);
    return 0;
}