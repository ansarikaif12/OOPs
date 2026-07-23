// 🚀 Question 17 (Destructor - Level 2)

// Write a C++ program that satisfies the following requirements:

// Create a class Student.
// Constructor should print:
// Student Created
// Destructor should print:
// Student Destroyed
// In main():
// Create three objects:
// Student s1;
// Student s2;
// Student s3;
// Your task:

// Without running the code, predict the exact output order first, then write the code.

// 📌 Rule: No hints. This question tests whether you understand the order in which constructors and destructors are called.


#include<iostream>
using namespace std;

class Student{
    public:
    Student(){
        cout<<"Student Created"<<endl;
    }

    ~Student(){
        cout<<"Student Destroyed"<<endl;
    }
};

int main(){
    Student s1;
    Student s2;
    Student s3;
    return 0;
}




// 📌 Interview Trick (Bahut Important)

// Yaad rakhne ka formula:

// Constructor  → FIFO (First In, First Out)
// Destructor   → LIFO (Last In, First Out)

// Ya aur simple:

// Create → Top to Bottom

// Destroy → Bottom to Top


// 🧠 Interview Question

// Agar interviewer puche:

// Destructor reverse order me hi kyun call hota hai?

// Best Answer:

// Kyunki objects stack-like lifetime follow karte hain. Jo object sabse last create hota hai, uski lifetime sabse pehle khatam hoti hai, isliye destructors reverse order (LIFO) me call hote hain.

// 🎯 Interview Question (Very Common)

// Agar interviewer pooche:

// Q1. Constructor ko manually call kar sakte hain?

// Answer:

// ❌ Nahi. Wo object create hone par automatically call hota hai.

// Q2. Destructor ko manually call kar sakte hain?

// Answer:

// ✅ Technically haan, syntax hai:

// s1.~Student();

// Lekin normal programming me kabhi manually call nahi karte.

// Agar stack object ka destructor manually call kar diya aur baad me scope khatam hua, to destructor dobara automatically call hoga, jo undefined behavior ka reason ban sakta hai.

// Interview me safe answer ye hai:

// "Destructor automatically call hota hai. Manually call karna possible hai, lekin normal code me avoid kiya jata hai."