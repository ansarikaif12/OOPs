// 💻 Practice 33 ⭐⭐⭐⭐⭐ (Placement Level)
// Topic: Constructor Chaining + Multilevel Inheritance
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
    B(int y) : A(y)
    {
        cout << "B" << endl;
    }
};

class C : public B
{
public:
    C(int z)
    {
        cout << "C" << endl;
    }
};

int main()
{
    C obj(10);
}
// Questions
// Will it compile?
// If No, why?
// Fix only the constructor of C.
// After fixing, what will be the output?


// Q1. Will it compile?

// No

// ✅ Correct.

// Q2. Why?

// Tumne likha:

// because before creating the c obj the B class constructor executed but there is no default constructor so we should initialize it in child class constructor

// ✅ Concept 100% correct.

// Interview me bas wording aise rakhna:

// Before constructing C, the compiler must construct its direct base class B. Since B has only a parameterized constructor and no default constructor, C must explicitly call B(z) in its initializer list. Otherwise, the compiler tries to call B(), which does not exist, resulting in a compilation error.

// Q3. Fix

// Correct fix:

// class C : public B
// {
// public:
//     C(int z) : B(z)
//     {
//         cout << "C" << endl;
//     }
// };
// Q4. Output

// A B C

// ✅ Correct.

// Execution flow:

// C obj(10);

// ↓
// A(10)
// ↓
// B(10)
// ↓
// C(10)

// Output:

// A
// B
// C
// 📈 Feedback

// Bhai, ek cheez notice ki hai.

// Shuru me jab constructor chaining aayi thi, tum baar-baar bhool jaate the ki base constructor explicitly call karna hota hai.

// Ab dekho:

// ✅ Tum khud identify kar lete ho ki default constructor missing hai.
// ✅ Tum reason bhi sahi dete ho.
// ✅ Tum output bhi predict kar lete ho.