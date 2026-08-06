// Placement Question 1 ⭐⭐⭐⭐
#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
};

int main()
{
    Animal a;
}


// Compile hoga?

// ❌ No

// Kyun?

// Dhyan se dekho.

// virtual void sound() = 0;

// Is function ki implementation hi nahi hai.

// Ab agar tum object banaoge:

// Animal a;

// Aur koi bole:

// a.sound();

// Compiler sochega:

// "Bhai sound() ka code hai hi nahi. Main kya execute karun?"

// Isliye compiler bolta hai:

// "Abstract class ka object banana allowed nahi hai."

// Golden Rule ⭐⭐⭐⭐⭐

// Agar class me ek bhi

// virtual void function() = 0;

// hai,

// to:

// ✅ Wo Abstract Class ban jati hai.

// Aur:

// ❌ Us class ka object nahi bana sakte.

// Example
// class Animal
// {
// public:
//     virtual void sound() = 0;
// };

// Animal a;      // ❌ Error

// Lekin ye chalega:

// class Dog : public Animal
// {
// public:
//     void sound()
//     {
//         cout << "Dog Bark";
//     }
// };

// Dog d;      // ✅ Valid

// Output:

// Dog Bark
// Real-Life Analogy

// Socho Animal ek template hai.

// Usme likha hai:

// Har animal ko sound() implement karna padega.

// Lekin Animal khud nahi batata sound kya hogi.

// Isliye:

// ❌ Animal ka object nahi ban sakta.
// ✅ Dog bana sakte ho (kyunki usne sound() define kar diya).
// ✅ Cat bana sakte ho.
// ✅ Cow bana sakte ho.
// Interview Ready Definition

// An abstract class is a class that contains at least one pure virtual function. It cannot be instantiated (its object cannot be created). It is used as a base class so that derived classes provide the implementation of the pure virtual functions.