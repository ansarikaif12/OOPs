
// Placement me bas is tarah bolna:

// obj.x is ambiguous because class D contains two copies of class A—one through B and another through C. The compiler cannot determine which x to access. Using obj.B::x or obj.C::x removes the ambiguity.

// 🎯 Ab Interview Twist (Most Asked)

// Code dekho:

#include<iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A ";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B ";
    }
};

class C : public A
{
public:
    C()
    {
        cout << "C ";
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D ";
    }
};

int main()
{
    D obj;
}
// Questions
// Will it compile?
// What will be the output?
// How many times will constructor A() execute?
// Why?

// ⚠️ No hints.

// Ye Diamond Problem ka last question hai. Iske baad hum Virtual Inheritance start karenge, jo is problem ka official solution hai.