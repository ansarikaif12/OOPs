// Coding Question

// Create 3 classes.

// Person
// Public:
// showPerson()
// Employee
// Publicly inherit from Person
// Public:
// showEmployee()
// Manager
// Publicly inherit from Employee
// Public:
// showManager()
// main()

// Create:

// Manager m1;

// Call all possible functions.

// Rules
// ❌ No hints
// ❌ No syntax help
// ❌ No expected output
// 🎯 This is a placement-level coding question.

#include<iostream>
using namespace std;

class Person{
    public:
    void showPerson(){
        cout<<"Display person\n";
    }
};  
class Employee: public Person{
    public:
    void showEmployee(){
        cout<<"Display Employee"<<'\n';
    }
};
class Manager: public Employee{
    public:
    void showManager(){
        cout<<"Display Manager\n";
    }
};
int main(){
    Manager m1;
    m1.showPerson();
    m1.showEmployee();
    m1.showManager();
}


// 🎯 Ek Important Rule (Placement)

// Ye 4 rules kabhi mat bhoolna:

// Parent Object
//    ↓
// Can access only Parent members.

// Child Object
//    ↓
// Can access Parent + Child members.

// Parent class
//    ↓
// Never inherits from Child.

// Child class
//    ↓
// Always inherits from Parent.