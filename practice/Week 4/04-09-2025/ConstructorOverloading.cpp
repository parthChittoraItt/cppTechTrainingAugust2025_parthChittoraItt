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
    Employee(int age, int id){
        this->age=age;
        this->id=id;
    }
    void printEmployeeDetails()
    {
        std::cout<<"Employee "<<this->id<<" details : \n";
        std::cout << this->age << std::endl;
        std::cout << this->id << std::endl;
        std::cout << this->name << std::endl;
    }
};
int main()
{
    Employee *emp1 = new Employee;
    Employee *emp2 = new Employee(23, 1, "Parth");
    Employee *emp3 = new Employee(24,2);
    emp2->printEmployeeDetails();
    emp3->printEmployeeDetails();
    return 0;
}