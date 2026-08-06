// 😈 Placement Question (Inheritance + Destructor)
#include<iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A Constructor" << endl;
    }

    ~A()
    {
        cout << "A Destructor" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B Constructor" << endl;
    }

    ~B()
    {
        cout << "B Destructor" << endl;
    }
};

int main()
{
    B obj;
}


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// A Constructor
// B Constructor
// B Destructor
// A Destructor

// ✅ Correct.

// Q3.

// Why are destructors called in reverse order?

// Tumne likha:

// because destructor follows bottom to top

// ✅ Sahi hai, lekin interview me thoda aur explain karna.

// Placement Answer

// The derived class object is destroyed first because it may use resources that depend on the base class. After the derived class has finished cleaning up its own resources, the base class destructor is called. Therefore, destructors execute in reverse order of constructors.

// ⭐ Golden Rule
// Constructor  → Base → Derived

// Destructor   → Derived → Base

// Is line ko rat lo. 100% interview question hai.