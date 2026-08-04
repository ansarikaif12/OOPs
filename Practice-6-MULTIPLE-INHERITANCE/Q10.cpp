// Module: Diamond Problem (Part 1 - Problem Only)
// Step 1

// Ye code dekho.

// #include<iostream>
// using namespace std;

// class A
// {
// public:
//     int x = 10;
// };

// class B : public A
// {
// };

// class C : public A
// {
// };

// class D : public B, public C
// {
// };

// int main()
// {
//     D obj;
// }
// Step 2 - Memory Visualization

// Object D banta hai.

// Compiler kya banata hai?

//         D Object

//  ┌──────────────────┐
//  │ A (from B)       │
//  │ x = 10           │
//  ├──────────────────┤
//  │ B                │
//  ├──────────────────┤
//  │ A (from C)       │
//  │ x = 10           │
//  ├──────────────────┤
//  │ C                │
//  ├──────────────────┤
//  │ D                │
//  └──────────────────┘

// ⚠️ Dhyan do.

// A 2 baar aaya.

// Yahi Diamond Problem ki root cause hai.

// Step 3

// Ab ye line likhte hain.

// D obj;

// cout << obj.x;

// Compiler kya sochega?

// Kaunsa x?

// A (from B) ?

//       OR

// A (from C) ?

// Compiler ke paas 2 x hain.

// Wo guess nahi karega.

// Isliye compile-time error.

// Placement Definition

// Diamond Problem occurs when a class inherits the same base class through multiple inheritance, resulting in multiple copies of the base class and causing ambiguity.

// Ye definition interview me directly bol sakte ho.

// 🔥 Practice 40 ⭐⭐⭐⭐⭐

// Code:

#include<iostream>
using namespace std;

class A
{
public:
    int x = 10;
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;

    cout << obj.B::x << endl;
    cout << obj.C::x << endl;
}
// Questions
// Q1. Will it compile?
// Q2. What will be the output?
// Q3. Why does this compile, but obj.x does not?

// ❌ No hints.


// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// 10
// 10

// ✅ Correct.

// Because:

// obj.B::x

// refers to:

// A (through B)

// and

// obj.C::x

// refers to:

// A (through C)

// Both have:

// x = 10;
// Q3.

// Tumne likha:

// because obj.x get confuse about which x should be return because D class have two copies of A

// 🔥 100% Correct.
