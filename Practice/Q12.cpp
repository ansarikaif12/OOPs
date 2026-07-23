// Question 10 (Difficulty ⭐⭐⭐⭐☆)

// Write a C++ program that satisfies the following requirements:

// Create a class named Employee.

// Data Members
// empId
// name
// basicSalary
// Member Functions
// input()
// calculateSalary()
// display()
// Salary Rules
// HRA = 20% of Basic Salary
// DA = 10% of Basic Salary
// Gross Salary = Basic Salary + HRA + DA
// Output Example
// Employee ID : 101
// Name : Kaif
// Basic Salary : 50000
// Gross Salary : 65000
// Rules
// ❌ No constructor
// ❌ No loops
// ❌ No arrays
// ❌ No global variables
// ❌ No hints

// 📌 Difficulty: 4/10

// This is a very common placement interview question because it checks:

// Class
// Private members
// Member functions
// Calculation logic
// Function separation


#include<iostream>
using namespace std;

class Employee{
    int empid;
    string name;
    int basicSalary;

    public:
    void input(){
        cout<<"Enter the details of Employee : "<<endl;
        cin>>empid>>name>>basicSalary;
    }

    int calculateSalary(){
        int HRA=basicSalary*0.2;
        int DA=basicSalary*0.1;
        return basicSalary+HRA+DA;
    }

    void display(){
        cout<<"Employee ID : "<<empid<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Basic Salary: "<<basicSalary<<endl;
        cout<<"Gross Salary: "<<calculateSalary()<<endl;
    }
};


int main(){
    Employee e1;
    e1.input();
    e1.display();
    return 0;
}