// 😈 Practice 10 (🟡 Medium)

// Type: Output Prediction

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

class B : public A
{
public:
    B()
    {
        cout << "B ";
    }
};

int main()
{
    B obj;
}
// Questions
// What will be the output?
// Why?

// ⚠️ No hints. This is pure interview-style output prediction.


// Q1. Output

// Your Answer:

// A B

// ✅ Correct

// Q2. Why?

// Tumne likha:

// because b object first inherit the base class constructor and call them then call itself constructor

// ✅ Concept bilkul sahi hai.

// Bas wording thodi improve karni hai.

// 🎤 Placement Ready Answer

// When a B object is created, the base class constructor (A) is executed first because the derived class depends on the base class. After the base class is fully initialized, the derived class constructor (B) is executed.

// ⭐ Ek Chhoti Correction

// Tumne likha:

// b object first inherit the base class constructor

// Ye technically correct wording nahi hai.

// Inheritance constructor ki nahi hoti.

// Yaad hai humne pehle bhi padha tha:

// Constructors are NOT inherited.

// Sahi sentence hoga:

// When a B object is created, the base class constructor is called first, then the derived class constructor.



// 🧠 Interview Trap

// Agar interviewer poochhe:

// Does class B inherit the constructor of class A?

// Answer?

// 👉 No.

// Constructors inherit nahi hote, call hote hain.

// Ye bahut common interview trap hai.