// Static Data Member - Object Counter

// ⭐⭐⭐⭐⭐ Ye placement ka favourite coding question hai.

// Problem

// Count karo ki kitne objects create hue.

// Code
#include<iostream>
using namespace std;

class Student
{
public:
    static int count;

    Student()
    {
        count++;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    cout << Student::count;
}


// Q1. Will it compile?

// ✅ Yes

// Q2. Output?
// 3
// Step by Step

// Initially:

// count = 0

// Object 1:

// Student s1;

// Constructor call:

// count = 1

// Object 2:

// Student s2;

// Constructor:

// count = 2

// Object 3:

// Student s3;

// Constructor:

// count = 3

// Finally:

// cout << Student::count;

// Output:

// 3
// Q3. count++ har object ki alag copy ko increment karta hai?

// ❌ Nahi.

// ✅ Same shared copy ko increment karta hai.

// Kyuki count static hai.

// Memory:

//         count = 3
//             ▲
//             │
//       ┌─────┼─────┐
//       │     │     │
//      s1    s2    s3

// Ek hi variable hai, sab usi ko use karte hain.

// Q4. Agar 100 objects bana dein?
// Student s1;
// Student s2;
// ...
// Student s100;

// Kitni copies?

// ✅ Sirf 1 copy.

// Value?

// 100
// 🎯 Placement Interview Question

// Interviewer:

// Why do we use static here? Why not normal variable?

// Placement Answer (Hindi)

// Agar count normal variable hota, to har object ke paas apna alag count hota aur har object me value 1 hi rehti. Hume total objects count karne hain, isliye count ko static banaya jata hai taaki sabhi objects ek hi shared variable ko use karein.

// 🧠 Interview Trap

// Agar count normal hota:

// class Student
// {
// public:
//     int count;

//     Student()
//     {
//         count++;
//     }
// };

// Har object ka count alag hota.

// s1.count = 1
// s2.count = 1
// s3.count = 1

// ❌ Total objects count nahi ho paate.