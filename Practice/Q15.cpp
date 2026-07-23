// 🔥 Next Question (Very Important)

// Ab hum Parameterized Constructor start karte hain.

// Ye placement interviews ka favorite topic hai.

// Question 13

// Write a C++ program that satisfies the following requirements:

// Create a class named Student.
// Data members:
// name
// age
// Create a parameterized constructor that receives:
// name
// age
// Create a display() function.
// In main(), create an object by passing:
// "Kaif"
// 21
// Print the values using display().
// Expected Output
// Name: Kaif
// Age: 21
// Rules
// ❌ No default constructor.
// ❌ No user input.
// ❌ No hints.


#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int age;
    public:
    Student(string n, int a){
        name=n;
        age=a;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    Student s1("Kaif",21);
    s1.display();
    return 0;
}



// Interview Follow-up Questions
// Q1. Constructor aur Parameterized Constructor me difference?

// Answer:

// Default Constructor	Parameterized Constructor
// No parameters	One or more parameters
// Default values initialize karta hai	User-defined values initialize karta hai
// Q2.

// Ye line kya karti hai?

// Student s1("Kaif",21);

// Answer:

// Object s1 create hota hai.
// Parameterized constructor automatically call hota hai.
// "Kaif" name me aur 21 age me store ho jata hai.
// Q3.

// Kya ye valid hai?

// Student s1;

// Answer: ❌ No.

// Reason: Tumne sirf parameterized constructor banaya hai. Default constructor define nahi kiya.

// Compiler error aayega.

// Q4.

// Agar main likhu:

// Student s1("Kaif",21);
// Student s2("Aman",22);
// Student s3("Ali",20);

// Constructor kitni baar call hoga?

// Answer: 3 times (ek baar har object ke liye).