// Ab constructor order in Multiple Inheritance.

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

class B
{
public:
    B()
    {
        cout << "B ";
    }
};

class C : public A, public B
{
public:
    C()
    {
        cout << "C ";
    }
};

int main()
{
    C obj;
}
// Questions
// Will it compile?
// What is the output?
// Why does A execute before B?

// ⚠️ Question 3 is the important one.

// Q1.

// Will it compile?

// Yes

// ✅ Correct.

// Q2.

// Output?

// A B C

// ✅ Correct.

// Q3.

// Tumne likha:

// because constructor always call from top to bottom

// ⚠️ Ye partially correct hai, lekin interview me ye answer incomplete mana jayega.

// Interviewer turant poochega:

// "Why is A at the top?"

// Yahin candidates atak jaate hain.

// 🎤 Placement Ready Answer

// Code:

// class C : public A, public B
// {
// };

// Notice:

// public A, public B

// 👉 Constructor order is decided by the order of base classes in the inheritance list, not by the order written in the constructor body.

// Isliye:

// class C : public A, public B

// Output:

// A
// B
// C
// 🎯 Interview Trap

// Agar main sirf itna change kar doon:

// class C : public B, public A
// {
// };

// Ab output kya hoga?

// ?

// Bas output batao.

// Ab tumne actual rule samajh liya.

// Output
// class C : public B, public A
// {
// };

// Output:

// B
// A
// C

// ✅ Correct.

// ⭐ Golden Rule (Interview Rule)

// Constructor order kabhi bhi constructor body se decide nahi hota.

// Ye hamesha decide hota hai:

// class Child : public Parent1, public Parent2

// Rule:

// Base class constructors execute in the same order in which the base classes are inherited.

// Examples:

// Case 1
// class C : public A, public B

// Output:

// A
// B
// C
// Case 2
// class C : public B, public A

// Output:

// B
// A
// C
// 🎤 Placement Interview Trick

// Interviewer kabhi-kabhi ye trap deta hai:

// class C : public A, public B
// {
// public:
//     C() : B(), A()
//     {
//     }
// };

// Aur poochta hai:

// Output?

// Bahut log bolte hain:

// B
// A
// C

// ❌ Wrong.

// Output phir bhi:

// A
// B
// C
// Why?

// Because constructor initializer list order does NOT control base constructor execution order.

// Ye control hota hai:

// class C : public A, public B

// Is order se.