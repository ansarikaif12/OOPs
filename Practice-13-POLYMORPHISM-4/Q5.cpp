// ⭐ Placement Version (Runtime Polymorphism)

// Interviewer agar thoda level badha de to aise likho:

#include<iostream>
using namespace std;

class Payment
{
public:
    virtual void pay() = 0;
};

class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Payment through UPI" << endl;
    }
};

class CreditCard : public Payment
{
public:
    void pay()
    {
        cout << "Payment through Credit Card" << endl;
    }
};

int main()
{
    Payment *ptr;

    UPI u1;
    CreditCard c1;

    ptr = &u1;
    ptr->pay();

    ptr = &c1;
    ptr->pay();

    return 0;
}
// Output
// Payment through UPI
// Payment through Credit Card


// 🎯 Interview Question

// Is code me:

// Payment *ptr;

// Question: Ye line kis concept ko demonstrate karti hai?

// A) Function Overloading

// B) Function Overriding

// C) Runtime Polymorphism

// D) Abstraction


// Correct answer is:

// ✅ C) Runtime Polymorphism

// Kyun?

// Code:

// Payment *ptr;

// UPI u1;
// CreditCard c1;

// ptr = &u1;
// ptr->pay();

// ptr = &c1;
// ptr->pay();

// Yahan:

// Base class pointer = Payment *ptr
// Pointer pehle UPI object ko point kar raha hai.
// Baad me CreditCard object ko point kar raha hai.
// pay() virtual hai.

// Isliye runtime par decide hota hai ki kaunsa function call hoga.

// 👉 Ye Runtime Polymorphism hai.

// Ab sawal

// Fir Abstraction kahan hai?

// Abstraction is line me hai:

// class Payment
// {
// public:
//     virtual void pay() = 0;
// };

// Kyuki:

// Payment ek Abstract Class hai.
// Ye sirf interface provide karti hai.
// Implementation child classes deti hain.

// 🎯 Interview Trick

// Ek hi program me do concepts ho sakte hain.

// class Payment
// {
// public:
//     virtual void pay() = 0;
// };

// ➡️ Abstraction ✅

// Aur

// Payment *ptr = &u1;
// ptr->pay();

// ➡️ Runtime Polymorphism ✅