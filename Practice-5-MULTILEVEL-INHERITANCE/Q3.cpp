// Placement Trap (⭐⭐⭐⭐⭐)

// Ab interviewer twist dega.

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

class C : public B
{
public:
    C()
    {
        cout << "C ";
    }
};

int main()
{
    B obj1;
    C obj2;
}
// Questions
// Will it compile?
// What is the output?
// Explain why A is printed twice.

// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// A B A B C

// ✅ Correct.

// Q3. Why is A printed twice?

// Ye sabse important part tha.

// 🎤 Placement Ready Answer

// obj1 and obj2 are two different objects. Each object has its own constructor chain. When obj1 (of class B) is created, A and then B constructors execute. When obj2 (of class C) is created, the constructor chain starts again from A, then B, and finally C. Therefore, A is printed twice.

// 🧠 Golden Rule

// Every object starts its own constructor chain from the top-most base class.

// Ye line interview me bol di to interviewer ko pata chal jayega ki concept clear hai.