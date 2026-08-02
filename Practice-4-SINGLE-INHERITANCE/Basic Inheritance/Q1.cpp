// 💻 Practice 01 (🟢 Easy)

// Create two classes:

// Employee
// Private:
// string name
// Public:
// Constructor
// displayName()
// Manager
// Publicly inherit from Employee
// Private:
// int teamSize
// Public:
// Constructor
// displayTeamSize()
// main()

// Create one object and call both display functions.

// That's it.

// No hints.
// No expected output.
// No syntax help.

#include <iostream>
using namespace std;

class Employee
{
    string name;

public:
    Employee(string name) : name(name)
    {
    }

    void displayName()
    {
        cout << name << endl;
    }
};

class Manager : public Employee
{
    int teamSize;

public:
    Manager(string na, int t)
        : Employee(na), teamSize(t)
    {
    }

    void displayTeamSize()
    {
        cout << "Team Size: " << teamSize << endl;
    }
};

int main()
{
    Manager m1("Kaif",5);
    m1.displayName();
    m1.displayTeamSize();
}



// Agar base class me default constructor ho:
// class Employee
// {
// public:
//     Employee()
//     {
//         cout << "Default Constructor";
//     }

//     Employee(string n)
//     {
//         cout << "Parameterized Constructor";
//     }
// };

// Aur derived class:

// class Manager : public Employee
// {
// public:
//     Manager()
//     {
//     }
// };

// Jab:

// Manager m1;

// banega to flow hoga:

// Employee()      ← Automatically called
// Manager()
// Agar tum explicitly likh do:
// Manager(string n) : Employee(n)
// {
// }

// To flow hoga:

// Employee("Kaif")
// Manager()
// ⭐ Golden Rule (GitHub README me likhne layak)
// Base Class Constructor Calling
// Rule 1

// If the base class has a default constructor, it is called automatically.

// Rule 2

// If the base class has only a parameterized constructor, the derived class must explicitly call it.

// Rule 3

// The base class constructor always executes before the derived class constructor.

// 📌 Ab mujhe samajh aa gaya tum kaise padhna chahte ho.

// Pehle main direct coding de raha tha. Ab hum usse aur better karenge.

// Har Concept ka Flow
// Step 1

// Theory (5 min)

// Step 2

// Conceptual Questions (jaise abhi kiye)

// Step 3

// Dry Run / Memory

// Step 4

// Mini Coding Example (sirf concept dikhane ke liye)

// Step 5

// Coding Practice (jo tum khud likhoge)

// Step 6

// Placement Interview Questions

// Step 7

// GitHub Push

// Aur ek aur improvement karte hain.

// Har concept ke end me main ye dunga:

// 🧠 What you learned

// ✅ Parent constructor executes first.
// ✅ Child constructor executes second.
// ✅ If parent has only parameterized constructor,
//    child must explicitly call it.
// ✅ If parent has default constructor,
//    compiler calls it automatically.

// Aur uske baad:

// ❌ Common Mistakes

// 1. Initializing base class data members directly.
// 2. Forgetting to call the base class constructor.
// 3. Thinking child constructor runs first.



// Sirf ek baar ye 4 rules revise kar lena:

// Base class constructor always executes first.
// Derived class constructor executes after the base class constructor.
// If the base class has only a parameterized constructor, the derived class must explicitly call it.
// Private members cannot be accessed directly by the derived class, but they can be accessed indirectly through the base class's public/protected member functions.