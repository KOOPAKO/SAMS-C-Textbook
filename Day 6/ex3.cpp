#include <iostream>

// include employee
#include "ex1-2.cpp"

int main()
{
    // create employee objects
    Employee employeeOne, employeeTwo;
    employeeOne = Employee();
    employeeTwo = Employee();

    // set values for employees
    employeeOne.setAge(25);
    employeeOne.setYearsOfService(5);
    employeeOne.setSalary(50000);

    employeeTwo.setAge(30);
    employeeTwo.setYearsOfService(10);
    employeeTwo.setSalary(100000);

    // print values for employees
    std::cout << "Employee One: " << std::endl;
    std::cout << "Age: " << employeeOne.getAge() << std::endl;
    std::cout << "Years of Service: " << employeeOne.getYearsOfService() << std::endl;
    std::cout << "Salary: " << employeeOne.getSalary() << std::endl;

    std::cout << "Employee Two: " << std::endl;
    std::cout << "Age: " << employeeTwo.getAge() << std::endl;
    std::cout << "Years of Service: " << employeeTwo.getYearsOfService() << std::endl;
    std::cout << "Salary: " << employeeTwo.getSalary() << std::endl;

    return 0;
}
