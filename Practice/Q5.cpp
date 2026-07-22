// Question 2

// Write a C++ program that satisfies the following requirements:

// Create a class named Employee.
// The class should contain:
// Employee ID
// Employee Name
// Employee Salary
// Create two objects of the class.
// Take input for both employees.
// Print the details of both employees in the same order.

// Expected Output Format (example):

// Employee 1
// ID: 101
// Name: Kaif
// Salary: 50000

// Employee 2
// ID: 102
// Name: Aman
// Salary: 60000

#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_id;
    string name;
    float salary;
};

int main()
{
    Employee e1;
    Employee e2;

    cin >> e1.emp_id >> e1.name >> e1.salary;
    cin >> e2.emp_id >> e2.name >> e2.salary;

    cout << "Employee 1" << endl;
    cout << "ID: " << e1.emp_id << endl;
    cout << "Name: " << e1.name << endl;
    cout << "Salary: " << e1.salary << endl;

    cout << "Employee 2" << endl;
    cout << "ID: " << e2.emp_id << endl;
    cout << "Name: " << e2.name << endl;
    cout << "Salary: " << e2.salary << endl;
}