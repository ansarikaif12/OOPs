// 🚀 Next Session: Virtual Inheritance

// Ab problem clear hai.

// Ab hum solution padhenge.

// Us topic me sirf ek keyword add hoga:

// virtual

// Aur tum dekhoge:

// A constructor ek hi baar chalega.
// obj.x me ambiguity khatam.
// obj.show() directly chalega.

// Yahi reason hai ki C++ me virtual inheritance introduce ki gayi.


// Perfect. 😈 Ab tum Diamond Problem samajh chuke ho.

// Ab hum Virtual Inheritance padhte hain.

// Goal: Diamond Problem ko solve karna.


// Virtual Inheritance
// Step 1 - Purana Code
// class A
// {
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

// Diagram:

//         A
//       /   \
//      B     C
//       \   /
//         D

// Problem:

// ❌ 2 copies of A
// ❌ Ambiguity
// ❌ A constructor executes twice
// ❌ Memory waste
// Step 2 - C++ Solution

// C++ ne sirf ek keyword introduce kiya.

// class B : virtual public A
// {
// };

// class C : virtual public A
// {
// };

// Bas itna change.

// Step 3 - Diagram

// Without virtual:

//         A
//       /   \
//      B     C
//       \   /
//         D

// Memory:

// A
// B
// A
// C
// D

// With virtual:

//         A
//       /   \
//      B     C
//       \   /
//         D

// Memory:

//         A
//       /   \
//      B     C
//       \   /
//         D

// Internally:

//           A
//          / \
//         B   C
//          \ /
//           D

// Only ONE copy of A
// 🎯 Golden Rule

// Virtual inheritance ensures that only one shared copy of the common base class exists.

// Ye line interview me direct bol sakte ho.

// Step 4 - Coding
// #include<iostream>
// using namespace std;

// class A
// {
// public:
//     int x = 10;
// };

// class B : virtual public A
// {
// };

// class C : virtual public A
// {
// };

// class D : public B, public C
// {
// };

// int main()
// {
//     D obj;

//     cout << obj.x;
// }
// Interview Question
// Will it compile?

// 👉 Yes.

// Output?
// 10
// Why?

// Kyuki ab D ke andar A ki sirf ek copy hai.

// Compiler confuse hi nahi hota.

// Constructor Example
// class A
// {
// public:
//     A()
//     {
//         cout << "A ";
//     }
// };

// class B : virtual public A
// {
// public:
//     B()
//     {
//         cout << "B ";
//     }
// };

// class C : virtual public A
// {
// public:
//     C()
//     {
//         cout << "C ";
//     }
// };

// class D : public B, public C
// {
// public:
//     D()
//     {
//         cout << "D ";
//     }
// };

// int main()
// {
//     D obj;
// }
// 🎯 Placement Question
// Output?
// A B C D

// ⚠️ Notice carefully.

// Earlier (without virtual):

// A B A C D

// Now (with virtual):

// A B C D
// Why?

// Because A is constructed only once.

// 📌 Interview Definition

// Q: Why do we use virtual inheritance?

// Best Answer:

// Virtual inheritance is used to solve the Diamond Problem. It prevents multiple copies of the common base class by creating only one shared copy, eliminating ambiguity and reducing memory usage.

// 🧠 Difference (Must Remember)
// Without virtual	With virtual
// 2 copies of base class	1 shared copy
// Ambiguity	No ambiguity
// Base constructor executes twice	Base constructor executes once
// Memory duplication	No duplication
