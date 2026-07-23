// 🚀 Question 15 — Copy Constructor

// Write a C++ program that satisfies the following requirements:

// Create a class Student.
// Data members:
// name
// age
// Create a parameterized constructor.
// Create a copy constructor.
// Create a display() function.
// In main():
// Create Student s1("Kaif", 21);
// Create Student s2 = s1;
// Display both objects.
// Rules
// ❌ No user input.
// ❌ No hints.
// ❌ No internet/reference.
// ✅ Write the copy constructor yourself.

#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    public:
    Student(string n, int a){
        name=n;
        age=a;
    }

    Student(const Student &obj){
        name=obj.name;
        age=obj.age;
    }

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<endl;
    }
};

int main(){
    Student s1("Kaif Ansari",21);
    Student s2=s1;

    s1.display();
    s2.display();
}



// Student s2 = s1;
// Question:
// Ye kya karega?
// Isko s2 = s1; (assignment operator) mat samajhna.
// Ye actually object creation hai.
// Compiler sochta hai:
// Uske liye Copy Constructor call hota hai.
// "Mujhe ek naya object banana hai jo s1 jaisa ho."

// 10-Second Revision
// ✔️ Object ki photocopy banata hai.
// ✔️ Naya object banne par hi call hota hai.
// ✔️ Existing object ki values copy karta hai.
// ✔️ Syntax:
// Student(const Student &obj);

// Sabse Important Rule

// New Object + Existing Object = Copy Constructor

// Yaad rakhne ka formula:

// New Object  +  Existing Object
//            ↓
//      Copy Constructor



// Interview Questions
// Q1. Is code me constructor kitni baar call hoga?
// Student s1("Kaif",21);
// Student s2 = s1;

// Answer:

// Parameterized Constructor → 1
// Copy Constructor → 1

// Total constructors called = 2

// Q2. Agar Copy Constructor hata dein to?
// Student(const Student &obj)
// {
//     name = obj.name;
//     age = obj.age;
// }

// Answer:

// Program phir bhi chalega, kyunki compiler default copy constructor bana dega.

// Q3. Fir hum khud Copy Constructor kyun likhte hain?

// Answer:

// Jab class me dynamic memory (new, pointers, file handles, etc.) ho, tab compiler ka default copy constructor kaafi nahi hota. Tab hum apna copy constructor likhte hain.

// Abhi hum sirf concept samajh rahe hain. Dynamic memory wale examples hum baad me padhenge.