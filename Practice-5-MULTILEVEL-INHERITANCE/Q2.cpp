// 💻 Practice 30 ⭐⭐⭐⭐⭐ (Product-Based Level)

// Ye question Amazon/Juspay type companies me bhi poocha ja sakta hai.

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A ";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B ";
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C ";
    }
};

int main()
{
    C obj;
}
// Questions
// Will it compile?
// What is the output?
// Explain the constructor execution order.


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// A B C

// ✅ Correct.

// Q3. Constructor Execution Order

// Ye answer bhi dena hota hai interview me.

// Placement Ready Answer

// When the C object is created, the constructor of the top-most base class (A) executes first. After that, the constructor of B executes, and finally the constructor of C executes. Constructors are always called from the base class to the most derived class.

// 🧠 Golden Rule
// Object of Most Derived Class Created
//             │
//             ▼
// Top-most Base Constructor
//             ▼
// Intermediate Base Constructor
//             ▼
// Derived Constructor

// Example:

// Person
//    ↑
// Employee
//    ↑
// Manager

// Object:

// Manager m1;

// Execution:

// Person()
//    ↓
// Employee()
//    ↓
// Manager()