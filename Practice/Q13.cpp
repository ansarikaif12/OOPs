// Question 11 (Constructor - Level 1)

// Write a C++ program that satisfies the following requirements:

// Create a class named Student.
// Data members:
// name
// age
// Create a default constructor.
// Inside the constructor:
// Assign "Unknown" to name.
// Assign 0 to age.
// Create a member function display() to print the values.
// In main(), create one object and call display().
// Expected Output
// Name: Unknown
// Age: 0
// Rules
// ❌ No input from user.
// ❌ No parameterized constructor.
// ❌ No hints.
// ✅ Use only a default constructor.


#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int age;

    public:
    Student(){
        name="Unknown";
        age=0;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};

int main(){
    Student s1;
    s1.display();
}




// Interview Questions (Very Important)
// Q1. Constructor kab call hota hai?

// Answer:

// Constructor automatically call hota hai jab object create hota hai.

// Example:

// Student s1;

// Is line par constructor call hoga.

// Q2. Kya constructor ko manually call kar sakte hain?

// Answer:

// ❌ No. Constructor automatically call hota hai. Hum normal member function ki tarah usse call nahi karte.

// Q3. Constructor ka return type hota hai?

// Answer:

// ❌ No. Constructor ka koi return type nahi hota, void bhi nahi.

// Galat:

// void Student() { }   // ❌
// int Student() { }    // ❌

// Sahi:

// Student() { }        // ✅
// Q4. Constructor ka naam kya hota hai?

// Answer:

// Constructor ka naam class ke naam ke exactly same hota hai.

// Placement Tip

// Ye 4 questions lagbhag har placement interview me pooche ja sakte hain jab constructor topic aata hai.