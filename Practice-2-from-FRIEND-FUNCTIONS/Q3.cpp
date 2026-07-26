// 💻 Friend Function - Coding Question 3

// This one is slightly more interview-oriented.

// Question

// Create two classes:

// ClassA
// Private data member: a
// ClassB
// Private data member: b

// Requirements:

// Create constructors to initialize both values.
// Create one friend function named add.
// The add function should access the private members of both classes and print their sum.
// Rules
// ❌ No getter functions.
// ❌ No public data members.
// ✅ Use only one friend function.


#include<iostream>
using namespace std;

// Forward declaration: Perfect. Ye isliye zaroori hai kyunki friend int add(A, B); likhte waqt compiler ko dono classes ke names pata hone chahiye.
class A;
class B;

class A{
    int a;
public:
    A(int a):a(a){

    }

    friend int add(A,B);
};


class B{
    int b;
public:
    B(int b): b(b){

    }

    friend int add(A,B);
};

int add(A x,B y){
    return x.a+y.b;
}

int main(){
    A a1(3);
    B b1(5);

    cout<<"The Sum: "<<add(a1,b1)<<endl;
}



// 💡 Interview Improvement

// Ek chhota optimization.

// Abhi tum object by value pass kar rahe ho:

// int add(A x, B y)

// Interview me agar objects bade ho sakte hain, to const reference better hota hai:

// int add(const A& x, const B& y)
// {
//     return x.a + y.b;
// }
// Kyu?
// Object copy nahi hota.
// Performance better hoti hai.
// Read-only access milta hai.

// Interview me agar ye point bata diya, to bonus impression padta hai.

// 🎤 Interview Question
// friend int add(A, B);

// Question:

// Can a friend function be inherited?
// The correct answer is:

// No. Friend functions are not inherited.

// Why?

// Friendship is not inherited, not transitive, and not mutual.

// Suppose:

// class A
// {
//     friend void fun();
// };

// class B : public A
// {
// };

// Even though B inherits from A, fun() does not automatically become a friend of B.

// If fun() should access B's private members, then B must also explicitly declare:

// friend void fun();
// 🎯 Interview Rule (Very Important)

// Remember these three lines:

// 1. Friendship is not inherited ❌

// If fun() is a friend of A, it is not automatically a friend of B.

// 2. Friendship is not transitive ❌

// If:

// A is friend of B
// B is friend of C

// It does not mean A is friend of C.

// 3. Friendship is not mutual ❌

// If:

// A is friend of B

// It does not mean B is friend of A.