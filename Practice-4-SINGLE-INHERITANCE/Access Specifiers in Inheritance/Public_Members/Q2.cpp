// 💻 Practice 16 (🟡 Medium)

// Type: Coding

// Create 3 classes.

// Person
// Constructor
// showPerson()
// Employee
// Publicly inherit from Person
// Constructor
// showEmployee()
// Manager
// Publicly inherit from Employee
// Constructor
// showManager()
// main()

// Create one Manager object.

// Call all possible functions.

// Rules
// ❌ No hints.
// ❌ No expected output.
// ❌ No syntax help.
// ❌ No extra requirements.

#include<iostream>
using namespace std;

class Person{
    public: 
    Person(){

    }

    void showPerson(){
        cout<<"Show Person"<<endl;
    }
};

class Employee: public Person{
    public:
    Employee(){

    }
    void showEmployee(){
        cout<<"Show Employee"<<endl;
    }
};

class Manager: public Employee{
    public:
    Manager(){

    }
    void showManager(){
        cout<<"Show Manager"<<endl;
    }
};
int main(){
    Manager m1;
    m1.showPerson();
    m1.showEmployee();
    m1.showManager();
}