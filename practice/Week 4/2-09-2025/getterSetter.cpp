#include <iostream>

class Employee
{
private:
    int age;
    int salary;
    int id;

public:
    void setId(int idNum)
    {
        id = idNum;
    }
    void setSalary(int sal)
    {
        salary = sal;
    }
    void setAge(int ageValue)
    {
        age = ageValue;
    }
    int getAge()
    {
        return age;
    }
    int getId()
    {
        return id;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Employee emp1;
    emp1.setId(122);
    emp1.setAge(23);
    emp1.setSalary(120000);
    std::cout << emp1.getId() << std::endl;
    std::cout << emp1.getAge() << std::endl;
    std::cout << emp1.getSalary() << std::endl;
    Employee emp2;
    emp2.setId(127);
    emp2.setAge(23);
    emp2.setSalary(140000);
    std::cout << emp2.getId() << std::endl;
    std::cout << emp2.getAge() << std::endl;
    std::cout << emp2.getSalary() << std::endl;
    return 0;
}
