// 🎯 Placement Question 2

// Ab ye predict karo:

#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
};

class Dog : public Animal
{
};

int main()
{
    Dog d;
}


// Answer

// ❌ Compile nahi hoga.

// Reason

// Dog ne sound() implement hi nahi kiya.

// Animal ne bola tha:

// virtual void sound() = 0;

// Matlab:

// "Jo bhi meri child class hogi, usko sound() define karna hi padega."

// Dog ne nahi kiya.

// To Dog bhi Abstract Class ban gayi.

// Isliye:

// Dog d;

// ❌ Error.