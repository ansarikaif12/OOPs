// 💻 Practice 18 (🟡 Medium)

// Type: Predict Compile or Not

// #include <iostream>
// using namespace std;

// class Parent
// {
// public:
//     void show()
//     {
//         cout << "Parent" << endl;
//     }
// };

// class Child : public Parent
// {
// public:
//     void display()
//     {
//         cout << "Child" << endl;
//     }
// };

// int main()
// {
//     Parent p;
//     Child c;

//     p.show();
//     c.show();

//     p.display();
//     c.display();
// }
// Questions
// Will this code compile?
// If not, which line(s) give the error?
// Why?

// ⚠️ No hints.

// Is question me main dekhna chahta hoon ki tumhe object capability aur inheritance direction kitni clear hai. 💪

// phle parent ka constructor call hoga then parent ka again and child ka 
// then parent ka show chalega then c.show se child ka show chalega then p.display() error dega kyuki parent class me koi display function nhi hai to error dega

// 🔥 Very good! Lekin is baar ek interview trap tha, aur tum usme thoda fas gaye. 😄

// 📊 Score: 8.5/10
// Q1. Will it compile?

// Correct Answer: ❌ No

// Tumne indirectly sahi pakda.

// Q2. Error Line

// Tumne bola:

// p.display() error dega.

// ✅ Correct.

// Lekin ek aur line bhi dekhni thi.

// c.display();

// ❌ Ye line compile hi nahi hogi, kyunki compiler pehle hi p.display(); par error de dega aur compilation stop ho jayegi.

// Technically, first error is:

// p.display();
// Q3. Tumhari Sabse Badi Mistake

// Tumne likha:

// c.show se child ka show chalega

// ❌ Nahi.

// Dhyan se code dekho:

// class Child : public Parent
// {
// public:
//     void display()
//     {
//         cout << "Child";
//     }
// };

// Child class me show() function hai hi nahi.

// To:

// c.show();

// Actually call karega...

// 👉 Parent::show()

// Kyuki show() inherit hua hai.

// Dry Run
// Parent p;

// Constructor (agar hota) → Parent

// Child c;

// Constructor flow (agar hota):

// Parent
// ↓
// Child

// Function calls:

// p.show();

// ✅ Parent::show()

// c.show();

// ✅ Parent::show() (Inherited)

// p.display();

// ❌ Compile Error

// c.display();

// Ye line execute hi nahi hogi kyunki compilation fail ho chuki hai.


// 🧠 New Concept (Bahut Important)

// Aaj humne ek naya concept touch kiya hai:

// class Parent
// {
// public:
//     void show() {}
// };

// class Child : public Parent
// {
// public:
//     void show() {}
// };

// Yahan:

// c.show();

// Compiler:

// Pehle Child me show() dhoondhta hai. ✅ Mil gaya.
// Isliye Parent::show() ko use nahi karta.


// Is behavior ko hum baad me Function Overriding / Function Hiding ke naam se detail me padhenge. Abhi bas behavior samajhna kaafi hai.