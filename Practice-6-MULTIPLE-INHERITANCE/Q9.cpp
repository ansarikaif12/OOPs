// 💻 Practice 39 ⭐⭐⭐⭐⭐ (Placement)

// Complete this code:

// #include<iostream>
// using namespace std;

// class A
// {
// public:
//     void show()
//     {
//         cout << "A";
//     }
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

//     // Call show()
// }
// Questions
// Will obj.show(); compile?
// Why?
// Why is there no ambiguity this time?

// 🎯 Ye Diamond Problem ka final interview question hai. Agar ye answer aa gaya, to Diamond Problem complete. 💪


// Correct Answer
// Q1.
// obj.show();

// ✅ Yes, it will compile.

// Why?

// Dekho:

// class B : virtual public A
// {
// };

// class C : virtual public A
// {
// };

// Yahan virtual ka matlab hai:

// B aur C, dono A ki alag-alag copy nahi banayenge. Dono ek hi shared A use karenge.

// Memory:

//           A (Only One Copy)
//          /                \
//         B                  C
//          \                /
//                D

// Ab D ke andar sirf ek hi A hai.

// To jab compiler dekhta hai:

// obj.show();

// Wo bolta hai:

// "Mere paas show() ka sirf ek hi version hai."

// Isliye:

// ✅ No ambiguity

// Output
// A
// 🤔 Compare Karo
// Without virtual
// class B : public A {};
// class C : public A {};

// Memory:

// A
// ↓
// B

// A
// ↓
// C

// ↓
// D

// ❌ 2 copies of A

// With virtual
// class B : virtual public A {};
// class C : virtual public A {};

// Memory:

//         A
//       /   \
//      B     C
//       \   /
//         D

// Internally:

// One shared A

// ✅ 1 copy of A

// 🎯 Interview Question

// Main tumse poochunga:

// Diamond Problem me ambiguity kis wajah se aati hai?

// Expected answer:

// Because the derived class gets two copies of the common base class, making it ambiguous which base class member should be accessed. Virtual inheritance solves this by creating only one shared copy of the common base class.

// 📌 Honest Feedback

// Yahan tum galat hue kyunki tumne virtual keyword ka effect apply nahi kiya.

// Yaad rakho:

// Without virtual
// ❌ Two copies of A
// ❌ Ambiguity

// With virtual
// ✅ One copy of A
// ✅ No ambiguity

// Ye golden rule hai.