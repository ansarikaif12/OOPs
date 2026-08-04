// Aaj hum Diamond Problem start karte hain.

// ⚠️ Rule: Is topic ko ratna nahi hai. Iska logic samajhna hai.

// 🏆 Step 1: Diamond Problem kya hai?

// Sabse pehle diagram dekho.

//         Animal
//        /      \
//      Dog      Cat
//        \      /
//         Puppy

// Ya generic form:

//          A
//        /   \
//       B     C
//        \   /
//          D

// Yahi shape diamond jaisi dikhti hai, isliye naam Diamond Problem.

// 🧠 Ab dhyan se socho.
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

// Ab D ne inherit kiya:

// B se ✅
// C se ✅

// Lekin...

// B ke andar bhi A hai.

// Aur C ke andar bhi A hai.

// Matlab D ke paas kitni A class ki copies aa gayi?

//          A (x=10)
//        /         \
//       B           C
//        \         /
//         D

// Socho...

// 🎯 Placement Question 1
// D obj;
// obj ke andar A ki kitni copies hongi?
// One
// Two

// ❌ No hints.


// ✅ Correct Answer: Two

// Diagram dobara dekho.

//         A
//       /   \
//      B     C
//       \   /
//         D

// Inheritance ka flow:

// A
// │
// └──► B

// A
// │
// └──► C

// Ab D inherit karta hai:

// B ko
// C ko

// Matlab D ke andar aata hai:

// D
// ├── B
// │   └── A   (Copy 1)
// │
// └── C
//     └── A   (Copy 2)

// Isliye D ke andar A ki 2 copies hoti hain.

// Visualize It
// Memory of D Object

// +---------------------+
// | A (from B)          | ← x = 10
// +---------------------+
// | B                   |
// +---------------------+
// | A (from C)          | ← x = 10
// +---------------------+
// | C                   |
// +---------------------+
// | D                   |
// +---------------------+

// 👉 Isliye 2 alag A objects bante hain.

// 🎯 Ab Placement Trap
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

//     cout << obj.x;
// }
// Questions
// Will it compile?
// If not, why?

// ⚠️ No hints.



// Step 1
// class A
// {
// public:
//     int x = 10;
// };

// Ab A me sirf ek variable hai:

// A
// ┌──────┐
// │ x=10 │
// └──────┘
// Step 2
// class B : public A
// {
// };

// B ne A ko inherit kiya.

// Memory:

// B
// ┌──────┐
// │ x=10 │   ← A ka part
// ├──────┤
// │  B   │
// └──────┘
// Step 3
// class C : public A
// {
// };

// C ne bhi A ko inherit kiya.

// Memory:

// C
// ┌──────┐
// │ x=10 │   ← A ka part
// ├──────┤
// │  C   │
// └──────┘

// Dhyan do.

// Abhi tak 2 alag classes hain:

// B ke andar ek A
// C ke andar ek A

// Ye same A nahi hai.

// Step 4

// Ab aaya main point.

// class D : public B, public C
// {
// };

// Compiler kya karega?

// Wo bolega:

// "D ko B bhi chahiye aur C bhi chahiye."

// To memory me pehle poora B aayega.

// Aur B ke andar kya tha?

// A
// ↓
// B

// Phir compiler poora C rakhega.

// Aur C ke andar kya tha?

// A
// ↓
// C

// Isliye D ki memory kuch aisi banegi:

//                 D
//        ┌─────────────────┐
//        │  A (from B)     │
//        │  x = 10         │
//        ├─────────────────┤
//        │  B              │
//        ├─────────────────┤
//        │  A (from C)     │
//        │  x = 10         │
//        ├─────────────────┤
//        │  C              │
//        ├─────────────────┤
//        │  D              │
//        └─────────────────┘

// Notice:

// 🔴 A do baar aa gaya.

// Ab socho

// Agar tum likho:

// D obj;

// cout << obj.x;

// Compiler sochega:

// Kaunsa x print karu?

// A (from B) ka x ?

//         ya

// A (from C) ka x ?

// Uske paas 2 x hain.

// Isliye compiler confuse ho jata hai.

// Isi confusion ko Diamond Problem kehte hain.


// 🎯 Ab ek question (Sabse Important)

// Abhi sirf logic se answer do.

// class A
// {
// public:
//     int x = 10;
// };

// class B : public A {};
// class C : public A {};
// class D : public B, public C {};

// int main()
// {
//     D obj;
// }
// Ye line:
// obj.B::x

// Compile hogi ya nahi?

// Aur ye:

// obj.C::x

// Compile hogi ya nahi?

// Hint nahi dunga.

// Iska answer de diya to main tumhe 5 minute me Virtual Inheritance samjha dunga. Ye Diamond Problem ka actual solution hai.


// Ye dono compile honge.

// obj.B::x;   // ✅
// obj.C::x;   // ✅
// Why?

// Kyuki tum compiler ko clearly bata rahe ho:

// obj.B::x;

// Matlab:

// B ke through jo A aaya hai, uska x use karo.

// Aur

// obj.C::x;

// Matlab:

// C ke through jo A aaya hai, uska x use karo.

// Isliye compiler confuse nahi hota.