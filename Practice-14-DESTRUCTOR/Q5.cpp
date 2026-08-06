// ⭐ Virtual Destructor (Most Important Destructor Topic)

// Ye Amazon, Microsoft, Adobe, Oracle, Walmart jaise product companies me bahut poocha jata hai.

// Pehle code dekho.
#include<iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"A Constructor"<<endl;
    }

    ~A()
    {
        cout<<"A Destructor"<<endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout<<"B Constructor"<<endl;
    }

    ~B()
    {
        cout<<"B Destructor"<<endl;
    }
};

int main()
{
    A *ptr = new B();

    delete ptr;
}


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Actual Output

// A Constructor
// B Constructor
// A Destructor

// ❌ B Destructor call nahi hoga.

// Why?

// Code:

// A *ptr = new B();

// delete ptr;

// Yahan:

// Pointer type = A*
// Object type = B

// Lekin A ka destructor virtual nahi hai.

// Compiler dekhta hai:

// delete ptr;

// Aur bolta hai:

// "Pointer A* hai, to main A ka destructor hi call karunga."

// Isliye output:

// A Constructor
// B Constructor
// A Destructor

// ⚠️ B ka destructor skip ho gaya.

// 😱 Problem

// Agar B ne koi memory allocate ki ho:

// class B : public A
// {
//     int *arr;

// public:
//     B()
//     {
//         arr = new int[100];
//     }

//     ~B()
//     {
//         delete[] arr;
//     }
// };

// Aur B ka destructor hi call nahi hua...

// 👉 Memory Leak 💥

// Solution: Virtual Destructor
// class A
// {
// public:
//     virtual ~A()
//     {
//         cout << "A Destructor" << endl;
//     }
// };

// Bas itna change.

// Ab:

// A *ptr = new B();

// delete ptr;

// Output:

// A Constructor
// B Constructor
// B Destructor
// A Destructor

// ✅ Dono destructors call honge.

// ⭐ Golden Rule (Very Important)
// Without Virtual Destructor
// delete BasePointer;

// ↓

// Only Base Destructor
// With Virtual Destructor
// delete BasePointer;

// ↓

// Derived Destructor

// ↓

// Base Destructor


// 🎯 Interview Question

// Q: Why do we make the base class destructor virtual?

// Placement Answer:

// A virtual destructor ensures that when a derived object is deleted using a base class pointer, both the derived class destructor and the base class destructor are called correctly. This prevents resource leaks and ensures proper cleanup.



// Agar tumhara ? is line ke liye tha:

// "Why virtual constructor is not possible?"

// To short placement answer:

// Constructor object banata hai. Object banne se pehle compiler ko hi decide karna padta hai ki kis class ka object banana hai. Virtual ka decision runtime par hota hai. Isliye constructor virtual nahi ho sakta.

// Ek line me yaad rakho:
// Constructor → Object create karta hai (Compile Time).
// Virtual → Decision Runtime par hota hai.
// Isliye Virtual Constructor ❌ Possible nahi hai.

// Aur agar tumhara ? Static Constructor/Destructor ke liye tha:

// Static Constructor ❌ C++ me exist hi nahi karta.
// Static Destructor ❌ C++ me exist hi nahi karta.