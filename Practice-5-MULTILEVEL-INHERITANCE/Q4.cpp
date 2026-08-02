// 💻 Practice 31 ⭐⭐⭐⭐⭐ (Placement Level)

// Topic: Multilevel Inheritance + Constructor Chaining
// Create these classes:
// Person
// Parameterized constructor:
// Person(string name)
// Print:
// Person Constructor
// Employee
// Inherit from Person
// Parameterized constructor:
// Employee(string name)
// Call the Person constructor.
// Print:
// Employee Constructor
// Manager
// Inherit from Employee
// Parameterized constructor:
// Manager(string name)
// Call the Employee constructor.
// Print:
// Manager Constructor
// main()
// Manager m1("Kaif");

// 🎯 Purpose: Ye dekhna hai ki tum parameterized constructor chaining bina hint ke likh sakte ho ya nahi.

// ❌ No hints.
#include <iostream>
using namespace std;

class Person
{
public:
    Person(string name)
    {
        cout << "Person Constructor" << endl;
    }
};

class Employee : public Person
{
public:
    Employee(string name) : Person(name)
    {
        cout << "Employee Constructor" << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(string name) : Employee(name)
    {
        cout << "Manager Constructor" << endl;
    }
};

int main()
{
    Manager m1("Kaif");
}


// 🎯 Sabse Important Interview Question

// Tum baar-baar isi point par atakte ho, isliye ye clear karte hain.

// Question
// class Manager : public Employee
// {
// public:
//     Manager(string name)
//         : Employee(name)
//     {
//     }
// };
// Agar main : Employee(name) hata doon to compile kyu nahi hoga?

// Iska answer English ya Hinglish me do.

// Tumne exactly root cause pakad liya.

// Kyuki Employee ke pass default constructor nahi hai.

// ✅ Bilkul sahi.

// 🎤 Placement Ready Answer

// Manager inherits from Employee. Before creating a Manager object, the compiler must construct the Employee part of the object. Since Employee does not have a default constructor, the compiler cannot call Employee(). Therefore, we must explicitly call Employee(name) in the initializer list.

// ⚠️ Interview Trap

// Interviewer pooch sakta hai:

// Compiler default constructor ko call karne ki koshish kyun karta hai?

// Answer:

// Because every derived class constructor must first initialize its direct base class. If we don't specify which base constructor to call, the compiler automatically tries to call the base class's default constructor. If that constructor doesn't exist, compilation fails.

// Ye answer bahut strong hai.