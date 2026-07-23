// 🚀 Question 16 — Destructor (Level 1)

// Write a C++ program that satisfies the following requirements:

// Create a class named Student.
// Create a default constructor that prints:
// Constructor Called
// Create a destructor that prints:
// Destructor Called
// In main():
// Create one object of the Student class.
// Do nothing else.
// Expected Output
// Constructor Called
// Destructor Called
// Rules
// ❌ No user input.
// ❌ No parameterized constructor.
// ❌ No hints.
// ❌ No extra print statements.


#include<iostream>
using namespace std;

class Student{
    public:
    Student(){
        cout<<"Constuctor Callled"<<endl;
    }

    ~Student(){
        cout<<"Destructor Called"<<endl;
    }
};

int main(){
    Student s1;
    return 0;
}




// Interview Questions
// Q1. Destructor kab call hota hai?

// Answer:

// Jab object destroy hota hai (generally scope khatam hone ya program end hone par), destructor automatically call hota hai.

// Q2. Destructor ka return type hota hai?

// Answer:

// ❌ No.

// Jaise constructor ka return type nahi hota, waise hi destructor ka bhi nahi hota.

// Q3. Kya destructor overloading ho sakti hai?

// Answer:

// ❌ No.

// Ek class me sirf ek destructor ho sakta hai.

// Q4. Constructor aur Destructor me difference?
// Constructor	Destructor
// Object banne par call hota hai	Object destroy hone par call hota hai
// Same name as class	~ + class name
// Multiple ho sakte hain (overloading)	Sirf ek hota hai
// 📌 One-Line Memory Trick
// Constructor → Object banata hai.
// Copy Constructor → Object ki copy banata hai.
// Destructor → Object ko clean up karta hai jab uska kaam khatam ho jata hai.