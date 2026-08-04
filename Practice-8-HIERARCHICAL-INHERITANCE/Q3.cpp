// 1️⃣ Multilevel Inheritance

// Rule:

// One child becomes the parent of another child.

// Diagram:

// Person
//    │
// Employee
//    │
// Manager

// Ya

// A
// │
// B
// │
// C

// Yahan chain ban rahi hai.

// B inherits A
// C inherits B

// Isliye C indirectly A ko bhi inherit karta hai.

// Code
// class A
// {
// };

// class B : public A
// {
// };

// class C : public B
// {
// };
// Memory
// A
// ↓
// B
// ↓
// C

// Sirf ek path hai.

// 2️⃣ Hierarchical Inheritance

// Rule:

// One parent has multiple children.

// Diagram:

//         Animal
//        /      \
//      Dog      Cat

// Ya

//       A
//      / \
//     B   C

// Yahan chain nahi hai.

// Ek parent hai.

// Uske multiple children hain.

// Code
// class A
// {
// };

// class B : public A
// {
// };

// class C : public A
// {
// };
// Memory
//       A
//      / \
//     B   C

// Yahan B aur C ka aapas me koi relation nahi hai.

// Interview Trick

// Main tumse poochta hoon.

// Example 1
// A
// │
// B
// │
// C

// Ye kaunsa hai?

// 👉 Multilevel

// Example 2
//       A
//      / \
//     B   C

// Ye kaunsa hai?

// 👉 Hierarchical

// Sabse Easy Trick (Kabhi Nahi Bhoologe)
// Multilevel = Stairs 🪜
// A
// │
// B
// │
// C
// │
// D

// Ek ke baad ek.

// Jaise seedhi (stairs).

// Hierarchical = Tree 🌳
//       A
//     / | \
//    B  C  D

// Ek parent.

// Bahut saare children.

// Jaise tree ki branches.

// Placement Comparison
// Multilevel	Hierarchical
// Chain banti hai	Tree banta hai
// Child → Parent → Child	One Parent → Many Children
// A → B → C	A → B and A → C
// 3 levels	1 level, multiple branches
// 🎯 Ek Last Test

// Bas ye batao:

// class Animal
// {
// };

// class Mammal : public Animal
// {
// };

// class Dog : public Mammal
// {
// };

// Ye Multilevel hai ya Hierarchical?

// Aur why?

// Iska answer de do. Agar ye aa gaya, to guarantee hai ki ye confusion hamesha ke liye khatam ho jayega. 💪


// 💡 Ab ek trick batata hoon jo kabhi bhoologe nahi.
// Multilevel = Family Generation 👨‍👦‍👦
// Grandfather
//       │
//     Father
//       │
//      Son

// Jaise:

// Animal
//    │
// Mammal
//    │
//  Dog

// Har generation pichhli generation ko inherit kar rahi hai.

// Hierarchical = Ek Baap, Kai Bachche 👨‍👧‍👦
//         Father
//       /    |    \
//    Son1  Son2  Son3

// Jaise:

//       Animal
//       /    \
//     Dog    Cat

// Ek hi parent.

// Multiple children.

// Ab ye 4 examples solve karo (No hints)
// Q1
// A
// │
// B
// │
// C

// Type?

// Q2
//       A
//      / \
//     B   C

// Type?

// Q3
// Vehicle
//     │
//    Car
//     │
// ElectricCar

// Type?

// Q4
//         Vehicle
//        /       \
//      Car      Bike

// Type?

// 🎯 Agar ye 4 tum bina soche sahi bata doge, to Multilevel vs Hierarchical ka confusion hamesha ke liye khatam ho jayega. Ye placement me bahut common conceptual question hai.