// 😈 Practice 11 (🟟 Medium)

// Type: Find the Compile-Time Error

// #include<iostream>
// using namespace std;

// class Parent
// {
// public:
//     Parent(int x)
//     {
//         cout << x << endl;
//     }
// };

// class Child : public Parent
// {
// public:
//     Child()
//     {
//         cout << "Child" << endl;
//     }
// };

// int main()
// {
//     Child c;
// }
// Your Task
// Will this code compile?
// If not, why?
// Fix it.

// ❌ No hints.

// Ye interview me bahut baar poocha jata hai.

// 1. no
// 2. 

// 😄 Good. Tum ruk gaye, matlab soch rahe ho. Chalo interviewer ki tarah discuss karte hain.

// 📊 Q1

// Will it compile?

// ✅ No

// Correct.

// 📊 Q2

// Reason?

// Yahan yaad karo humne kya padha tha.

// class Parent
// {
// public:
//     Parent(int x)
//     {
//     }
// };

// Parent ke paas sirf parameterized constructor hai.

// Aur Child constructor:

// Child()
// {
// }

// Iske andar tumne Parent(int) ko call hi nahi kiya.

// Compiler kya karega?

// Wo automatically try karega:

// Parent();

// Lekin...

// ❌ Parent() exist hi nahi karta.

// Isliye compilation error.

// 🎤 Placement Ready Answer

// The code will not compile because the Parent class has only a parameterized constructor. The Child constructor does not explicitly call the Parent(int) constructor, so the compiler tries to call the default constructor Parent(), which does not exist.