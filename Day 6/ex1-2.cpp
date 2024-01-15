#include "ex1-2.hpp"

// constructor
Employee::Employee()
{
    age = 0;
    yearsOfService = 0;
    salary = 0;
}

Employee::Employee(short int age, short int yearsOfService, long int salary)
{
    this->age = age;
    this->yearsOfService = yearsOfService;
    this->salary = salary;
}

// getters
short int Employee::getAge() const
{
    return age;
}

short int Employee::getYearsOfService() const
{
    return yearsOfService;
}

long int Employee::getSalary() const
{
    return salary;
}

// setters
void Employee::setAge(short int age)
{
    this->age = age;
}

void Employee::setYearsOfService(short int yearsOfService)
{
    this->yearsOfService = yearsOfService;
}

void Employee::setSalary(long int salary)
{
    // round to nearest thousand
    salary = (salary + 500) / 1000 * 1000;

    this->salary = salary;
}