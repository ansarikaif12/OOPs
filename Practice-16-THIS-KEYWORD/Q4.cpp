// 🎯 Placement Trap Question

// Ab thoda level badhate hain.

#include<iostream>
using namespace std;

class Student
{
public:
    int age;

    Student(int age)
    {
        this->age = age;
    }

    Student* getAddress()
    {
        return this;
    }
};

int main()
{
    Student s1(20);

    cout << s1.getAddress() << endl;
    cout << &s1 << endl;
}


// Code
// Student* getAddress()
// {
//     return this;
// }
// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// cout << s1.getAddress() << endl;
// cout << &s1 << endl;

// Output me same address print hoga.

// Example:

// 0x61ff08
// 0x61ff08

// (Actual address har baar alag ho sakta hai.)

// Kyun?

// Kyuki:

// this

// aur

// &s1

// dono same object (s1) ka address represent karte hain.

// Memory
//           +----------------+
// s1 -----> | age = 20       |
//           +----------------+

// &s1  --------┐
//              │
// this --------┘

// 👉 Dono ek hi object ko point kar rahe hain.

// Q3. this ka actual type?

// Options:

// A. Student

// B. Student*

// C. int*

// D. void*

// ✅ Answer: B. Student*

// Kyun?

// this ek pointer hai.

// Isliye:

// this

// ka type hota hai:

// Student*

// Isi wajah se hum likhte hain:

// this->age = age;

// Agar this pointer na hota, to -> operator use hi nahi kar sakte the.

// ⭐ Golden Rule
// this = Address of Current Object

// Aur uska type:

// ClassName*

// Example:

// class Student

// To:

// this

// ka type:

// Student*