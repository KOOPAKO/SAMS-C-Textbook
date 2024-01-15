// header file for ex1-2.cpp

class Employee
{
private:
    short int age;
    short int yearsOfService;
    long int salary;

public:
    // constructor
    Employee();
    Employee(short int age, short int yearsOfService, long int salary);

    // getters
    short int getAge() const;
    short int getYearsOfService() const;
    long int getSalary() const;

    // setters

    void setAge(short int age);
    void setYearsOfService(short int yearsOfService);
    void setSalary(long int salary);
};