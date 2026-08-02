💻 Practice 37 ⭐⭐⭐⭐⭐ (Placement Bug Fix)

Ab difficulty +1.

#include<iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "A";
    }
};

class B
{
public:
    void display()
    {
        cout << "B";
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;

    obj.display();
}
// Questions
// Will it compile?
// Why?
// Fix it without changing any class.


// Q1. Will it compile?

// No

// ✅ Correct.

// Q2. Why?

// Tumne likha:

// because obj will confuse..., because both parent classes take same name functions

// ✅ Bilkul sahi.

// Bas interview me aise bolna:

// Both base classes (A and B) have a function named display(). Since C inherits from both classes, the compiler cannot determine whether obj.display() refers to A::display() or B::display(). This causes an ambiguity error.


// Q3. Fix

// Tumne likha:

// obj.A::display();
// obj.B::display();

// ✅ 100% Correct.