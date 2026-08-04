// Ab Actual Placement Question ⭐⭐⭐⭐⭐

// Ye original interview question hai.

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
public:
    void test()
    {
        // Complete
    }
};

int main()
{
    C obj;
    obj.test();
}


// Agar tum likho:
// void test()
// {
//     display();
// }
// ❌ Compile Error

// Why?

// Compiler ke paas do options hain.

// display()

// ↓
// A::display() ❓

// OR

// B::display() ❓

// Compiler ko nahi pata kaunsa call kare.

// Isliye error:

// reference to 'display' is ambiguous
// Correct Solution
// void test()
// {
//     A::display();
//     B::display();
// }

// Output:

// A
// B
// 🎤 Interview Question

// Interviewer:

// Why did you write A::display() instead of display()?

// Best Answer

// Because both base classes contain a function with the same name. Calling display() directly creates ambiguity. Using the scope resolution operator tells the compiler exactly which base class function to call.

// 🔥 Very Important

// Ab tak jitni ambiguity dekhi hai...

// A::display()
// B::display()

// Ye Normal Multiple Inheritance Ambiguity thi.

// Ab jo topic aane wala hai...

//         A
//        / \
//       B   C
//        \ /
//         D

// Ye Diamond Problem hai.

// ⚠️ Ye dono same nahi hain.

// Bahut students in dono ko same samajh lete hain.