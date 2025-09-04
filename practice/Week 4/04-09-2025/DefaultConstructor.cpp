#include <iostream>

class Employee
{
    int age;
    int id;
    std::string name;

public:
    Employee()
    {
        std::cout << "An employee object is created." << std::endl;
    }
    void classCall()
    {
        std::cout << "Object of class Employee called.\n";
    }
};
int main()
{
    Employee emp1;
    Employee emp2;

    Employee *emp3 = new Employee;
    emp3->classCall();
    emp2.classCall();
    return 0;
}