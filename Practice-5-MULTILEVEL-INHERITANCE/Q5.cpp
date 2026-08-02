// 💻 Practice 32 ⭐⭐⭐⭐⭐ (Placement Bug Fix)

// Is question me sirf 1 bug hai.

#include<iostream>
using namespace std;

class A
{
public:
    A(int x)
    {
        cout << "A" << endl;
    }
};

class B : public A
{
public:
    B(int y)
    {
        cout << "B" << endl;
    }
};

int main()
{
    B obj(10);
}
// Questions
// Will it compile?
// If not, why?
// Fix only the constructor of B.

// Q1. Will it compile?

// ❌ No.

// Q2. Why?

// Class B inherits from A.

// Jab ye line execute hogi:

// B obj(10);

// Compiler sabse pehle A ka constructor call karega.

// Lekin B ke constructor me tumne likha hi nahi:

// : A(y)

// To compiler automatically try karega:

// A()

// Lekin A ke paas default constructor hai hi nahi.

// Uske paas sirf:

// A(int x)

// Isliye compile-time error aayega.

// Q3. Fix

// Sirf B ka constructor change karna hai.

// class B : public A
// {
// public:
//     B(int y) : A(y)
//     {
//         cout << "B" << endl;
//     }
// };
// Execution Flow
// B obj(10);

// Step 1:

// A(10)

// Output:

// A

// Step 2:

// B(10)

// Output:

// B

// Final Output:

// A
// B


// 🎯 Placement Interview Trick

// Interviewer:

// Why didn't the compiler directly execute B's constructor?

// Best Answer

// Because before a derived class object is created, its base class must be initialized. Therefore, the base class constructor always executes first. If the required base constructor is not called explicitly, the compiler tries to call the default constructor. If no default constructor exists, compilation fails.

// Jab bhi base class me sirf parameterized constructor dikhe, turant check karo ki derived constructor initializer list me us base constructor ko call kar raha hai ya nahi.