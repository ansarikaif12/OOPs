// 💻 Practice 23 (🟡 Medium)

// Topic: Protected Members

// Create two classes.

// Employee
// Protected:
// string name
// int salary
// Public:
// Parameterized constructor
// Developer
// Publicly inherit from Employee
// Private:
// string language
// Public:
// Parameterized constructor
// displayDetails()
// main()

// Create:

// Developer d1("Kaif", 50000, "C++");

// Print:

// Name
// Salary
// Language
// Rules
// ❌ No hints
// ❌ No expected output
// ❌ No syntax help
// ❌ No theory


#include<iostream>
using namespace std;

class Employee{
    protected: 
    string name;
    int salary;
    public:
    Employee(string n, int s): name(n), salary(s){

    }
};

class Developer: public Employee{
    string language;
    public:
    Developer(string l,string n,int s): language(l), Employee(n,s){

    }
    void displayDetails(){
        cout<<name<<" "<<salary<<" "<<language<<endl;
    }
};

int main(){
    Developer d1("C++","Kaif",80000);
    d1.displayDetails();
}