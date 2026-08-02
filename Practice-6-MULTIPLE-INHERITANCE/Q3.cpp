// Multiple Inheritance - Ambiguity Problem ⭐⭐⭐⭐⭐

// Ye Amazon, Walmart, Microsoft, Juspay jaise companies me bhi poocha ja sakta hai.

// Sabse pehle concept

// Maan lo:
#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "A";
    }
};

class B
{
public:
    void show()
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
    obj.show();
}
// 🎯 Questions
// Q1. Will it compile?
// Q2. If not, why?
// Q3. How can we fix it?


// Compiler sochta hai:

// "Kis show() ko call karu?"

// A::show()  ❓
// B::show()  ❓

// Dono classes me same name ka function hai.

// Compiler khud decide nahi kar sakta.

// Isliye error aata hai:

// request for member 'show' is ambiguous

// Interview Question
// Q2. Why?

// Best Answer:

// Both base classes (A and B) contain a function named show(). Since C inherits from both classes, obj.show() becomes ambiguous because the compiler cannot determine whether to call A::show() or B::show().

// Q3. How to Fix?

// Yahi interview ka main question hota hai.

// Isko fix karne ke liye Scope Resolution Operator (::) use karte hain.

// obj.A::show();

// Ya

// obj.B::show();

// Ab compiler ko clear instruction mil gaya.

// Complete Correct Code

#include<iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "A";
    }
};

class B
{
public:
    void show()
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

    obj.A::show();
    cout << endl;

    obj.B::show();
}


// 🎯 Placement Tip

// Ye Multiple Inheritance + Ambiguity ka No. 1 interview question hai.

// Bahut companies directly poochti hain:

// "What is ambiguity in multiple inheritance, and how do you resolve it?"

// Expected answer:

// When multiple base classes contain members with the same name, the compiler cannot determine which member to use. This causes ambiguity. It can be resolved using the scope resolution operator (::).