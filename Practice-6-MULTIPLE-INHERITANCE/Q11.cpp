
// Placement me bas is tarah bolna:

// obj.x is ambiguous because class D contains two copies of class A—one through B and another through C. The compiler cannot determine which x to access. Using obj.B::x or obj.C::x removes the ambiguity.

// 🎯 Ab Interview Twist (Most Asked)

// Code dekho:

#include<iostream>
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

class C : public A
{
public:
    C()
    {
        cout << "C ";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D ";
    }
};

int main()
{
    D obj;
}
// Questions
// Will it compile?
// What will be the output?
// How many times will constructor A() execute?
// Why?

// ⚠️ No hints.

// Ye Diamond Problem ka last question hai. Iske baad hum Virtual Inheritance start karenge, jo is problem ka official solution hai.


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// A B A C D

// ✅ Correct.

// Execution:

// Create D object

// ↓

// B constructor starts

// ↓

// A constructor (for B)

// ↓

// B constructor

// ↓

// C constructor starts

// ↓

// A constructor (for C)

// ↓

// C constructor

// ↓

// D constructor

// Output:

// A
// B
// A
// C
// D
// Q3.

// How many times does A() execute?

// Two

// ✅ Correct.

// Q4. Why?

// Ye answer bhi interview me aana chahiye.

// Placement Ready Answer

// Class D inherits from both B and C, and both B and C independently inherit from A. Therefore, two separate copies of A are created inside D, so the constructor of A executes twice.

// 🧠 Diamond Problem Summary (Problem Only)
// Situation
//         A
//       /   \
//      B     C
//       \   /
//         D
// Problem 1
// obj.x;

// ❌ Ambiguity

// Because:

// A (from B)

// OR

// A (from C)
// Problem 2

// Constructor

// A
// B
// A
// C
// D

// 🔴 A constructor runs twice.

// Problem 3

// Memory Waste

// D Object

// A
// B
// A
// C
// D

// Two copies of A.

// 🎯 Interview Question

// Agar interviewer pooche:

// Why is it called the Diamond Problem?

// Best Answer:

// The inheritance structure forms a diamond shape, where two intermediate classes inherit from the same base class, and a final derived class inherits from both intermediate classes. This creates two copies of the common base class, leading to ambiguity and duplicate data.