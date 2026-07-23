// 🚀 Next Topic: this Pointer (Placement Favorite)
// Question 18

// Write a C++ program that satisfies the following requirements:

// Create a class Student.
// Data members:
// id
// name
// Create a parameterized constructor whose parameter names are exactly the same as the data member names.
// Use the this pointer to initialize the data members.
// Create a display() function.
// In main(), create:
// Student s1(101, "Kaif");
// Print the details.
// Rules
// ❌ No user input.
// ❌ No hints.
// ✅ You must use this->.

// This is one of the most frequently asked beginner OOP interview questions. Send only your code, and I'll review it like an interviewer.


#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
public:
    Student(int id, string name){
        this->id=id;
        this->name=name;
    }

    void display(){
        cout<<id<<endl;
        cout<<name<<endl;
    }
};  

int main(){
    Student s1(101, "Kaif");
    s1.display();
    return 0;
}



// 🎯 Interview Questions
// Q1. this pointer kya hai?

// Answer (Placement Ready):

// this is a special pointer that points to the current object.

// Q2. this ki need kyun padti hai?

// Example:

// Student(int id)
// {
//     id = id;
// }

// Ye galat hai.

// Kyun?

// Yahan dono id constructor ke parameter ko refer karte hain.

// Isliye class ka member update hi nahi hota.

// Sahi Tarika
// Student(int id)
// {
//     this->id = id;
// }

// Yahan:

// this->id → Class ka data member
// id → Constructor ka parameter
// Memory Diagram
// Student s1(101, "Kaif");

//            this
//              │
//              ▼
//       +------------------+
//       | id   = 101       |
//       | name = "Kaif"    |
//       +------------------+

// Jab constructor chal raha hota hai, this usi object (s1) ko point karta hai.

// 🧠 Placement Trick

// Yaad rakhna:

// this->variable = variable;

// Left Side → Class Member

// Right Side → Function Parameter