// 💻 Practice 36 ⭐⭐⭐⭐⭐ (Placement)

// Ab dekhte hain tumne concept samjha ya nahi.

#include<iostream>
using namespace std;

class Teacher
{
public:
    void work()
    {
        cout << "Teaching";
    }
};

class Programmer
{
public:
    void work()
    {
        cout << "Coding";
    }
};

class Trainer : public Teacher, public Programmer
{
};

int main()
{
    Trainer t1;

    // Print both outputs
    t1.Teacher::work();
    cout<<endl;
    t1.Programmer::work();
}
// Task

// Print:

// Teaching
// Coding
// Without modifying any class.


// ⭐ Golden Rule

// Jab bhi multiple inheritance me same name ka function ya variable ho:

// Parent 1  → show()

// Parent 2  → show()

//         ↓

// Child

// Aur tum likho:

// obj.show();

// ❌ Ambiguity Error

// Compiler confuse ho jata hai.

// Solution
// obj.Parent1::show();

// Ya

// obj.Parent2::show();
// 🎯 Placement Interview Ready Definition

// Ambiguity occurs in multiple inheritance when two or more base classes contain members with the same name. The compiler cannot decide which member to access. We resolve it using the scope resolution operator (::).

// ⚠️ Ye definition yaad kar lo. Ye direct interview question hai.