// 🚀 Question 21

// Write a C++ program.

// Create a class Employee.

// Data Members
// string name
// int id
// double salary
// static int nextId
// Requirements
// Create a parameterized constructor.
// Create a display() function.
// main()

// Create four objects and display their details.

// Rules
// ❌ No hints.
// ❌ No examples.
// ❌ No expected output.
// ❌ No extra explanation.

#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    double salary;
    static int nextId;
public:
    Employee(string n,double s) : name(n), salary(s)
    {
        id=nextId;
        nextId++;
    }

    void display(){
        cout<<name<<" "<<id<<" "<<salary<<endl;
    }
};

int Employee::nextId=101;

int main()
{
    Employee e1("Kaif", 50000);
    Employee e2("Aman", 45000);
    Employee e3("Ali", 60000);
    Employee e4("Sara", 55000);

    e1.display();
    e2.display();
    e3.display();
    e4.display();
}