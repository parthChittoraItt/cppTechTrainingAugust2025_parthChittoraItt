#include <iostream>
class Employee
{
public:
    int age;
    int id;
    std::string name;

    Employee()
    {
        std::cout << "Employee constructor called\n";
        printEmployeeDetails();
    }

    Employee(int age, int id, std::string name)
    {
        this->age = age;
        this->id = id;
        this->name = name;
    }
    void printEmployeeDetails()
    {
        std::cout << this->age << std::endl;
        std::cout << this->id << std::endl;
        std::cout << this->name << std::endl;
    }
};
int main()
{
    Employee *emp1 = new Employee;
    Employee *emp2 = new Employee(23, 1, "Parth");
    emp2->printEmployeeDetails();
    return 0;
}