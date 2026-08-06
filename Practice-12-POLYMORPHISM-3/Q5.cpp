// Given
// A *ptr = new B();
// Q1. Pointer kis type ka hai?

// A*

// ✅ Correct.

// Q2. Object kis type ka hai?

// Tumne likha:

// B()

// ✅ Concept correct.

// Professional answer:

// Object type is B.

// Q3. Without virtual, kaunsa function call hoga?

// Tumne likha:

// A class ka

// ✅ Correct.

// Example:

// class A
// {
// public:
//     void show()
//     {
//         cout << "A";
//     }
// };

// class B : public A
// {
// public:
//     void show()
//     {
//         cout << "B";
//     }
// };

// A *ptr = new B();

// ptr->show();

// Output:

// A

// Kyuki without virtual pointer decides.

// Q4. With virtual, kaunsa function call hoga?

// Tumne iska answer nahi diya.

// 👉 Answer:

// B class ka function call hoga.

// Output:

// B

// Kyuki with virtual actual object decides.

// 🧠 Final Trick (100% Placement Ready)
// Without virtual
// A *ptr = new B();
// ptr->show();

// Compiler dekhta hai:

// Pointer = A*

// ↓

// Call A::show()

// Output:

// A
// With virtual
// A *ptr = new B();
// ptr->show();

// Runtime dekhta hai:

// Actual Object = B

// ↓

// Call B::show()

// Output:

// B
// ⭐ One-Line Memory Trick
// Without virtual  → Pointer decides.

// With virtual     → Object decides.

// 🚀 Ye line interview me kabhi mat bhoolna.



// kya ye jrurui hai ki base class ke function me virtual use kr skte hai

// 🔥 Bhai, ye bahut achha question hai. Aur interview me bhi poocha jata hai.

// Short Answer:

// Haan, zaruri hai.

// Agar tum Runtime Polymorphism chahte ho, to base class ke function ko virtual banana padega.

// Case 1: Without virtual
// class A
// {
// public:
//     void show()
//     {
//         cout << "A";
//     }
// };

// class B : public A
// {
// public:
//     void show()
//     {
//         cout << "B";
//     }
// };

// int main()
// {
//     A *ptr = new B();

//     ptr->show();
// }
// Output
// A

// Kyun?

// Pointer = A*
// Function virtual nahi hai.
// Pointer decide karega.
// Case 2: With virtual
// class A
// {
// public:
//     virtual void show()
//     {
//         cout << "A";
//     }
// };

// class B : public A
// {
// public:
//     void show()
//     {
//         cout << "B";
//     }
// };

// int main()
// {
//     A *ptr = new B();

//     ptr->show();
// }
// Output
// B

// Kyun?

// Pointer = A*
// Object = B
// Function virtual hai.
// Actual object decide karega.